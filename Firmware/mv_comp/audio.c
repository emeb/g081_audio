/*
 * audio.c - G081 audio processing
 * 10-10-2021 E. Brombaugh
 */

#include "audio.h"
#include "adc.h"
#include "mv_progs.h"
#include "string.h"

volatile int16_t audio_buffer[BUFSZ];
int32_t dcb[2];
uint16_t sl[4];
uint8_t next_prog_num, prog_num, mute_state;
int16_t mute, mem_clr;

/*
 * init audio handler
 */
void Audio_Init(void)
{
	/* init vars */
	next_prog_num = prog_num = 0;
	mute_state = 0;
	mute = 0xfff;
	dcb[0] = dcb[1] = 0;
}

/*
 * change audio program
 */
void Audio_SetProg(int8_t prog)
{
	prog = prog > MAX_PROG ? MAX_PROG : prog;
	next_prog_num = prog;
	mute_state = 1;
}

/*
 * get current audio program
 */
uint8_t Audio_GetProg(void)
{
	return prog_num;
}

/*
 * buffer math:
 * SMPS = 64
 * CHLS = 2
 * BUFSZ = SMPS*CHLS = 128
 * ADC_BUFSZ = 2*BUFSZ = 256
 * length(adc inbuf) = BUFSZ/2 = 64
 * length(src) = length(adc inbuf) = 64
 * i iterations = (BUFSZ/2)/2 = 32
 * src increments = i iterations * 2 = 64
 */

/*
 * signal level calc
 */
void level_calc(int16_t sig, uint16_t *level)
{
	uint16_t rect;

	/* rectify */
	rect = (sig < 0) ? -sig : sig;

	/* peak hold - externally reset */
	if(*level < rect)
		*level = rect;
}

/*
 * handle new buffer of ADC data
 */
void Audio_Proc(volatile int16_t *dst, volatile int16_t *src)
{
	uint16_t i, chl;
	int16_t in[2], out[2], sum, wet, wetmute, dry;
	int32_t sat, mix;
	
	/* init wet/dry coefs */
	wet = cvbuf[1];
	dry = wet ^ 0xfff;
	
	/* process ADC to audio input with shift & convert to signed */
	for(i=0;i<BUFSZ/2;i+=2)
	{
		/* muting */
		switch(mute_state)
		{
			default:
			case 0:
				/* disabled */
				wetmute = wet;
				break;
			
			case 1:
				/* ramping down */
				mute -= 8;
				mix = (wet*mute)>>12;
				wetmute = mix;
				if(mute <= 0)
				{
					prog_num = next_prog_num;
					mute = 0;
					mem_clr = 0;
					mute_state = 2;
				}
				break;
			
			case 2:
				/* delay & clear buffer memory */
				wetmute = 0;
#define CLR_INC 64
				memset(&mem[mem_clr], 0, CLR_INC*sizeof(int16_t));
				mem_clr += CLR_INC;
				if(mem_clr >= 16384)
				{
					mute_state = 3;
				}
				break;
				
			case 3:
				/* ramping back up */
				mute += 8;
				mix = (wet*mute)>>12;
				wetmute = mix;
				if(mute >= 0xfff)
				{
					mute = 0xfff;
					mute_state = 0;
				}
				break;
		}
		
		/* load inputs and DC block */
		for(chl=0;chl<2;chl++)
		{
			sat = *src++ - (dcb[chl]>>11);
			sat = sat > 32767 ? 32767 : sat;
			sat = sat < -32768 ? -32768 : sat;
			dcb[chl] += sat;
			in[chl] = sat;
			level_calc(in[chl], &sl[chl]);
		}
		
		if(mute_state != 2)
		{
			/* mix down to mono, mute and scale for input */
			mix = (((in[0]>>4)+(in[1]>>4)) * mute) >> 12;
			sum = mix & 0xfffe;
			
			/* process thru midiverb emulator */
			(*mv_progs[prog_num])(sum, &out[0], &out[1]);
		}
		
		/* unscale and saturate */
		for(chl=0;chl<2;chl++)
		{
			/* W/D mix */
			mix = ((int32_t)out[chl]<<3) * wetmute;
			sat = (in[chl]*dry + mix)>>12;
			sat = sat > 32767 ? 32767 : sat;
			sat = sat < -32768 ? -32768 : sat;
			level_calc(sat, &sl[chl+2]);
			
			/* output to DAC */
			*dst++ = sat;
		}
	}
}

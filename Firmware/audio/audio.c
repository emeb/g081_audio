/*
 * audio.c - G081 audio processing
 * 10-10-2021 E. Brombaugh
 */

#include "audio.h"
#include "adc.h"
#include <string.h>

volatile int16_t audio_buffer[BUFSZ];
int32_t dcb[2];
uint16_t sl[2];

/*
 * init audio handler
 */
void Audio_Init(void)
{
	/* init vars */
	dcb[0] = dcb[1] = 0;
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

	/* leaky peak-hold */
	if(*level > rect)
	{
		uint16_t leak = *level >> 10;
		leak = leak == 0 ? 1 : leak;
		*level -= leak;
	}
	else
		*level = rect;
}

/*
 * handle new buffer of ADC data
 */
void Audio_Proc(volatile int16_t *dst, volatile int16_t *src)
{
	uint16_t i, chl;
	int16_t in[2], out[2] = {0}, wet, dry;
	int32_t sat, mix;
	
	/* freq */
	
	
	/* init wet/dry coefs */
	wet = cvbuf[1];
	dry = wet ^ 0xfff;
	
	/* process ADC to audio input with shift & convert to signed */
	for(i=0;i<BUFSZ/2;i+=2)
	{
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
				
		/* unscale and saturate */
		for(chl=0;chl<2;chl++)
		{			
			/* W/D mix */
			mix = (in[chl]*dry + out[chl]*wet)>>12;
			
			/* output to DAC */
			*dst++ = mix;
			//*dst++ = 0;
		}
	}
}

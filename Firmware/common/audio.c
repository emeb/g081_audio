/*
 * audio.c - G081 audio processing
 * 10-10-2021 E. Brombaugh
 */

#include "audio.h"
#include "adc.h"

int16_t audio_buffer[BUFSZ];

/* the array of individual programs */
extern void (*mv_progs[63])(int16_t, int16_t *, int16_t *);

/*
 * init audio handler
 */
void Audio_Init(void)
{
	uint16_t i;
	
	/* load something into the buffer */
    for(i=0;i<BUFSZ;i+=2)
    {
        uint16_t temp = (65536/BUFSZ)*i;
        
        audio_buffer[i] = temp;
        audio_buffer[i+1] = ~temp;
    }	
}

/*
 * buffer math:
 * SMPS = 64
 * CHLS = 2
 * BUFSZ = SMPS*CHLS = 128
 * ADC_BUFSZ = 2*BUFSZ = 256
 * length(adc inbuf) = BUFSZ/2 = 64
 * length(src) = length(adc inbuf) = 64
 * i iterations = BUFSZ/2 = 64
 * src increments = i iterations = 64
 */

/*
 * handle new buffer of ADC data
 */
void Audio_Proc(volatile int16_t *dst, volatile int16_t *src)
{
	uint16_t i;
	
	/* process ADC to audio input with shift & convert to signed */
	for(i=0;i<BUFSZ/2;i++)
	{
		/* bypass */
		*dst++ = *src++;
	}
}

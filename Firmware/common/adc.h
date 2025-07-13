/*
 * adc.c - L432 Colorscope ADC setup for audio
 * 09-22-2021 E. Brombaugh
 */

#ifndef __adc__
#define __adc__

#include "main.h"
#include "audio.h"

#define ADC_BUFSZ (2*BUFSZ)
#define NUM_CV 2

extern volatile uint16_t cvbuf[NUM_CV];

void ADCInit(void);

#endif

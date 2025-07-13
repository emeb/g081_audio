/*
 * dac.c - dac setup for L432 Colorscope
 * 22-09-2021 E. Brombaugh
 */

#ifndef __dac__
#define __dac__

#include "main.h"

#define DAC_BUFSZ SMPS

extern uint32_t dac1_buffer[DAC_BUFSZ];

void dac_init(void);
void dac_start(void);

#endif

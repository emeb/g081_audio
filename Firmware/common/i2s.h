/*
 * i2s.c - spi-i2s driver for G071 Audio
 * 09-25-21 E. Brombugh
 */

#ifndef __i2s__
#define __i2s__

#include "main.h"
#include "audio.h"

#define I2S_BUFSZ (SMPS*CHLS)

extern volatile int16_t i2s_buffer[I2S_BUFSZ];

void i2s_init(void);
void i2s_start(void);

#endif



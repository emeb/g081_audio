/*
 * audio.h - G081 audio processing
 * 10-10-2021 E. Brombaugh
 */

#ifndef __audio__
#define __audio__

#include "main.h"

#define SMPS 64
#define CHLS 2
#define BUFSZ (SMPS*CHLS)

extern int16_t audio_buffer[BUFSZ];

void Audio_Init(void);
void Audio_Proc(volatile int16_t *dst, volatile int16_t *src);

#endif


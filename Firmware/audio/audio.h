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

extern volatile int16_t audio_buffer[BUFSZ];
extern int32_t dcb[2];
extern uint16_t sl[2];

void Audio_Init(void);
void Audio_SetProg(int8_t prog);
uint8_t Audio_GetProg(void);
void Audio_Proc(volatile int16_t *dst, volatile int16_t *src);

#endif


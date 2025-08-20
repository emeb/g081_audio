/*
 * mv_progs.h - Midiverb programs
 * 10-10-2021 E. Brombaugh
 */

#ifndef __mv_progs__
#define __mv_progs__

#define MAX_PROG 62

/* the array of individual programs */
extern void (*mv_progs[63])(int16_t, int16_t *, int16_t *);

/* buffer memory */
extern int16_t mem[16384];

#endif


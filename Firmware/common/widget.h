/*
 * widget.h - various graphic things
 * 10-14-2021 E. Brombaugh
 */

#ifndef __widget__
#define __widget__

#include "main.h"

void bargraphV(uint8_t pg, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t v);
void bargraphH(uint8_t pg, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t v);
void level_indicator(uint8_t pg, uint8_t x, uint8_t y, uint16_t level);

#endif
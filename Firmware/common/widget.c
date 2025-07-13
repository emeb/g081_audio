/*
 * widget.c - various graphic things
 * 10-14-2021 E. Brombaugh
 */

#include "widget.h"
#include "oled.h"

/*
 * Vertical bargraph
 */
void bargraphV(uint8_t pg, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t v)
{
	uint16_t max = (h-2);
	uint16_t b = (max*v)/100;
	oled_Box(pg, x, y, w, h, 1);
	oled_drawrect(pg, x+1, y+1+(max-b), w-2, b, 1);
	if(max-b)
		oled_drawrect(pg, x+1, y+1, w-2, max-b, 0);
}

/*
 * Horizontal bargraph
 */
void bargraphH(uint8_t pg, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t v)
{
	uint16_t max = w-2;
	uint16_t b = (max*v)/100;
	oled_Box(pg, x, y, w, h, 1);
	oled_drawrect(pg, x+1, y+1, b, h-2, 1);
	if(max-b)
		oled_drawrect(pg, x+1+b, y+1, max-b, h-2, 0);
}

/*
 * 1 char level indicator
 */
void level_indicator(uint8_t pg, uint8_t x, uint8_t y, uint16_t level)
{
	char c = ' ';
	
	if(level > 28200)
		c = 0xdb;	// 100% white
	else if(level > 512)
		c = 0xb0;	// 25% gray

	oled_drawchar(pg, x, y, c, 1);
	oled_Box(pg, x, y, 8, 8, 1);
}

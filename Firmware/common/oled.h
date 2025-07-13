/*
 * oled.h - SSD1306 I2C OLED driver for STM32F405 Feather
 * 10-27-2020 E. Brombaugh
 */

#ifndef __oled__
#define __oled__

#include "main.h"

#define TINY_OLED
#ifdef TINY_OLED
#define OLED_W 64
#define OLED_H 32
#else
#define OLED_W 128
#define OLED_H 32
#endif

#define OLED_BUFSZ ((OLED_W/8)*OLED_H)
#define OLED_MAXBUFS 1

/* sliding transition directions */
enum oled_dirs
{
	OLED_LEFT,
	OLED_RIGHT,
	OLED_UP,
	OLED_DOWN
};

uint8_t oled_init(void);
uint8_t *oled_get_fb(uint8_t buf_num);
void oled_cpy_buf(uint8_t dst_num, uint8_t src_num);
void oled_refresh(uint8_t buf_num);
void oled_clear(uint8_t buf_num, uint8_t color);
void oled_drawPixel(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t color);
void oled_xorPixel(uint8_t buf_num, uint8_t x, uint8_t y);
uint8_t oled_getPixel(uint8_t buf_num, uint8_t x, uint8_t y);
void oled_blit(uint8_t src_num, uint8_t src_x, uint8_t src_y, uint8_t w, uint8_t h,
			   uint8_t dst_num, uint8_t dst_x, uint8_t dst_y);
void oled_slide(uint8_t src0_num, uint8_t src1_num, uint8_t dst_num, uint8_t dir);
void oled_drawFastVLine(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t h, uint8_t color);
void oled_drawFastHLine(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t w, uint8_t color);
void oled_line(uint8_t buf_num, uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t color);
void oled_Circle(int8_t buf_num, int16_t x, int16_t y, int16_t radius, int8_t color);
void oled_FilledCircle(int8_t buf_num, int16_t x, int16_t y, int16_t radius, int8_t color);
void oled_Box(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t color);
void oled_drawrect(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t color);
void oled_xorrect(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t w, uint8_t h);
void oled_drawchar(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t chr, uint8_t color);
void oled_drawstr(uint8_t buf_num, uint8_t x, uint8_t y, char *str, uint8_t color);
void oled_drawbitfont(uint8_t buf_num, uint8_t x, uint8_t y, char *str, uint8_t color);
void oled_gray_slice(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t *bmp, uint8_t t);
void oled_gray_fs(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t *bmp);
void oled_draw_7seg_num(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t num, uint8_t color);
void oled_draw_7seg(uint8_t buf_num, uint8_t x, uint8_t y, int32_t num, uint8_t color);
void oled_draw_7seg_2dRJ(uint8_t buf_num, uint8_t x, uint8_t y, uint8_t num, uint8_t color);

#endif

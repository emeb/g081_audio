/*
 * led.c - g431 nucleo LED setup
 */

#ifndef __led__
#define __led__

#include "stm32g0xx_hal.h"

#define LED_GREEN_Pin GPIO_PIN_5
#define LED_GREEN_GPIO_Port GPIOA

void LEDInit(void);
void LEDOn(void);
void LEDOff(void);
void LEDToggle(void);

#endif

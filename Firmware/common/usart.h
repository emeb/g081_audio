/*
 * usart.c - usart diag support for g081_audio
 * 10-10-2021 E. Brombaugh
 */

#ifndef __usart__
#define __usart__

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32g0xx_hal.h"

#define USART2_TX_Pin GPIO_PIN_2
#define USART2_TX_GPIO_Port GPIOA
#define USART2_RX_Pin GPIO_PIN_3
#define USART2_RX_GPIO_Port GPIOA

void setup_usart(void);
void usart_putc(void* p, char c);

#ifdef __cplusplus
}
#endif

#endif

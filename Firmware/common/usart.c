/*
 * usart.c - usart diag support for g081_audio
 * 10-10-2021 E. Brombaugh
 */

#include "usart.h"

UART_HandleTypeDef huart1;

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
static void Error_Handler(void)
{
  /* Hang forever */
  while(1)
  {
  }
}

/* USART setup */
void setup_usart(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	/* Setup USART GPIO */
    __HAL_RCC_GPIOB_CLK_ENABLE();

	/* Configure USART Tx as alternate function push-pull */
    /**USART1 GPIO Configuration
    PB6     ------> USART1_TX
    PB7     ------> USART1_RX
    */
    GPIO_InitStruct.Pin = GPIO_PIN_6;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF0_USART1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	/* Configure USART Rx as alternate function push-pull */
	//GPIO_InitStructure.Pin = GPIO_PIN_7;
	//GPIO_InitStructure.Pull = GPIO_PULLUP;
	//HAL_GPIO_Init(GPIOA, &GPIO_InitStructure);

	/* Setup USART */
    __HAL_RCC_USART1_CLK_ENABLE();

#if 1
	/* USART = 115k-8-N-1 */
	huart1.Instance = USART1;
	huart1.Init.BaudRate = 115200;
	huart1.Init.WordLength = UART_WORDLENGTH_8B;
	huart1.Init.StopBits = UART_STOPBITS_1;
	huart1.Init.Parity = UART_PARITY_NONE;
	huart1.Init.Mode = UART_MODE_TX_RX;
	huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart1.Init.OverSampling = UART_OVERSAMPLING_16;
	huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	huart1.Init.ClockPrescaler = UART_PRESCALER_DIV1;
	huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	if (HAL_UART_Init(&huart1) != HAL_OK)
	{
		Error_Handler();
	}
	if (HAL_UARTEx_SetTxFifoThreshold(&huart1, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
	{
		Error_Handler();
	}
	if (HAL_UARTEx_SetRxFifoThreshold(&huart1, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
	{
		Error_Handler();
	}
	if (HAL_UARTEx_DisableFifoMode(&huart1) != HAL_OK)
	{
		Error_Handler();
	}
#else
	/* low-level manual setup to avoid HAL */
	USART2->CR1 = 0;	// 8-N-x, disabled, etc
	USART2->PRESC = 0;	// no prescale
	USART2->BRR = 555;	// baud rate for 16x oversampling from 64MHz
	USART2->CR2 = 0;	// 1 stop bit
	USART2->CR1 |= USART_CR1_UE;	// enable USART
	USART2->CR1 |= USART_CR1_TE;	// enable TX
#endif
}

/*
 * output for tiny printf
 */
void usart_putc(void* p, char c)
{
	while((USART1->ISR & USART_ISR_TXE_TXFNF) == 0)
	{
	}
	USART1->TDR = c;
}

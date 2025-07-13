/*
 * i2s.c - spi-i2s driver for G071 Audio
 * 09-25-21 E. Brombugh
 */

#include "i2s.h"

/* uncomment this to enable ISR */
//#define I2S_IRQ

#ifdef I2S_IRQ
/* uncomment to enable IRQ diag on RX pin */
//#define DIAG

#ifdef DIAG
#define DIAG_LOW()	(GPIOB->BSRR=(GPIO_PIN_7<<16))
#define DIAG_HIGH()	(GPIOB->BSRR=GPIO_PIN_7)
#else
#define DIAG_LOW()
#define DIAG_HIGH()
#endif
#endif

I2S_HandleTypeDef hi2s1;
DMA_HandleTypeDef hdma_spi1_tx;

/* DMA buffer for DAC & copy */
volatile int16_t i2s_buffer[I2S_BUFSZ];

void i2s_init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};

    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**I2S1 GPIO Configuration
    PA7     ------> I2S1_SD
    PB0     ------> I2S1_WS
    PB3     ------> I2S1_CK
    */
    GPIO_InitStruct.Pin = GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF0_SPI1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF0_SPI1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

#ifdef DIAG
	/* Configure diagnostic output pin on PB7 ------------------------*/
	GPIO_InitStruct.Pin =  GPIO_PIN_7;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
#endif
	
    /* SPI1_TX Init */
    __HAL_RCC_SPI1_CLK_ENABLE();

	hi2s1.Instance = SPI1;
	hi2s1.Init.Mode = I2S_MODE_MASTER_TX;
	hi2s1.Init.Standard = I2S_STANDARD_LSB;
	hi2s1.Init.DataFormat = I2S_DATAFORMAT_16B;
	hi2s1.Init.MCLKOutput = I2S_MCLKOUTPUT_DISABLE;
	hi2s1.Init.AudioFreq = I2S_AUDIOFREQ_22K;
	hi2s1.Init.CPOL = I2S_CPOL_LOW;
	if (HAL_I2S_Init(&hi2s1) != HAL_OK)
	{
		Error_Handler();
	}
	SPI1->I2SPR = 0x02a | SPI_I2SPR_ODD;
	
    /* I2S1 DMA Init */
	__HAL_RCC_DMA1_CLK_ENABLE();
    hdma_spi1_tx.Instance = DMA1_Channel4;
    hdma_spi1_tx.Init.Request = DMA_REQUEST_SPI1_TX;
    hdma_spi1_tx.Init.Direction = DMA_MEMORY_TO_PERIPH;
    hdma_spi1_tx.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_spi1_tx.Init.MemInc = DMA_MINC_ENABLE;
    hdma_spi1_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
    hdma_spi1_tx.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
    hdma_spi1_tx.Init.Mode = DMA_CIRCULAR;
    hdma_spi1_tx.Init.Priority = DMA_PRIORITY_LOW;
    if (HAL_DMA_Init(&hdma_spi1_tx) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_LINKDMA(&hi2s1, hdmatx,hdma_spi1_tx);
	
    SET_BIT(hi2s1.Instance->CR2, SPI_CR2_TXDMAEN);   

	/* Configure the source, destination address and the data length */
	/* Configure DMA Stream data length */
	hdma_spi1_tx.Instance->CNDTR = (uint32_t)I2S_BUFSZ;

	/* Configure DMA Stream peripheral address */
	hdma_spi1_tx.Instance->CPAR = (uint32_t)&SPI1->DR;

	/* Configure DMA Stream memory address */
	hdma_spi1_tx.Instance->CMAR = (uint32_t)&i2s_buffer;

#ifdef I2S_IRQ
	/* Enable the RX half-transfer and transfer complete interrupts */
	__HAL_DMA_ENABLE_IT(&hdma_spi1_tx, DMA_IT_TC | DMA_IT_HT);
    
	/* DMA1_Ch4_7_DMAMUX1_OVR_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA1_Ch4_7_DMAMUX1_OVR_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(DMA1_Ch4_7_DMAMUX1_OVR_IRQn);
#endif
	
	/* Enable I2S DMA */
	__HAL_DMA_ENABLE(&hdma_spi1_tx);
}

void i2s_start(void)
{
	__HAL_I2S_ENABLE(&hi2s1);
}

#ifdef I2S_IRQ
/*
 * Generate new buffer of I2S data
 */
void I2S_Proc(volatile int16_t *dst)
{
	uint16_t i;
	int16_t *src = audio_buffer;
	
	/* copy audio input to DAC & convert to unsigned */
	for(i=0;i<I2S_BUFSZ/2;i++)
		*dst++ = *src++;
}

/**
  * @brief This function handles DMA1 channel 4, channel 5, channel 6, channel 7 and DMAMUX1 interrupts.
  */
void DMA1_Ch4_7_DMAMUX1_OVR_IRQHandler(void)
{
	/* Raise activity flag */
	DIAG_HIGH();

	/* Half-Transfer interrupt */
	if(DMA1->ISR&DMA_FLAG_HT4)
	{
		/* Clear the Interrupt flag */
		DMA1->IFCR = DMA_FLAG_HT4;

		/* load the first half of the buffers */
		I2S_Proc(&i2s_buffer[0]);
	}
	
	/* Transfer complete interrupt */
	if(DMA1->ISR&DMA_FLAG_TC4)
	{
		/* Clear the Interrupt flag */
		DMA1->IFCR = DMA_FLAG_TC4;
		
		/* load the 2nd half of the buffer */
		I2S_Proc(&i2s_buffer[I2S_BUFSZ/2]);
	}
    	
	/* Lower activity flag */
	DIAG_LOW();
}
#endif


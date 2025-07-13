/*
 * dac.c - dac setup for for L432 Colorscope
 * 22-09-2021 E. Brombaugh
 */
 
#include "dac.h"

/* uncomment to enable IRQ diag on RX pin */
//#define DIAG

#ifdef DIAG
#define DIAG_LOW()	(GPIOB->BSRR=(GPIO_PIN_7<<16))
#define DIAG_HIGH()	(GPIOB->BSRR=GPIO_PIN_7)
#else
#define DIAG_LOW()
#define DIAG_HIGH()
#endif

/* uncomment to enable ADC diag output on PA10 */
#define TIM2CH3

/* DMA buffer for DAC & copy */
uint32_t dac1_buffer[DAC_BUFSZ];

DAC_HandleTypeDef hdac1;
DMA_HandleTypeDef hdma_dac1_ch1;
TIM_HandleTypeDef htim2;
extern uint32_t cnt;

/*
 * init all three DAC channels
 */
void dac_init(void)
{
    int i;
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	DAC_ChannelConfTypeDef sConfig = {0};
	TIM_ClockConfigTypeDef sClockSourceConfig = {0};
	TIM_MasterConfigTypeDef sMasterConfig = {0};
	TIM_OC_InitTypeDef sConfigOC = {0};
    
    /* load something into the buffers */
    for(i=0;i<DAC_BUFSZ;i++)
    {
        uint32_t temp = (65536/DAC_BUFSZ)*i;
        
        dac1_buffer[i] = (temp<<16) + -temp;
    }
	
	/* enable clocks for DAC1, GPIOA ----------------------------*/
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_DAC1_CLK_ENABLE();
	
#ifdef DIAG
	/* Configure diagnostic output pin on PB7 ------------------------*/
	GPIO_InitStruct.Pin =  GPIO_PIN_7;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
#endif
	
#ifdef TIM2CH3
	__HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitStruct.Pin = GPIO_PIN_10;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF2_TIM2;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
#endif

/* Configure analog output pins -----------------------------------*/
    GPIO_InitStruct.Pin = GPIO_PIN_4;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	
	/** DAC Initialization
	*/
	hdac1.Instance = DAC1;
	if (HAL_DAC_Init(&hdac1) != HAL_OK)
	{
		Error_Handler();
	}
	/** DAC channel OUT1 config
	*/
	sConfig.DAC_SampleAndHold = DAC_SAMPLEANDHOLD_DISABLE;
	sConfig.DAC_Trigger = DAC_TRIGGER_T2_TRGO;
	sConfig.DAC_OutputBuffer = DAC_OUTPUTBUFFER_ENABLE;
	sConfig.DAC_ConnectOnChipPeripheral = DAC_CHIPCONNECT_DISABLE;
	sConfig.DAC_UserTrimming = DAC_TRIMMING_FACTORY;
	if (HAL_DAC_ConfigChannel(&hdac1, &sConfig, DAC_CHANNEL_1) != HAL_OK)
	{
		Error_Handler();
	}
	/** DAC channel OUT2 config
	*/
	sConfig.DAC_OutputBuffer = DAC_OUTPUTBUFFER_DISABLE;
	sConfig.DAC_ConnectOnChipPeripheral = DAC_CHIPCONNECT_ENABLE;
	if (HAL_DAC_ConfigChannel(&hdac1, &sConfig, DAC_CHANNEL_2) != HAL_OK)
	{
		Error_Handler();
	}
    SET_BIT(hdac1.Instance->CR, DAC_CR_DMAEN1);   
	__HAL_DAC_ENABLE(&hdac1, DAC_CHANNEL_1);
	//__HAL_DAC_ENABLE(&hdac1, DAC_CHANNEL_2);
    DAC1->DHR12LD = (2048<<20) | (2048<<4);
    
    /* set up DMA for DAC1 chls 1&2 */
	__HAL_RCC_DMA1_CLK_ENABLE();
    hdma_dac1_ch1.Instance = DMA1_Channel2;
    hdma_dac1_ch1.Init.Request = DMA_REQUEST_DAC1_CHANNEL1;
    hdma_dac1_ch1.Init.Direction = DMA_MEMORY_TO_PERIPH;
    hdma_dac1_ch1.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_dac1_ch1.Init.MemInc = DMA_MINC_ENABLE;
    hdma_dac1_ch1.Init.PeriphDataAlignment = DMA_PDATAALIGN_WORD;
    hdma_dac1_ch1.Init.MemDataAlignment = DMA_MDATAALIGN_WORD;
    hdma_dac1_ch1.Init.Mode = DMA_CIRCULAR;
    hdma_dac1_ch1.Init.Priority = DMA_PRIORITY_LOW;
    if (HAL_DMA_Init(&hdma_dac1_ch1) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_LINKDMA(&hdac1,DMA_Handle1,hdma_dac1_ch1);
	
	/* Configure the source, destination address and the data length */
	/* Configure DMA Stream data length */
	hdma_dac1_ch1.Instance->CNDTR = (uint32_t)DAC_BUFSZ;

	/* Configure DMA Stream peripheral address */
	hdma_dac1_ch1.Instance->CPAR = (uint32_t)&DAC1->DHR12LD;

	/* Configure DMA Stream memory address */
	hdma_dac1_ch1.Instance->CMAR = (uint32_t)&dac1_buffer;

	/* Enable the RX half-transfer and transfer complete interrupts */
	__HAL_DMA_ENABLE_IT(&hdma_dac1_ch1, DMA_IT_TC | DMA_IT_HT);
    
	/* DAC1 DMA IRQ Channel configuration */
	HAL_NVIC_SetPriority(DMA1_Channel2_3_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(DMA1_Channel2_3_IRQn);
	
	/* Enable DAC1 DMA */
	__HAL_DMA_ENABLE(&hdma_dac1_ch1);
        
	/* Enable TIM2 as timebase for DACs */
    __HAL_RCC_TIM2_CLK_ENABLE();
	htim2.Instance = TIM2;
	htim2.Init.Prescaler = 0;
	htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim2.Init.Period = 2719;	// 23.529kHz
	htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
	{
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
	{
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
	{
		Error_Handler();
	}
	
#ifdef TIM2CH3
	/* Timer 2 Chl3 output for test */
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
	sConfigOC.Pulse = 10;
	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
	sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
	if (HAL_TIM_OC_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
	{
		Error_Handler();
	}
	
	/* start timer with diag out */
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);
#endif
}

/*
 * Start DACs
 */
void dac_start(void)
{
    HAL_TIM_Base_Start(&htim2);
}

/*
 * Generate new buffer of DAC data
 */
void DAC_Proc(uint32_t *dst)
{
	uint16_t i, *sdst = (uint16_t *)dst;
	int16_t *src = audio_buffer;
	
	/* copy audio input to DAC & convert to unsigned */
	for(i=0;i<DAC_BUFSZ;i++)
		*sdst++ = (*src++) ^ 0x8000;
}

/*
 * DMA1_Channel2 ISR handles all three DACs
 */
void DMA1_Channel2_3_IRQHandler(void)
{
	/* Raise activity flag */
	DIAG_HIGH();

	/* Half-Transfer interrupt */
	if(DMA1->ISR&DMA_FLAG_HT2)
	{
		/* Clear the Interrupt flag */
		DMA1->IFCR = DMA_FLAG_HT2;

		/* load the first half of the buffers */
		DAC_Proc(&dac1_buffer[0]);
	}
	
	/* Transfer complete interrupt */
	if(DMA1->ISR&DMA_FLAG_TC2)
	{
		/* Clear the Interrupt flag */
		DMA1->IFCR = DMA_FLAG_TC2;
		
		/* load the 2nd half of the buffer */
		DAC_Proc(&dac1_buffer[DAC_BUFSZ/2]);
	}
    	
	/* Lower activity flag */
	DIAG_LOW();
}

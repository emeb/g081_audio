/*
 * adc.h - G071 ADC setup for audio
 * 09-24-2021 E. Brombaugh
 */

#include "adc.h"
#include "i2s.h"

/* uncomment to enable ADC diag output on PB7 */
#define DIAG
#ifdef DIAG
#define DIAG_LOW()	(GPIOB->BSRR=(GPIO_PIN_7<<16))
#define DIAG_HIGH()	(GPIOB->BSRR=GPIO_PIN_7)
#else
#define DIAG_LOW()
#define DIAG_HIGH()
#endif

/* uncomment to enable ADC diag output on PA10 */
//#define TIM1CH3

volatile uint16_t adc_buffer[ADC_BUFSZ], cvbuf[NUM_CV];

ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;
TIM_HandleTypeDef htim1;

/*
 * Initialize the ADC for internal monitoring
 */
void ADCInit(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	ADC_ChannelConfTypeDef sConfig = {0};
	TIM_ClockConfigTypeDef sClockSourceConfig = {0};
	TIM_MasterConfigTypeDef sMasterConfig = {0};
	
    /* GPIO clock enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();
	
    /**ADC1 GPIO Configuration
    PA0     ------> ADC1_IN0
    PA1     ------> ADC1_IN1
    PA2     ------> ADC1_IN2
    PA3     ------> ADC1_IN3
    */
    GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

#ifdef DIAG
	__HAL_RCC_GPIOB_CLK_ENABLE();
	/* Configure diag output */
    GPIO_InitStruct.Pin = GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
#endif

#ifdef TIM1CH3
	__HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitStruct.Pin = GPIO_PIN_1;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF2_TIM1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
#endif

    /* ADC clock enable */
    __HAL_RCC_ADC_CLK_ENABLE();
	
    /* ADC Periph interface clock configuration */
	hadc1.Instance = ADC1;
	hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV2;
	hadc1.Init.Resolution = ADC_RESOLUTION_12B;
	hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
	hadc1.Init.ScanConvMode = ADC_SCAN_ENABLE;
	hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
	hadc1.Init.LowPowerAutoWait = DISABLE;
	hadc1.Init.LowPowerAutoPowerOff = DISABLE;
	hadc1.Init.ContinuousConvMode = DISABLE;
	hadc1.Init.NbrOfConversion = 4;
	hadc1.Init.DiscontinuousConvMode = DISABLE;
	hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIG_T1_TRGO2;
	hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_RISING;
	hadc1.Init.DMAContinuousRequests = ENABLE;
	hadc1.Init.Overrun = ADC_OVR_DATA_OVERWRITTEN;
	hadc1.Init.SamplingTimeCommon1 = ADC_SAMPLETIME_7CYCLES_5;
	hadc1.Init.SamplingTimeCommon2 = ADC_SAMPLETIME_12CYCLES_5;
	hadc1.Init.OversamplingMode = ENABLE;
	hadc1.Init.Oversampling.Ratio = ADC_OVERSAMPLING_RATIO_16;
	hadc1.Init.Oversampling.RightBitShift = ADC_RIGHTBITSHIFT_2;
	hadc1.Init.Oversampling.TriggeredMode = ADC_TRIGGEREDMODE_SINGLE_TRIGGER;
	hadc1.Init.TriggerFrequencyMode = ADC_TRIGGER_FREQ_HIGH;
	if (HAL_ADC_Init(&hadc1) != HAL_OK)
	{
		Error_Handler();
	}
	/** Configure Regular Channel
	*/
	sConfig.Channel = ADC_CHANNEL_0;
	sConfig.Rank = ADC_REGULAR_RANK_1;
	sConfig.SamplingTime = ADC_SAMPLINGTIME_COMMON_1;
	if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
	{
		Error_Handler();
	}
	/** Configure Regular Channel
	*/
	sConfig.Channel = ADC_CHANNEL_1;
	sConfig.Rank = ADC_REGULAR_RANK_2;
	if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
	{
		Error_Handler();
	}
	/** Configure Regular Channel
	*/
	sConfig.Channel = ADC_CHANNEL_3;
	sConfig.Rank = ADC_REGULAR_RANK_3;
	if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
	{
		Error_Handler();
	}
	/** Configure Regular Channel
	*/
	sConfig.Channel = ADC_CHANNEL_2;
	sConfig.Rank = ADC_REGULAR_RANK_4;
	if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
	{
		Error_Handler();
	}

	/* DMA controller clock enable */
	__HAL_RCC_DMA1_CLK_ENABLE();

    /* ADC1 DMA Init */
    hdma_adc1.Instance = DMA1_Channel1;
    hdma_adc1.Init.Request = DMA_REQUEST_ADC1;
    hdma_adc1.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_adc1.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_adc1.Init.MemInc = DMA_MINC_ENABLE;
    hdma_adc1.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
    hdma_adc1.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
    hdma_adc1.Init.Mode = DMA_CIRCULAR;
    hdma_adc1.Init.Priority = DMA_PRIORITY_HIGH;
    if (HAL_DMA_Init(&hdma_adc1) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_LINKDMA(&hadc1,DMA_Handle,hdma_adc1);

	/* enable ADC DMA */
	SET_BIT(hadc1.Instance->CFGR1, ADC_CFGR1_DMAEN);
    
	HAL_ADC_Start(&hadc1);
	
	/* Configure the source, destination address and the data length */
	/* Configure DMA Stream data length */
	hdma_adc1.Instance->CNDTR = (uint32_t)ADC_BUFSZ;

	/* Configure DMA Stream peripheral address */
	hdma_adc1.Instance->CPAR = (uint32_t)&ADC1->DR;

	/* Configure DMA Stream memory address */
	hdma_adc1.Instance->CMAR = (uint32_t)&adc_buffer;

	/* Enable the ADC DMA half-transfer and transfer complete interrupts */
	__HAL_DMA_ENABLE_IT(&hdma_adc1, DMA_IT_TC | DMA_IT_HT);
    
	/* DMA interrupt init */
	/* DMA1_Channel1_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);

    /* enable ADC DMA */
	__HAL_DMA_ENABLE(&hdma_adc1);
    
	/* Timer 1 clock enable */
    __HAL_RCC_TIM1_CLK_ENABLE();

	/* Timer 1 init for 23.529kHz sample rate on each chl */
	htim1.Instance = TIM1;
	htim1.Init.Prescaler = 0;
	htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim1.Init.Period = 2719;	// 23.529kHz
	htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim1.Init.RepetitionCounter = 0;
	htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
	{
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
	{
		Error_Handler();
	}
	
	/* Timer 1 trig out to ADC */
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_UPDATE;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
	{
		Error_Handler();
	}
	
#ifdef TIM1CH3
	/* Timer 1 Chl3N output for test */
	TIM_OC_InitTypeDef sConfigOC = {0};
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
	sConfigOC.Pulse = 10;
	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	sConfigOC.OCNPolarity = TIM_OCPOLARITY_HIGH;
	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
	sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
	if (HAL_TIM_OC_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
	{
		Error_Handler();
	}
	
	/* start timer with diag out */
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
#endif
	
	/* start the timer */
	HAL_TIM_Base_Start(&htim1);
}

/*
 * Buffer math:
 * SMPS = 64
 * CHLS = 2
 * BUFSZ = SMPS*CHLS = 128
 * ADC_BUFSZ = 2*BUFSZ = 256
 * length(inbuf) = BUFSZ/2 = 64
 * i iterations = (ADC_BUFSZ/2)/4 = 32
 * ib increments = i iterations * 2 = 64
 */

/*
 * Separate CV and audio channels, hand off audio to DSP
 */
void ADC_Proc(uint8_t section)
{
	uint8_t i;
	volatile int16_t *dst;
	volatile uint16_t *src;
	volatile int16_t inbuf[BUFSZ/2], *ib = inbuf;
	uint32_t acc[2] = {0}, temp;
	
	if(section)
	{
		/* 2nd half */
		dst = &i2s_buffer[I2S_BUFSZ/2];
		src = &adc_buffer[ADC_BUFSZ/2];
	}
	else
	{
		/* 1st half */
		dst = i2s_buffer;
		src = adc_buffer;
	}
	
	/* parse ADC buffer into audio and CV */
	for(i=0;i<ADC_BUFSZ/2;i+=4)
	{
		/* grab stereo data and reformat to 16-bit signed */
		*ib++ = (*src++<<2)^0x8000;
		*ib++ = (*src++<<2)^0x8000;
		
		/* integrate CVs */
		acc[0] += *src++;
		acc[1] += *src++;
	}
	
	/* do DSP on audio */
	Audio_Proc(dst, inbuf);
	
	/* Normalize accumulated CV results, invert & scale */
	acc[0]>>=2;
	temp = 0x0fff ^ (acc[0]/(ADC_BUFSZ/8));
	temp = (temp * 261)>>8;
	cvbuf[0] = temp > 0xfff ? 0xfff : temp;
	
	acc[1]>>=2;
	temp = 0x0fff ^ (acc[1]/(ADC_BUFSZ/8));
	temp = (temp * 261)>>8;
	cvbuf[1] = temp > 0xfff ? 0xfff : temp;
}

/**
  * @brief This function handles DMA1 channel1 global interrupt.
  */
void DMA1_Channel1_IRQHandler(void)
{
	DIAG_HIGH();
	
	if(DMA1->ISR&DMA_FLAG_HT1)
	{
		/* Half-Transfer - first half of buffer is full */
		DMA1->IFCR = DMA_FLAG_HT1;
		
		/* process first half */
		ADC_Proc(0);
	}
	
	if(DMA1->ISR&DMA_FLAG_TC1)
	{
		/* Transfer complete - second half of buffer is full */
		DMA1->IFCR = DMA_FLAG_TC1;
		
		/* process second half */
		ADC_Proc(1);
	}
	
	DIAG_LOW();
}



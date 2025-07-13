/*
 * main.c - G081 audio
 * E. Brombaugh 09-28-2021
 */

#include "stm32g0xx_hal.h"
#include "usart.h"
#include "printf.h"
#include "audio.h"
#include "adc.h"
#include "shared_i2c.h"
#include "oled.h"
#include "timersleep.h"
#include "i2s.h"
#include "widget.h"

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Configure the main internal regulator output voltage
  */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV2;
  RCC_OscInitStruct.PLL.PLLN = 16;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the peripherals clocks
  */
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART2|RCC_PERIPHCLK_ADC
                              |RCC_PERIPHCLK_TIM1;
  PeriphClkInit.Usart2ClockSelection = RCC_USART2CLKSOURCE_PCLK1;
  PeriphClkInit.AdcClockSelection = RCC_ADCCLKSOURCE_SYSCLK;
  PeriphClkInit.Tim1ClockSelection = RCC_TIM1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/*
 * count leading zeros - Cortex M0 version
 */
uint32_t CLZ(uint32_t x)
{
	uint32_t i = 0;
	uint32_t msb = 1<<31;
	
	if(x==0)
		return 32;
	
	while(!(x&msb) && (i<31))
	{
		msb>>=1;
		i++;
	}
	
	return i;
}

/*
 * convert u16 to log2 in 4.4 format
 */
uint16_t ilog2(uint16_t in)
{
	uint16_t ip = 32 - CLZ(in);
	uint16_t fp = (in >> (ip - 5)) & 0xf;
	return (ip << 4) | fp;
}

/*
 * main routine
 */
int main(void)
{
	uint16_t prog = 0, prev_prog = 0xFFFF;
	uint32_t slowgoal;
	
	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	__HAL_RCC_SYSCFG_CLK_ENABLE();
	__HAL_RCC_PWR_CLK_ENABLE();

	/* Configure the system clock */
	SystemClock_Config();

	/* init the UART for diagnostics */
	setup_usart();
	init_printf(0,usart_putc);
	printf("\n\n\rG081 Audio\n\r");
	printf("\n");
	printf("SYSCLK = %d\n\r", HAL_RCC_GetSysClockFreq());
	printf("\n");
	
	/* microsecond timer */
	timersleep_init();
	printf("timersleep enabled\n\r");
	
	/* I2C */
	shared_i2c_init();
	printf("I2C initialized\n\r");

	/* OLED */
	printf("OLED initialized - result = %d\n\r", oled_init());
	//oled_drawrect(0, 0, 0, 64, 32, 0);
	//oled_drawstr(0, 16, 12, "Test", 1);
	//oled_refresh(0);	
	
	/* Audio */
	Audio_Init();
	printf("Audio initialized\n\r");	

	/* DAC */
	i2s_init();
	printf("I2S initialized\n\r");
	
	/* ADC */
	ADCInit();
	i2s_start();
	printf("ADC initialized, I2S started\n\r");
	
    /* Infinite loop */
	slowgoal = timersleep_goal_ms(100);
    while(1)
    {
		/* stuff that happens at a slower rate */
		if(!timersleep_check(slowgoal))
		{
			slowgoal = timersleep_goal_ms(100);
			
			printf("CV 1: 0x%03X, ", cvbuf[0]);
			printf("CV 2: 0x%03X, ", cvbuf[1]);
			//printf("L DC: %5d, ", dcb[0]>>11);
			//printf("R DC: %5d, ", dcb[1]>>11);
			//printf("L lvl: %5d, ", sl[0]);
			//printf("R lvl: %5d, ", sl[1]);
			//printf("CLZ(cv[1]): %5d, ", CLZ(cvbuf[1]));
			//printf("L dB: %5d, ", ilog2(sl[0]));
			//printf("R dB: %5d, ", ilog2(sl[1]));
			printf("\r");
			
#if 0
			/* update signal level bars */
			oled_drawchar(0, 0, 0, 'L', 1);
			oled_drawchar(0, 0, 8, 'R', 1);
			bargraphH(0, 8, 0, 56, 6, (100*ilog2(sl[0]))>>8);
			bargraphH(0, 8, 8, 56, 6, (100*ilog2(sl[1]))>>8);
			
			/* update freq bar */
			oled_drawchar(0, 0, 16, 'L', 1);
			oled_drawchar(0, 57, 16, 'H', 1);
			bargraphH(0, 8, 17, 48, 6, (100*cvbuf[0])>>12);
			
			/* update w/d mix bar */
			oled_drawchar(0, 0, 24, 'D', 1);
			oled_drawchar(0, 57, 24, 'W', 1);
			bargraphH(0, 8, 25, 48, 6, (100*cvbuf[1])>>12);
			oled_refresh(0);	
#endif
		}
    }
}

/*
 * needed by HAL
 */
void SysTick_Handler(void)
{
  HAL_IncTick();
}


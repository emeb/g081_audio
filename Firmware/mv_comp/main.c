/*
 * main.c - G081 audio - Midiverb Compiled
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
#include "mv_names.h"

/*
 * Optional OLED blanking - uncomment the following line if you want to
 * enable the OLED screensaver to darken the display after several seconds
 * The timeout is user selectable in milliseconds
 */
//#define OLED_BLANK_ENABLE
#define OLED_BLANK_TIMEOUT 3000

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
 * quantize 12-bit CV into arbitrary ranges with hysteresis
 */
uint8_t ratio_hyst_arb(uint16_t *old, uint16_t in, uint8_t range)
{
	uint8_t result = 0;
	int16_t diff, guard, scale, rnd;
    
    /* compute scaling to achieve range */
    scale = 4096/range;
    rnd = scale/2;
    
    /* set guard band */
    guard = 2*scale/3;
    guard = (guard == 0) ? 1 : guard;
    
	/* Special case - don't guardband at endpoints */
	if((in == 0) || (in == 0xFFF))
	{
		diff = (in+rnd) / scale;
		if(diff == *old)
			return 0;
		else
		{
			*old = diff;
			return 1;
		}
	}
	
	/* find abs val of diff */
	diff = (int16_t)(*old * scale) - (int16_t)in;
	if(diff<0)
		diff = -diff;
	
	/* exceeds guardband ? */
	if(diff > guard)
	{
		/* yes so update prev */
		*old  = (in+rnd) / scale;
		result = 1;
	}
	
	return result;
}

/*
 * main routine
 */
int main(void)
{
	uint16_t prog = 255, dcnt = 0;
	uint32_t slowgoal;
#ifdef OLED_BLANK_ENABLE
	uint32_t blankgoal;
	uint8_t blanked;
#endif
	
	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	__HAL_RCC_SYSCFG_CLK_ENABLE();
	__HAL_RCC_PWR_CLK_ENABLE();

	/* Configure the system clock */
	SystemClock_Config();

	/* init the UART for diagnostics */
	setup_usart();
	init_printf(0,usart_putc);
	printf("\n\n\rG081 Audio MV Compiled\n\r");
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
#ifdef OLED_BLANK_ENABLE
	blankgoal= timersleep_goal_ms(OLED_BLANK_TIMEOUT);
	blanked = 0;
#endif
    while(1)
    {
		/* quantize prog cv to number of progs & update */
		if(ratio_hyst_arb(&prog, cvbuf[0], 62))
		{
			printf("\n prog = %d\n\r", prog);
			Audio_SetProg(prog);
			oled_draw_7seg_2dRJ(0, 1, 1, prog+1, 1);
			oled_drawstr(0, 0, 25, (char *)mv_prog_names[prog], 0);
			dcnt = 20;
			oled_refresh(0);
#ifdef OLED_BLANK_ENABLE
			blankgoal= timersleep_goal_ms(OLED_BLANK_TIMEOUT);
			blanked = 0;
#endif
		}
		
		/* stuff that happens at a slower rate */
		if(!timersleep_check(slowgoal))
		{
			slowgoal = timersleep_goal_ms(100);
			
			//printf("CV 1: 0x%03X, ", cvbuf[0]);
			//printf("CV 2: 0x%03X, ", cvbuf[1]);
			//printf("L DC: %5d, ", dcb[0]>>11);
			//printf("R DC: %5d, ", dcb[1]>>11);
			printf("LI lvl: %5d, ", sl[0]);
			printf("RI lvl: %5d, ", sl[1]);
			printf("LO lvl: %5d, ", sl[2]);
			printf("RO lvl: %5d, ", sl[3]);
			printf("\r");
			
			/* update signal level indicators */
			level_indicator(0, 36, 2, sl[0]);
			sl[0] = 0;
			level_indicator(0, 36, 14, sl[1]);
			sl[1] = 0;
			level_indicator(0, 52, 2, sl[2]);
			sl[2] = 0;
			level_indicator(0, 52, 14, sl[3]);
			sl[3] = 0;			
			
			/* name timeout */
			if(dcnt<2)
			{
				if(dcnt == 1)
				{
					dcnt = 0;
					oled_drawrect(0, 0, 25, 64, 8, 0);
				}
				
				/* update w/d mix bar */
				oled_drawchar(0, 0, 25, 'D', 1);
				oled_drawchar(0, 57, 25, 'W', 1);
				bargraphH(0, 8, 26, 48, 6, (100*cvbuf[1])>>12);
#ifdef OLED_BLANK_ENABLE
				if(!blanked)
					oled_refresh(0);
#else
				oled_refresh(0);
#endif
			}
			else
			{
				dcnt--;
			}
		}
		
#ifdef OLED_BLANK_ENABLE
		/* check for blanking */
		if(!blanked && !timersleep_check(blankgoal))
		{
			/* clear the screen */
			blanked = 1;
			oled_clear(0,0);
			oled_refresh(0);
		}
#endif
    }
}

/*
 * needed by HAL
 */
void SysTick_Handler(void)
{
  HAL_IncTick();
}


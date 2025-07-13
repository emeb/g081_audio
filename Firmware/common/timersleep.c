/*
 * timersleep.h - timer counter sleep routines
 * 10-12-21 E. Brombaugh - created as substitute for cyclsleep on M0
 */
 
#include "timersleep.h"

uint32_t s_tot, act_cyc, tot_cyc;

/*
 * turn on timer counter for us resolution
 */
void timersleep_init(void)
{
	TIM_HandleTypeDef htim2 = {0};
	TIM_ClockConfigTypeDef sClockSourceConfig = {0};
	TIM_MasterConfigTypeDef sMasterConfig = {0};

	/* get prescaler for 1us */
	uint32_t prescale = HAL_RCC_GetSysClockFreq()/1000000 - 1;
	
	/* Turn on and configure TIM2 */
    __HAL_RCC_TIM2_CLK_ENABLE();
	
	htim2.Instance = TIM2;
	htim2.Init.Prescaler = prescale;
	htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim2.Init.Period = 4294967295;
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
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
	{
		Error_Handler();
	}
	
	HAL_TIM_Base_Start(&htim2);
}

/*
 * compute goal for timer counter based on desired delay in timers
 */
uint32_t timersleep_goal(uint32_t us)
{
	return us + TIM2->CNT;
}

/*
 * compute goal for timer counter based on desired delay in milliseconds
 */
uint32_t timersleep_goal_ms(uint32_t ms)
{
	return ms*1000 + TIM2->CNT;
}

/*
 * return TRUE if goal is reached
 */
uint32_t timersleep_check(uint32_t goal)
{
    /**************************************************/
    /* DANGER WILL ROBINSON!                          */
    /* the following syntax is CRUCIAL to ensuring    */
    /* that this test doesn't have a wrap bug         */
    /**************************************************/
	return (((int32_t)TIM2->CNT - (int32_t)goal) < 0);
}

/*
 * sleep for a certain number of timers
 */
void timersleep(uint32_t us)
{
    uint32_t goal = timersleep_goal(us);
    
    while(timersleep_check(goal));
}

/*
 * sleep for a certain number of milliseconds
 */
void timersleep_delay(uint32_t ms)
{
	timersleep(ms*1000);
}

/*
 * called at start of routine to be measured
 */
void timersleep_start_meas(void)
{
	/* grab current timer count & measure total timers */
	uint32_t curr_cyc = TIM2->CNT;
	tot_cyc = curr_cyc - s_tot;
	s_tot = curr_cyc;
}

/*
 * called at end of routine to be measured
 */
void timersleep_end_meas(void)
{
	/* grab current timer count and measure active timers */
	uint32_t curr_cyc = TIM2->CNT;
	act_cyc = curr_cyc - s_tot;
}

/*
 * return the measurement results
 */
void timersleep_get_meas(uint32_t *act, uint32_t *tot)
{
	*act = act_cyc;
	*tot = tot_cyc;
}

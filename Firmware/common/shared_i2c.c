/*
 * shared_i2c.c - shared I2C bus basic routines
 * 07-12-19 E. Brombaugh
 */
 
#include "shared_i2c.h"
#include "printf.h"

I2C_HandleTypeDef hi2c2;

/*
 * initialize shared I2C bus
 */
void shared_i2c_init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	/* Enable I2C1 GPIO clock */
    __HAL_RCC_GPIOA_CLK_ENABLE();

    /**I2C2 GPIO Configuration
    PA11 [PA9]     ------> I2C2_SCL
    PA12 [PA10]     ------> I2C2_SDA
    */
    GPIO_InitStruct.Pin = GPIO_PIN_11|GPIO_PIN_12;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF6_I2C2;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	/* reset the I2C bus */
	shared_i2c_reset();
}

void shared_i2c_reset(void)
{
	/* Enable the I2C1 peripheral clock & reset it */
	__HAL_RCC_I2C2_CLK_ENABLE();
	__HAL_RCC_I2C2_FORCE_RESET();
	__HAL_RCC_I2C2_RELEASE_RESET();
	
	printf("shared_i2c_reset: reseting\n\r");
	
	hi2c2.Instance = I2C2;
	hi2c2.Init.Timing = 0x10707DBC;
	hi2c2.Init.OwnAddress1 = 0;
	hi2c2.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
	hi2c2.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
	hi2c2.Init.OwnAddress2 = 0;
	hi2c2.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
	hi2c2.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
	hi2c2.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
	if (HAL_I2C_Init(&hi2c2) != HAL_OK)
	{
		Error_Handler();
	}
	/** Configure Analogue filter
	*/
	if (HAL_I2CEx_ConfigAnalogFilter(&hi2c2, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
	{
		Error_Handler();
	}
	/** Configure Digital filter
	*/
	if (HAL_I2CEx_ConfigDigitalFilter(&hi2c2, 0) != HAL_OK)
	{
		Error_Handler();
	}
}


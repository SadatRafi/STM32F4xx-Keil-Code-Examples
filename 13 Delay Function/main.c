//Microcontroller Used : STM32F401CCUx
//Extarnal Crystel : 25MHz
//This Code uses Systick Timer to create the delay

#include "PllConfig.h"
#include "delay.h"
int main(void)
{
	SysClockConfig();
	SystemCoreClockUpdate();
	sysTickInit();
	
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; 
	GPIOA->MODER |= GPIO_MODER_MODE5_0;
	
	while(1)
	{
		GPIOA->ODR ^= GPIO_ODR_ODR_5;
		_delay_us(10);
	}
}

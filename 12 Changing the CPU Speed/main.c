//Open this Project in Keil-u-Vision 
//The PllConfig.h & PllConfig.c file can be used to change the CPU speed of any STM32F4xx microcontroller
//Go to PllConfig.h file to set the PLL multiplier values
//Go to system_stm32f4xx.c and set the HSE value 
#include "PllConfig.h"

int main(void)
{
	SysClockConfig();        //Changes the CPU Frequency
	SystemCoreClockUpdate(); //Updates the SystemCoreClock Global Variable
													 //Build and upload the code to your microcontroller
													 //Start the Debug Mode
													 //Go to the definition of SystemCoreClockUpdate(); 
													 //Add the global variable SystemCoreClock to watch window 
	while(1)
	{
	
	}
}

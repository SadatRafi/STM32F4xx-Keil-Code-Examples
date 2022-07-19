//Board used : STM32F401CCUx Black Pill 
//Oscillator Frequency : 25 MHz external crystal Oscillator
//Use STM32CubeMx to configure the PLL in the most simple way

#define PLL_M      25
#define PLL_N      168
#define PLL_P      2
#define PLL_Q      4

#include "stm32f4xx.h"                  // Device header

void SysClockConfig(void);

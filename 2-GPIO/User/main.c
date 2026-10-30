#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "LED.h"
#include "KEY.h"
#include "LightSensor.h"
int main()
{
	uint8_t KeyNum=0;
	LED_Init();
	Key_Init();
	LightSensor_Init();
	while(1)
	{
		if(LightSensor_Get()==0)
		{
			LED_Reset(1);
		}
		else LED_Set(1);
		//KeyNum=KeyGet();
		//LED_Turn(KeyNum);
		//if(KeyNum)
		//LED_Turn(KeyNum);
		//LED_Set(0);
		//Delay_ms(100);
		//LED_Reset(0);
		//Delay_ms(100);
		//GPIO_ResetBits(GPIOA,GPIO_Pin_0);
		//GPIO_ResetBits(GPIOA,GPIO_Pin_1);
		//GPIO_ResetBits(GPIOA,GPIO_Pin_2);	

	}  
}

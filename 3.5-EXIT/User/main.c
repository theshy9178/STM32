#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "LED.h"
#include "KEY.h"
#include "OLED.h"
#include "Encoder.h"

int main()
{
	int16_t count;
	Encoder_Init();
	OLED_Init();
	while(1)
	{
		count=Get_Count1();
		OLED_ShowSignedNum(1,1,count,5);
	} 

}	


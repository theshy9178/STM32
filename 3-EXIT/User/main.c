#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "LED.h"
#include "KEY.h"
#include "OLED.h"
#include "RED_RayCount.h"
int main()
{
	uint16_t count;
	Red_RayCount_Init();
	OLED_Init();
	while(1)
	{
		count=Get_Count();
		OLED_ShowNum(1,1,count,5);
	} 

}	


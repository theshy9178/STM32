#include "stm32f10x.h"                  // Device header
void LED_Init()
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_SetBits(GPIOA,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2);
}

void LED_Set(uint8_t num)
{
	if(num==0) GPIO_SetBits(GPIOA,GPIO_Pin_0);
	if(num==1) GPIO_SetBits(GPIOA,GPIO_Pin_1);
	if(num==2) GPIO_SetBits(GPIOA,GPIO_Pin_2);	
}
void LED_Reset(uint8_t num)
{
	if(num==0) GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	if(num==1) GPIO_ResetBits(GPIOA,GPIO_Pin_1);
	if(num==2) GPIO_ResetBits(GPIOA,GPIO_Pin_2);	
}
void LED_Turn(uint8_t num)
{
	if(num==0)
	{
		//if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)==0) GPIO_SetBits(GPIOA,GPIO_Pin_0);
		//else GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	}
	if(num==1)
	{
		if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1)==0) GPIO_SetBits(GPIOA,GPIO_Pin_1);
		else GPIO_ResetBits(GPIOA,GPIO_Pin_1);
	}
	if(num==2)
	{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_2)==0) GPIO_SetBits(GPIOA,GPIO_Pin_2);
	else GPIO_ResetBits(GPIOA,GPIO_Pin_2);
	}
}
	
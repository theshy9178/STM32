#ifndef __RED_RayCount_H
#define __RED_RayCount_H
#include "stm32f10x.h"
void Red_RayCount_Init();
uint16_t Get_Count();
void EXTI15_10_IRQHandler(void);

#endif

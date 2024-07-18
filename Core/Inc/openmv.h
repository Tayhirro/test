#ifndef __OpenMV_H
#define	__OpenMV_H
#include "stm32f4xx_hal.h"

void  Openmv_Receive_Data(int16_t data);
 

extern uint8_t CxErr,CyErr; //目标物体中心坐标的误差
extern uint8_t Cx,Cy,Cw,Ch;

 
#endif


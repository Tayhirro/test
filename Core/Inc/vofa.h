#ifndef __VOFA_H__
#define __VOFA_H__

#include "headfile.h"


/*定义共同体变量类型*/
typedef union
{
    float Fdata;         //以浮点数形式读取变量
    uint32_t Adata;      //以32位无符号形式读取变量
    
}Vofa_Type;




void Float_to_Byte(float Fdata,  uint8_t *ArrayByte);
void JustFloat(void);
void Serial_SendArray(uint8_t *Array, uint16_t Length);



#endif /* __VOFA_H */
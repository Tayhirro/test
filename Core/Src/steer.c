#include "steer.h"





//brief: Set the angle of the motor
//param: 从-90到90
void steer_set_up_angle(int16_t angle)     
{
    // Set the angle of the motor
    // angle: the angle to set the motor to
    // Return: None
    // Set the angle of the motor
    //限幅
    if(angle > 90)
    {
        angle = 90;
    }
    else if(angle < -90)
    {
        angle = -90;
    }
    //20ms内有0.5ms为-90度，2.5ms为90度
    //映射到500~2500
    //angle = angle + 90;
    uint32_t pulse = 500 + (angle + 90) * 2000 / 180;
    //设置占空比
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, pulse);
}
void steer_set_down_angle(int16_t angle)
{
     //限幅
    if(angle > 90)
    {
        angle = 90;
    }
    else if(angle < -90)
    {
        angle = -90;
    }
    //20ms内有0.5ms为-90度，2.5ms为90度
    //映射到500~2500
    //angle = angle + 90;
    uint32_t pulse = 500 + (angle + 90) * 2000 / 180;
    //设置占空比
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, pulse);

}
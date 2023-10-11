#pragma once

#include "../main.h"

class PWM_Controller
{
private:
    TIM_HandleTypeDef *htim;
    uint32_t channel;
    uint32_t duty;
    uint32_t count_max;

public:
    PWM_Controller(TIM_HandleTypeDef *_htim, uint32_t _channel, uint32_t _duty = 0)
        : htim(_htim),
          channel(_channel),
          duty(_duty),
          count_max(htim->Init.Period)
    {
        __HAL_TIM_SET_COMPARE(_htim, _channel, _duty);
    }

    void Start()
    {
        HAL_TIM_PWM_Start(htim, channel);
    }

    void Stop()
    {
        HAL_TIM_PWM_Stop(htim, channel);
    }

    void Set_Duty(uint32_t _duty)
    {
        duty = _duty;
        __HAL_TIM_SET_COMPARE(htim, channel, duty);
    }

    void Set_Ratio(float ratio)
    {
        Set_Duty(static_cast<float>(count_max) * ratio);
    }

    uint32_t Get_Duty()
    {
        return duty;
    }

    float Get_Ratio()
    {
        return static_cast<float>(Get_Duty()) / count_max;
    }
};
#pragma once

#include "pwm_controller.hh"

class Motor_Controller
{
private:
    PWM_Controller pwm_controller_a;
    PWM_Controller pwm_controller_b;

public:
    Motor_Controller(
        PWM_Controller _pwm_controller_a,
        PWM_Controller _pwm_controller_b)

        : pwm_controller_a(_pwm_controller_a),
          pwm_controller_b(_pwm_controller_b)
    {
        pwm_controller_a.Start();
        pwm_controller_a.Set_Duty(0);

        pwm_controller_b.Start();
        pwm_controller_b.Set_Duty(0);

        Set_Speed(0.0);
    }

    Motor_Controller(
        TIM_HandleTypeDef *_tim_a,
        uint32_t channel_a,
        TIM_HandleTypeDef *_tim_b,
        uint32_t channel_b)

        : Motor_Controller(
              PWM_Controller(_tim_a, channel_a),
              PWM_Controller(_tim_b, channel_b))
    {
    }

    void Set_Speed(float ratio)
    {
        assert_param(-1.0 <= ratio && ratio <= 1.0);
        pwm_controller_a.Set_Ratio((1.0 + ratio) / 2.0);
        pwm_controller_b.Set_Ratio((1.0 - ratio) / 2.0);
    }
};
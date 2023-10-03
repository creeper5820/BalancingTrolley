#pragma once

/**
 * @brief Some factors of controller for speed, balance
 * @param angle_mid     机械中值 需调参
 * @param vertical_kp   直立环Kp 需调参
 * @param vertical_kd   直立环Kd 需调参
 * @param velocity_kp   速度环Kp 需调参
 * @param velocity_ki   速度环Ki 需调参
 * @param turn_kp       转向环Kp 需调参
 */
typedef struct Factor_Motion {

    float angle_mid;

    float vertical_kp;
    float vertical_kd;

    float velocity_kp;
    float velocity_ki;

    float turn_kp;

} Factor_Motion;

/**
 * @brief The controller of motion including many function to set and control
 */
class Controller_Motion {

private:
    Factor_Motion factor;

    float vertical_out;
    float velocity_out;
    float turn_out;

public:
    /**
     * @brief Construction functions with or without params
     */

    Controller_Motion();
    Controller_Motion(Factor_Motion _factor);

    /**
     * @brief Functions to set factors
     */

    void Set_Angle_Mid(float _angle_mid);
    void Set_Vertical_Kp(float _vertical_kp);
    void Set_Vertical_Kd(float _vertical_kd);
    void Set_Velocity_Kp(float _velocity_kp);
    void Set_Velocity_Ki(float _velocity_ki);
    void Set_Turn_Kp(float _turn_kp);

    /**
     * @brief Calculate functions
     */

    int Get_PWM_Vertical(float angle_current, float angle_ture, float speed_angle);
    int Get_PWM_Velocity(int encoder_left, int encoder_right);
    int Get_PWM_Turn(int gyro_z);
};
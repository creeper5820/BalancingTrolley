#include "motion.hh"

Controller_Motion::Controller_Motion() { }

Controller_Motion::Controller_Motion(Factor_Motion _factor)
    : factor(_factor)
{
}

void Controller_Motion::Set_Angle_Mid(float _angle_mid)
{
    factor.angle_mid = _angle_mid;
}
void Controller_Motion::Set_Vertical_Kp(float _vertical_kp)
{
    factor.velocity_kp = _vertical_kp;
}
void Controller_Motion::Set_Vertical_Kd(float _vertical_kd)
{
    factor.vertical_kd = _vertical_kd;
}
void Controller_Motion::Set_Velocity_Kp(float _velocity_kp)
{
    factor.velocity_kp = _velocity_kp;
}
void Controller_Motion::Set_Velocity_Ki(float _velocity_ki)
{
    factor.velocity_ki = _velocity_ki;
}
void Controller_Motion::Set_Turn_Kp(float _turn_kp)
{
    factor.turn_kp = _turn_kp;
}

int Controller_Motion::Get_PWM_Vertical(float angle_set, float angle_current, float speed_angle)
{
}
int Controller_Motion::Get_PWM_Velocity(int encoder_left, int encoder_right)
{
}
int Controller_Motion::Get_PWM_Turn(int gyro_z)
{
    return factor.turn_kp * gyro_z;
}
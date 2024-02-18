#include "include/BallScrew.h"

void BallScrew::PreStep()
{
    Code_Gen_Model_U.Ball_Screw_Quad_Pos = Ball_Screw_Encoder.GetQuadraturePosition();
    Code_Gen_Model_U.Ball_Screw_PWM_Pos = Ball_Screw_Encoder.GetPulseWidthPosition();
}

void BallScrew::PostStep()
{
    Ball_Screw_Motor.Set(ctre::phoenix::motorcontrol::TalonSRXControlMode::PercentOutput, Code_Gen_Model_Y.Ball_Screw_Motor_DutyCycle);
}
#include "include/Shooter.h"

void Shooter::InitShooter()
{
    Left_Motor.RestoreFactoryDefaults();
    Right_Motor.RestoreFactoryDefaults();
    Left_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    Right_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
}

void Shooter::PreStep()
{
    Code_Gen_Model_U.Shooter_TOF_Dist = TOF_Sensor.GetRange();
    
    Code_Gen_Model_U.Shooter_Left_Motor_RPM = Left_Relative_Encoder.GetVelocity();
    Code_Gen_Model_U.Shooter_Right_Motor_RPM = Right_Relative_Encoder.GetVelocity();
}

void Shooter::PostStep()
{
    if(!Code_Gen_Model_Y.Shooter_Brake_Enable)
    {
        Left_Motor.Set(Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle);
        Right_Motor.Set(Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle);
    }
    else
    {
        Left_Motor.StopMotor();
        Right_Motor.StopMotor();
    }

    Unicorn_Horn_Servo.Set(Code_Gen_Model_Y.Shooter_Servo_Position);
}
#include "include/Shooter.h"

void Shooter::PreStep()
{
    Code_Gen_Model_U.Shooter_TOF_Dist = TOF_Sensor.GetRange();
    Code_Gen_Model_U.Shooter_TOF_Error = TOF_Sensor.GetRangeSigma();
    
    Code_Gen_Model_U.Shooter_Left_Motor_RPM = Left_Relative_Encoder.GetVelocity();
    Code_Gen_Model_U.Shooter_Right_Motor_RPM = Right_Relative_Encoder.GetVelocity();
}

void Shooter::PostStep()
{
    Left_Motor.Set(Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle);
    Right_Motor.Set(Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle);
}
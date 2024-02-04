#include "include/Intake.h"

void Intake::PreStep()
{
    Code_Gen_Model_U.Intake_TOF_Dist = TOF_Sensor.GetRange();
    Code_Gen_Model_U.Intake_TOF_Error = TOF_Sensor.GetRangeSigma();
}

void Intake::PostStep()
{
    Intake_Motor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, Code_Gen_Model_Y.Intake_Motor_DutyCycle);
}
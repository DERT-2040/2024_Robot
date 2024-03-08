#include "include/Intake.h"

void Intake::PreStep()
{
    Code_Gen_Model_U.Intake_TOF_Dist = TOF_Sensor.GetRange();
}

void Intake::PostStep()
{
    Intake_Motor.Set(Code_Gen_Model_Y.Intake_Motor_DutyCycle);
}

void Intake::Initalize()
{
    Intake_Motor.RestoreFactoryDefaults();
    Intake_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    
    //kStatus0
    Intake_Motor.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus0, Constants::CAN_Adjustment_Values::kStatus1_ms);
    //kStatus1
    Intake_Motor.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus2_ms);

}
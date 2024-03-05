#include "include/BallScrew.h"

void BallScrew::PreStep()
{
    Code_Gen_Model_U.Encoder_Revs_Ball_Screw = m_BallScrew_Encoder.GetPosition();
}

void BallScrew::PostStep()
{
    m_BallScrew_Motor.Set(Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle);
    
}

void BallScrew::Initalize()
{
    m_BallScrew_Motor.RestoreFactoryDefaults();
    m_BallScrew_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    //kStatus0
    m_BallScrew_Motor.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus0, Constants::CAN_Adjustment_Values::kStatus0_ms);
    //kStatus1
    m_BallScrew_Motor.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
}

// void BallScrew::RobotCallback(Robot MainRobot)
// {

// }
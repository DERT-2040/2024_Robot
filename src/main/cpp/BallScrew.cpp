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
{   //Restore factoroy defaults
    m_BallScrew_Motor.RestoreFactoryDefaults();

    //Set motor direction
    m_BallScrew_Motor.SetInverted(Constants::BallScrew_Constants::k_Ball_Screw_Is_Reversed);

    //Set idle mode to brake
    m_BallScrew_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);

    //Set smart current limit    
    m_BallScrew_Motor.SetSmartCurrentLimit(Constants::BallScrew_Constants::k_Ball_Screw_Smart_Current_Limit);

    //Set secondary current limit (not sure what this does)
    m_BallScrew_Motor.SetSecondaryCurrentLimit(Constants::BallScrew_Constants::k_Ball_Screw_Secondary_Current_Limit);

    //kStatus0
    m_BallScrew_Motor.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus0, Constants::CAN_Adjustment_Values::kStatus1_ms);
    
    //kStatus1
    m_BallScrew_Motor.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus2_ms);

    if(!frc::Preferences::ContainsKey(Constants::BallScrew_Constants::k_Ball_Screw_Off_Position_Key))
        frc::Preferences::SetDouble(Constants::BallScrew_Constants::k_Ball_Screw_Off_Position_Key, 0.0);
}

void BallScrew::SetBallScrewPosition()
{
    frc::Preferences::SetDouble(Constants::BallScrew_Constants::k_Ball_Screw_Off_Position_Key, m_BallScrew_Encoder.GetPosition());
}

void BallScrew::ResetBallScrew()
{
    m_BallScrew_Encoder.SetPosition(0);
}

// void BallScrew::RobotCallback(Robot MainRobot)
// {

// }
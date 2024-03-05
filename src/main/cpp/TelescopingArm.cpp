#include "include/TelescopingArm.h"


void TelescopingArm::PreStep()
{
    Code_Gen_Model_U.Encoder_Revs_Back_Lower = Encoder_Back_Lower.GetPosition();
    Code_Gen_Model_U.Encoder_Revs_Back_Upper = Encoder_Back_Upper.GetPosition();
    Code_Gen_Model_U.Encoder_Revs_Front = Encoder_Front.GetPosition();

}

void TelescopingArm::PostStep()
{
    Motor_Back_Lower.Set(Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle);
    Motor_Back_Upper.Set(Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle);
    Motor_Front.Set(Code_Gen_Model_Y.Front_Arm_DutyCycle);    
}

void TelescopingArm::Initalize()
{
    Motor_Back_Lower.RestoreFactoryDefaults();
    Motor_Back_Upper.RestoreFactoryDefaults();
    Motor_Front.RestoreFactoryDefaults();
    Motor_Back_Lower.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    Motor_Back_Upper.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    Motor_Front.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    
    //kStatus0
    Motor_Back_Lower.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus0, Constants::CAN_Adjustment_Values::kStatus0_ms);
    Motor_Back_Upper.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus0, Constants::CAN_Adjustment_Values::kStatus0_ms);
    Motor_Front.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus0, Constants::CAN_Adjustment_Values::kStatus0_ms);
    //kStatus1
    Motor_Back_Lower.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    Motor_Back_Upper.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    Motor_Front.SetPeriodicFramePeriod(rev::CANSparkMaxLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
}
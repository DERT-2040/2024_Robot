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

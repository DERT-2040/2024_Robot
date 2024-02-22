#include "include/BallScrew.h"

void BallScrew::PreStep()
{
    Code_Gen_Model_U.Encoder_Revs_Ball_Screw = m_BallScrew_Encoder.GetPosition();
}

void BallScrew::PostStep()
{
    m_BallScrew_Motor.Set(Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle);
    
}
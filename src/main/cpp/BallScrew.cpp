#include "include/BallScrew.h"

void BallScrew::PreStep()
{
    Code_Gen_Model_U.Ball_Screw_Quad_Pos = m_BallScrew_Encoder.GetPosition();
}

void BallScrew::PostStep()
{
    m_BallScrew_Motor.Set(Code_Gen_Model_Y.Ball_Screw_Motor_DutyCycle);
    
}
#include "Include/Climber.h"

void Climber::PreStep()
{
    Code_Gen_Model_U.Climber_Encoder_Revs = m_Climber_Encoder.GetPosition();
}

void Climber::PostStep()
{
    m_Climber_Motor.Set(Code_Gen_Model_Y.Climber_DutyCycle);
}

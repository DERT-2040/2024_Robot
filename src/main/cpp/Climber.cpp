#include "include/Climber.h"

void Climber::PreStep()
{
    Code_Gen_Model_U.Encoder_Revs_Climber = m_Climber_Encoder.GetPosition();
}

void Climber::PostStep()
{
    m_Climber_Motor.Set(Code_Gen_Model_Y.Climber_DutyCycle);
}

void Climber::Initalize()
{   //Restore factoroy defaults
    m_Climber_Motor.RestoreFactoryDefaults();

    //Set motor direction
    m_Climber_Motor.SetInverted(Constants::Climber_Constants::k_Climber_Is_Reversed);
}
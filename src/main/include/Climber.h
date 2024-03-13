#pragma once

#include <rev/CANSparkMax.h>
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

class Climber
{
public:
    void PreStep();
    void PostStep();
    void Initalize();
private:
    rev::CANSparkMax m_Climber_Motor{Constants::Climber_Constants::Climber_Motor_Device_ID, rev::CANSparkMax::MotorType::kBrushless};
    rev::SparkRelativeEncoder m_Climber_Encoder{m_Climber_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
};
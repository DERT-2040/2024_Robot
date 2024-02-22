#pragma once

#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include <rev/CANSparkMax.h>
#include <rev/SparkRelativeEncoder.h>

class BallScrew
{
public:
    void PreStep();
    void PostStep();
private:
     rev::CANSparkMax m_BallScrew_Motor{Constants::BallScrew_Constants::k_BallScrew_Drive_CANID, rev::CANSparkMax::MotorType::kBrushless}; 
     rev::SparkRelativeEncoder m_BallScrew_Encoder{m_BallScrew_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
};
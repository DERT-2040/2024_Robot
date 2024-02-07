#pragma once

#include "rev/CANSparkMax.h"
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include <TimeOfFlight.h>

class Shooter
{
public:
    void InitShooter();
    void PreStep();
    void PostStep();
private:
    frc::TimeOfFlight TOF_Sensor{Constants::Shooter_Constants::TOF_ID};

    rev::CANSparkMax Left_Motor{Constants::Shooter_Constants::Left_Shooter_Motor_CANID, rev::CANSparkLowLevel::MotorType::kBrushless};
    rev::CANSparkMax Right_Motor{Constants::Shooter_Constants::Right_Shooter_Motor_CANID, rev::CANSparkLowLevel::MotorType::kBrushless};
    
    rev::SparkRelativeEncoder Left_Relative_Encoder{Left_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder Right_Relative_Encoder{Right_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
};
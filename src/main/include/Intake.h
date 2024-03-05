#pragma once
#include <TimeOfFlight.h>
#include <rev/CANSparkMax.h>
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

class Intake
{
public:
    void PreStep();
    void PostStep();
    void Initalize();
private:
    frc::TimeOfFlight TOF_Sensor{Constants::Intake_Constants::TOF_ID};
    rev::CANSparkMax Intake_Motor{Constants::Intake_Constants::Intake_Motor_Device_ID, rev::CANSparkMax::MotorType::kBrushless};
};
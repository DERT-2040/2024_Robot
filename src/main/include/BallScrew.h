#pragma once
#include <ctre/phoenix/motorcontrol/can/TalonSRX.h>
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "ctre/phoenix/motorcontrol/SensorCollection.h"

class BallScrew
{
public:
    void PreStep();
    void PostStep();
private:
    ctre::phoenix::motorcontrol::can::TalonSRX Ball_Screw_Motor{Constants::BallScrew_Constants::Ball_Screw_Motor_ID};
    ctre::phoenix::motorcontrol::SensorCollection Ball_Screw_Encoder{Ball_Screw_Motor};
};
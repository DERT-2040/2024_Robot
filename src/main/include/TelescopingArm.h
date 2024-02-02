#pragma once

#include <TimeOfFlight.h>
#include "frc/SmartDashboard/smartdashboard.h"

class TelescopingArm
{
public:
    TelescopingArm(uint8_t TOF_Sensor_ID_In);
    void SmartDashboardCallback();
    void PreStep();
    void PostStep();

private:
    frc::TimeOfFlight TOF_Sensor{TOF_Sensor_ID};
    uint8_t TOF_Sensor_ID;
    double range{-1};
    double error{-1};
};
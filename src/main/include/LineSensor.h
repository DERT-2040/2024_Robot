#pragma once

#include <include/Constants.h>
#include <TimeOfFlight.h>
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "frc/SmartDashboard/SmartDashboard.h"

class LineSensor
{
private:
    frc::TimeOfFlight Line_Sensor{Constants::Line_Sensor_Constants::Line_SensorID};
public:

    void SmartDashboardCallback();
    void PreStep();
    void PostStep();
};


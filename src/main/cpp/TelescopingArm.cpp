#include "include/TelescopingArm.h"

TelescopingArm::TelescopingArm(uint8_t TOF_Sensor_ID_In) :
    TOF_Sensor_ID(TOF_Sensor_ID_In)
{
    TOF_Sensor.SetRangingMode(frc::TimeOfFlight::RangingMode::kShort, 20);
}

void TelescopingArm::PreStep()
{
    range = TOF_Sensor.GetRange();
    error = TOF_Sensor.GetRangeSigma();
}

void TelescopingArm::PostStep()
{

}

void TelescopingArm::SmartDashboardCallback()
{
    frc::SmartDashboard::PutNumber(("TOF Sensor dist " + TOF_Sensor_ID), range);
    frc::SmartDashboard::PutNumber(("TOF Sensor error " + TOF_Sensor_ID), error);
}
#include "include/LineSensor.h"

void LineSensor::PreStep()
{
    Code_Gen_Model_U.Line_Sensor_TOF_Range = Line_Sensor.GetRange();
}

void LineSensor::PostStep()
{

}

// void SmartDashboardCallback()
// {
//     SmartDashboard::putNumber("IsNoteThere", SmartDashboard::getDefault().getTable("Vision").getNumber("IsNoteThere"));
// }
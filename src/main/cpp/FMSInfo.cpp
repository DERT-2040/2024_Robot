#include "Include/FMSInfo.h"

void FMSInfo::Initalize()
{

}

void FMSInfo::PreStep()
{

}

void FMSInfo::PostStep()
{

}

void FMSInfo::WhenGameStateChanges()
{
    std::optional<frc::DriverStation::Alliance> CurrentAlliance = frc::DriverStation::GetAlliance();
    if(!CurrentAlliance.has_value())
        Code_Gen_Model_U.IsBlueAlliance = 1;
    else
        Code_Gen_Model_U.IsBlueAlliance = CurrentAlliance.value();
}
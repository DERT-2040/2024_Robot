//local
#include "include/SmartDashboard.h"

void SmartDashboard::BindSmartDashboardCallback(std::function<void()> callback)
{
        vectorOfCallbacks.push_back(callback);
}

void SmartDashboard::UpdateSDValues()
{
        for (auto x : vectorOfCallbacks) {
                x();
        }

        frc::SmartDashboard::UpdateValues();
}       

void SmartDashboard::UpdateAutonomous()
{       
        // std::span<const double> DefaultPriorityList;
        // frc::SmartDashboard::GetNumberArray(Constants::SmartDashboard_Constants::k_PriorityList_SD_Key, DefaultPriorityList);
}
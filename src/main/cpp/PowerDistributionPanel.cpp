#include "include/PowerDistributionPanel.h"
#include "include/Constants.h"

void PowerDistributionPanel::PreStep()
{
    Code_Gen_Model_U.Motor_Current_Back_Lower = m_pdp.GetCurrent(Constants::PowerDistributionPanel_Constants::CurrentIDBackLower);
    Code_Gen_Model_U.Motor_Current_Back_Upper = m_pdp.GetCurrent(Constants::PowerDistributionPanel_Constants::CurrentIDBackUpper);
    Code_Gen_Model_U.Motor_Current_Ball_Screw = m_pdp.GetCurrent(Constants::PowerDistributionPanel_Constants::CurrentIDBallScrew);
    Code_Gen_Model_U.Motor_Current_Front = m_pdp.GetCurrent(Constants::PowerDistributionPanel_Constants::CurrentIDFront);
}

void PowerDistributionPanel::PostStep()
{

}
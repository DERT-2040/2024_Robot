#pragma once

#include "frc/PowerDistribution.h"
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

class PowerDistributionPanel 
{
    public:

        void PreStep();

        void PostStep();

    private:

        frc::PowerDistribution m_pdp{Constants::PowerDistributionPanel_Constants::pdp_CanId, frc::PowerDistribution::ModuleType::kCTRE}; 


};
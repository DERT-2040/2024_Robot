#pragma once
#include <frc/DriverStation.h>
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

class FMSInfo
{
public:
  void Initalize();
  void PreStep();
  void PostStep();
  void WhenGameStateChanges();
};

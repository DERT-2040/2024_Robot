// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

//local
#include "include/Robot.h"

void Robot::RobotInit() {
  Code_Gen_Model_U.GameState = -1;
  Code_Gen_Model_initialize(); //code gen model init
  BindSDCallbacks();
  m_SwerveDrive.BrakeMode(); //set all motors to coast mode
  m_IMU.Reset();
  m_SimulinkSmartDashboardInterface.InitSmartDashboardInterface();
  BindSDCallbacks();
}
void Robot::RobotPeriodic() {  
    m_Tracer.ResetTimer();
    
  if(Robot::m_HIDs.Get_Drive_Joystick().GetRawButtonPressed(Constants::k_Toggle_Absolute_Translation_Button)){
    m_SwerveDrive.Toggle_Absolute_Translation();
    std::cout << "Translation Method Toggled" << std::endl;
  }

  if(Robot::m_HIDs.Get_Drive_Joystick().GetRawButtonPressed(Constants::k_Toggle_Absolute_Steering_Button)){
    m_SwerveDrive.Toggle_Absolute_Steering();
    std::cout << "Steering Method Toggled" << std::endl;
  }
    
  PreStep(); //Robot wide PreStep
    m_Tracer.AddEpoch("After PreStep");

  Code_Gen_Model_step(); //Step the model
    m_Tracer.AddEpoch("After Simulink");

  PostStep(); //Robot wide PostStep
  m_Tracer.AddEpoch("After PostStep");

  // m_Tracer.PrintEpochs();
}

void Robot::AutonomousInit() { Code_Gen_Model_U.GameState = 1; GameInitValues();}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {Code_Gen_Model_U.GameState = 2; GameInitValues();}
void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {Code_Gen_Model_U.GameState = 0; GameInitValues();}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {Code_Gen_Model_U.GameState = 3; GameInitValues();}
void Robot::TestPeriodic() {
  if(Robot::m_HIDs.Get_Drive_Joystick().GetRawButtonPressed(Constants::k_TestMode_Wheel_On))
    m_SwerveDrive.WheelsOn();
  if(Robot::m_HIDs.Get_Drive_Joystick().GetRawButtonPressed(Constants::k_TestMode_Wheel_Off))
    m_SwerveDrive.WheelsOff();
    /**
     * Wheel calibration procedure:
     * 1. Go into 'Test' game state
     * 2. Push the Wheel Off button (left/drive joystick button #6).  This sets steering duty cycle to 0 and puts them into coast mode.
     * 3. Alight the wheels with gears facing RIGHT.  If this is done backwards then robot will steer in the opposite directions.
     * 4. Push the Calibrate button (left/drive joystick button #8).
     * 5. (optional) Push the Wheel On button (left/drive joystick button #11).  
     */
  if(Robot::m_HIDs.Get_Drive_Joystick().GetRawButtonPressed(Constants::k_Reset_Wheel_Offset_Button)){
    m_SwerveDrive.Reset_Wheel_Offset();
    std::cout << "Wheel Offsets Reset" << std::endl;
  }
}

void Robot::SimulationInit() {}
void Robot::SimulationPeriodic() {}

void Robot::PreStep() {
  m_PhotonVisionInterface.PreStep();
  m_HIDs.PreStep();
  m_IMU.PreStep();
  m_SwerveDrive.PreStep();
  Test_Arm.PreStep();
}

void Robot::PostStep() {
  m_PhotonVisionInterface.PostStep();
  m_HIDs.PostStep();
  m_IMU.PostStep();
  m_SwerveDrive.PostStep();
  Test_Arm.PostStep();
  m_SmartDashboard.UpdateSDValues();
}

void Robot::GameInitValues() {
  m_SwerveDrive.GameInitValues();
}

void Robot::BindSDCallbacks() {
  m_SmartDashboard.BindSmartDashboardCallback(std::bind(&PhotonVisionInterface::SmartDashboardCallback, &m_PhotonVisionInterface));
  m_SmartDashboard.BindSmartDashboardCallback(std::bind(&SimulinkSmartDashboardInterface::SmartDashboardCallback, &m_SimulinkSmartDashboardInterface));
  m_SmartDashboard.BindSmartDashboardCallback(std::bind(&SwerveDrive::SmartDashboardCallback, &m_SwerveDrive));
  m_SmartDashboard.BindSmartDashboardCallback(std::bind(&TelescopingArm::SmartDashboardCallback, &Test_Arm));
}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

//local
#include "include/Robot.h"

void Robot::RobotInit()
{
  Initalize();
  Code_Gen_Model_U.GameState = -1;
  Code_Gen_Model_initialize(); //code gen model init
  BindSDCallbacks();
  m_SwerveDrive.BrakeMode(); //set all motors to coast mode
  m_IMU.Reset();
  m_SimulinkSmartDashboardInterface.InitSmartDashboardInterface();
  BindSDCallbacks();
}

void Robot::RobotPeriodic()
{  
    m_Tracer.ClearEpochs();
    m_Tracer.AddEpoch("After ClearEpochs");
    
  if(Robot::m_HIDs.Get_Left_Joystick().GetRawButtonPressed(Constants::k_Toggle_Absolute_Translation_Button)){
    m_SwerveDrive.Toggle_Absolute_Translation();
    std::cout << "Translation Method Toggled" << std::endl;
  }

  if(Robot::m_HIDs.Get_Left_Joystick().GetRawButtonPressed(Constants::k_Toggle_Absolute_Steering_Button)){
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

void Robot::AutonomousInit() { Code_Gen_Model_U.GameState = 1; WhenGameStateChanges();}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {Code_Gen_Model_U.GameState = 2; WhenGameStateChanges();}
void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {Code_Gen_Model_U.GameState = 0; WhenGameStateChanges();}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {Code_Gen_Model_U.GameState = 3; WhenGameStateChanges();}
void Robot::TestPeriodic() 
{
  if(Robot::m_HIDs.Get_Left_Joystick().GetRawButtonPressed(Constants::k_TestMode_Wheel_On))
    m_SwerveDrive.WheelsOn();
  if(Robot::m_HIDs.Get_Left_Joystick().GetRawButtonPressed(Constants::k_TestMode_Wheel_Off))
    m_SwerveDrive.WheelsOff();
    /**
     * Wheel calibration procedure:
     * 1. Go into 'Test' game state
     * 2. Push the Wheel Off button (see Constants file).  This sets steering duty cycle to 0 and puts them into coast mode.
     * 3. Align the wheels with gears facing RIGHT.  If this is done backwards then robot will steer in the opposite directions.
     * 4. Push the Calibrate button (see Constants file).
     * 5. (optional) Push the Wheel On button (see Constants file).  
     */
  if(Robot::m_HIDs.Get_Left_Joystick().GetRawButtonPressed(Constants::k_Reset_Wheel_Offset_Button))
    m_SwerveDrive.Reset_Wheel_Offset();
  if(m_HIDs.Get_Gamepad().GetRawButtonPressed(Constants::BallScrew_Constants::k_Reset_Zero_Button))
    m_BallScrew.ResetBallScrew();
  if(m_HIDs.Get_Gamepad().GetRawButtonPressed(Constants::BallScrew_Constants::k_Set_Off_Position))
    m_BallScrew.SetBallScrewPosition();
}

void Robot::SimulationInit() {}
void Robot::SimulationPeriodic() {}

void Robot::PreStep() 
{
  for (std::function<void()> Callback : PreStepCallbacks) {
    Callback();
  }
}

void Robot::PostStep() 
{
  for (std::function<void()> Callback : PostStepCallbacks) {
    Callback();
  }
}

void Robot::WhenGameStateChanges() 
{
  for (std::function<void()> Callback : ChangeGameStateCallbacks) {
    Callback();
  }
}

void Robot::UpdateSmartDashboardValues(){
  for (std::function<void()> Callback : SmartDashboardCallbacks) {
    Callback();
  }
  frc::SmartDashboard::UpdateValues();
}

void Robot::BindSmartDashboardCallback(std::function<void()> callback) 
{
  PreStepCallbacks.push_back(callback);
}

void Robot::BindPreStepCallbacks(std::function<void()> callback)
{
  PreStepCallbacks.push_back(callback);
}

void Robot::BindPostStepCallbacks(std::function<void()> callback)
{
  PostStepCallbacks.push_back(callback);
}

void Robot::BindChangeGameStatesCallback(std::function<void()> callback)
{
  ChangeGameStateCallbacks.push_back(callback);
}

#ifndef RUNNING_FRC_TESTS
int main() 
{
  return frc::StartRobot<Robot>();
}
#endif

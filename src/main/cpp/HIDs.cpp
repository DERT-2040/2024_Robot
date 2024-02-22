//local
#include "include\HIDs.h"


void HIDs::PreStep() {
    // Steer and Drive Joysticks
    Code_Gen_Model_U.Joystick_Left_X = -m_Left_Joystick.GetY();
    Code_Gen_Model_U.Joystick_Left_Y = -m_Left_Joystick.GetX();
    Code_Gen_Model_U.Joystick_Left_Z = m_Left_Joystick.GetZ();
    Code_Gen_Model_U.Joystick_Right_X = -m_Right_Joystick.GetY();
    Code_Gen_Model_U.Joystick_Right_Y = -m_Right_Joystick.GetX();
    Code_Gen_Model_U.Joystick_Right_Z = m_Right_Joystick.GetZ();

    // Gamepad Controller
    // Code_Gen_Model_U.Drive_Joystick_X = -m_Gamepad.GetRawAxis(1);
    // Code_Gen_Model_U.Drive_Joystick_Y = -m_Gamepad.GetRawAxis(0);
    // Code_Gen_Model_U.Steer_Joystick_X = -m_Gamepad.GetRawAxis(5);
    // Code_Gen_Model_U.Steer_Joystick_Y = -m_Gamepad.GetRawAxis(4);


    // Trigger
    Code_Gen_Model_U.Joystick_Left_B1 = m_Left_Joystick.GetRawButton(1);
    Code_Gen_Model_U.Joystick_Left_B2 = m_Left_Joystick.GetRawButton(2);            
    Code_Gen_Model_U.Joystick_Left_B3 = m_Left_Joystick.GetRawButton(3);           
    Code_Gen_Model_U.Joystick_Left_B4 = m_Left_Joystick.GetRawButton(4);          
    Code_Gen_Model_U.Joystick_Left_B8 = m_Left_Joystick.GetRawButton(8);       
    Code_Gen_Model_U.Joystick_Left_B10 = m_Left_Joystick.GetRawButton(10);       
    Code_Gen_Model_U.Joystick_Right_B1 = m_Right_Joystick.GetRawButton(1);         
    Code_Gen_Model_U.Joystick_Right_B2 = m_Right_Joystick.GetRawButton(2);    
    Code_Gen_Model_U.Joystick_Right_B3 = m_Right_Joystick.GetRawButton(3);        
    Code_Gen_Model_U.Joystick_Right_B4 = m_Right_Joystick.GetRawButton(4);             
    Code_Gen_Model_U.Joystick_Right_B8 = m_Right_Joystick.GetRawButton(8);    
    Code_Gen_Model_U.Joystick_Right_B10 = m_Right_Joystick.GetRawButton(10);   
    Code_Gen_Model_U.Joystick_Right_POV = m_Right_Joystick.GetPOV();
}
void HIDs::PostStep() {}
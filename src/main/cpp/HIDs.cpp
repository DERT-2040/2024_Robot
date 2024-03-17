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

    // Joystick Buttons
    Code_Gen_Model_U.Joystick_Left_B1 = m_Left_Joystick.GetRawButton(1);
    Code_Gen_Model_U.Joystick_Left_B2 = m_Left_Joystick.GetRawButton(2);            
    Code_Gen_Model_U.Joystick_Left_B3 = m_Left_Joystick.GetRawButton(3);           
    Code_Gen_Model_U.Joystick_Left_B4 = m_Left_Joystick.GetRawButton(4);          
    Code_Gen_Model_U.Joystick_Left_B7 = m_Left_Joystick.GetRawButton(7); 
    Code_Gen_Model_U.Joystick_Left_B8 = m_Left_Joystick.GetRawButton(8);       
    Code_Gen_Model_U.Joystick_Left_B10 = m_Left_Joystick.GetRawButton(10);
    Code_Gen_Model_U.Joystick_Left_B13 = m_Left_Joystick.GetRawButton(13);  
    Code_Gen_Model_U.Joystick_Left_B14 = m_Left_Joystick.GetRawButton(14);     
    Code_Gen_Model_U.Joystick_Left_POV = m_Left_Joystick.GetPOV();    

    Code_Gen_Model_U.Joystick_Right_B1 = m_Right_Joystick.GetRawButton(1);         
    Code_Gen_Model_U.Joystick_Right_B2 = m_Right_Joystick.GetRawButton(2);    
    Code_Gen_Model_U.Joystick_Right_B3 = m_Right_Joystick.GetRawButton(3);        
    Code_Gen_Model_U.Joystick_Right_B4 = m_Right_Joystick.GetRawButton(4);             
    Code_Gen_Model_U.Joystick_Right_B7 = m_Right_Joystick.GetRawButton(7);
    Code_Gen_Model_U.Joystick_Right_B8 = m_Right_Joystick.GetRawButton(8);    
    Code_Gen_Model_U.Joystick_Right_B10 = m_Right_Joystick.GetRawButton(10);
    Code_Gen_Model_U.Joystick_Right_B13 = m_Right_Joystick.GetRawButton(13);
    Code_Gen_Model_U.Joystick_Right_B14 = m_Right_Joystick.GetRawButton(14);     
    Code_Gen_Model_U.Joystick_Right_POV = m_Right_Joystick.GetPOV();

    // Gamepad
    Code_Gen_Model_U.Gamepad_Stick_Left_X = m_Gamepad.GetRawAxis(0);
    Code_Gen_Model_U.Gamepad_Stick_Left_Y = -m_Gamepad.GetRawAxis(1);
       
    Code_Gen_Model_U.Gamepad_Stick_Right_X = m_Gamepad.GetRawAxis(4);
    Code_Gen_Model_U.Gamepad_Stick_Right_Y = -m_Gamepad.GetRawAxis(5);  

    Code_Gen_Model_U.Gamepad_B1_A = m_Gamepad.GetRawButton(1);
    Code_Gen_Model_U.Gamepad_B4_Y = m_Gamepad.GetRawButton(4);    
    Code_Gen_Model_U.Gamepad_LB = m_Gamepad.GetRawButton(5);
    Code_Gen_Model_U.Gamepad_RB = m_Gamepad.GetRawButton(6);
    Code_Gen_Model_U.Gamepad_Back = m_Gamepad.GetRawButton(7);
    Code_Gen_Model_U.Gamepad_Start = m_Gamepad.GetRawButton(8);

    Code_Gen_Model_U.Gamepad_LT = m_Gamepad.GetRawAxis(2);
    Code_Gen_Model_U.Gamepad_RT = m_Gamepad.GetRawAxis(3);

}
void HIDs::PostStep() {}
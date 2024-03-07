#pragma once
//std
#include <string>
#include <rev/CANSparkLowLevel.h>
class Constants {
public:
//HID Ports
    static constexpr int k_Gamepad_Port = 0;
    static constexpr int k_Left_Joystick_Port = 1;
    static constexpr int k_Right_Joystick_Port = 2;    
//Swerve Drive
    //Drive Motor CAN IDs
        static constexpr int k_FrontLeft_Drive_CANID = 4;
        static constexpr int k_FrontRight_Drive_CANID = 8;
        static constexpr int k_BackLeft_Drive_CANID = 2;
        static constexpr int k_BackRight_Drive_CANID = 6;
    //Steer Motor CAN IDs
        static constexpr int k_FrontLeft_Steer_CANID = 3;
        static constexpr int k_FrontRight_Steer_CANID = 7;
        static constexpr int k_BackLeft_Steer_CANID = 1;
        static constexpr int k_BackRight_Steer_CANID = 5;
    //Drive Motor Reversal
        static constexpr bool k_FrontLeft_Drive_Is_Reversed = false;
        static constexpr bool k_FrontRight_Drive_Is_Reversed = false;
        static constexpr bool k_BackLeft_Drive_Is_Reversed = false;
        static constexpr bool k_BackRight_Drive_Is_Reversed = false;
    //Steer Motor Reversal
        static constexpr bool k_FrontLeft_Steer_Is_Reversed = true;
        static constexpr bool k_FrontRight_Steer_Is_Reversed = true;
        static constexpr bool k_BackLeft_Steer_Is_Reversed = true;
        static constexpr bool k_BackRight_Steer_Is_Reversed = true;
    //Steer Encoder Ports
    //TODO: Use CTR Tuning software to set the CAN ids.
        static constexpr int k_FrontLeft_Steer_Encoder_ID = 23;
        static constexpr int k_FrontRight_Steer_Encoder_ID = 27;
        static constexpr int k_BackLeft_Steer_Encoder_ID = 21;
        static constexpr int k_BackRight_Steer_Encoder_ID = 25;
    //Drive Motor Properties
        static constexpr double k_Drive_Motor_Open_Loop_Ramp_Rate = 0.00000001;
        static constexpr double k_Drive_Motor_Smart_Current_Limit = 15;
        static constexpr double k_Drive_Motor_Secondary_Current_Limit = 15;
    //Steer Motor Properties
        static constexpr double k_Steer_Motor_Open_Loop_Ramp_Rate = 0.1;
        static constexpr double k_Steer_Motor_Smart_Current_Limit = 20;
        static constexpr double k_Steer_Motor_Secondary_Current_Limit = 20;
    //Wheel Offset Keys
        static constexpr std::string_view k_FrontLeft_Wheel_Offset_Key = "FrontLeftWheelOffset";
        static constexpr std::string_view k_FrontRight_Wheel_Offset_Key = "FrontRightWheelOffset";
        static constexpr std::string_view k_BackLeft_Wheel_Offset_Key = "BackLeftWheelOffset";
        static constexpr std::string_view k_BackRight_Wheel_Offset_Key = "BackRightWheelOffset";
  //Buttons
    static constexpr int k_Reset_Wheel_Offset_Button = 11;
    static constexpr int k_TestMode_Wheel_On = 12;
    static constexpr int k_TestMode_Wheel_Off = 13;     
    static constexpr int k_Toggle_Absolute_Translation_Button = 14;
    static constexpr int k_Toggle_Absolute_Steering_Button = 15;
//IMU
    static constexpr int k_Pigeon2_Device_ID = 28;
    static constexpr std::string_view k_Pigeon2_Device_Name = "uno";
//Default States
    static constexpr bool Is_Absolute_Steering_Default = true;
    static constexpr bool Is_Absolute_Translation_Default = true;
    class Intake_Constants
    {
    public:
        static constexpr uint8_t TOF_ID = 0;
        static constexpr int Intake_Motor_Device_ID = 35;
    };
    
    class Shooter_Constants
    {
    public:
        static constexpr uint8_t TOF_ID = 1;
        static constexpr int Left_Shooter_Motor_CANID = 36;
        static constexpr int Right_Shooter_Motor_CANID = 37;
        static constexpr int Unicorn_Horn_Servo_PWM_Channel = 0;
    };

    class BallScrew_Constants
    {
    public:
        static constexpr int k_BallScrew_Drive_CANID = 34;
        static constexpr bool k_Ball_Screw_Is_Reversed = false;        
        static constexpr double k_Ball_Screw_Smart_Current_Limit = 3;
        static constexpr double k_Ball_Screw_Secondary_Current_Limit = 5;
    };

    class TelescopingArm_Constants
    {
    public:
        static constexpr int k_Back_Lower_CANID = 31;
        static constexpr int k_Back_Upper_CANID = 32;
        static constexpr int k_Front_CANID = 33;
        static constexpr bool k_Back_Lower_Is_Reversed = false;
        static constexpr bool k_Back_Upper_Is_Reversed = true;
        static constexpr bool k_Front_Is_Reversed = false;                
        static constexpr double k_TelescopingArm_Smart_Current_Limit = 15;
        static constexpr double k_TelescopingArm_Secondary_Current_Limit = 20;        
    };

    class PowerDistributionPanel_Constants
    {
    public:
        static constexpr int pdp_CanId = 0 ; //may need to be 0 or 1, as of 2/21/2024
        static constexpr int CurrentIDBackLower = 4; 
        static constexpr int CurrentIDBackUpper = 5;
        static constexpr int CurrentIDBallScrew = 6;
        static constexpr int CurrentIDFront = 7;
    };

    class CAN_Adjustment_Values
    {
    public:
        static constexpr int kStatus0_ms = 40; //ms
        static constexpr int kStatus1_ms = 40; //ms
    };
};
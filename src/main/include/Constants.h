#pragma once
//std
#include <string>
class Constants {
public:
//HID Ports
    static constexpr int k_Gamepad_Port = 0;
    static constexpr int k_Left_Joystick_Port = 1;
    static constexpr int k_Right_Joystick_Port = 2;    
//Swerve Drive
    //Drive Motor CAN IDs
        static constexpr int k_FrontLeft_Drive_CANID = 14;
        static constexpr int k_FrontRight_Drive_CANID = 12;
        static constexpr int k_BackLeft_Drive_CANID = 16;
        static constexpr int k_BackRight_Drive_CANID = 10;
    //Steer Motor CAN IDs
        static constexpr int k_FrontLeft_Steer_CANID = 15;
        static constexpr int k_FrontRight_Steer_CANID = 13;
        static constexpr int k_BackLeft_Steer_CANID = 17;
        static constexpr int k_BackRight_Steer_CANID = 11;
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
        static constexpr int k_FrontLeft_Steer_Encoder_ID = 2;
        static constexpr int k_FrontRight_Steer_Encoder_ID = 0;
        static constexpr int k_BackLeft_Steer_Encoder_ID = 1;
        static constexpr int k_BackRight_Steer_Encoder_ID = 3;
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
    static constexpr int k_Pigeon2_Device_ID = 0;
    static constexpr std::string_view k_Pigeon2_Device_Name = "uno";
//Default States
    static constexpr bool Is_Absolute_Steering_Default = true;
    static constexpr bool Is_Absolute_Translation_Default = true;
    class Intake_Constants
    {
    public:
        static constexpr uint8_t TOF_ID = 0;
        static constexpr int Intake_Motor_Device_ID = 0;
    };
    
    class Shooter_Constants
    {
    public:
        static constexpr uint8_t TOF_ID = 1;
        static constexpr int Left_Shooter_Motor_CANID = 5;
        static constexpr int Right_Shooter_Motor_CANID = 21;
        static constexpr int Unicorn_Horn_Servo_PWM_Channel = 0;
    };

    class BallScrew_Constants
    {
    public:
        static constexpr int k_BallScrew_Drive_CANID = 0;
    };

    class TelescopingArm_Constants
    {
    public:
        static constexpr int k_Back_Lower_CANID = 1;
        static constexpr int k_Back_Upper_CANID = 2;
        static constexpr int k_Front_CANID = 3;
    };

    class PowerDistributionPanel_Constants
    {
    public:
        static constexpr int pdp_CanId = 50 ; //may need to be 0 or 1, as of 2/21/2024
        static constexpr int CurrentIDBackLower = 0; 
        static constexpr int CurrentIDBackUpper = 1;
        static constexpr int CurrentIDBallScrew = 2;
        static constexpr int CurrentIDFront = 3;
    };
};
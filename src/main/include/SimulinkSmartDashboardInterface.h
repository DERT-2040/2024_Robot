// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
#include <frc/smartdashboard/SmartDashboard.h>
#include <networktables/NetworkTable.h>
#include <networktables/RawTopic.h>
#include <networktables/NetworkTableInstance.h>
#include "Code_Gen_Model_ert_rtw\Code_Gen_Model.h"
 
class SimulinkSmartDashboardInterface {
    public:
        void InitSmartDashboardInterface();
        void SmartDashboardCallback();
    private:
        // Parameters
        nt::NetworkTableEntry __AA_Integral_Gain__Entry;
        nt::NetworkTableEntry __AA_Integral_IC__Entry;
        nt::NetworkTableEntry __AA_Integral_LL__Entry;
        nt::NetworkTableEntry __AA_Integral_UL__Entry;
        nt::NetworkTableEntry __AA_Prop_Gain__Entry;
        nt::NetworkTableEntry __AA_TC_LL__Entry;
        nt::NetworkTableEntry __AA_TC_UL__Entry;
        nt::NetworkTableEntry __AT_Tag_4_Coordinate_X__Entry;
        nt::NetworkTableEntry __AT_Tag_4_Coordinate_Y__Entry;
        nt::NetworkTableEntry __AT_Tag_7_Coordinate_X__Entry;
        nt::NetworkTableEntry __AT_Tag_7_Coordinate_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_11_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_11_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_11_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_12_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_12_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_12_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_13_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_13_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_13_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_14_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_14_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_14_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_15_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_15_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_15_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_16_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_16_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_16_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_5_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_5_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_5_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_6_Field_Angle__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_6_X__Entry;
        nt::NetworkTableEntry __AT_Target_Tag_6_Y__Entry;
        nt::NetworkTableEntry __AT_XY_Control_Gain__Entry;
        nt::NetworkTableEntry __Amp_Angle__Entry;
        nt::NetworkTableEntry __Amp_Gap__Entry;
        nt::NetworkTableEntry __Amp_Height__Entry;
        nt::NetworkTableEntry __Auto_Design_Path__Entry;
        nt::NetworkTableEntry __Auto_Intake_Velocity__Entry;
        nt::NetworkTableEntry __Auto_Start_Time__Entry;
        nt::NetworkTableEntry __Auto_Start_Velocity__Entry;
        nt::NetworkTableEntry __BS_Deriv_FC__Entry;
        nt::NetworkTableEntry __BS_Deriv_Gain__Entry;
        nt::NetworkTableEntry __BS_Deriv_LL__Entry;
        nt::NetworkTableEntry __BS_Deriv_UL__Entry;
        nt::NetworkTableEntry __BS_Position_Dec_RL__Entry;
        nt::NetworkTableEntry __BS_Position_Inc_RL__Entry;
        nt::NetworkTableEntry __BS_Prop_Gain__Entry;
        nt::NetworkTableEntry __BS_TC_LL__Entry;
        nt::NetworkTableEntry __BS_TC_UL__Entry;
        nt::NetworkTableEntry __Boost_Trigger_Decreasing_Limit__Entry;
        nt::NetworkTableEntry __Boost_Trigger_High_Speed__Entry;
        nt::NetworkTableEntry __Boost_Trigger_Increasing_Limit__Entry;
        nt::NetworkTableEntry __Boost_Trigger_Low_Speed__Entry;
        nt::NetworkTableEntry __Climber_DutyCycle_Neg__Entry;
        nt::NetworkTableEntry __Climber_DutyCycle_Pos__Entry;
        nt::NetworkTableEntry __Dist_AA_Cal_Tol__Entry;
        nt::NetworkTableEntry __Dist_BS_Cal_Tol__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Back_Lower__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Back_Upper__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Ball_Screw__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Front__Entry;
        nt::NetworkTableEntry __Dist_Reset_Value_Back_Lower__Entry;
        nt::NetworkTableEntry __Dist_Reset_Value_Back_Upper__Entry;
        nt::NetworkTableEntry __Dist_Reset_Value_Ball_Screw__Entry;
        nt::NetworkTableEntry __Dist_Reset_Value_Front__Entry;
        nt::NetworkTableEntry __Distance_FL_y__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D_LL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_D_UL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_FF__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_I__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_I_LL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_I_UL__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_P__Entry;
        nt::NetworkTableEntry __Drive_Motor_Control_Sign_Change_Deadband__Entry;
        nt::NetworkTableEntry __FloorDistance__Entry;
        nt::NetworkTableEntry __Front_AA_Max_Ext__Entry;
        nt::NetworkTableEntry __Front_AA_Min_Ext__Entry;
        nt::NetworkTableEntry __Gamepad_Stick_Neg_Threshold__Entry;
        nt::NetworkTableEntry __Gamepad_Stick_Pos_Threshold__Entry;
        nt::NetworkTableEntry __Gyro_Calibration_Reset_Degree__Entry;
        nt::NetworkTableEntry __Gyro_Calibration_Reset_Flag__Entry;
        nt::NetworkTableEntry __KF_Enable__Entry;
        nt::NetworkTableEntry __KF_Vision_Ambiguity_Thresh__Entry;
        nt::NetworkTableEntry __LoadShooter_Angle__Entry;
        nt::NetworkTableEntry __LoadShooter_Gap__Entry;
        nt::NetworkTableEntry __LoadShooter_Height__Entry;
        nt::NetworkTableEntry __Note_Detect_Dist_Intake__Entry;
        nt::NetworkTableEntry __Note_Detect_Dist_Shooter__Entry;
        nt::NetworkTableEntry __Note_Time_Eject__Entry;
        nt::NetworkTableEntry __Note_Time_Speaker_Spin_Up__Entry;
        nt::NetworkTableEntry __Note_Time_Transfer__Entry;
        nt::NetworkTableEntry __Note_Time_Transfer_Spin_Up__Entry;
        nt::NetworkTableEntry __Odometry_IC_X__Entry;
        nt::NetworkTableEntry __Odometry_IC_Y__Entry;
        nt::NetworkTableEntry __Odometry_Reset_IC__Entry;
        nt::NetworkTableEntry __Odometry_X_Y_TEAR__Entry;
        nt::NetworkTableEntry __RL_Back_Amp_to_Stage__Entry;
        nt::NetworkTableEntry __RL_Back_Load_to_Amp__Entry;
        nt::NetworkTableEntry __RL_Back_Load_to_Stage__Entry;
        nt::NetworkTableEntry __RL_Back_Speaker_Final_to_Speaker_Partial__Entry;
        nt::NetworkTableEntry __RL_Back_Speaker_Partial_to_Speaker_Final__Entry;
        nt::NetworkTableEntry __RL_Back_Speaker_Partial_to_Stage__Entry;
        nt::NetworkTableEntry __RL_Back_Stage_to_Amp__Entry;
        nt::NetworkTableEntry __RL_Back_Stage_to_Load__Entry;
        nt::NetworkTableEntry __RL_Back_Stage_to_Speaker_Partial__Entry;
        nt::NetworkTableEntry __RL_Back_Stage_to_Trap__Entry;
        nt::NetworkTableEntry __RL_Back_Trap_to_Stage__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio_Load_Amp__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio_Speaker_Final__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio_Speaker_Partial__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio_Stage_Amp__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio_Stage_Load__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio_Stage_Trap__Entry;
        nt::NetworkTableEntry __Servo_Store_Gain__Entry;
        nt::NetworkTableEntry __Servo_Store_Offset__Entry;
        nt::NetworkTableEntry __Servo_Time_Deploy__Entry;
        nt::NetworkTableEntry __Servo_Time_Store__Entry;
        nt::NetworkTableEntry __Shooter_DC_Eject__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Control_FF__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Control_I__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Control_I_LL__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Control_I_UL__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Control_P__Entry;
        nt::NetworkTableEntry __Shooter_Motor_DesSpd_Store__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Transition__Entry;
        nt::NetworkTableEntry __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry;
        nt::NetworkTableEntry __Spline_Max_Centripital_Acceleration__Entry;
        nt::NetworkTableEntry __Spline_Pose_Num_Before_End_Reduce_Speed__Entry;
        nt::NetworkTableEntry __Spline_Stop_Radius__Entry;
        nt::NetworkTableEntry __Spline_Velocity_Multiplier_TEST__Entry;
        nt::NetworkTableEntry __Stage_Angle__Entry;
        nt::NetworkTableEntry __Stage_Gap__Entry;
        nt::NetworkTableEntry __Stage_Height__Entry;
        nt::NetworkTableEntry __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry;
        nt::NetworkTableEntry __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D_LL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_D_UL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_Deadzone__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_I__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_I_LL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_I_UL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_P__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_Total_LL__Entry;
        nt::NetworkTableEntry __Steering_Heading_Control_Total_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_LL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I_LL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_P__Entry;
        nt::NetworkTableEntry __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Steering_Relative_Cmd_Rate_Limit_Dec__Entry;
        nt::NetworkTableEntry __Steering_Relative_Cmd_Rate_Limit_Inc__Entry;
        nt::NetworkTableEntry __Steering_Relative_Gain__Entry;
        nt::NetworkTableEntry __Steering_Twist_Gain__Entry;
        nt::NetworkTableEntry __TEST_Servo_Override_Flag__Entry;
        nt::NetworkTableEntry __TEST_Servo_Override_Value__Entry;
        nt::NetworkTableEntry __TEST_Speaker_Angle__Entry;
        nt::NetworkTableEntry __TEST_Speaker_Distance__Entry;
        nt::NetworkTableEntry __TEST_Speaker_Gap__Entry;
        nt::NetworkTableEntry __TEST_Speaker_Height__Entry;
        nt::NetworkTableEntry __TEST_Swerve_Mode_Override_Flag__Entry;
        nt::NetworkTableEntry __Test_DC_Gain_BackLower__Entry;
        nt::NetworkTableEntry __Test_DC_Gain_BackUpper__Entry;
        nt::NetworkTableEntry __Test_DC_Gain_BallScrew__Entry;
        nt::NetworkTableEntry __Test_DC_Gain_Front__Entry;
        nt::NetworkTableEntry __Test_DC_Gain_Intake__Entry;
        nt::NetworkTableEntry __Test_DC_Gain_Shooter__Entry;
        nt::NetworkTableEntry __Tol_Angle__Entry;
        nt::NetworkTableEntry __Tol_Gap__Entry;
        nt::NetworkTableEntry __Tol_Height__Entry;
        nt::NetworkTableEntry __Translation_Speed_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Translation_Speed_Rate_Limit_Dec__Entry;
        nt::NetworkTableEntry __Translation_Speed_Rate_Limit_Inc__Entry;
        nt::NetworkTableEntry __Translation_Twist_Gain__Entry;
        nt::NetworkTableEntry __Trap_Angle__Entry;
        nt::NetworkTableEntry __Trap_Gap__Entry;
        nt::NetworkTableEntry __Trap_Height__Entry;
 
        // Inports
        nt::NetworkTableEntry __AT_Tag_11_Found__Entry;
        nt::NetworkTableEntry __AT_Tag_12_Found__Entry;
        nt::NetworkTableEntry __AT_Tag_13_Found__Entry;
        nt::NetworkTableEntry __AT_Tag_14_Found__Entry;
        nt::NetworkTableEntry __AT_Tag_15_Found__Entry;
        nt::NetworkTableEntry __AT_Tag_16_Found__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __BackLeft_Steer_Rev__Entry;
        nt::NetworkTableEntry __BackLeft_Turn_Offset__Entry;
        nt::NetworkTableEntry __BackRight_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __BackRight_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __BackRight_Steer_Rev__Entry;
        nt::NetworkTableEntry __BackRight_Turn_Offset__Entry;
        nt::NetworkTableEntry __Encoder_Revs_Back_Lower__Entry;
        nt::NetworkTableEntry __Encoder_Revs_Back_Upper__Entry;
        nt::NetworkTableEntry __Encoder_Revs_Ball_Screw__Entry;
        nt::NetworkTableEntry __Encoder_Revs_Front__Entry;
        nt::NetworkTableEntry __FrontLeft_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __FrontLeft_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __FrontLeft_Steer_Rev__Entry;
        nt::NetworkTableEntry __FrontLeft_Turn_Offset__Entry;
        nt::NetworkTableEntry __FrontRight_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __FrontRight_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __FrontRight_Steer_Rev__Entry;
        nt::NetworkTableEntry __FrontRight_Turn_Offset__Entry;
        nt::NetworkTableEntry __GameState__Entry;
        nt::NetworkTableEntry __Gamepad_B1_A__Entry;
        nt::NetworkTableEntry __Gamepad_B4_Y__Entry;
        nt::NetworkTableEntry __Gamepad_Back__Entry;
        nt::NetworkTableEntry __Gamepad_LB__Entry;
        nt::NetworkTableEntry __Gamepad_LT__Entry;
        nt::NetworkTableEntry __Gamepad_RB__Entry;
        nt::NetworkTableEntry __Gamepad_RT__Entry;
        nt::NetworkTableEntry __Gamepad_Start__Entry;
        nt::NetworkTableEntry __Gamepad_Stick_Left_X__Entry;
        nt::NetworkTableEntry __Gamepad_Stick_Left_Y__Entry;
        nt::NetworkTableEntry __Gamepad_Stick_Right_X__Entry;
        nt::NetworkTableEntry __Gamepad_Stick_Right_Y__Entry;
        nt::NetworkTableEntry __Gyro_Angle__Entry;
        nt::NetworkTableEntry __Intake_TOF_Dist__Entry;
        nt::NetworkTableEntry __IsBlueAlliance__Entry;
        nt::NetworkTableEntry __Is_Absolute_Steering__Entry;
        nt::NetworkTableEntry __Is_Absolute_Translation__Entry;
        nt::NetworkTableEntry __Joystick_Left_B1__Entry;
        nt::NetworkTableEntry __Joystick_Left_B10__Entry;
        nt::NetworkTableEntry __Joystick_Left_B13__Entry;
        nt::NetworkTableEntry __Joystick_Left_B14__Entry;
        nt::NetworkTableEntry __Joystick_Left_B2__Entry;
        nt::NetworkTableEntry __Joystick_Left_B3__Entry;
        nt::NetworkTableEntry __Joystick_Left_B4__Entry;
        nt::NetworkTableEntry __Joystick_Left_B7__Entry;
        nt::NetworkTableEntry __Joystick_Left_B8__Entry;
        nt::NetworkTableEntry __Joystick_Left_POV__Entry;
        nt::NetworkTableEntry __Joystick_Left_X__Entry;
        nt::NetworkTableEntry __Joystick_Left_Y__Entry;
        nt::NetworkTableEntry __Joystick_Left_Z__Entry;
        nt::NetworkTableEntry __Joystick_Right_B1__Entry;
        nt::NetworkTableEntry __Joystick_Right_B10__Entry;
        nt::NetworkTableEntry __Joystick_Right_B13__Entry;
        nt::NetworkTableEntry __Joystick_Right_B14__Entry;
        nt::NetworkTableEntry __Joystick_Right_B2__Entry;
        nt::NetworkTableEntry __Joystick_Right_B3__Entry;
        nt::NetworkTableEntry __Joystick_Right_B4__Entry;
        nt::NetworkTableEntry __Joystick_Right_B7__Entry;
        nt::NetworkTableEntry __Joystick_Right_B8__Entry;
        nt::NetworkTableEntry __Joystick_Right_POV__Entry;
        nt::NetworkTableEntry __Joystick_Right_X__Entry;
        nt::NetworkTableEntry __Joystick_Right_Y__Entry;
        nt::NetworkTableEntry __Joystick_Right_Z__Entry;
        nt::NetworkTableEntry __Line_Sensor_TOF_Range__Entry;
        nt::NetworkTableEntry __Photon_Est_Pose_Ambiguity__Entry;
        nt::NetworkTableEntry __Photon_Est_Pose_X__Entry;
        nt::NetworkTableEntry __Photon_Est_Pose_Y__Entry;
        nt::NetworkTableEntry __Shooter_Left_Motor_RPM__Entry;
        nt::NetworkTableEntry __Shooter_Right_Motor_RPM__Entry;
        nt::NetworkTableEntry __Shooter_TOF_Dist__Entry;
        // Outports
        nt::NetworkTableEntry __BackLeft_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __BackLeft_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __BackRight_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __BackRight_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __Back_Lower_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Back_Upper_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Ball_Screw_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Climber_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontLeft_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontLeft_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontRight_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __FrontRight_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __Front_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Intake_Motor_DutyCycle__Entry;
        nt::NetworkTableEntry __Shooter_Brake_Enable__Entry;
        nt::NetworkTableEntry __Shooter_Left_Motor_DutyCycle__Entry;
        nt::NetworkTableEntry __Shooter_Right_Motor_DutyCycle__Entry;
        nt::NetworkTableEntry __Shooter_Servo_Position__Entry;
 
        // Test Points
        nt::NetworkTableEntry __AT_Error_X__Entry;
        nt::NetworkTableEntry __AT_Error_Y__Entry;
        nt::NetworkTableEntry __AT_Target_Angle__Entry;
        nt::NetworkTableEntry __Align_Amp__Entry;
        nt::NetworkTableEntry __Align_Speaker__Entry;
        nt::NetworkTableEntry __Align_Trap__Entry;
        nt::NetworkTableEntry __ArmStateRequest__Entry;
        nt::NetworkTableEntry __AutoState__Entry;
        nt::NetworkTableEntry __BL_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __BL_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __BL_Desired_Wheel_Speed_in__Entry;
        nt::NetworkTableEntry __BL_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __BR_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __BR_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __BR_Desired_Wheel_Speed_in__Entry;
        nt::NetworkTableEntry __BR_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __Back_Lower_Arm_Length__Entry;
        nt::NetworkTableEntry __Back_Upper_Arm_Length__Entry;
        nt::NetworkTableEntry __Ball_Screw_Arm_Length__Entry;
        nt::NetworkTableEntry __Climber_Cmd_Direction__Entry;
        nt::NetworkTableEntry __CurrentPriorityIndex__Entry;
        nt::NetworkTableEntry __Desired_Angle__Entry;
        nt::NetworkTableEntry __Desired_BS_Length__Entry;
        nt::NetworkTableEntry __Desired_Back_AA_Length__Entry;
        nt::NetworkTableEntry __Desired_Back_Lower_Dist__Entry;
        nt::NetworkTableEntry __Desired_Back_Upper_Dist__Entry;
        nt::NetworkTableEntry __Desired_Ball_Screw_Dist__Entry;
        nt::NetworkTableEntry __Desired_Front_AA_Length__Entry;
        nt::NetworkTableEntry __Desired_Front_Dist__Entry;
        nt::NetworkTableEntry __Desired_Gap__Entry;
        nt::NetworkTableEntry __Desired_Height__Entry;
        nt::NetworkTableEntry __Drive_Joystick_X__Entry;
        nt::NetworkTableEntry __Drive_Joystick_Y__Entry;
        nt::NetworkTableEntry __Drive_Joystick_Z__Entry;
        nt::NetworkTableEntry __Drive_Joystick_Z_Mode__Entry;
        nt::NetworkTableEntry __FL_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __FL_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __FL_Desired_Wheel_Speed_in__Entry;
        nt::NetworkTableEntry __FL_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __FR_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __FR_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __FR_Desired_Wheel_Speed_in__Entry;
        nt::NetworkTableEntry __FR_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __Face_Away_Driver__Entry;
        nt::NetworkTableEntry __Face_Left_Driver__Entry;
        nt::NetworkTableEntry __Face_Right_Driver__Entry;
        nt::NetworkTableEntry __Face_Toward_Driver__Entry;
        nt::NetworkTableEntry __Front_Arm_Length__Entry;
        nt::NetworkTableEntry __Gyro_Angle_Calibrated_deg__Entry;
        nt::NetworkTableEntry __Gyro_Angle_Field_rad__Entry;
        nt::NetworkTableEntry __Gyro_Angle_SPF__Entry;
        nt::NetworkTableEntry __Gyro_Angle_rad__Entry;
        nt::NetworkTableEntry __Intake_Motor_DC__Entry;
        nt::NetworkTableEntry __Intake_Shooter_State_Request__Entry;
        nt::NetworkTableEntry __Is_Absolute_Steering_SPF__Entry;
        nt::NetworkTableEntry __Is_Absolute_Translation_SPF__Entry;
        nt::NetworkTableEntry __Is_All_Arms_Cal_Position__Entry;
        nt::NetworkTableEntry __Is_Boosting__Entry;
        nt::NetworkTableEntry __KF_Position_X__Entry;
        nt::NetworkTableEntry __KF_Position_Y__Entry;
        nt::NetworkTableEntry __Line_Sensor_Boolean__Entry;
        nt::NetworkTableEntry __Meas_Angle__Entry;
        nt::NetworkTableEntry __Meas_Back_AA_Length__Entry;
        nt::NetworkTableEntry __Meas_Front_AA_Length__Entry;
        nt::NetworkTableEntry __Meas_Gap__Entry;
        nt::NetworkTableEntry __Meas_Height__Entry;
        nt::NetworkTableEntry __Note_State_ID__Entry;
        nt::NetworkTableEntry __Odom_Position_X__Entry;
        nt::NetworkTableEntry __Odom_Position_Y__Entry;
        nt::NetworkTableEntry __Odometry_X_global_TEAR_ft__Entry;
        nt::NetworkTableEntry __Odometry_X_global_est_ft__Entry;
        nt::NetworkTableEntry __Odometry_Y_global_TEAR_ft__Entry;
        nt::NetworkTableEntry __Odometry_Y_global_est_ft__Entry;
        nt::NetworkTableEntry __Prev_GameState__Entry;
        nt::NetworkTableEntry __RL_Back__Entry;
        nt::NetworkTableEntry __RL_FB_Ratio__Entry;
        nt::NetworkTableEntry __RelativeMoveForward__Entry;
        nt::NetworkTableEntry __Robot_Reached_Destination__Entry;
        nt::NetworkTableEntry __Shooter_Brake_Enable_out__Entry;
        nt::NetworkTableEntry __Shooter_Motor_DC_Left__Entry;
        nt::NetworkTableEntry __Shooter_Motor_DC_Right__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Control_Ena__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Left__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Right__Entry;
        nt::NetworkTableEntry __Shooter_Pos_State__Entry;
        nt::NetworkTableEntry __Shooter_Servo__Entry;
        nt::NetworkTableEntry __Speaker_Angle__Entry;
        nt::NetworkTableEntry __Speaker_Distance__Entry;
        nt::NetworkTableEntry __SplineEnable__Entry;
        nt::NetworkTableEntry __Spline_Enable__Entry;
        nt::NetworkTableEntry __Spline_Follow_Index__Entry;
        nt::NetworkTableEntry __Spline_ID__Entry;
        nt::NetworkTableEntry __Spline_Num_Poses__Entry;
        nt::NetworkTableEntry __Spline_Out_Of_Bounds__Entry;
        nt::NetworkTableEntry __Spline_Target_X__Entry;
        nt::NetworkTableEntry __Spline_Target_Y__Entry;
        nt::NetworkTableEntry __State_Request_Arm__Entry;
        nt::NetworkTableEntry __State_Request_Arm_d__Entry;
        nt::NetworkTableEntry __State_Request_Intake_Shooter__Entry;
        nt::NetworkTableEntry __State_Request_Intake_Shooter_h__Entry;
        nt::NetworkTableEntry __Steer_Joystick_X__Entry;
        nt::NetworkTableEntry __Steer_Joystick_Y__Entry;
        nt::NetworkTableEntry __Steer_Joystick_Z__Entry;
        nt::NetworkTableEntry __Steering_Abs_Angle__Entry;
        nt::NetworkTableEntry __Steering_Abs_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Abs_Cmd_SPF__Entry;
        nt::NetworkTableEntry __Steering_Abs_Gyro__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Localized_PID__Entry;
        nt::NetworkTableEntry __Steering_Rel_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Rel_Cmd_SPF__Entry;
        nt::NetworkTableEntry __Test_Mode__Entry;
        nt::NetworkTableEntry __Translation_Angle__Entry;
        nt::NetworkTableEntry __Translation_Angle_SPF__Entry;
        nt::NetworkTableEntry __Translation_Speed__Entry;
        nt::NetworkTableEntry __Translation_Speed_RL__Entry;
        nt::NetworkTableEntry __Translation_Speed_SPF__Entry;
        nt::NetworkTableEntry __Translation_Steering_Cmd__Entry;
        nt::NetworkTableEntry __WhileIterator__Entry;
};

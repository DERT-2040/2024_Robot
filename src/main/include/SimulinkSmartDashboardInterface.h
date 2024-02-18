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
        nt::NetworkTableEntry __AA_Deriv_FC__Entry;
        nt::NetworkTableEntry __AA_Deriv_Gain__Entry;
        nt::NetworkTableEntry __AA_Deriv_LL__Entry;
        nt::NetworkTableEntry __AA_Deriv_UL__Entry;
        nt::NetworkTableEntry __AA_Position_Dec_RL__Entry;
        nt::NetworkTableEntry __AA_Position_Inc_RL__Entry;
        nt::NetworkTableEntry __AA_Prop_Gain__Entry;
        nt::NetworkTableEntry __AA_TC_LL__Entry;
        nt::NetworkTableEntry __AA_TC_UL__Entry;
        nt::NetworkTableEntry __Amp_Angle__Entry;
        nt::NetworkTableEntry __Amp_Gap__Entry;
        nt::NetworkTableEntry __Amp_Height__Entry;
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
        nt::NetworkTableEntry __Cal_Back_Lower_Arm_DC__Entry;
        nt::NetworkTableEntry __Cal_Back_Upper_Arm_DC__Entry;
        nt::NetworkTableEntry __Cal_Ball_Screw_Arm_DC__Entry;
        nt::NetworkTableEntry __Cal_Front_Arm_DC__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Back_Lower__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Back_Upper__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Ball_Screw__Entry;
        nt::NetworkTableEntry __Dist_Per_Rev_Front__Entry;
        nt::NetworkTableEntry __Dist_Reset_Motor_Current_Back_Lower__Entry;
        nt::NetworkTableEntry __Dist_Reset_Motor_Current_Back_Upper__Entry;
        nt::NetworkTableEntry __Dist_Reset_Motor_Current_Ball_Screw__Entry;
        nt::NetworkTableEntry __Dist_Reset_Motor_Current_Front__Entry;
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
        nt::NetworkTableEntry __Servo_Position_Deploy__Entry;
        nt::NetworkTableEntry __Servo_Position_Store__Entry;
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
        nt::NetworkTableEntry __Speaker_Gap__Entry;
        nt::NetworkTableEntry __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry;
        nt::NetworkTableEntry __Spline_Max_Centripital_Acceleration__Entry;
        nt::NetworkTableEntry __Spline_Pose_Num_Before_End_Reduce_Speed__Entry;
        nt::NetworkTableEntry __Spline_Ref_Poses_switch_num__Entry;
        nt::NetworkTableEntry __Spline_Stop_Radius__Entry;
        nt::NetworkTableEntry __Spline_Velocity_Multiplier_TEST__Entry;
        nt::NetworkTableEntry __Stage_Angle__Entry;
        nt::NetworkTableEntry __Stage_Gap__Entry;
        nt::NetworkTableEntry __Stage_Height__Entry;
        nt::NetworkTableEntry __Steering_Abs_Deadband_Range__Entry;
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
        nt::NetworkTableEntry __Steering_Localized_Cmd_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Rate_Limit_Dec__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd_Rate_Limit_Inc__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_FilterCoeff__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_LL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_D_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I_LL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_I_UL__Entry;
        nt::NetworkTableEntry __Steering_Motor_Control_P__Entry;
        nt::NetworkTableEntry __Steering_Relative_Gain__Entry;
        nt::NetworkTableEntry __TEST_Arm_State_Request__Entry;
        nt::NetworkTableEntry __TEST_Intake_Shooter_State_Request__Entry;
        nt::NetworkTableEntry __TEST_Servo_Override_Flag__Entry;
        nt::NetworkTableEntry __TEST_Servo_Override_Value__Entry;
        nt::NetworkTableEntry __TEST_Speaker_Angle__Entry;
        nt::NetworkTableEntry __TEST_Speaker_Height__Entry;
        nt::NetworkTableEntry __Tol_Angle__Entry;
        nt::NetworkTableEntry __Tol_Gap__Entry;
        nt::NetworkTableEntry __Tol_Height__Entry;
        nt::NetworkTableEntry __Translation_Speed_Approach_Zero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_Approach_Zero_Final_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_NonZero_Error_Thresh__Entry;
        nt::NetworkTableEntry __Translation_Speed_NonZero_Final_Scale_Factor__Entry;
        nt::NetworkTableEntry __Translation_Speed_Rate_Limit_Dec__Entry;
        nt::NetworkTableEntry __Translation_Speed_Rate_Limit_Inc__Entry;
        nt::NetworkTableEntry __Trap_Angle__Entry;
        nt::NetworkTableEntry __Trap_Gap__Entry;
        nt::NetworkTableEntry __Trap_Height__Entry;
 
        // Inports
        nt::NetworkTableEntry __Arm_Distance_Calibration_Active__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __BackLeft_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __BackLeft_Steer_Rev__Entry;
        nt::NetworkTableEntry __BackLeft_Turn_Offset__Entry;
        nt::NetworkTableEntry __BackRight_Drive_Motor_Rev__Entry;
        nt::NetworkTableEntry __BackRight_Drive_Motor_Speed__Entry;
        nt::NetworkTableEntry __BackRight_Steer_Rev__Entry;
        nt::NetworkTableEntry __BackRight_Turn_Offset__Entry;
        nt::NetworkTableEntry __Ball_Screw_PWM_Pos__Entry;
        nt::NetworkTableEntry __Ball_Screw_Quad_Pos__Entry;
        nt::NetworkTableEntry __Drive_Joystick_X__Entry;
        nt::NetworkTableEntry __Drive_Joystick_Y__Entry;
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
        nt::NetworkTableEntry __Gyro_Angle__Entry;
        nt::NetworkTableEntry __Intake_TOF_Dist__Entry;
        nt::NetworkTableEntry __Is_Absolute_Steering__Entry;
        nt::NetworkTableEntry __Is_Absolute_Translation__Entry;
        nt::NetworkTableEntry __Is_Boost_Trigger_Pulled__Entry;
        nt::NetworkTableEntry __Motor_Current_Back_Lower__Entry;
        nt::NetworkTableEntry __Motor_Current_Back_Upper__Entry;
        nt::NetworkTableEntry __Motor_Current_Ball_Screw__Entry;
        nt::NetworkTableEntry __Motor_Current_Front__Entry;
        nt::NetworkTableEntry __Photon_Est_Pose_Ambiguity__Entry;
        nt::NetworkTableEntry __Photon_Est_Pose_X__Entry;
        nt::NetworkTableEntry __Photon_Est_Pose_Y__Entry;
        nt::NetworkTableEntry __Shooter_Left_Motor_RPM__Entry;
        nt::NetworkTableEntry __Shooter_Right_Motor_RPM__Entry;
        nt::NetworkTableEntry __Shooter_TOF_Dist__Entry;
        nt::NetworkTableEntry __Steer_Joystick_X__Entry;
        nt::NetworkTableEntry __Steer_Joystick_Y__Entry;
        // Outports
        nt::NetworkTableEntry __BackLeft_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __BackLeft_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __BackRight_Drive_DutyCycle__Entry;
        nt::NetworkTableEntry __BackRight_Steer_DutyCycle__Entry;
        nt::NetworkTableEntry __Back_Lower_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Back_Upper_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Ball_Screw_Arm_DutyCycle__Entry;
        nt::NetworkTableEntry __Ball_Screw_Motor_DutyCycle__Entry;
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
        nt::NetworkTableEntry __Arm_Dist_Cal_Active__Entry;
        nt::NetworkTableEntry __BL_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __BL_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __BL_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __BR_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __BR_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __BR_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __Back_Lower_Arm_Cal_Success__Entry;
        nt::NetworkTableEntry __Back_Lower_Arm_Length__Entry;
        nt::NetworkTableEntry __Back_Upper_Arm_Cal_Success__Entry;
        nt::NetworkTableEntry __Back_Upper_Arm_Length__Entry;
        nt::NetworkTableEntry __Ball_Screw_Arm_Cal_Success__Entry;
        nt::NetworkTableEntry __Ball_Screw_Arm_Length__Entry;
        nt::NetworkTableEntry __Desired_Angle__Entry;
        nt::NetworkTableEntry __Desired_Back_Lower_Dist__Entry;
        nt::NetworkTableEntry __Desired_Back_Upper_Dist__Entry;
        nt::NetworkTableEntry __Desired_Ball_Screw_Dist__Entry;
        nt::NetworkTableEntry __Desired_Front_Dist__Entry;
        nt::NetworkTableEntry __Desired_Gap__Entry;
        nt::NetworkTableEntry __Desired_Height__Entry;
        nt::NetworkTableEntry __FL_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __FL_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __FL_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __FR_Desired_Module_Angle__Entry;
        nt::NetworkTableEntry __FR_Desired_Wheel_Speed__Entry;
        nt::NetworkTableEntry __FR_Steer_Module_Angle__Entry;
        nt::NetworkTableEntry __Front_Arm_Cal_Success__Entry;
        nt::NetworkTableEntry __Front_Arm_Length__Entry;
        nt::NetworkTableEntry __Gyro_Angle_Adjustment_SPF__Entry;
        nt::NetworkTableEntry __Is_Absolute_Steering_SPF__Entry;
        nt::NetworkTableEntry __Is_Absolute_Translation_SPF__Entry;
        nt::NetworkTableEntry __KF_Position_X__Entry;
        nt::NetworkTableEntry __KF_Position_Y__Entry;
        nt::NetworkTableEntry __Meas_Angle__Entry;
        nt::NetworkTableEntry __Meas_Gap__Entry;
        nt::NetworkTableEntry __Meas_Height__Entry;
        nt::NetworkTableEntry __Note_State_ID__Entry;
        nt::NetworkTableEntry __Odom_Position_X__Entry;
        nt::NetworkTableEntry __Odom_Position_Y__Entry;
        nt::NetworkTableEntry __Odometry_X_global_TEAR_ft__Entry;
        nt::NetworkTableEntry __Odometry_X_global_est_ft__Entry;
        nt::NetworkTableEntry __Odometry_Y_global_TEAR_ft__Entry;
        nt::NetworkTableEntry __Odometry_Y_global_est_ft__Entry;
        nt::NetworkTableEntry __Robot_Reached_Destination__Entry;
        nt::NetworkTableEntry __Shooter_Motor_DC_Left__Entry;
        nt::NetworkTableEntry __Shooter_Motor_DC_Right__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Control_Ena__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Left__Entry;
        nt::NetworkTableEntry __Shooter_Motor_Speed_Right__Entry;
        nt::NetworkTableEntry __Shooter_Servo_Pos__Entry;
        nt::NetworkTableEntry __Spline_Enable__Entry;
        nt::NetworkTableEntry __Spline_Index__Entry;
        nt::NetworkTableEntry __Spline_Num_Poses__Entry;
        nt::NetworkTableEntry __Spline_Out_Of_Bounds__Entry;
        nt::NetworkTableEntry __Spline_Target_X__Entry;
        nt::NetworkTableEntry __Spline_Target_Y__Entry;
        nt::NetworkTableEntry __Steering_Abs_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Abs_Cmd_SPF__Entry;
        nt::NetworkTableEntry __Steering_Localized_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Localized_PID__Entry;
        nt::NetworkTableEntry __Steering_Rel_Cmd__Entry;
        nt::NetworkTableEntry __Steering_Rel_Cmd_SPF__Entry;
        nt::NetworkTableEntry __Switch1__Entry;
        nt::NetworkTableEntry __Switch1_m__Entry;
        nt::NetworkTableEntry __Switch1_o__Entry;
        nt::NetworkTableEntry __Switch1_p__Entry;
        nt::NetworkTableEntry __Translation_Angle__Entry;
        nt::NetworkTableEntry __Translation_Angle_SPF__Entry;
        nt::NetworkTableEntry __Translation_Speed__Entry;
        nt::NetworkTableEntry __Translation_Speed_RL__Entry;
        nt::NetworkTableEntry __Translation_Speed_SPF__Entry;
        nt::NetworkTableEntry __Translation_Steering_Cmd__Entry;
        nt::NetworkTableEntry __WhileIterator__Entry;
};

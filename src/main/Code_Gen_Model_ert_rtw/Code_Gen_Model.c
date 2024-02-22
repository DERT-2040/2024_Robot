/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.87
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Feb 21 23:02:22 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include "Code_Gen_Model_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include <float.h>
#include "rt_defines.h"

/* Named constants for Chart: '<S7>/Chart_Intake_and_Shooter' */
#define Co_IN_Note_Speaker_Score_Intake ((uint8_T)8U)
#define Co_IN_Note_Speaker_Score_SpinUp ((uint8_T)9U)
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)10U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)13U)
#define Code_Gen_Mod_IN_Extra_Run_Time2 ((uint8_T)1U)
#define Code_Gen_Mod_IN_Extra_Run_Time4 ((uint8_T)2U)
#define Code_Gen_Mod_IN_Extra_Run_Time5 ((uint8_T)3U)
#define Code_Gen_Mod_IN_Extra_Run_Time6 ((uint8_T)4U)
#define Code_Gen_Model_IN_Note_Pickup  ((uint8_T)7U)
#define Code_Gen_Model_IN_Store_Servo  ((uint8_T)12U)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)5U)
#define Code_IN_Note_Intake_AND_Shooter ((uint8_T)6U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)11U)

/* Named constants for Chart: '<S12>/Chart_Shooter_Position' */
#define Code_Gen_Mo_IN_Speaker_to_Stage ((uint8_T)4U)
#define Code_Gen_Mo_IN_Stage_to_Speaker ((uint8_T)6U)
#define Code_Gen_Mode_State_LoadShooter ((uint8_T)2U)
#define Code_Gen_Model_IN_Amp          ((uint8_T)1U)
#define Code_Gen_Model_IN_LoadShooter  ((uint8_T)2U)
#define Code_Gen_Model_IN_Speaker      ((uint8_T)3U)
#define Code_Gen_Model_IN_Stage        ((uint8_T)5U)
#define Code_Gen_Model_IN_Trap         ((uint8_T)7U)
#define Code_Gen_Model_State_Amp       ((uint8_T)3U)
#define Code_Gen_Model_State_Speaker   ((uint8_T)1U)
#define Code_Gen_Model_State_Stage     ((uint8_T)0U)
#define Code_Gen_Model_State_Trap      ((uint8_T)4U)

/* Exported block parameters */
real_T AA_Deriv_FC = 0.2;              /* Variable: AA_Deriv_FC
                                        * Referenced by:
                                        *   '<S116>/Constant2'
                                        *   '<S117>/Constant2'
                                        *   '<S118>/Constant2'
                                        */
real_T AA_Deriv_Gain = 0.0;            /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S116>/Constant3'
                                        *   '<S117>/Constant3'
                                        *   '<S118>/Constant3'
                                        */
real_T AA_Deriv_LL = -0.5;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S116>/Saturation'
                                        *   '<S117>/Saturation'
                                        *   '<S118>/Saturation'
                                        */
real_T AA_Deriv_UL = 0.5;              /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S116>/Saturation'
                                        *   '<S117>/Saturation'
                                        *   '<S118>/Saturation'
                                        */
real_T AA_Position_Dec_RL = -0.508;    /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S120>/Constant1'
                                        *   '<S121>/Constant1'
                                        *   '<S123>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 0.508;     /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S120>/Constant3'
                                        *   '<S121>/Constant3'
                                        *   '<S123>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S116>/Gain1'
                                        *   '<S117>/Gain1'
                                        *   '<S118>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S116>/Saturation2'
                                        *   '<S117>/Saturation2'
                                        *   '<S118>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S116>/Saturation2'
                                        *   '<S117>/Saturation2'
                                        *   '<S118>/Saturation2'
                                        */
real_T Amp_Angle = -50.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 571.5;                /* Variable: Amp_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 919.48;            /* Variable: Amp_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Arm_Calibration_Timeout = 5.0;  /* Variable: Arm_Calibration_Timeout
                                        * Referenced by:
                                        *   '<S6>/Unit Delay1'
                                        *   '<S26>/Constant'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S119>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S119>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S119>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S119>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -0.0508;   /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S122>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 0.0508;    /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S122>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S119>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S119>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S119>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S366>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S364>/Constant'
                                         *   '<S364>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S366>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S364>/Constant1'
                                        */
real_T Cal_Back_Lower_Arm_DC = 0.2;    /* Variable: Cal_Back_Lower_Arm_DC
                                        * Referenced by: '<S12>/Constant32'
                                        */
real_T Cal_Back_Upper_Arm_DC = 0.2;    /* Variable: Cal_Back_Upper_Arm_DC
                                        * Referenced by: '<S12>/Constant27'
                                        */
real_T Cal_Ball_Screw_Arm_DC = 0.2;    /* Variable: Cal_Ball_Screw_Arm_DC
                                        * Referenced by: '<S12>/Constant34'
                                        */
real_T Cal_Front_Arm_DC = 0.2;         /* Variable: Cal_Front_Arm_DC
                                        * Referenced by: '<S12>/Constant33'
                                        */
real_T Dist_Per_Rev_Back_Lower = 6.9822;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S18>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 6.9822;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S19>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.3175;/* Variable: Dist_Per_Rev_Ball_Screw
                                         * Referenced by: '<S20>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Front = 6.9822;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S21>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Motor_Current_Back_Lower = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Back_Lower
                                 * Referenced by: '<S18>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Back_Upper = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Back_Upper
                                 * Referenced by: '<S19>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Ball_Screw = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Ball_Screw
                                 * Referenced by: '<S20>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Front = 10.0;
                                     /* Variable: Dist_Reset_Motor_Current_Front
                                      * Referenced by: '<S21>/Dist_Reset_Motor_Current_Threshold'
                                      */
real_T Dist_Reset_Value_Back_Lower = 11.69;/* Variable: Dist_Reset_Value_Back_Lower
                                            * Referenced by: '<S18>/Dist_Reset_Value'
                                            */
real_T Dist_Reset_Value_Back_Upper = 271.145;/* Variable: Dist_Reset_Value_Back_Upper
                                              * Referenced by: '<S19>/Dist_Reset_Value'
                                              */
real_T Dist_Reset_Value_Ball_Screw = 241.3;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by: '<S20>/Dist_Reset_Value'
                                            */
real_T Dist_Reset_Value_Front = 9.5;   /* Variable: Dist_Reset_Value_Front
                                        * Referenced by: '<S21>/Dist_Reset_Value'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S299>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S215>/Constant3'
                                        *   '<S236>/Constant3'
                                        *   '<S257>/Constant3'
                                        *   '<S278>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S215>/Constant2'
                                   *   '<S236>/Constant2'
                                   *   '<S257>/Constant2'
                                   *   '<S278>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S215>/Saturation'
                                        *   '<S236>/Saturation'
                                        *   '<S257>/Saturation'
                                        *   '<S278>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S215>/Saturation'
                                        *   '<S236>/Saturation'
                                        *   '<S257>/Saturation'
                                        *   '<S278>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S215>/Gain'
                                            *   '<S236>/Gain'
                                            *   '<S257>/Gain'
                                            *   '<S278>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S215>/Gain2'
                                        *   '<S236>/Gain2'
                                        *   '<S257>/Gain2'
                                        *   '<S278>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S215>/Saturation1'
                                        *   '<S236>/Saturation1'
                                        *   '<S257>/Saturation1'
                                        *   '<S278>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S215>/Saturation1'
                                        *   '<S236>/Saturation1'
                                        *   '<S257>/Saturation1'
                                        *   '<S278>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S215>/Gain1'
                                        *   '<S236>/Gain1'
                                        *   '<S257>/Gain1'
                                        *   '<S278>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S220>/Constant'
                            *   '<S241>/Constant'
                            *   '<S262>/Constant'
                            *   '<S283>/Constant'
                            */
real_T Front_AA_Bot_Max_Ext = 455.6125;/* Variable: Front_AA_Bot_Max_Ext
                                        * Referenced by: '<S112>/Saturation'
                                        */
real_T Front_AA_Bot_Min_Ext = 9.5;     /* Variable: Front_AA_Bot_Min_Ext
                                        * Referenced by: '<S112>/Saturation'
                                        */
real_T Gamepad_Stick_Down_Threshold = -0.5;/* Variable: Gamepad_Stick_Down_Threshold
                                            * Referenced by:
                                            *   '<S22>/Constant'
                                            *   '<S24>/Constant'
                                            */
real_T Gamepad_Stick_Up_Threshold = 0.5;/* Variable: Gamepad_Stick_Up_Threshold
                                         * Referenced by:
                                         *   '<S23>/Constant'
                                         *   '<S25>/Constant'
                                         */
real_T KF_Enable = 0.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S9>/Constant1'
                                        *   '<S9>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S9>/Constant'
                                          */
real_T LoadShooter_Angle = 35.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 279.4;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 624.84;    /* Variable: LoadShooter_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 100.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 0.5;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 0.2;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.1;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S11>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S107>/Constant'
                                        */
real_T Servo_Position_Deploy = 1.0;    /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Position_Store = 0.0;     /* Variable: Servo_Position_Store
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S40>/Gain'
                                           *   '<S41>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S40>/Gain2'
                                         *   '<S41>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S40>/Saturation1'
                                          *   '<S41>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S40>/Saturation1'
                                         *   '<S41>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S40>/Gain1'
                                         *   '<S41>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 450.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                      */
real_T Speaker_Gap = 279.4;            /* Variable: Speaker_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S200>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S200>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S147>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S160>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S200>/Constant3'
                                     */
real_T Stage_Angle = 26.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 215.9;              /* Variable: Stage_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 502.92;          /* Variable: Stage_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S354>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S320>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S320>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S320>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S320>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S319>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S320>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S320>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S320>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S320>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S320>/Constant1'
                                   *   '<S320>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S320>/Constant'
                                   *   '<S320>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S310>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S310>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S310>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S310>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S310>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S310>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S218>/Constant3'
                                        *   '<S239>/Constant3'
                                        *   '<S260>/Constant3'
                                        *   '<S281>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S218>/Constant2'
                                *   '<S239>/Constant2'
                                *   '<S260>/Constant2'
                                *   '<S281>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S218>/Saturation'
                                           *   '<S239>/Saturation'
                                           *   '<S260>/Saturation'
                                           *   '<S281>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S218>/Saturation'
                                          *   '<S239>/Saturation'
                                          *   '<S260>/Saturation'
                                          *   '<S281>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S218>/Gain2'
                                         *   '<S239>/Gain2'
                                         *   '<S260>/Gain2'
                                         *   '<S281>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S218>/Saturation1'
                                             *   '<S239>/Saturation1'
                                             *   '<S260>/Saturation1'
                                             *   '<S281>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S218>/Saturation1'
                                            *   '<S239>/Saturation1'
                                            *   '<S260>/Saturation1'
                                            *   '<S281>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S218>/Gain1'
                                        *   '<S239>/Gain1'
                                        *   '<S260>/Gain1'
                                        *   '<S281>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S352>/Constant'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S7>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S7>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 45.0;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by:
                                        *   '<S7>/Constant6'
                                        *   '<S12>/Constant26'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S12>/Constant25'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 3.175;                /* Variable: Tol_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S298>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S298>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S298>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S298>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S298>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S298>/Constant3'
                                    */
real_T Trap_Angle = -26.5;             /* Variable: Trap_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 693.42;              /* Variable: Trap_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 1079.5;           /* Variable: Trap_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */

/* Block signals (default storage) */
B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Code_Gen_Model_T Code_Gen_Model_Y;

/* Real-time model */
static RT_MODEL_Code_Gen_Model_T Code_Gen_Model_M_;
RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M = &Code_Gen_Model_M_;

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = (maxIndex >> 1U);
    iLeft = 0U;
    iRght = maxIndex;
    while ((iRght - iLeft) > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (((rtIsNaN(u0)) || (rtIsNaN(u1))) || (rtIsInf(u0))) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > (DBL_EPSILON * q));
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt((a * a) + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt((b * b) + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else if ((rtIsInf(u0)) && (rtIsInf(u1))) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void Code_Gen_Model_step(void)
{
  /* local block i/o variables */
  real_T rtb_LookupTableDynamic1;
  real_T rtb_LookupTableDynamic;
  real_T rtb_LookupTableDynamic1_i;
  real_T rtb_LookupTableDynamic_j;
  real_T rtb_MatrixConcatenate_o[450];
  real_T rtb_Position_and_Curvature[450];
  real_T distance_from_robot[150];
  real_T rtb_Assignment_d[150];
  real_T rtb_MatrixConcatenate_h[100];
  real_T rtb_Spline_Ref_Poses[24];
  real_T rtb_Assignment[16];
  real_T rtb_Selector4[16];
  real_T rtb_Ref_Poses[12];
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T alpha;
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_c4;
  real_T rtb_Add_ih;
  real_T rtb_Add_ik;
  real_T rtb_Add_kv;
  real_T rtb_Add_l;
  real_T rtb_Add_pw;
  real_T rtb_Ball_Screw_Length;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Product_ku;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Sqrt;
  real_T rtb_Sqrt_f;
  real_T rtb_Subtract1_bm;
  real_T rtb_Subtract1_dk;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_hq;
  real_T rtb_Subtract1_kj;
  real_T rtb_Subtract1_m;
  real_T rtb_Subtract1_m4;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch;
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_bu;
  real_T rtb_Switch1_cp;
  real_T rtb_Switch1_ha;
  real_T rtb_Switch1_j;
  real_T rtb_Switch1_l;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_j;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_m4;
  real_T rtb_Switch2_n;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T sqrt_input;
  int32_T i;
  int32_T rtb_Assignment_tmp;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s172_iter;
  uint16_T s197_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_Compare_o;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S205>/Add1' incorporates:
   *  Constant: '<S205>/Constant3'
   *  Constant: '<S205>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S205>/Math Function'
   *  Sum: '<S14>/Add'
   *  Sum: '<S205>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S99>/Diff'
   *  UnitDelay: '<S99>/UD'
   *
   * Block description for '<S99>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S99>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S206>/Add1' incorporates:
   *  Constant: '<S206>/Constant3'
   *  Constant: '<S206>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S206>/Math Function'
   *  Sum: '<S14>/Add1'
   *  Sum: '<S206>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S100>/Diff'
   *  UnitDelay: '<S100>/UD'
   *
   * Block description for '<S100>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S100>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S207>/Add1' incorporates:
   *  Constant: '<S207>/Constant3'
   *  Constant: '<S207>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S207>/Math Function'
   *  Sum: '<S14>/Add2'
   *  Sum: '<S207>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S101>/Diff'
   *  UnitDelay: '<S101>/UD'
   *
   * Block description for '<S101>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S101>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S208>/Add1' incorporates:
   *  Constant: '<S208>/Constant3'
   *  Constant: '<S208>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S208>/Math Function'
   *  Sum: '<S14>/Add3'
   *  Sum: '<S208>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product3' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S102>/Diff'
   *  UnitDelay: '<S102>/UD'
   *
   * Block description for '<S102>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S102>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S11>/Product7' incorporates:
   *  Fcn: '<S103>/r->x'
   *  Fcn: '<S103>/theta->y'
   *  Fcn: '<S104>/r->x'
   *  Fcn: '<S104>/theta->y'
   *  Fcn: '<S105>/r->x'
   *  Fcn: '<S105>/theta->y'
   *  Fcn: '<S106>/r->x'
   *  Fcn: '<S106>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_thetay * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_thetay * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_Init_e * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_Init_e * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Switch2_c * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Switch2_c * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Switch: '<S6>/Switch9' incorporates:
   *  Constant: '<S6>/Constant10'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  RelationalOperator: '<S28>/FixPt Relational Operator'
   *  Sum: '<S6>/Sum'
   *  UnitDelay: '<S28>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_thetay = 0.02;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE + 0.02;
  }

  /* End of Switch: '<S6>/Switch9' */

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   */
  Code_Gen_Model_B.Arm_Dist_Cal_Active = (rtb_thetay <= Arm_Calibration_Timeout);

  /* SignalConversion: '<S6>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S6>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S6>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* SignalConversion: '<S6>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S6>/Signal Copy7' incorporates:
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = Code_Gen_Model_U.Joystick_Left_B1;

  /* Switch: '<S6>/Switch' incorporates:
   *  Inport: '<Root>/Gamepad_B3_X'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S6>/OR1'
   *  Logic: '<S6>/OR2'
   *  Switch: '<S6>/Switch1'
   *  Switch: '<S6>/Switch2'
   *  Switch: '<S6>/Switch3'
   */
  if (Code_Gen_Model_U.Joystick_Right_B1 != 0.0) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_B3_X != 0.0) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Switch: '<S6>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB) || (Code_Gen_Model_U.Gamepad_LT)) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant2'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB) || (Code_Gen_Model_U.Gamepad_RT)) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant3'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant4'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     *  Switch: '<S6>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 0.0;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S6>/Switch4' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Inport: '<Root>/Joystick_Left_B10'
   *  Inport: '<Root>/Joystick_Right_B10'
   *  Logic: '<S6>/OR3'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  Switch: '<S6>/Switch5'
   *  Switch: '<S6>/Switch6'
   *  Switch: '<S6>/Switch7'
   *  Switch: '<S6>/Switch8'
   */
  if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <= Gamepad_Stick_Down_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Up_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Switch: '<S6>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y <=
             Gamepad_Stick_Down_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant7'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= Gamepad_Stick_Up_Threshold)
  {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant8'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 4.0;
  } else if ((Code_Gen_Model_U.Joystick_Left_B10) ||
             (Code_Gen_Model_U.Joystick_Right_B10)) {
    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S6>/Constant9'
     *  Switch: '<S6>/Switch4'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 4.0;
  }

  /* End of Switch: '<S6>/Switch4' */

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Switch1_cp = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Switch1_cp)) || (rtIsInf(rtb_Switch1_cp))) {
    rtb_Switch1_cp = 0.0;
  } else {
    rtb_Switch1_cp = fmod(rtb_Switch1_cp, 4.294967296E+9);
  }

  switch ((rtb_Switch1_cp < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Switch1_cp)))) :
          ((int32_T)((uint32_T)rtb_Switch1_cp))) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* SignalConversion generated from: '<S5>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S5>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  SignalConversion generated from: '<S5>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S5>/Constant2'
     *  SignalConversion generated from: '<S5>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S10>/Merge3' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S5>/Constant4'
     *  SignalConversion generated from: '<S5>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S5>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S5>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* SignalConversion generated from: '<S5>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S5>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S5>/Constant7'
     *  SignalConversion generated from: '<S5>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge9' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S10>/Merge10' incorporates:
     *  Constant: '<S5>/Constant10'
     *  SignalConversion generated from: '<S5>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p = false;

    /* Merge: '<S10>/Merge11' incorporates:
     *  Constant: '<S5>/Constant11'
     *  SignalConversion generated from: '<S5>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S10>/Merge12' incorporates:
     *  Constant: '<S5>/Constant12'
     *  SignalConversion generated from: '<S5>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
     *  Constant: '<S3>/Constant11'
     *  Constant: '<S3>/Constant12'
     *  Constant: '<S3>/Constant16'
     *  Constant: '<S3>/Constant4'
     *  Merge: '<S10>/Merge8'
     */
    switch ((int32_T)Spline_Ref_Poses_switch_num) {
     case 1:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant4_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S10>/Merge9' incorporates:
       *  Constant: '<S3>/Constant4'
       *  Constant: '<S3>/Constant9'
       *  Merge: '<S10>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 3.0;
      break;

     case 2:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant11_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S10>/Merge9' incorporates:
       *  Constant: '<S3>/Constant11'
       *  Constant: '<S3>/Constant14'
       *  Merge: '<S10>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 6.0;
      break;

     default:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant12_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S10>/Merge9' incorporates:
       *  Constant: '<S3>/Constant12'
       *  Constant: '<S3>/Constant15'
       *  Merge: '<S10>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 4.0;
      break;
    }

    /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

    /* SignalConversion generated from: '<S3>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S10>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S3>/Constant8'
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* Merge: '<S10>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p = false;

    /* Merge: '<S10>/Merge11' incorporates:
     *  Constant: '<S3>/Constant6'
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S10>/Merge12' incorporates:
     *  Constant: '<S3>/Constant13'
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Logic: '<S3>/NOT' incorporates:
     *  Logic: '<S3>/NOT1'
     *  UnitDelay: '<S8>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* Merge: '<S10>/Merge7' incorporates:
     *  Logic: '<S3>/NOT'
     */
    Code_Gen_Model_B.Spline_Enable = rtb_Is_Absolute_Steering;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* SignalConversion generated from: '<S16>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S354>/Constant'
     *  Constant: '<S354>/Constant1'
     *  Constant: '<S354>/Constant2'
     *  Math: '<S354>/Hypot'
     *  RelationalOperator: '<S354>/GreaterThan'
     *  Switch: '<S354>/Switch'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_Y;
      rtb_Init = Code_Gen_Model_B.Steer_Joystick_X;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_Init = 0.0;
    }

    /* End of Switch: '<S354>/Switch1' */

    /* Switch: '<S356>/Switch1' incorporates:
     *  Constant: '<S362>/Constant'
     *  Constant: '<S363>/Constant'
     *  Logic: '<S356>/AND'
     *  RelationalOperator: '<S362>/Compare'
     *  RelationalOperator: '<S363>/Compare'
     *  Switch: '<S356>/Switch2'
     *  UnitDelay: '<S356>/Unit Delay'
     *  UnitDelay: '<S356>/Unit Delay1'
     */
    if ((rtb_Init == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Init;
    }

    /* End of Switch: '<S356>/Switch1' */

    /* Merge: '<S10>/Merge1' incorporates:
     *  Trigonometry: '<S352>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S359>/Compare' incorporates:
     *  Constant: '<S359>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S355>/Switch' incorporates:
     *  Constant: '<S355>/Constant'
     *  Constant: '<S355>/Constant1'
     *  Constant: '<S357>/Constant'
     *  Constant: '<S358>/Constant'
     *  Logic: '<S355>/Logical Operator'
     *  RelationalOperator: '<S357>/Compare'
     *  RelationalOperator: '<S358>/Compare'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_cp = 6.2831853071795862;
    } else {
      rtb_Switch1_cp = 0.0;
    }

    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S355>/Constant2'
     *  Constant: '<S355>/Constant3'
     *  Constant: '<S360>/Constant'
     *  Constant: '<S361>/Constant'
     *  Logic: '<S355>/Logical Operator1'
     *  RelationalOperator: '<S360>/Compare'
     *  RelationalOperator: '<S361>/Compare'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S355>/Sum1' incorporates:
     *  Switch: '<S355>/Switch'
     *  Switch: '<S355>/Switch1'
     *  UnitDelay: '<S355>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_cp + rtb_Add_ik) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S370>/Constant'
     *  Constant: '<S371>/Constant'
     *  Logic: '<S365>/AND'
     *  RelationalOperator: '<S370>/Compare'
     *  RelationalOperator: '<S371>/Compare'
     *  Switch: '<S365>/Switch2'
     *  UnitDelay: '<S365>/Unit Delay'
     *  UnitDelay: '<S365>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_lw;
      rtb_Switch2_j = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_ha = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_j = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S365>/Switch1' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  Trigonometry: '<S353>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_ha,
      rtb_Switch2_j);

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S16>/Constant3'
     *  SignalConversion generated from: '<S16>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S352>/Constant'
     *  Lookup_n-D: '<S352>/Modulation_Str_Y_Rel'
     *  Product: '<S352>/Product'
     *  SignalConversion: '<S6>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Merge: '<S10>/Merge9' incorporates:
     *  Constant: '<S16>/Constant9'
     *  SignalConversion generated from: '<S16>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S10>/Merge10' incorporates:
     *  Constant: '<S16>/Constant1'
     *  SignalConversion generated from: '<S16>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p = false;

    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S364>/Constant'
     *  Constant: '<S364>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Switch: '<S369>/Init' incorporates:
     *  UnitDelay: '<S369>/FixPt Unit Delay1'
     *  UnitDelay: '<S369>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init = rtb_Product_ku;
    } else {
      rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S369>/Init' */

    /* Sum: '<S367>/Sum1' */
    rtb_Product_ku -= rtb_Init;

    /* Switch: '<S368>/Switch2' incorporates:
     *  Constant: '<S366>/Constant1'
     *  Constant: '<S366>/Constant3'
     *  RelationalOperator: '<S368>/LowerRelop1'
     *  RelationalOperator: '<S368>/UpperRelop'
     *  Switch: '<S368>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S368>/Switch' incorporates:
       *  Constant: '<S366>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S368>/Switch2' */

    /* Sum: '<S367>/Sum' */
    rtb_Init += rtb_Product_ku;

    /* Product: '<S364>/Product' incorporates:
     *  Lookup_n-D: '<S353>/Modulation_Drv'
     *  Math: '<S353>/Magnitude'
     */
    rtb_Add_ih = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_Init;

    /* Saturate: '<S364>/Saturation' */
    if (rtb_Add_ih > Boost_Trigger_High_Speed) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (rtb_Add_ih < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Add_ih;
    }

    /* End of Saturate: '<S364>/Saturation' */

    /* SignalConversion generated from: '<S16>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S16>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Merge: '<S10>/Merge11' incorporates:
     *  SignalConversion generated from: '<S16>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.State_Request_Intake_Shooter;

    /* Merge: '<S10>/Merge12' incorporates:
     *  SignalConversion generated from: '<S16>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* Update for UnitDelay: '<S356>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S356>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_as;

    /* Update for UnitDelay: '<S355>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S365>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_lw = rtb_Switch1_ha;

    /* Update for UnitDelay: '<S365>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_j;

    /* Update for UnitDelay: '<S369>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S369>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S369>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Init;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* SignalConversion generated from: '<S17>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S17>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S17>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S17>/Constant1'
     *  SignalConversion generated from: '<S17>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S17>/Constant2'
     *  SignalConversion generated from: '<S17>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S10>/Merge3' incorporates:
     *  Constant: '<S17>/Constant3'
     *  SignalConversion generated from: '<S17>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S17>/Constant4'
     *  SignalConversion generated from: '<S17>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S17>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S17>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* SignalConversion generated from: '<S17>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S17>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S17>/Constant7'
     *  SignalConversion generated from: '<S17>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge9' incorporates:
     *  Constant: '<S17>/Constant9'
     *  SignalConversion generated from: '<S17>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S10>/Merge11' incorporates:
     *  Constant: '<S17>/Constant10'
     *  SignalConversion generated from: '<S17>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S10>/Merge12' incorporates:
     *  Constant: '<S17>/Constant11'
     *  SignalConversion generated from: '<S17>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Merge: '<S10>/Merge10' incorporates:
     *  SignalConversion generated from: '<S17>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p =
      Code_Gen_Model_B.Arm_Dist_Cal_Active;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S44>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
   *  Sum: '<S9>/Add'
   *  Sum: '<S9>/Add1'
   */
  rtb_Reshapey[0] = (((((Code_Gen_Model_U.Photon_Est_Pose_X +
    Code_Gen_Model_DW.TappedDelay_X[0]) + Code_Gen_Model_DW.TappedDelay_X[1]) +
                       Code_Gen_Model_DW.TappedDelay_X[2]) +
                      Code_Gen_Model_DW.TappedDelay_X[3]) +
                     Code_Gen_Model_DW.TappedDelay_X[4]) +
    Code_Gen_Model_DW.TappedDelay_X[5];
  rtb_Reshapey[1] = (((((Code_Gen_Model_U.Photon_Est_Pose_Y +
    Code_Gen_Model_DW.TappedDelay1_X[0]) + Code_Gen_Model_DW.TappedDelay1_X[1])
                       + Code_Gen_Model_DW.TappedDelay1_X[2]) +
                      Code_Gen_Model_DW.TappedDelay1_X[3]) +
                     Code_Gen_Model_DW.TappedDelay1_X[4]) +
    Code_Gen_Model_DW.TappedDelay1_X[5];

  /* Delay: '<S44>/MemoryX' incorporates:
   *  Constant: '<S44>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_Init = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S11>/Trigonometric Function' */
  rtb_Switch2_l = cos(rtb_Init);

  /* Trigonometry: '<S11>/Trigonometric Function1' */
  rtb_Switch2_c = sin(rtb_Init);

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_l;
  rtb_Init_e = rtb_Switch2_c;

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S11>/Unary Minus'
   */
  rtb_Switch1_as = -rtb_Switch2_c;
  rtb_Switch1_ha = rtb_Switch2_l;

  /* Sum: '<S98>/Diff' incorporates:
   *  UnitDelay: '<S98>/UD'
   *
   * Block description for '<S98>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S98>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_l = rtb_Init - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S11>/Subtract2' incorporates:
   *  Constant: '<S11>/Constant3'
   *  Gain: '<S11>/Gain7'
   *  Math: '<S11>/Square'
   */
  rtb_Switch2_c = 1.0 - ((rtb_Switch2_l * rtb_Switch2_l) * 0.16666666666666666);

  /* Gain: '<S11>/Gain6' */
  rtb_Switch2_l *= 0.5;

  /* Product: '<S11>/Product7' incorporates:
   *  Constant: '<S11>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Switch1_cp = 0.0;
    rtb_Num_Segments = 0;
    for (s172_iter = 0; s172_iter < 8; s172_iter++) {
      rtb_Switch1_cp += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s172_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Switch1_cp;
  }

  /* End of Product: '<S11>/Product7' */

  /* Product: '<S11>/Product6' incorporates:
   *  SignalConversion generated from: '<S11>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S11>/Unary Minus2'
   */
  rtb_Switch2_j = (rtb_Switch2_c * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Switch2_c = (rtb_Switch2_l * tmp[0]) + (rtb_Switch2_c * tmp[1]);

  /* Product: '<S11>/Product6' incorporates:
   *  Concatenate: '<S11>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch2_j) + (rtb_Switch1_as * rtb_Switch2_c);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch2_j) + (rtb_Switch1_ha *
    rtb_Switch2_c);

  /* Outputs for Enabled SubSystem: '<S71>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S64>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  /* Logic: '<S9>/AND' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S9>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <= KF_Vision_Ambiguity_Thresh)
      && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S95>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S44>/C'
     *  Delay: '<S44>/MemoryX'
     *  Product: '<S97>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S95>/Sum' incorporates:
     *  Constant: '<S44>/D'
     *  Product: '<S95>/C[k]*xhat[k|k-1]'
     *  Product: '<S95>/D[k]*u[k]'
     *  Sum: '<S95>/Add1'
     */
    rtb_Switch2_c = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_c + rtb_Switch1_as);

    /* Product: '<S95>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S44>/C'
     *  Delay: '<S44>/MemoryX'
     *  Product: '<S97>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S95>/Sum' incorporates:
     *  Constant: '<S44>/D'
     *  Product: '<S95>/C[k]*xhat[k|k-1]'
     *  Product: '<S95>/D[k]*u[k]'
     *  Sum: '<S95>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch2_c + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S95>/Product3' incorporates:
     *  Constant: '<S45>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S97>/Add1' incorporates:
     *  Product: '<S97>/Product'
     */
    rtb_Switch2_c = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S95>/Product3' incorporates:
     *  Constant: '<S45>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S97>/Add1' incorporates:
     *  Product: '<S97>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S97>/Product2' incorporates:
     *  Constant: '<S45>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_c) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_c) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S95>/Product3' incorporates:
       *  Outport: '<S95>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S97>/Product2' incorporates:
       *  Outport: '<S97>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S9>/AND' */
  /* End of Outputs for SubSystem: '<S64>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S71>/Enabled Subsystem' */

  /* Sum: '<S71>/Add' incorporates:
   *  Delay: '<S44>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S11>/Accumulator2' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S11>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S9>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S9>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S9>/Switch' */

  /* DiscreteIntegrator: '<S11>/Accumulator' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S11>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S9>/Switch1' incorporates:
   *  Constant: '<S9>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S9>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S9>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S9>/Switch1' */

  /* If: '<S13>/If' incorporates:
   *  Constant: '<S197>/Constant'
   *  Logic: '<S197>/AND'
   *  MATLAB Function: '<S147>/Find closest index to curve'
   *  Product: '<S197>/Product'
   *  RelationalOperator: '<S197>/Relational Operator'
   *  RelationalOperator: '<S197>/Relational Operator1'
   *  Selector: '<S197>/Selector'
   *  Selector: '<S197>/Selector1'
   *  Selector: '<S198>/Selector'
   *  Sum: '<S197>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S150>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S153>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S155>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S150>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S145>/Action Port'
       */
      /* InitializeConditions for If: '<S13>/If' incorporates:
       *  UnitDelay: '<S145>/Unit Delay'
       *  UnitDelay: '<S146>/Unit Delay'
       *  UnitDelay: '<S148>/Unit Delay'
       *  UnitDelay: '<S148>/Unit Delay1'
       *  UnitDelay: '<S198>/Unit Delay'
       *  UnitDelay: '<S198>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S13>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    /* Selector: '<S146>/Selector1' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S146>/Selector1' */

    /* Lookup_n-D: '<S145>/Capture Radius' incorporates:
     *  UnitDelay: '<S145>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S146>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S146>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S150>/If' incorporates:
     *  RelationalOperator: '<S150>/ '
     *  UnitDelay: '<S146>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S153>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S155>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S150>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S153>/Action Port'
       */
      /* InitializeConditions for If: '<S150>/If' incorporates:
       *  UnitDelay: '<S153>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S150>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S150>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S153>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S153>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S156>/Action Port'
       */
      /* If: '<S153>/If' incorporates:
       *  Selector: '<S146>/Selector1'
       *  Selector: '<S153>/Selector'
       *  Selector: '<S156>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S153>/Increment_If_Rectangle_Check' */

      /* Sum: '<S153>/Minus' incorporates:
       *  Concatenate: '<S146>/Matrix Concatenate2'
       *  Selector: '<S153>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S153>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S156>/Action Port'
       */
      /* If: '<S153>/If' incorporates:
       *  Selector: '<S146>/Selector1'
       *  Selector: '<S153>/Selector'
       *  Selector: '<S156>/Selector'
       *  Sum: '<S153>/Minus'
       */
      rtb_Switch1_ha = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S153>/Increment_If_Rectangle_Check' */

      /* Sum: '<S153>/Minus' incorporates:
       *  Concatenate: '<S146>/Matrix Concatenate2'
       *  Selector: '<S153>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_ha;

      /* Math: '<S153>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S153>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S153>/Switch' incorporates:
       *  Logic: '<S153>/AND'
       *  Logic: '<S153>/OR'
       *  RelationalOperator: '<S153>/Relational Operator'
       *  UnitDelay: '<S153>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S153>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S155>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S153>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S155>/Action Port'
         */
        /* If: '<S155>/If' incorporates:
         *  RelationalOperator: '<S155>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S155>/Is_Last_Point' incorporates:
           *  ActionPort: '<S158>/Action Port'
           */
          /* InitializeConditions for If: '<S155>/If' incorporates:
           *  UnitDelay: '<S158>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S155>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S155>/Is_Last_Point' incorporates:
           *  ActionPort: '<S158>/Action Port'
           */
          /* Switch: '<S158>/Switch' incorporates:
           *  Constant: '<S160>/Constant'
           *  Logic: '<S158>/OR'
           *  RelationalOperator: '<S160>/Compare'
           *  UnitDelay: '<S158>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S158>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S158>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S161>/Action Port'
             */
            /* Merge: '<S150>/Merge2' incorporates:
             *  Constant: '<S161>/Constant'
             *  SignalConversion generated from: '<S161>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S161>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S161>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S158>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S158>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S162>/Action Port'
             */
            /* Merge: '<S150>/Merge2' incorporates:
             *  Constant: '<S162>/Constant'
             *  SignalConversion generated from: '<S162>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S162>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S162>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S158>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S158>/If' */

          /* Merge: '<S150>/Merge4' incorporates:
           *  SignalConversion: '<S158>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S158>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S155>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S155>/Increment_Search' incorporates:
           *  ActionPort: '<S157>/Action Port'
           */
          /* Merge: '<S150>/Merge2' incorporates:
           *  Constant: '<S157>/Constant'
           *  SignalConversion generated from: '<S157>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S157>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S157>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S150>/Merge4' incorporates:
           *  Constant: '<S159>/FixPt Constant'
           *  SignalConversion: '<S157>/Signal Copy'
           *  Sum: '<S159>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S155>/Increment_Search' */
        }

        /* End of If: '<S155>/If' */
        /* End of Outputs for SubSystem: '<S153>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S153>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S156>/Action Port'
         */
        /* Sum: '<S163>/FixPt Sum1' incorporates:
         *  Constant: '<S163>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S156>/Selector1' incorporates:
         *  Selector: '<S146>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S164>/Subtract' incorporates:
         *  Selector: '<S156>/Selector1'
         *  Sum: '<S164>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Switch2_l;

        /* Selector: '<S156>/Selector1' incorporates:
         *  Selector: '<S146>/Selector1'
         */
        rtb_Switch2_j = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S164>/Subtract' incorporates:
         *  Selector: '<S156>/Selector1'
         *  Sum: '<S164>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Switch1_ha;

        /* Math: '<S164>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S164>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S164>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S164>/Product' incorporates:
         *  Product: '<S164>/Divide'
         *  UnaryMinus: '<S164>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S164>/Add1' incorporates:
         *  Sum: '<S164>/Add2'
         *  Sum: '<S164>/Minus'
         */
        rtb_Switch2_c = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S164>/Minus4' incorporates:
         *  Sum: '<S164>/Add2'
         *  Sum: '<S164>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S164>/Minus5' incorporates:
         *  Concatenate: '<S146>/Matrix Concatenate2'
         *  Sum: '<S164>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S164>/Add' incorporates:
         *  Sum: '<S164>/Add2'
         *  Sum: '<S164>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S164>/Minus' incorporates:
         *  Sum: '<S164>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_as;

        /* DotProduct: '<S164>/Dot Product' incorporates:
         *  Concatenate: '<S146>/Matrix Concatenate2'
         *  Sum: '<S164>/Minus'
         *  Sum: '<S164>/Minus1'
         *  Sum: '<S164>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_c;

        /* DotProduct: '<S164>/Dot Product1' incorporates:
         *  Sum: '<S164>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S164>/Dot Product2' incorporates:
         *  Sum: '<S164>/Minus4'
         *  Sum: '<S164>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S164>/Dot Product3' incorporates:
         *  Sum: '<S164>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S164>/Add1' incorporates:
         *  Sum: '<S164>/Add2'
         *  Sum: '<S164>/Minus'
         */
        rtb_Switch2_c = rtb_Switch2_j - rtb_Minus_n[1];

        /* Sum: '<S164>/Minus4' incorporates:
         *  Sum: '<S164>/Add2'
         *  Sum: '<S164>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_j + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S164>/Minus5' incorporates:
         *  Concatenate: '<S146>/Matrix Concatenate2'
         *  Sum: '<S164>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S164>/Add' incorporates:
         *  Sum: '<S164>/Add2'
         *  Sum: '<S164>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_ha - rtb_Minus_n[1];

        /* Sum: '<S164>/Minus' incorporates:
         *  Sum: '<S164>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_as;

        /* DotProduct: '<S164>/Dot Product' incorporates:
         *  Concatenate: '<S146>/Matrix Concatenate2'
         *  Sum: '<S164>/Minus'
         *  Sum: '<S164>/Minus1'
         *  Sum: '<S164>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_c;

        /* RelationalOperator: '<S165>/Compare' incorporates:
         *  Constant: '<S165>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S164>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S164>/Dot Product1'
         *  Sum: '<S164>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_c * rtb_Switch2_c) +
          rtb_Switch2_l));

        /* DotProduct: '<S164>/Dot Product2' incorporates:
         *  Sum: '<S164>/Minus4'
         *  Sum: '<S164>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Rotationmatrixfromlocalto_0) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S150>/Merge4' incorporates:
         *  Constant: '<S166>/Constant'
         *  DataTypeConversion: '<S156>/Data Type Conversion'
         *  DotProduct: '<S164>/Dot Product3'
         *  Logic: '<S164>/AND'
         *  RelationalOperator: '<S164>/LessThanOrEqual1'
         *  RelationalOperator: '<S166>/Compare'
         *  Sum: '<S156>/Add'
         *  Sum: '<S164>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S150>/Merge2' incorporates:
         *  Constant: '<S156>/Constant2'
         *  SignalConversion generated from: '<S156>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S156>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S156>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S153>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S153>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S154>/Action Port'
         */
        /* Merge: '<S150>/Merge2' incorporates:
         *  Constant: '<S154>/Constant2'
         *  SignalConversion generated from: '<S154>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S154>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S154>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S150>/Merge4' incorporates:
         *  SignalConversion generated from: '<S154>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S153>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S150>/Merge1' incorporates:
       *  Constant: '<S153>/Constant'
       *  SignalConversion generated from: '<S153>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S153>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S150>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S150>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S152>/Action Port'
       */
      /* Merge: '<S150>/Merge1' incorporates:
       *  Constant: '<S152>/Constant'
       *  SignalConversion generated from: '<S152>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S150>/Merge2' incorporates:
       *  Constant: '<S152>/Constant1'
       *  SignalConversion generated from: '<S152>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S152>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S152>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S150>/Merge4' incorporates:
       *  SignalConversion generated from: '<S152>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S150>/Escape_Auto_Driving' */
    }

    /* End of If: '<S150>/If' */

    /* If: '<S146>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S146>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S151>/Action Port'
       */
      /* Bias: '<S167>/Add Constant' incorporates:
       *  Bias: '<S167>/Bias'
       *  Sum: '<S167>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S167>/Selector4' incorporates:
       *  Bias: '<S167>/Bias1'
       *  Constant: '<S169>/FixPt Constant'
       *  Sum: '<S169>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S167>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S167>/Selector' incorporates:
       *  Bias: '<S167>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S167>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S167>/Matrix Concatenate' incorporates:
       *  Gain: '<S170>/Gain'
       *  Gain: '<S171>/Gain'
       *  Selector: '<S146>/Selector1'
       *  Selector: '<S167>/Selector'
       *  Selector: '<S167>/Selector1'
       *  Selector: '<S167>/Selector2'
       *  Selector: '<S167>/Selector3'
       *  Sum: '<S170>/Subtract'
       *  Sum: '<S171>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S167>/Selector4' incorporates:
         *  Selector: '<S167>/Selector'
         */
        s172_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S170>/Subtract' incorporates:
         *  Bias: '<S167>/Add Constant1'
         *  Selector: '<S167>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s172_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S167>/Selector4' incorporates:
         *  Gain: '<S170>/Gain'
         *  Selector: '<S167>/Selector'
         *  Selector: '<S167>/Selector1'
         *  Sum: '<S170>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s172_iter) - 1];
        }
      }

      /* End of Concatenate: '<S167>/Matrix Concatenate' */

      /* Assignment: '<S167>/Assignment' incorporates:
       *  Selector: '<S167>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s172_iter = 0; s172_iter < rtb_Bias1_p; s172_iter++) {
          rtb_Assignment[s172_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s172_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S167>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S168>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S172>/While Iterator'
       */
      s172_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s172_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s172_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s172_iter] - rtb_Assignment[s172_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s172_iter];
        rtb_Switch2_c = rtb_Assignment[s172_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s172_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s172_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s172_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_c - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_ha = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_j = (rtb_Init_e - (2.0 * rtb_Switch1_ha)) +
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Product_ku = rtb_Switch1_ha - rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Switch1_ha) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_j) +
            (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s172_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_j) +
            (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Switch2_l;
          rtb_Switch2_j = ((3.0 * rtb_Switch1_ha) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_ha);
          rtb_Switch1_ha = (rtb_Init_e - rtb_Switch1_ha) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Switch2_j)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch1_ha);
          rtb_Switch2_c = (((rtb_Reshapey[1] * rtb_Switch2_j) + (rtb_Minus_n[1] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_ha);
          rtb_Switch1_ha = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch2_j = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch1_ha) + (rtb_Minus_n[1] * rtb_Switch2_j)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch1_ha) + (rtb_Minus_n[0] *
            rtb_Switch2_j)) * 0.5) + (rtb_Add2_f[0] * rtb_Init_e)) *
             rtb_Switch2_c)) / rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_c), 3.0);
        }

        if (s172_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s172_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s172_iter);
        rtb_Num_Segments = s172_iter;
        s172_iter++;
      } while ((rtb_Init_e >= 4.0) && (s172_iter <= 3));

      /* End of Outputs for SubSystem: '<S168>/Sampling_Loop' */

      /* SignalConversion generated from: '<S151>/Position_and_Curvature' incorporates:
       *  Assignment: '<S172>/Assignment'
       *  Merge: '<S146>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S146>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S146>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem' incorporates:
       *  ActionPort: '<S149>/Action Port'
       */
      /* Product: '<S149>/Product' incorporates:
       *  Selector: '<S146>/Selector'
       *  Selector: '<S146>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S149>/Product1' incorporates:
       *  Selector: '<S146>/Selector'
       *  Selector: '<S146>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S149>/Product' incorporates:
         *  Constant: '<S149>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S149>/Product1' incorporates:
         *  Constant: '<S149>/Constant2'
         *  Product: '<S149>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S149>/Assignment' incorporates:
       *  Concatenate: '<S149>/Matrix Concatenate'
       *  Merge: '<S146>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S149>/Assignment' */

      /* SignalConversion generated from: '<S149>/Num_Segments' incorporates:
       *  Constant: '<S149>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S146>/If Action Subsystem' */
    }

    /* End of If: '<S146>/If1' */

    /* Concatenate: '<S147>/Matrix Concatenate' incorporates:
     *  Merge: '<S146>/Merge'
     *  Selector: '<S147>/Selector'
     *  Selector: '<S147>/Selector1'
     *  Selector: '<S147>/Selector3'
     */
    for (i = 0; i < 50; i++) {
      rtb_MatrixConcatenate_o[i] = rtb_Position_and_Curvature[i];
      rtb_MatrixConcatenate_o[i + 50] = rtb_Position_and_Curvature[i + 150];
      rtb_MatrixConcatenate_o[i + 100] = rtb_Position_and_Curvature[i + 300];
      rtb_MatrixConcatenate_o[i + 150] = rtb_Position_and_Curvature[i + 50];
      rtb_MatrixConcatenate_o[i + 200] = rtb_Position_and_Curvature[i + 200];
      rtb_MatrixConcatenate_o[i + 250] = rtb_Position_and_Curvature[i + 350];
      rtb_MatrixConcatenate_o[i + 300] = rtb_Position_and_Curvature[i + 100];
      rtb_MatrixConcatenate_o[i + 350] = rtb_Position_and_Curvature[i + 250];
      rtb_MatrixConcatenate_o[i + 400] = rtb_Position_and_Curvature[i + 400];
    }

    /* End of Concatenate: '<S147>/Matrix Concatenate' */

    /* MATLAB Function: '<S147>/Distance Along Curve' incorporates:
     *  Concatenate: '<S147>/Matrix Concatenate'
     *  Selector: '<S147>/Selector4'
     *  Selector: '<S147>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s172_iter = 0; s172_iter < 149; s172_iter++) {
      /* Outputs for Iterator SubSystem: '<S168>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S172>/While Iterator'
       */
      rtb_Assignment_d[s172_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s172_iter + 1] -
         rtb_MatrixConcatenate_o[s172_iter], rtb_MatrixConcatenate_o[s172_iter +
         151] - rtb_MatrixConcatenate_o[s172_iter + 150]) +
        rtb_Assignment_d[s172_iter];

      /* End of Outputs for SubSystem: '<S168>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S147>/Distance Along Curve' */

    /* MATLAB Function: '<S147>/Find closest index to curve' incorporates:
     *  Concatenate: '<S147>/Matrix Concatenate'
     *  Selector: '<S147>/Selector4'
     *  Selector: '<S147>/Selector5'
     *  Selector: '<S198>/Selector'
     */
    for (s172_iter = 0; s172_iter < 150; s172_iter++) {
      /* Outputs for Iterator SubSystem: '<S168>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S172>/While Iterator'
       */
      distance_from_robot[s172_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s172_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s172_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S168>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s172_iter = 1;
    } else {
      s172_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s172_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s172_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s172_iter - 1];
      for (rtb_Bias1_p = s172_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s172_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s172_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S198>/Selector' incorporates:
     *  Constant: '<S198>/Constant'
     *  MATLAB Function: '<S147>/Find closest index to curve'
     *  MinMax: '<S198>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s172_iter)) - 1];

    /* If: '<S198>/If' incorporates:
     *  RelationalOperator: '<S198>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S198>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S201>/Action Port'
       */
      /* SignalConversion generated from: '<S201>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S203>/FixPt Sum1' incorporates:
       *  Constant: '<S203>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S201>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S201>/Selector11'
       *  Selector: '<S201>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S201>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S201>/Selector1'
       *  Selector: '<S201>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S201>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S201>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S201>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S201>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S201>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S198>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S198>/Latch' incorporates:
       *  ActionPort: '<S202>/Action Port'
       */
      /* SignalConversion generated from: '<S202>/In1' incorporates:
       *  UnitDelay: '<S198>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S202>/In2' incorporates:
       *  UnitDelay: '<S198>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S198>/Latch' */
    }

    /* End of If: '<S198>/If' */

    /* MinMax: '<S145>/Min' incorporates:
     *  Lookup_n-D: '<S145>/Lookahead Distance'
     *  UnitDelay: '<S145>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S147>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S197>/While Iterator'
     */
    s197_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s197_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S147>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S197>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s197_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s172_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s197_iter++;
    }

    /* End of Outputs for SubSystem: '<S147>/Find first index that meets distance target' */

    /* Switch: '<S200>/Switch' incorporates:
     *  Concatenate: '<S147>/Matrix Concatenate'
     *  Constant: '<S147>/Constant'
     *  Constant: '<S197>/Constant'
     *  Constant: '<S200>/Constant1'
     *  Constant: '<S200>/Constant2'
     *  Constant: '<S200>/Constant3'
     *  Logic: '<S197>/AND'
     *  MATLAB Function: '<S147>/Find closest index to curve'
     *  Math: '<S200>/Hypot'
     *  Merge: '<S10>/Merge8'
     *  MinMax: '<S200>/Min'
     *  MinMax: '<S200>/Min1'
     *  Product: '<S197>/Product'
     *  Product: '<S200>/Divide'
     *  Product: '<S200>/Product'
     *  Product: '<S200>/Product1'
     *  RelationalOperator: '<S147>/Relational Operator'
     *  RelationalOperator: '<S197>/Relational Operator'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  Selector: '<S147>/Selector10'
     *  Selector: '<S147>/Selector7'
     *  Selector: '<S147>/Selector8'
     *  Selector: '<S147>/Selector9'
     *  Selector: '<S197>/Selector'
     *  Selector: '<S197>/Selector1'
     *  Selector: '<S198>/Selector'
     *  Sqrt: '<S200>/Sqrt'
     *  Sum: '<S147>/Subtract'
     *  Sum: '<S197>/Add'
     *  Sum: '<S200>/Subtract'
     *  Sum: '<S200>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_UnitDelay1_gi = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch1_as *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_UnitDelay1_gi = fmin(rtb_Switch1_as * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S200>/Switch' */

    /* Logic: '<S148>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S148>/Switch1' incorporates:
     *  Switch: '<S148>/Switch'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S13>/Merge2' incorporates:
       *  Constant: '<S148>/Constant3'
       *  SignalConversion: '<S148>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S13>/Merge2' incorporates:
       *  SignalConversion: '<S148>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S148>/Switch1' */

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion: '<S148>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S147>/Selector6' incorporates:
     *  Concatenate: '<S147>/Matrix Concatenate'
     *  Selector: '<S147>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S147>/Selector2' incorporates:
     *  Concatenate: '<S147>/Matrix Concatenate'
     *  Selector: '<S147>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S148>/Switch2' incorporates:
     *  Sum: '<S204>/Subtract'
     *  Sum: '<S204>/Subtract1'
     *  Trigonometry: '<S204>/Atan2'
     *  UnitDelay: '<S148>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_ha = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S148>/Switch2' */

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion: '<S148>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_ha;

    /* Merge: '<S13>/Merge7' incorporates:
     *  SignalConversion: '<S145>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S148>/Constant2'
     *  SignalConversion generated from: '<S145>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S148>/Constant5'
     *  SignalConversion generated from: '<S145>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S13>/Merge5' incorporates:
     *  Constant: '<S148>/Constant6'
     *  SignalConversion generated from: '<S145>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S13>/Merge6' incorporates:
     *  Constant: '<S148>/Constant1'
     *  SignalConversion generated from: '<S145>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S146>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S145>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S198>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S198>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S148>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S148>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_ha;

    /* End of Outputs for SubSystem: '<S13>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/Pass Through' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S144>/Constant'
     *  SignalConversion generated from: '<S144>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion generated from: '<S144>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion generated from: '<S144>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion generated from: '<S144>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion generated from: '<S144>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S144>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S13>/Merge5' incorporates:
     *  SignalConversion generated from: '<S144>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge6' incorporates:
     *  SignalConversion generated from: '<S144>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S13>/Pass Through' */
  }

  /* End of If: '<S13>/If' */

  /* Signum: '<S298>/Sign2' incorporates:
   *  UnitDelay: '<S298>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S298>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S298>/Product1' incorporates:
   *  Signum: '<S298>/Sign1'
   *  Signum: '<S298>/Sign2'
   */
  rtb_Switch1_cp *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch1_cp)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_cp, 256.0);
  }

  /* Switch: '<S298>/Switch' incorporates:
   *  Constant: '<S298>/Constant'
   *  Constant: '<S303>/Constant'
   *  Constant: '<S304>/Constant'
   *  Logic: '<S298>/or'
   *  Product: '<S298>/Product1'
   *  RelationalOperator: '<S303>/Compare'
   *  RelationalOperator: '<S304>/Compare'
   *  UnitDelay: '<S298>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S298>/Switch' */

  /* Switch: '<S309>/Init' incorporates:
   *  UnitDelay: '<S309>/FixPt Unit Delay1'
   *  UnitDelay: '<S309>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S309>/Init' */

  /* RelationalOperator: '<S305>/Compare' incorporates:
   *  Constant: '<S305>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S306>/Compare' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c > 0.0);

  /* Abs: '<S298>/Abs' incorporates:
   *  Sum: '<S298>/Subtract'
   *  UnitDelay: '<S298>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S298>/Switch5' incorporates:
   *  Constant: '<S298>/Constant1'
   *  Switch: '<S298>/Switch1'
   *  UnaryMinus: '<S298>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S298>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S298>/Constant4'
     *  Constant: '<S298>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S298>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S298>/Constant2'
     *  Constant: '<S298>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S298>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S298>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic_j;
    rtb_Switch1_cp = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S298>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S298>/Constant10'
     *  Constant: '<S298>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S298>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S298>/Constant7'
     *  Constant: '<S298>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S298>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S298>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S298>/Switch3' incorporates:
     *  Constant: '<S298>/Constant1'
     *  Constant: '<S298>/Constant3'
     *  UnaryMinus: '<S298>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch1_cp = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_cp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S298>/Switch3' */
  }

  /* End of Switch: '<S298>/Switch5' */

  /* Product: '<S298>/Product' incorporates:
   *  Switch: '<S298>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_cp * rtb_Merge1;

  /* Sum: '<S307>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S308>/Switch2' incorporates:
   *  RelationalOperator: '<S308>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S298>/Switch2' incorporates:
     *  Constant: '<S298>/Constant1'
     *  Switch: '<S298>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S298>/Switch4' incorporates:
       *  Constant: '<S298>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S298>/Switch4' incorporates:
       *  Constant: '<S298>/Constant3'
       *  UnaryMinus: '<S298>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S298>/Switch2' */

    /* Product: '<S298>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S308>/Switch' incorporates:
     *  RelationalOperator: '<S308>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S308>/Switch' */
  }

  /* End of Switch: '<S308>/Switch2' */

  /* Sum: '<S307>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S301>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S325>/Constant3'
     *  Constant: '<S325>/Constant4'
     *  Math: '<S325>/Math Function'
     *  Sum: '<S301>/Subtract'
     *  Sum: '<S325>/Add1'
     *  Sum: '<S325>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Init) + 3.1415926535897931,
       6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S301>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S301>/Switch' */

  /* Sum: '<S321>/Add1' incorporates:
   *  Constant: '<S321>/Constant3'
   *  Constant: '<S321>/Constant4'
   *  Math: '<S321>/Math Function'
   *  Sum: '<S300>/Add'
   *  Sum: '<S320>/Sum'
   *  Sum: '<S321>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Init +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S323>/Sum1' incorporates:
   *  Constant: '<S320>/Constant2'
   *  Product: '<S323>/Product'
   *  Sum: '<S323>/Sum'
   *  UnitDelay: '<S323>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S320>/Product' incorporates:
   *  Constant: '<S320>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S322>/Diff' incorporates:
   *  UnitDelay: '<S322>/UD'
   *
   * Block description for '<S322>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S322>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S320>/Saturation' */
  if (rtb_Add_ih > Steering_Heading_Control_D_UL) {
    rtb_Add_ih = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_D_LL) {
    rtb_Add_ih = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S320>/Add' incorporates:
   *  Gain: '<S320>/Gain1'
   *  Saturate: '<S320>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_ih;

  /* Sum: '<S320>/Subtract' incorporates:
   *  Constant: '<S320>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S320>/Sum2' incorporates:
   *  Gain: '<S320>/Gain2'
   *  UnitDelay: '<S320>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S324>/Switch2' incorporates:
   *  RelationalOperator: '<S324>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S320>/Subtract1' incorporates:
     *  Constant: '<S320>/Constant1'
     */
    rtb_Switch1_ha = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S324>/Switch' incorporates:
     *  RelationalOperator: '<S324>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_ha) {
      rtb_uDLookupTable_l = rtb_Switch1_ha;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S324>/Switch' */
  }

  /* End of Switch: '<S324>/Switch2' */

  /* Saturate: '<S320>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S320>/Saturation1' */

  /* Sum: '<S320>/Add1' */
  rtb_Add_ih = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S320>/Saturation2' */
  if (rtb_Add_ih > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S320>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S320>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S320>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ih;
  }

  /* End of Saturate: '<S320>/Saturation2' */

  /* Switch: '<S300>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S311>/Switch' incorporates:
     *  Abs: '<S311>/Abs'
     *  Constant: '<S311>/Constant'
     *  Constant: '<S319>/Constant'
     *  RelationalOperator: '<S319>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S311>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S300>/Switch' */

  /* Signum: '<S310>/Sign2' incorporates:
   *  UnitDelay: '<S310>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S310>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S310>/Product1' incorporates:
   *  Signum: '<S310>/Sign1'
   *  Signum: '<S310>/Sign2'
   */
  rtb_Switch1_cp *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch1_cp)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_cp, 256.0);
  }

  /* Switch: '<S310>/Switch' incorporates:
   *  Constant: '<S310>/Constant'
   *  Constant: '<S312>/Constant'
   *  Constant: '<S313>/Constant'
   *  Logic: '<S310>/or'
   *  Product: '<S310>/Product1'
   *  RelationalOperator: '<S312>/Compare'
   *  RelationalOperator: '<S313>/Compare'
   *  UnitDelay: '<S310>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_j = 0.0;
  }

  /* End of Switch: '<S310>/Switch' */

  /* Switch: '<S318>/Init' incorporates:
   *  UnitDelay: '<S318>/FixPt Unit Delay1'
   *  UnitDelay: '<S318>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_j;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S318>/Init' */

  /* RelationalOperator: '<S314>/Compare' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_j == 0.0);

  /* RelationalOperator: '<S315>/Compare' incorporates:
   *  Constant: '<S315>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j > 0.0);

  /* Abs: '<S310>/Abs' incorporates:
   *  Sum: '<S310>/Subtract'
   *  UnitDelay: '<S310>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S310>/Switch5' incorporates:
   *  Constant: '<S310>/Constant1'
   *  Switch: '<S310>/Switch1'
   *  UnaryMinus: '<S310>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S310>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S310>/Constant4'
     *  Constant: '<S310>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S310>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S310>/Constant2'
     *  Constant: '<S310>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S310>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S310>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Product_ku, &rtb_Minus_n[0], 1U);
    rtb_Product_ku = rtb_LookupTableDynamic;
    rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S310>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S310>/Constant10'
     *  Constant: '<S310>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S310>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S310>/Constant7'
     *  Constant: '<S310>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S310>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S310>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Product_ku, &rtb_Minus_n[0], 1U);
    rtb_Product_ku = rtb_LookupTableDynamic1;

    /* Switch: '<S310>/Switch3' incorporates:
     *  Constant: '<S310>/Constant1'
     *  Constant: '<S310>/Constant3'
     *  UnaryMinus: '<S310>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S310>/Switch3' */
  }

  /* End of Switch: '<S310>/Switch5' */

  /* Product: '<S310>/Product' incorporates:
   *  Switch: '<S310>/Switch1'
   */
  rtb_Switch1_ha = rtb_Switch1_cp * rtb_Product_ku;

  /* Sum: '<S316>/Sum1' */
  rtb_Switch2_j -= rtb_Init_e;

  /* Switch: '<S317>/Switch2' incorporates:
   *  RelationalOperator: '<S317>/LowerRelop1'
   */
  if (!(rtb_Switch2_j > rtb_Switch1_ha)) {
    /* Switch: '<S310>/Switch2' incorporates:
     *  Constant: '<S310>/Constant1'
     *  Constant: '<S310>/Constant3'
     *  Switch: '<S310>/Switch4'
     *  UnaryMinus: '<S310>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S310>/Switch4' incorporates:
       *  Constant: '<S310>/Constant1'
       */
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S310>/Product2' incorporates:
     *  Switch: '<S310>/Switch2'
     */
    rtb_Switch1_ha = rtb_Switch1_cp * rtb_Product_ku;

    /* Switch: '<S317>/Switch' incorporates:
     *  RelationalOperator: '<S317>/UpperRelop'
     */
    if (!(rtb_Switch2_j < rtb_Switch1_ha)) {
      rtb_Switch1_ha = rtb_Switch2_j;
    }

    /* End of Switch: '<S317>/Switch' */
  }

  /* End of Switch: '<S317>/Switch2' */

  /* Sum: '<S316>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_ha + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S213>/Initialize Function' */
  /* Sum: '<S299>/Add' incorporates:
   *  Constant: '<S299>/Constant'
   *  Constant: '<S299>/Constant4'
   *  Constant: '<S299>/Constant5'
   *  Trigonometry: '<S299>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S213>/Initialize Function' */

  /* Fcn: '<S333>/r->x' incorporates:
   *  Fcn: '<S338>/r->x'
   *  Fcn: '<S343>/r->x'
   *  Fcn: '<S348>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S327>/Add' incorporates:
   *  Fcn: '<S333>/r->x'
   *  Fcn: '<S334>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S333>/theta->y' incorporates:
   *  Fcn: '<S338>/theta->y'
   *  Fcn: '<S343>/theta->y'
   *  Fcn: '<S348>/theta->y'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S327>/Add' incorporates:
   *  Fcn: '<S333>/theta->y'
   *  Fcn: '<S334>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_l;

  /* Sum: '<S328>/Add' incorporates:
   *  Fcn: '<S339>/r->x'
   *  Fcn: '<S339>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S329>/Add' incorporates:
   *  Fcn: '<S344>/r->x'
   *  Fcn: '<S344>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S330>/Add' incorporates:
   *  Fcn: '<S349>/r->x'
   *  Fcn: '<S349>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_l;

  /* Fcn: '<S347>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Init_e);

  /* RelationalOperator: '<S350>/Compare' incorporates:
   *  Constant: '<S350>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S346>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S346>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S346>/Switch1' */

  /* Fcn: '<S332>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S335>/Compare' incorporates:
   *  Constant: '<S335>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_l == 0.0);

  /* Switch: '<S331>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S331>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S331>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S331>/Switch1' */

  /* Fcn: '<S337>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S340>/Compare' incorporates:
   *  Constant: '<S340>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_c == 0.0);

  /* Switch: '<S336>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S336>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S336>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S336>/Switch1' */

  /* Fcn: '<S342>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S341>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S341>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S341>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S341>/Switch1' */

  /* Product: '<S326>/Divide' incorporates:
   *  Abs: '<S326>/Abs'
   *  Abs: '<S326>/Abs1'
   *  Abs: '<S326>/Abs2'
   *  Abs: '<S326>/Abs3'
   *  Constant: '<S326>/Constant'
   *  MinMax: '<S326>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S326>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S346>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S346>/Switch' incorporates:
     *  Fcn: '<S347>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S346>/Switch' */

  /* Trigonometry: '<S290>/Cos4' incorporates:
   *  Switch: '<S279>/Angle_Switch'
   *  Trigonometry: '<S289>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S290>/Sin5' incorporates:
   *  UnaryMinus: '<S288>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S290>/Sin4' incorporates:
   *  Switch: '<S279>/Angle_Switch'
   *  Trigonometry: '<S289>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S290>/Cos5' incorporates:
   *  UnaryMinus: '<S288>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S290>/Subtract1' incorporates:
   *  Product: '<S290>/Product2'
   *  Product: '<S290>/Product3'
   *  Trigonometry: '<S290>/Cos4'
   *  Trigonometry: '<S290>/Sin4'
   */
  rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_m4 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S290>/Subtract' incorporates:
   *  Product: '<S290>/Product'
   *  Product: '<S290>/Product1'
   *  Trigonometry: '<S290>/Cos4'
   *  Trigonometry: '<S290>/Sin4'
   */
  rtb_Switch1_ha = (rtb_MatrixConcatenate_b_idx_1 *
                    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4 *
    rtb_uDLookupTable_l);

  /* Math: '<S290>/Hypot' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Switch1_ha, rtb_Init_e);

  /* Switch: '<S290>/Switch' incorporates:
   *  Constant: '<S290>/Constant'
   *  Constant: '<S290>/Constant1'
   *  Constant: '<S291>/Constant'
   *  Product: '<S290>/Divide'
   *  Product: '<S290>/Divide1'
   *  RelationalOperator: '<S291>/Compare'
   *  Switch: '<S290>/Switch1'
   */
  if (rtb_Switch2_j > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch2_j;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_ha / rtb_Switch2_j;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S290>/Switch' */

  /* Switch: '<S279>/Speed_Switch' incorporates:
   *  Abs: '<S279>/Abs'
   *  Constant: '<S287>/Constant'
   *  RelationalOperator: '<S287>/Compare'
   *  Switch: '<S279>/Angle_Switch'
   *  Trigonometry: '<S289>/Atan1'
   *  Trigonometry: '<S290>/Atan1'
   *  UnaryMinus: '<S279>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S289>/Subtract1' incorporates:
     *  Product: '<S289>/Product2'
     *  Product: '<S289>/Product3'
     *  UnaryMinus: '<S279>/Unary Minus'
     */
    rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S289>/Subtract' incorporates:
     *  Product: '<S289>/Product'
     *  Product: '<S289>/Product1'
     */
    rtb_Switch2_j = (rtb_MatrixConcatenate_b_idx_1 *
                     Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S289>/Hypot' */
    rtb_Switch1_ha = rt_hypotd_snf(rtb_Switch2_j, rtb_Init_e);

    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S289>/Constant'
     *  Constant: '<S289>/Constant1'
     *  Constant: '<S292>/Constant'
     *  Product: '<S289>/Divide'
     *  Product: '<S289>/Divide1'
     *  RelationalOperator: '<S292>/Compare'
     *  Switch: '<S289>/Switch'
     */
    if (rtb_Switch1_ha > 1.0E-6) {
      rtb_Switch2_j /= rtb_Switch1_ha;
      rtb_Init_e /= rtb_Switch1_ha;
    } else {
      rtb_Switch2_j = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S289>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2_j);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S282>/Product2' incorporates:
   *  Constant: '<S282>/Constant'
   *  Switch: '<S279>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S277>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S277>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S280>/Add' incorporates:
   *  Sum: '<S281>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S212>/Product' incorporates:
   *  Abs: '<S277>/Abs'
   *  Abs: '<S280>/Abs'
   *  Constant: '<S283>/Constant'
   *  Constant: '<S293>/Constant3'
   *  Constant: '<S293>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S277>/OR'
   *  Lookup_n-D: '<S280>/1-D Lookup Table'
   *  Math: '<S293>/Math Function'
   *  RelationalOperator: '<S277>/Equal1'
   *  RelationalOperator: '<S283>/Compare'
   *  Signum: '<S277>/Sign'
   *  Signum: '<S277>/Sign1'
   *  Sum: '<S280>/Add'
   *  Sum: '<S293>/Add1'
   *  Sum: '<S293>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S278>/Gain' */
  rtb_Switch2_j = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S278>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S285>/Sum1' incorporates:
   *  Constant: '<S278>/Constant2'
   *  Product: '<S285>/Product'
   *  Sum: '<S285>/Sum'
   *  UnitDelay: '<S285>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S278>/Product' incorporates:
   *  Constant: '<S278>/Constant3'
   */
  rtb_Switch1_ha = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S284>/Diff' incorporates:
   *  UnitDelay: '<S284>/UD'
   *
   * Block description for '<S284>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S284>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Switch1_ha - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S278>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Gain: '<S278>/Gain1'
   *  Saturate: '<S278>/Saturation'
   */
  rtb_Product_ku = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch2_j) +
    rtb_Add_ih;

  /* Sum: '<S278>/Subtract' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Product_ku;

  /* Sum: '<S278>/Sum2' incorporates:
   *  Gain: '<S278>/Gain2'
   *  UnitDelay: '<S278>/Unit Delay'
   */
  rtb_Switch2_j = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S286>/Switch2' incorporates:
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S286>/LowerRelop1'
   *  Sum: '<S278>/Subtract'
   */
  if (!(rtb_Switch2_j > (1.0 - rtb_Product_ku))) {
    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S278>/Constant1'
     *  RelationalOperator: '<S286>/UpperRelop'
     *  Sum: '<S278>/Subtract1'
     */
    if (rtb_Switch2_j < (-1.0 - rtb_Product_ku)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Product_ku;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_j;
    }

    /* End of Switch: '<S286>/Switch' */
  }

  /* End of Switch: '<S286>/Switch2' */

  /* Saturate: '<S278>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch2_j = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch2_j = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S278>/Saturation1' */

  /* Sum: '<S278>/Add1' */
  rtb_Add_ih = rtb_Product_ku + rtb_Switch2_j;

  /* Saturate: '<S278>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S278>/Saturation2' */

  /* Sum: '<S294>/Add1' incorporates:
   *  Constant: '<S294>/Constant3'
   *  Constant: '<S294>/Constant4'
   *  Math: '<S294>/Math Function'
   *  Sum: '<S294>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S296>/Sum1' incorporates:
   *  Constant: '<S281>/Constant2'
   *  Product: '<S296>/Product'
   *  Sum: '<S296>/Sum'
   *  UnitDelay: '<S296>/Unit Delay1'
   */
  rtb_Product_ku = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S281>/Product' incorporates:
   *  Constant: '<S281>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Product_ku * Steering_Motor_Control_D;

  /* Sum: '<S295>/Diff' incorporates:
   *  UnitDelay: '<S295>/UD'
   *
   * Block description for '<S295>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S295>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Rotationmatrixfromlocalto_0 - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S281>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S281>/Add' incorporates:
   *  Gain: '<S281>/Gain1'
   *  Saturate: '<S281>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_ih;

  /* Sum: '<S281>/Subtract' incorporates:
   *  Constant: '<S281>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S281>/Sum2' incorporates:
   *  Gain: '<S281>/Gain2'
   *  UnitDelay: '<S281>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S297>/Switch2' incorporates:
   *  Constant: '<S281>/Constant'
   *  RelationalOperator: '<S297>/LowerRelop1'
   *  Sum: '<S281>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S281>/Constant1'
     *  RelationalOperator: '<S297>/UpperRelop'
     *  Sum: '<S281>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S297>/Switch' */
  }

  /* End of Switch: '<S297>/Switch2' */

  /* Saturate: '<S281>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S281>/Saturation1' */

  /* Sum: '<S281>/Add1' */
  rtb_Add_ih = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S281>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S281>/Saturation2' */

  /* Product: '<S326>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S331>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S331>/Switch' incorporates:
     *  Fcn: '<S332>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S331>/Switch' */

  /* Trigonometry: '<S227>/Cos4' incorporates:
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S227>/Sin5' incorporates:
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S227>/Sin4' incorporates:
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S227>/Cos5' incorporates:
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S227>/Subtract1' incorporates:
   *  Product: '<S227>/Product2'
   *  Product: '<S227>/Product3'
   *  Trigonometry: '<S227>/Cos4'
   *  Trigonometry: '<S227>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_m4 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S227>/Subtract' incorporates:
   *  Product: '<S227>/Product'
   *  Product: '<S227>/Product1'
   *  Trigonometry: '<S227>/Cos4'
   *  Trigonometry: '<S227>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_MatrixConcatenate_b_idx_1 *
                      rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4 *
    rtb_uDLookupTable_l);

  /* Math: '<S227>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S227>/Switch' incorporates:
   *  Constant: '<S227>/Constant'
   *  Constant: '<S227>/Constant1'
   *  Constant: '<S228>/Constant'
   *  Product: '<S227>/Divide'
   *  Product: '<S227>/Divide1'
   *  RelationalOperator: '<S228>/Compare'
   *  Switch: '<S227>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S227>/Switch' */

  /* Switch: '<S216>/Speed_Switch' incorporates:
   *  Abs: '<S216>/Abs'
   *  Constant: '<S224>/Constant'
   *  RelationalOperator: '<S224>/Compare'
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Atan1'
   *  Trigonometry: '<S227>/Atan1'
   *  UnaryMinus: '<S216>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S226>/Subtract1' incorporates:
     *  Product: '<S226>/Product2'
     *  Product: '<S226>/Product3'
     *  UnaryMinus: '<S216>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S226>/Subtract' incorporates:
     *  Product: '<S226>/Product'
     *  Product: '<S226>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S226>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S226>/Constant'
     *  Constant: '<S226>/Constant1'
     *  Constant: '<S229>/Constant'
     *  Product: '<S226>/Divide'
     *  Product: '<S226>/Divide1'
     *  RelationalOperator: '<S229>/Compare'
     *  Switch: '<S226>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S226>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S219>/Product2' incorporates:
   *  Constant: '<S219>/Constant'
   *  Switch: '<S216>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S214>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S214>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S217>/Add' incorporates:
   *  Sum: '<S218>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S209>/Product' incorporates:
   *  Abs: '<S214>/Abs'
   *  Abs: '<S217>/Abs'
   *  Constant: '<S220>/Constant'
   *  Constant: '<S230>/Constant3'
   *  Constant: '<S230>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S214>/OR'
   *  Lookup_n-D: '<S217>/1-D Lookup Table'
   *  Math: '<S230>/Math Function'
   *  RelationalOperator: '<S214>/Equal1'
   *  RelationalOperator: '<S220>/Compare'
   *  Signum: '<S214>/Sign'
   *  Signum: '<S214>/Sign1'
   *  Sum: '<S217>/Add'
   *  Sum: '<S230>/Add1'
   *  Sum: '<S230>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S215>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S215>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S222>/Sum1' incorporates:
   *  Constant: '<S215>/Constant2'
   *  Product: '<S222>/Product'
   *  Sum: '<S222>/Sum'
   *  UnitDelay: '<S222>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S215>/Product' incorporates:
   *  Constant: '<S215>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S221>/Diff' incorporates:
   *  UnitDelay: '<S221>/UD'
   *
   * Block description for '<S221>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S221>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S215>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S215>/Add' incorporates:
   *  Gain: '<S215>/Gain1'
   *  Saturate: '<S215>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    rtb_Add_ih;

  /* Sum: '<S215>/Subtract' incorporates:
   *  Constant: '<S215>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S215>/Sum2' incorporates:
   *  Gain: '<S215>/Gain2'
   *  UnitDelay: '<S215>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S223>/Switch2' incorporates:
   *  Constant: '<S215>/Constant'
   *  RelationalOperator: '<S223>/LowerRelop1'
   *  Sum: '<S215>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S223>/Switch' incorporates:
     *  Constant: '<S215>/Constant1'
     *  RelationalOperator: '<S223>/UpperRelop'
     *  Sum: '<S215>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S223>/Switch' */
  }

  /* End of Switch: '<S223>/Switch2' */

  /* Saturate: '<S215>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S215>/Saturation1' */

  /* Sum: '<S215>/Add1' */
  rtb_Add_ih = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S215>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S215>/Saturation2' */

  /* Sum: '<S231>/Add1' incorporates:
   *  Constant: '<S231>/Constant3'
   *  Constant: '<S231>/Constant4'
   *  Math: '<S231>/Math Function'
   *  Sum: '<S231>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S233>/Sum1' incorporates:
   *  Constant: '<S218>/Constant2'
   *  Product: '<S233>/Product'
   *  Sum: '<S233>/Sum'
   *  UnitDelay: '<S233>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S218>/Product' incorporates:
   *  Constant: '<S218>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S232>/Diff' incorporates:
   *  UnitDelay: '<S232>/UD'
   *
   * Block description for '<S232>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S232>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S218>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S218>/Add' incorporates:
   *  Gain: '<S218>/Gain1'
   *  Saturate: '<S218>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Switch2_c) +
    rtb_Add_ih;

  /* Sum: '<S218>/Subtract' incorporates:
   *  Constant: '<S218>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S218>/Sum2' incorporates:
   *  Gain: '<S218>/Gain2'
   *  UnitDelay: '<S218>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S234>/Switch2' incorporates:
   *  Constant: '<S218>/Constant'
   *  RelationalOperator: '<S234>/LowerRelop1'
   *  Sum: '<S218>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S234>/Switch' incorporates:
     *  Constant: '<S218>/Constant1'
     *  RelationalOperator: '<S234>/UpperRelop'
     *  Sum: '<S218>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S234>/Switch' */
  }

  /* End of Switch: '<S234>/Switch2' */

  /* Saturate: '<S218>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S218>/Saturation1' */

  /* Sum: '<S218>/Add1' */
  rtb_Add_ih = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S218>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S218>/Saturation2' */

  /* Product: '<S326>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S336>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S336>/Switch' incorporates:
     *  Fcn: '<S337>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S336>/Switch' */

  /* Trigonometry: '<S248>/Cos4' incorporates:
   *  Switch: '<S237>/Angle_Switch'
   *  Trigonometry: '<S247>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S248>/Sin5' incorporates:
   *  UnaryMinus: '<S246>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S248>/Sin4' incorporates:
   *  Switch: '<S237>/Angle_Switch'
   *  Trigonometry: '<S247>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S248>/Cos5' incorporates:
   *  UnaryMinus: '<S246>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S248>/Subtract1' incorporates:
   *  Product: '<S248>/Product2'
   *  Product: '<S248>/Product3'
   *  Trigonometry: '<S248>/Cos4'
   *  Trigonometry: '<S248>/Sin4'
   */
  rtb_Subtract1_dk = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_m4 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S248>/Subtract' incorporates:
   *  Product: '<S248>/Product'
   *  Product: '<S248>/Product1'
   *  Trigonometry: '<S248>/Cos4'
   *  Trigonometry: '<S248>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_MatrixConcatenate_b_idx_1 *
    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S248>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_dk);

  /* Switch: '<S248>/Switch' incorporates:
   *  Constant: '<S248>/Constant'
   *  Constant: '<S248>/Constant1'
   *  Constant: '<S249>/Constant'
   *  Product: '<S248>/Divide'
   *  Product: '<S248>/Divide1'
   *  RelationalOperator: '<S249>/Compare'
   *  Switch: '<S248>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_dk / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S248>/Switch' */

  /* Switch: '<S237>/Speed_Switch' incorporates:
   *  Abs: '<S237>/Abs'
   *  Constant: '<S245>/Constant'
   *  RelationalOperator: '<S245>/Compare'
   *  Switch: '<S237>/Angle_Switch'
   *  Trigonometry: '<S247>/Atan1'
   *  Trigonometry: '<S248>/Atan1'
   *  UnaryMinus: '<S237>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S247>/Subtract1' incorporates:
     *  Product: '<S247>/Product2'
     *  Product: '<S247>/Product3'
     *  UnaryMinus: '<S237>/Unary Minus'
     */
    rtb_Subtract1_dk = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S247>/Subtract' incorporates:
     *  Product: '<S247>/Product'
     *  Product: '<S247>/Product1'
     */
    rtb_Subtract1_m4 = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S247>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract1_m4,
      rtb_Subtract1_dk);

    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S247>/Constant'
     *  Constant: '<S247>/Constant1'
     *  Constant: '<S250>/Constant'
     *  Product: '<S247>/Divide'
     *  Product: '<S247>/Divide1'
     *  RelationalOperator: '<S250>/Compare'
     *  Switch: '<S247>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract1_m4 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_dk /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract1_m4 = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S247>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract1_m4);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S240>/Product2' incorporates:
   *  Constant: '<S240>/Constant'
   *  Switch: '<S237>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S235>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S235>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S238>/Add' incorporates:
   *  Sum: '<S239>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S210>/Product' incorporates:
   *  Abs: '<S235>/Abs'
   *  Abs: '<S238>/Abs'
   *  Constant: '<S241>/Constant'
   *  Constant: '<S251>/Constant3'
   *  Constant: '<S251>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S235>/OR'
   *  Lookup_n-D: '<S238>/1-D Lookup Table'
   *  Math: '<S251>/Math Function'
   *  RelationalOperator: '<S235>/Equal1'
   *  RelationalOperator: '<S241>/Compare'
   *  Signum: '<S235>/Sign'
   *  Signum: '<S235>/Sign1'
   *  Sum: '<S238>/Add'
   *  Sum: '<S251>/Add1'
   *  Sum: '<S251>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S236>/Gain' */
  rtb_Subtract1_dk = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S236>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S243>/Sum1' incorporates:
   *  Constant: '<S236>/Constant2'
   *  Product: '<S243>/Product'
   *  Sum: '<S243>/Sum'
   *  UnitDelay: '<S243>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Switch2_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S236>/Product' incorporates:
   *  Constant: '<S236>/Constant3'
   */
  rtb_Subtract1_m4 = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S242>/Diff' incorporates:
   *  UnitDelay: '<S242>/UD'
   *
   * Block description for '<S242>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S242>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_m4 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S236>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Gain: '<S236>/Gain1'
   *  Saturate: '<S236>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_dk) +
    rtb_Add_ih;

  /* Sum: '<S236>/Subtract' incorporates:
   *  Constant: '<S236>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S236>/Sum2' incorporates:
   *  Gain: '<S236>/Gain2'
   *  UnitDelay: '<S236>/Unit Delay'
   */
  rtb_Subtract1_dk = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S244>/Switch2' incorporates:
   *  Constant: '<S236>/Constant'
   *  RelationalOperator: '<S244>/LowerRelop1'
   *  Sum: '<S236>/Subtract'
   */
  if (!(rtb_Subtract1_dk > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S244>/Switch' incorporates:
     *  Constant: '<S236>/Constant1'
     *  RelationalOperator: '<S244>/UpperRelop'
     *  Sum: '<S236>/Subtract1'
     */
    if (rtb_Subtract1_dk < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_dk;
    }

    /* End of Switch: '<S244>/Switch' */
  }

  /* End of Switch: '<S244>/Switch2' */

  /* Saturate: '<S236>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_dk = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S236>/Saturation1' */

  /* Sum: '<S236>/Add1' */
  rtb_Add_ih = rtb_Hypot_b + rtb_Subtract1_dk;

  /* Saturate: '<S236>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S236>/Saturation2' */

  /* Sum: '<S252>/Add1' incorporates:
   *  Constant: '<S252>/Constant3'
   *  Constant: '<S252>/Constant4'
   *  Math: '<S252>/Math Function'
   *  Sum: '<S252>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S254>/Sum1' incorporates:
   *  Constant: '<S239>/Constant2'
   *  Product: '<S254>/Product'
   *  Sum: '<S254>/Sum'
   *  UnitDelay: '<S254>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S239>/Product' incorporates:
   *  Constant: '<S239>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S253>/Diff' incorporates:
   *  UnitDelay: '<S253>/UD'
   *
   * Block description for '<S253>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S253>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S239>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S239>/Add' incorporates:
   *  Gain: '<S239>/Gain1'
   *  Saturate: '<S239>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_ih;

  /* Sum: '<S239>/Subtract' incorporates:
   *  Constant: '<S239>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S239>/Sum2' incorporates:
   *  Gain: '<S239>/Gain2'
   *  UnitDelay: '<S239>/Unit Delay'
   */
  rtb_Subtract1_g = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S255>/Switch2' incorporates:
   *  Constant: '<S239>/Constant'
   *  RelationalOperator: '<S255>/LowerRelop1'
   *  Sum: '<S239>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S239>/Constant1'
     *  RelationalOperator: '<S255>/UpperRelop'
     *  Sum: '<S239>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S255>/Switch' */
  }

  /* End of Switch: '<S255>/Switch2' */

  /* Saturate: '<S239>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S239>/Saturation1' */

  /* Sum: '<S239>/Add1' */
  rtb_Add_ih = rtb_Add_ik + rtb_Subtract1_g;

  /* Saturate: '<S239>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S239>/Saturation2' */

  /* Product: '<S326>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S341>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S341>/Switch' incorporates:
     *  Fcn: '<S342>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S341>/Switch' */

  /* Trigonometry: '<S269>/Cos4' incorporates:
   *  Switch: '<S258>/Angle_Switch'
   *  Trigonometry: '<S268>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S269>/Sin5' incorporates:
   *  UnaryMinus: '<S267>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S269>/Sin4' incorporates:
   *  Switch: '<S258>/Angle_Switch'
   *  Trigonometry: '<S268>/Sin4'
   */
  rtb_Subtract1_kj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S269>/Cos5' incorporates:
   *  UnaryMinus: '<S267>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S269>/Subtract1' incorporates:
   *  Product: '<S269>/Product2'
   *  Product: '<S269>/Product3'
   *  Trigonometry: '<S269>/Cos4'
   *  Trigonometry: '<S269>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_kj * rtb_Switch2_c);

  /* Sum: '<S269>/Subtract' incorporates:
   *  Product: '<S269>/Product'
   *  Product: '<S269>/Product1'
   *  Trigonometry: '<S269>/Cos4'
   *  Trigonometry: '<S269>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ik * rtb_Switch2_c) - (rtb_Subtract1_kj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S269>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch2_l);

  /* Switch: '<S269>/Switch' incorporates:
   *  Constant: '<S269>/Constant'
   *  Constant: '<S269>/Constant1'
   *  Constant: '<S270>/Constant'
   *  Product: '<S269>/Divide'
   *  Product: '<S269>/Divide1'
   *  RelationalOperator: '<S270>/Compare'
   *  Switch: '<S269>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_l /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_c = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
  }

  /* End of Switch: '<S269>/Switch' */

  /* Switch: '<S258>/Speed_Switch' incorporates:
   *  Abs: '<S258>/Abs'
   *  Constant: '<S266>/Constant'
   *  RelationalOperator: '<S266>/Compare'
   *  Switch: '<S258>/Angle_Switch'
   *  Trigonometry: '<S268>/Atan1'
   *  Trigonometry: '<S269>/Atan1'
   *  UnaryMinus: '<S258>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S268>/Subtract1' incorporates:
     *  Product: '<S268>/Product2'
     *  Product: '<S268>/Product3'
     *  UnaryMinus: '<S258>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S268>/Subtract' incorporates:
     *  Product: '<S268>/Product'
     *  Product: '<S268>/Product1'
     */
    rtb_Subtract1_kj = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S268>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_kj, rtb_Subtract_n);

    /* Switch: '<S268>/Switch1' incorporates:
     *  Constant: '<S268>/Constant'
     *  Constant: '<S268>/Constant1'
     *  Constant: '<S271>/Constant'
     *  Product: '<S268>/Divide'
     *  Product: '<S268>/Divide1'
     *  RelationalOperator: '<S271>/Compare'
     *  Switch: '<S268>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_kj /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract_n / rtb_Add_ik;
    } else {
      rtb_Subtract1_kj = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S268>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_kj);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S261>/Product2' incorporates:
   *  Constant: '<S261>/Constant'
   *  Switch: '<S258>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S256>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S256>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S259>/Add' incorporates:
   *  Sum: '<S260>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S211>/Product' incorporates:
   *  Abs: '<S256>/Abs'
   *  Abs: '<S259>/Abs'
   *  Constant: '<S262>/Constant'
   *  Constant: '<S272>/Constant3'
   *  Constant: '<S272>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S256>/OR'
   *  Lookup_n-D: '<S259>/1-D Lookup Table'
   *  Math: '<S272>/Math Function'
   *  RelationalOperator: '<S256>/Equal1'
   *  RelationalOperator: '<S262>/Compare'
   *  Signum: '<S256>/Sign'
   *  Signum: '<S256>/Sign1'
   *  Sum: '<S259>/Add'
   *  Sum: '<S272>/Add1'
   *  Sum: '<S272>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S257>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S257>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S264>/Sum1' incorporates:
   *  Constant: '<S257>/Constant2'
   *  Product: '<S264>/Product'
   *  Sum: '<S264>/Sum'
   *  UnitDelay: '<S264>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_Subtract1_kj = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S263>/Diff' incorporates:
   *  UnitDelay: '<S263>/UD'
   *
   * Block description for '<S263>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S263>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_kj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S257>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_n) +
    rtb_Add_ih;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_kv;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S265>/Switch2' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S265>/LowerRelop1'
   *  Sum: '<S257>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S265>/Switch' incorporates:
     *  Constant: '<S257>/Constant1'
     *  RelationalOperator: '<S265>/UpperRelop'
     *  Sum: '<S257>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_kv)) {
      rtb_Switch2_c = -1.0 - rtb_Add_kv;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S265>/Switch' */
  }

  /* End of Switch: '<S265>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  rtb_Add_ih = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S257>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S257>/Saturation2' */

  /* Sum: '<S273>/Add1' incorporates:
   *  Constant: '<S273>/Constant3'
   *  Constant: '<S273>/Constant4'
   *  Math: '<S273>/Math Function'
   *  Sum: '<S273>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S275>/Sum1' incorporates:
   *  Constant: '<S260>/Constant2'
   *  Product: '<S275>/Product'
   *  Sum: '<S275>/Sum'
   *  UnitDelay: '<S275>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S260>/Product' incorporates:
   *  Constant: '<S260>/Constant3'
   */
  rtb_Add_kv = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S274>/Diff' incorporates:
   *  UnitDelay: '<S274>/UD'
   *
   * Block description for '<S274>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S274>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S260>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S260>/Add' incorporates:
   *  Gain: '<S260>/Gain1'
   *  Saturate: '<S260>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Add_ih;

  /* Sum: '<S260>/Subtract' incorporates:
   *  Constant: '<S260>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_l;

  /* Sum: '<S260>/Sum2' incorporates:
   *  Gain: '<S260>/Gain2'
   *  UnitDelay: '<S260>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S276>/Switch2' incorporates:
   *  Constant: '<S260>/Constant'
   *  RelationalOperator: '<S276>/LowerRelop1'
   *  Sum: '<S260>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S260>/Constant1'
     *  RelationalOperator: '<S276>/UpperRelop'
     *  Sum: '<S260>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Switch2_c = -1.0 - rtb_Add_l;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S276>/Switch' */
  }

  /* End of Switch: '<S276>/Switch2' */

  /* Saturate: '<S260>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_m = rtb_Switch2_c;
  }

  /* End of Saturate: '<S260>/Saturation1' */

  /* Sum: '<S260>/Add1' */
  rtb_Add_ih = rtb_Add_l + rtb_Subtract1_m;

  /* Saturate: '<S260>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S260>/Saturation2' */

  /* Gain: '<S107>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S107>/Constant'
   *  Constant: '<S108>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S107>/Switch1' incorporates:
   *  UnitDelay: '<S107>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S107>/Switch1' */

  /* Sum: '<S107>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

  /* Gain: '<S107>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S107>/Switch' incorporates:
   *  UnitDelay: '<S107>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S107>/Switch' */

  /* Sum: '<S107>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Back_Lower'
   *  RelationalOperator: '<S18>/Relational Operator'
   */
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Back_Lower >
     Dist_Reset_Motor_Current_Back_Lower));

  /* Switch: '<S18>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Switch: '<S18>/Switch3'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Back_Lower_Arm_Cal_Success));
  } else {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S18>/Constant'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S18>/Switch2' */

  /* Product: '<S19>/Product' incorporates:
   *  Constant: '<S19>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Back_Upper *
    Dist_Per_Rev_Back_Upper;

  /* Logic: '<S19>/AND' incorporates:
   *  Constant: '<S19>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Back_Upper'
   *  RelationalOperator: '<S19>/Relational Operator'
   */
  rtb_Is_Absolute_Translation = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Back_Upper >
     Dist_Reset_Motor_Current_Back_Upper));

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S19>/Dist_Reset_Value'
   *  Sum: '<S19>/Sum'
   *  UnitDelay: '<S19>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Switch1_j = rtb_Switch2_l - Dist_Reset_Value_Back_Upper;
  } else {
    rtb_Switch1_j = Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* Sum: '<S19>/Subtract1' */
  Code_Gen_Model_B.Back_Upper_Arm_Length = rtb_Switch2_l - rtb_Switch1_j;

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  rtb_Switch1_cp = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(rtb_Switch1_cp)) || (rtIsInf(rtb_Switch1_cp))) {
    rtb_Switch1_cp = 0.0;
  } else {
    rtb_Switch1_cp = fmod(rtb_Switch1_cp, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_Switch1_cp < 0.0) ? ((int32_T)
    ((uint8_T)(-((int8_T)((uint8_T)(-rtb_Switch1_cp)))))) : ((int32_T)((uint8_T)
    rtb_Switch1_cp)));

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* Switch: '<S12>/Switch4' incorporates:
   *  Constant: '<S12>/Constant25'
   *  Constant: '<S12>/Constant26'
   *  Lookup_n-D: '<S12>/1-D Lookup Table'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Switch2_c = TEST_Speaker_Height;
  } else {
    rtb_Switch2_c = look1_binlcpw(TEST_Speaker_Angle,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 6U);
  }

  /* End of Switch: '<S12>/Switch4' */

  /* Product: '<S18>/Product' incorporates:
   *  Constant: '<S18>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Back_Lower *
    Dist_Per_Rev_Back_Lower;

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S18>/Dist_Reset_Value'
   *  Sum: '<S18>/Sum'
   *  UnitDelay: '<S18>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_cp = rtb_Switch2_l - Dist_Reset_Value_Back_Lower;
  } else {
    rtb_Switch1_cp = Code_Gen_Model_DW.UnitDelay1_DSTATE_g;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Sum: '<S18>/Subtract1' */
  Code_Gen_Model_B.Back_Lower_Arm_Length = rtb_Switch2_l - rtb_Switch1_cp;

  /* Sum: '<S110>/Add' incorporates:
   *  Constant: '<S110>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 428.625;

  /* Sqrt: '<S110>/Sqrt' incorporates:
   *  Math: '<S110>/Math Function'
   *  Sum: '<S110>/Subtract'
   */
  rtb_Sqrt = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
                  Code_Gen_Model_ConstB.MathFunction1);

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Front * Dist_Per_Rev_Front;

  /* Logic: '<S21>/AND' incorporates:
   *  Constant: '<S21>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Front'
   *  RelationalOperator: '<S21>/Relational Operator'
   */
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Front > Dist_Reset_Motor_Current_Front));

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Sum: '<S21>/Sum'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_l = rtb_Switch2_l - Dist_Reset_Value_Front;
  } else {
    rtb_Switch1_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_l - rtb_Switch1_l;

  /* Sqrt: '<S113>/Sqrt' incorporates:
   *  Constant: '<S113>/Constant24'
   *  Math: '<S113>/Math Function'
   *  Sum: '<S113>/Add'
   *  Sum: '<S113>/Subtract'
   */
  rtb_Sqrt_f = sqrt(((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
                     (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
                    Code_Gen_Model_ConstB.MathFunction1_m);

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Ball_Screw *
    Dist_Per_Rev_Ball_Screw;

  /* Logic: '<S20>/AND' incorporates:
   *  Constant: '<S20>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Ball_Screw'
   *  RelationalOperator: '<S20>/Relational Operator'
   */
  rtb_OR_ao = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
               (Code_Gen_Model_U.Motor_Current_Ball_Screw >
                Dist_Reset_Motor_Current_Ball_Screw));

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_OR_ao) {
    rtb_Switch1_bu = rtb_Switch2_l - Dist_Reset_Value_Ball_Screw;
  } else {
    rtb_Switch1_bu = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Switch2_l - rtb_Switch1_bu;

  /* MATLAB Function: '<S12>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S12>/Constant12'
   *  Constant: '<S12>/Constant2'
   *  Constant: '<S12>/Constant22'
   *  Constant: '<S12>/Constant3'
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S12>/Constant5'
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S12>/Constant7'
   *  Constant: '<S12>/Constant8'
   *  Constant: '<S12>/Constant9'
   */
  sqrt_input = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (sqrt_input - 35175.736099999987) / 331.17548218429454;
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    sqrt_input = sqrt(sqrt_input);
  } else {
    sqrt_input = 0.0;
  }

  rtb_Switch2_l = (((((((d * 0.84366148773210747) + 177.79999999999998) -
                       (sqrt_input * -0.53687549219315933)) - 177.79999999999998)
                     - 139.7) * (rtb_Sqrt_f / 250.18999999999997)) +
                   177.79999999999998) + 139.7;
  rtb_Sqrt_f = (((d * -0.53687549219315933) + 88.899999999999991) + (sqrt_input *
    0.84366148773210747)) * (rtb_Sqrt_f / 250.18999999999997);
  d = sqrt(((rtb_Sqrt_f - 25.4) * (rtb_Sqrt_f - 25.4)) + (rtb_Switch2_l *
            rtb_Switch2_l));
  sqrt_input = rtb_Sqrt * rtb_Sqrt;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    sqrt_input = sqrt(sqrt_input);
  } else {
    sqrt_input = 0.0;
  }

  alpha = atan((rtb_Sqrt_f - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(alpha);
  alpha = sin(alpha);
  rtb_Sqrt = (d * cos_alpha) - (sqrt_input * alpha);
  d = ((d * alpha) + (sqrt_input * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((rtb_Sqrt_f - d) / (rtb_Switch2_l - rtb_Sqrt)) -
    -0.16186298985390718;
  sqrt_input = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  rtb_Sqrt_f = (d - (42.875 * cos_alpha)) - (-76.0 * sqrt_input);
  d = ((rtb_Sqrt - -50.027) - (42.875 * sqrt_input)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Sqrt_f - 465.697) * (rtb_Sqrt_f - 465.697))
    + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Sqrt_f;

  /* Gain: '<S12>/Gain2' incorporates:
   *  MATLAB Function: '<S12>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch2_l;

  /* Chart: '<S12>/Chart_Shooter_Position' incorporates:
   *  Constant: '<S12>/Constant26'
   */
  if (Code_Gen_Model_DW.is_active_c5_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 1U;
    Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
    Code_Gen_Model_B.Desired_Angle = Stage_Angle;
    Code_Gen_Model_B.Desired_Height = Stage_Height;
    Code_Gen_Model_B.Desired_Gap = Stage_Gap;
  } else {
    switch (Code_Gen_Model_DW.is_c5_Code_Gen_Model) {
     case Code_Gen_Model_IN_Amp:
      Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_LoadShooter:
      Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_Speaker:
      Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Speaker_to_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Speaker_to_Stage:
      Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      if ((((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
            (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) &&
           (Code_Gen_Model_B.Meas_Gap < (Stage_Gap + Tol_Gap))) &&
          (Code_Gen_Model_B.Meas_Gap > (Stage_Gap - Tol_Gap))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
      }
      break;

     case Code_Gen_Model_IN_Stage:
      Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Speaker) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Stage_to_Speaker;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Trap) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap;
        Code_Gen_Model_B.Desired_Angle = Trap_Angle;
        Code_Gen_Model_B.Desired_Height = Trap_Height;
        Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Stage_to_Speaker:
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Switch2_c + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Switch2_c - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
        Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;
    }
  }

  /* End of Chart: '<S12>/Chart_Shooter_Position' */

  /* Gain: '<S12>/Gain3' */
  rtb_Switch2_c = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S12>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S12>/Constant10'
   *  Constant: '<S12>/Constant11'
   *  Constant: '<S12>/Constant13'
   *  Constant: '<S12>/Constant14'
   *  Constant: '<S12>/Constant15'
   *  Constant: '<S12>/Constant21'
   */
  rtb_Switch2_l = cos(rtb_Switch2_c);
  rtb_Switch2_c = sin(rtb_Switch2_c);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    rtb_Sqrt = ((rtb_Switch2_l * 42.875) + ((-rtb_Switch2_c) * -76.0)) + (sqrt
      (sqrt_input) - 50.027);
  } else {
    rtb_Sqrt = ((rtb_Switch2_l * 42.875) + ((-rtb_Switch2_c) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = rtb_Sqrt;
  rtb_Minus_n[0] = ((rtb_Switch2_l * 155.54999999999998) + ((-rtb_Switch2_c) *
    -25.4)) + rtb_Sqrt;
  rtb_Sqrt = ((rtb_Switch2_c * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = rtb_Sqrt;
  rtb_Minus_n[1] = ((rtb_Switch2_c * 155.54999999999998) + (rtb_Switch2_l *
    -25.4)) + rtb_Sqrt;
  rtb_Switch2_l = sqrt(((rtb_Reshapey[1] - 25.4) * (rtb_Reshapey[1] - 25.4)) +
                       (rtb_Reshapey[0] * rtb_Reshapey[0]));
  cos_alpha = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                   (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Sqrt = 139.7 - ((317.5 - rtb_Minus_n[0]) * (250.18999999999997 / cos_alpha));
  rtb_Switch2_c = ((250.18999999999997 / cos_alpha) * rtb_Minus_n[1]) -
    88.899999999999991;
  rtb_Ball_Screw_Length = sqrt((rtb_Sqrt * rtb_Sqrt) + (rtb_Switch2_c *
    rtb_Switch2_c));

  /* MATLAB Function: '<S12>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S12>/Constant23'
   *  Constant: '<S12>/Constant24'
   *  Constant: '<S12>/Constant28'
   *  Constant: '<S12>/Constant29'
   *  Constant: '<S12>/Constant30'
   *  Constant: '<S12>/Constant31'
   */
  rtb_Switch2_l = fmax((sqrt((rtb_Switch2_l * rtb_Switch2_l) - 645.16) - 428.625)
                       - 11.690000000000001, 11.690000000000001);
  rtb_Switch2_c = fmin(fmax(42.585, rtb_Switch2_l), 307.975);
  rtb_Switch2_l -= rtb_Switch2_c;
  if (rtb_Switch2_l >= 11.690000000000001) {
    d = fmin(rtb_Switch2_l, 271.14500000000004);
  } else {
    d = 11.690000000000001;
  }

  /* Switch: '<S137>/Init' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   *  UnitDelay: '<S137>/FixPt Unit Delay1'
   *  UnitDelay: '<S137>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S137>/Init' */

  /* Sum: '<S135>/Sum1' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S136>/Switch2' incorporates:
   *  Constant: '<S121>/Constant1'
   *  Constant: '<S121>/Constant3'
   *  RelationalOperator: '<S136>/LowerRelop1'
   *  RelationalOperator: '<S136>/UpperRelop'
   *  Switch: '<S136>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S136>/Switch' incorporates:
     *  Constant: '<S121>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S136>/Switch2' */

  /* Sum: '<S135>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S116>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Sum: '<S125>/Sum1' incorporates:
   *  Constant: '<S116>/Constant2'
   *  Product: '<S125>/Product'
   *  Sum: '<S125>/Sum'
   *  UnitDelay: '<S125>/Unit Delay1'
   */
  rtb_Sqrt = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bm) *
              AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bm;

  /* Product: '<S116>/Product' incorporates:
   *  Constant: '<S116>/Constant3'
   */
  rtb_Sqrt_f = rtb_Sqrt * AA_Deriv_Gain;

  /* Switch: '<S12>/Switch1' incorporates:
   *  Logic: '<S12>/AND3'
   *  Logic: '<S12>/NOT'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Back_Lower_Arm_Cal_Success)) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant27'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Cal_Back_Upper_Arm_DC;
  } else {
    /* Sum: '<S124>/Diff' incorporates:
     *  UnitDelay: '<S124>/UD'
     *
     * Block description for '<S124>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S124>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = rtb_Sqrt_f - Code_Gen_Model_DW.UD_DSTATE_n;

    /* Saturate: '<S116>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S116>/Add' incorporates:
     *  Gain: '<S116>/Gain1'
     *  Saturate: '<S116>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S116>/Saturation2' */
    if (rtb_Add_ih > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S116>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S134>/Init' incorporates:
   *  UnitDelay: '<S134>/FixPt Unit Delay1'
   *  UnitDelay: '<S134>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = d;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S134>/Init' */

  /* Sum: '<S132>/Sum1' */
  rtb_Switch2_c = d - rtb_Switch2_l;

  /* Switch: '<S133>/Switch2' incorporates:
   *  Constant: '<S120>/Constant1'
   *  Constant: '<S120>/Constant3'
   *  RelationalOperator: '<S133>/LowerRelop1'
   *  RelationalOperator: '<S133>/UpperRelop'
   *  Switch: '<S133>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S133>/Switch' incorporates:
     *  Constant: '<S120>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S133>/Switch2' */

  /* Sum: '<S132>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S117>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Sum: '<S127>/Sum1' incorporates:
   *  Constant: '<S117>/Constant2'
   *  Product: '<S127>/Product'
   *  Sum: '<S127>/Sum'
   *  UnitDelay: '<S127>/Unit Delay1'
   */
  d = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_l) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l;

  /* Product: '<S117>/Product' incorporates:
   *  Constant: '<S117>/Constant3'
   */
  sqrt_input = d * AA_Deriv_Gain;

  /* Switch: '<S19>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Switch: '<S19>/Switch3'
     *  UnitDelay: '<S19>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = (rtb_Is_Absolute_Translation ||
      (Code_Gen_Model_B.Back_Upper_Arm_Cal_Success));
  } else {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Switch: '<S12>/Switch' incorporates:
   *  Logic: '<S12>/AND2'
   *  Logic: '<S12>/NOT1'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Back_Upper_Arm_Cal_Success)) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant32'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Cal_Back_Lower_Arm_DC;
  } else {
    /* Sum: '<S126>/Diff' incorporates:
     *  UnitDelay: '<S126>/UD'
     *
     * Block description for '<S126>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S126>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = sqrt_input - Code_Gen_Model_DW.UD_DSTATE_bi;

    /* Saturate: '<S117>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S117>/Add' incorporates:
     *  Gain: '<S117>/Gain1'
     *  Saturate: '<S117>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S117>/Saturation2' */
    if (rtb_Add_ih > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S117>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S112>/Subtract1' incorporates:
   *  Constant: '<S112>/Constant24'
   *  MATLAB Function: '<S12>/Get_Arm_Lengths'
   *  Math: '<S112>/Math Function'
   *  Sqrt: '<S112>/Sqrt'
   *  Sum: '<S112>/Subtract'
   */
  rtb_Switch2_l = sqrt((cos_alpha * cos_alpha) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S112>/Saturation' */
  if (rtb_Switch2_l > Front_AA_Bot_Max_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Max_Ext;
  } else if (rtb_Switch2_l < Front_AA_Bot_Min_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Min_Ext;
  }

  /* End of Saturate: '<S112>/Saturation' */

  /* Switch: '<S143>/Init' incorporates:
   *  UnitDelay: '<S143>/FixPt Unit Delay1'
   *  UnitDelay: '<S143>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S143>/Init' */

  /* Sum: '<S141>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S142>/Switch2' incorporates:
   *  Constant: '<S123>/Constant1'
   *  Constant: '<S123>/Constant3'
   *  RelationalOperator: '<S142>/LowerRelop1'
   *  RelationalOperator: '<S142>/UpperRelop'
   *  Switch: '<S142>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S142>/Switch' incorporates:
     *  Constant: '<S123>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S142>/Switch2' */

  /* Sum: '<S141>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S118>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Sum: '<S129>/Sum1' incorporates:
   *  Constant: '<S118>/Constant2'
   *  Product: '<S129>/Product'
   *  Sum: '<S129>/Sum'
   *  UnitDelay: '<S129>/Unit Delay1'
   */
  cos_alpha = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bg) *
               AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bg;

  /* Product: '<S118>/Product' incorporates:
   *  Constant: '<S118>/Constant3'
   */
  alpha = cos_alpha * AA_Deriv_Gain;

  /* Switch: '<S21>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S21>/Switch2' incorporates:
     *  Switch: '<S21>/Switch3'
     *  UnitDelay: '<S21>/Unit Delay2'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Front_Arm_Cal_Success));
  } else {
    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S21>/Constant'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Switch: '<S12>/Switch2' incorporates:
   *  Logic: '<S12>/AND1'
   *  Logic: '<S12>/NOT2'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Front_Arm_Cal_Success)) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant33'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Cal_Front_Arm_DC;
  } else {
    /* Sum: '<S128>/Diff' incorporates:
     *  UnitDelay: '<S128>/UD'
     *
     * Block description for '<S128>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S128>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = alpha - Code_Gen_Model_DW.UD_DSTATE_g;

    /* Saturate: '<S118>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S118>/Add' incorporates:
     *  Gain: '<S118>/Gain1'
     *  Saturate: '<S118>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S118>/Saturation2' */
    if (rtb_Add_ih > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S118>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S140>/Init' incorporates:
   *  UnitDelay: '<S140>/FixPt Unit Delay1'
   *  UnitDelay: '<S140>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = rtb_Ball_Screw_Length;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S140>/Init' */

  /* Sum: '<S138>/Sum1' */
  rtb_Switch2_c = rtb_Ball_Screw_Length - rtb_Switch2_l;

  /* Switch: '<S139>/Switch2' incorporates:
   *  Constant: '<S122>/Constant1'
   *  Constant: '<S122>/Constant3'
   *  RelationalOperator: '<S139>/LowerRelop1'
   *  RelationalOperator: '<S139>/UpperRelop'
   *  Switch: '<S139>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S139>/Switch' incorporates:
     *  Constant: '<S122>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S139>/Switch2' */

  /* Sum: '<S138>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S119>/Sum' */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S131>/Sum1' incorporates:
   *  Constant: '<S119>/Constant2'
   *  Product: '<S131>/Product'
   *  Sum: '<S131>/Sum'
   *  UnitDelay: '<S131>/Unit Delay1'
   */
  rtb_Switch2_l = ((rtb_Ball_Screw_Length -
                    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S119>/Product' incorporates:
   *  Constant: '<S119>/Constant3'
   */
  rtb_Switch2_c = rtb_Switch2_l * BS_Deriv_Gain;

  /* Switch: '<S20>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Switch: '<S20>/Switch3'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = (rtb_OR_ao ||
      (Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success));
  } else {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Switch: '<S12>/Switch3' incorporates:
   *  Logic: '<S12>/AND'
   *  Logic: '<S12>/NOT3'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success)) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant34'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Cal_Ball_Screw_Arm_DC;
  } else {
    /* Sum: '<S130>/Diff' incorporates:
     *  UnitDelay: '<S130>/UD'
     *
     * Block description for '<S130>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S130>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S119>/Saturation' */
    if (rtb_Add_ih > BS_Deriv_UL) {
      rtb_Add_ih = BS_Deriv_UL;
    } else if (rtb_Add_ih < BS_Deriv_LL) {
      rtb_Add_ih = BS_Deriv_LL;
    }

    /* Sum: '<S119>/Add' incorporates:
     *  Gain: '<S119>/Gain1'
     *  Saturate: '<S119>/Saturation'
     */
    rtb_Add_ih += BS_Prop_Gain * rtb_Ball_Screw_Length;

    /* Saturate: '<S119>/Saturation2' */
    if (rtb_Add_ih > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (rtb_Add_ih < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S119>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch3' */

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  rtb_Is_Absolute_Translation = (Code_Gen_Model_B.State_Request_Intake_Shooter_h
    == 1.0);

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  rtb_Ball_Screw_Length = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   */
  rtb_OR_ao = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  rtb_Switch_b1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   */
  rtb_Compare_o = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* Chart: '<S7>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S35>/FixPt Relational Operator'
   *  RelationalOperator: '<S36>/FixPt Relational Operator'
   *  RelationalOperator: '<S37>/FixPt Relational Operator'
   *  RelationalOperator: '<S38>/FixPt Relational Operator'
   *  RelationalOperator: '<S39>/FixPt Relational Operator'
   *  UnitDelay: '<S35>/Delay Input1'
   *  UnitDelay: '<S36>/Delay Input1'
   *  UnitDelay: '<S37>/Delay Input1'
   *  UnitDelay: '<S38>/Delay Input1'
   *  UnitDelay: '<S39>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S37>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;

    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Mod_IN_Extra_Run_Time2:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time4:
      Code_Gen_Model_B.Note_State_ID = 4.2;
      if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time5:
      Code_Gen_Model_B.Note_State_ID = 5.4;
      if (Code_Gen_Model_DW.timer >= Note_Time_Eject) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time6:
      Code_Gen_Model_B.Note_State_ID = 5.2;
      if (Code_Gen_Model_DW.timer >= Note_Time_Speaker_Spin_Up) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_Intake;
        Code_Gen_Model_B.Note_State_ID = 5.3;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.2;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
      if (Code_Gen_Model_DW.timer >= Note_Time_Eject) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Intake_AND_Shooter:
      Code_Gen_Model_B.Note_State_ID = 4.1;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Co_IN_Note_Speaker_Score_Intake:
      Code_Gen_Model_B.Note_State_ID = 5.3;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist > Note_Detect_Dist_Intake) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time5;
        Code_Gen_Model_B.Note_State_ID = 5.4;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Co_IN_Note_Speaker_Score_SpinUp:
      Code_Gen_Model_B.Note_State_ID = 5.1;
      if ((Code_Gen_Model_U.Shooter_Left_Motor_RPM <
           (-Shooter_Motor_Speed_Transition)) &&
          (Code_Gen_Model_U.Shooter_Right_Motor_RPM >
           Shooter_Motor_Speed_Transition)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time6;
        Code_Gen_Model_B.Note_State_ID = 5.2;
        Code_Gen_Model_DW.timer = 0.02;
      } else {
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Ball_Screw_Length;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Ball_Screw_Length;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time2;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case IN_Spin_Up_Shooter_Before_Trans:
      Code_Gen_Model_B.Note_State_ID = 2.1;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer_Spin_Up) &&
          (Code_Gen_Model_DW.timer >= Servo_Time_Deploy)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Cod_IN_Note_Transfer_to_Shooter;
        Code_Gen_Model_B.Note_State_ID = 2.2;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Store_Servo:
      Code_Gen_Model_B.Note_State_ID = 3.1;
      if (Code_Gen_Model_DW.timer >= Servo_Time_Store) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Eject_from_Shooter;
        Code_Gen_Model_B.Note_State_ID = 3.2;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
        Code_Gen_Model_DW.timer = 0.02;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_Model_B.Note_State_ID = 0.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      if (((int32_T)rtb_Switch_b1) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_h)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Intake_AND_Shooter;
        Code_Gen_Model_B.Note_State_ID = 4.1;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      } else if (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_n)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
        Code_Gen_Model_B.Note_State_ID = 2.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_Is_Absolute_Translation) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_f)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (((int32_T)rtb_OR_ao) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_o)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_Compare_o) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_e)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Ball_Screw_Length;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Ball_Screw_Length;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/Chart_Intake_and_Shooter' */

  /* Sum: '<S40>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S40>/Add' incorporates:
   *  Gain: '<S40>/Gain'
   *  Gain: '<S40>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Ball_Screw_Length);

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant2'
   *  Switch: '<S7>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S40>/Sum2' incorporates:
     *  Gain: '<S40>/Gain2'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    rtb_Ball_Screw_Length = (Shooter_Motor_Control_I * rtb_Ball_Screw_Length) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S40>/Subtract' incorporates:
     *  Constant: '<S40>/Constant'
     */
    rtb_Switch2_n = 1.0 - rtb_Add_ih;

    /* Switch: '<S42>/Switch2' incorporates:
     *  Constant: '<S40>/Constant'
     *  RelationalOperator: '<S42>/LowerRelop1'
     *  Sum: '<S40>/Subtract'
     */
    if (!(rtb_Ball_Screw_Length > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S40>/Subtract1' incorporates:
       *  Constant: '<S40>/Constant1'
       */
      rtb_Switch2_n = -1.0 - rtb_Add_ih;

      /* Switch: '<S42>/Switch' incorporates:
       *  Constant: '<S40>/Constant1'
       *  RelationalOperator: '<S42>/UpperRelop'
       *  Sum: '<S40>/Subtract1'
       */
      if (!(rtb_Ball_Screw_Length < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_n = rtb_Ball_Screw_Length;
      }

      /* End of Switch: '<S42>/Switch' */
    }

    /* End of Switch: '<S42>/Switch2' */

    /* Saturate: '<S40>/Saturation1' */
    if (rtb_Switch2_n > Shooter_Motor_Control_I_UL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_n < Shooter_Motor_Control_I_LL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Ball_Screw_Length = rtb_Switch2_n;
    }

    /* End of Saturate: '<S40>/Saturation1' */

    /* Sum: '<S40>/Add1' */
    rtb_Add_ih += rtb_Ball_Screw_Length;

    /* Saturate: '<S40>/Saturation2' */
    if (rtb_Add_ih > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_ih < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S40>/Saturation2' */
  } else {
    rtb_Ball_Screw_Length = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S40>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S40>/Switch' */

  /* Sum: '<S41>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_n = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S41>/Add' incorporates:
   *  Gain: '<S41>/Gain'
   *  Gain: '<S41>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_n);

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant2'
   *  Switch: '<S7>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S41>/Sum2' incorporates:
     *  Gain: '<S41>/Gain2'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    rtb_Switch2_n = (Shooter_Motor_Control_I * rtb_Switch2_n) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S41>/Subtract' incorporates:
     *  Constant: '<S41>/Constant'
     */
    rtb_Switch2_m4 = 1.0 - rtb_Add_ih;

    /* Switch: '<S43>/Switch2' incorporates:
     *  Constant: '<S41>/Constant'
     *  RelationalOperator: '<S43>/LowerRelop1'
     *  Sum: '<S41>/Subtract'
     */
    if (!(rtb_Switch2_n > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S41>/Subtract1' incorporates:
       *  Constant: '<S41>/Constant1'
       */
      rtb_Switch2_m4 = -1.0 - rtb_Add_ih;

      /* Switch: '<S43>/Switch' incorporates:
       *  Constant: '<S41>/Constant1'
       *  RelationalOperator: '<S43>/UpperRelop'
       *  Sum: '<S41>/Subtract1'
       */
      if (!(rtb_Switch2_n < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_m4 = rtb_Switch2_n;
      }

      /* End of Switch: '<S43>/Switch' */
    }

    /* End of Switch: '<S43>/Switch2' */

    /* Saturate: '<S41>/Saturation1' */
    if (rtb_Switch2_m4 > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_m4 < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_n = rtb_Switch2_m4;
    }

    /* End of Saturate: '<S41>/Saturation1' */

    /* Sum: '<S41>/Add1' */
    rtb_Add_ih += rtb_Switch2_n;

    /* Saturate: '<S41>/Saturation2' */
    if (rtb_Add_ih > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_ih < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S41>/Saturation2' */
  } else {
    rtb_Switch2_n = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S41>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S41>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' */
    Code_Gen_Model_Y.Shooter_Servo_Position = Code_Gen_Model_B.Shooter_Servo_Pos;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* SignalConversion: '<S6>/Signal Copy10' incorporates:
   *  Constant: '<S27>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   *  RelationalOperator: '<S27>/Compare'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    0.0);

  /* Logic: '<S6>/OR4' incorporates:
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Chain_Button = ((Code_Gen_Model_U.Joystick_Left_B8) ||
    (Code_Gen_Model_U.Joystick_Right_B8));

  /* SignalConversion: '<S6>/Signal Copy16' incorporates:
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = Code_Gen_Model_U.Joystick_Left_B4;

  /* SignalConversion: '<S6>/Signal Copy17' incorporates:
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = Code_Gen_Model_U.Joystick_Right_B2;

  /* SignalConversion: '<S6>/Signal Copy18' incorporates:
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Right_Driver = Code_Gen_Model_U.Joystick_Right_B3;

  /* SignalConversion: '<S6>/Signal Copy19' incorporates:
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Left_Driver = Code_Gen_Model_U.Joystick_Right_B4;

  /* SignalConversion: '<S6>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* SignalConversion: '<S6>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* SignalConversion: '<S6>/Signal Copy8' incorporates:
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = Code_Gen_Model_U.Joystick_Left_B2;

  /* SignalConversion: '<S6>/Signal Copy9' incorporates:
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = Code_Gen_Model_U.Joystick_Left_B3;

  /* Update for UnitDelay: '<S99>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S99>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S100>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S100>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S101>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S101>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S102>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S102>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S28>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Gamepad_B1_A;

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_thetay;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' incorporates:
     *  Bias: '<S172>/Bias'
     *  Merge: '<S146>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' incorporates:
     *  Bias: '<S172>/Bias'
     *  Merge: '<S146>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S44>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S64>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S44>/A'
   *  Delay: '<S44>/MemoryX'
   */
  rtb_thetay = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Add_ih = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S44>/MemoryX' incorporates:
   *  Constant: '<S44>/B'
   *  Product: '<S64>/A[k]*xhat[k|k-1]'
   *  Product: '<S64>/B[k]*u[k]'
   *  Sum: '<S64>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_thetay) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Add_ih) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S98>/UD'
   *
   * Block description for '<S98>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Init;

  /* Update for DiscreteIntegrator: '<S11>/Accumulator2' incorporates:
   *  Constant: '<S11>/Constant'
   *  DiscreteIntegrator: '<S11>/Accumulator'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE += Code_Gen_Model_B.Product6[0];
  if (Odometry_Reset_IC > 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 1;
  } else {
    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;
    }

    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S11>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S11>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S309>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S309>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S323>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S322>/UD'
   *
   * Block description for '<S322>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S320>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S318>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S318>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S285>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S284>/UD'
   *
   * Block description for '<S284>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch1_ha;

  /* Update for UnitDelay: '<S278>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2_j;

  /* Update for UnitDelay: '<S296>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Product_ku;

  /* Update for UnitDelay: '<S295>/UD'
   *
   * Block description for '<S295>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S281>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S222>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S221>/UD'
   *
   * Block description for '<S221>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S215>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S233>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S232>/UD'
   *
   * Block description for '<S232>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S218>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S243>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S242>/UD'
   *
   * Block description for '<S242>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_m4;

  /* Update for UnitDelay: '<S236>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_dk;

  /* Update for UnitDelay: '<S254>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S253>/UD'
   *
   * Block description for '<S253>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S239>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S264>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S263>/UD'
   *
   * Block description for '<S263>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_kj;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S275>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S274>/UD'
   *
   * Block description for '<S274>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S260>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_m;

  /* Update for UnitDelay: '<S107>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

  /* Update for UnitDelay: '<S107>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_j;

  /* Update for UnitDelay: '<S18>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_cp;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_l;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_bu;

  /* Update for UnitDelay: '<S137>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S137>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S125>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bm = rtb_Sqrt;

  /* Update for UnitDelay: '<S124>/UD'
   *
   * Block description for '<S124>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_n = rtb_Sqrt_f;

  /* Update for UnitDelay: '<S134>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S134>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S127>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_l = d;

  /* Update for UnitDelay: '<S126>/UD'
   *
   * Block description for '<S126>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_bi = sqrt_input;

  /* Update for UnitDelay: '<S143>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S143>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S129>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bg = cos_alpha;

  /* Update for UnitDelay: '<S128>/UD'
   *
   * Block description for '<S128>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_g = alpha;

  /* Update for UnitDelay: '<S140>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S140>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S131>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S130>/UD'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S38>/Delay Input1'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_OR_ao;

  /* Update for UnitDelay: '<S37>/Delay Input1'
   *
   * Block description for '<S37>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Switch_b1;

  /* Update for UnitDelay: '<S39>/Delay Input1'
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Compare_o;

  /* Update for UnitDelay: '<S40>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Ball_Screw_Length;

  /* Update for UnitDelay: '<S41>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch2_n;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    real_T Constant;
    real_T Constant1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for If: '<S13>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Arm_Calibration_Timeout;

    /* InitializeConditions for Delay: '<S44>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S309>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S318>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S137>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S134>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S143>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S140>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S369>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S13>/Spline Path Following Enabled' */
    /* Start for If: '<S150>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S146>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S150>/Robot_Index_Is_Valid' */
    /* Start for If: '<S153>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S153>/Circle_Check_Valid' */
    /* Start for If: '<S155>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S153>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S150>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S13>/Spline Path Following Enabled' */
  }
}

/* Model terminate function */
void Code_Gen_Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

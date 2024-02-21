/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.84
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Feb 20 23:37:36 2024
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
                                        *   '<S115>/Constant2'
                                        *   '<S116>/Constant2'
                                        *   '<S117>/Constant2'
                                        */
real_T AA_Deriv_Gain = 0.0;            /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S115>/Constant3'
                                        *   '<S116>/Constant3'
                                        *   '<S117>/Constant3'
                                        */
real_T AA_Deriv_LL = -0.5;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S115>/Saturation'
                                        *   '<S116>/Saturation'
                                        *   '<S117>/Saturation'
                                        */
real_T AA_Deriv_UL = 0.5;              /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S115>/Saturation'
                                        *   '<S116>/Saturation'
                                        *   '<S117>/Saturation'
                                        */
real_T AA_Position_Dec_RL = -0.508;    /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S119>/Constant1'
                                        *   '<S120>/Constant1'
                                        *   '<S122>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 0.508;     /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S119>/Constant3'
                                        *   '<S120>/Constant3'
                                        *   '<S122>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S115>/Gain1'
                                        *   '<S116>/Gain1'
                                        *   '<S117>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S115>/Saturation2'
                                        *   '<S116>/Saturation2'
                                        *   '<S117>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S115>/Saturation2'
                                        *   '<S116>/Saturation2'
                                        *   '<S117>/Saturation2'
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
                                        * Referenced by: '<S26>/Constant'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S118>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S118>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S118>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S118>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -0.0508;   /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S121>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 0.0508;    /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S121>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S118>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S118>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S118>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S365>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S363>/Constant'
                                         *   '<S363>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S365>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S363>/Constant1'
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
real_T Dist_Per_Rev_Ball_Screw = 0.52917;/* Variable: Dist_Per_Rev_Ball_Screw
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
real_T Dist_Reset_Value_Back_Lower = 0.0;/* Variable: Dist_Reset_Value_Back_Lower
                                          * Referenced by: '<S18>/Dist_Reset_Value'
                                          */
real_T Dist_Reset_Value_Back_Upper = 0.0;/* Variable: Dist_Reset_Value_Back_Upper
                                          * Referenced by: '<S19>/Dist_Reset_Value'
                                          */
real_T Dist_Reset_Value_Ball_Screw = 0.0;/* Variable: Dist_Reset_Value_Ball_Screw
                                          * Referenced by: '<S20>/Dist_Reset_Value'
                                          */
real_T Dist_Reset_Value_Front = 0.0;   /* Variable: Dist_Reset_Value_Front
                                        * Referenced by: '<S21>/Dist_Reset_Value'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S298>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S214>/Constant3'
                                        *   '<S235>/Constant3'
                                        *   '<S256>/Constant3'
                                        *   '<S277>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S214>/Constant2'
                                   *   '<S235>/Constant2'
                                   *   '<S256>/Constant2'
                                   *   '<S277>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S214>/Saturation'
                                        *   '<S235>/Saturation'
                                        *   '<S256>/Saturation'
                                        *   '<S277>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S214>/Saturation'
                                        *   '<S235>/Saturation'
                                        *   '<S256>/Saturation'
                                        *   '<S277>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S214>/Gain'
                                            *   '<S235>/Gain'
                                            *   '<S256>/Gain'
                                            *   '<S277>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S214>/Gain2'
                                        *   '<S235>/Gain2'
                                        *   '<S256>/Gain2'
                                        *   '<S277>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S214>/Saturation1'
                                        *   '<S235>/Saturation1'
                                        *   '<S256>/Saturation1'
                                        *   '<S277>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S214>/Saturation1'
                                        *   '<S235>/Saturation1'
                                        *   '<S256>/Saturation1'
                                        *   '<S277>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S214>/Gain1'
                                        *   '<S235>/Gain1'
                                        *   '<S256>/Gain1'
                                        *   '<S277>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S219>/Constant'
                            *   '<S240>/Constant'
                            *   '<S261>/Constant'
                            *   '<S282>/Constant'
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
                                        * Referenced by: '<S106>/Constant'
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
                                           *   '<S39>/Gain'
                                           *   '<S40>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S39>/Gain2'
                                         *   '<S40>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S39>/Saturation1'
                                          *   '<S40>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S39>/Saturation1'
                                         *   '<S40>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S39>/Gain1'
                                         *   '<S40>/Gain1'
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
                          * Referenced by: '<S199>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S199>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S146>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S159>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S199>/Constant3'
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
                                          * Referenced by: '<S353>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S319>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S319>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S319>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S319>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S318>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S319>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S319>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S319>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S319>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S319>/Constant1'
                                   *   '<S319>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S319>/Constant'
                                   *   '<S319>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S309>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S309>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S309>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S309>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S309>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S309>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S217>/Constant3'
                                        *   '<S238>/Constant3'
                                        *   '<S259>/Constant3'
                                        *   '<S280>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S217>/Constant2'
                                *   '<S238>/Constant2'
                                *   '<S259>/Constant2'
                                *   '<S280>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S217>/Saturation'
                                           *   '<S238>/Saturation'
                                           *   '<S259>/Saturation'
                                           *   '<S280>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S217>/Saturation'
                                          *   '<S238>/Saturation'
                                          *   '<S259>/Saturation'
                                          *   '<S280>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S217>/Gain2'
                                         *   '<S238>/Gain2'
                                         *   '<S259>/Gain2'
                                         *   '<S280>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S217>/Saturation1'
                                             *   '<S238>/Saturation1'
                                             *   '<S259>/Saturation1'
                                             *   '<S280>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S217>/Saturation1'
                                            *   '<S238>/Saturation1'
                                            *   '<S259>/Saturation1'
                                            *   '<S280>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S217>/Gain1'
                                        *   '<S238>/Gain1'
                                        *   '<S259>/Gain1'
                                        *   '<S280>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S351>/Constant'
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
                        * Referenced by: '<S297>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S297>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S297>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S297>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S297>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S297>/Constant3'
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
  real_T rtb_Sqrt_f;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_cj;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_jx;
  real_T rtb_Subtract1_k0;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch;
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_cp;
  real_T rtb_Switch1_f;
  real_T rtb_Switch1_ha;
  real_T rtb_Switch1_hr;
  real_T rtb_Switch1_j;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_j;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_m4;
  real_T rtb_Switch2_n;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T y;
  int32_T i;
  int32_T rtb_Assignment_tmp;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s171_iter;
  uint16_T s196_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_Compare_o;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S204>/Add1' incorporates:
   *  Constant: '<S204>/Constant3'
   *  Constant: '<S204>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S204>/Math Function'
   *  Sum: '<S14>/Add'
   *  Sum: '<S204>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S98>/Diff'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S205>/Add1' incorporates:
   *  Constant: '<S205>/Constant3'
   *  Constant: '<S205>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S205>/Math Function'
   *  Sum: '<S14>/Add1'
   *  Sum: '<S205>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S206>/Add1' incorporates:
   *  Constant: '<S206>/Constant3'
   *  Constant: '<S206>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S206>/Math Function'
   *  Sum: '<S14>/Add2'
   *  Sum: '<S206>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S207>/Add1' incorporates:
   *  Constant: '<S207>/Constant3'
   *  Constant: '<S207>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S207>/Math Function'
   *  Sum: '<S14>/Add3'
   *  Sum: '<S207>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product3' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S11>/Product7' incorporates:
   *  Fcn: '<S102>/r->x'
   *  Fcn: '<S102>/theta->y'
   *  Fcn: '<S103>/r->x'
   *  Fcn: '<S103>/theta->y'
   *  Fcn: '<S104>/r->x'
   *  Fcn: '<S104>/theta->y'
   *  Fcn: '<S105>/r->x'
   *  Fcn: '<S105>/theta->y'
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
   *  RelationalOperator: '<S27>/FixPt Relational Operator'
   *  Sum: '<S6>/Sum'
   *  UnitDelay: '<S27>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay1'
   *
   * Block description for '<S27>/Delay Input1':
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

    /* Switch: '<S353>/Switch1' incorporates:
     *  Constant: '<S353>/Constant'
     *  Constant: '<S353>/Constant1'
     *  Constant: '<S353>/Constant2'
     *  Math: '<S353>/Hypot'
     *  RelationalOperator: '<S353>/GreaterThan'
     *  Switch: '<S353>/Switch'
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

    /* End of Switch: '<S353>/Switch1' */

    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S361>/Constant'
     *  Constant: '<S362>/Constant'
     *  Logic: '<S355>/AND'
     *  RelationalOperator: '<S361>/Compare'
     *  RelationalOperator: '<S362>/Compare'
     *  Switch: '<S355>/Switch2'
     *  UnitDelay: '<S355>/Unit Delay'
     *  UnitDelay: '<S355>/Unit Delay1'
     */
    if ((rtb_Init == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Init;
    }

    /* End of Switch: '<S355>/Switch1' */

    /* Merge: '<S10>/Merge1' incorporates:
     *  Trigonometry: '<S351>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S358>/Compare' incorporates:
     *  Constant: '<S358>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S354>/Switch' incorporates:
     *  Constant: '<S354>/Constant'
     *  Constant: '<S354>/Constant1'
     *  Constant: '<S356>/Constant'
     *  Constant: '<S357>/Constant'
     *  Logic: '<S354>/Logical Operator'
     *  RelationalOperator: '<S356>/Compare'
     *  RelationalOperator: '<S357>/Compare'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_cp = 6.2831853071795862;
    } else {
      rtb_Switch1_cp = 0.0;
    }

    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S354>/Constant2'
     *  Constant: '<S354>/Constant3'
     *  Constant: '<S359>/Constant'
     *  Constant: '<S360>/Constant'
     *  Logic: '<S354>/Logical Operator1'
     *  RelationalOperator: '<S359>/Compare'
     *  RelationalOperator: '<S360>/Compare'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S354>/Sum1' incorporates:
     *  Switch: '<S354>/Switch'
     *  Switch: '<S354>/Switch1'
     *  UnitDelay: '<S354>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_cp + rtb_Add_ik) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S369>/Constant'
     *  Constant: '<S370>/Constant'
     *  Logic: '<S364>/AND'
     *  RelationalOperator: '<S369>/Compare'
     *  RelationalOperator: '<S370>/Compare'
     *  Switch: '<S364>/Switch2'
     *  UnitDelay: '<S364>/Unit Delay'
     *  UnitDelay: '<S364>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_lw;
      rtb_Switch2_j = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_ha = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_j = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  Trigonometry: '<S352>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_ha,
      rtb_Switch2_j);

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S16>/Constant3'
     *  SignalConversion generated from: '<S16>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S351>/Constant'
     *  Lookup_n-D: '<S351>/Modulation_Str_Y_Rel'
     *  Product: '<S351>/Product'
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

    /* Switch: '<S363>/Switch1' incorporates:
     *  Constant: '<S363>/Constant'
     *  Constant: '<S363>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S363>/Switch1' */

    /* Switch: '<S368>/Init' incorporates:
     *  UnitDelay: '<S368>/FixPt Unit Delay1'
     *  UnitDelay: '<S368>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init = rtb_Product_ku;
    } else {
      rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S368>/Init' */

    /* Sum: '<S366>/Sum1' */
    rtb_Product_ku -= rtb_Init;

    /* Switch: '<S367>/Switch2' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant3'
     *  RelationalOperator: '<S367>/LowerRelop1'
     *  RelationalOperator: '<S367>/UpperRelop'
     *  Switch: '<S367>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S367>/Switch' incorporates:
       *  Constant: '<S365>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S367>/Switch2' */

    /* Sum: '<S366>/Sum' */
    rtb_Init += rtb_Product_ku;

    /* Product: '<S363>/Product' incorporates:
     *  Lookup_n-D: '<S352>/Modulation_Drv'
     *  Math: '<S352>/Magnitude'
     */
    rtb_Add_ih = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_Init;

    /* Saturate: '<S363>/Saturation' */
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

    /* End of Saturate: '<S363>/Saturation' */

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

    /* Update for UnitDelay: '<S355>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S354>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_as;

    /* Update for UnitDelay: '<S354>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S364>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_lw = rtb_Switch1_ha;

    /* Update for UnitDelay: '<S364>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_j;

    /* Update for UnitDelay: '<S368>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S368>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S368>/FixPt Unit Delay1' */
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

  /* Reshape: '<S43>/Reshapey' incorporates:
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

  /* Delay: '<S43>/MemoryX' incorporates:
   *  Constant: '<S43>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_Init = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S11>/Trigonometric Function1' */
  rtb_Switch2_c = sin(rtb_Init);

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S11>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_0 = cos(rtb_Init);
  rtb_Init_e = rtb_Switch2_c;

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S11>/Unary Minus'
   */
  rtb_Switch1_as = -rtb_Switch2_c;

  /* Sum: '<S97>/Diff' incorporates:
   *  UnitDelay: '<S97>/UD'
   *
   * Block description for '<S97>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S97>/UD':
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
    for (s171_iter = 0; s171_iter < 8; s171_iter++) {
      rtb_Switch1_cp += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s171_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Switch1_cp;
  }

  /* End of Product: '<S11>/Product7' */

  /* Product: '<S11>/Product6' incorporates:
   *  SignalConversion generated from: '<S11>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S11>/Unary Minus2'
   */
  rtb_Switch1_ha = (rtb_Switch2_c * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Switch2_c = (rtb_Switch2_l * tmp[0]) + (rtb_Switch2_c * tmp[1]);

  /* Product: '<S11>/Product6' incorporates:
   *  Concatenate: '<S11>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch1_ha) + (rtb_Switch1_as * rtb_Switch2_c);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch1_ha) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Switch2_c);

  /* Outputs for Enabled SubSystem: '<S70>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S63>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S94>/Enable'
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

    /* Product: '<S94>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S43>/C'
     *  Delay: '<S43>/MemoryX'
     *  Product: '<S96>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S94>/Sum' incorporates:
     *  Constant: '<S43>/D'
     *  Product: '<S94>/C[k]*xhat[k|k-1]'
     *  Product: '<S94>/D[k]*u[k]'
     *  Sum: '<S94>/Add1'
     */
    rtb_Switch2_c = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_c + rtb_Switch1_as);

    /* Product: '<S94>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S43>/C'
     *  Delay: '<S43>/MemoryX'
     *  Product: '<S96>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S94>/Sum' incorporates:
     *  Constant: '<S43>/D'
     *  Product: '<S94>/C[k]*xhat[k|k-1]'
     *  Product: '<S94>/D[k]*u[k]'
     *  Sum: '<S94>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch2_c + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S94>/Product3' incorporates:
     *  Constant: '<S44>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S96>/Add1' incorporates:
     *  Product: '<S96>/Product'
     */
    rtb_Switch2_c = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S94>/Product3' incorporates:
     *  Constant: '<S44>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S96>/Add1' incorporates:
     *  Product: '<S96>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S96>/Product2' incorporates:
     *  Constant: '<S44>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_c) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_c) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S94>/Product3' incorporates:
       *  Outport: '<S94>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S96>/Product2' incorporates:
       *  Outport: '<S96>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S9>/AND' */
  /* End of Outputs for SubSystem: '<S63>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S70>/Enabled Subsystem' */

  /* Sum: '<S70>/Add' incorporates:
   *  Delay: '<S43>/MemoryX'
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
   *  Constant: '<S196>/Constant'
   *  Logic: '<S196>/AND'
   *  MATLAB Function: '<S146>/Find closest index to curve'
   *  Product: '<S196>/Product'
   *  RelationalOperator: '<S196>/Relational Operator'
   *  RelationalOperator: '<S196>/Relational Operator1'
   *  Selector: '<S196>/Selector'
   *  Selector: '<S196>/Selector1'
   *  Selector: '<S197>/Selector'
   *  Sum: '<S196>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S149>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S152>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S154>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S149>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S144>/Action Port'
       */
      /* InitializeConditions for If: '<S13>/If' incorporates:
       *  UnitDelay: '<S144>/Unit Delay'
       *  UnitDelay: '<S145>/Unit Delay'
       *  UnitDelay: '<S147>/Unit Delay'
       *  UnitDelay: '<S147>/Unit Delay1'
       *  UnitDelay: '<S197>/Unit Delay'
       *  UnitDelay: '<S197>/Unit Delay1'
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
     *  ActionPort: '<S144>/Action Port'
     */
    /* Selector: '<S145>/Selector1' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S145>/Selector1' */

    /* Lookup_n-D: '<S144>/Capture Radius' incorporates:
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S145>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S145>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S149>/If' incorporates:
     *  RelationalOperator: '<S149>/ '
     *  UnitDelay: '<S145>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S152>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S154>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S149>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S152>/Action Port'
       */
      /* InitializeConditions for If: '<S149>/If' incorporates:
       *  UnitDelay: '<S152>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S149>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S149>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S152>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S152>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S155>/Action Port'
       */
      /* If: '<S152>/If' incorporates:
       *  Selector: '<S145>/Selector1'
       *  Selector: '<S152>/Selector'
       *  Selector: '<S155>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S152>/Increment_If_Rectangle_Check' */

      /* Sum: '<S152>/Minus' incorporates:
       *  Concatenate: '<S145>/Matrix Concatenate2'
       *  Selector: '<S152>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S152>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S155>/Action Port'
       */
      /* If: '<S152>/If' incorporates:
       *  Selector: '<S145>/Selector1'
       *  Selector: '<S152>/Selector'
       *  Selector: '<S155>/Selector'
       *  Sum: '<S152>/Minus'
       */
      rtb_Switch1_ha = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S152>/Increment_If_Rectangle_Check' */

      /* Sum: '<S152>/Minus' incorporates:
       *  Concatenate: '<S145>/Matrix Concatenate2'
       *  Selector: '<S152>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_ha;

      /* Math: '<S152>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S152>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S152>/Switch' incorporates:
       *  Logic: '<S152>/AND'
       *  Logic: '<S152>/OR'
       *  RelationalOperator: '<S152>/Relational Operator'
       *  UnitDelay: '<S152>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S152>/If' */
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
        /* Disable for If: '<S154>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S152>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S154>/Action Port'
         */
        /* If: '<S154>/If' incorporates:
         *  RelationalOperator: '<S154>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S154>/Is_Last_Point' incorporates:
           *  ActionPort: '<S157>/Action Port'
           */
          /* InitializeConditions for If: '<S154>/If' incorporates:
           *  UnitDelay: '<S157>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S154>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S154>/Is_Last_Point' incorporates:
           *  ActionPort: '<S157>/Action Port'
           */
          /* Switch: '<S157>/Switch' incorporates:
           *  Constant: '<S159>/Constant'
           *  Logic: '<S157>/OR'
           *  RelationalOperator: '<S159>/Compare'
           *  UnitDelay: '<S157>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S157>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S157>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S160>/Action Port'
             */
            /* Merge: '<S149>/Merge2' incorporates:
             *  Constant: '<S160>/Constant'
             *  SignalConversion generated from: '<S160>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S160>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S160>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S157>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S157>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S161>/Action Port'
             */
            /* Merge: '<S149>/Merge2' incorporates:
             *  Constant: '<S161>/Constant'
             *  SignalConversion generated from: '<S161>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S161>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S161>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S157>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S157>/If' */

          /* Merge: '<S149>/Merge4' incorporates:
           *  SignalConversion: '<S157>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S157>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S154>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S154>/Increment_Search' incorporates:
           *  ActionPort: '<S156>/Action Port'
           */
          /* Merge: '<S149>/Merge2' incorporates:
           *  Constant: '<S156>/Constant'
           *  SignalConversion generated from: '<S156>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S156>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S156>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S149>/Merge4' incorporates:
           *  Constant: '<S158>/FixPt Constant'
           *  SignalConversion: '<S156>/Signal Copy'
           *  Sum: '<S158>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S154>/Increment_Search' */
        }

        /* End of If: '<S154>/If' */
        /* End of Outputs for SubSystem: '<S152>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S152>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S155>/Action Port'
         */
        /* Sum: '<S162>/FixPt Sum1' incorporates:
         *  Constant: '<S162>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S155>/Selector1' incorporates:
         *  Selector: '<S145>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S163>/Subtract' incorporates:
         *  Selector: '<S155>/Selector1'
         *  Sum: '<S163>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Switch2_l;

        /* Selector: '<S155>/Selector1' incorporates:
         *  Selector: '<S145>/Selector1'
         */
        rtb_Switch2_j = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S163>/Subtract' incorporates:
         *  Selector: '<S155>/Selector1'
         *  Sum: '<S163>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Switch1_ha;

        /* Math: '<S163>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S163>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S163>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S163>/Product' incorporates:
         *  Product: '<S163>/Divide'
         *  UnaryMinus: '<S163>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S163>/Add1' incorporates:
         *  Sum: '<S163>/Add2'
         *  Sum: '<S163>/Minus'
         */
        rtb_Switch2_c = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S163>/Minus4' incorporates:
         *  Sum: '<S163>/Add2'
         *  Sum: '<S163>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S163>/Minus5' incorporates:
         *  Concatenate: '<S145>/Matrix Concatenate2'
         *  Sum: '<S163>/Minus'
         */
        rtb_Subtract1_lg = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S163>/Add' incorporates:
         *  Sum: '<S163>/Add2'
         *  Sum: '<S163>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S163>/Minus' incorporates:
         *  Sum: '<S163>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_as;

        /* DotProduct: '<S163>/Dot Product' incorporates:
         *  Concatenate: '<S145>/Matrix Concatenate2'
         *  Sum: '<S163>/Minus'
         *  Sum: '<S163>/Minus1'
         *  Sum: '<S163>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_c;

        /* DotProduct: '<S163>/Dot Product1' incorporates:
         *  Sum: '<S163>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S163>/Dot Product2' incorporates:
         *  Sum: '<S163>/Minus4'
         *  Sum: '<S163>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku * rtb_Subtract1_lg;

        /* DotProduct: '<S163>/Dot Product3' incorporates:
         *  Sum: '<S163>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S163>/Add1' incorporates:
         *  Sum: '<S163>/Add2'
         *  Sum: '<S163>/Minus'
         */
        rtb_Switch2_c = rtb_Switch2_j - rtb_Minus_n[1];

        /* Sum: '<S163>/Minus4' incorporates:
         *  Sum: '<S163>/Add2'
         *  Sum: '<S163>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_j + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S163>/Minus5' incorporates:
         *  Concatenate: '<S145>/Matrix Concatenate2'
         *  Sum: '<S163>/Minus'
         */
        rtb_Subtract1_lg = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S163>/Add' incorporates:
         *  Sum: '<S163>/Add2'
         *  Sum: '<S163>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_ha - rtb_Minus_n[1];

        /* Sum: '<S163>/Minus' incorporates:
         *  Sum: '<S163>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_as;

        /* DotProduct: '<S163>/Dot Product' incorporates:
         *  Concatenate: '<S145>/Matrix Concatenate2'
         *  Sum: '<S163>/Minus'
         *  Sum: '<S163>/Minus1'
         *  Sum: '<S163>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_c;

        /* RelationalOperator: '<S164>/Compare' incorporates:
         *  Constant: '<S164>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S163>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S163>/Dot Product1'
         *  Sum: '<S163>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_c * rtb_Switch2_c) +
          rtb_Switch2_l));

        /* DotProduct: '<S163>/Dot Product2' incorporates:
         *  Sum: '<S163>/Minus4'
         *  Sum: '<S163>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Subtract1_lg) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S149>/Merge4' incorporates:
         *  Constant: '<S165>/Constant'
         *  DataTypeConversion: '<S155>/Data Type Conversion'
         *  DotProduct: '<S163>/Dot Product3'
         *  Logic: '<S163>/AND'
         *  RelationalOperator: '<S163>/LessThanOrEqual1'
         *  RelationalOperator: '<S165>/Compare'
         *  Sum: '<S155>/Add'
         *  Sum: '<S163>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S149>/Merge2' incorporates:
         *  Constant: '<S155>/Constant2'
         *  SignalConversion generated from: '<S155>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S155>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S155>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S152>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S152>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S153>/Action Port'
         */
        /* Merge: '<S149>/Merge2' incorporates:
         *  Constant: '<S153>/Constant2'
         *  SignalConversion generated from: '<S153>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S153>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S153>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S149>/Merge4' incorporates:
         *  SignalConversion generated from: '<S153>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S152>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S149>/Merge1' incorporates:
       *  Constant: '<S152>/Constant'
       *  SignalConversion generated from: '<S152>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S152>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S149>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S149>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S151>/Action Port'
       */
      /* Merge: '<S149>/Merge1' incorporates:
       *  Constant: '<S151>/Constant'
       *  SignalConversion generated from: '<S151>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S149>/Merge2' incorporates:
       *  Constant: '<S151>/Constant1'
       *  SignalConversion generated from: '<S151>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S151>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S151>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S149>/Merge4' incorporates:
       *  SignalConversion generated from: '<S151>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S149>/Escape_Auto_Driving' */
    }

    /* End of If: '<S149>/If' */

    /* If: '<S145>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S145>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S150>/Action Port'
       */
      /* Bias: '<S166>/Add Constant' incorporates:
       *  Bias: '<S166>/Bias'
       *  Sum: '<S166>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S166>/Selector4' incorporates:
       *  Bias: '<S166>/Bias1'
       *  Constant: '<S168>/FixPt Constant'
       *  Sum: '<S168>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S166>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S166>/Selector' incorporates:
       *  Bias: '<S166>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S166>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S166>/Matrix Concatenate' incorporates:
       *  Gain: '<S169>/Gain'
       *  Gain: '<S170>/Gain'
       *  Selector: '<S145>/Selector1'
       *  Selector: '<S166>/Selector'
       *  Selector: '<S166>/Selector1'
       *  Selector: '<S166>/Selector2'
       *  Selector: '<S166>/Selector3'
       *  Sum: '<S169>/Subtract'
       *  Sum: '<S170>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S166>/Selector4' incorporates:
         *  Selector: '<S166>/Selector'
         */
        s171_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S169>/Subtract' incorporates:
         *  Bias: '<S166>/Add Constant1'
         *  Selector: '<S166>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s171_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S166>/Selector4' incorporates:
         *  Gain: '<S169>/Gain'
         *  Selector: '<S166>/Selector'
         *  Selector: '<S166>/Selector1'
         *  Sum: '<S169>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s171_iter) - 1];
        }
      }

      /* End of Concatenate: '<S166>/Matrix Concatenate' */

      /* Assignment: '<S166>/Assignment' incorporates:
       *  Selector: '<S166>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s171_iter = 0; s171_iter < rtb_Bias1_p; s171_iter++) {
          rtb_Assignment[s171_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s171_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S166>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S167>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S171>/While Iterator'
       */
      s171_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s171_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s171_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s171_iter] - rtb_Assignment[s171_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s171_iter];
        rtb_Switch2_c = rtb_Assignment[s171_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s171_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s171_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s171_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_c - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_ha = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Subtract1_lg = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_j = (rtb_Init_e - (2.0 * rtb_Switch1_ha)) +
            rtb_Subtract1_lg;
          rtb_Product_ku = rtb_Switch1_ha - rtb_Subtract1_lg;
          rtb_Subtract1_lg = (3.0 * rtb_Switch1_ha) - (2.0 * rtb_Subtract1_lg);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_j) +
            (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Subtract1_lg)) + rtb_Assignment[s171_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_j) +
            (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Subtract1_lg)) + rtb_Switch2_l;
          rtb_Switch2_j = ((3.0 * rtb_Switch1_ha) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_ha);
          rtb_Switch1_ha = (rtb_Init_e - rtb_Switch1_ha) * 6.0;
          rtb_Switch2_c = (((rtb_Reshapey[0] * rtb_Switch2_j) + (rtb_Minus_n[0] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] * rtb_Switch1_ha);
          rtb_Subtract1_lg = rtb_Switch2_c;
          rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_c;
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
             rtb_Switch2_c)) / rt_powd_snf(rt_hypotd_snf(rtb_Subtract1_lg,
            rtb_Switch2_c), 3.0);
        }

        if (s171_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s171_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s171_iter);
        rtb_Num_Segments = s171_iter;
        s171_iter++;
      } while ((rtb_Init_e >= 4.0) && (s171_iter <= 3));

      /* End of Outputs for SubSystem: '<S167>/Sampling_Loop' */

      /* SignalConversion generated from: '<S150>/Position_and_Curvature' incorporates:
       *  Assignment: '<S171>/Assignment'
       *  Merge: '<S145>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S145>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S145>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S145>/If Action Subsystem' incorporates:
       *  ActionPort: '<S148>/Action Port'
       */
      /* Product: '<S148>/Product' incorporates:
       *  Selector: '<S145>/Selector'
       *  Selector: '<S145>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S148>/Product1' incorporates:
       *  Selector: '<S145>/Selector'
       *  Selector: '<S145>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S148>/Product' incorporates:
         *  Constant: '<S148>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S148>/Product1' incorporates:
         *  Constant: '<S148>/Constant2'
         *  Product: '<S148>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S148>/Assignment' incorporates:
       *  Concatenate: '<S148>/Matrix Concatenate'
       *  Merge: '<S145>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S148>/Assignment' */

      /* SignalConversion generated from: '<S148>/Num_Segments' incorporates:
       *  Constant: '<S148>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S145>/If Action Subsystem' */
    }

    /* End of If: '<S145>/If1' */

    /* Concatenate: '<S146>/Matrix Concatenate' incorporates:
     *  Merge: '<S145>/Merge'
     *  Selector: '<S146>/Selector'
     *  Selector: '<S146>/Selector1'
     *  Selector: '<S146>/Selector3'
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

    /* End of Concatenate: '<S146>/Matrix Concatenate' */

    /* MATLAB Function: '<S146>/Distance Along Curve' incorporates:
     *  Concatenate: '<S146>/Matrix Concatenate'
     *  Selector: '<S146>/Selector4'
     *  Selector: '<S146>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s171_iter = 0; s171_iter < 149; s171_iter++) {
      /* Outputs for Iterator SubSystem: '<S167>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S171>/While Iterator'
       */
      rtb_Assignment_d[s171_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s171_iter + 1] -
         rtb_MatrixConcatenate_o[s171_iter], rtb_MatrixConcatenate_o[s171_iter +
         151] - rtb_MatrixConcatenate_o[s171_iter + 150]) +
        rtb_Assignment_d[s171_iter];

      /* End of Outputs for SubSystem: '<S167>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S146>/Distance Along Curve' */

    /* MATLAB Function: '<S146>/Find closest index to curve' incorporates:
     *  Concatenate: '<S146>/Matrix Concatenate'
     *  Selector: '<S146>/Selector4'
     *  Selector: '<S146>/Selector5'
     *  Selector: '<S197>/Selector'
     */
    for (s171_iter = 0; s171_iter < 150; s171_iter++) {
      /* Outputs for Iterator SubSystem: '<S167>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S171>/While Iterator'
       */
      distance_from_robot[s171_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s171_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s171_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S167>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s171_iter = 1;
    } else {
      s171_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s171_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s171_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s171_iter - 1];
      for (rtb_Bias1_p = s171_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s171_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s171_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S197>/Selector' incorporates:
     *  Constant: '<S197>/Constant'
     *  MATLAB Function: '<S146>/Find closest index to curve'
     *  MinMax: '<S197>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s171_iter)) - 1];

    /* If: '<S197>/If' incorporates:
     *  RelationalOperator: '<S197>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S197>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S200>/Action Port'
       */
      /* SignalConversion generated from: '<S200>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S202>/FixPt Sum1' incorporates:
       *  Constant: '<S202>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S200>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S200>/Selector11'
       *  Selector: '<S200>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S200>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S200>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S200>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S200>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S200>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S200>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S200>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S197>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S197>/Latch' incorporates:
       *  ActionPort: '<S201>/Action Port'
       */
      /* SignalConversion generated from: '<S201>/In1' incorporates:
       *  UnitDelay: '<S197>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S201>/In2' incorporates:
       *  UnitDelay: '<S197>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S197>/Latch' */
    }

    /* End of If: '<S197>/If' */

    /* MinMax: '<S144>/Min' incorporates:
     *  Lookup_n-D: '<S144>/Lookahead Distance'
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S146>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S196>/While Iterator'
     */
    s196_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s196_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S146>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S196>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s196_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s171_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s196_iter++;
    }

    /* End of Outputs for SubSystem: '<S146>/Find first index that meets distance target' */

    /* Switch: '<S199>/Switch' incorporates:
     *  Concatenate: '<S146>/Matrix Concatenate'
     *  Constant: '<S146>/Constant'
     *  Constant: '<S196>/Constant'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S199>/Constant3'
     *  Logic: '<S196>/AND'
     *  MATLAB Function: '<S146>/Find closest index to curve'
     *  Math: '<S199>/Hypot'
     *  Merge: '<S10>/Merge8'
     *  MinMax: '<S199>/Min'
     *  MinMax: '<S199>/Min1'
     *  Product: '<S196>/Product'
     *  Product: '<S199>/Divide'
     *  Product: '<S199>/Product'
     *  Product: '<S199>/Product1'
     *  RelationalOperator: '<S146>/Relational Operator'
     *  RelationalOperator: '<S196>/Relational Operator'
     *  RelationalOperator: '<S196>/Relational Operator1'
     *  Selector: '<S146>/Selector10'
     *  Selector: '<S146>/Selector7'
     *  Selector: '<S146>/Selector8'
     *  Selector: '<S146>/Selector9'
     *  Selector: '<S196>/Selector'
     *  Selector: '<S196>/Selector1'
     *  Selector: '<S197>/Selector'
     *  Sqrt: '<S199>/Sqrt'
     *  Sum: '<S146>/Subtract'
     *  Sum: '<S196>/Add'
     *  Sum: '<S199>/Subtract'
     *  Sum: '<S199>/Subtract1'
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

    /* End of Switch: '<S199>/Switch' */

    /* Logic: '<S147>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S147>/Switch1' incorporates:
     *  Switch: '<S147>/Switch'
     *  UnitDelay: '<S147>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S13>/Merge2' incorporates:
       *  Constant: '<S147>/Constant3'
       *  SignalConversion: '<S147>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S13>/Merge2' incorporates:
       *  SignalConversion: '<S147>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S147>/Switch1' */

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion: '<S147>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S146>/Selector6' incorporates:
     *  Concatenate: '<S146>/Matrix Concatenate'
     *  Selector: '<S146>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S146>/Selector2' incorporates:
     *  Concatenate: '<S146>/Matrix Concatenate'
     *  Selector: '<S146>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S147>/Switch2' incorporates:
     *  Sum: '<S203>/Subtract'
     *  Sum: '<S203>/Subtract1'
     *  Trigonometry: '<S203>/Atan2'
     *  UnitDelay: '<S147>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_ha = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S147>/Switch2' */

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion: '<S147>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_ha;

    /* Merge: '<S13>/Merge7' incorporates:
     *  SignalConversion: '<S144>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S147>/Constant2'
     *  SignalConversion generated from: '<S144>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S147>/Constant5'
     *  SignalConversion generated from: '<S144>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S13>/Merge5' incorporates:
     *  Constant: '<S147>/Constant6'
     *  SignalConversion generated from: '<S144>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S13>/Merge6' incorporates:
     *  Constant: '<S147>/Constant1'
     *  SignalConversion generated from: '<S144>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S145>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S197>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S197>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S147>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_ha;

    /* End of Outputs for SubSystem: '<S13>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/Pass Through' incorporates:
     *  ActionPort: '<S143>/Action Port'
     */
    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S143>/Constant'
     *  SignalConversion generated from: '<S143>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion generated from: '<S143>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion generated from: '<S143>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion generated from: '<S143>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion generated from: '<S143>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S143>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S13>/Merge5' incorporates:
     *  SignalConversion generated from: '<S143>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge6' incorporates:
     *  SignalConversion generated from: '<S143>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S13>/Pass Through' */
  }

  /* End of If: '<S13>/If' */

  /* Signum: '<S297>/Sign2' incorporates:
   *  UnitDelay: '<S297>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S297>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S297>/Product1' incorporates:
   *  Signum: '<S297>/Sign1'
   *  Signum: '<S297>/Sign2'
   */
  rtb_Switch1_cp *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch1_cp)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_cp, 256.0);
  }

  /* Switch: '<S297>/Switch' incorporates:
   *  Constant: '<S297>/Constant'
   *  Constant: '<S302>/Constant'
   *  Constant: '<S303>/Constant'
   *  Logic: '<S297>/or'
   *  Product: '<S297>/Product1'
   *  RelationalOperator: '<S302>/Compare'
   *  RelationalOperator: '<S303>/Compare'
   *  UnitDelay: '<S297>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Switch: '<S308>/Init' incorporates:
   *  UnitDelay: '<S308>/FixPt Unit Delay1'
   *  UnitDelay: '<S308>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S308>/Init' */

  /* RelationalOperator: '<S304>/Compare' incorporates:
   *  Constant: '<S304>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S305>/Compare' incorporates:
   *  Constant: '<S305>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c > 0.0);

  /* Abs: '<S297>/Abs' incorporates:
   *  Sum: '<S297>/Subtract'
   *  UnitDelay: '<S297>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S297>/Switch5' incorporates:
   *  Constant: '<S297>/Constant1'
   *  Switch: '<S297>/Switch1'
   *  UnaryMinus: '<S297>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S297>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S297>/Constant4'
     *  Constant: '<S297>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S297>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S297>/Constant2'
     *  Constant: '<S297>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S297>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S297>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S297>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S297>/Constant10'
     *  Constant: '<S297>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S297>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S297>/Constant7'
     *  Constant: '<S297>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S297>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S297>/Lookup Table Dynamic1'
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

    /* Switch: '<S297>/Switch3' incorporates:
     *  Constant: '<S297>/Constant1'
     *  Constant: '<S297>/Constant3'
     *  UnaryMinus: '<S297>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch1_cp = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_cp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S297>/Switch3' */
  }

  /* End of Switch: '<S297>/Switch5' */

  /* Product: '<S297>/Product' incorporates:
   *  Switch: '<S297>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_cp * rtb_Merge1;

  /* Sum: '<S306>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S307>/Switch2' incorporates:
   *  RelationalOperator: '<S307>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S297>/Switch2' incorporates:
     *  Constant: '<S297>/Constant1'
     *  Switch: '<S297>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S297>/Switch4' incorporates:
       *  Constant: '<S297>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S297>/Switch4' incorporates:
       *  Constant: '<S297>/Constant3'
       *  UnaryMinus: '<S297>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S297>/Switch2' */

    /* Product: '<S297>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S307>/Switch' incorporates:
     *  RelationalOperator: '<S307>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S307>/Switch' */
  }

  /* End of Switch: '<S307>/Switch2' */

  /* Sum: '<S306>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S300>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S300>/Switch' incorporates:
     *  Constant: '<S324>/Constant3'
     *  Constant: '<S324>/Constant4'
     *  Math: '<S324>/Math Function'
     *  Sum: '<S300>/Subtract'
     *  Sum: '<S324>/Add1'
     *  Sum: '<S324>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Init) + 3.1415926535897931,
       6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S300>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S300>/Switch' */

  /* Sum: '<S320>/Add1' incorporates:
   *  Constant: '<S320>/Constant3'
   *  Constant: '<S320>/Constant4'
   *  Math: '<S320>/Math Function'
   *  Sum: '<S299>/Add'
   *  Sum: '<S319>/Sum'
   *  Sum: '<S320>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Init +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S322>/Sum1' incorporates:
   *  Constant: '<S319>/Constant2'
   *  Product: '<S322>/Product'
   *  Sum: '<S322>/Sum'
   *  UnitDelay: '<S322>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S319>/Product' incorporates:
   *  Constant: '<S319>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S321>/Diff' incorporates:
   *  UnitDelay: '<S321>/UD'
   *
   * Block description for '<S321>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S321>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S319>/Saturation' */
  if (rtb_Add_ih > Steering_Heading_Control_D_UL) {
    rtb_Add_ih = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_D_LL) {
    rtb_Add_ih = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S319>/Add' incorporates:
   *  Gain: '<S319>/Gain1'
   *  Saturate: '<S319>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_ih;

  /* Sum: '<S319>/Subtract' incorporates:
   *  Constant: '<S319>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S319>/Sum2' incorporates:
   *  Gain: '<S319>/Gain2'
   *  UnitDelay: '<S319>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S323>/Switch2' incorporates:
   *  RelationalOperator: '<S323>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S319>/Subtract1' incorporates:
     *  Constant: '<S319>/Constant1'
     */
    rtb_Switch1_ha = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S323>/Switch' incorporates:
     *  RelationalOperator: '<S323>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_ha) {
      rtb_uDLookupTable_l = rtb_Switch1_ha;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S323>/Switch' */
  }

  /* End of Switch: '<S323>/Switch2' */

  /* Saturate: '<S319>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S319>/Saturation1' */

  /* Sum: '<S319>/Add1' */
  rtb_Add_ih = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S319>/Saturation2' */
  if (rtb_Add_ih > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S319>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S319>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S319>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ih;
  }

  /* End of Saturate: '<S319>/Saturation2' */

  /* Switch: '<S299>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S310>/Switch' incorporates:
     *  Abs: '<S310>/Abs'
     *  Constant: '<S310>/Constant'
     *  Constant: '<S318>/Constant'
     *  RelationalOperator: '<S318>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S310>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S299>/Switch' */

  /* Signum: '<S309>/Sign2' incorporates:
   *  UnitDelay: '<S309>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S309>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S309>/Product1' incorporates:
   *  Signum: '<S309>/Sign1'
   *  Signum: '<S309>/Sign2'
   */
  rtb_Switch1_cp *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch1_cp)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_cp, 256.0);
  }

  /* Switch: '<S309>/Switch' incorporates:
   *  Constant: '<S309>/Constant'
   *  Constant: '<S311>/Constant'
   *  Constant: '<S312>/Constant'
   *  Logic: '<S309>/or'
   *  Product: '<S309>/Product1'
   *  RelationalOperator: '<S311>/Compare'
   *  RelationalOperator: '<S312>/Compare'
   *  UnitDelay: '<S309>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_j = 0.0;
  }

  /* End of Switch: '<S309>/Switch' */

  /* Switch: '<S317>/Init' incorporates:
   *  UnitDelay: '<S317>/FixPt Unit Delay1'
   *  UnitDelay: '<S317>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_j;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S317>/Init' */

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_j == 0.0);

  /* RelationalOperator: '<S314>/Compare' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j > 0.0);

  /* Abs: '<S309>/Abs' incorporates:
   *  Sum: '<S309>/Subtract'
   *  UnitDelay: '<S309>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S309>/Switch5' incorporates:
   *  Constant: '<S309>/Constant1'
   *  Switch: '<S309>/Switch1'
   *  UnaryMinus: '<S309>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S309>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S309>/Constant4'
     *  Constant: '<S309>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S309>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S309>/Constant2'
     *  Constant: '<S309>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S309>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S309>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S309>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S309>/Constant10'
     *  Constant: '<S309>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S309>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S309>/Constant7'
     *  Constant: '<S309>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S309>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S309>/Lookup Table Dynamic1'
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

    /* Switch: '<S309>/Switch3' incorporates:
     *  Constant: '<S309>/Constant1'
     *  Constant: '<S309>/Constant3'
     *  UnaryMinus: '<S309>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S309>/Switch3' */
  }

  /* End of Switch: '<S309>/Switch5' */

  /* Product: '<S309>/Product' incorporates:
   *  Switch: '<S309>/Switch1'
   */
  rtb_Switch1_ha = rtb_Switch1_cp * rtb_Product_ku;

  /* Sum: '<S315>/Sum1' */
  rtb_Switch2_j -= rtb_Init_e;

  /* Switch: '<S316>/Switch2' incorporates:
   *  RelationalOperator: '<S316>/LowerRelop1'
   */
  if (!(rtb_Switch2_j > rtb_Switch1_ha)) {
    /* Switch: '<S309>/Switch2' incorporates:
     *  Constant: '<S309>/Constant1'
     *  Constant: '<S309>/Constant3'
     *  Switch: '<S309>/Switch4'
     *  UnaryMinus: '<S309>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S309>/Switch4' incorporates:
       *  Constant: '<S309>/Constant1'
       */
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S309>/Product2' incorporates:
     *  Switch: '<S309>/Switch2'
     */
    rtb_Switch1_ha = rtb_Switch1_cp * rtb_Product_ku;

    /* Switch: '<S316>/Switch' incorporates:
     *  RelationalOperator: '<S316>/UpperRelop'
     */
    if (!(rtb_Switch2_j < rtb_Switch1_ha)) {
      rtb_Switch1_ha = rtb_Switch2_j;
    }

    /* End of Switch: '<S316>/Switch' */
  }

  /* End of Switch: '<S316>/Switch2' */

  /* Sum: '<S315>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_ha + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S212>/Initialize Function' */
  /* Sum: '<S298>/Add' incorporates:
   *  Constant: '<S298>/Constant'
   *  Constant: '<S298>/Constant4'
   *  Constant: '<S298>/Constant5'
   *  Trigonometry: '<S298>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S212>/Initialize Function' */

  /* Fcn: '<S332>/r->x' incorporates:
   *  Fcn: '<S337>/r->x'
   *  Fcn: '<S342>/r->x'
   *  Fcn: '<S347>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S326>/Add' incorporates:
   *  Fcn: '<S332>/r->x'
   *  Fcn: '<S333>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S332>/theta->y' incorporates:
   *  Fcn: '<S337>/theta->y'
   *  Fcn: '<S342>/theta->y'
   *  Fcn: '<S347>/theta->y'
   */
  rtb_Switch1_ha = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S326>/Add' incorporates:
   *  Fcn: '<S332>/theta->y'
   *  Fcn: '<S333>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch1_ha;

  /* Sum: '<S327>/Add' incorporates:
   *  Fcn: '<S338>/r->x'
   *  Fcn: '<S338>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_ha;

  /* Sum: '<S328>/Add' incorporates:
   *  Fcn: '<S343>/r->x'
   *  Fcn: '<S343>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_ha;

  /* Sum: '<S329>/Add' incorporates:
   *  Fcn: '<S348>/r->x'
   *  Fcn: '<S348>/theta->y'
   */
  rtb_Subtract1_lg = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_ha;

  /* Fcn: '<S346>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Subtract1_lg, rtb_Init_e);

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S345>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S345>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S345>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S345>/Switch1' */

  /* Fcn: '<S331>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S334>/Compare' incorporates:
   *  Constant: '<S334>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_l == 0.0);

  /* Switch: '<S330>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S330>/Switch1' incorporates:
     *  Constant: '<S330>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S330>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S330>/Switch1' */

  /* Fcn: '<S336>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S339>/Compare' incorporates:
   *  Constant: '<S339>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_c == 0.0);

  /* Switch: '<S335>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S335>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S335>/Switch1' */

  /* Fcn: '<S341>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S344>/Compare' incorporates:
   *  Constant: '<S344>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S340>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S340>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S340>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S340>/Switch1' */

  /* Product: '<S325>/Divide' incorporates:
   *  Abs: '<S325>/Abs'
   *  Abs: '<S325>/Abs1'
   *  Abs: '<S325>/Abs2'
   *  Abs: '<S325>/Abs3'
   *  Constant: '<S325>/Constant'
   *  MinMax: '<S325>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S325>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S345>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S345>/Switch' incorporates:
     *  Fcn: '<S346>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Subtract1_lg);
  }

  /* End of Switch: '<S345>/Switch' */

  /* Trigonometry: '<S289>/Cos4' incorporates:
   *  Switch: '<S278>/Angle_Switch'
   *  Trigonometry: '<S288>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S289>/Sin5' incorporates:
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S289>/Sin4' incorporates:
   *  Switch: '<S278>/Angle_Switch'
   *  Trigonometry: '<S288>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S289>/Cos5' incorporates:
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S289>/Subtract1' incorporates:
   *  Product: '<S289>/Product2'
   *  Product: '<S289>/Product3'
   *  Trigonometry: '<S289>/Cos4'
   *  Trigonometry: '<S289>/Sin4'
   */
  rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S289>/Subtract' incorporates:
   *  Product: '<S289>/Product'
   *  Product: '<S289>/Product1'
   *  Trigonometry: '<S289>/Cos4'
   *  Trigonometry: '<S289>/Sin4'
   */
  rtb_Switch1_ha = (rtb_MatrixConcatenate_b_idx_1 *
                    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S289>/Hypot' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Switch1_ha, rtb_Init_e);

  /* Switch: '<S289>/Switch' incorporates:
   *  Constant: '<S289>/Constant'
   *  Constant: '<S289>/Constant1'
   *  Constant: '<S290>/Constant'
   *  Product: '<S289>/Divide'
   *  Product: '<S289>/Divide1'
   *  RelationalOperator: '<S290>/Compare'
   *  Switch: '<S289>/Switch1'
   */
  if (rtb_Switch2_j > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch2_j;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_ha / rtb_Switch2_j;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S289>/Switch' */

  /* Switch: '<S278>/Speed_Switch' incorporates:
   *  Abs: '<S278>/Abs'
   *  Constant: '<S286>/Constant'
   *  RelationalOperator: '<S286>/Compare'
   *  Switch: '<S278>/Angle_Switch'
   *  Trigonometry: '<S288>/Atan1'
   *  Trigonometry: '<S289>/Atan1'
   *  UnaryMinus: '<S278>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S288>/Subtract1' incorporates:
     *  Product: '<S288>/Product2'
     *  Product: '<S288>/Product3'
     *  UnaryMinus: '<S278>/Unary Minus'
     */
    rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S288>/Subtract' incorporates:
     *  Product: '<S288>/Product'
     *  Product: '<S288>/Product1'
     */
    rtb_Switch2_j = (rtb_MatrixConcatenate_b_idx_1 *
                     Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S288>/Hypot' */
    rtb_Switch1_ha = rt_hypotd_snf(rtb_Switch2_j, rtb_Init_e);

    /* Switch: '<S288>/Switch1' incorporates:
     *  Constant: '<S288>/Constant'
     *  Constant: '<S288>/Constant1'
     *  Constant: '<S291>/Constant'
     *  Product: '<S288>/Divide'
     *  Product: '<S288>/Divide1'
     *  RelationalOperator: '<S291>/Compare'
     *  Switch: '<S288>/Switch'
     */
    if (rtb_Switch1_ha > 1.0E-6) {
      rtb_Switch2_j /= rtb_Switch1_ha;
      rtb_Init_e /= rtb_Switch1_ha;
    } else {
      rtb_Switch2_j = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S288>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2_j);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S281>/Product2' incorporates:
   *  Constant: '<S281>/Constant'
   *  Switch: '<S278>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S276>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S276>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S279>/Add' incorporates:
   *  Sum: '<S280>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S211>/Product' incorporates:
   *  Abs: '<S276>/Abs'
   *  Abs: '<S279>/Abs'
   *  Constant: '<S282>/Constant'
   *  Constant: '<S292>/Constant3'
   *  Constant: '<S292>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S276>/OR'
   *  Lookup_n-D: '<S279>/1-D Lookup Table'
   *  Math: '<S292>/Math Function'
   *  RelationalOperator: '<S276>/Equal1'
   *  RelationalOperator: '<S282>/Compare'
   *  Signum: '<S276>/Sign'
   *  Signum: '<S276>/Sign1'
   *  Sum: '<S279>/Add'
   *  Sum: '<S292>/Add1'
   *  Sum: '<S292>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S277>/Gain' */
  rtb_Switch2_j = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S277>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S284>/Sum1' incorporates:
   *  Constant: '<S277>/Constant2'
   *  Product: '<S284>/Product'
   *  Sum: '<S284>/Sum'
   *  UnitDelay: '<S284>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S277>/Product' incorporates:
   *  Constant: '<S277>/Constant3'
   */
  rtb_Switch1_ha = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S283>/Diff' incorporates:
   *  UnitDelay: '<S283>/UD'
   *
   * Block description for '<S283>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S283>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Switch1_ha - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S277>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Gain: '<S277>/Gain1'
   *  Saturate: '<S277>/Saturation'
   */
  rtb_Product_ku = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch2_j) +
    rtb_Add_ih;

  /* Sum: '<S277>/Subtract' incorporates:
   *  Constant: '<S277>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Product_ku;

  /* Sum: '<S277>/Sum2' incorporates:
   *  Gain: '<S277>/Gain2'
   *  UnitDelay: '<S277>/Unit Delay'
   */
  rtb_Switch2_j = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S285>/Switch2' incorporates:
   *  Constant: '<S277>/Constant'
   *  RelationalOperator: '<S285>/LowerRelop1'
   *  Sum: '<S277>/Subtract'
   */
  if (!(rtb_Switch2_j > (1.0 - rtb_Product_ku))) {
    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S277>/Constant1'
     *  RelationalOperator: '<S285>/UpperRelop'
     *  Sum: '<S277>/Subtract1'
     */
    if (rtb_Switch2_j < (-1.0 - rtb_Product_ku)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Product_ku;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_j;
    }

    /* End of Switch: '<S285>/Switch' */
  }

  /* End of Switch: '<S285>/Switch2' */

  /* Saturate: '<S277>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch2_j = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch2_j = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S277>/Saturation1' */

  /* Sum: '<S277>/Add1' */
  rtb_Add_ih = rtb_Product_ku + rtb_Switch2_j;

  /* Saturate: '<S277>/Saturation2' */
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

  /* End of Saturate: '<S277>/Saturation2' */

  /* Sum: '<S293>/Add1' incorporates:
   *  Constant: '<S293>/Constant3'
   *  Constant: '<S293>/Constant4'
   *  Math: '<S293>/Math Function'
   *  Sum: '<S293>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S295>/Sum1' incorporates:
   *  Constant: '<S280>/Constant2'
   *  Product: '<S295>/Product'
   *  Sum: '<S295>/Sum'
   *  UnitDelay: '<S295>/Unit Delay1'
   */
  rtb_Product_ku = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S280>/Product' incorporates:
   *  Constant: '<S280>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Product_ku * Steering_Motor_Control_D;

  /* Sum: '<S294>/Diff' incorporates:
   *  UnitDelay: '<S294>/UD'
   *
   * Block description for '<S294>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S294>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S280>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S280>/Add' incorporates:
   *  Gain: '<S280>/Gain1'
   *  Saturate: '<S280>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_ih;

  /* Sum: '<S280>/Subtract' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S280>/Sum2' incorporates:
   *  Gain: '<S280>/Gain2'
   *  UnitDelay: '<S280>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S296>/Switch2' incorporates:
   *  Constant: '<S280>/Constant'
   *  RelationalOperator: '<S296>/LowerRelop1'
   *  Sum: '<S280>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S280>/Constant1'
     *  RelationalOperator: '<S296>/UpperRelop'
     *  Sum: '<S280>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S296>/Switch' */
  }

  /* End of Switch: '<S296>/Switch2' */

  /* Saturate: '<S280>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S280>/Saturation1' */

  /* Sum: '<S280>/Add1' */
  rtb_Add_ih = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S280>/Saturation2' */
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

  /* End of Saturate: '<S280>/Saturation2' */

  /* Product: '<S325>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S330>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S330>/Switch' incorporates:
     *  Fcn: '<S331>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S330>/Switch' */

  /* Trigonometry: '<S226>/Cos4' incorporates:
   *  Switch: '<S215>/Angle_Switch'
   *  Trigonometry: '<S225>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S226>/Sin5' incorporates:
   *  UnaryMinus: '<S224>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S226>/Sin4' incorporates:
   *  Switch: '<S215>/Angle_Switch'
   *  Trigonometry: '<S225>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S226>/Cos5' incorporates:
   *  UnaryMinus: '<S224>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S226>/Subtract1' incorporates:
   *  Product: '<S226>/Product2'
   *  Product: '<S226>/Product3'
   *  Trigonometry: '<S226>/Cos4'
   *  Trigonometry: '<S226>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S226>/Subtract' incorporates:
   *  Product: '<S226>/Product'
   *  Product: '<S226>/Product1'
   *  Trigonometry: '<S226>/Cos4'
   *  Trigonometry: '<S226>/Sin4'
   */
  rtb_Subtract1_b = (rtb_MatrixConcatenate_b_idx_1 *
                     rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S226>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_b, rtb_Add_pw);

  /* Switch: '<S226>/Switch' incorporates:
   *  Constant: '<S226>/Constant'
   *  Constant: '<S226>/Constant1'
   *  Constant: '<S227>/Constant'
   *  Product: '<S226>/Divide'
   *  Product: '<S226>/Divide1'
   *  RelationalOperator: '<S227>/Compare'
   *  Switch: '<S226>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_b / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S226>/Switch' */

  /* Switch: '<S215>/Speed_Switch' incorporates:
   *  Abs: '<S215>/Abs'
   *  Constant: '<S223>/Constant'
   *  RelationalOperator: '<S223>/Compare'
   *  Switch: '<S215>/Angle_Switch'
   *  Trigonometry: '<S225>/Atan1'
   *  Trigonometry: '<S226>/Atan1'
   *  UnaryMinus: '<S215>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S225>/Subtract1' incorporates:
     *  Product: '<S225>/Product2'
     *  Product: '<S225>/Product3'
     *  UnaryMinus: '<S215>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S225>/Subtract' incorporates:
     *  Product: '<S225>/Product'
     *  Product: '<S225>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S225>/Hypot' */
    rtb_Subtract1_b = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S225>/Switch1' incorporates:
     *  Constant: '<S225>/Constant'
     *  Constant: '<S225>/Constant1'
     *  Constant: '<S228>/Constant'
     *  Product: '<S225>/Divide'
     *  Product: '<S225>/Divide1'
     *  RelationalOperator: '<S228>/Compare'
     *  Switch: '<S225>/Switch'
     */
    if (rtb_Subtract1_b > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_b;
      rtb_Add_pw /= rtb_Subtract1_b;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S225>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S218>/Product2' incorporates:
   *  Constant: '<S218>/Constant'
   *  Switch: '<S215>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S213>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S213>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S216>/Add' incorporates:
   *  Sum: '<S217>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S208>/Product' incorporates:
   *  Abs: '<S213>/Abs'
   *  Abs: '<S216>/Abs'
   *  Constant: '<S219>/Constant'
   *  Constant: '<S229>/Constant3'
   *  Constant: '<S229>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S213>/OR'
   *  Lookup_n-D: '<S216>/1-D Lookup Table'
   *  Math: '<S229>/Math Function'
   *  RelationalOperator: '<S213>/Equal1'
   *  RelationalOperator: '<S219>/Compare'
   *  Signum: '<S213>/Sign'
   *  Signum: '<S213>/Sign1'
   *  Sum: '<S216>/Add'
   *  Sum: '<S229>/Add1'
   *  Sum: '<S229>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S214>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S214>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S221>/Sum1' incorporates:
   *  Constant: '<S214>/Constant2'
   *  Product: '<S221>/Product'
   *  Sum: '<S221>/Sum'
   *  UnitDelay: '<S221>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S214>/Product' incorporates:
   *  Constant: '<S214>/Constant3'
   */
  rtb_Subtract1_b = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S220>/Diff' incorporates:
   *  UnitDelay: '<S220>/UD'
   *
   * Block description for '<S220>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S220>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_b - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S214>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S214>/Add' incorporates:
   *  Gain: '<S214>/Gain1'
   *  Saturate: '<S214>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    rtb_Add_ih;

  /* Sum: '<S214>/Subtract' incorporates:
   *  Constant: '<S214>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S214>/Sum2' incorporates:
   *  Gain: '<S214>/Gain2'
   *  UnitDelay: '<S214>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S222>/Switch2' incorporates:
   *  Constant: '<S214>/Constant'
   *  RelationalOperator: '<S222>/LowerRelop1'
   *  Sum: '<S214>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S214>/Constant1'
     *  RelationalOperator: '<S222>/UpperRelop'
     *  Sum: '<S214>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S222>/Switch' */
  }

  /* End of Switch: '<S222>/Switch2' */

  /* Saturate: '<S214>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S214>/Saturation1' */

  /* Sum: '<S214>/Add1' */
  rtb_Add_ih = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S214>/Saturation2' */
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

  /* End of Saturate: '<S214>/Saturation2' */

  /* Sum: '<S230>/Add1' incorporates:
   *  Constant: '<S230>/Constant3'
   *  Constant: '<S230>/Constant4'
   *  Math: '<S230>/Math Function'
   *  Sum: '<S230>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S232>/Sum1' incorporates:
   *  Constant: '<S217>/Constant2'
   *  Product: '<S232>/Product'
   *  Sum: '<S232>/Sum'
   *  UnitDelay: '<S232>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S217>/Product' incorporates:
   *  Constant: '<S217>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S231>/Diff' incorporates:
   *  UnitDelay: '<S231>/UD'
   *
   * Block description for '<S231>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S231>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S217>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S217>/Add' incorporates:
   *  Gain: '<S217>/Gain1'
   *  Saturate: '<S217>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Switch2_c) +
    rtb_Add_ih;

  /* Sum: '<S217>/Subtract' incorporates:
   *  Constant: '<S217>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S217>/Sum2' incorporates:
   *  Gain: '<S217>/Gain2'
   *  UnitDelay: '<S217>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S233>/Switch2' incorporates:
   *  Constant: '<S217>/Constant'
   *  RelationalOperator: '<S233>/LowerRelop1'
   *  Sum: '<S217>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S233>/Switch' incorporates:
     *  Constant: '<S217>/Constant1'
     *  RelationalOperator: '<S233>/UpperRelop'
     *  Sum: '<S217>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S233>/Switch' */
  }

  /* End of Switch: '<S233>/Switch2' */

  /* Saturate: '<S217>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S217>/Saturation1' */

  /* Sum: '<S217>/Add1' */
  rtb_Add_ih = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S217>/Saturation2' */
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

  /* End of Saturate: '<S217>/Saturation2' */

  /* Product: '<S325>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S335>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S335>/Switch' incorporates:
     *  Fcn: '<S336>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S335>/Switch' */

  /* Trigonometry: '<S247>/Cos4' incorporates:
   *  Switch: '<S236>/Angle_Switch'
   *  Trigonometry: '<S246>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S247>/Sin5' incorporates:
   *  UnaryMinus: '<S245>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S247>/Sin4' incorporates:
   *  Switch: '<S236>/Angle_Switch'
   *  Trigonometry: '<S246>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S247>/Cos5' incorporates:
   *  UnaryMinus: '<S245>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S247>/Subtract1' incorporates:
   *  Product: '<S247>/Product2'
   *  Product: '<S247>/Product3'
   *  Trigonometry: '<S247>/Cos4'
   *  Trigonometry: '<S247>/Sin4'
   */
  rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S247>/Subtract' incorporates:
   *  Product: '<S247>/Product'
   *  Product: '<S247>/Product1'
   *  Trigonometry: '<S247>/Cos4'
   *  Trigonometry: '<S247>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_MatrixConcatenate_b_idx_1 *
    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 * rtb_uDLookupTable_l);

  /* Math: '<S247>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_g);

  /* Switch: '<S247>/Switch' incorporates:
   *  Constant: '<S247>/Constant'
   *  Constant: '<S247>/Constant1'
   *  Constant: '<S248>/Constant'
   *  Product: '<S247>/Divide'
   *  Product: '<S247>/Divide1'
   *  RelationalOperator: '<S248>/Compare'
   *  Switch: '<S247>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_g / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S247>/Switch' */

  /* Switch: '<S236>/Speed_Switch' incorporates:
   *  Abs: '<S236>/Abs'
   *  Constant: '<S244>/Constant'
   *  RelationalOperator: '<S244>/Compare'
   *  Switch: '<S236>/Angle_Switch'
   *  Trigonometry: '<S246>/Atan1'
   *  Trigonometry: '<S247>/Atan1'
   *  UnaryMinus: '<S236>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S246>/Subtract1' incorporates:
     *  Product: '<S246>/Product2'
     *  Product: '<S246>/Product3'
     *  UnaryMinus: '<S236>/Unary Minus'
     */
    rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S246>/Subtract' incorporates:
     *  Product: '<S246>/Product'
     *  Product: '<S246>/Product1'
     */
    rtb_Subtract1_k0 = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S246>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract1_k0,
      rtb_Subtract1_g);

    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S246>/Constant'
     *  Constant: '<S246>/Constant1'
     *  Constant: '<S249>/Constant'
     *  Product: '<S246>/Divide'
     *  Product: '<S246>/Divide1'
     *  RelationalOperator: '<S249>/Compare'
     *  Switch: '<S246>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract1_k0 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_g /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract1_k0 = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S246>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract1_k0);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S239>/Product2' incorporates:
   *  Constant: '<S239>/Constant'
   *  Switch: '<S236>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S234>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S234>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S237>/Add' incorporates:
   *  Sum: '<S238>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S209>/Product' incorporates:
   *  Abs: '<S234>/Abs'
   *  Abs: '<S237>/Abs'
   *  Constant: '<S240>/Constant'
   *  Constant: '<S250>/Constant3'
   *  Constant: '<S250>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S234>/OR'
   *  Lookup_n-D: '<S237>/1-D Lookup Table'
   *  Math: '<S250>/Math Function'
   *  RelationalOperator: '<S234>/Equal1'
   *  RelationalOperator: '<S240>/Compare'
   *  Signum: '<S234>/Sign'
   *  Signum: '<S234>/Sign1'
   *  Sum: '<S237>/Add'
   *  Sum: '<S250>/Add1'
   *  Sum: '<S250>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S235>/Gain' */
  rtb_Subtract1_g = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S235>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S242>/Sum1' incorporates:
   *  Constant: '<S235>/Constant2'
   *  Product: '<S242>/Product'
   *  Sum: '<S242>/Sum'
   *  UnitDelay: '<S242>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Switch2_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S235>/Product' incorporates:
   *  Constant: '<S235>/Constant3'
   */
  rtb_Subtract1_k0 = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S241>/Diff' incorporates:
   *  UnitDelay: '<S241>/UD'
   *
   * Block description for '<S241>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S241>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_k0 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S235>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S235>/Add' incorporates:
   *  Gain: '<S235>/Gain1'
   *  Saturate: '<S235>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_g) +
    rtb_Add_ih;

  /* Sum: '<S235>/Subtract' incorporates:
   *  Constant: '<S235>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S235>/Sum2' incorporates:
   *  Gain: '<S235>/Gain2'
   *  UnitDelay: '<S235>/Unit Delay'
   */
  rtb_Subtract1_g = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S243>/Switch2' incorporates:
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S243>/LowerRelop1'
   *  Sum: '<S235>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S243>/Switch' incorporates:
     *  Constant: '<S235>/Constant1'
     *  RelationalOperator: '<S243>/UpperRelop'
     *  Sum: '<S235>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S243>/Switch' */
  }

  /* End of Switch: '<S243>/Switch2' */

  /* Saturate: '<S235>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S235>/Saturation1' */

  /* Sum: '<S235>/Add1' */
  rtb_Add_ih = rtb_Hypot_b + rtb_Subtract1_g;

  /* Saturate: '<S235>/Saturation2' */
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

  /* End of Saturate: '<S235>/Saturation2' */

  /* Sum: '<S251>/Add1' incorporates:
   *  Constant: '<S251>/Constant3'
   *  Constant: '<S251>/Constant4'
   *  Math: '<S251>/Math Function'
   *  Sum: '<S251>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S253>/Sum1' incorporates:
   *  Constant: '<S238>/Constant2'
   *  Product: '<S253>/Product'
   *  Sum: '<S253>/Sum'
   *  UnitDelay: '<S253>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S238>/Product' incorporates:
   *  Constant: '<S238>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S252>/Diff' incorporates:
   *  UnitDelay: '<S252>/UD'
   *
   * Block description for '<S252>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S252>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S238>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S238>/Add' incorporates:
   *  Gain: '<S238>/Gain1'
   *  Saturate: '<S238>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_ih;

  /* Sum: '<S238>/Subtract' incorporates:
   *  Constant: '<S238>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S238>/Sum2' incorporates:
   *  Gain: '<S238>/Gain2'
   *  UnitDelay: '<S238>/Unit Delay'
   */
  rtb_Subtract1_jx = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S254>/Switch2' incorporates:
   *  Constant: '<S238>/Constant'
   *  RelationalOperator: '<S254>/LowerRelop1'
   *  Sum: '<S238>/Subtract'
   */
  if (!(rtb_Subtract1_jx > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S254>/Switch' incorporates:
     *  Constant: '<S238>/Constant1'
     *  RelationalOperator: '<S254>/UpperRelop'
     *  Sum: '<S238>/Subtract1'
     */
    if (rtb_Subtract1_jx < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_jx;
    }

    /* End of Switch: '<S254>/Switch' */
  }

  /* End of Switch: '<S254>/Switch2' */

  /* Saturate: '<S238>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_jx = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S238>/Saturation1' */

  /* Sum: '<S238>/Add1' */
  rtb_Add_ih = rtb_Add_ik + rtb_Subtract1_jx;

  /* Saturate: '<S238>/Saturation2' */
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

  /* End of Saturate: '<S238>/Saturation2' */

  /* Product: '<S325>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S340>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S340>/Switch' incorporates:
     *  Fcn: '<S341>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S340>/Switch' */

  /* Trigonometry: '<S268>/Cos4' incorporates:
   *  Switch: '<S257>/Angle_Switch'
   *  Trigonometry: '<S267>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S268>/Sin5' incorporates:
   *  UnaryMinus: '<S266>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S268>/Sin4' incorporates:
   *  Switch: '<S257>/Angle_Switch'
   *  Trigonometry: '<S267>/Sin4'
   */
  rtb_Subtract1_cj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S268>/Cos5' incorporates:
   *  UnaryMinus: '<S266>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S268>/Subtract1' incorporates:
   *  Product: '<S268>/Product2'
   *  Product: '<S268>/Product3'
   *  Trigonometry: '<S268>/Cos4'
   *  Trigonometry: '<S268>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_cj * rtb_Switch2_c);

  /* Sum: '<S268>/Subtract' incorporates:
   *  Product: '<S268>/Product'
   *  Product: '<S268>/Product1'
   *  Trigonometry: '<S268>/Cos4'
   *  Trigonometry: '<S268>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ik * rtb_Switch2_c) - (rtb_Subtract1_cj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S268>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch2_l);

  /* Switch: '<S268>/Switch' incorporates:
   *  Constant: '<S268>/Constant'
   *  Constant: '<S268>/Constant1'
   *  Constant: '<S269>/Constant'
   *  Product: '<S268>/Divide'
   *  Product: '<S268>/Divide1'
   *  RelationalOperator: '<S269>/Compare'
   *  Switch: '<S268>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_l /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_c = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
  }

  /* End of Switch: '<S268>/Switch' */

  /* Switch: '<S257>/Speed_Switch' incorporates:
   *  Abs: '<S257>/Abs'
   *  Constant: '<S265>/Constant'
   *  RelationalOperator: '<S265>/Compare'
   *  Switch: '<S257>/Angle_Switch'
   *  Trigonometry: '<S267>/Atan1'
   *  Trigonometry: '<S268>/Atan1'
   *  UnaryMinus: '<S257>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S267>/Subtract1' incorporates:
     *  Product: '<S267>/Product2'
     *  Product: '<S267>/Product3'
     *  UnaryMinus: '<S257>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S267>/Subtract' incorporates:
     *  Product: '<S267>/Product'
     *  Product: '<S267>/Product1'
     */
    rtb_Subtract1_cj = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S267>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_cj, rtb_Subtract_n);

    /* Switch: '<S267>/Switch1' incorporates:
     *  Constant: '<S267>/Constant'
     *  Constant: '<S267>/Constant1'
     *  Constant: '<S270>/Constant'
     *  Product: '<S267>/Divide'
     *  Product: '<S267>/Divide1'
     *  RelationalOperator: '<S270>/Compare'
     *  Switch: '<S267>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_cj /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract_n / rtb_Add_ik;
    } else {
      rtb_Subtract1_cj = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S267>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_cj);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S260>/Product2' incorporates:
   *  Constant: '<S260>/Constant'
   *  Switch: '<S257>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S255>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S255>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S258>/Add' incorporates:
   *  Sum: '<S259>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S210>/Product' incorporates:
   *  Abs: '<S255>/Abs'
   *  Abs: '<S258>/Abs'
   *  Constant: '<S261>/Constant'
   *  Constant: '<S271>/Constant3'
   *  Constant: '<S271>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S255>/OR'
   *  Lookup_n-D: '<S258>/1-D Lookup Table'
   *  Math: '<S271>/Math Function'
   *  RelationalOperator: '<S255>/Equal1'
   *  RelationalOperator: '<S261>/Compare'
   *  Signum: '<S255>/Sign'
   *  Signum: '<S255>/Sign1'
   *  Sum: '<S258>/Add'
   *  Sum: '<S271>/Add1'
   *  Sum: '<S271>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S256>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S256>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S263>/Sum1' incorporates:
   *  Constant: '<S256>/Constant2'
   *  Product: '<S263>/Product'
   *  Sum: '<S263>/Sum'
   *  UnitDelay: '<S263>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S256>/Product' incorporates:
   *  Constant: '<S256>/Constant3'
   */
  rtb_Subtract1_cj = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S262>/Diff' incorporates:
   *  UnitDelay: '<S262>/UD'
   *
   * Block description for '<S262>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S262>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_cj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S256>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S256>/Add' incorporates:
   *  Gain: '<S256>/Gain1'
   *  Saturate: '<S256>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_n) +
    rtb_Add_ih;

  /* Sum: '<S256>/Subtract' incorporates:
   *  Constant: '<S256>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_kv;

  /* Sum: '<S256>/Sum2' incorporates:
   *  Gain: '<S256>/Gain2'
   *  UnitDelay: '<S256>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S264>/Switch2' incorporates:
   *  Constant: '<S256>/Constant'
   *  RelationalOperator: '<S264>/LowerRelop1'
   *  Sum: '<S256>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S256>/Constant1'
     *  RelationalOperator: '<S264>/UpperRelop'
     *  Sum: '<S256>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_kv)) {
      rtb_Switch2_c = -1.0 - rtb_Add_kv;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S264>/Switch' */
  }

  /* End of Switch: '<S264>/Switch2' */

  /* Saturate: '<S256>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S256>/Saturation1' */

  /* Sum: '<S256>/Add1' */
  rtb_Add_ih = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S256>/Saturation2' */
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

  /* End of Saturate: '<S256>/Saturation2' */

  /* Sum: '<S272>/Add1' incorporates:
   *  Constant: '<S272>/Constant3'
   *  Constant: '<S272>/Constant4'
   *  Math: '<S272>/Math Function'
   *  Sum: '<S272>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S274>/Sum1' incorporates:
   *  Constant: '<S259>/Constant2'
   *  Product: '<S274>/Product'
   *  Sum: '<S274>/Sum'
   *  UnitDelay: '<S274>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S259>/Product' incorporates:
   *  Constant: '<S259>/Constant3'
   */
  rtb_Add_kv = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S273>/Diff' incorporates:
   *  UnitDelay: '<S273>/UD'
   *
   * Block description for '<S273>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S273>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S259>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S259>/Add' incorporates:
   *  Gain: '<S259>/Gain1'
   *  Saturate: '<S259>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Add_ih;

  /* Sum: '<S259>/Subtract' incorporates:
   *  Constant: '<S259>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_l;

  /* Sum: '<S259>/Sum2' incorporates:
   *  Gain: '<S259>/Gain2'
   *  UnitDelay: '<S259>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S275>/Switch2' incorporates:
   *  Constant: '<S259>/Constant'
   *  RelationalOperator: '<S275>/LowerRelop1'
   *  Sum: '<S259>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S259>/Constant1'
     *  RelationalOperator: '<S275>/UpperRelop'
     *  Sum: '<S259>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Switch2_c = -1.0 - rtb_Add_l;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S275>/Switch' */
  }

  /* End of Switch: '<S275>/Switch2' */

  /* Saturate: '<S259>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = rtb_Switch2_c;
  }

  /* End of Saturate: '<S259>/Saturation1' */

  /* Sum: '<S259>/Add1' */
  rtb_Add_ih = rtb_Add_l + rtb_Subtract1_f;

  /* Saturate: '<S259>/Saturation2' */
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

  /* End of Saturate: '<S259>/Saturation2' */

  /* Gain: '<S106>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S107>/Compare' incorporates:
   *  Constant: '<S106>/Constant'
   *  Constant: '<S107>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S106>/Switch1' incorporates:
   *  UnitDelay: '<S106>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S106>/Switch1' */

  /* Sum: '<S106>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

  /* Gain: '<S106>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S106>/Switch' incorporates:
   *  UnitDelay: '<S106>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S106>/Switch' */

  /* Sum: '<S106>/Subtract' */
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

  /* Sum: '<S109>/Add' incorporates:
   *  Constant: '<S109>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 428.625;

  /* Sqrt: '<S109>/Sqrt' incorporates:
   *  Math: '<S109>/Math Function'
   *  Sum: '<S109>/Subtract'
   */
  rtb_Rotationmatrixfromlocalto_0 = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
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
    rtb_Switch1_hr = rtb_Switch2_l - Dist_Reset_Value_Front;
  } else {
    rtb_Switch1_hr = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_l - rtb_Switch1_hr;

  /* Sqrt: '<S112>/Sqrt' incorporates:
   *  Constant: '<S112>/Constant24'
   *  Math: '<S112>/Math Function'
   *  Sum: '<S112>/Add'
   *  Sum: '<S112>/Subtract'
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
    rtb_Switch1_f = rtb_Switch2_l - Dist_Reset_Value_Ball_Screw;
  } else {
    rtb_Switch1_f = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Switch2_l - rtb_Switch1_f;

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
  y = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (y - 64637.1475) / 318.51437958120511;
  y = sqrt(y - (d * d));
  rtb_Switch2_l = (((((((d * 0.996815278536125) + 158.75) - (y *
    -0.079745222282890008)) - 158.75) - 158.75) * (rtb_Sqrt_f / 300.0)) + 158.75)
    + 158.75;
  rtb_Sqrt_f = (((d * -0.079745222282890008) + 12.7) + (y * 0.996815278536125)) *
    (rtb_Sqrt_f / 300.0);
  d = sqrt(((rtb_Sqrt_f - 25.4) * (rtb_Sqrt_f - 25.4)) + (rtb_Switch2_l *
            rtb_Switch2_l));
  y = rtb_Rotationmatrixfromlocalto_0 * rtb_Rotationmatrixfromlocalto_0;
  d = (((d * d) - 24840.962499999998) + y) / (2.0 * d);
  y = sqrt(y - (d * d));
  alpha = atan((rtb_Sqrt_f - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(alpha);
  alpha = sin(alpha);
  rtb_Rotationmatrixfromlocalto_0 = (d * cos_alpha) - (y * alpha);
  d = ((d * alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((rtb_Sqrt_f - d) / (rtb_Switch2_l -
    rtb_Rotationmatrixfromlocalto_0)) - -0.16186298985390718;
  y = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  rtb_Sqrt_f = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((rtb_Rotationmatrixfromlocalto_0 - -50.027) - (42.875 * y)) + (-76.0 *
    cos_alpha);
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
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_l;
  rtb_Reshapey[0] = (sqrt((Code_Gen_Model_B.Desired_Gap *
    Code_Gen_Model_B.Desired_Gap) - ((Code_Gen_Model_B.Desired_Height - 465.697)
    * (Code_Gen_Model_B.Desired_Height - 465.697))) - 50.027) + ((rtb_Switch2_l *
    42.875) + ((-rtb_Switch2_c) * -76.0));
  rtb_Reshapey[1] = ((rtb_Switch2_c * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Switch2_l = sqrt(((rtb_Reshapey[1] - 25.4) * (rtb_Reshapey[1] - 25.4)) +
                       (rtb_Reshapey[0] * rtb_Reshapey[0]));
  rtb_Minus_n[0] = ((rtb_Rotationmatrixfromlocalto_0 * 155.54999999999998) +
                    ((-rtb_Switch2_c) * -25.4)) + rtb_Reshapey[0];
  rtb_Minus_n[1] = ((rtb_Switch2_c * 155.54999999999998) +
                    (rtb_Rotationmatrixfromlocalto_0 * -25.4)) + rtb_Reshapey[1];
  cos_alpha = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                   (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Rotationmatrixfromlocalto_0 = 158.75 - ((317.5 - rtb_Minus_n[0]) * (300.0 /
    cos_alpha));
  rtb_Switch2_c = ((300.0 / cos_alpha) * rtb_Minus_n[1]) - 12.7;
  rtb_Ball_Screw_Length = sqrt((rtb_Rotationmatrixfromlocalto_0 *
    rtb_Rotationmatrixfromlocalto_0) + (rtb_Switch2_c * rtb_Switch2_c));

  /* MATLAB Function: '<S12>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S12>/Constant23'
   *  Constant: '<S12>/Constant24'
   *  Constant: '<S12>/Constant28'
   *  Constant: '<S12>/Constant29'
   *  Constant: '<S12>/Constant30'
   *  Constant: '<S12>/Constant31'
   */
  rtb_Switch2_l = fmax((sqrt((rtb_Switch2_l * rtb_Switch2_l) - 645.16) - 428.625)
                       - 9.5, 9.5);
  rtb_Switch2_c = fmin(fmax(42.585, rtb_Switch2_l), 307.975);
  rtb_Switch2_l -= rtb_Switch2_c;
  if (rtb_Switch2_l >= 9.5) {
    d = fmin(rtb_Switch2_l, 455.61249999999995);
  } else {
    d = 9.5;
  }

  /* Switch: '<S136>/Init' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   *  UnitDelay: '<S136>/FixPt Unit Delay1'
   *  UnitDelay: '<S136>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S136>/Init' */

  /* Sum: '<S134>/Sum1' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S135>/Switch2' incorporates:
   *  Constant: '<S120>/Constant1'
   *  Constant: '<S120>/Constant3'
   *  RelationalOperator: '<S135>/LowerRelop1'
   *  RelationalOperator: '<S135>/UpperRelop'
   *  Switch: '<S135>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S135>/Switch' incorporates:
     *  Constant: '<S120>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S135>/Switch2' */

  /* Sum: '<S134>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S115>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Sum: '<S124>/Sum1' incorporates:
   *  Constant: '<S115>/Constant2'
   *  Product: '<S124>/Product'
   *  Sum: '<S124>/Sum'
   *  UnitDelay: '<S124>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bm) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bm;

  /* Product: '<S115>/Product' incorporates:
   *  Constant: '<S115>/Constant3'
   */
  rtb_Sqrt_f = rtb_Rotationmatrixfromlocalto_0 * AA_Deriv_Gain;

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
    /* Sum: '<S123>/Diff' incorporates:
     *  UnitDelay: '<S123>/UD'
     *
     * Block description for '<S123>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S123>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = rtb_Sqrt_f - Code_Gen_Model_DW.UD_DSTATE_n;

    /* Saturate: '<S115>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S115>/Add' incorporates:
     *  Gain: '<S115>/Gain1'
     *  Saturate: '<S115>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S115>/Saturation2' */
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

    /* End of Saturate: '<S115>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S133>/Init' incorporates:
   *  UnitDelay: '<S133>/FixPt Unit Delay1'
   *  UnitDelay: '<S133>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = d;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S133>/Init' */

  /* Sum: '<S131>/Sum1' */
  rtb_Switch2_c = d - rtb_Switch2_l;

  /* Switch: '<S132>/Switch2' incorporates:
   *  Constant: '<S119>/Constant1'
   *  Constant: '<S119>/Constant3'
   *  RelationalOperator: '<S132>/LowerRelop1'
   *  RelationalOperator: '<S132>/UpperRelop'
   *  Switch: '<S132>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S132>/Switch' incorporates:
     *  Constant: '<S119>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S132>/Switch2' */

  /* Sum: '<S131>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S116>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Sum: '<S126>/Sum1' incorporates:
   *  Constant: '<S116>/Constant2'
   *  Product: '<S126>/Product'
   *  Sum: '<S126>/Sum'
   *  UnitDelay: '<S126>/Unit Delay1'
   */
  d = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_l) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l;

  /* Product: '<S116>/Product' incorporates:
   *  Constant: '<S116>/Constant3'
   */
  y = d * AA_Deriv_Gain;

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
    /* Sum: '<S125>/Diff' incorporates:
     *  UnitDelay: '<S125>/UD'
     *
     * Block description for '<S125>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S125>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = y - Code_Gen_Model_DW.UD_DSTATE_bi;

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
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S116>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S111>/Subtract1' incorporates:
   *  Constant: '<S111>/Constant24'
   *  MATLAB Function: '<S12>/Get_Arm_Lengths'
   *  Math: '<S111>/Math Function'
   *  Sqrt: '<S111>/Sqrt'
   *  Sum: '<S111>/Subtract'
   */
  rtb_Switch2_l = sqrt((cos_alpha * cos_alpha) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S111>/Saturation' */
  if (rtb_Switch2_l > 455.61249999999995) {
    rtb_Switch2_l = 455.61249999999995;
  } else if (rtb_Switch2_l < 9.5) {
    rtb_Switch2_l = 9.5;
  }

  /* End of Saturate: '<S111>/Saturation' */

  /* Switch: '<S142>/Init' incorporates:
   *  UnitDelay: '<S142>/FixPt Unit Delay1'
   *  UnitDelay: '<S142>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S142>/Init' */

  /* Sum: '<S140>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S141>/Switch2' incorporates:
   *  Constant: '<S122>/Constant1'
   *  Constant: '<S122>/Constant3'
   *  RelationalOperator: '<S141>/LowerRelop1'
   *  RelationalOperator: '<S141>/UpperRelop'
   *  Switch: '<S141>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S141>/Switch' incorporates:
     *  Constant: '<S122>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S141>/Switch2' */

  /* Sum: '<S140>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S117>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Sum: '<S128>/Sum1' incorporates:
   *  Constant: '<S117>/Constant2'
   *  Product: '<S128>/Product'
   *  Sum: '<S128>/Sum'
   *  UnitDelay: '<S128>/Unit Delay1'
   */
  cos_alpha = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bg) *
               AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bg;

  /* Product: '<S117>/Product' incorporates:
   *  Constant: '<S117>/Constant3'
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
    /* Sum: '<S127>/Diff' incorporates:
     *  UnitDelay: '<S127>/UD'
     *
     * Block description for '<S127>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S127>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = alpha - Code_Gen_Model_DW.UD_DSTATE_g;

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
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S117>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S139>/Init' incorporates:
   *  UnitDelay: '<S139>/FixPt Unit Delay1'
   *  UnitDelay: '<S139>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = rtb_Ball_Screw_Length;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S139>/Init' */

  /* Sum: '<S137>/Sum1' */
  rtb_Switch2_c = rtb_Ball_Screw_Length - rtb_Switch2_l;

  /* Switch: '<S138>/Switch2' incorporates:
   *  Constant: '<S121>/Constant1'
   *  Constant: '<S121>/Constant3'
   *  RelationalOperator: '<S138>/LowerRelop1'
   *  RelationalOperator: '<S138>/UpperRelop'
   *  Switch: '<S138>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S138>/Switch' incorporates:
     *  Constant: '<S121>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S138>/Switch2' */

  /* Sum: '<S137>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S118>/Sum' */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S130>/Sum1' incorporates:
   *  Constant: '<S118>/Constant2'
   *  Product: '<S130>/Product'
   *  Sum: '<S130>/Sum'
   *  UnitDelay: '<S130>/Unit Delay1'
   */
  rtb_Switch2_l = ((rtb_Ball_Screw_Length -
                    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S118>/Product' incorporates:
   *  Constant: '<S118>/Constant3'
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
    /* Sum: '<S129>/Diff' incorporates:
     *  UnitDelay: '<S129>/UD'
     *
     * Block description for '<S129>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S129>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S118>/Saturation' */
    if (rtb_Add_ih > BS_Deriv_UL) {
      rtb_Add_ih = BS_Deriv_UL;
    } else if (rtb_Add_ih < BS_Deriv_LL) {
      rtb_Add_ih = BS_Deriv_LL;
    }

    /* Sum: '<S118>/Add' incorporates:
     *  Gain: '<S118>/Gain1'
     *  Saturate: '<S118>/Saturation'
     */
    rtb_Add_ih += BS_Prop_Gain * rtb_Ball_Screw_Length;

    /* Saturate: '<S118>/Saturation2' */
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

    /* End of Saturate: '<S118>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch3' */

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   */
  rtb_Is_Absolute_Translation = (Code_Gen_Model_B.State_Request_Intake_Shooter_h
    == 1.0);

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  rtb_Ball_Screw_Length = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  rtb_OR_ao = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  rtb_Switch_b1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   */
  rtb_Compare_o = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* Chart: '<S7>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S34>/FixPt Relational Operator'
   *  RelationalOperator: '<S35>/FixPt Relational Operator'
   *  RelationalOperator: '<S36>/FixPt Relational Operator'
   *  RelationalOperator: '<S37>/FixPt Relational Operator'
   *  RelationalOperator: '<S38>/FixPt Relational Operator'
   *  UnitDelay: '<S34>/Delay Input1'
   *  UnitDelay: '<S35>/Delay Input1'
   *  UnitDelay: '<S36>/Delay Input1'
   *  UnitDelay: '<S37>/Delay Input1'
   *  UnitDelay: '<S38>/Delay Input1'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
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

  /* Sum: '<S39>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S39>/Add' incorporates:
   *  Gain: '<S39>/Gain'
   *  Gain: '<S39>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Ball_Screw_Length);

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/Constant2'
   *  Switch: '<S7>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S39>/Sum2' incorporates:
     *  Gain: '<S39>/Gain2'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    rtb_Ball_Screw_Length = (Shooter_Motor_Control_I * rtb_Ball_Screw_Length) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S39>/Subtract' incorporates:
     *  Constant: '<S39>/Constant'
     */
    rtb_Switch2_n = 1.0 - rtb_Add_ih;

    /* Switch: '<S41>/Switch2' incorporates:
     *  Constant: '<S39>/Constant'
     *  RelationalOperator: '<S41>/LowerRelop1'
     *  Sum: '<S39>/Subtract'
     */
    if (!(rtb_Ball_Screw_Length > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S39>/Subtract1' incorporates:
       *  Constant: '<S39>/Constant1'
       */
      rtb_Switch2_n = -1.0 - rtb_Add_ih;

      /* Switch: '<S41>/Switch' incorporates:
       *  Constant: '<S39>/Constant1'
       *  RelationalOperator: '<S41>/UpperRelop'
       *  Sum: '<S39>/Subtract1'
       */
      if (!(rtb_Ball_Screw_Length < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_n = rtb_Ball_Screw_Length;
      }

      /* End of Switch: '<S41>/Switch' */
    }

    /* End of Switch: '<S41>/Switch2' */

    /* Saturate: '<S39>/Saturation1' */
    if (rtb_Switch2_n > Shooter_Motor_Control_I_UL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_n < Shooter_Motor_Control_I_LL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Ball_Screw_Length = rtb_Switch2_n;
    }

    /* End of Saturate: '<S39>/Saturation1' */

    /* Sum: '<S39>/Add1' */
    rtb_Add_ih += rtb_Ball_Screw_Length;

    /* Saturate: '<S39>/Saturation2' */
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

    /* End of Saturate: '<S39>/Saturation2' */
  } else {
    rtb_Ball_Screw_Length = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S39>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S39>/Switch' */

  /* Sum: '<S40>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_n = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S40>/Add' incorporates:
   *  Gain: '<S40>/Gain'
   *  Gain: '<S40>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_n);

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant2'
   *  Switch: '<S7>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S40>/Sum2' incorporates:
     *  Gain: '<S40>/Gain2'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    rtb_Switch2_n = (Shooter_Motor_Control_I * rtb_Switch2_n) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S40>/Subtract' incorporates:
     *  Constant: '<S40>/Constant'
     */
    rtb_Switch2_m4 = 1.0 - rtb_Add_ih;

    /* Switch: '<S42>/Switch2' incorporates:
     *  Constant: '<S40>/Constant'
     *  RelationalOperator: '<S42>/LowerRelop1'
     *  Sum: '<S40>/Subtract'
     */
    if (!(rtb_Switch2_n > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S40>/Subtract1' incorporates:
       *  Constant: '<S40>/Constant1'
       */
      rtb_Switch2_m4 = -1.0 - rtb_Add_ih;

      /* Switch: '<S42>/Switch' incorporates:
       *  Constant: '<S40>/Constant1'
       *  RelationalOperator: '<S42>/UpperRelop'
       *  Sum: '<S40>/Subtract1'
       */
      if (!(rtb_Switch2_n < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_m4 = rtb_Switch2_n;
      }

      /* End of Switch: '<S42>/Switch' */
    }

    /* End of Switch: '<S42>/Switch2' */

    /* Saturate: '<S40>/Saturation1' */
    if (rtb_Switch2_m4 > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_m4 < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_n = rtb_Switch2_m4;
    }

    /* End of Saturate: '<S40>/Saturation1' */

    /* Sum: '<S40>/Add1' */
    rtb_Add_ih += rtb_Switch2_n;

    /* Saturate: '<S40>/Saturation2' */
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

    /* End of Saturate: '<S40>/Saturation2' */
  } else {
    rtb_Switch2_n = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S40>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S40>/Switch' */

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

  /* Logic: '<S6>/OR4' incorporates:
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Chain_Button = ((Code_Gen_Model_U.Joystick_Left_B8) ||
    (Code_Gen_Model_U.Joystick_Right_B8));

  /* SignalConversion: '<S6>/Signal Copy10' incorporates:
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = Code_Gen_Model_U.Joystick_Right_POV;

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

  /* Update for UnitDelay: '<S98>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S98>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S99>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S99>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S100>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S100>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S101>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S101>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S27>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S27>/Delay Input1':
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
     *  Bias: '<S171>/Bias'
     *  Merge: '<S145>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' incorporates:
     *  Bias: '<S171>/Bias'
     *  Merge: '<S145>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S43>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S63>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S43>/A'
   *  Delay: '<S43>/MemoryX'
   */
  rtb_thetay = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Add_ih = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S43>/MemoryX' incorporates:
   *  Constant: '<S43>/B'
   *  Product: '<S63>/A[k]*xhat[k|k-1]'
   *  Product: '<S63>/B[k]*u[k]'
   *  Sum: '<S63>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_thetay) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Add_ih) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S97>/UD'
   *
   * Block description for '<S97>/UD':
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

  /* Update for UnitDelay: '<S308>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S308>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S322>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S321>/UD'
   *
   * Block description for '<S321>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S319>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S317>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S317>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S284>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S283>/UD'
   *
   * Block description for '<S283>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch1_ha;

  /* Update for UnitDelay: '<S277>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2_j;

  /* Update for UnitDelay: '<S295>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Product_ku;

  /* Update for UnitDelay: '<S294>/UD'
   *
   * Block description for '<S294>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S280>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S221>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S220>/UD'
   *
   * Block description for '<S220>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S214>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S232>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S231>/UD'
   *
   * Block description for '<S231>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S217>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S242>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S241>/UD'
   *
   * Block description for '<S241>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_k0;

  /* Update for UnitDelay: '<S235>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S253>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S252>/UD'
   *
   * Block description for '<S252>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S238>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_jx;

  /* Update for UnitDelay: '<S263>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S262>/UD'
   *
   * Block description for '<S262>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_cj;

  /* Update for UnitDelay: '<S256>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S274>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S273>/UD'
   *
   * Block description for '<S273>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S259>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S106>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

  /* Update for UnitDelay: '<S106>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_j;

  /* Update for UnitDelay: '<S18>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_cp;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_hr;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_f;

  /* Update for UnitDelay: '<S136>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S136>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S124>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bm = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S123>/UD'
   *
   * Block description for '<S123>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_n = rtb_Sqrt_f;

  /* Update for UnitDelay: '<S133>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S133>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S126>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_l = d;

  /* Update for UnitDelay: '<S125>/UD'
   *
   * Block description for '<S125>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_bi = y;

  /* Update for UnitDelay: '<S142>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S142>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S128>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bg = cos_alpha;

  /* Update for UnitDelay: '<S127>/UD'
   *
   * Block description for '<S127>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_g = alpha;

  /* Update for UnitDelay: '<S139>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S139>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S130>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S129>/UD'
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S34>/Delay Input1'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S37>/Delay Input1'
   *
   * Block description for '<S37>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_OR_ao;

  /* Update for UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Switch_b1;

  /* Update for UnitDelay: '<S38>/Delay Input1'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Compare_o;

  /* Update for UnitDelay: '<S39>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Ball_Screw_Length;

  /* Update for UnitDelay: '<S40>/Unit Delay' */
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

    /* InitializeConditions for Delay: '<S43>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S308>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S317>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S136>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S133>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S142>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S139>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S368>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S13>/Spline Path Following Enabled' */
    /* Start for If: '<S149>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S145>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S149>/Robot_Index_Is_Valid' */
    /* Start for If: '<S152>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S152>/Circle_Check_Valid' */
    /* Start for If: '<S154>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S152>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S149>/Robot_Index_Is_Valid' */
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

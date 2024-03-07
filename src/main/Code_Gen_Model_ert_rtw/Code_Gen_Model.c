/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.95
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Mar  6 20:38:02 2024
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
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S140>/Gain2'
                                        *   '<S141>/Gain2'
                                        *   '<S142>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S140>/Constant3'
                                        *   '<S141>/Constant3'
                                        *   '<S142>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S140>/Saturation1'
                                        *   '<S141>/Saturation1'
                                        *   '<S142>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S140>/Saturation1'
                                        *   '<S141>/Saturation1'
                                        *   '<S142>/Saturation1'
                                        */
real_T AA_Position_Dec_RL = -2.0;      /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S143>/Constant1'
                                        *   '<S144>/Constant1'
                                        *   '<S146>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 2.0;       /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S143>/Constant3'
                                        *   '<S144>/Constant3'
                                        *   '<S146>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S140>/Gain1'
                                        *   '<S141>/Gain1'
                                        *   '<S142>/Gain1'
                                        */
real_T AA_TC_LL = -0.4;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S140>/Constant1'
                                        *   '<S140>/Saturation2'
                                        *   '<S141>/Constant1'
                                        *   '<S141>/Saturation2'
                                        *   '<S142>/Constant1'
                                        *   '<S142>/Saturation2'
                                        */
real_T AA_TC_UL = 0.4;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S140>/Constant'
                                        *   '<S140>/Saturation2'
                                        *   '<S141>/Constant'
                                        *   '<S141>/Saturation2'
                                        *   '<S142>/Constant'
                                        *   '<S142>/Saturation2'
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
                                        *   '<S30>/Constant'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S139>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S139>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S139>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S139>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -2.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S145>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 2.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S145>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S139>/Gain1'
                                        */
real_T BS_TC_LL = -0.5;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S139>/Saturation2'
                                        */
real_T BS_TC_UL = 0.5;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S139>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S395>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S393>/Constant'
                                         *   '<S393>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S395>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S393>/Constant1'
                                        */
real_T Cal_Back_Lower_Arm_DC = 0.0;    /* Variable: Cal_Back_Lower_Arm_DC
                                        * Referenced by: '<S12>/Constant32'
                                        */
real_T Cal_Back_Upper_Arm_DC = 0.0;    /* Variable: Cal_Back_Upper_Arm_DC
                                        * Referenced by: '<S12>/Constant27'
                                        */
real_T Cal_Ball_Screw_Arm_DC = 0.0;    /* Variable: Cal_Ball_Screw_Arm_DC
                                        * Referenced by: '<S12>/Constant34'
                                        */
real_T Cal_Front_Arm_DC = 0.0;         /* Variable: Cal_Front_Arm_DC
                                        * Referenced by: '<S12>/Constant33'
                                        */
real_T Dist_Per_Rev_Back_Lower = 2.2166;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S18>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 2.2166;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S19>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.106;/* Variable: Dist_Per_Rev_Ball_Screw
                                        * Referenced by: '<S20>/Rev_2_Dist'
                                        */
real_T Dist_Per_Rev_Front = 2.2166;    /* Variable: Dist_Per_Rev_Front
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
real_T Dist_Reset_Value_Back_Lower = 79.375;/* Variable: Dist_Reset_Value_Back_Lower
                                             * Referenced by:
                                             *   '<S18>/Dist_Reset_Value'
                                             *   '<S18>/Unit Delay1'
                                             */
real_T Dist_Reset_Value_Back_Upper = 19.05;/* Variable: Dist_Reset_Value_Back_Upper
                                            * Referenced by:
                                            *   '<S19>/Dist_Reset_Value'
                                            *   '<S19>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Ball_Screw = 279.4;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by:
                                            *   '<S20>/Dist_Reset_Value'
                                            *   '<S20>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Front = 6.35;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S21>/Dist_Reset_Value'
                                        *   '<S21>/Unit Delay1'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S322>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S238>/Constant3'
                                        *   '<S259>/Constant3'
                                        *   '<S280>/Constant3'
                                        *   '<S301>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S238>/Constant2'
                                   *   '<S259>/Constant2'
                                   *   '<S280>/Constant2'
                                   *   '<S301>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S238>/Saturation'
                                        *   '<S259>/Saturation'
                                        *   '<S280>/Saturation'
                                        *   '<S301>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S238>/Saturation'
                                        *   '<S259>/Saturation'
                                        *   '<S280>/Saturation'
                                        *   '<S301>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S238>/Gain'
                                            *   '<S259>/Gain'
                                            *   '<S280>/Gain'
                                            *   '<S301>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S238>/Gain2'
                                        *   '<S259>/Gain2'
                                        *   '<S280>/Gain2'
                                        *   '<S301>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S238>/Saturation1'
                                        *   '<S259>/Saturation1'
                                        *   '<S280>/Saturation1'
                                        *   '<S301>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S238>/Saturation1'
                                        *   '<S259>/Saturation1'
                                        *   '<S280>/Saturation1'
                                        *   '<S301>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S238>/Gain1'
                                        *   '<S259>/Gain1'
                                        *   '<S280>/Gain1'
                                        *   '<S301>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S243>/Constant'
                            *   '<S264>/Constant'
                            *   '<S285>/Constant'
                            *   '<S306>/Constant'
                            */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S135>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S135>/Saturation'
                                        */
real_T Gamepad_Stick_Down_Threshold = -0.5;/* Variable: Gamepad_Stick_Down_Threshold
                                            * Referenced by:
                                            *   '<S26>/Constant'
                                            *   '<S28>/Constant'
                                            */
real_T Gamepad_Stick_Up_Threshold = 0.5;/* Variable: Gamepad_Stick_Up_Threshold
                                         * Referenced by:
                                         *   '<S27>/Constant'
                                         *   '<S29>/Constant'
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
                                        * Referenced by: '<S129>/Constant'
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
                                           *   '<S62>/Gain'
                                           *   '<S63>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S62>/Gain2'
                                         *   '<S63>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S62>/Saturation1'
                                          *   '<S63>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S62>/Saturation1'
                                         *   '<S63>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S62>/Gain1'
                                         *   '<S63>/Gain1'
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
                          * Referenced by: '<S223>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S223>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S170>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S183>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S223>/Constant3'
                                     */
real_T Stage_Angle = 16.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 241.3;              /* Variable: Stage_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 533.4;           /* Variable: Stage_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S377>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S343>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S343>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S343>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S343>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S342>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S343>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S343>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S343>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S343>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S343>/Constant1'
                                   *   '<S343>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S343>/Constant'
                                   *   '<S343>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S333>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S333>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S333>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S333>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S333>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S333>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S241>/Constant3'
                                        *   '<S262>/Constant3'
                                        *   '<S283>/Constant3'
                                        *   '<S304>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S241>/Constant2'
                                *   '<S262>/Constant2'
                                *   '<S283>/Constant2'
                                *   '<S304>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S241>/Saturation'
                                           *   '<S262>/Saturation'
                                           *   '<S283>/Saturation'
                                           *   '<S304>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S241>/Saturation'
                                          *   '<S262>/Saturation'
                                          *   '<S283>/Saturation'
                                          *   '<S304>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S241>/Gain2'
                                         *   '<S262>/Gain2'
                                         *   '<S283>/Gain2'
                                         *   '<S304>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S241>/Saturation1'
                                             *   '<S262>/Saturation1'
                                             *   '<S283>/Saturation1'
                                             *   '<S304>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S241>/Saturation1'
                                            *   '<S262>/Saturation1'
                                            *   '<S283>/Saturation1'
                                            *   '<S304>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S241>/Gain1'
                                        *   '<S262>/Gain1'
                                        *   '<S283>/Gain1'
                                        *   '<S304>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S375>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S375>/Constant1'
                                        */
real_T TEST_Cal_DC_Flag = 0.0;         /* Variable: TEST_Cal_DC_Flag
                                        * Referenced by: '<S12>/Constant35'
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
real_T Tol_Gap = 12.7;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S321>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S321>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S321>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S321>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S321>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S321>/Constant3'
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
  real_T Top_Front_Pivot_y;
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_c4;
  real_T rtb_Add_ie;
  real_T rtb_Add_kl;
  real_T rtb_Add_l;
  real_T rtb_Add_pw;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Hypot_i;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_Merge1;
  real_T rtb_Product_ku;
  real_T rtb_Subtract1_bm;
  real_T rtb_Subtract1_dk;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_hq;
  real_T rtb_Subtract1_kj;
  real_T rtb_Subtract1_m4;
  real_T rtb_Subtract1_n;
  real_T rtb_Sum2_e;
  real_T rtb_Switch;
  real_T rtb_Switch1_b4;
  real_T rtb_Switch1_f;
  real_T rtb_Switch1_g;
  real_T rtb_Switch1_m5;
  real_T rtb_Switch1_n;
  real_T rtb_Switch1_nj;
  real_T rtb_Switch1_p;
  real_T rtb_Switch2;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_hk;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_o;
  real_T rtb_Switch4_g;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T sin_alpha;
  real_T sqrt_input;
  real_T y;
  int32_T i;
  int32_T rtb_Assignment_tmp;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s195_iter;
  uint16_T s220_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_AND_g;
  boolean_T rtb_Compare_as;
  boolean_T rtb_Compare_fm;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S228>/Add1' incorporates:
   *  Constant: '<S228>/Constant3'
   *  Constant: '<S228>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S228>/Math Function'
   *  Sum: '<S14>/Add'
   *  Sum: '<S228>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S121>/Diff'
   *  UnitDelay: '<S121>/UD'
   *
   * Block description for '<S121>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S121>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S229>/Add1' incorporates:
   *  Constant: '<S229>/Constant3'
   *  Constant: '<S229>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S229>/Math Function'
   *  Sum: '<S14>/Add1'
   *  Sum: '<S229>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S122>/Diff'
   *  UnitDelay: '<S122>/UD'
   *
   * Block description for '<S122>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S122>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S230>/Add1' incorporates:
   *  Constant: '<S230>/Constant3'
   *  Constant: '<S230>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S230>/Math Function'
   *  Sum: '<S14>/Add2'
   *  Sum: '<S230>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S123>/Diff'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S231>/Add1' incorporates:
   *  Constant: '<S231>/Constant3'
   *  Constant: '<S231>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S231>/Math Function'
   *  Sum: '<S14>/Add3'
   *  Sum: '<S231>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product3' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S124>/Diff'
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
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S11>/Product7' incorporates:
   *  Fcn: '<S125>/r->x'
   *  Fcn: '<S125>/theta->y'
   *  Fcn: '<S126>/r->x'
   *  Fcn: '<S126>/theta->y'
   *  Fcn: '<S127>/r->x'
   *  Fcn: '<S127>/theta->y'
   *  Fcn: '<S128>/r->x'
   *  Fcn: '<S128>/theta->y'
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
   *  Constant: '<S50>/Constant'
   *  Constant: '<S6>/Constant10'
   *  Inport: '<Root>/GameState'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Logic: '<S6>/OR5'
   *  RelationalOperator: '<S49>/FixPt Relational Operator'
   *  RelationalOperator: '<S50>/Compare'
   *  Sum: '<S6>/Sum'
   *  UnitDelay: '<S49>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay1'
   *
   * Block description for '<S49>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((Code_Gen_Model_U.GameState > 2.0) && (Code_Gen_Model_U.Gamepad_B1_A >
       Code_Gen_Model_DW.DelayInput1_DSTATE)) {
    rtb_thetay = 0.02;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE + 0.02;
  }

  /* End of Switch: '<S6>/Switch9' */

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
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

  /* SignalConversion: '<S6>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* SignalConversion: '<S6>/Signal Copy7' incorporates:
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   *  RelationalOperator: '<S40>/Compare'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy17' incorporates:
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   *  RelationalOperator: '<S36>/Compare'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* SignalConversion: '<S6>/Signal Copy19' incorporates:
   *  Constant: '<S34>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   *  RelationalOperator: '<S34>/Compare'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* SignalConversion: '<S6>/Signal Copy18' incorporates:
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   *  RelationalOperator: '<S35>/Compare'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy10' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   *  RelationalOperator: '<S31>/Compare'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  Constant: '<S47>/Constant'
   *  Constant: '<S48>/Constant'
   *  Inport: '<Root>/Gamepad_B3_X'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S6>/OR1'
   *  Logic: '<S6>/OR2'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S48>/Compare'
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
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant2'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
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
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Inport: '<Root>/Joystick_Left_B10'
   *  Inport: '<Root>/Joystick_Right_B10'
   *  Logic: '<S6>/OR3'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  Switch: '<S6>/Switch5'
   *  Switch: '<S6>/Switch6'
   *  Switch: '<S6>/Switch7'
   *  Switch: '<S6>/Switch8'
   */
  if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <= Gamepad_Stick_Down_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Up_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Switch: '<S6>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y <=
             Gamepad_Stick_Down_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant7'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= Gamepad_Stick_Up_Threshold)
  {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant8'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  } else if ((Code_Gen_Model_U.Joystick_Left_B10 != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B10 != 0.0)) {
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
  rtb_Switch1_b4 = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Switch1_b4)) || (rtIsInf(rtb_Switch1_b4))) {
    rtb_Switch1_b4 = 0.0;
  } else {
    rtb_Switch1_b4 = fmod(rtb_Switch1_b4, 4.294967296E+9);
  }

  switch ((rtb_Switch1_b4 < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Switch1_b4)))) :
          ((int32_T)((uint32_T)rtb_Switch1_b4))) {
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

    /* Switch: '<S377>/Switch' incorporates:
     *  Constant: '<S377>/Constant'
     *  Constant: '<S377>/Constant1'
     *  Constant: '<S377>/Constant2'
     *  Math: '<S377>/Hypot'
     *  RelationalOperator: '<S377>/GreaterThan'
     *  Switch: '<S377>/Switch1'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_X;
      rtb_Init_e = Code_Gen_Model_B.Steer_Joystick_Y;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S377>/Switch' */

    /* Logic: '<S375>/AND' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  Logic: '<S385>/AND'
     *  RelationalOperator: '<S378>/Compare'
     *  RelationalOperator: '<S379>/Compare'
     */
    rtb_AND_g = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Init_e == 0.0));

    /* Logic: '<S375>/AND2' incorporates:
     *  RelationalOperator: '<S380>/FixPt Relational Operator'
     *  RelationalOperator: '<S381>/FixPt Relational Operator'
     *  RelationalOperator: '<S382>/FixPt Relational Operator'
     *  RelationalOperator: '<S383>/FixPt Relational Operator'
     *  UnitDelay: '<S380>/Delay Input1'
     *  UnitDelay: '<S381>/Delay Input1'
     *  UnitDelay: '<S382>/Delay Input1'
     *  UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Steering = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_gt))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S375>/Constant1'
     *  Constant: '<S375>/Constant2'
     *  Logic: '<S375>/AND'
     *  Logic: '<S375>/AND4'
     *  Logic: '<S375>/NOT1'
     *  Product: '<S375>/Product1'
     *  Sum: '<S375>/Sum'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    if (rtb_AND_g && (!rtb_Is_Absolute_Steering)) {
      rtb_Switch1_nj = (Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain)
        + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S375>/Switch1' */

    /* Switch: '<S385>/Switch1' incorporates:
     *  Switch: '<S385>/Switch2'
     *  UnitDelay: '<S385>/Unit Delay'
     *  UnitDelay: '<S385>/Unit Delay1'
     */
    if (rtb_AND_g) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = rtb_Init_e;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S385>/Switch1' */

    /* Logic: '<S375>/AND1' incorporates:
     *  Logic: '<S375>/AND'
     *  Logic: '<S375>/AND3'
     *  UnitDelay: '<S375>/Unit Delay2'
     */
    rtb_AND_g = (rtb_AND_g && (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Switch: '<S375>/Switch4' incorporates:
     *  Constant: '<S375>/Constant5'
     *  Switch: '<S375>/Switch5'
     *  Switch: '<S375>/Switch6'
     *  Switch: '<S375>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S375>/Switch5' incorporates:
       *  Constant: '<S375>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S375>/Switch6' incorporates:
       *  Constant: '<S375>/Constant7'
       *  Switch: '<S375>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S375>/Switch7' incorporates:
       *  Constant: '<S375>/Constant8'
       *  Switch: '<S375>/Switch5'
       *  Switch: '<S375>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S375>/Switch6' incorporates:
       *  Switch: '<S375>/Switch5'
       *  UnitDelay: '<S375>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S375>/Switch4' */

    /* Switch: '<S375>/Switch3' incorporates:
     *  Logic: '<S375>/NOT'
     *  Trigonometry: '<S375>/Atan2'
     */
    if (!rtb_AND_g) {
      rtb_Switch1_b4 = rt_atan2d_snf(rtb_Switch1_m5, rtb_Switch2);
    } else {
      rtb_Switch1_b4 = rtb_Switch4_g;
    }

    /* Merge: '<S10>/Merge1' incorporates:
     *  Sum: '<S375>/Sum1'
     *  Switch: '<S375>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_Switch1_b4 + rtb_Switch1_nj;

    /* RelationalOperator: '<S388>/Compare' incorporates:
     *  Constant: '<S388>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Switch2 < 0.0);

    /* Switch: '<S384>/Switch' incorporates:
     *  Constant: '<S384>/Constant'
     *  Constant: '<S384>/Constant1'
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Logic: '<S384>/Logical Operator'
     *  RelationalOperator: '<S386>/Compare'
     *  RelationalOperator: '<S387>/Compare'
     *  UnitDelay: '<S384>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = 6.2831853071795862;
    } else {
      rtb_Switch1_b4 = 0.0;
    }

    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S384>/Constant2'
     *  Constant: '<S384>/Constant3'
     *  Constant: '<S389>/Constant'
     *  Constant: '<S390>/Constant'
     *  Logic: '<S384>/Logical Operator1'
     *  RelationalOperator: '<S389>/Compare'
     *  RelationalOperator: '<S390>/Compare'
     *  UnitDelay: '<S384>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = -6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Sum: '<S384>/Sum1' incorporates:
     *  Switch: '<S384>/Switch'
     *  Switch: '<S384>/Switch1'
     *  UnitDelay: '<S384>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_b4 + rtb_Add_ie) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S399>/Constant'
     *  Constant: '<S400>/Constant'
     *  Logic: '<S394>/AND'
     *  RelationalOperator: '<S399>/Compare'
     *  RelationalOperator: '<S400>/Compare'
     *  Switch: '<S394>/Switch2'
     *  UnitDelay: '<S394>/Unit Delay'
     *  UnitDelay: '<S394>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S394>/Switch1' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  Trigonometry: '<S376>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p,
      rtb_Switch2_o);

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S16>/Constant3'
     *  SignalConversion generated from: '<S16>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

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

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S375>/Constant'
     *  Lookup_n-D: '<S375>/Modulation_Str_Y_Rel'
     *  Product: '<S375>/Product'
     *  SignalConversion: '<S6>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S393>/Constant'
     *  Constant: '<S393>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S393>/Switch1' */

    /* Switch: '<S398>/Init' incorporates:
     *  UnitDelay: '<S398>/FixPt Unit Delay1'
     *  UnitDelay: '<S398>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init_e = rtb_Product_ku;
    } else {
      rtb_Init_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S398>/Init' */

    /* Sum: '<S396>/Sum1' */
    rtb_Product_ku -= rtb_Init_e;

    /* Switch: '<S397>/Switch2' incorporates:
     *  Constant: '<S395>/Constant1'
     *  Constant: '<S395>/Constant3'
     *  RelationalOperator: '<S397>/LowerRelop1'
     *  RelationalOperator: '<S397>/UpperRelop'
     *  Switch: '<S397>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S397>/Switch' incorporates:
       *  Constant: '<S395>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S397>/Switch2' */

    /* Sum: '<S396>/Sum' */
    rtb_Init_e += rtb_Product_ku;

    /* Product: '<S393>/Product' incorporates:
     *  Lookup_n-D: '<S376>/Modulation_Drv'
     *  Math: '<S376>/Magnitude'
     */
    cos_alpha = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_Init_e;

    /* Saturate: '<S393>/Saturation' */
    if (cos_alpha > Boost_Trigger_High_Speed) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (cos_alpha < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = cos_alpha;
    }

    /* End of Saturate: '<S393>/Saturation' */

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

    /* Update for UnitDelay: '<S380>/Delay Input1'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S381>/Delay Input1'
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S382>/Delay Input1'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_gt =
      Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S385>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S375>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND_g;

    /* Update for UnitDelay: '<S375>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S384>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S384>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S394>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p;

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S398>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S398>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S398>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Init_e;

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

  /* Reshape: '<S66>/Reshapey' incorporates:
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

  /* Delay: '<S66>/MemoryX' incorporates:
   *  Constant: '<S66>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_Switch1_nj = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S11>/Trigonometric Function' */
  rtb_Switch2_l = cos(rtb_Switch1_nj);

  /* Trigonometry: '<S11>/Trigonometric Function1' */
  rtb_Switch2_c = sin(rtb_Switch1_nj);

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' */
  rtb_Switch2_o = rtb_Switch2_l;
  rtb_Init_e = rtb_Switch2_c;

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S11>/Unary Minus'
   */
  rtb_Switch1_m5 = -rtb_Switch2_c;
  rtb_Switch2 = rtb_Switch2_l;

  /* Sum: '<S120>/Diff' incorporates:
   *  UnitDelay: '<S120>/UD'
   *
   * Block description for '<S120>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S120>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_l = rtb_Switch1_nj - Code_Gen_Model_DW.UD_DSTATE_d;

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
    rtb_Switch1_b4 = 0.0;
    rtb_Num_Segments = 0;
    for (s195_iter = 0; s195_iter < 8; s195_iter++) {
      rtb_Switch1_b4 += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s195_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Switch1_b4;
  }

  /* End of Product: '<S11>/Product7' */

  /* Product: '<S11>/Product6' incorporates:
   *  SignalConversion generated from: '<S11>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S11>/Unary Minus2'
   */
  rtb_Switch4_g = (rtb_Switch2_c * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Switch2_c = (rtb_Switch2_l * tmp[0]) + (rtb_Switch2_c * tmp[1]);

  /* Product: '<S11>/Product6' incorporates:
   *  Concatenate: '<S11>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Switch2_o * rtb_Switch4_g) +
    (rtb_Switch1_m5 * rtb_Switch2_c);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch4_g) + (rtb_Switch2 *
    rtb_Switch2_c);

  /* Outputs for Enabled SubSystem: '<S93>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S86>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S117>/Enable'
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

    /* Product: '<S117>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S66>/C'
     *  Delay: '<S66>/MemoryX'
     *  Product: '<S119>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_m5;

    /* Sum: '<S117>/Sum' incorporates:
     *  Constant: '<S66>/D'
     *  Product: '<S117>/C[k]*xhat[k|k-1]'
     *  Product: '<S117>/D[k]*u[k]'
     *  Sum: '<S117>/Add1'
     */
    rtb_Switch2_c = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_c + rtb_Switch1_m5);

    /* Product: '<S117>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S66>/C'
     *  Delay: '<S66>/MemoryX'
     *  Product: '<S119>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_m5;

    /* Sum: '<S117>/Sum' incorporates:
     *  Constant: '<S66>/D'
     *  Product: '<S117>/C[k]*xhat[k|k-1]'
     *  Product: '<S117>/D[k]*u[k]'
     *  Sum: '<S117>/Add1'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - (rtb_Switch2_c + rtb_Switch1_m5);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S117>/Product3' incorporates:
     *  Constant: '<S67>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_m5);

    /* Sum: '<S119>/Add1' incorporates:
     *  Product: '<S119>/Product'
     */
    rtb_Switch2_c = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S117>/Product3' incorporates:
     *  Constant: '<S67>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_m5);

    /* Sum: '<S119>/Add1' incorporates:
     *  Product: '<S119>/Product'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S119>/Product2' incorporates:
     *  Constant: '<S67>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_c) +
      (5.9896845167210271E-17 * rtb_Switch1_m5);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_c) +
      (0.095124921972503981 * rtb_Switch1_m5);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S117>/Product3' incorporates:
       *  Outport: '<S117>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S119>/Product2' incorporates:
       *  Outport: '<S119>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S9>/AND' */
  /* End of Outputs for SubSystem: '<S86>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S93>/Enabled Subsystem' */

  /* Sum: '<S93>/Add' incorporates:
   *  Delay: '<S66>/MemoryX'
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
   *  Constant: '<S220>/Constant'
   *  Logic: '<S220>/AND'
   *  MATLAB Function: '<S170>/Find closest index to curve'
   *  Product: '<S220>/Product'
   *  RelationalOperator: '<S220>/Relational Operator'
   *  RelationalOperator: '<S220>/Relational Operator1'
   *  Selector: '<S220>/Selector'
   *  Selector: '<S220>/Selector1'
   *  Selector: '<S221>/Selector'
   *  Sum: '<S220>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S173>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S176>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S178>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S173>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S168>/Action Port'
       */
      /* InitializeConditions for If: '<S13>/If' incorporates:
       *  UnitDelay: '<S168>/Unit Delay'
       *  UnitDelay: '<S169>/Unit Delay'
       *  UnitDelay: '<S171>/Unit Delay'
       *  UnitDelay: '<S171>/Unit Delay1'
       *  UnitDelay: '<S221>/Unit Delay'
       *  UnitDelay: '<S221>/Unit Delay1'
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
     *  ActionPort: '<S168>/Action Port'
     */
    /* Selector: '<S169>/Selector1' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S169>/Selector1' */

    /* Lookup_n-D: '<S168>/Capture Radius' incorporates:
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S169>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S169>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S173>/If' incorporates:
     *  RelationalOperator: '<S173>/ '
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S176>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S178>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S173>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S176>/Action Port'
       */
      /* InitializeConditions for If: '<S173>/If' incorporates:
       *  UnitDelay: '<S176>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S173>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S173>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S176>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S176>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S179>/Action Port'
       */
      /* If: '<S176>/If' incorporates:
       *  Selector: '<S169>/Selector1'
       *  Selector: '<S176>/Selector'
       *  Selector: '<S179>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S176>/Increment_If_Rectangle_Check' */

      /* Sum: '<S176>/Minus' incorporates:
       *  Concatenate: '<S169>/Matrix Concatenate2'
       *  Selector: '<S176>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S176>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S179>/Action Port'
       */
      /* If: '<S176>/If' incorporates:
       *  Selector: '<S169>/Selector1'
       *  Selector: '<S176>/Selector'
       *  Selector: '<S179>/Selector'
       *  Sum: '<S176>/Minus'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S176>/Increment_If_Rectangle_Check' */

      /* Sum: '<S176>/Minus' incorporates:
       *  Concatenate: '<S169>/Matrix Concatenate2'
       *  Selector: '<S176>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2;

      /* Math: '<S176>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S176>/Equal' */
      rtb_AND_g = (Code_Gen_Model_B.Spline_Num_Poses ==
                   Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S176>/Switch' incorporates:
       *  Logic: '<S176>/AND'
       *  Logic: '<S176>/OR'
       *  RelationalOperator: '<S176>/Relational Operator'
       *  UnitDelay: '<S176>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_m5 <= rtb_UnitDelay1_gi) && rtb_AND_g));

      /* If: '<S176>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation) {
        if (!rtb_AND_g) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S178>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S176>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        /* If: '<S178>/If' incorporates:
         *  RelationalOperator: '<S178>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S178>/Is_Last_Point' incorporates:
           *  ActionPort: '<S181>/Action Port'
           */
          /* InitializeConditions for If: '<S178>/If' incorporates:
           *  UnitDelay: '<S181>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S178>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S178>/Is_Last_Point' incorporates:
           *  ActionPort: '<S181>/Action Port'
           */
          /* Switch: '<S181>/Switch' incorporates:
           *  Constant: '<S183>/Constant'
           *  Logic: '<S181>/OR'
           *  RelationalOperator: '<S183>/Compare'
           *  UnitDelay: '<S181>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S181>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S181>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S184>/Action Port'
             */
            /* Merge: '<S173>/Merge2' incorporates:
             *  Constant: '<S184>/Constant'
             *  SignalConversion generated from: '<S184>/Robot_Reached_Destination'
             */
            rtb_AND_g = true;

            /* SignalConversion generated from: '<S184>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S184>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S181>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S181>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S185>/Action Port'
             */
            /* Merge: '<S173>/Merge2' incorporates:
             *  Constant: '<S185>/Constant'
             *  SignalConversion generated from: '<S185>/Robot_Reached_Destination'
             */
            rtb_AND_g = false;

            /* SignalConversion generated from: '<S185>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S185>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S181>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S181>/If' */

          /* Merge: '<S173>/Merge4' incorporates:
           *  SignalConversion: '<S181>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S181>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S178>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S178>/Increment_Search' incorporates:
           *  ActionPort: '<S180>/Action Port'
           */
          /* Merge: '<S173>/Merge2' incorporates:
           *  Constant: '<S180>/Constant'
           *  SignalConversion generated from: '<S180>/Robot_Reached_Destination'
           */
          rtb_AND_g = false;

          /* SignalConversion generated from: '<S180>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S180>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S173>/Merge4' incorporates:
           *  Constant: '<S182>/FixPt Constant'
           *  SignalConversion: '<S180>/Signal Copy'
           *  Sum: '<S182>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S178>/Increment_Search' */
        }

        /* End of If: '<S178>/If' */
        /* End of Outputs for SubSystem: '<S176>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S176>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        /* Sum: '<S186>/FixPt Sum1' incorporates:
         *  Constant: '<S186>/FixPt Constant'
         */
        rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S179>/Selector1' incorporates:
         *  Selector: '<S169>/Selector1'
         */
        rtb_Switch1_p = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) - 1];

        /* Sum: '<S187>/Subtract' incorporates:
         *  Selector: '<S179>/Selector1'
         *  Sum: '<S187>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch1_p - rtb_Switch2_l;

        /* Selector: '<S179>/Selector1' incorporates:
         *  Selector: '<S169>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) + 5];

        /* Sum: '<S187>/Subtract' incorporates:
         *  Selector: '<S179>/Selector1'
         *  Sum: '<S187>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch4_g - rtb_Switch2;

        /* Math: '<S187>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S187>/Divide' */
        rtb_Switch1_m5 = rtb_Minus_n[1];

        /* UnaryMinus: '<S187>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S187>/Product' incorporates:
         *  Product: '<S187>/Divide'
         *  UnaryMinus: '<S187>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_m5 / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S187>/Add1' incorporates:
         *  Sum: '<S187>/Add2'
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch2_c = rtb_Switch1_p - rtb_Minus_n[0];

        /* Sum: '<S187>/Minus4' incorporates:
         *  Sum: '<S187>/Add2'
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch1_p + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S187>/Minus5' incorporates:
         *  Concatenate: '<S169>/Matrix Concatenate2'
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S187>/Add' incorporates:
         *  Sum: '<S187>/Add2'
         *  Sum: '<S187>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S187>/Minus' incorporates:
         *  Sum: '<S187>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S187>/Dot Product' incorporates:
         *  Concatenate: '<S169>/Matrix Concatenate2'
         *  Sum: '<S187>/Minus'
         *  Sum: '<S187>/Minus1'
         *  Sum: '<S187>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* DotProduct: '<S187>/Dot Product1' incorporates:
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S187>/Dot Product2' incorporates:
         *  Sum: '<S187>/Minus4'
         *  Sum: '<S187>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_p * rtb_Switch2_o;

        /* DotProduct: '<S187>/Dot Product3' incorporates:
         *  Sum: '<S187>/Minus4'
         */
        rtb_Product_ku = rtb_Switch1_p * rtb_Switch1_p;

        /* Sum: '<S187>/Add1' incorporates:
         *  Sum: '<S187>/Add2'
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch2_c = rtb_Switch4_g - rtb_Minus_n[1];

        /* Sum: '<S187>/Minus4' incorporates:
         *  Sum: '<S187>/Add2'
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch4_g + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S187>/Minus5' incorporates:
         *  Concatenate: '<S169>/Matrix Concatenate2'
         *  Sum: '<S187>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S187>/Add' incorporates:
         *  Sum: '<S187>/Add2'
         *  Sum: '<S187>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2 - rtb_Minus_n[1];

        /* Sum: '<S187>/Minus' incorporates:
         *  Sum: '<S187>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S187>/Dot Product' incorporates:
         *  Concatenate: '<S169>/Matrix Concatenate2'
         *  Sum: '<S187>/Minus'
         *  Sum: '<S187>/Minus1'
         *  Sum: '<S187>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* RelationalOperator: '<S188>/Compare' incorporates:
         *  Constant: '<S188>/Constant'
         */
        rtb_AND_g = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S187>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S187>/Dot Product1'
         *  Sum: '<S187>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e <= ((rtb_Switch2_c *
          rtb_Switch2_c) + rtb_Switch2_l));

        /* DotProduct: '<S187>/Dot Product2' incorporates:
         *  Sum: '<S187>/Minus4'
         *  Sum: '<S187>/Minus5'
         */
        rtb_Init_e = (rtb_Switch1_p * rtb_Switch2_o) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S173>/Merge4' incorporates:
         *  Constant: '<S189>/Constant'
         *  DataTypeConversion: '<S179>/Data Type Conversion'
         *  DotProduct: '<S187>/Dot Product3'
         *  Logic: '<S187>/AND'
         *  RelationalOperator: '<S187>/LessThanOrEqual1'
         *  RelationalOperator: '<S189>/Compare'
         *  Sum: '<S179>/Add'
         *  Sum: '<S187>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_AND_g &&
          rtb_Is_Absolute_Steering) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <=
          ((rtb_Switch1_p * rtb_Switch1_p) + rtb_Product_ku)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S173>/Merge2' incorporates:
         *  Constant: '<S179>/Constant2'
         *  SignalConversion generated from: '<S179>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S179>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S179>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S176>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S176>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S177>/Action Port'
         */
        /* Merge: '<S173>/Merge2' incorporates:
         *  Constant: '<S177>/Constant2'
         *  SignalConversion generated from: '<S177>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S177>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S177>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S173>/Merge4' incorporates:
         *  SignalConversion generated from: '<S177>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S176>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S173>/Merge1' incorporates:
       *  Constant: '<S176>/Constant'
       *  SignalConversion generated from: '<S176>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S176>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S173>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S173>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S175>/Action Port'
       */
      /* Merge: '<S173>/Merge1' incorporates:
       *  Constant: '<S175>/Constant'
       *  SignalConversion generated from: '<S175>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S173>/Merge2' incorporates:
       *  Constant: '<S175>/Constant1'
       *  SignalConversion generated from: '<S175>/Robot_Reached_Destination'
       */
      rtb_AND_g = false;

      /* SignalConversion generated from: '<S175>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S175>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S173>/Merge4' incorporates:
       *  SignalConversion generated from: '<S175>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S173>/Escape_Auto_Driving' */
    }

    /* End of If: '<S173>/If' */

    /* If: '<S169>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S169>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S174>/Action Port'
       */
      /* Bias: '<S190>/Add Constant' incorporates:
       *  Bias: '<S190>/Bias'
       *  Sum: '<S190>/Subtract'
       */
      rtb_Switch1_m5 = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S190>/Selector4' incorporates:
       *  Bias: '<S190>/Bias1'
       *  Constant: '<S192>/FixPt Constant'
       *  Sum: '<S192>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S190>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S190>/Selector' incorporates:
       *  Bias: '<S190>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S190>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S190>/Matrix Concatenate' incorporates:
       *  Gain: '<S193>/Gain'
       *  Gain: '<S194>/Gain'
       *  Selector: '<S169>/Selector1'
       *  Selector: '<S190>/Selector'
       *  Selector: '<S190>/Selector1'
       *  Selector: '<S190>/Selector2'
       *  Selector: '<S190>/Selector3'
       *  Sum: '<S193>/Subtract'
       *  Sum: '<S194>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S190>/Selector4' incorporates:
         *  Selector: '<S190>/Selector'
         */
        s195_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S193>/Subtract' incorporates:
         *  Bias: '<S190>/Add Constant1'
         *  Selector: '<S190>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s195_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S190>/Selector4' incorporates:
         *  Gain: '<S193>/Gain'
         *  Selector: '<S190>/Selector'
         *  Selector: '<S190>/Selector1'
         *  Sum: '<S193>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s195_iter) - 1];
        }
      }

      /* End of Concatenate: '<S190>/Matrix Concatenate' */

      /* Assignment: '<S190>/Assignment' incorporates:
       *  Selector: '<S190>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s195_iter = 0; s195_iter < rtb_Bias1_p; s195_iter++) {
          rtb_Assignment[s195_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s195_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S190>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S191>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S195>/While Iterator'
       */
      s195_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s195_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s195_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s195_iter] - rtb_Assignment[s195_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s195_iter];
        rtb_Switch2_c = rtb_Assignment[s195_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s195_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s195_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s195_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_c - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2 = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Switch2_o = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch4_g = (rtb_Init_e - (2.0 * rtb_Switch2)) + rtb_Switch2_o;
          rtb_Switch1_p = rtb_Switch2 - rtb_Switch2_o;
          rtb_Switch2_o = (3.0 * rtb_Switch2) - (2.0 * rtb_Switch2_o);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch4_g) +
            (rtb_Minus_n[0] * rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch2_o)) + rtb_Assignment[s195_iter];
          rtb_Product_ku = ((((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1]
            * rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch2_o)) +
            rtb_Switch2_l;
          rtb_Switch4_g = ((3.0 * rtb_Switch2) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Switch1_p = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch2);
          rtb_Switch2 = (rtb_Init_e - rtb_Switch2) * 6.0;
          rtb_Switch2_o = (((rtb_Reshapey[0] * rtb_Switch4_g) + (rtb_Minus_n[0] *
            rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[0] * rtb_Switch2);
          rtb_Switch2_c = (((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1] *
            rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch2);
          rtb_Switch2 = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch4_g = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Product_ku;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch2) + (rtb_Minus_n[1] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Switch2_o) - (((((rtb_Reshapey[0]
            * rtb_Switch2) + (rtb_Minus_n[0] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Init_e)) * rtb_Switch2_c)) / rt_powd_snf
            (rt_hypotd_snf(rtb_Switch2_o, rtb_Switch2_c), 3.0);
        }

        if (s195_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s195_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_m5 - ((real_T)s195_iter);
        rtb_Num_Segments = s195_iter;
        s195_iter++;
      } while ((rtb_Init_e >= 4.0) && (s195_iter <= 3));

      /* End of Outputs for SubSystem: '<S191>/Sampling_Loop' */

      /* SignalConversion generated from: '<S174>/Position_and_Curvature' incorporates:
       *  Assignment: '<S195>/Assignment'
       *  Merge: '<S169>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S169>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S169>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S169>/If Action Subsystem' incorporates:
       *  ActionPort: '<S172>/Action Port'
       */
      /* Product: '<S172>/Product' incorporates:
       *  Selector: '<S169>/Selector'
       *  Selector: '<S169>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S172>/Product1' incorporates:
       *  Selector: '<S169>/Selector'
       *  Selector: '<S169>/Selector1'
       */
      rtb_Switch1_m5 = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S172>/Product' incorporates:
         *  Constant: '<S172>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S172>/Product1' incorporates:
         *  Constant: '<S172>/Constant2'
         *  Product: '<S172>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_m5;
      }

      /* Assignment: '<S172>/Assignment' incorporates:
       *  Concatenate: '<S172>/Matrix Concatenate'
       *  Merge: '<S169>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S172>/Assignment' */

      /* SignalConversion generated from: '<S172>/Num_Segments' incorporates:
       *  Constant: '<S172>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S169>/If Action Subsystem' */
    }

    /* End of If: '<S169>/If1' */

    /* Concatenate: '<S170>/Matrix Concatenate' incorporates:
     *  Merge: '<S169>/Merge'
     *  Selector: '<S170>/Selector'
     *  Selector: '<S170>/Selector1'
     *  Selector: '<S170>/Selector3'
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

    /* End of Concatenate: '<S170>/Matrix Concatenate' */

    /* MATLAB Function: '<S170>/Distance Along Curve' incorporates:
     *  Concatenate: '<S170>/Matrix Concatenate'
     *  Selector: '<S170>/Selector4'
     *  Selector: '<S170>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s195_iter = 0; s195_iter < 149; s195_iter++) {
      /* Outputs for Iterator SubSystem: '<S191>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S195>/While Iterator'
       */
      rtb_Assignment_d[s195_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s195_iter + 1] -
         rtb_MatrixConcatenate_o[s195_iter], rtb_MatrixConcatenate_o[s195_iter +
         151] - rtb_MatrixConcatenate_o[s195_iter + 150]) +
        rtb_Assignment_d[s195_iter];

      /* End of Outputs for SubSystem: '<S191>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S170>/Distance Along Curve' */

    /* MATLAB Function: '<S170>/Find closest index to curve' incorporates:
     *  Concatenate: '<S170>/Matrix Concatenate'
     *  Selector: '<S170>/Selector4'
     *  Selector: '<S170>/Selector5'
     *  Selector: '<S221>/Selector'
     */
    for (s195_iter = 0; s195_iter < 150; s195_iter++) {
      /* Outputs for Iterator SubSystem: '<S191>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S195>/While Iterator'
       */
      distance_from_robot[s195_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s195_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s195_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S191>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s195_iter = 1;
    } else {
      s195_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s195_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s195_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s195_iter - 1];
      for (rtb_Bias1_p = s195_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_m5 > rtb_Init_e) {
          rtb_Switch1_m5 = rtb_Init_e;
        }
      }
    }

    s195_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s195_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S221>/Selector' incorporates:
     *  Constant: '<S221>/Constant'
     *  MATLAB Function: '<S170>/Find closest index to curve'
     *  MinMax: '<S221>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s195_iter)) - 1];

    /* If: '<S221>/If' incorporates:
     *  RelationalOperator: '<S221>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S221>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S224>/Action Port'
       */
      /* SignalConversion generated from: '<S224>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S226>/FixPt Sum1' incorporates:
       *  Constant: '<S226>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S224>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S224>/Selector11'
       *  Selector: '<S224>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S224>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S224>/Selector1'
       *  Selector: '<S224>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S224>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S224>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S224>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S224>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S224>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S221>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S221>/Latch' incorporates:
       *  ActionPort: '<S225>/Action Port'
       */
      /* SignalConversion generated from: '<S225>/In1' incorporates:
       *  UnitDelay: '<S221>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S225>/In2' incorporates:
       *  UnitDelay: '<S221>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S221>/Latch' */
    }

    /* End of If: '<S221>/If' */

    /* MinMax: '<S168>/Min' incorporates:
     *  Lookup_n-D: '<S168>/Lookahead Distance'
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S170>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S220>/While Iterator'
     */
    s220_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s220_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S170>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S220>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s220_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s195_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s220_iter++;
    }

    /* End of Outputs for SubSystem: '<S170>/Find first index that meets distance target' */

    /* Switch: '<S223>/Switch' incorporates:
     *  Concatenate: '<S170>/Matrix Concatenate'
     *  Constant: '<S170>/Constant'
     *  Constant: '<S220>/Constant'
     *  Constant: '<S223>/Constant1'
     *  Constant: '<S223>/Constant2'
     *  Constant: '<S223>/Constant3'
     *  Logic: '<S220>/AND'
     *  MATLAB Function: '<S170>/Find closest index to curve'
     *  Math: '<S223>/Hypot'
     *  Merge: '<S10>/Merge8'
     *  MinMax: '<S223>/Min'
     *  MinMax: '<S223>/Min1'
     *  Product: '<S220>/Product'
     *  Product: '<S223>/Divide'
     *  Product: '<S223>/Product'
     *  Product: '<S223>/Product1'
     *  RelationalOperator: '<S170>/Relational Operator'
     *  RelationalOperator: '<S220>/Relational Operator'
     *  RelationalOperator: '<S220>/Relational Operator1'
     *  Selector: '<S170>/Selector10'
     *  Selector: '<S170>/Selector7'
     *  Selector: '<S170>/Selector8'
     *  Selector: '<S170>/Selector9'
     *  Selector: '<S220>/Selector'
     *  Selector: '<S220>/Selector1'
     *  Selector: '<S221>/Selector'
     *  Sqrt: '<S223>/Sqrt'
     *  Sum: '<S170>/Subtract'
     *  Sum: '<S220>/Add'
     *  Sum: '<S223>/Subtract'
     *  Sum: '<S223>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_UnitDelay1_gi = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch1_m5 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_UnitDelay1_gi = fmin(rtb_Switch1_m5 * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S223>/Switch' */

    /* Logic: '<S171>/OR' */
    rtb_Is_Absolute_Steering = (rtb_AND_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S171>/Switch1' incorporates:
     *  Switch: '<S171>/Switch'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S13>/Merge2' incorporates:
       *  Constant: '<S171>/Constant3'
       *  SignalConversion: '<S171>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S13>/Merge2' incorporates:
       *  SignalConversion: '<S171>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S171>/Switch1' */

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion: '<S171>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S170>/Selector6' incorporates:
     *  Concatenate: '<S170>/Matrix Concatenate'
     *  Selector: '<S170>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S170>/Selector2' incorporates:
     *  Concatenate: '<S170>/Matrix Concatenate'
     *  Selector: '<S170>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S171>/Switch2' incorporates:
     *  Sum: '<S227>/Subtract'
     *  Sum: '<S227>/Subtract1'
     *  Trigonometry: '<S227>/Atan2'
     *  UnitDelay: '<S171>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S171>/Switch2' */

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion: '<S171>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S13>/Merge7' incorporates:
     *  SignalConversion: '<S168>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_AND_g;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S171>/Constant2'
     *  SignalConversion generated from: '<S168>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S171>/Constant5'
     *  SignalConversion generated from: '<S168>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S13>/Merge5' incorporates:
     *  Constant: '<S171>/Constant6'
     *  SignalConversion generated from: '<S168>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S13>/Merge6' incorporates:
     *  Constant: '<S171>/Constant1'
     *  SignalConversion generated from: '<S168>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S169>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S221>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S221>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S171>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S13>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/Pass Through' incorporates:
     *  ActionPort: '<S167>/Action Port'
     */
    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S167>/Constant'
     *  SignalConversion generated from: '<S167>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion generated from: '<S167>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion generated from: '<S167>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion generated from: '<S167>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion generated from: '<S167>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S167>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S13>/Merge5' incorporates:
     *  SignalConversion generated from: '<S167>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge6' incorporates:
     *  SignalConversion generated from: '<S167>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S13>/Pass Through' */
  }

  /* End of If: '<S13>/If' */

  /* Signum: '<S321>/Sign2' incorporates:
   *  UnitDelay: '<S321>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S321>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S321>/Product1' incorporates:
   *  Signum: '<S321>/Sign1'
   *  Signum: '<S321>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S321>/Switch' incorporates:
   *  Constant: '<S321>/Constant'
   *  Constant: '<S326>/Constant'
   *  Constant: '<S327>/Constant'
   *  Logic: '<S321>/or'
   *  Product: '<S321>/Product1'
   *  RelationalOperator: '<S326>/Compare'
   *  RelationalOperator: '<S327>/Compare'
   *  UnitDelay: '<S321>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S321>/Switch' */

  /* Switch: '<S332>/Init' incorporates:
   *  UnitDelay: '<S332>/FixPt Unit Delay1'
   *  UnitDelay: '<S332>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S332>/Init' */

  /* RelationalOperator: '<S328>/Compare' incorporates:
   *  Constant: '<S328>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S329>/Compare' incorporates:
   *  Constant: '<S329>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_c > 0.0);

  /* Abs: '<S321>/Abs' incorporates:
   *  Sum: '<S321>/Subtract'
   *  UnitDelay: '<S321>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S321>/Switch5' incorporates:
   *  Constant: '<S321>/Constant1'
   *  Switch: '<S321>/Switch1'
   *  UnaryMinus: '<S321>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S321>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S321>/Constant4'
     *  Constant: '<S321>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S321>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S321>/Constant2'
     *  Constant: '<S321>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S321>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S321>/Lookup Table Dynamic'
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
    rtb_Switch1_b4 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S321>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S321>/Constant10'
     *  Constant: '<S321>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S321>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S321>/Constant7'
     *  Constant: '<S321>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S321>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S321>/Lookup Table Dynamic1'
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

    /* Switch: '<S321>/Switch3' incorporates:
     *  Constant: '<S321>/Constant1'
     *  Constant: '<S321>/Constant3'
     *  UnaryMinus: '<S321>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S321>/Switch3' */
  }

  /* End of Switch: '<S321>/Switch5' */

  /* Product: '<S321>/Product' incorporates:
   *  Switch: '<S321>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_b4 * rtb_Merge1;

  /* Sum: '<S330>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S331>/Switch2' incorporates:
   *  RelationalOperator: '<S331>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S321>/Switch2' incorporates:
     *  Constant: '<S321>/Constant1'
     *  Switch: '<S321>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S321>/Switch4' incorporates:
       *  Constant: '<S321>/Constant1'
       */
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S321>/Switch4' incorporates:
       *  Constant: '<S321>/Constant3'
       *  UnaryMinus: '<S321>/Unary Minus1'
       */
      rtb_Switch1_m5 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S321>/Switch2' */

    /* Product: '<S321>/Product2' */
    rtb_Switch1_m5 *= rtb_Merge1;

    /* Switch: '<S331>/Switch' incorporates:
     *  RelationalOperator: '<S331>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_m5) {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S331>/Switch' */
  }

  /* End of Switch: '<S331>/Switch2' */

  /* Sum: '<S330>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S324>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S324>/Switch' incorporates:
     *  Constant: '<S348>/Constant3'
     *  Constant: '<S348>/Constant4'
     *  Math: '<S348>/Math Function'
     *  Sum: '<S324>/Subtract'
     *  Sum: '<S348>/Add1'
     *  Sum: '<S348>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Switch1_nj) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S324>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S324>/Switch' */

  /* Sum: '<S344>/Add1' incorporates:
   *  Constant: '<S344>/Constant3'
   *  Constant: '<S344>/Constant4'
   *  Math: '<S344>/Math Function'
   *  Sum: '<S323>/Add'
   *  Sum: '<S343>/Sum'
   *  Sum: '<S344>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Switch1_nj +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S346>/Sum1' incorporates:
   *  Constant: '<S343>/Constant2'
   *  Product: '<S346>/Product'
   *  Sum: '<S346>/Sum'
   *  UnitDelay: '<S346>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S343>/Product' incorporates:
   *  Constant: '<S343>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S345>/Diff' incorporates:
   *  UnitDelay: '<S345>/UD'
   *
   * Block description for '<S345>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S345>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S343>/Saturation' */
  if (cos_alpha > Steering_Heading_Control_D_UL) {
    cos_alpha = Steering_Heading_Control_D_UL;
  } else if (cos_alpha < Steering_Heading_Control_D_LL) {
    cos_alpha = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S343>/Add' incorporates:
   *  Gain: '<S343>/Gain1'
   *  Saturate: '<S343>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    cos_alpha;

  /* Sum: '<S343>/Subtract' incorporates:
   *  Constant: '<S343>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S343>/Sum2' incorporates:
   *  Gain: '<S343>/Gain2'
   *  UnitDelay: '<S343>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S347>/Switch2' incorporates:
   *  RelationalOperator: '<S347>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_uDLookupTable_l)) {
    /* Sum: '<S343>/Subtract1' incorporates:
     *  Constant: '<S343>/Constant1'
     */
    rtb_Switch2 = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S347>/Switch' incorporates:
     *  RelationalOperator: '<S347>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch2) {
      rtb_uDLookupTable_l = rtb_Switch2;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    }

    /* End of Switch: '<S347>/Switch' */
  }

  /* End of Switch: '<S347>/Switch2' */

  /* Saturate: '<S343>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S343>/Saturation1' */

  /* Sum: '<S343>/Add1' */
  cos_alpha = rtb_Init_e + rtb_Switch1_m5;

  /* Saturate: '<S343>/Saturation2' */
  if (cos_alpha > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S343>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (cos_alpha < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S343>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S343>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = cos_alpha;
  }

  /* End of Saturate: '<S343>/Saturation2' */

  /* Switch: '<S323>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S334>/Switch' incorporates:
     *  Abs: '<S334>/Abs'
     *  Constant: '<S334>/Constant'
     *  Constant: '<S342>/Constant'
     *  RelationalOperator: '<S342>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S334>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S323>/Switch' */

  /* Signum: '<S333>/Sign2' incorporates:
   *  UnitDelay: '<S333>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S333>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S333>/Product1' incorporates:
   *  Signum: '<S333>/Sign1'
   *  Signum: '<S333>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S333>/Switch' incorporates:
   *  Constant: '<S333>/Constant'
   *  Constant: '<S335>/Constant'
   *  Constant: '<S336>/Constant'
   *  Logic: '<S333>/or'
   *  Product: '<S333>/Product1'
   *  RelationalOperator: '<S335>/Compare'
   *  RelationalOperator: '<S336>/Compare'
   *  UnitDelay: '<S333>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch4_g = 0.0;
  }

  /* End of Switch: '<S333>/Switch' */

  /* Switch: '<S341>/Init' incorporates:
   *  UnitDelay: '<S341>/FixPt Unit Delay1'
   *  UnitDelay: '<S341>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch4_g;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S341>/Init' */

  /* RelationalOperator: '<S337>/Compare' incorporates:
   *  Constant: '<S337>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch4_g == 0.0);

  /* RelationalOperator: '<S338>/Compare' incorporates:
   *  Constant: '<S338>/Constant'
   */
  rtb_AND_g = (rtb_Switch4_g > 0.0);

  /* Abs: '<S333>/Abs' incorporates:
   *  Sum: '<S333>/Subtract'
   *  UnitDelay: '<S333>/Unit Delay'
   */
  rtb_Switch1_p = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S333>/Switch5' incorporates:
   *  Constant: '<S333>/Constant1'
   *  Switch: '<S333>/Switch1'
   *  UnaryMinus: '<S333>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S333>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S333>/Constant4'
     *  Constant: '<S333>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S333>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S333>/Constant2'
     *  Constant: '<S333>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S333>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S333>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch1_p, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p = rtb_LookupTableDynamic;
    rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S333>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S333>/Constant10'
     *  Constant: '<S333>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S333>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S333>/Constant7'
     *  Constant: '<S333>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S333>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S333>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch1_p, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p = rtb_LookupTableDynamic1;

    /* Switch: '<S333>/Switch3' incorporates:
     *  Constant: '<S333>/Constant1'
     *  Constant: '<S333>/Constant3'
     *  UnaryMinus: '<S333>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S333>/Switch3' */
  }

  /* End of Switch: '<S333>/Switch5' */

  /* Product: '<S333>/Product' incorporates:
   *  Switch: '<S333>/Switch1'
   */
  rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

  /* Sum: '<S339>/Sum1' */
  rtb_Switch4_g -= rtb_Init_e;

  /* Switch: '<S340>/Switch2' incorporates:
   *  RelationalOperator: '<S340>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_Switch2)) {
    /* Switch: '<S333>/Switch2' incorporates:
     *  Constant: '<S333>/Constant1'
     *  Constant: '<S333>/Constant3'
     *  Switch: '<S333>/Switch4'
     *  UnaryMinus: '<S333>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S333>/Switch4' incorporates:
       *  Constant: '<S333>/Constant1'
       */
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S333>/Product2' incorporates:
     *  Switch: '<S333>/Switch2'
     */
    rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

    /* Switch: '<S340>/Switch' incorporates:
     *  RelationalOperator: '<S340>/UpperRelop'
     */
    if (!(rtb_Switch4_g < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4_g;
    }

    /* End of Switch: '<S340>/Switch' */
  }

  /* End of Switch: '<S340>/Switch2' */

  /* Sum: '<S339>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2 + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S236>/Initialize Function' */
  /* Sum: '<S322>/Add' incorporates:
   *  Constant: '<S322>/Constant'
   *  Constant: '<S322>/Constant4'
   *  Constant: '<S322>/Constant5'
   *  Trigonometry: '<S322>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S236>/Initialize Function' */

  /* Fcn: '<S356>/r->x' incorporates:
   *  Fcn: '<S361>/r->x'
   *  Fcn: '<S366>/r->x'
   *  Fcn: '<S371>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S350>/Add' incorporates:
   *  Fcn: '<S356>/r->x'
   *  Fcn: '<S357>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S356>/theta->y' incorporates:
   *  Fcn: '<S361>/theta->y'
   *  Fcn: '<S366>/theta->y'
   *  Fcn: '<S371>/theta->y'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S350>/Add' incorporates:
   *  Fcn: '<S356>/theta->y'
   *  Fcn: '<S357>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_l;

  /* Sum: '<S351>/Add' incorporates:
   *  Fcn: '<S362>/r->x'
   *  Fcn: '<S362>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S352>/Add' incorporates:
   *  Fcn: '<S367>/r->x'
   *  Fcn: '<S367>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S353>/Add' incorporates:
   *  Fcn: '<S372>/r->x'
   *  Fcn: '<S372>/theta->y'
   */
  rtb_Switch2_o = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_l;

  /* Fcn: '<S370>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Switch2_o, rtb_Init_e);

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S369>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S369>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S369>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S369>/Switch1' */

  /* Fcn: '<S355>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_l == 0.0);

  /* Switch: '<S354>/Switch1' */
  if (rtb_AND_g) {
    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S354>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S354>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S354>/Switch1' */

  /* Fcn: '<S360>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c == 0.0);

  /* Switch: '<S359>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S359>/Switch1' incorporates:
     *  Constant: '<S359>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S359>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S359>/Switch1' */

  /* Fcn: '<S365>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S368>/Compare' incorporates:
   *  Constant: '<S368>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S364>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S364>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S364>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S364>/Switch1' */

  /* Product: '<S349>/Divide' incorporates:
   *  Abs: '<S349>/Abs'
   *  Abs: '<S349>/Abs1'
   *  Abs: '<S349>/Abs2'
   *  Abs: '<S349>/Abs3'
   *  Constant: '<S349>/Constant'
   *  MinMax: '<S349>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S349>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S369>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S369>/Switch' incorporates:
     *  Fcn: '<S370>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Switch2_o);
  }

  /* End of Switch: '<S369>/Switch' */

  /* Trigonometry: '<S313>/Cos4' incorporates:
   *  Switch: '<S302>/Angle_Switch'
   *  Trigonometry: '<S312>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S313>/Sin5' incorporates:
   *  UnaryMinus: '<S311>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S313>/Sin4' incorporates:
   *  Switch: '<S302>/Angle_Switch'
   *  Trigonometry: '<S312>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S313>/Cos5' incorporates:
   *  UnaryMinus: '<S311>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S313>/Subtract1' incorporates:
   *  Product: '<S313>/Product2'
   *  Product: '<S313>/Product3'
   *  Trigonometry: '<S313>/Cos4'
   *  Trigonometry: '<S313>/Sin4'
   */
  rtb_Init_e = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S313>/Subtract' incorporates:
   *  Product: '<S313>/Product'
   *  Product: '<S313>/Product1'
   *  Trigonometry: '<S313>/Cos4'
   *  Trigonometry: '<S313>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4
    * rtb_uDLookupTable_l);

  /* Math: '<S313>/Hypot' */
  rtb_Switch4_g = rt_hypotd_snf(rtb_Switch2, rtb_Init_e);

  /* Switch: '<S313>/Switch' incorporates:
   *  Constant: '<S313>/Constant'
   *  Constant: '<S313>/Constant1'
   *  Constant: '<S314>/Constant'
   *  Product: '<S313>/Divide'
   *  Product: '<S313>/Divide1'
   *  RelationalOperator: '<S314>/Compare'
   *  Switch: '<S313>/Switch1'
   */
  if (rtb_Switch4_g > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch4_g;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2 / rtb_Switch4_g;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S313>/Switch' */

  /* Switch: '<S302>/Speed_Switch' incorporates:
   *  Abs: '<S302>/Abs'
   *  Constant: '<S310>/Constant'
   *  RelationalOperator: '<S310>/Compare'
   *  Switch: '<S302>/Angle_Switch'
   *  Trigonometry: '<S312>/Atan1'
   *  Trigonometry: '<S313>/Atan1'
   *  UnaryMinus: '<S302>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S312>/Subtract1' incorporates:
     *  Product: '<S312>/Product2'
     *  Product: '<S312>/Product3'
     *  UnaryMinus: '<S302>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S312>/Subtract' incorporates:
     *  Product: '<S312>/Product'
     *  Product: '<S312>/Product1'
     */
    rtb_Switch4_g = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S312>/Hypot' */
    rtb_Switch2 = rt_hypotd_snf(rtb_Switch4_g, rtb_Init_e);

    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S312>/Constant'
     *  Constant: '<S312>/Constant1'
     *  Constant: '<S315>/Constant'
     *  Product: '<S312>/Divide'
     *  Product: '<S312>/Divide1'
     *  RelationalOperator: '<S315>/Compare'
     *  Switch: '<S312>/Switch'
     */
    if (rtb_Switch2 > 1.0E-6) {
      rtb_Switch4_g /= rtb_Switch2;
      rtb_Init_e /= rtb_Switch2;
    } else {
      rtb_Switch4_g = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S312>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch4_g);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S305>/Product2' incorporates:
   *  Constant: '<S305>/Constant'
   *  Switch: '<S302>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S300>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S300>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S303>/Add' incorporates:
   *  Sum: '<S304>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S235>/Product' incorporates:
   *  Abs: '<S300>/Abs'
   *  Abs: '<S303>/Abs'
   *  Constant: '<S306>/Constant'
   *  Constant: '<S316>/Constant3'
   *  Constant: '<S316>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S300>/OR'
   *  Lookup_n-D: '<S303>/1-D Lookup Table'
   *  Math: '<S316>/Math Function'
   *  RelationalOperator: '<S300>/Equal1'
   *  RelationalOperator: '<S306>/Compare'
   *  Signum: '<S300>/Sign'
   *  Signum: '<S300>/Sign1'
   *  Sum: '<S303>/Add'
   *  Sum: '<S316>/Add1'
   *  Sum: '<S316>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S301>/Gain' */
  rtb_Switch4_g = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S301>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S308>/Sum1' incorporates:
   *  Constant: '<S301>/Constant2'
   *  Product: '<S308>/Product'
   *  Sum: '<S308>/Sum'
   *  UnitDelay: '<S308>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S301>/Product' incorporates:
   *  Constant: '<S301>/Constant3'
   */
  rtb_Switch2 = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S307>/Diff' incorporates:
   *  UnitDelay: '<S307>/UD'
   *
   * Block description for '<S307>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S307>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Switch2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S301>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S301>/Add' incorporates:
   *  Gain: '<S301>/Gain1'
   *  Saturate: '<S301>/Saturation'
   */
  rtb_Switch1_p = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch4_g) +
    cos_alpha;

  /* Sum: '<S301>/Subtract' incorporates:
   *  Constant: '<S301>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch1_p;

  /* Sum: '<S301>/Sum2' incorporates:
   *  Gain: '<S301>/Gain2'
   *  UnitDelay: '<S301>/Unit Delay'
   */
  rtb_Switch4_g = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S309>/Switch2' incorporates:
   *  Constant: '<S301>/Constant'
   *  RelationalOperator: '<S309>/LowerRelop1'
   *  Sum: '<S301>/Subtract'
   */
  if (!(rtb_Switch4_g > (1.0 - rtb_Switch1_p))) {
    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S301>/Constant1'
     *  RelationalOperator: '<S309>/UpperRelop'
     *  Sum: '<S301>/Subtract1'
     */
    if (rtb_Switch4_g < (-1.0 - rtb_Switch1_p)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch1_p;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch4_g;
    }

    /* End of Switch: '<S309>/Switch' */
  }

  /* End of Switch: '<S309>/Switch2' */

  /* Saturate: '<S301>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch4_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch4_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S301>/Saturation1' */

  /* Sum: '<S301>/Add1' */
  cos_alpha = rtb_Switch1_p + rtb_Switch4_g;

  /* Saturate: '<S301>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S301>/Saturation2' */

  /* Sum: '<S317>/Add1' incorporates:
   *  Constant: '<S317>/Constant3'
   *  Constant: '<S317>/Constant4'
   *  Math: '<S317>/Math Function'
   *  Sum: '<S317>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S319>/Sum1' incorporates:
   *  Constant: '<S304>/Constant2'
   *  Product: '<S319>/Product'
   *  Sum: '<S319>/Sum'
   *  UnitDelay: '<S319>/Unit Delay1'
   */
  rtb_Switch1_p = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S304>/Product' incorporates:
   *  Constant: '<S304>/Constant3'
   */
  rtb_Switch2_o = rtb_Switch1_p * Steering_Motor_Control_D;

  /* Sum: '<S318>/Diff' incorporates:
   *  UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Switch2_o - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S304>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S304>/Add' incorporates:
   *  Gain: '<S304>/Gain1'
   *  Saturate: '<S304>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S304>/Subtract' incorporates:
   *  Constant: '<S304>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S304>/Sum2' incorporates:
   *  Gain: '<S304>/Gain2'
   *  UnitDelay: '<S304>/Unit Delay'
   */
  rtb_Product_ku = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S320>/Switch2' incorporates:
   *  Constant: '<S304>/Constant'
   *  RelationalOperator: '<S320>/LowerRelop1'
   *  Sum: '<S304>/Subtract'
   */
  if (!(rtb_Product_ku > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S304>/Constant1'
     *  RelationalOperator: '<S320>/UpperRelop'
     *  Sum: '<S304>/Subtract1'
     */
    if (rtb_Product_ku < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku;
    }

    /* End of Switch: '<S320>/Switch' */
  }

  /* End of Switch: '<S320>/Switch2' */

  /* Saturate: '<S304>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Product_ku = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Product_ku = Steering_Motor_Control_I_LL;
  } else {
    rtb_Product_ku = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S304>/Saturation1' */

  /* Sum: '<S304>/Add1' */
  cos_alpha = rtb_Add_pw + rtb_Product_ku;

  /* Saturate: '<S304>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S304>/Saturation2' */

  /* Product: '<S349>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S354>/Switch' */
  if (!rtb_AND_g) {
    /* Switch: '<S354>/Switch' incorporates:
     *  Fcn: '<S355>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S354>/Switch' */

  /* Trigonometry: '<S250>/Cos4' incorporates:
   *  Switch: '<S239>/Angle_Switch'
   *  Trigonometry: '<S249>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S250>/Sin5' incorporates:
   *  UnaryMinus: '<S248>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S250>/Sin4' incorporates:
   *  Switch: '<S239>/Angle_Switch'
   *  Trigonometry: '<S249>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S250>/Cos5' incorporates:
   *  UnaryMinus: '<S248>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S250>/Subtract1' incorporates:
   *  Product: '<S250>/Product2'
   *  Product: '<S250>/Product3'
   *  Trigonometry: '<S250>/Cos4'
   *  Trigonometry: '<S250>/Sin4'
   */
  rtb_Add_pw = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S250>/Subtract' incorporates:
   *  Product: '<S250>/Product'
   *  Product: '<S250>/Product1'
   *  Trigonometry: '<S250>/Cos4'
   *  Trigonometry: '<S250>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S250>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S250>/Switch' incorporates:
   *  Constant: '<S250>/Constant'
   *  Constant: '<S250>/Constant1'
   *  Constant: '<S251>/Constant'
   *  Product: '<S250>/Divide'
   *  Product: '<S250>/Divide1'
   *  RelationalOperator: '<S251>/Compare'
   *  Switch: '<S250>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S250>/Switch' */

  /* Switch: '<S239>/Speed_Switch' incorporates:
   *  Abs: '<S239>/Abs'
   *  Constant: '<S247>/Constant'
   *  RelationalOperator: '<S247>/Compare'
   *  Switch: '<S239>/Angle_Switch'
   *  Trigonometry: '<S249>/Atan1'
   *  Trigonometry: '<S250>/Atan1'
   *  UnaryMinus: '<S239>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S249>/Subtract1' incorporates:
     *  Product: '<S249>/Product2'
     *  Product: '<S249>/Product3'
     *  UnaryMinus: '<S239>/Unary Minus'
     */
    rtb_Add_pw = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5) + (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S249>/Subtract' incorporates:
     *  Product: '<S249>/Product'
     *  Product: '<S249>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S249>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S249>/Switch1' incorporates:
     *  Constant: '<S249>/Constant'
     *  Constant: '<S249>/Constant1'
     *  Constant: '<S252>/Constant'
     *  Product: '<S249>/Divide'
     *  Product: '<S249>/Divide1'
     *  RelationalOperator: '<S252>/Compare'
     *  Switch: '<S249>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S249>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S242>/Product2' incorporates:
   *  Constant: '<S242>/Constant'
   *  Switch: '<S239>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S237>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S237>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S240>/Add' incorporates:
   *  Sum: '<S241>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S232>/Product' incorporates:
   *  Abs: '<S237>/Abs'
   *  Abs: '<S240>/Abs'
   *  Constant: '<S243>/Constant'
   *  Constant: '<S253>/Constant3'
   *  Constant: '<S253>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S237>/OR'
   *  Lookup_n-D: '<S240>/1-D Lookup Table'
   *  Math: '<S253>/Math Function'
   *  RelationalOperator: '<S237>/Equal1'
   *  RelationalOperator: '<S243>/Compare'
   *  Signum: '<S237>/Sign'
   *  Signum: '<S237>/Sign1'
   *  Sum: '<S240>/Add'
   *  Sum: '<S253>/Add1'
   *  Sum: '<S253>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S238>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S238>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S245>/Sum1' incorporates:
   *  Constant: '<S238>/Constant2'
   *  Product: '<S245>/Product'
   *  Sum: '<S245>/Sum'
   *  UnitDelay: '<S245>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S238>/Product' incorporates:
   *  Constant: '<S238>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S244>/Diff' incorporates:
   *  UnitDelay: '<S244>/UD'
   *
   * Block description for '<S244>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S244>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S238>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S238>/Add' incorporates:
   *  Gain: '<S238>/Gain1'
   *  Saturate: '<S238>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    cos_alpha;

  /* Sum: '<S238>/Subtract' incorporates:
   *  Constant: '<S238>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S238>/Sum2' incorporates:
   *  Gain: '<S238>/Gain2'
   *  UnitDelay: '<S238>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S246>/Switch2' incorporates:
   *  Constant: '<S238>/Constant'
   *  RelationalOperator: '<S246>/LowerRelop1'
   *  Sum: '<S238>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S246>/Switch' incorporates:
     *  Constant: '<S238>/Constant1'
     *  RelationalOperator: '<S246>/UpperRelop'
     *  Sum: '<S238>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S246>/Switch' */
  }

  /* End of Switch: '<S246>/Switch2' */

  /* Saturate: '<S238>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S238>/Saturation1' */

  /* Sum: '<S238>/Add1' */
  cos_alpha = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S238>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S238>/Saturation2' */

  /* Sum: '<S254>/Add1' incorporates:
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant4'
   *  Math: '<S254>/Math Function'
   *  Sum: '<S254>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S256>/Sum1' incorporates:
   *  Constant: '<S241>/Constant2'
   *  Product: '<S256>/Product'
   *  Sum: '<S256>/Sum'
   *  UnitDelay: '<S256>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S241>/Product' incorporates:
   *  Constant: '<S241>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S255>/Diff' incorporates:
   *  UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S241>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S241>/Add' incorporates:
   *  Gain: '<S241>/Gain1'
   *  Saturate: '<S241>/Saturation'
   */
  rtb_Add_kl = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S241>/Subtract' incorporates:
   *  Constant: '<S241>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_kl;

  /* Sum: '<S241>/Sum2' incorporates:
   *  Gain: '<S241>/Gain2'
   *  UnitDelay: '<S241>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S257>/Switch2' incorporates:
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S257>/LowerRelop1'
   *  Sum: '<S241>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_kl))) {
    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S241>/Constant1'
     *  RelationalOperator: '<S257>/UpperRelop'
     *  Sum: '<S241>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_kl)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_kl;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_e;
    }

    /* End of Switch: '<S257>/Switch' */
  }

  /* End of Switch: '<S257>/Switch2' */

  /* Saturate: '<S241>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S241>/Saturation1' */

  /* Sum: '<S241>/Add1' */
  cos_alpha = rtb_Add_kl + rtb_Sum2_e;

  /* Saturate: '<S241>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S241>/Saturation2' */

  /* Product: '<S349>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S359>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S359>/Switch' incorporates:
     *  Fcn: '<S360>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S359>/Switch' */

  /* Trigonometry: '<S271>/Cos4' incorporates:
   *  Switch: '<S260>/Angle_Switch'
   *  Trigonometry: '<S270>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S271>/Sin5' incorporates:
   *  UnaryMinus: '<S269>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S271>/Sin4' incorporates:
   *  Switch: '<S260>/Angle_Switch'
   *  Trigonometry: '<S270>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S271>/Cos5' incorporates:
   *  UnaryMinus: '<S269>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S271>/Subtract1' incorporates:
   *  Product: '<S271>/Product2'
   *  Product: '<S271>/Product3'
   *  Trigonometry: '<S271>/Cos4'
   *  Trigonometry: '<S271>/Sin4'
   */
  rtb_Subtract1_dk = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S271>/Subtract' incorporates:
   *  Product: '<S271>/Product'
   *  Product: '<S271>/Product1'
   *  Trigonometry: '<S271>/Cos4'
   *  Trigonometry: '<S271>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S271>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_dk);

  /* Switch: '<S271>/Switch' incorporates:
   *  Constant: '<S271>/Constant'
   *  Constant: '<S271>/Constant1'
   *  Constant: '<S272>/Constant'
   *  Product: '<S271>/Divide'
   *  Product: '<S271>/Divide1'
   *  RelationalOperator: '<S272>/Compare'
   *  Switch: '<S271>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_dk / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S271>/Switch' */

  /* Switch: '<S260>/Speed_Switch' incorporates:
   *  Abs: '<S260>/Abs'
   *  Constant: '<S268>/Constant'
   *  RelationalOperator: '<S268>/Compare'
   *  Switch: '<S260>/Angle_Switch'
   *  Trigonometry: '<S270>/Atan1'
   *  Trigonometry: '<S271>/Atan1'
   *  UnaryMinus: '<S260>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S270>/Subtract1' incorporates:
     *  Product: '<S270>/Product2'
     *  Product: '<S270>/Product3'
     *  UnaryMinus: '<S260>/Unary Minus'
     */
    rtb_Subtract1_dk = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S270>/Subtract' incorporates:
     *  Product: '<S270>/Product'
     *  Product: '<S270>/Product1'
     */
    rtb_Subtract1_m4 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S270>/Hypot' */
    rtb_Add_kl = rt_hypotd_snf(rtb_Subtract1_m4, rtb_Subtract1_dk);

    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S270>/Constant'
     *  Constant: '<S270>/Constant1'
     *  Constant: '<S273>/Constant'
     *  Product: '<S270>/Divide'
     *  Product: '<S270>/Divide1'
     *  RelationalOperator: '<S273>/Compare'
     *  Switch: '<S270>/Switch'
     */
    if (rtb_Add_kl > 1.0E-6) {
      rtb_Subtract1_m4 /= rtb_Add_kl;
      rtb_Add_kl = rtb_Subtract1_dk / rtb_Add_kl;
    } else {
      rtb_Subtract1_m4 = 1.0;
      rtb_Add_kl = 0.0;
    }

    /* End of Switch: '<S270>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_kl, rtb_Subtract1_m4);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S263>/Product2' incorporates:
   *  Constant: '<S263>/Constant'
   *  Switch: '<S260>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S258>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S258>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S261>/Add' incorporates:
   *  Sum: '<S262>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S233>/Product' incorporates:
   *  Abs: '<S258>/Abs'
   *  Abs: '<S261>/Abs'
   *  Constant: '<S264>/Constant'
   *  Constant: '<S274>/Constant3'
   *  Constant: '<S274>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S258>/OR'
   *  Lookup_n-D: '<S261>/1-D Lookup Table'
   *  Math: '<S274>/Math Function'
   *  RelationalOperator: '<S258>/Equal1'
   *  RelationalOperator: '<S264>/Compare'
   *  Signum: '<S258>/Sign'
   *  Signum: '<S258>/Sign1'
   *  Sum: '<S261>/Add'
   *  Sum: '<S274>/Add1'
   *  Sum: '<S274>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S259>/Gain' */
  rtb_Subtract1_dk = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S259>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S266>/Sum1' incorporates:
   *  Constant: '<S259>/Constant2'
   *  Product: '<S266>/Product'
   *  Sum: '<S266>/Sum'
   *  UnitDelay: '<S266>/Unit Delay1'
   */
  rtb_Add_kl = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S259>/Product' incorporates:
   *  Constant: '<S259>/Constant3'
   */
  rtb_Subtract1_m4 = rtb_Add_kl * Drive_Motor_Control_D;

  /* Sum: '<S265>/Diff' incorporates:
   *  UnitDelay: '<S265>/UD'
   *
   * Block description for '<S265>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S265>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_m4 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S259>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S259>/Add' incorporates:
   *  Gain: '<S259>/Gain1'
   *  Saturate: '<S259>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_dk) +
    cos_alpha;

  /* Sum: '<S259>/Subtract' incorporates:
   *  Constant: '<S259>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S259>/Sum2' incorporates:
   *  Gain: '<S259>/Gain2'
   *  UnitDelay: '<S259>/Unit Delay'
   */
  rtb_Subtract1_dk = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S267>/Switch2' incorporates:
   *  Constant: '<S259>/Constant'
   *  RelationalOperator: '<S267>/LowerRelop1'
   *  Sum: '<S259>/Subtract'
   */
  if (!(rtb_Subtract1_dk > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S267>/Switch' incorporates:
     *  Constant: '<S259>/Constant1'
     *  RelationalOperator: '<S267>/UpperRelop'
     *  Sum: '<S259>/Subtract1'
     */
    if (rtb_Subtract1_dk < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_dk;
    }

    /* End of Switch: '<S267>/Switch' */
  }

  /* End of Switch: '<S267>/Switch2' */

  /* Saturate: '<S259>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_dk = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S259>/Saturation1' */

  /* Sum: '<S259>/Add1' */
  cos_alpha = rtb_Hypot_b + rtb_Subtract1_dk;

  /* Saturate: '<S259>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S259>/Saturation2' */

  /* Sum: '<S275>/Add1' incorporates:
   *  Constant: '<S275>/Constant3'
   *  Constant: '<S275>/Constant4'
   *  Math: '<S275>/Math Function'
   *  Sum: '<S275>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S277>/Sum1' incorporates:
   *  Constant: '<S262>/Constant2'
   *  Product: '<S277>/Product'
   *  Sum: '<S277>/Sum'
   *  UnitDelay: '<S277>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S262>/Product' incorporates:
   *  Constant: '<S262>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S276>/Diff' incorporates:
   *  UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S262>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S262>/Add' incorporates:
   *  Gain: '<S262>/Gain1'
   *  Saturate: '<S262>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S262>/Subtract' incorporates:
   *  Constant: '<S262>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S262>/Sum2' incorporates:
   *  Gain: '<S262>/Gain2'
   *  UnitDelay: '<S262>/Unit Delay'
   */
  rtb_Subtract1_g = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S278>/Switch2' incorporates:
   *  Constant: '<S262>/Constant'
   *  RelationalOperator: '<S278>/LowerRelop1'
   *  Sum: '<S262>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S262>/Constant1'
     *  RelationalOperator: '<S278>/UpperRelop'
     *  Sum: '<S262>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S278>/Switch' */
  }

  /* End of Switch: '<S278>/Switch2' */

  /* Saturate: '<S262>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S262>/Saturation1' */

  /* Sum: '<S262>/Add1' */
  cos_alpha = rtb_Add_ie + rtb_Subtract1_g;

  /* Saturate: '<S262>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S262>/Saturation2' */

  /* Product: '<S349>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S364>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S364>/Switch' incorporates:
     *  Fcn: '<S365>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S364>/Switch' */

  /* Trigonometry: '<S292>/Cos4' incorporates:
   *  Switch: '<S281>/Angle_Switch'
   *  Trigonometry: '<S291>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S292>/Sin5' incorporates:
   *  UnaryMinus: '<S290>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S292>/Sin4' incorporates:
   *  Switch: '<S281>/Angle_Switch'
   *  Trigonometry: '<S291>/Sin4'
   */
  rtb_Subtract1_kj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S292>/Cos5' incorporates:
   *  UnaryMinus: '<S290>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S292>/Subtract1' incorporates:
   *  Product: '<S292>/Product2'
   *  Product: '<S292>/Product3'
   *  Trigonometry: '<S292>/Cos4'
   *  Trigonometry: '<S292>/Sin4'
   */
  rtb_Subtract1_n = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_kj * rtb_Switch2_c);

  /* Sum: '<S292>/Subtract' incorporates:
   *  Product: '<S292>/Product'
   *  Product: '<S292>/Product1'
   *  Trigonometry: '<S292>/Cos4'
   *  Trigonometry: '<S292>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_ie * rtb_Switch2_c) -
    (rtb_Subtract1_kj * rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S292>/Hypot' */
  rtb_Hypot_i = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Subtract1_n);

  /* Switch: '<S292>/Switch' incorporates:
   *  Constant: '<S292>/Constant'
   *  Constant: '<S292>/Constant1'
   *  Constant: '<S293>/Constant'
   *  Product: '<S292>/Divide'
   *  Product: '<S292>/Divide1'
   *  RelationalOperator: '<S293>/Compare'
   *  Switch: '<S292>/Switch1'
   */
  if (rtb_Hypot_i > 1.0E-6) {
    rtb_Switch2_l = rtb_Subtract1_n / rtb_Hypot_i;
    rtb_Switch2_c = rtb_MatrixConcatenate_b_idx_0 / rtb_Hypot_i;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
  }

  /* End of Switch: '<S292>/Switch' */

  /* Switch: '<S281>/Speed_Switch' incorporates:
   *  Abs: '<S281>/Abs'
   *  Constant: '<S289>/Constant'
   *  RelationalOperator: '<S289>/Compare'
   *  Switch: '<S281>/Angle_Switch'
   *  Trigonometry: '<S291>/Atan1'
   *  Trigonometry: '<S292>/Atan1'
   *  UnaryMinus: '<S281>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S291>/Subtract1' incorporates:
     *  Product: '<S291>/Product2'
     *  Product: '<S291>/Product3'
     *  UnaryMinus: '<S281>/Unary Minus'
     */
    rtb_Subtract1_n = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S291>/Subtract' incorporates:
     *  Product: '<S291>/Product'
     *  Product: '<S291>/Product1'
     */
    rtb_Subtract1_kj = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S291>/Hypot' */
    rtb_Add_ie = rt_hypotd_snf(rtb_Subtract1_kj, rtb_Subtract1_n);

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S291>/Constant'
     *  Constant: '<S291>/Constant1'
     *  Constant: '<S294>/Constant'
     *  Product: '<S291>/Divide'
     *  Product: '<S291>/Divide1'
     *  RelationalOperator: '<S294>/Compare'
     *  Switch: '<S291>/Switch'
     */
    if (rtb_Add_ie > 1.0E-6) {
      rtb_Subtract1_kj /= rtb_Add_ie;
      rtb_Add_ie = rtb_Subtract1_n / rtb_Add_ie;
    } else {
      rtb_Subtract1_kj = 1.0;
      rtb_Add_ie = 0.0;
    }

    /* End of Switch: '<S291>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ie, rtb_Subtract1_kj);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S284>/Product2' incorporates:
   *  Constant: '<S284>/Constant'
   *  Switch: '<S281>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S279>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S279>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S282>/Add' incorporates:
   *  Sum: '<S283>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S234>/Product' incorporates:
   *  Abs: '<S279>/Abs'
   *  Abs: '<S282>/Abs'
   *  Constant: '<S285>/Constant'
   *  Constant: '<S295>/Constant3'
   *  Constant: '<S295>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S279>/OR'
   *  Lookup_n-D: '<S282>/1-D Lookup Table'
   *  Math: '<S295>/Math Function'
   *  RelationalOperator: '<S279>/Equal1'
   *  RelationalOperator: '<S285>/Compare'
   *  Signum: '<S279>/Sign'
   *  Signum: '<S279>/Sign1'
   *  Sum: '<S282>/Add'
   *  Sum: '<S295>/Add1'
   *  Sum: '<S295>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S280>/Gain' */
  rtb_Subtract1_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S280>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S287>/Sum1' incorporates:
   *  Constant: '<S280>/Constant2'
   *  Product: '<S287>/Product'
   *  Sum: '<S287>/Sum'
   *  UnitDelay: '<S287>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S280>/Product' incorporates:
   *  Constant: '<S280>/Constant3'
   */
  rtb_Subtract1_kj = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S286>/Diff' incorporates:
   *  UnitDelay: '<S286>/UD'
   *
   * Block description for '<S286>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S286>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_kj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S280>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S280>/Add' incorporates:
   *  Gain: '<S280>/Gain1'
   *  Saturate: '<S280>/Saturation'
   */
  rtb_Hypot_i = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract1_n) +
    cos_alpha;

  /* Sum: '<S280>/Subtract' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Hypot_i;

  /* Sum: '<S280>/Sum2' incorporates:
   *  Gain: '<S280>/Gain2'
   *  UnitDelay: '<S280>/Unit Delay'
   */
  rtb_Subtract1_n = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S288>/Switch2' incorporates:
   *  Constant: '<S280>/Constant'
   *  RelationalOperator: '<S288>/LowerRelop1'
   *  Sum: '<S280>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Hypot_i))) {
    /* Switch: '<S288>/Switch' incorporates:
     *  Constant: '<S280>/Constant1'
     *  RelationalOperator: '<S288>/UpperRelop'
     *  Sum: '<S280>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Hypot_i)) {
      rtb_Switch2_c = -1.0 - rtb_Hypot_i;
    } else {
      rtb_Switch2_c = rtb_Subtract1_n;
    }

    /* End of Switch: '<S288>/Switch' */
  }

  /* End of Switch: '<S288>/Switch2' */

  /* Saturate: '<S280>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S280>/Saturation1' */

  /* Sum: '<S280>/Add1' */
  cos_alpha = rtb_Hypot_i + rtb_Subtract1_n;

  /* Saturate: '<S280>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S280>/Saturation2' */

  /* Sum: '<S296>/Add1' incorporates:
   *  Constant: '<S296>/Constant3'
   *  Constant: '<S296>/Constant4'
   *  Math: '<S296>/Math Function'
   *  Sum: '<S296>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S298>/Sum1' incorporates:
   *  Constant: '<S283>/Constant2'
   *  Product: '<S298>/Product'
   *  Sum: '<S298>/Sum'
   *  UnitDelay: '<S298>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S283>/Product' incorporates:
   *  Constant: '<S283>/Constant3'
   */
  rtb_Hypot_i = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S297>/Diff' incorporates:
   *  UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Hypot_i - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S283>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S283>/Add' incorporates:
   *  Gain: '<S283>/Gain1'
   *  Saturate: '<S283>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + cos_alpha;

  /* Sum: '<S283>/Subtract' incorporates:
   *  Constant: '<S283>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_l;

  /* Sum: '<S283>/Sum2' incorporates:
   *  Gain: '<S283>/Gain2'
   *  UnitDelay: '<S283>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S299>/Switch2' incorporates:
   *  Constant: '<S283>/Constant'
   *  RelationalOperator: '<S299>/LowerRelop1'
   *  Sum: '<S283>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S283>/Constant1'
     *  RelationalOperator: '<S299>/UpperRelop'
     *  Sum: '<S283>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Switch2_c = -1.0 - rtb_Add_l;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S299>/Switch' */
  }

  /* End of Switch: '<S299>/Switch2' */

  /* Saturate: '<S283>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = rtb_Switch2_c;
  }

  /* End of Saturate: '<S283>/Saturation1' */

  /* Sum: '<S283>/Add1' */
  cos_alpha = rtb_Add_l + rtb_Subtract1_f;

  /* Saturate: '<S283>/Saturation2' */
  if (cos_alpha > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (cos_alpha < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = cos_alpha;
  }

  /* End of Saturate: '<S283>/Saturation2' */

  /* Gain: '<S129>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
   *  Constant: '<S130>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S129>/Switch1' incorporates:
   *  UnitDelay: '<S129>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S129>/Switch1' */

  /* Sum: '<S129>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

  /* Gain: '<S129>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S129>/Switch' incorporates:
   *  UnitDelay: '<S129>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S129>/Switch' */

  /* Sum: '<S129>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S18>/AND1' incorporates:
   *  Constant: '<S18>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Back_Lower'
   *  Logic: '<S18>/AND'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  RelationalOperator: '<S22>/FixPt Relational Operator'
   *  UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Is_Absolute_Translation = ((((int32_T)Code_Gen_Model_B.Arm_Dist_Cal_Active)
    < ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_h)) ||
    ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
     (Code_Gen_Model_U.Motor_Current_Back_Lower >
      Dist_Reset_Motor_Current_Back_Lower)));

  /* Switch: '<S18>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Switch: '<S18>/Switch3'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = (rtb_Is_Absolute_Translation ||
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

  /* Logic: '<S19>/AND1' incorporates:
   *  Constant: '<S19>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Back_Upper'
   *  Logic: '<S19>/AND'
   *  RelationalOperator: '<S19>/Relational Operator'
   *  RelationalOperator: '<S23>/FixPt Relational Operator'
   *  UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND_g = ((((int32_T)Code_Gen_Model_B.Arm_Dist_Cal_Active) < ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_g)) ||
               ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
                (Code_Gen_Model_U.Motor_Current_Back_Upper >
                 Dist_Reset_Motor_Current_Back_Upper)));

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S19>/Dist_Reset_Value'
   *  Sum: '<S19>/Sum'
   *  UnitDelay: '<S19>/Unit Delay1'
   */
  if (rtb_AND_g) {
    rtb_Switch1_g = Dist_Reset_Value_Back_Upper - rtb_Switch2_l;
  } else {
    rtb_Switch1_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* Sum: '<S19>/Subtract1' */
  Code_Gen_Model_B.Back_Upper_Arm_Length = rtb_Switch2_l + rtb_Switch1_g;

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  rtb_Switch1_b4 = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(rtb_Switch1_b4)) || (rtIsInf(rtb_Switch1_b4))) {
    rtb_Switch1_b4 = 0.0;
  } else {
    rtb_Switch1_b4 = fmod(rtb_Switch1_b4, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_Switch1_b4 < 0.0) ? ((int32_T)
    ((uint8_T)(-((int8_T)((uint8_T)(-rtb_Switch1_b4)))))) : ((int32_T)((uint8_T)
    rtb_Switch1_b4)));

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
  if (rtb_Is_Absolute_Translation) {
    rtb_Switch1_b4 = Dist_Reset_Value_Back_Lower - rtb_Switch2_l;
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_g;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Sum: '<S18>/Subtract1' */
  Code_Gen_Model_B.Back_Lower_Arm_Length = rtb_Switch2_l + rtb_Switch1_b4;

  /* Sum: '<S132>/Add' incorporates:
   *  Constant: '<S132>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S132>/Sqrt' incorporates:
   *  Math: '<S132>/Math Function'
   *  Sum: '<S132>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Front * Dist_Per_Rev_Front;

  /* Logic: '<S21>/AND1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Front'
   *  Logic: '<S21>/AND'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S25>/FixPt Relational Operator'
   *  UnitDelay: '<S25>/Delay Input1'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Is_Absolute_Steering = ((((int32_T)Code_Gen_Model_B.Arm_Dist_Cal_Active) <
    ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_e)) ||
    ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
     (Code_Gen_Model_U.Motor_Current_Front > Dist_Reset_Motor_Current_Front)));

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Sum: '<S21>/Sum'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_n = Dist_Reset_Value_Front - rtb_Switch2_l;
  } else {
    rtb_Switch1_n = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_l + rtb_Switch1_n;

  /* Sqrt: '<S136>/Sqrt' incorporates:
   *  Constant: '<S136>/Constant24'
   *  Math: '<S136>/Math Function'
   *  Sum: '<S136>/Add'
   *  Sum: '<S136>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Ball_Screw *
    Dist_Per_Rev_Ball_Screw;

  /* Logic: '<S20>/AND1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Ball_Screw'
   *  Logic: '<S20>/AND'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  RelationalOperator: '<S24>/FixPt Relational Operator'
   *  UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Switch_b1 = ((((int32_T)Code_Gen_Model_B.Arm_Dist_Cal_Active) < ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_d)) ||
                   ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
                    (Code_Gen_Model_U.Motor_Current_Ball_Screw >
                     Dist_Reset_Motor_Current_Ball_Screw)));

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Switch1_f = Dist_Reset_Value_Ball_Screw - rtb_Switch2_l;
  } else {
    rtb_Switch1_f = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Switch2_l + rtb_Switch1_f;

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
  d = (sqrt_input - 56058.355625000004) / 331.17548218429454;
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  rtb_Switch2_l = (((((((d * 0.84366148773210747) + 177.79999999999998) - (y *
    -0.53687549219315933)) - 177.79999999999998) - 139.7) *
                    (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
                   177.79999999999998) + 139.7;
  Top_Front_Pivot_y = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((Top_Front_Pivot_y - 25.4) * (Top_Front_Pivot_y - 25.4)) +
           (rtb_Switch2_l * rtb_Switch2_l));
  sqrt_input = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  sqrt_input = atan((Top_Front_Pivot_y - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(sqrt_input);
  sin_alpha = sin(sqrt_input);
  sqrt_input = (d * cos_alpha) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((Top_Front_Pivot_y - d) / (rtb_Switch2_l - sqrt_input)) -
    -0.16186298985390718;
  y = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  Top_Front_Pivot_y = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((sqrt_input - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((Top_Front_Pivot_y - 465.697) *
    (Top_Front_Pivot_y - 465.697)) + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = Top_Front_Pivot_y;

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
    Code_Gen_Model_B.Shooter_Pos_State = 0.0;
    Code_Gen_Model_B.Desired_Angle = Stage_Angle;
    Code_Gen_Model_B.Desired_Height = Stage_Height;
    Code_Gen_Model_B.Desired_Gap = Stage_Gap;
  } else {
    switch (Code_Gen_Model_DW.is_c5_Code_Gen_Model) {
     case Code_Gen_Model_IN_Amp:
      Code_Gen_Model_B.Shooter_Pos_State = 4.0;
      Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Shooter_Pos_State = 5.0;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_LoadShooter:
      Code_Gen_Model_B.Shooter_Pos_State = 5.0;
      Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 2.0;
      Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Speaker_to_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 3.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Speaker_to_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 3.0;
      Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      if ((((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
            (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) &&
           (Code_Gen_Model_B.Meas_Gap < (Stage_Gap + Tol_Gap))) &&
          (Code_Gen_Model_B.Meas_Gap > (Stage_Gap - Tol_Gap))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
      }
      break;

     case Code_Gen_Model_IN_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 0.0;
      Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Speaker) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Stage_to_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 1.0;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Shooter_Pos_State = 5.0;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Trap) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap;
        Code_Gen_Model_B.Shooter_Pos_State = 6.0;
        Code_Gen_Model_B.Desired_Angle = Trap_Angle;
        Code_Gen_Model_B.Desired_Height = Trap_Height;
        Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Stage_to_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 1.0;
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Switch2_c + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Switch2_c - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
        Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
      Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
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
    d = ((rtb_Switch2_l * 42.875) + ((-rtb_Switch2_c) * -76.0)) + (sqrt
      (sqrt_input) - 50.027);
  } else {
    d = ((rtb_Switch2_l * 42.875) + ((-rtb_Switch2_c) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = d;
  rtb_Minus_n[0] = ((rtb_Switch2_l * 155.54999999999998) + ((-rtb_Switch2_c) *
    -25.4)) + d;
  d = ((rtb_Switch2_c * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = d;
  rtb_Minus_n[1] = ((rtb_Switch2_c * 155.54999999999998) + (rtb_Switch2_l *
    -25.4)) + d;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Reshapey[1] - 25.4) *
    (rtb_Reshapey[1] - 25.4)) + (rtb_Reshapey[0] * rtb_Reshapey[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Switch2_l = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                       (rtb_Minus_n[1] * rtb_Minus_n[1]));
  sqrt_input = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_Switch2_l));
  rtb_Switch2_c = ((288.925 / rtb_Switch2_l) * rtb_Minus_n[1]) -
    88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (sqrt_input * sqrt_input) +
    (rtb_Switch2_c * rtb_Switch2_c);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Switch2_l;

  /* End of MATLAB Function: '<S12>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S12>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S12>/Constant23'
   *  Constant: '<S12>/Constant24'
   *  Constant: '<S12>/Constant28'
   *  Constant: '<S12>/Constant29'
   *  Constant: '<S12>/Constant30'
   *  Constant: '<S12>/Constant31'
   */
  rtb_Switch2_l = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                        Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_Switch2_l <= 98.425) {
    sqrt_input = 79.375;
    rtb_Switch2_c = 19.049999999999997;
  } else if (rtb_Switch2_l <= 413.375) {
    sqrt_input = 79.375;
    rtb_Switch2_c = rtb_Switch2_l - 79.375;
  } else {
    sqrt_input = fmin(rtb_Switch2_l - 334.0, 317.0);
    rtb_Switch2_c = 334.0;
  }

  /* End of MATLAB Function: '<S12>/Back_AA_To_Extentions' */

  /* Switch: '<S160>/Init' incorporates:
   *  UnitDelay: '<S160>/FixPt Unit Delay1'
   *  UnitDelay: '<S160>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S160>/Init' */

  /* Sum: '<S158>/Sum1' */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S159>/Switch2' incorporates:
   *  Constant: '<S144>/Constant1'
   *  Constant: '<S144>/Constant3'
   *  RelationalOperator: '<S159>/LowerRelop1'
   *  RelationalOperator: '<S159>/UpperRelop'
   *  Switch: '<S159>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S159>/Switch' incorporates:
     *  Constant: '<S144>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S159>/Switch2' */

  /* Sum: '<S158>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S140>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S140>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* RelationalOperator: '<S134>/Compare' incorporates:
   *  Constant: '<S134>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S140>/Switch' incorporates:
   *  Constant: '<S140>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S140>/Switch1' incorporates:
     *  Constant: '<S140>/Constant3'
     *  UnitDelay: '<S149>/Delay Input1'
     *
     * Block description for '<S149>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      Top_Front_Pivot_y = AA_Integral_IC;
    } else {
      /* Sum: '<S140>/Sum2' incorporates:
       *  Gain: '<S140>/Gain2'
       *  UnitDelay: '<S140>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S140>/Subtract' incorporates:
       *  Constant: '<S140>/Constant'
       */
      Top_Front_Pivot_y = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S150>/Switch2' incorporates:
       *  RelationalOperator: '<S150>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > Top_Front_Pivot_y)) {
        /* Sum: '<S140>/Subtract1' incorporates:
         *  Constant: '<S140>/Constant1'
         */
        Top_Front_Pivot_y = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S150>/Switch' incorporates:
         *  RelationalOperator: '<S150>/UpperRelop'
         */
        if (!(rtb_Switch2_c < Top_Front_Pivot_y)) {
          Top_Front_Pivot_y = rtb_Switch2_c;
        }

        /* End of Switch: '<S150>/Switch' */
      }

      /* End of Switch: '<S150>/Switch2' */

      /* Saturate: '<S140>/Saturation1' */
      if (Top_Front_Pivot_y > AA_Integral_UL) {
        Top_Front_Pivot_y = AA_Integral_UL;
      } else if (Top_Front_Pivot_y < AA_Integral_LL) {
        Top_Front_Pivot_y = AA_Integral_LL;
      }

      /* End of Saturate: '<S140>/Saturation1' */
    }

    /* End of Switch: '<S140>/Switch1' */
  } else {
    Top_Front_Pivot_y = 0.0;
  }

  /* End of Switch: '<S140>/Switch' */

  /* Switch: '<S12>/Switch1' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND3'
   *  Logic: '<S12>/AND4'
   *  Logic: '<S12>/NOT'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Back_Lower_Arm_Cal_Success))) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant27'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Cal_Back_Upper_Arm_DC;
  } else {
    /* Sum: '<S140>/Add1' */
    cos_alpha = rtb_Switch2_l + Top_Front_Pivot_y;

    /* Saturate: '<S140>/Saturation2' */
    if (cos_alpha > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (cos_alpha < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = cos_alpha;
    }

    /* End of Saturate: '<S140>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S157>/Init' incorporates:
   *  UnitDelay: '<S157>/FixPt Unit Delay1'
   *  UnitDelay: '<S157>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = sqrt_input;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S157>/Init' */

  /* Sum: '<S155>/Sum1' */
  rtb_Switch2_c = sqrt_input - rtb_Switch2_l;

  /* Switch: '<S156>/Switch2' incorporates:
   *  Constant: '<S143>/Constant1'
   *  Constant: '<S143>/Constant3'
   *  RelationalOperator: '<S156>/LowerRelop1'
   *  RelationalOperator: '<S156>/UpperRelop'
   *  Switch: '<S156>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S156>/Switch' incorporates:
     *  Constant: '<S143>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S156>/Switch2' */

  /* Sum: '<S155>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S141>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S141>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S141>/Switch' incorporates:
   *  Constant: '<S141>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S141>/Switch1' incorporates:
     *  Constant: '<S141>/Constant3'
     *  UnitDelay: '<S151>/Delay Input1'
     *
     * Block description for '<S151>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S141>/Sum2' incorporates:
       *  Gain: '<S141>/Gain2'
       *  UnitDelay: '<S141>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c2;

      /* Sum: '<S141>/Subtract' incorporates:
       *  Constant: '<S141>/Constant'
       */
      sqrt_input = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S152>/Switch2' incorporates:
       *  RelationalOperator: '<S152>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > sqrt_input)) {
        /* Sum: '<S141>/Subtract1' incorporates:
         *  Constant: '<S141>/Constant1'
         */
        sqrt_input = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S152>/Switch' incorporates:
         *  RelationalOperator: '<S152>/UpperRelop'
         */
        if (!(rtb_Switch2_c < sqrt_input)) {
          sqrt_input = rtb_Switch2_c;
        }

        /* End of Switch: '<S152>/Switch' */
      }

      /* End of Switch: '<S152>/Switch2' */

      /* Saturate: '<S141>/Saturation1' */
      if (sqrt_input > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (sqrt_input < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      }

      /* End of Saturate: '<S141>/Saturation1' */
    }

    /* End of Switch: '<S141>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S141>/Switch' */

  /* Switch: '<S19>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Switch: '<S19>/Switch3'
     *  UnitDelay: '<S19>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = (rtb_AND_g ||
      (Code_Gen_Model_B.Back_Upper_Arm_Cal_Success));
  } else {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND2'
   *  Logic: '<S12>/AND5'
   *  Logic: '<S12>/NOT1'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Back_Upper_Arm_Cal_Success))) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant32'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Cal_Back_Lower_Arm_DC;
  } else {
    /* Sum: '<S141>/Add1' */
    cos_alpha = rtb_Switch2_l + sqrt_input;

    /* Saturate: '<S141>/Saturation2' */
    if (cos_alpha > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (cos_alpha < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = cos_alpha;
    }

    /* End of Saturate: '<S141>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S135>/Subtract1' incorporates:
   *  Constant: '<S135>/Constant24'
   *  Math: '<S135>/Math Function'
   *  Sqrt: '<S135>/Sqrt'
   *  Sum: '<S135>/Subtract'
   */
  rtb_Switch2_l = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                        Code_Gen_Model_B.Desired_Front_AA_Length) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S135>/Saturation' */
  if (rtb_Switch2_l > Front_AA_Max_Ext) {
    rtb_Switch2_l = Front_AA_Max_Ext;
  } else if (rtb_Switch2_l < Front_AA_Min_Ext) {
    rtb_Switch2_l = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S135>/Saturation' */

  /* Switch: '<S166>/Init' incorporates:
   *  UnitDelay: '<S166>/FixPt Unit Delay1'
   *  UnitDelay: '<S166>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S166>/Init' */

  /* Sum: '<S164>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S165>/Switch2' incorporates:
   *  Constant: '<S146>/Constant1'
   *  Constant: '<S146>/Constant3'
   *  RelationalOperator: '<S165>/LowerRelop1'
   *  RelationalOperator: '<S165>/UpperRelop'
   *  Switch: '<S165>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S146>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S165>/Switch2' */

  /* Sum: '<S164>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S142>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S142>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S142>/Switch' incorporates:
   *  Constant: '<S142>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S142>/Switch1' incorporates:
     *  Constant: '<S142>/Constant3'
     *  UnitDelay: '<S153>/Delay Input1'
     *
     * Block description for '<S153>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o) {
      d = AA_Integral_IC;
    } else {
      /* Sum: '<S142>/Sum2' incorporates:
       *  Gain: '<S142>/Gain2'
       *  UnitDelay: '<S142>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S142>/Subtract' incorporates:
       *  Constant: '<S142>/Constant'
       */
      d = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S154>/Switch2' incorporates:
       *  RelationalOperator: '<S154>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > d)) {
        /* Sum: '<S142>/Subtract1' incorporates:
         *  Constant: '<S142>/Constant1'
         */
        d = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S154>/Switch' incorporates:
         *  RelationalOperator: '<S154>/UpperRelop'
         */
        if (!(rtb_Switch2_c < d)) {
          d = rtb_Switch2_c;
        }

        /* End of Switch: '<S154>/Switch' */
      }

      /* End of Switch: '<S154>/Switch2' */

      /* Saturate: '<S142>/Saturation1' */
      if (d > AA_Integral_UL) {
        d = AA_Integral_UL;
      } else if (d < AA_Integral_LL) {
        d = AA_Integral_LL;
      }

      /* End of Saturate: '<S142>/Saturation1' */
    }

    /* End of Switch: '<S142>/Switch1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S142>/Switch' */

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
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND1'
   *  Logic: '<S12>/AND6'
   *  Logic: '<S12>/NOT2'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Front_Arm_Cal_Success))) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant33'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Cal_Front_Arm_DC;
  } else {
    /* Sum: '<S142>/Add1' */
    cos_alpha = rtb_Switch2_l + d;

    /* Saturate: '<S142>/Saturation2' */
    if (cos_alpha > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (cos_alpha < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = cos_alpha;
    }

    /* End of Saturate: '<S142>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S163>/Init' incorporates:
   *  UnitDelay: '<S163>/FixPt Unit Delay1'
   *  UnitDelay: '<S163>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S163>/Init' */

  /* Sum: '<S161>/Sum1' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_BS_Length - rtb_Switch2_l;

  /* Switch: '<S162>/Switch2' incorporates:
   *  Constant: '<S145>/Constant1'
   *  Constant: '<S145>/Constant3'
   *  RelationalOperator: '<S162>/LowerRelop1'
   *  RelationalOperator: '<S162>/UpperRelop'
   *  Switch: '<S162>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S145>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S162>/Switch2' */

  /* Sum: '<S161>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S139>/Sum' */
  y = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S148>/Sum1' incorporates:
   *  Constant: '<S139>/Constant2'
   *  Product: '<S148>/Product'
   *  Sum: '<S148>/Sum'
   *  UnitDelay: '<S148>/Unit Delay1'
   */
  rtb_Switch2_l = ((y - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S139>/Product' incorporates:
   *  Constant: '<S139>/Constant3'
   */
  rtb_Switch2_c = rtb_Switch2_l * BS_Deriv_Gain;

  /* Switch: '<S20>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Switch: '<S20>/Switch3'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = (rtb_Switch_b1 ||
      (Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success));
  } else {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Switch: '<S12>/Switch3' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND'
   *  Logic: '<S12>/AND7'
   *  Logic: '<S12>/NOT3'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success))) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant34'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Cal_Ball_Screw_Arm_DC;
  } else {
    /* Sum: '<S147>/Diff' incorporates:
     *  UnitDelay: '<S147>/UD'
     *
     * Block description for '<S147>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S147>/UD':
     *
     *  Store in Global RAM
     */
    cos_alpha = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S139>/Saturation' */
    if (cos_alpha > BS_Deriv_UL) {
      cos_alpha = BS_Deriv_UL;
    } else if (cos_alpha < BS_Deriv_LL) {
      cos_alpha = BS_Deriv_LL;
    }

    /* Sum: '<S139>/Add' incorporates:
     *  Gain: '<S139>/Gain1'
     *  Saturate: '<S139>/Saturation'
     */
    cos_alpha += BS_Prop_Gain * y;

    /* Saturate: '<S139>/Saturation2' */
    if (cos_alpha > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (cos_alpha < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = cos_alpha;
    }

    /* End of Saturate: '<S139>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch3' */

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   */
  rtb_AND_g = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  y = look1_binlcpw(TEST_Speaker_Angle,
                    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
                    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   */
  rtb_Switch_b1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   */
  rtb_Compare_fm = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S56>/Compare' incorporates:
   *  Constant: '<S56>/Constant'
   */
  rtb_Compare_as = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* Chart: '<S7>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  RelationalOperator: '<S58>/FixPt Relational Operator'
   *  RelationalOperator: '<S59>/FixPt Relational Operator'
   *  RelationalOperator: '<S60>/FixPt Relational Operator'
   *  RelationalOperator: '<S61>/FixPt Relational Operator'
   *  UnitDelay: '<S57>/Delay Input1'
   *  UnitDelay: '<S58>/Delay Input1'
   *  UnitDelay: '<S59>/Delay Input1'
   *  UnitDelay: '<S60>/Delay Input1'
   *  UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S59>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S60>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S61>/Delay Input1':
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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -y;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = y;
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
      if (((int32_T)rtb_Compare_fm) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_hw)) {
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
      } else if (((int32_T)rtb_AND_g) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_f)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (((int32_T)rtb_Switch_b1) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_oy)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_Compare_as) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_em)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -y;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = y;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/Chart_Intake_and_Shooter' */

  /* Sum: '<S62>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  y = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S62>/Add' incorporates:
   *  Gain: '<S62>/Gain'
   *  Gain: '<S62>/Gain1'
   */
  cos_alpha = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * y);

  /* Switch: '<S62>/Switch' incorporates:
   *  Constant: '<S62>/Constant2'
   *  Switch: '<S7>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S62>/Sum2' incorporates:
     *  Gain: '<S62>/Gain2'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    y = (Shooter_Motor_Control_I * y) + Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S62>/Subtract' incorporates:
     *  Constant: '<S62>/Constant'
     */
    sin_alpha = 1.0 - cos_alpha;

    /* Switch: '<S64>/Switch2' incorporates:
     *  Constant: '<S62>/Constant'
     *  RelationalOperator: '<S64>/LowerRelop1'
     *  Sum: '<S62>/Subtract'
     */
    if (!(y > (1.0 - cos_alpha))) {
      /* Sum: '<S62>/Subtract1' incorporates:
       *  Constant: '<S62>/Constant1'
       */
      sin_alpha = -1.0 - cos_alpha;

      /* Switch: '<S64>/Switch' incorporates:
       *  Constant: '<S62>/Constant1'
       *  RelationalOperator: '<S64>/UpperRelop'
       *  Sum: '<S62>/Subtract1'
       */
      if (!(y < (-1.0 - cos_alpha))) {
        sin_alpha = y;
      }

      /* End of Switch: '<S64>/Switch' */
    }

    /* End of Switch: '<S64>/Switch2' */

    /* Saturate: '<S62>/Saturation1' */
    if (sin_alpha > Shooter_Motor_Control_I_UL) {
      y = Shooter_Motor_Control_I_UL;
    } else if (sin_alpha < Shooter_Motor_Control_I_LL) {
      y = Shooter_Motor_Control_I_LL;
    } else {
      y = sin_alpha;
    }

    /* End of Saturate: '<S62>/Saturation1' */

    /* Sum: '<S62>/Add1' */
    cos_alpha += y;

    /* Saturate: '<S62>/Saturation2' */
    if (cos_alpha > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (cos_alpha < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = cos_alpha;
    }

    /* End of Saturate: '<S62>/Saturation2' */
  } else {
    y = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S62>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S62>/Switch' */

  /* Sum: '<S63>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  sin_alpha = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S63>/Add' incorporates:
   *  Gain: '<S63>/Gain'
   *  Gain: '<S63>/Gain1'
   */
  cos_alpha = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * sin_alpha);

  /* Switch: '<S63>/Switch' incorporates:
   *  Constant: '<S63>/Constant2'
   *  Switch: '<S7>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S63>/Sum2' incorporates:
     *  Gain: '<S63>/Gain2'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    sin_alpha = (Shooter_Motor_Control_I * sin_alpha) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S63>/Subtract' incorporates:
     *  Constant: '<S63>/Constant'
     */
    rtb_Switch2_hk = 1.0 - cos_alpha;

    /* Switch: '<S65>/Switch2' incorporates:
     *  Constant: '<S63>/Constant'
     *  RelationalOperator: '<S65>/LowerRelop1'
     *  Sum: '<S63>/Subtract'
     */
    if (!(sin_alpha > (1.0 - cos_alpha))) {
      /* Sum: '<S63>/Subtract1' incorporates:
       *  Constant: '<S63>/Constant1'
       */
      rtb_Switch2_hk = -1.0 - cos_alpha;

      /* Switch: '<S65>/Switch' incorporates:
       *  Constant: '<S63>/Constant1'
       *  RelationalOperator: '<S65>/UpperRelop'
       *  Sum: '<S63>/Subtract1'
       */
      if (!(sin_alpha < (-1.0 - cos_alpha))) {
        rtb_Switch2_hk = sin_alpha;
      }

      /* End of Switch: '<S65>/Switch' */
    }

    /* End of Switch: '<S65>/Switch2' */

    /* Saturate: '<S63>/Saturation1' */
    if (rtb_Switch2_hk > Shooter_Motor_Control_I_UL) {
      sin_alpha = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_hk < Shooter_Motor_Control_I_LL) {
      sin_alpha = Shooter_Motor_Control_I_LL;
    } else {
      sin_alpha = rtb_Switch2_hk;
    }

    /* End of Saturate: '<S63>/Saturation1' */

    /* Sum: '<S63>/Add1' */
    cos_alpha += sin_alpha;

    /* Saturate: '<S63>/Saturation2' */
    if (cos_alpha > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (cos_alpha < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = cos_alpha;
    }

    /* End of Saturate: '<S63>/Saturation2' */
  } else {
    sin_alpha = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S63>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S63>/Switch' */

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

  /* SignalConversion: '<S6>/Signal Copy16' incorporates:
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   *  RelationalOperator: '<S37>/Compare'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy9' incorporates:
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   *  RelationalOperator: '<S38>/Compare'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy8' incorporates:
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   *  RelationalOperator: '<S39>/Compare'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* Logic: '<S6>/OR4' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   */
  Code_Gen_Model_B.Chain_Button = ((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
    (Code_Gen_Model_U.Joystick_Right_B8 != 0.0));

  /* SignalConversion: '<S6>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* Update for UnitDelay: '<S121>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S121>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S122>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S122>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S123>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S123>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S124>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S124>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S49>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S49>/Delay Input1':
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
     *  Bias: '<S195>/Bias'
     *  Merge: '<S169>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' incorporates:
     *  Bias: '<S195>/Bias'
     *  Merge: '<S169>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S66>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S86>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S66>/A'
   *  Delay: '<S66>/MemoryX'
   */
  rtb_thetay = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  cos_alpha = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S66>/MemoryX' incorporates:
   *  Constant: '<S66>/B'
   *  Product: '<S86>/A[k]*xhat[k|k-1]'
   *  Product: '<S86>/B[k]*u[k]'
   *  Sum: '<S86>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_thetay) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + cos_alpha) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S120>/UD'
   *
   * Block description for '<S120>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Switch1_nj;

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

  /* Update for UnitDelay: '<S332>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S332>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S346>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S345>/UD'
   *
   * Block description for '<S345>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S343>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S341>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S341>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S308>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S307>/UD'
   *
   * Block description for '<S307>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2;

  /* Update for UnitDelay: '<S301>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch4_g;

  /* Update for UnitDelay: '<S319>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch1_p;

  /* Update for UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Switch2_o;

  /* Update for UnitDelay: '<S304>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Product_ku;

  /* Update for UnitDelay: '<S245>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S244>/UD'
   *
   * Block description for '<S244>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S238>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S256>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S241>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S266>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_kl;

  /* Update for UnitDelay: '<S265>/UD'
   *
   * Block description for '<S265>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_m4;

  /* Update for UnitDelay: '<S259>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_dk;

  /* Update for UnitDelay: '<S277>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S262>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S287>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S286>/UD'
   *
   * Block description for '<S286>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_kj;

  /* Update for UnitDelay: '<S280>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S298>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Hypot_i;

  /* Update for UnitDelay: '<S283>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S129>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

  /* Update for UnitDelay: '<S129>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = Code_Gen_Model_B.Arm_Dist_Cal_Active;

  /* Update for UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Arm_Dist_Cal_Active;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_g;

  /* Update for UnitDelay: '<S18>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_b4;

  /* Update for UnitDelay: '<S25>/Delay Input1'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_B.Arm_Dist_Cal_Active;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_n;

  /* Update for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_d = Code_Gen_Model_B.Arm_Dist_Cal_Active;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_f;

  /* Update for UnitDelay: '<S160>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S160>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S149>/Delay Input1'
   *
   * Block description for '<S149>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S140>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = Top_Front_Pivot_y;

  /* Update for UnitDelay: '<S151>/Delay Input1'
   *
   * Block description for '<S151>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S157>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S157>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S141>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c2 = sqrt_input;

  /* Update for UnitDelay: '<S153>/Delay Input1'
   *
   * Block description for '<S153>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S166>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S166>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S142>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = d;

  /* Update for UnitDelay: '<S163>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S163>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S148>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S147>/UD'
   *
   * Block description for '<S147>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_AND_g;

  /* Update for UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S60>/Delay Input1'
   *
   * Block description for '<S60>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_oy = rtb_Switch_b1;

  /* Update for UnitDelay: '<S59>/Delay Input1'
   *
   * Block description for '<S59>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hw = rtb_Compare_fm;

  /* Update for UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_em = rtb_Compare_as;

  /* Update for UnitDelay: '<S62>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = y;

  /* Update for UnitDelay: '<S63>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = sin_alpha;
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

    /* InitializeConditions for Delay: '<S66>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S332>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S341>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S19>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S18>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S20>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S160>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S157>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S166>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S163>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S398>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S13>/Spline Path Following Enabled' */
    /* Start for If: '<S173>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S169>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S173>/Robot_Index_Is_Valid' */
    /* Start for If: '<S176>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S176>/Circle_Check_Valid' */
    /* Start for If: '<S178>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S176>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S173>/Robot_Index_Is_Valid' */
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

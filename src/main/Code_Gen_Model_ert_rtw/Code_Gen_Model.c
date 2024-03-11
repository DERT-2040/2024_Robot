/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.123
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Mar 11 06:30:25 2024
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

/* Named constants for Chart: '<S8>/Chart_Intake_and_Shooter' */
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
#define Code_Gen_Model_Servo_Down      (false)
#define Code_Gen_Model_Servo_Up        (true)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)5U)
#define Code_IN_Note_Intake_AND_Shooter ((uint8_T)6U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)11U)

/* Named constants for Chart: '<S13>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S14>/Chart_Shooter_Position' */
#define Code_Gen_Mo_IN_Speaker_to_Stage ((uint8_T)4U)
#define Code_Gen_Mo_IN_Stage_to_Speaker ((uint8_T)6U)
#define Code_Gen_Mode_State_LoadShooter ((uint8_T)2U)
#define Code_Gen_Model_IN_Amp          ((uint8_T)1U)
#define Code_Gen_Model_IN_LoadShooter  ((uint8_T)2U)
#define Code_Gen_Model_IN_Speaker      ((uint8_T)3U)
#define Code_Gen_Model_IN_Stage        ((uint8_T)5U)
#define Code_Gen_Model_IN_Trap         ((uint8_T)7U)
#define Code_Gen_Model_IN_Trap_to_Stage ((uint8_T)8U)
#define Code_Gen_Model_State_Amp       ((uint8_T)3U)
#define Code_Gen_Model_State_Speaker   ((uint8_T)1U)
#define Code_Gen_Model_State_Stage     ((uint8_T)0U)
#define Code_Gen_Model_State_Trap      ((uint8_T)4U)

/* Exported block parameters */
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S149>/Gain2'
                                        *   '<S150>/Gain2'
                                        *   '<S151>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S149>/Constant3'
                                        *   '<S150>/Constant3'
                                        *   '<S151>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S149>/Saturation1'
                                        *   '<S150>/Saturation1'
                                        *   '<S151>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S149>/Saturation1'
                                        *   '<S150>/Saturation1'
                                        *   '<S151>/Saturation1'
                                        */
real_T AA_Position_Dec_RL = -2.0;      /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S152>/Constant1'
                                        *   '<S153>/Constant1'
                                        *   '<S155>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 2.0;       /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S152>/Constant3'
                                        *   '<S153>/Constant3'
                                        *   '<S155>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S149>/Gain1'
                                        *   '<S150>/Gain1'
                                        *   '<S151>/Gain1'
                                        */
real_T AA_TC_LL = -0.4;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S149>/Constant1'
                                        *   '<S149>/Saturation2'
                                        *   '<S150>/Constant1'
                                        *   '<S150>/Saturation2'
                                        *   '<S151>/Constant1'
                                        *   '<S151>/Saturation2'
                                        */
real_T AA_TC_UL = 0.4;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S149>/Constant'
                                        *   '<S149>/Saturation2'
                                        *   '<S150>/Constant'
                                        *   '<S150>/Saturation2'
                                        *   '<S151>/Constant'
                                        *   '<S151>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = 0.0;     /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S383>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S383>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S383>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S383>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S383>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S383>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S5>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S5>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S383>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = -3.0;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S383>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S5>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S5>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.6667;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S383>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.3934;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S383>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.6667;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S383>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.8182;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S383>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 9.6962;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S383>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S383>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.8448;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S383>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S383>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 3.8793;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S383>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.8182;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S383>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 3.8793;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S383>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.3934;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S383>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S383>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.6802;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S383>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S383>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.6802;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S383>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S386>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = -0.0006;  /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S385>/Constant17'
                                        */
real_T Amp_Angle = -50.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 571.5;                /* Variable: Amp_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 919.48;            /* Variable: Amp_Height
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S148>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S148>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S148>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S148>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -2.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S154>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 2.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S154>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S148>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S148>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S148>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S407>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S403>/Constant'
                                         *   '<S403>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S407>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S403>/Constant1'
                                        */
real_T Dist_AA_Cal_Tol = 5.0;          /* Variable: Dist_AA_Cal_Tol
                                        * Referenced by:
                                        *   '<S20>/Calibration_Tolerance'
                                        *   '<S21>/Calibration_Tolerance'
                                        *   '<S23>/Calibration_Tolerance'
                                        */
real_T Dist_BS_Cal_Tol = 1.0;          /* Variable: Dist_BS_Cal_Tol
                                        * Referenced by: '<S22>/Calibration_Tolerance'
                                        */
real_T Dist_Per_Rev_Back_Lower = 2.2166;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S20>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 2.2166;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S21>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.35278;/* Variable: Dist_Per_Rev_Ball_Screw
                                          * Referenced by: '<S22>/Rev_2_Dist'
                                          */
real_T Dist_Per_Rev_Front = 2.2166;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S23>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Value_Back_Lower = 79.375;/* Variable: Dist_Reset_Value_Back_Lower
                                             * Referenced by:
                                             *   '<S20>/Dist_Reset_Value'
                                             *   '<S20>/Unit Delay1'
                                             */
real_T Dist_Reset_Value_Back_Upper = 19.05;/* Variable: Dist_Reset_Value_Back_Upper
                                            * Referenced by:
                                            *   '<S21>/Dist_Reset_Value'
                                            *   '<S21>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Ball_Screw = 279.4;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by:
                                            *   '<S22>/Dist_Reset_Value'
                                            *   '<S22>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Front = 6.35;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S23>/Dist_Reset_Value'
                                        *   '<S23>/Unit Delay1'
                                        */
real_T Distance_FL_y = 0.26194;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S331>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S247>/Constant3'
                                        *   '<S268>/Constant3'
                                        *   '<S289>/Constant3'
                                        *   '<S310>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S247>/Constant2'
                                   *   '<S268>/Constant2'
                                   *   '<S289>/Constant2'
                                   *   '<S310>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S247>/Saturation'
                                        *   '<S268>/Saturation'
                                        *   '<S289>/Saturation'
                                        *   '<S310>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S247>/Saturation'
                                        *   '<S268>/Saturation'
                                        *   '<S289>/Saturation'
                                        *   '<S310>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S247>/Gain'
                                            *   '<S268>/Gain'
                                            *   '<S289>/Gain'
                                            *   '<S310>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S247>/Gain2'
                                        *   '<S268>/Gain2'
                                        *   '<S289>/Gain2'
                                        *   '<S310>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S247>/Saturation1'
                                        *   '<S268>/Saturation1'
                                        *   '<S289>/Saturation1'
                                        *   '<S310>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S247>/Saturation1'
                                        *   '<S268>/Saturation1'
                                        *   '<S289>/Saturation1'
                                        *   '<S310>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S247>/Gain1'
                                        *   '<S268>/Gain1'
                                        *   '<S289>/Gain1'
                                        *   '<S310>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S252>/Constant'
                            *   '<S273>/Constant'
                            *   '<S294>/Constant'
                            *   '<S315>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S24>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S144>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S144>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S26>/Constant'
                                           *   '<S28>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S27>/Constant'
                                          *   '<S29>/Constant'
                                          */
real_T Gyro_Calibration_Value = 0.0;   /* Variable: Gyro_Calibration_Value
                                        * Referenced by: '<S6>/Unit Delay1'
                                        */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S10>/Constant1'
                                        *   '<S10>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S10>/Constant'
                                          */
real_T LoadShooter_Angle = 35.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 279.4;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 624.84;    /* Variable: LoadShooter_Height
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 100.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 0.5;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 0.2;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.1;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S12>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S137>/Constant'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S70>/Gain'
                                           *   '<S71>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S70>/Gain2'
                                         *   '<S71>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S70>/Saturation1'
                                          *   '<S71>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S70>/Saturation1'
                                         *   '<S71>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S70>/Gain1'
                                         *   '<S71>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 300.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                      */
real_T Speaker_Gap = 279.4;            /* Variable: Speaker_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S232>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S232>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S179>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S192>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S232>/Constant3'
                                     */
real_T Stage_Angle = 16.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 241.3;              /* Variable: Stage_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 533.4;           /* Variable: Stage_Height
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S387>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S352>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S352>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S352>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S352>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S351>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S352>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S352>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S352>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S352>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S352>/Constant1'
                                   *   '<S352>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S352>/Constant'
                                   *   '<S352>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S342>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S342>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S342>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S342>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S342>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S342>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S250>/Constant3'
                                        *   '<S271>/Constant3'
                                        *   '<S292>/Constant3'
                                        *   '<S313>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S250>/Constant2'
                                *   '<S271>/Constant2'
                                *   '<S292>/Constant2'
                                *   '<S313>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S250>/Saturation'
                                           *   '<S271>/Saturation'
                                           *   '<S292>/Saturation'
                                           *   '<S313>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S250>/Saturation'
                                          *   '<S271>/Saturation'
                                          *   '<S292>/Saturation'
                                          *   '<S313>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S250>/Gain2'
                                         *   '<S271>/Gain2'
                                         *   '<S292>/Gain2'
                                         *   '<S313>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S250>/Saturation1'
                                             *   '<S271>/Saturation1'
                                             *   '<S292>/Saturation1'
                                             *   '<S313>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S250>/Saturation1'
                                            *   '<S271>/Saturation1'
                                            *   '<S292>/Saturation1'
                                            *   '<S313>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S250>/Gain1'
                                        *   '<S271>/Gain1'
                                        *   '<S292>/Gain1'
                                        *   '<S313>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S385>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S385>/Constant1'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S8>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S8>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 45.0;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by:
                                        *   '<S8>/Constant6'
                                        *   '<S14>/Constant26'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S14>/Constant25'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S18>/Constant5'
                                      */
real_T Test_DC_Gain_BackLower = 0.3;   /* Variable: Test_DC_Gain_BackLower
                                        * Referenced by: '<S7>/Gain2'
                                        */
real_T Test_DC_Gain_BackUpper = 0.3;   /* Variable: Test_DC_Gain_BackUpper
                                        * Referenced by: '<S7>/Gain'
                                        */
real_T Test_DC_Gain_BallScrew = 0.2;   /* Variable: Test_DC_Gain_BallScrew
                                        * Referenced by: '<S7>/Gain3'
                                        */
real_T Test_DC_Gain_Front = 0.3;       /* Variable: Test_DC_Gain_Front
                                        * Referenced by: '<S7>/Gain1'
                                        */
real_T Test_DC_Gain_Intake = -1.0;     /* Variable: Test_DC_Gain_Intake
                                        * Referenced by: '<S7>/Gain4'
                                        */
real_T Test_DC_Gain_Shooter = 1.0;     /* Variable: Test_DC_Gain_Shooter
                                        * Referenced by: '<S7>/Gain5'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 12.7;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S330>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S330>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S330>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S330>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S330>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S330>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S386>/Gain'
                                        */
real_T Trap_Angle = -26.5;             /* Variable: Trap_Angle
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 693.42;              /* Variable: Trap_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 1079.5;           /* Variable: Trap_Height
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
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

/* Forward declaration for local functions */
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  real_T *uDLookupTable);

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

/* Function for Chart: '<S8>/Chart_Intake_and_Shooter' */
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  real_T *uDLookupTable)
{
  Code_Gen_Model_B.Note_State_ID = 0.0;
  Code_Gen_Model_B.Intake_Motor_DC = 0.0;
  Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
  Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Intake_AND_Shooter;
    Code_Gen_Model_B.Note_State_ID = 4.1;
    Code_Gen_Model_B.Intake_Motor_DC = -1.0;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Up;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
  } else if (*FixPtRelationalOperator_n) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
    Code_Gen_Model_B.Note_State_ID = 2.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Up;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_DW.timer = 0.02;
  } else if (*FixPtRelationalOperator) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
    Code_Gen_Model_B.Note_State_ID = 1.0;
    Code_Gen_Model_B.Intake_Motor_DC = -1.0;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
  } else if (*FixPtRelationalOperator_k) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
    Code_Gen_Model_B.Note_State_ID = 3.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
    Code_Gen_Model_DW.timer = 0.02;
  } else if (*FixPtRelationalOperator_o) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
    Code_Gen_Model_B.Note_State_ID = 5.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -(*uDLookupTable);
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = *uDLookupTable;
  }
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
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_aj;
  real_T rtb_Add_f1;
  real_T rtb_Add_fn;
  real_T rtb_Add_ik;
  real_T rtb_Add_kv;
  real_T rtb_Add_oh;
  real_T rtb_Chain_DutyCycle;
  real_T rtb_Error;
  real_T rtb_Gain1;
  real_T rtb_Hypot_bl;
  real_T rtb_Init_cv;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_Merge1;
  real_T rtb_Modulation_Drv;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Steer_Joystick_X_Rel_Mod;
  real_T rtb_Subtract1_a1;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_li;
  real_T rtb_Subtract1_m;
  real_T rtb_Subtract1_n;
  real_T rtb_Subtract1_o;
  real_T rtb_Subtract_n;
  real_T rtb_Sum1_li;
  real_T rtb_Sum2_e;
  real_T rtb_Switch;
  real_T rtb_Switch2_bk;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_p;
  real_T rtb_Switch4_g;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_uDLookupTable_l;
  real_T sin_alpha;
  real_T sqrt_input;
  real_T y;
  int32_T i;
  int32_T rtb_Assignment_tmp;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s204_iter;
  uint16_T s229_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T FixPtRelationalOperator_o;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T rtb_AND2_k;
  boolean_T rtb_AND_p2;
  boolean_T rtb_AT_Tag_11_Active;
  boolean_T rtb_AT_Tag_12_Active;
  boolean_T rtb_AT_Tag_13_Active;
  boolean_T rtb_AT_Tag_14_Active;
  boolean_T rtb_AT_Tag_15_Active;
  boolean_T rtb_AT_Tag_16_Active;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_OR7;

  /* Sum: '<S237>/Add1' incorporates:
   *  Constant: '<S237>/Constant3'
   *  Constant: '<S237>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S237>/Math Function'
   *  Sum: '<S16>/Add'
   *  Sum: '<S237>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S129>/Diff'
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
  rtb_Chain_DutyCycle = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S238>/Add1' incorporates:
   *  Constant: '<S238>/Constant3'
   *  Constant: '<S238>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S238>/Math Function'
   *  Sum: '<S16>/Add1'
   *  Sum: '<S238>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S130>/Diff'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S239>/Add1' incorporates:
   *  Constant: '<S239>/Constant3'
   *  Constant: '<S239>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S239>/Math Function'
   *  Sum: '<S16>/Add2'
   *  Sum: '<S239>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product2' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S131>/Diff'
   *  UnitDelay: '<S131>/UD'
   *
   * Block description for '<S131>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S240>/Add1' incorporates:
   *  Constant: '<S240>/Constant3'
   *  Constant: '<S240>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S240>/Math Function'
   *  Sum: '<S16>/Add3'
   *  Sum: '<S240>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product3' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S132>/Diff'
   *  UnitDelay: '<S132>/UD'
   *
   * Block description for '<S132>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_cv = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                 Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S12>/Product7' incorporates:
   *  Fcn: '<S133>/r->x'
   *  Fcn: '<S133>/theta->y'
   *  Fcn: '<S134>/r->x'
   *  Fcn: '<S134>/theta->y'
   *  Fcn: '<S135>/r->x'
   *  Fcn: '<S135>/theta->y'
   *  Fcn: '<S136>/r->x'
   *  Fcn: '<S136>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_Chain_DutyCycle * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Chain_DutyCycle * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_Init_e * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_Init_e * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Init_cv * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Init_cv * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S74>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S10>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S10>/Tapped Delay1'
   *  Sum: '<S10>/Add'
   *  Sum: '<S10>/Add1'
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

  /* Delay: '<S74>/MemoryX' incorporates:
   *  Constant: '<S74>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Sum: '<S6>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   *  UnitDelay: '<S6>/Unit Delay1'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Gain: '<S25>/Gain1' */
  rtb_Gain1 = 0.017453292519943295 * Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Inport: '<Root>/IsRedAlliance'
   */
  if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
    rtb_Switch2_bk = 3.1415926535897931;
  } else {
    rtb_Switch2_bk = 0.0;
  }

  /* Sum: '<S6>/Add' incorporates:
   *  Switch: '<S6>/Switch'
   */
  rtb_Chain_DutyCycle = rtb_Gain1 + rtb_Switch2_bk;

  /* Trigonometry: '<S12>/Trigonometric Function' */
  rtb_Switch2_l = cos(rtb_Chain_DutyCycle);

  /* Trigonometry: '<S12>/Trigonometric Function1' */
  rtb_Init_cv = sin(rtb_Chain_DutyCycle);

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_l;
  rtb_Rotationmatrixfromlocalto_1 = rtb_Init_cv;

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S12>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -rtb_Init_cv;
  rtb_Init_e = rtb_Switch2_l;

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
  rtb_Switch2_l = rtb_Chain_DutyCycle - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S12>/Subtract2' incorporates:
   *  Constant: '<S12>/Constant3'
   *  Gain: '<S12>/Gain7'
   *  Math: '<S12>/Square'
   */
  rtb_Init_cv = 1.0 - ((rtb_Switch2_l * rtb_Switch2_l) * 0.16666666666666666);

  /* Gain: '<S12>/Gain6' */
  rtb_Switch2_l *= 0.5;

  /* Product: '<S12>/Product7' incorporates:
   *  Constant: '<S12>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Switch2_bk = 0.0;
    rtb_Num_Segments = 0;
    for (s204_iter = 0; s204_iter < 8; s204_iter++) {
      rtb_Switch2_bk += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s204_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Switch2_bk;
  }

  /* End of Product: '<S12>/Product7' */

  /* Product: '<S12>/Product6' incorporates:
   *  SignalConversion generated from: '<S12>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S12>/Unary Minus2'
   */
  rtb_Sum1_li = (rtb_Init_cv * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Init_cv = (rtb_Switch2_l * tmp[0]) + (rtb_Init_cv * tmp[1]);

  /* Product: '<S12>/Product6' incorporates:
   *  Concatenate: '<S12>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 * rtb_Sum1_li)
    + (rtb_Rotationmatrixfromlocalto_2 * rtb_Init_cv);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 * rtb_Sum1_li)
    + (rtb_Init_e * rtb_Init_cv);

  /* Outputs for Enabled SubSystem: '<S101>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S127>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S94>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  /* Logic: '<S10>/AND' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S10>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <= KF_Vision_Ambiguity_Thresh)
      && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S125>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S74>/C'
     *  Delay: '<S74>/MemoryX'
     *  Product: '<S127>/Product'
     */
    rtb_Init_e = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Init_e;

    /* Sum: '<S125>/Sum' incorporates:
     *  Constant: '<S74>/D'
     *  Product: '<S125>/C[k]*xhat[k|k-1]'
     *  Product: '<S125>/D[k]*u[k]'
     *  Sum: '<S125>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_2 = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_1 = rtb_Reshapey[0] -
      (rtb_Rotationmatrixfromlocalto_2 + rtb_Init_e);

    /* Product: '<S125>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S74>/C'
     *  Delay: '<S74>/MemoryX'
     *  Product: '<S127>/Product'
     */
    rtb_Init_e = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Init_e;

    /* Sum: '<S125>/Sum' incorporates:
     *  Constant: '<S74>/D'
     *  Product: '<S125>/C[k]*xhat[k|k-1]'
     *  Product: '<S125>/D[k]*u[k]'
     *  Sum: '<S125>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[1] -
      (rtb_Rotationmatrixfromlocalto_2 + rtb_Init_e);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S125>/Product3' incorporates:
     *  Constant: '<S75>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_1) + (-2.0601714451538746E-17 *
      rtb_Rotationmatrixfromlocalto_2);

    /* Sum: '<S127>/Add1' incorporates:
     *  Product: '<S127>/Product'
     */
    rtb_Init_e = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S125>/Product3' incorporates:
     *  Constant: '<S75>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_1) + (0.095124921972504 *
      rtb_Rotationmatrixfromlocalto_2);

    /* Sum: '<S127>/Add1' incorporates:
     *  Product: '<S127>/Product'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S127>/Product2' incorporates:
     *  Constant: '<S75>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Init_e) +
      (5.9896845167210271E-17 * rtb_Rotationmatrixfromlocalto_2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Init_e) +
      (0.095124921972503981 * rtb_Rotationmatrixfromlocalto_2);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S125>/Product3' incorporates:
       *  Outport: '<S125>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S127>/Product2' incorporates:
       *  Outport: '<S127>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S10>/AND' */
  /* End of Outputs for SubSystem: '<S94>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S101>/Enabled Subsystem' */

  /* Sum: '<S101>/Add' incorporates:
   *  Delay: '<S74>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S12>/Accumulator2' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S12>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S10>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S10>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S10>/Switch' */

  /* DiscreteIntegrator: '<S12>/Accumulator' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S12>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S10>/Switch1' incorporates:
   *  Constant: '<S10>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S10>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S10>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Switch: '<S7>/Switch9' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Logic: '<S7>/OR6'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   */
  if ((Code_Gen_Model_U.Joystick_Left_B7 != 0.0) ||
      (Code_Gen_Model_U.Joystick_Right_B7 != 0.0)) {
    /* Switch: '<S7>/Switch9' incorporates:
     *  Constant: '<S7>/Constant10'
     */
    Code_Gen_Model_B.Chain_Hook = 1.0;
  } else {
    /* Switch: '<S7>/Switch9' incorporates:
     *  Constant: '<S7>/Constant12'
     *  Switch: '<S7>/Switch10'
     */
    Code_Gen_Model_B.Chain_Hook = 0.0;
  }

  /* End of Switch: '<S7>/Switch9' */

  /* SignalConversion: '<S7>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S7>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S7>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S7>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* SignalConversion: '<S7>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S7>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S37>/Compare' incorporates:
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S38>/Compare' incorporates:
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S48>/Constant'
   *  Constant: '<S49>/Constant'
   *  Constant: '<S52>/Constant'
   *  Constant: '<S53>/Constant'
   *  Constant: '<S54>/Constant'
   *  Constant: '<S55>/Constant'
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Inport: '<Root>/Gamepad_B4_Y'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Inport: '<Root>/Joystick_Right_B14'
   *  Logic: '<S7>/OR1'
   *  Logic: '<S7>/OR2'
   *  Logic: '<S7>/OR8'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   *  RelationalOperator: '<S53>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  Switch: '<S7>/Switch1'
   *  Switch: '<S7>/Switch11'
   *  Switch: '<S7>/Switch2'
   *  Switch: '<S7>/Switch3'
   */
  if (Code_Gen_Model_U.Joystick_Right_B1 != 0.0) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_B4_Y != 0.0) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant1'
     *  Switch: '<S7>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant2'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S7>/Constant3'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else if ((Code_Gen_Model_U.Gamepad_B1_A != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B14 != 0.0)) {
    /* Switch: '<S7>/Switch11' incorporates:
     *  Constant: '<S7>/Constant13'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch2'
     *  Switch: '<S7>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 6.0;
  } else {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant4'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch11'
     *  Switch: '<S7>/Switch2'
     *  Switch: '<S7>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 0.0;
  }

  /* End of Switch: '<S7>/Switch' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Switch2_bk = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Switch2_bk)) || (rtIsInf(rtb_Switch2_bk))) {
    rtb_Switch2_bk = 0.0;
  } else {
    rtb_Switch2_bk = fmod(rtb_Switch2_bk, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_Switch2_bk < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Switch2_bk)))))) : ((int32_T)((uint8_T)
    rtb_Switch2_bk)));

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* Logic: '<S7>/OR7' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S32>/Constant'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  UnitDelay: '<S13>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S7>/Switch4' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S46>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Inport: '<Root>/Joystick_Left_B10'
   *  Inport: '<Root>/Joystick_Right_B10'
   *  Logic: '<S7>/OR'
   *  Logic: '<S7>/OR3'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  Switch: '<S7>/Switch5'
   *  Switch: '<S7>/Switch6'
   *  Switch: '<S7>/Switch7'
   *  Switch: '<S7>/Switch8'
   *  UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((((int32_T)rtb_OR7) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE)) ||
      (Code_Gen_Model_U.Gamepad_Stick_Left_Y <= Gamepad_Stick_Neg_Threshold)) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Switch: '<S7>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <=
             Gamepad_Stick_Neg_Threshold) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant7'
     *  Switch: '<S7>/Switch5'
     *  Switch: '<S7>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant8'
     *  Switch: '<S7>/Switch5'
     *  Switch: '<S7>/Switch6'
     *  Switch: '<S7>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  } else if ((Code_Gen_Model_U.Joystick_Left_B10 != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B10 != 0.0)) {
    /* Switch: '<S7>/Switch8' incorporates:
     *  Constant: '<S7>/Constant9'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch5'
     *  Switch: '<S7>/Switch6'
     *  Switch: '<S7>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 4.0;
  }

  /* End of Switch: '<S7>/Switch4' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Inport: '<Root>/AT_Tag_4_Found'
   *  Inport: '<Root>/AT_Tag_7_Found'
   *  Switch: '<S5>/Switch1'
   */
  if (Code_Gen_Model_U.AT_Tag_4_Found != 0.0) {
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/Constant1'
     *  Constant: '<S5>/Constant9'
     *  Math: '<S5>/Hypot'
     *  Sum: '<S5>/Subtract'
     *  Sum: '<S5>/Subtract1'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_4_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_4_Coordinate_Y);
  } else if (Code_Gen_Model_U.AT_Tag_7_Found != 0.0) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant2'
     *  Constant: '<S5>/Constant3'
     *  Math: '<S5>/Hypot1'
     *  Sum: '<S5>/Subtract2'
     *  Sum: '<S5>/Subtract3'
     *  Switch: '<S5>/Switch'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_7_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_7_Coordinate_Y);
  } else {
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/Constant'
     *  Switch: '<S5>/Switch1'
     */
    Code_Gen_Model_B.Distance_Speaker = 0.0;
  }

  /* End of Switch: '<S5>/Switch' */

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Switch2_bk = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Switch2_bk)) || (rtIsInf(rtb_Switch2_bk))) {
    rtb_Switch2_bk = 0.0;
  } else {
    rtb_Switch2_bk = fmod(rtb_Switch2_bk, 4.294967296E+9);
  }

  switch ((rtb_Switch2_bk < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Switch2_bk)))) :
          ((int32_T)((uint32_T)rtb_Switch2_bk))) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* SignalConversion generated from: '<S4>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S4>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_Sum1_li = 0.0;

    /* Merge: '<S11>/Merge1' incorporates:
     *  Constant: '<S4>/Constant1'
     *  SignalConversion generated from: '<S4>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S11>/Merge2' incorporates:
     *  Constant: '<S4>/Constant2'
     *  SignalConversion generated from: '<S4>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S11>/Merge3' incorporates:
     *  Constant: '<S4>/Constant3'
     *  SignalConversion generated from: '<S4>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S11>/Merge4' incorporates:
     *  Constant: '<S4>/Constant4'
     *  SignalConversion generated from: '<S4>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S4>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S4>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S4>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S4>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S11>/Merge7' incorporates:
     *  Constant: '<S4>/Constant7'
     *  SignalConversion generated from: '<S4>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S11>/Merge9' incorporates:
     *  Constant: '<S4>/Constant9'
     *  SignalConversion generated from: '<S4>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S11>/Merge10' incorporates:
     *  Constant: '<S4>/Constant10'
     *  SignalConversion generated from: '<S4>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S11>/Merge11' incorporates:
     *  Constant: '<S4>/Constant11'
     *  SignalConversion generated from: '<S4>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Outport: '<Root>/Chain_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant17'
     *  SignalConversion generated from: '<S4>/Chain_DutyCycle'
     */
    Code_Gen_Model_Y.Chain_DutyCycle = 0.0;

    /* Merge: '<S11>/Merge12' incorporates:
     *  SignalConversion generated from: '<S4>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

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
     *  Merge: '<S11>/Merge8'
     */
    switch ((int32_T)Spline_Ref_Poses_switch_num) {
     case 1:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant4_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S11>/Merge9' incorporates:
       *  Constant: '<S3>/Constant4'
       *  Constant: '<S3>/Constant9'
       *  Merge: '<S11>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 3.0;
      break;

     case 2:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant11_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S11>/Merge9' incorporates:
       *  Constant: '<S3>/Constant11'
       *  Constant: '<S3>/Constant14'
       *  Merge: '<S11>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 6.0;
      break;

     default:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant12_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S11>/Merge9' incorporates:
       *  Constant: '<S3>/Constant12'
       *  Constant: '<S3>/Constant15'
       *  Merge: '<S11>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 4.0;
      break;
    }

    /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

    /* SignalConversion generated from: '<S3>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rtb_Sum1_li = 0.0;

    /* Merge: '<S11>/Merge1' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S11>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S11>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S11>/Merge4' incorporates:
     *  Constant: '<S3>/Constant8'
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* Merge: '<S11>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S11>/Merge11' incorporates:
     *  Constant: '<S3>/Constant6'
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S11>/Merge12' incorporates:
     *  Constant: '<S3>/Constant13'
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Outport: '<Root>/Chain_DutyCycle' incorporates:
     *  Constant: '<S3>/Constant17'
     *  SignalConversion generated from: '<S3>/Chain_DutyCycle'
     */
    Code_Gen_Model_Y.Chain_DutyCycle = 0.0;

    /* RelationalOperator: '<S24>/Compare' incorporates:
     *  Constant: '<S24>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     */
    Code_Gen_Model_B.Line_Sensor_Boolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range >= FloorDistance);

    /* Logic: '<S3>/NOT' incorporates:
     *  Logic: '<S3>/NOT1'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* Merge: '<S11>/Merge7' incorporates:
     *  Logic: '<S3>/NOT'
     */
    Code_Gen_Model_B.Spline_Enable = rtb_Is_Absolute_Steering;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* SignalConversion generated from: '<S18>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* Lookup_n-D: '<S383>/1-D Lookup Table' incorporates:
     *  Switch: '<S5>/Switch'
     */
    rtb_Rotationmatrixfromlocalto_1 = look1_binlcpw
      (Code_Gen_Model_B.Distance_Speaker,
       Code_Gen_Model_ConstP.uDLookupTable_bp01Data_g,
       Code_Gen_Model_ConstP.uDLookupTable_tableData_j, 8U);

    /* Logic: '<S383>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S383>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S383>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S383>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S383>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S383>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S383>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S383>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S383>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S383>/Logical Operator'
     *  Logic: '<S383>/Logical Operator1'
     *  Switch: '<S383>/Switch10'
     *  Switch: '<S383>/Switch11'
     *  Switch: '<S383>/Switch3'
     *  Switch: '<S383>/Switch4'
     *  Switch: '<S383>/Switch5'
     *  Switch: '<S383>/Switch6'
     *  Switch: '<S383>/Switch7'
     *  Switch: '<S383>/Switch8'
     *  Switch: '<S383>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S383>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S383>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Rotationmatrixfromlocalto_1 +
        Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S383>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S383>/Add8'
       *  Switch: '<S383>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Rotationmatrixfromlocalto_1 +
        Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S383>/Switch4' incorporates:
       *  Constant: '<S383>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S383>/Add7'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S383>/Switch5' incorporates:
       *  Constant: '<S383>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S383>/Add6'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S383>/Switch6' incorporates:
       *  Constant: '<S383>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S383>/Add5'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S383>/Switch7' incorporates:
       *  Constant: '<S383>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S383>/Add4'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       *  Switch: '<S383>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S383>/Switch8' incorporates:
       *  Constant: '<S383>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S383>/Add3'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       *  Switch: '<S383>/Switch6'
       *  Switch: '<S383>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S383>/Switch9' incorporates:
       *  Constant: '<S383>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S383>/Add2'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       *  Switch: '<S383>/Switch6'
       *  Switch: '<S383>/Switch7'
       *  Switch: '<S383>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S383>/Switch10' incorporates:
       *  Constant: '<S383>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S383>/Add1'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       *  Switch: '<S383>/Switch6'
       *  Switch: '<S383>/Switch7'
       *  Switch: '<S383>/Switch8'
       *  Switch: '<S383>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S383>/Switch11' incorporates:
       *  Constant: '<S383>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S383>/Add'
       *  Switch: '<S383>/Switch10'
       *  Switch: '<S383>/Switch2'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       *  Switch: '<S383>/Switch6'
       *  Switch: '<S383>/Switch7'
       *  Switch: '<S383>/Switch8'
       *  Switch: '<S383>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S383>/Switch2' incorporates:
       *  Constant: '<S383>/Constant'
       *  Switch: '<S383>/Switch10'
       *  Switch: '<S383>/Switch11'
       *  Switch: '<S383>/Switch3'
       *  Switch: '<S383>/Switch4'
       *  Switch: '<S383>/Switch5'
       *  Switch: '<S383>/Switch6'
       *  Switch: '<S383>/Switch7'
       *  Switch: '<S383>/Switch8'
       *  Switch: '<S383>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S383>/Switch2' */

    /* Switch: '<S387>/Switch' incorporates:
     *  Constant: '<S387>/Constant'
     *  Constant: '<S387>/Constant1'
     *  Constant: '<S387>/Constant2'
     *  Math: '<S387>/Hypot'
     *  RelationalOperator: '<S387>/GreaterThan'
     *  Switch: '<S387>/Switch1'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_X;
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Steer_Joystick_Y;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_Rotationmatrixfromlocalto_2 = 0.0;
    }

    /* End of Switch: '<S387>/Switch' */

    /* Logic: '<S385>/AND' incorporates:
     *  Constant: '<S388>/Constant'
     *  Constant: '<S389>/Constant'
     *  Logic: '<S395>/AND'
     *  RelationalOperator: '<S388>/Compare'
     *  RelationalOperator: '<S389>/Compare'
     */
    rtb_AND_p2 = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Rotationmatrixfromlocalto_2
      == 0.0));

    /* Logic: '<S385>/AND2' incorporates:
     *  RelationalOperator: '<S390>/FixPt Relational Operator'
     *  RelationalOperator: '<S391>/FixPt Relational Operator'
     *  RelationalOperator: '<S392>/FixPt Relational Operator'
     *  RelationalOperator: '<S393>/FixPt Relational Operator'
     *  UnitDelay: '<S390>/Delay Input1'
     *  UnitDelay: '<S391>/Delay Input1'
     *  UnitDelay: '<S392>/Delay Input1'
     *  UnitDelay: '<S393>/Delay Input1'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S391>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S392>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S385>/Constant1'
     *  Constant: '<S385>/Constant17'
     *  Constant: '<S385>/Constant2'
     *  Logic: '<S385>/AND'
     *  Logic: '<S385>/AND4'
     *  Logic: '<S385>/NOT1'
     *  Product: '<S385>/Product1'
     *  Product: '<S385>/Product2'
     *  Sum: '<S385>/Add'
     *  Sum: '<S385>/Sum'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    if (rtb_AND_p2 && (!rtb_AND2_k)) {
      rtb_Rotationmatrixfromlocalto_1 = ((Code_Gen_Model_B.Steer_Joystick_Z *
        Steering_Twist_Gain) + (Code_Gen_Model_B.AT_Error_Yaw *
        AT_Yaw_Control_Gain)) + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Rotationmatrixfromlocalto_1 = 0.0;
    }

    /* End of Switch: '<S385>/Switch1' */

    /* Switch: '<S395>/Switch1' incorporates:
     *  Switch: '<S395>/Switch2'
     *  UnitDelay: '<S395>/Unit Delay'
     *  UnitDelay: '<S395>/Unit Delay1'
     */
    if (rtb_AND_p2) {
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Init_e = rtb_Rotationmatrixfromlocalto_2;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* Logic: '<S385>/AND1' incorporates:
     *  Logic: '<S385>/AND'
     *  Logic: '<S385>/AND3'
     *  UnitDelay: '<S385>/Unit Delay2'
     */
    rtb_AND_p2 = (rtb_AND_p2 && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S385>/Switch4' incorporates:
     *  Constant: '<S385>/Constant5'
     *  Switch: '<S385>/Switch5'
     *  Switch: '<S385>/Switch6'
     *  Switch: '<S385>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S385>/Switch5' incorporates:
       *  Constant: '<S385>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S385>/Switch6' incorporates:
       *  Constant: '<S385>/Constant7'
       *  Switch: '<S385>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S385>/Switch7' incorporates:
       *  Constant: '<S385>/Constant8'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S385>/Switch6' incorporates:
       *  Switch: '<S385>/Switch5'
       *  UnitDelay: '<S385>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S385>/Switch4' */

    /* Switch: '<S385>/Switch3' incorporates:
     *  Logic: '<S385>/NOT'
     *  Trigonometry: '<S385>/Atan2'
     */
    if (!rtb_AND_p2) {
      rtb_Switch2_bk = rt_atan2d_snf(rtb_Init_e, rtb_UnitDelay1_gi);
    } else {
      rtb_Switch2_bk = rtb_Switch4_g;
    }

    /* Merge: '<S11>/Merge1' incorporates:
     *  Sum: '<S385>/Sum1'
     *  Switch: '<S385>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_Switch2_bk +
      rtb_Rotationmatrixfromlocalto_1;

    /* RelationalOperator: '<S398>/Compare' incorporates:
     *  Constant: '<S398>/Constant'
     */
    rtb_AND2_k = (rtb_UnitDelay1_gi < 0.0);

    /* Switch: '<S394>/Switch' incorporates:
     *  Constant: '<S394>/Constant'
     *  Constant: '<S394>/Constant1'
     *  Constant: '<S396>/Constant'
     *  Constant: '<S397>/Constant'
     *  Logic: '<S394>/Logical Operator'
     *  RelationalOperator: '<S396>/Compare'
     *  RelationalOperator: '<S397>/Compare'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (((rtb_Init_e < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0)) &&
        rtb_AND2_k) {
      rtb_Switch2_bk = 6.2831853071795862;
    } else {
      rtb_Switch2_bk = 0.0;
    }

    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S394>/Constant2'
     *  Constant: '<S394>/Constant3'
     *  Constant: '<S399>/Constant'
     *  Constant: '<S400>/Constant'
     *  Logic: '<S394>/Logical Operator1'
     *  RelationalOperator: '<S399>/Compare'
     *  RelationalOperator: '<S400>/Compare'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Init_e >= 0.0)) &&
        rtb_AND2_k) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S394>/Sum1' incorporates:
     *  Switch: '<S394>/Switch'
     *  Switch: '<S394>/Switch1'
     *  UnitDelay: '<S394>/Unit Delay1'
     */
    rtb_Sum1_li = (rtb_Switch2_bk + rtb_Add_ik) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S383>/Switch23' incorporates:
     *  Logic: '<S383>/AND10'
     *  Logic: '<S383>/AND11'
     *  Logic: '<S383>/AND12'
     *  Logic: '<S383>/AND13'
     *  Logic: '<S383>/AND14'
     *  Logic: '<S383>/AND15'
     *  Logic: '<S383>/AND2'
     *  Logic: '<S383>/AND3'
     *  Switch: '<S383>/Switch1'
     *  Switch: '<S383>/Switch12'
     *  Switch: '<S383>/Switch13'
     *  Switch: '<S383>/Switch14'
     *  Switch: '<S383>/Switch15'
     *  Switch: '<S383>/Switch16'
     *  Switch: '<S383>/Switch17'
     *  Switch: '<S383>/Switch19'
     *  Switch: '<S383>/Switch20'
     *  Switch: '<S383>/Switch21'
     *  Switch: '<S383>/Switch22'
     *  Switch: '<S383>/Switch24'
     *  Switch: '<S383>/Switch25'
     *  Switch: '<S383>/Switch26'
     */
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S383>/Switch23' incorporates:
       *  Constant: '<S383>/Constant28'
       *  Sum: '<S383>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch15' incorporates:
       *  Constant: '<S383>/Constant9'
       *  Sum: '<S383>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S383>/Switch23' incorporates:
       *  Constant: '<S383>/Constant27'
       *  Sum: '<S383>/Add22'
       *  Switch: '<S383>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch15' incorporates:
       *  Constant: '<S383>/Constant5'
       *  Sum: '<S383>/Add16'
       *  Switch: '<S383>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S383>/Switch23' incorporates:
       *  Constant: '<S383>/Constant26'
       *  Sum: '<S383>/Add12'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch15' incorporates:
       *  Constant: '<S383>/Constant4'
       *  Sum: '<S383>/Add10'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S383>/Switch23' incorporates:
       *  Constant: '<S383>/Constant3'
       *  Sum: '<S383>/Add13'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch20'
       *  Switch: '<S383>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch15' incorporates:
       *  Constant: '<S383>/Constant17'
       *  Sum: '<S383>/Add11'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch12'
       *  Switch: '<S383>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S383>/Switch23' incorporates:
       *  Constant: '<S383>/Constant21'
       *  Sum: '<S383>/Add20'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch20'
       *  Switch: '<S383>/Switch21'
       *  Switch: '<S383>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch15' incorporates:
       *  Constant: '<S383>/Constant18'
       *  Sum: '<S383>/Add14'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch12'
       *  Switch: '<S383>/Switch13'
       *  Switch: '<S383>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S383>/Switch22' incorporates:
       *  Constant: '<S383>/Constant23'
       *  Sum: '<S383>/Add21'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch20'
       *  Switch: '<S383>/Switch21'
       *  Switch: '<S383>/Switch23'
       *  Switch: '<S383>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch14' incorporates:
       *  Constant: '<S383>/Constant19'
       *  Sum: '<S383>/Add15'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch12'
       *  Switch: '<S383>/Switch13'
       *  Switch: '<S383>/Switch15'
       *  Switch: '<S383>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S383>/Switch25' incorporates:
       *  Constant: '<S383>/Constant24'
       *  Sum: '<S383>/Add24'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch20'
       *  Switch: '<S383>/Switch21'
       *  Switch: '<S383>/Switch22'
       *  Switch: '<S383>/Switch23'
       *  Switch: '<S383>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch17' incorporates:
       *  Constant: '<S383>/Constant20'
       *  Sum: '<S383>/Add18'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch12'
       *  Switch: '<S383>/Switch13'
       *  Switch: '<S383>/Switch14'
       *  Switch: '<S383>/Switch15'
       *  Switch: '<S383>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S383>/Switch26' incorporates:
       *  Constant: '<S383>/Constant25'
       *  Sum: '<S383>/Add25'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch20'
       *  Switch: '<S383>/Switch21'
       *  Switch: '<S383>/Switch22'
       *  Switch: '<S383>/Switch23'
       *  Switch: '<S383>/Switch24'
       *  Switch: '<S383>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S383>/Switch18' incorporates:
       *  Constant: '<S383>/Constant22'
       *  Sum: '<S383>/Add19'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch12'
       *  Switch: '<S383>/Switch13'
       *  Switch: '<S383>/Switch14'
       *  Switch: '<S383>/Switch15'
       *  Switch: '<S383>/Switch16'
       *  Switch: '<S383>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;
    } else {
      /* Switch: '<S383>/Switch23' incorporates:
       *  Constant: '<S383>/Constant2'
       *  Switch: '<S383>/Switch19'
       *  Switch: '<S383>/Switch20'
       *  Switch: '<S383>/Switch21'
       *  Switch: '<S383>/Switch22'
       *  Switch: '<S383>/Switch24'
       *  Switch: '<S383>/Switch25'
       *  Switch: '<S383>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;

      /* Switch: '<S383>/Switch15' incorporates:
       *  Constant: '<S383>/Constant1'
       *  Switch: '<S383>/Switch1'
       *  Switch: '<S383>/Switch12'
       *  Switch: '<S383>/Switch13'
       *  Switch: '<S383>/Switch14'
       *  Switch: '<S383>/Switch16'
       *  Switch: '<S383>/Switch17'
       *  Switch: '<S383>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;
    }

    /* End of Switch: '<S383>/Switch23' */

    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S411>/Constant'
     *  Constant: '<S412>/Constant'
     *  Logic: '<S406>/AND'
     *  RelationalOperator: '<S411>/Compare'
     *  RelationalOperator: '<S412>/Compare'
     *  Switch: '<S406>/Switch2'
     *  UnitDelay: '<S406>/Unit Delay'
     *  UnitDelay: '<S406>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_p = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_p = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S406>/Switch1' */

    /* Lookup_n-D: '<S386>/Modulation_Drv' incorporates:
     *  Math: '<S386>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S404>/Compare' incorporates:
     *  Constant: '<S404>/Constant'
     */
    rtb_AT_Tag_11_Active = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S386>/Logical Operator' incorporates:
     *  Constant: '<S405>/Constant'
     *  RelationalOperator: '<S405>/Compare'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_AT_Tag_11_Active);

    /* Switch: '<S386>/Switch1' incorporates:
     *  Switch: '<S386>/Switch4'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S386>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S11>/Merge3' incorporates:
         *  Constant: '<S386>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = 1.5707963267948966;
      } else {
        /* Merge: '<S11>/Merge3' incorporates:
         *  Constant: '<S386>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S386>/Switch5' */
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S386>/Switch6' incorporates:
       *  Constant: '<S386>/Constant'
       *  Constant: '<S386>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S386>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        rtb_Switch2_bk = 3.1415926535897931;
      } else {
        rtb_Switch2_bk = 0.0;
      }

      /* Merge: '<S11>/Merge3' incorporates:
       *  Sum: '<S386>/Add1'
       *  Switch: '<S386>/Switch4'
       *  Switch: '<S386>/Switch6'
       *  Trigonometry: '<S386>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) +
        rtb_Switch2_bk;
    } else {
      /* Merge: '<S11>/Merge3' incorporates:
       *  Switch: '<S386>/Switch4'
       *  Trigonometry: '<S386>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_p);
    }

    /* End of Switch: '<S386>/Switch1' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S386>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = Code_Gen_Model_U.Is_Absolute_Translation;
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_AT_Tag_12_Active;
    }

    /* End of Switch: '<S18>/Switch' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = ((!(TEST_Swerve_Mode_Override_Flag != 0.0)) ||
      (Code_Gen_Model_U.Is_Absolute_Steering));

    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S403>/Constant'
     *  Constant: '<S403>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_High_Speed;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S403>/Switch1' */

    /* Switch: '<S410>/Init' incorporates:
     *  UnitDelay: '<S410>/FixPt Unit Delay1'
     *  UnitDelay: '<S410>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Rotationmatrixfromlocalto_2 = rtb_Steer_Joystick_X_Rel_Mod;
    } else {
      rtb_Rotationmatrixfromlocalto_2 =
        Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S410>/Init' */

    /* Sum: '<S408>/Sum1' */
    rtb_Steer_Joystick_X_Rel_Mod -= rtb_Rotationmatrixfromlocalto_2;

    /* Switch: '<S409>/Switch2' incorporates:
     *  Constant: '<S407>/Constant1'
     *  Constant: '<S407>/Constant3'
     *  RelationalOperator: '<S409>/LowerRelop1'
     *  RelationalOperator: '<S409>/UpperRelop'
     *  Switch: '<S409>/Switch'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod > Boost_Trigger_Increasing_Limit) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Steer_Joystick_X_Rel_Mod < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S409>/Switch' incorporates:
       *  Constant: '<S407>/Constant1'
       */
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S409>/Switch2' */

    /* Sum: '<S408>/Sum' */
    rtb_Rotationmatrixfromlocalto_2 += rtb_Steer_Joystick_X_Rel_Mod;

    /* Switch: '<S386>/Switch' incorporates:
     *  Switch: '<S386>/Switch2'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S386>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_AT_Tag_11_Active) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S386>/Gain2'
       *  Math: '<S386>/Magnitude1'
       *  Switch: '<S386>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S403>/Product' incorporates:
       *  Switch: '<S386>/Switch2'
       */
      cos_alpha = rtb_Modulation_Drv * rtb_Rotationmatrixfromlocalto_2;

      /* Saturate: '<S403>/Saturation' incorporates:
       *  Switch: '<S386>/Switch2'
       */
      if (cos_alpha > Boost_Trigger_High_Speed) {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (cos_alpha < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = cos_alpha;
      }

      /* End of Saturate: '<S403>/Saturation' */
    }

    /* End of Switch: '<S386>/Switch' */

    /* Merge: '<S11>/Merge7' incorporates:
     *  Constant: '<S18>/Constant3'
     *  SignalConversion generated from: '<S18>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S11>/Merge9' incorporates:
     *  Constant: '<S18>/Constant9'
     *  SignalConversion generated from: '<S18>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S11>/Merge10' incorporates:
     *  Constant: '<S18>/Constant1'
     *  SignalConversion generated from: '<S18>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S11>/Merge2' incorporates:
     *  Constant: '<S385>/Constant'
     *  Lookup_n-D: '<S385>/Modulation_Str_Y_Rel'
     *  Product: '<S385>/Product'
     *  SignalConversion: '<S7>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Merge: '<S11>/Merge11' incorporates:
     *  SignalConversion generated from: '<S18>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.State_Request_Intake_Shooter;

    /* Merge: '<S11>/Merge12' incorporates:
     *  SignalConversion generated from: '<S18>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* Outport: '<Root>/Chain_DutyCycle' incorporates:
     *  SignalConversion: '<S18>/Signal Copy'
     */
    Code_Gen_Model_Y.Chain_DutyCycle = Code_Gen_Model_B.Chain_Hook;

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Rotationmatrixfromlocalto_1;

    /* Update for UnitDelay: '<S390>/Delay Input1'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S391>/Delay Input1'
     *
     * Block description for '<S391>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S392>/Delay Input1'
     *
     * Block description for '<S392>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S393>/Delay Input1'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S395>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Init_e;

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S385>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND_p2;

    /* Update for UnitDelay: '<S385>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Init_e;

    /* Update for UnitDelay: '<S394>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_Sum1_li;

    /* Update for UnitDelay: '<S406>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S406>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_p;

    /* Update for UnitDelay: '<S410>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S410>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S410>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Rotationmatrixfromlocalto_2;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* SignalConversion generated from: '<S19>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S19>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S19>/Constant'
     */
    rtb_Sum1_li = 0.0;

    /* Merge: '<S11>/Merge1' incorporates:
     *  Constant: '<S19>/Constant1'
     *  SignalConversion generated from: '<S19>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S11>/Merge2' incorporates:
     *  Constant: '<S19>/Constant2'
     *  SignalConversion generated from: '<S19>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S11>/Merge3' incorporates:
     *  Constant: '<S19>/Constant3'
     *  SignalConversion generated from: '<S19>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S11>/Merge4' incorporates:
     *  Constant: '<S19>/Constant4'
     *  SignalConversion generated from: '<S19>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S19>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S19>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S19>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S19>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S11>/Merge7' incorporates:
     *  Constant: '<S19>/Constant7'
     *  SignalConversion generated from: '<S19>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S11>/Merge9' incorporates:
     *  Constant: '<S19>/Constant9'
     *  SignalConversion generated from: '<S19>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S11>/Merge10' incorporates:
     *  Constant: '<S19>/Constant12'
     *  SignalConversion generated from: '<S19>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Merge: '<S11>/Merge11' incorporates:
     *  Constant: '<S19>/Constant10'
     *  SignalConversion generated from: '<S19>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S11>/Merge12' incorporates:
     *  Constant: '<S19>/Constant11'
     *  SignalConversion generated from: '<S19>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Outport: '<Root>/Chain_DutyCycle' incorporates:
     *  SignalConversion: '<S19>/Signal Copy'
     */
    Code_Gen_Model_Y.Chain_DutyCycle = Code_Gen_Model_B.Chain_Hook;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S15>/If' incorporates:
   *  Constant: '<S229>/Constant'
   *  Logic: '<S229>/AND'
   *  MATLAB Function: '<S179>/Find closest index to curve'
   *  Product: '<S229>/Product'
   *  RelationalOperator: '<S229>/Relational Operator'
   *  RelationalOperator: '<S229>/Relational Operator1'
   *  Selector: '<S229>/Selector'
   *  Selector: '<S229>/Selector1'
   *  Selector: '<S230>/Selector'
   *  Sum: '<S229>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S182>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S185>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S187>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S182>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S15>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S177>/Action Port'
       */
      /* InitializeConditions for If: '<S15>/If' incorporates:
       *  UnitDelay: '<S177>/Unit Delay'
       *  UnitDelay: '<S178>/Unit Delay'
       *  UnitDelay: '<S180>/Unit Delay'
       *  UnitDelay: '<S180>/Unit Delay1'
       *  UnitDelay: '<S230>/Unit Delay'
       *  UnitDelay: '<S230>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S15>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S15>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S177>/Action Port'
     */
    /* Selector: '<S178>/Selector1' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S178>/Selector1' */

    /* Lookup_n-D: '<S177>/Capture Radius' incorporates:
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_1 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S178>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S178>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S182>/If' incorporates:
     *  RelationalOperator: '<S182>/ '
     *  UnitDelay: '<S178>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S185>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S187>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S182>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S185>/Action Port'
       */
      /* InitializeConditions for If: '<S182>/If' incorporates:
       *  UnitDelay: '<S185>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S182>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S182>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S185>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S185>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S188>/Action Port'
       */
      /* If: '<S185>/If' incorporates:
       *  Selector: '<S178>/Selector1'
       *  Selector: '<S185>/Selector'
       *  Selector: '<S188>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S185>/Increment_If_Rectangle_Check' */

      /* Sum: '<S185>/Minus' incorporates:
       *  Concatenate: '<S178>/Matrix Concatenate2'
       *  Selector: '<S185>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S185>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S188>/Action Port'
       */
      /* If: '<S185>/If' incorporates:
       *  Selector: '<S178>/Selector1'
       *  Selector: '<S185>/Selector'
       *  Selector: '<S188>/Selector'
       *  Sum: '<S185>/Minus'
       */
      rtb_Sum1_li = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S185>/Increment_If_Rectangle_Check' */

      /* Sum: '<S185>/Minus' incorporates:
       *  Concatenate: '<S178>/Matrix Concatenate2'
       *  Selector: '<S185>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Sum1_li;

      /* Math: '<S185>/Hypot' */
      rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S185>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S185>/Switch' incorporates:
       *  Logic: '<S185>/AND'
       *  Logic: '<S185>/OR'
       *  RelationalOperator: '<S185>/Relational Operator'
       *  UnitDelay: '<S185>/Unit Delay'
       */
      rtb_AND_p2 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Init_e <=
        rtb_Rotationmatrixfromlocalto_1) && rtb_Is_Absolute_Translation_g));

      /* If: '<S185>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_AND_p2) {
        if (!rtb_Is_Absolute_Translation_g) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S187>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S185>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S187>/Action Port'
         */
        /* If: '<S187>/If' incorporates:
         *  RelationalOperator: '<S187>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S187>/Is_Last_Point' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          /* InitializeConditions for If: '<S187>/If' incorporates:
           *  UnitDelay: '<S190>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S187>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S187>/Is_Last_Point' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          /* Switch: '<S190>/Switch' incorporates:
           *  Constant: '<S192>/Constant'
           *  Logic: '<S190>/OR'
           *  RelationalOperator: '<S192>/Compare'
           *  UnitDelay: '<S190>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Init_e <= Spline_Stop_Radius));

          /* If: '<S190>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S190>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S193>/Action Port'
             */
            /* Merge: '<S182>/Merge2' incorporates:
             *  Constant: '<S193>/Constant'
             *  SignalConversion generated from: '<S193>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S193>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S193>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S190>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S190>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S194>/Action Port'
             */
            /* Merge: '<S182>/Merge2' incorporates:
             *  Constant: '<S194>/Constant'
             *  SignalConversion generated from: '<S194>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S194>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S194>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S190>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S190>/If' */

          /* Merge: '<S182>/Merge4' incorporates:
           *  SignalConversion: '<S190>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S190>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S187>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S187>/Increment_Search' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          /* Merge: '<S182>/Merge2' incorporates:
           *  Constant: '<S189>/Constant'
           *  SignalConversion generated from: '<S189>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S189>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S189>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S182>/Merge4' incorporates:
           *  Constant: '<S191>/FixPt Constant'
           *  SignalConversion: '<S189>/Signal Copy'
           *  Sum: '<S191>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S187>/Increment_Search' */
        }

        /* End of If: '<S187>/If' */
        /* End of Outputs for SubSystem: '<S185>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S185>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S188>/Action Port'
         */
        /* Sum: '<S195>/FixPt Sum1' incorporates:
         *  Constant: '<S195>/FixPt Constant'
         */
        rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S188>/Selector1' incorporates:
         *  Selector: '<S178>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Init_e) - 1];

        /* Sum: '<S196>/Subtract' incorporates:
         *  Selector: '<S188>/Selector1'
         *  Sum: '<S196>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch4_g - rtb_Switch2_l;

        /* Selector: '<S188>/Selector1' incorporates:
         *  Selector: '<S178>/Selector1'
         */
        rtb_UnitDelay1_gi = rtb_Ref_Poses[((int32_T)rtb_Init_e) + 5];

        /* Sum: '<S196>/Subtract' incorporates:
         *  Selector: '<S188>/Selector1'
         *  Sum: '<S196>/Minus1'
         */
        rtb_Minus_n[1] = rtb_UnitDelay1_gi - rtb_Sum1_li;

        /* Math: '<S196>/Hypot' */
        rtb_Rotationmatrixfromlocalto_2 = rt_hypotd_snf(rtb_Minus_n[0],
          rtb_Minus_n[1]);

        /* Product: '<S196>/Divide' */
        rtb_Init_e = rtb_Minus_n[1];

        /* UnaryMinus: '<S196>/Unary Minus' */
        rtb_Init_cv = rtb_Minus_n[0];

        /* Product: '<S196>/Product' incorporates:
         *  Product: '<S196>/Divide'
         *  UnaryMinus: '<S196>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Init_e / rtb_Rotationmatrixfromlocalto_2) *
          rtb_Rotationmatrixfromlocalto_1;
        rtb_Minus_n[1] = ((-rtb_Init_cv) / rtb_Rotationmatrixfromlocalto_2) *
          rtb_Rotationmatrixfromlocalto_1;

        /* Sum: '<S196>/Add1' incorporates:
         *  Sum: '<S196>/Add2'
         *  Sum: '<S196>/Minus'
         */
        rtb_Init_cv = rtb_Switch4_g - rtb_Minus_n[0];

        /* Sum: '<S196>/Minus4' incorporates:
         *  Sum: '<S196>/Add2'
         *  Sum: '<S196>/Minus'
         */
        rtb_Switch4_g = (rtb_Switch4_g + rtb_Minus_n[0]) - rtb_Init_cv;

        /* Sum: '<S196>/Minus5' incorporates:
         *  Concatenate: '<S178>/Matrix Concatenate2'
         *  Sum: '<S196>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Init_cv;

        /* Sum: '<S196>/Add' incorporates:
         *  Sum: '<S196>/Add2'
         *  Sum: '<S196>/Minus1'
         */
        rtb_Init_e = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S196>/Minus' incorporates:
         *  Sum: '<S196>/Minus1'
         */
        rtb_Init_cv -= rtb_Init_e;

        /* DotProduct: '<S196>/Dot Product' incorporates:
         *  Concatenate: '<S178>/Matrix Concatenate2'
         *  Sum: '<S196>/Minus'
         *  Sum: '<S196>/Minus1'
         *  Sum: '<S196>/Minus5'
         */
        rtb_Rotationmatrixfromlocalto_2 = (rtb_Reshapey[0] - rtb_Init_e) *
          rtb_Init_cv;

        /* DotProduct: '<S196>/Dot Product1' incorporates:
         *  Sum: '<S196>/Minus'
         */
        rtb_Switch2_l = rtb_Init_cv * rtb_Init_cv;

        /* DotProduct: '<S196>/Dot Product2' incorporates:
         *  Sum: '<S196>/Minus4'
         *  Sum: '<S196>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch4_g *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S196>/Dot Product3' incorporates:
         *  Sum: '<S196>/Minus4'
         */
        rtb_Switch2_p = rtb_Switch4_g * rtb_Switch4_g;

        /* Sum: '<S196>/Add1' incorporates:
         *  Sum: '<S196>/Add2'
         *  Sum: '<S196>/Minus'
         */
        rtb_Init_cv = rtb_UnitDelay1_gi - rtb_Minus_n[1];

        /* Sum: '<S196>/Minus4' incorporates:
         *  Sum: '<S196>/Add2'
         *  Sum: '<S196>/Minus'
         */
        rtb_Switch4_g = (rtb_UnitDelay1_gi + rtb_Minus_n[1]) - rtb_Init_cv;

        /* Sum: '<S196>/Minus5' incorporates:
         *  Concatenate: '<S178>/Matrix Concatenate2'
         *  Sum: '<S196>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Init_cv;

        /* Sum: '<S196>/Add' incorporates:
         *  Sum: '<S196>/Add2'
         *  Sum: '<S196>/Minus1'
         */
        rtb_Init_e = rtb_Sum1_li - rtb_Minus_n[1];

        /* Sum: '<S196>/Minus' incorporates:
         *  Sum: '<S196>/Minus1'
         */
        rtb_Init_cv -= rtb_Init_e;

        /* DotProduct: '<S196>/Dot Product' incorporates:
         *  Concatenate: '<S178>/Matrix Concatenate2'
         *  Sum: '<S196>/Minus'
         *  Sum: '<S196>/Minus1'
         *  Sum: '<S196>/Minus5'
         */
        rtb_Rotationmatrixfromlocalto_2 += (rtb_Reshapey[1] - rtb_Init_e) *
          rtb_Init_cv;

        /* RelationalOperator: '<S197>/Compare' incorporates:
         *  Constant: '<S197>/Constant'
         */
        rtb_Is_Absolute_Translation_g = (rtb_Rotationmatrixfromlocalto_2 >= 0.0);

        /* RelationalOperator: '<S196>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S196>/Dot Product1'
         *  Sum: '<S196>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Rotationmatrixfromlocalto_2 <=
          ((rtb_Init_cv * rtb_Init_cv) + rtb_Switch2_l));

        /* DotProduct: '<S196>/Dot Product2' incorporates:
         *  Sum: '<S196>/Minus4'
         *  Sum: '<S196>/Minus5'
         */
        rtb_Rotationmatrixfromlocalto_2 = (rtb_Switch4_g *
          rtb_Rotationmatrixfromlocalto_0) + rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S182>/Merge4' incorporates:
         *  Constant: '<S198>/Constant'
         *  DataTypeConversion: '<S188>/Data Type Conversion'
         *  DotProduct: '<S196>/Dot Product3'
         *  Logic: '<S196>/AND'
         *  RelationalOperator: '<S196>/LessThanOrEqual1'
         *  RelationalOperator: '<S198>/Compare'
         *  Sum: '<S188>/Add'
         *  Sum: '<S196>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)
          (((rtb_Is_Absolute_Translation_g && rtb_Is_Absolute_Steering) &&
            (rtb_Rotationmatrixfromlocalto_2 >= 0.0)) &&
           (rtb_Rotationmatrixfromlocalto_2 <= ((rtb_Switch4_g * rtb_Switch4_g)
          + rtb_Switch2_p)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S182>/Merge2' incorporates:
         *  Constant: '<S188>/Constant2'
         *  SignalConversion generated from: '<S188>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S188>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S188>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S185>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S185>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S186>/Action Port'
         */
        /* Merge: '<S182>/Merge2' incorporates:
         *  Constant: '<S186>/Constant2'
         *  SignalConversion generated from: '<S186>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S186>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S186>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S182>/Merge4' incorporates:
         *  SignalConversion generated from: '<S186>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S185>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S182>/Merge1' incorporates:
       *  Constant: '<S185>/Constant'
       *  SignalConversion generated from: '<S185>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S185>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_AND_p2;

      /* End of Outputs for SubSystem: '<S182>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S182>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S184>/Action Port'
       */
      /* Merge: '<S182>/Merge1' incorporates:
       *  Constant: '<S184>/Constant'
       *  SignalConversion generated from: '<S184>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S182>/Merge2' incorporates:
       *  Constant: '<S184>/Constant1'
       *  SignalConversion generated from: '<S184>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S184>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S184>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S182>/Merge4' incorporates:
       *  SignalConversion generated from: '<S184>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S182>/Escape_Auto_Driving' */
    }

    /* End of If: '<S182>/If' */

    /* If: '<S178>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S178>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S183>/Action Port'
       */
      /* Bias: '<S199>/Add Constant' incorporates:
       *  Bias: '<S199>/Bias'
       *  Sum: '<S199>/Subtract'
       */
      rtb_Init_e = ((Code_Gen_Model_B.Spline_Num_Poses -
                     Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S199>/Selector4' incorporates:
       *  Bias: '<S199>/Bias1'
       *  Constant: '<S201>/FixPt Constant'
       *  Sum: '<S201>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S199>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S199>/Selector' incorporates:
       *  Bias: '<S199>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S199>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S199>/Matrix Concatenate' incorporates:
       *  Gain: '<S202>/Gain'
       *  Gain: '<S203>/Gain'
       *  Selector: '<S178>/Selector1'
       *  Selector: '<S199>/Selector'
       *  Selector: '<S199>/Selector1'
       *  Selector: '<S199>/Selector2'
       *  Selector: '<S199>/Selector3'
       *  Sum: '<S202>/Subtract'
       *  Sum: '<S203>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S199>/Selector4' incorporates:
         *  Selector: '<S199>/Selector'
         */
        s204_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S202>/Subtract' incorporates:
         *  Bias: '<S199>/Add Constant1'
         *  Selector: '<S199>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s204_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S199>/Selector4' incorporates:
         *  Gain: '<S202>/Gain'
         *  Selector: '<S199>/Selector'
         *  Selector: '<S199>/Selector1'
         *  Sum: '<S202>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s204_iter) - 1];
        }
      }

      /* End of Concatenate: '<S199>/Matrix Concatenate' */

      /* Assignment: '<S199>/Assignment' incorporates:
       *  Selector: '<S199>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s204_iter = 0; s204_iter < rtb_Bias1_p; s204_iter++) {
          rtb_Assignment[s204_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s204_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S199>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S200>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S204>/While Iterator'
       */
      s204_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment[s204_iter + 1];
        rtb_Reshapey[0] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s204_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s204_iter] - rtb_Assignment[s204_iter +
          2];
        rtb_Add2_f[0] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s204_iter];
        rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment[s204_iter + 9];
        rtb_Reshapey[1] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s204_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s204_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s204_iter + 10];
        rtb_Add2_f[1] = rtb_Rotationmatrixfromlocalto_2 - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Rotationmatrixfromlocalto_2 = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_UnitDelay1_gi = rt_powd_snf(rtb_Rotationmatrixfromlocalto_2, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf
            (rtb_Rotationmatrixfromlocalto_2, 3.0);
          rtb_Switch4_g = (rtb_Rotationmatrixfromlocalto_2 - (2.0 *
            rtb_UnitDelay1_gi)) + rtb_Rotationmatrixfromlocalto_0;
          rtb_Sum1_li = rtb_UnitDelay1_gi - rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_UnitDelay1_gi) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch4_g) +
            (rtb_Minus_n[0] * rtb_Sum1_li)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s204_iter];
          rtb_Switch2_p = ((((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1]
            * rtb_Sum1_li)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Switch2_l;
          rtb_Switch4_g = ((3.0 * rtb_UnitDelay1_gi) - (4.0 *
            rtb_Rotationmatrixfromlocalto_2)) + 1.0;
          rtb_Sum1_li = (2.0 * rtb_Rotationmatrixfromlocalto_2) - (3.0 *
            rtb_UnitDelay1_gi);
          rtb_UnitDelay1_gi = (rtb_Rotationmatrixfromlocalto_2 -
                               rtb_UnitDelay1_gi) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Switch4_g)
            + (rtb_Minus_n[0] * rtb_Sum1_li)) * 0.5) + (rtb_Add2_f[0] *
            rtb_UnitDelay1_gi);
          rtb_Init_cv = (((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1] *
            rtb_Sum1_li)) * 0.5) + (rtb_Add2_f[1] * rtb_UnitDelay1_gi);
          rtb_UnitDelay1_gi = (6.0 * rtb_Rotationmatrixfromlocalto_2) - 4.0;
          rtb_Switch4_g = (-6.0 * rtb_Rotationmatrixfromlocalto_2) + 2.0;
          rtb_Rotationmatrixfromlocalto_2 = (-12.0 *
            rtb_Rotationmatrixfromlocalto_2) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Switch2_p;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_UnitDelay1_gi) + (rtb_Minus_n[1] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_2)) *
            rtb_Rotationmatrixfromlocalto_0) - (((((rtb_Reshapey[0] *
            rtb_UnitDelay1_gi) + (rtb_Minus_n[0] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_2)) * rtb_Init_cv)) /
            rt_powd_snf(rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
            rtb_Init_cv), 3.0);
        }

        if (s204_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s204_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Rotationmatrixfromlocalto_2 = rtb_Init_e - ((real_T)s204_iter);
        rtb_Num_Segments = s204_iter;
        s204_iter++;
      } while ((rtb_Rotationmatrixfromlocalto_2 >= 4.0) && (s204_iter <= 3));

      /* End of Outputs for SubSystem: '<S200>/Sampling_Loop' */

      /* SignalConversion generated from: '<S183>/Position_and_Curvature' incorporates:
       *  Assignment: '<S204>/Assignment'
       *  Merge: '<S178>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S178>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S178>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S178>/If Action Subsystem' incorporates:
       *  ActionPort: '<S181>/Action Port'
       */
      /* Product: '<S181>/Product' incorporates:
       *  Selector: '<S178>/Selector'
       *  Selector: '<S178>/Selector1'
       */
      rtb_Rotationmatrixfromlocalto_2 = rtb_Ref_Poses[i - 1];

      /* Product: '<S181>/Product1' incorporates:
       *  Selector: '<S178>/Selector'
       *  Selector: '<S178>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S181>/Product' incorporates:
         *  Constant: '<S181>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Rotationmatrixfromlocalto_2;

        /* Product: '<S181>/Product1' incorporates:
         *  Constant: '<S181>/Constant2'
         *  Product: '<S181>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Init_e;
      }

      /* Assignment: '<S181>/Assignment' incorporates:
       *  Concatenate: '<S181>/Matrix Concatenate'
       *  Merge: '<S178>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S181>/Assignment' */

      /* SignalConversion generated from: '<S181>/Num_Segments' incorporates:
       *  Constant: '<S181>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S178>/If Action Subsystem' */
    }

    /* End of If: '<S178>/If1' */

    /* Concatenate: '<S179>/Matrix Concatenate' incorporates:
     *  Merge: '<S178>/Merge'
     *  Selector: '<S179>/Selector'
     *  Selector: '<S179>/Selector1'
     *  Selector: '<S179>/Selector3'
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

    /* End of Concatenate: '<S179>/Matrix Concatenate' */

    /* MATLAB Function: '<S179>/Distance Along Curve' incorporates:
     *  Concatenate: '<S179>/Matrix Concatenate'
     *  Selector: '<S179>/Selector4'
     *  Selector: '<S179>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s204_iter = 0; s204_iter < 149; s204_iter++) {
      /* Outputs for Iterator SubSystem: '<S200>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S204>/While Iterator'
       */
      rtb_Assignment_d[s204_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s204_iter + 1] -
         rtb_MatrixConcatenate_o[s204_iter], rtb_MatrixConcatenate_o[s204_iter +
         151] - rtb_MatrixConcatenate_o[s204_iter + 150]) +
        rtb_Assignment_d[s204_iter];

      /* End of Outputs for SubSystem: '<S200>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S179>/Distance Along Curve' */

    /* MATLAB Function: '<S179>/Find closest index to curve' incorporates:
     *  Concatenate: '<S179>/Matrix Concatenate'
     *  Selector: '<S179>/Selector4'
     *  Selector: '<S179>/Selector5'
     *  Selector: '<S230>/Selector'
     */
    for (s204_iter = 0; s204_iter < 150; s204_iter++) {
      /* Outputs for Iterator SubSystem: '<S200>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S204>/While Iterator'
       */
      distance_from_robot[s204_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s204_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s204_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S200>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s204_iter = 1;
    } else {
      s204_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s204_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s204_iter == 0) {
      rtb_Init_e = distance_from_robot[0];
    } else {
      rtb_Init_e = distance_from_robot[s204_iter - 1];
      for (rtb_Bias1_p = s204_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Rotationmatrixfromlocalto_2 = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Init_e > rtb_Rotationmatrixfromlocalto_2) {
          rtb_Init_e = rtb_Rotationmatrixfromlocalto_2;
        }
      }
    }

    s204_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s204_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Init_e) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S230>/Selector' incorporates:
     *  Constant: '<S230>/Constant'
     *  MATLAB Function: '<S179>/Find closest index to curve'
     *  MinMax: '<S230>/Min'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment_d[((int32_T)fmin(50.0,
      s204_iter)) - 1];

    /* If: '<S230>/If' incorporates:
     *  RelationalOperator: '<S230>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S230>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S233>/Action Port'
       */
      /* SignalConversion generated from: '<S233>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S235>/FixPt Sum1' incorporates:
       *  Constant: '<S235>/FixPt Constant'
       */
      rtb_Init_e = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S233>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S11>/Merge8'
       *  Selector: '<S233>/Selector11'
       *  Selector: '<S233>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Init_e) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S233>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S11>/Merge8'
       *  Selector: '<S233>/Selector1'
       *  Selector: '<S233>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Init_e) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S233>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S233>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Init_e), &rtb_Minus_n[0],
                           rtb_Rotationmatrixfromlocalto_2, &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S233>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S233>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S233>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0],
                           rtb_Rotationmatrixfromlocalto_2, &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S230>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S230>/Latch' incorporates:
       *  ActionPort: '<S234>/Action Port'
       */
      /* SignalConversion generated from: '<S234>/In1' incorporates:
       *  UnitDelay: '<S230>/Unit Delay1'
       */
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S234>/In2' incorporates:
       *  UnitDelay: '<S230>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S230>/Latch' */
    }

    /* End of If: '<S230>/If' */

    /* MinMax: '<S177>/Min' incorporates:
     *  Lookup_n-D: '<S177>/Lookahead Distance'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_1 = fmin(rtb_Rotationmatrixfromlocalto_1,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled7,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S179>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S229>/While Iterator'
     */
    s229_iter = 1U;
    rtb_AND_p2 = true;
    while (rtb_AND_p2 && (s229_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S179>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S229>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s229_iter;
      rtb_AND_p2 = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                     (rtb_Assignment_d[s204_iter - 1] +
                      rtb_Rotationmatrixfromlocalto_1)) &&
                    (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments)
        * 50.0)));
      s229_iter++;
    }

    /* End of Outputs for SubSystem: '<S179>/Find first index that meets distance target' */

    /* Switch: '<S232>/Switch' incorporates:
     *  Concatenate: '<S179>/Matrix Concatenate'
     *  Constant: '<S179>/Constant'
     *  Constant: '<S229>/Constant'
     *  Constant: '<S232>/Constant1'
     *  Constant: '<S232>/Constant2'
     *  Constant: '<S232>/Constant3'
     *  Logic: '<S229>/AND'
     *  MATLAB Function: '<S179>/Find closest index to curve'
     *  Math: '<S232>/Hypot'
     *  Merge: '<S11>/Merge8'
     *  MinMax: '<S232>/Min'
     *  MinMax: '<S232>/Min1'
     *  Product: '<S229>/Product'
     *  Product: '<S232>/Divide'
     *  Product: '<S232>/Product'
     *  Product: '<S232>/Product1'
     *  RelationalOperator: '<S179>/Relational Operator'
     *  RelationalOperator: '<S229>/Relational Operator'
     *  RelationalOperator: '<S229>/Relational Operator1'
     *  Selector: '<S179>/Selector10'
     *  Selector: '<S179>/Selector7'
     *  Selector: '<S179>/Selector8'
     *  Selector: '<S179>/Selector9'
     *  Selector: '<S229>/Selector'
     *  Selector: '<S229>/Selector1'
     *  Selector: '<S230>/Selector'
     *  Sqrt: '<S232>/Sqrt'
     *  Sum: '<S179>/Subtract'
     *  Sum: '<S229>/Add'
     *  Sum: '<S232>/Subtract'
     *  Sum: '<S232>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_1 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses
        [5] - Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Init_e *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Rotationmatrixfromlocalto_1 = fmin(rtb_Init_e *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S232>/Switch' */

    /* Logic: '<S180>/OR' */
    rtb_Is_Absolute_Steering = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S180>/Switch1' incorporates:
     *  Switch: '<S180>/Switch'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S15>/Merge2' incorporates:
       *  Constant: '<S180>/Constant3'
       *  SignalConversion: '<S180>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S15>/Merge2' incorporates:
       *  SignalConversion: '<S180>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_1;
      rtb_Rotationmatrixfromlocalto_2 = rtb_Merge1;
    }

    /* End of Switch: '<S180>/Switch1' */

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion: '<S180>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Rotationmatrixfromlocalto_2;

    /* Selector: '<S179>/Selector6' incorporates:
     *  Concatenate: '<S179>/Matrix Concatenate'
     *  Selector: '<S179>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S179>/Selector2' incorporates:
     *  Concatenate: '<S179>/Matrix Concatenate'
     *  Selector: '<S179>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S180>/Switch2' incorporates:
     *  Sum: '<S236>/Subtract'
     *  Sum: '<S236>/Subtract1'
     *  Trigonometry: '<S236>/Atan2'
     *  UnitDelay: '<S180>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_UnitDelay1_gi = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S180>/Switch2' */

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion: '<S180>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_UnitDelay1_gi;

    /* Merge: '<S15>/Merge7' incorporates:
     *  SignalConversion: '<S177>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S180>/Constant2'
     *  SignalConversion generated from: '<S177>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S180>/Constant5'
     *  SignalConversion generated from: '<S177>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S15>/Merge5' incorporates:
     *  Constant: '<S180>/Constant6'
     *  SignalConversion generated from: '<S177>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S15>/Merge6' incorporates:
     *  Constant: '<S180>/Constant1'
     *  SignalConversion generated from: '<S177>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_1;

    /* Update for UnitDelay: '<S230>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Init_e;

    /* Update for UnitDelay: '<S230>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S180>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S180>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S15>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
     *  ActionPort: '<S176>/Action Port'
     */
    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S176>/Constant'
     *  SignalConversion generated from: '<S176>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion generated from: '<S176>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S15>/Merge1' incorporates:
     *  SignalConversion generated from: '<S176>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion generated from: '<S176>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion generated from: '<S176>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S15>/Merge4' incorporates:
     *  SignalConversion generated from: '<S176>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge5' incorporates:
     *  SignalConversion generated from: '<S176>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S15>/Merge6' incorporates:
     *  SignalConversion generated from: '<S176>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S15>/Pass Through' */
  }

  /* End of If: '<S15>/If' */

  /* Signum: '<S330>/Sign2' incorporates:
   *  UnitDelay: '<S330>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch2_bk = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch2_bk = -1.0;
  } else {
    rtb_Switch2_bk = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S330>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S330>/Product1' incorporates:
   *  Signum: '<S330>/Sign1'
   *  Signum: '<S330>/Sign2'
   */
  rtb_Switch2_bk *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch2_bk)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch2_bk, 256.0);
  }

  /* Switch: '<S330>/Switch' incorporates:
   *  Constant: '<S330>/Constant'
   *  Constant: '<S335>/Constant'
   *  Constant: '<S336>/Constant'
   *  Logic: '<S330>/or'
   *  Product: '<S330>/Product1'
   *  RelationalOperator: '<S335>/Compare'
   *  RelationalOperator: '<S336>/Compare'
   *  UnitDelay: '<S330>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Init_cv = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Init_cv = 0.0;
  }

  /* End of Switch: '<S330>/Switch' */

  /* Switch: '<S341>/Init' incorporates:
   *  UnitDelay: '<S341>/FixPt Unit Delay1'
   *  UnitDelay: '<S341>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Init_cv;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S341>/Init' */

  /* RelationalOperator: '<S337>/Compare' incorporates:
   *  Constant: '<S337>/Constant'
   */
  rtb_AND_p2 = (rtb_Init_cv == 0.0);

  /* RelationalOperator: '<S338>/Compare' incorporates:
   *  Constant: '<S338>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Init_cv > 0.0);

  /* Abs: '<S330>/Abs' incorporates:
   *  Sum: '<S330>/Subtract'
   *  UnitDelay: '<S330>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S330>/Switch5' incorporates:
   *  Constant: '<S330>/Constant1'
   *  Switch: '<S330>/Switch1'
   *  UnaryMinus: '<S330>/Unary Minus'
   */
  if (rtb_AND_p2) {
    /* SignalConversion generated from: '<S330>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S330>/Constant4'
     *  Constant: '<S330>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S330>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S330>/Constant2'
     *  Constant: '<S330>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S330>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S330>/Lookup Table Dynamic'
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
    rtb_Switch2_bk = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S330>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S330>/Constant10'
     *  Constant: '<S330>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S330>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S330>/Constant7'
     *  Constant: '<S330>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S330>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S330>/Lookup Table Dynamic1'
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

    /* Switch: '<S330>/Switch3' incorporates:
     *  Constant: '<S330>/Constant1'
     *  Constant: '<S330>/Constant3'
     *  UnaryMinus: '<S330>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_bk = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch2_bk = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S330>/Switch3' */
  }

  /* End of Switch: '<S330>/Switch5' */

  /* Product: '<S330>/Product' incorporates:
   *  Switch: '<S330>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch2_bk * rtb_Merge1;

  /* Sum: '<S339>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Init_cv - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S340>/Switch2' incorporates:
   *  RelationalOperator: '<S340>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_uDLookupTable_l)) {
    /* Switch: '<S330>/Switch2' incorporates:
     *  Constant: '<S330>/Constant1'
     *  Switch: '<S330>/Switch4'
     */
    if (rtb_AND_p2) {
      rtb_Init_e = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S330>/Switch4' incorporates:
       *  Constant: '<S330>/Constant1'
       */
      rtb_Init_e = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S330>/Switch4' incorporates:
       *  Constant: '<S330>/Constant3'
       *  UnaryMinus: '<S330>/Unary Minus1'
       */
      rtb_Init_e = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S330>/Switch2' */

    /* Product: '<S330>/Product2' */
    rtb_Init_e *= rtb_Merge1;

    /* Switch: '<S340>/Switch' incorporates:
     *  RelationalOperator: '<S340>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < rtb_Init_e) {
      rtb_uDLookupTable_l = rtb_Init_e;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S340>/Switch' */
  }

  /* End of Switch: '<S340>/Switch2' */

  /* Sum: '<S339>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S333>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S333>/Switch' incorporates:
     *  Constant: '<S357>/Constant3'
     *  Constant: '<S357>/Constant4'
     *  Math: '<S357>/Math Function'
     *  Sum: '<S333>/Subtract'
     *  Sum: '<S357>/Add1'
     *  Sum: '<S357>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Gain1) + 3.1415926535897931,
       6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S333>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S333>/Switch' */

  /* Sum: '<S353>/Add1' incorporates:
   *  Constant: '<S353>/Constant3'
   *  Constant: '<S353>/Constant4'
   *  Math: '<S353>/Math Function'
   *  Sum: '<S332>/Add'
   *  Sum: '<S352>/Sum'
   *  Sum: '<S353>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Gain1 +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S355>/Sum1' incorporates:
   *  Constant: '<S352>/Constant2'
   *  Product: '<S355>/Product'
   *  Sum: '<S355>/Sum'
   *  UnitDelay: '<S355>/Unit Delay1'
   */
  rtb_Gain1 = ((rtb_MatrixConcatenate_b_idx_0 -
                Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
               Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S352>/Product' incorporates:
   *  Constant: '<S352>/Constant3'
   */
  rtb_Merge1 = rtb_Gain1 * Steering_Heading_Control_D;

  /* Sum: '<S354>/Diff' incorporates:
   *  UnitDelay: '<S354>/UD'
   *
   * Block description for '<S354>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S354>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Merge1 - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S352>/Saturation' */
  if (cos_alpha > Steering_Heading_Control_D_UL) {
    cos_alpha = Steering_Heading_Control_D_UL;
  } else if (cos_alpha < Steering_Heading_Control_D_LL) {
    cos_alpha = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S352>/Add' incorporates:
   *  Gain: '<S352>/Gain1'
   *  Saturate: '<S352>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    cos_alpha;

  /* Sum: '<S352>/Subtract' incorporates:
   *  Constant: '<S352>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S352>/Sum2' incorporates:
   *  Gain: '<S352>/Gain2'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_1 = (Steering_Heading_Control_I *
    rtb_MatrixConcatenate_b_idx_0) + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S356>/Switch2' incorporates:
   *  RelationalOperator: '<S356>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_uDLookupTable_l)) {
    /* Sum: '<S352>/Subtract1' incorporates:
     *  Constant: '<S352>/Constant1'
     */
    rtb_Rotationmatrixfromlocalto_2 = Steering_Heading_Control_Total_LL -
      rtb_Init_e;

    /* Switch: '<S356>/Switch' incorporates:
     *  RelationalOperator: '<S356>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < rtb_Rotationmatrixfromlocalto_2) {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S356>/Switch' */
  }

  /* End of Switch: '<S356>/Switch2' */

  /* Saturate: '<S352>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_1 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_1 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_1 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S352>/Saturation1' */

  /* Sum: '<S352>/Add1' */
  cos_alpha = rtb_Init_e + rtb_Rotationmatrixfromlocalto_1;

  /* Saturate: '<S352>/Saturation2' */
  if (cos_alpha > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S352>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (cos_alpha < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S352>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S352>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = cos_alpha;
  }

  /* End of Saturate: '<S352>/Saturation2' */

  /* Switch: '<S332>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S343>/Switch' incorporates:
     *  Abs: '<S343>/Abs'
     *  Constant: '<S343>/Constant'
     *  Constant: '<S351>/Constant'
     *  RelationalOperator: '<S351>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S343>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S332>/Switch' */

  /* Signum: '<S342>/Sign2' incorporates:
   *  UnitDelay: '<S342>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch2_bk = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch2_bk = -1.0;
  } else {
    rtb_Switch2_bk = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S342>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S342>/Product1' incorporates:
   *  Signum: '<S342>/Sign1'
   *  Signum: '<S342>/Sign2'
   */
  rtb_Switch2_bk *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch2_bk)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch2_bk, 256.0);
  }

  /* Switch: '<S342>/Switch' incorporates:
   *  Constant: '<S342>/Constant'
   *  Constant: '<S344>/Constant'
   *  Constant: '<S345>/Constant'
   *  Logic: '<S342>/or'
   *  Product: '<S342>/Product1'
   *  RelationalOperator: '<S344>/Compare'
   *  RelationalOperator: '<S345>/Compare'
   *  UnitDelay: '<S342>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_UnitDelay1_gi = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_UnitDelay1_gi = 0.0;
  }

  /* End of Switch: '<S342>/Switch' */

  /* Switch: '<S350>/Init' incorporates:
   *  UnitDelay: '<S350>/FixPt Unit Delay1'
   *  UnitDelay: '<S350>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_UnitDelay1_gi;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S350>/Init' */

  /* RelationalOperator: '<S346>/Compare' incorporates:
   *  Constant: '<S346>/Constant'
   */
  rtb_AND_p2 = (rtb_UnitDelay1_gi == 0.0);

  /* RelationalOperator: '<S347>/Compare' incorporates:
   *  Constant: '<S347>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_UnitDelay1_gi > 0.0);

  /* Abs: '<S342>/Abs' incorporates:
   *  Sum: '<S342>/Subtract'
   *  UnitDelay: '<S342>/Unit Delay'
   */
  rtb_Switch4_g = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S342>/Switch1' incorporates:
   *  Constant: '<S342>/Constant1'
   *  Switch: '<S342>/Switch3'
   *  Switch: '<S342>/Switch5'
   *  UnaryMinus: '<S342>/Unary Minus'
   */
  if (rtb_AND_p2) {
    rtb_Rotationmatrixfromlocalto_2 = -Steering_Localized_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S342>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S342>/Constant1'
     *  Constant: '<S342>/Constant4'
     *  Constant: '<S342>/Constant6'
     *  UnaryMinus: '<S342>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S342>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S342>/Constant2'
     *  Constant: '<S342>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S342>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S342>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch4_g, &rtb_Minus_n[0], 1U);
    rtb_Switch4_g = rtb_LookupTableDynamic;
  } else {
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S342>/Switch3' incorporates:
       *  Constant: '<S342>/Constant3'
       */
      rtb_Rotationmatrixfromlocalto_2 = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S342>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S342>/Constant1'
     *  Constant: '<S342>/Constant10'
     *  Constant: '<S342>/Constant8'
     *  UnaryMinus: '<S342>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S342>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S342>/Constant7'
     *  Constant: '<S342>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S342>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S342>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch4_g, &rtb_Minus_n[0], 1U);
    rtb_Switch4_g = rtb_LookupTableDynamic1;
  }

  /* End of Switch: '<S342>/Switch1' */

  /* Product: '<S342>/Product' */
  rtb_Rotationmatrixfromlocalto_2 *= rtb_Switch4_g;

  /* Sum: '<S348>/Sum1' */
  rtb_UnitDelay1_gi -= rtb_Init_e;

  /* Switch: '<S349>/Switch2' incorporates:
   *  RelationalOperator: '<S349>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_Rotationmatrixfromlocalto_2)) {
    /* Switch: '<S342>/Switch2' incorporates:
     *  Constant: '<S342>/Constant1'
     *  Switch: '<S342>/Switch4'
     */
    if (rtb_AND_p2) {
      rtb_Rotationmatrixfromlocalto_2 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S342>/Switch4' incorporates:
       *  Constant: '<S342>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_2 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S342>/Switch4' incorporates:
       *  Constant: '<S342>/Constant3'
       *  UnaryMinus: '<S342>/Unary Minus1'
       */
      rtb_Rotationmatrixfromlocalto_2 = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S342>/Switch2' */

    /* Product: '<S342>/Product2' */
    rtb_Rotationmatrixfromlocalto_2 *= rtb_Switch4_g;

    /* Switch: '<S349>/Switch' incorporates:
     *  RelationalOperator: '<S349>/UpperRelop'
     */
    if (!(rtb_UnitDelay1_gi < rtb_Rotationmatrixfromlocalto_2)) {
      rtb_Rotationmatrixfromlocalto_2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S349>/Switch' */
  }

  /* End of Switch: '<S349>/Switch2' */

  /* Sum: '<S348>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Rotationmatrixfromlocalto_2 +
    rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S245>/Initialize Function' */
  /* Sum: '<S331>/Add' incorporates:
   *  Constant: '<S331>/Constant'
   *  Constant: '<S331>/Constant4'
   *  Constant: '<S331>/Constant5'
   *  Trigonometry: '<S331>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S245>/Initialize Function' */

  /* Fcn: '<S365>/r->x' incorporates:
   *  Fcn: '<S370>/r->x'
   *  Fcn: '<S375>/r->x'
   *  Fcn: '<S380>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S359>/Add' incorporates:
   *  Fcn: '<S365>/r->x'
   *  Fcn: '<S366>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Rotationmatrixfromlocalto_2;

  /* Fcn: '<S365>/theta->y' incorporates:
   *  Fcn: '<S370>/theta->y'
   *  Fcn: '<S375>/theta->y'
   *  Fcn: '<S380>/theta->y'
   */
  rtb_Init_cv = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S359>/Add' incorporates:
   *  Fcn: '<S365>/theta->y'
   *  Fcn: '<S366>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Init_cv;

  /* Sum: '<S360>/Add' incorporates:
   *  Fcn: '<S371>/r->x'
   *  Fcn: '<S371>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Init_cv;

  /* Sum: '<S361>/Add' incorporates:
   *  Fcn: '<S376>/r->x'
   *  Fcn: '<S376>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Init_cv;

  /* Sum: '<S362>/Add' incorporates:
   *  Fcn: '<S381>/r->x'
   *  Fcn: '<S381>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Rotationmatrixfromlocalto_2 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    sin(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Init_cv;

  /* Fcn: '<S379>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
    rtb_Rotationmatrixfromlocalto_2);

  /* RelationalOperator: '<S382>/Compare' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_AND_p2 = (rtb_Switch2_l == 0.0);

  /* Switch: '<S378>/Switch1' */
  if (rtb_AND_p2) {
    /* Switch: '<S378>/Switch1' incorporates:
     *  Constant: '<S378>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S378>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Switch2_l;
  }

  /* End of Switch: '<S378>/Switch1' */

  /* Fcn: '<S364>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S367>/Compare' incorporates:
   *  Constant: '<S367>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_l == 0.0);

  /* Switch: '<S363>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S363>/Switch1' incorporates:
     *  Constant: '<S363>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S363>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch2_l;
  }

  /* End of Switch: '<S363>/Switch1' */

  /* Fcn: '<S369>/x->r' */
  rtb_Init_cv = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S372>/Compare' incorporates:
   *  Constant: '<S372>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init_cv == 0.0);

  /* Switch: '<S368>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S368>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S368>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Init_cv;
  }

  /* End of Switch: '<S368>/Switch1' */

  /* Fcn: '<S374>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  rtb_AT_Tag_11_Active = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S373>/Switch1' */
  if (rtb_AT_Tag_11_Active) {
    /* Switch: '<S373>/Switch1' incorporates:
     *  Constant: '<S373>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S373>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S373>/Switch1' */

  /* Product: '<S358>/Divide' incorporates:
   *  Abs: '<S358>/Abs'
   *  Abs: '<S358>/Abs1'
   *  Abs: '<S358>/Abs2'
   *  Abs: '<S358>/Abs3'
   *  Constant: '<S358>/Constant'
   *  MinMax: '<S358>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S358>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch2_l;

  /* Switch: '<S378>/Switch' */
  if (!rtb_AND_p2) {
    /* Switch: '<S378>/Switch' incorporates:
     *  Fcn: '<S379>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf
      (rtb_Rotationmatrixfromlocalto_2, rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S378>/Switch' */

  /* Trigonometry: '<S322>/Cos4' incorporates:
   *  Switch: '<S311>/Angle_Switch'
   *  Trigonometry: '<S321>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S322>/Sin5' incorporates:
   *  UnaryMinus: '<S320>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S322>/Sin4' incorporates:
   *  Switch: '<S311>/Angle_Switch'
   *  Trigonometry: '<S321>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S322>/Cos5' incorporates:
   *  UnaryMinus: '<S320>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S322>/Subtract1' incorporates:
   *  Product: '<S322>/Product2'
   *  Product: '<S322>/Product3'
   *  Trigonometry: '<S322>/Cos4'
   *  Trigonometry: '<S322>/Sin4'
   */
  rtb_Init_e = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S322>/Subtract' incorporates:
   *  Product: '<S322>/Product'
   *  Product: '<S322>/Product1'
   *  Trigonometry: '<S322>/Cos4'
   *  Trigonometry: '<S322>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_2 = (rtb_Add_fn * rtb_MatrixConcatenate_b_idx_0)
    - (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S322>/Hypot' */
  rtb_UnitDelay1_gi = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_2, rtb_Init_e);

  /* Switch: '<S322>/Switch' incorporates:
   *  Constant: '<S322>/Constant'
   *  Constant: '<S322>/Constant1'
   *  Constant: '<S323>/Constant'
   *  Product: '<S322>/Divide'
   *  Product: '<S322>/Divide1'
   *  RelationalOperator: '<S323>/Compare'
   *  Switch: '<S322>/Switch1'
   */
  if (rtb_UnitDelay1_gi > 1.0E-6) {
    rtb_Init_cv = rtb_Init_e / rtb_UnitDelay1_gi;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Rotationmatrixfromlocalto_2 /
      rtb_UnitDelay1_gi;
  } else {
    rtb_Init_cv = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S322>/Switch' */

  /* Switch: '<S311>/Speed_Switch' incorporates:
   *  Abs: '<S311>/Abs'
   *  Constant: '<S319>/Constant'
   *  RelationalOperator: '<S319>/Compare'
   *  Switch: '<S311>/Angle_Switch'
   *  Trigonometry: '<S321>/Atan1'
   *  Trigonometry: '<S322>/Atan1'
   *  UnaryMinus: '<S311>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_cv, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch2_bk = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S321>/Subtract1' incorporates:
     *  Product: '<S321>/Product2'
     *  Product: '<S321>/Product3'
     *  UnaryMinus: '<S311>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_a1
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S321>/Subtract' incorporates:
     *  Product: '<S321>/Product'
     *  Product: '<S321>/Product1'
     */
    rtb_UnitDelay1_gi = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S321>/Hypot' */
    rtb_Rotationmatrixfromlocalto_2 = rt_hypotd_snf(rtb_UnitDelay1_gi,
      rtb_Init_e);

    /* Switch: '<S321>/Switch1' incorporates:
     *  Constant: '<S321>/Constant'
     *  Constant: '<S321>/Constant1'
     *  Constant: '<S324>/Constant'
     *  Product: '<S321>/Divide'
     *  Product: '<S321>/Divide1'
     *  RelationalOperator: '<S324>/Compare'
     *  Switch: '<S321>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_2 > 1.0E-6) {
      rtb_UnitDelay1_gi /= rtb_Rotationmatrixfromlocalto_2;
      rtb_Init_e /= rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_UnitDelay1_gi = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S321>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_UnitDelay1_gi);
  } else {
    rtb_Switch2_bk = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S314>/Product2' incorporates:
   *  Constant: '<S314>/Constant'
   *  Switch: '<S311>/Speed_Switch'
   */
  rtb_Init_cv = rtb_Switch2_bk * 1530.1401357649195;

  /* Signum: '<S309>/Sign' */
  if (rtIsNaN(rtb_Init_cv)) {
    rtb_Switch2_bk = (rtNaN);
  } else if (rtb_Init_cv < 0.0) {
    rtb_Switch2_bk = -1.0;
  } else {
    rtb_Switch2_bk = (rtb_Init_cv > 0.0);
  }

  /* Signum: '<S309>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S312>/Add' incorporates:
   *  Sum: '<S313>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S244>/Product' incorporates:
   *  Abs: '<S309>/Abs'
   *  Abs: '<S312>/Abs'
   *  Constant: '<S315>/Constant'
   *  Constant: '<S325>/Constant3'
   *  Constant: '<S325>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S309>/OR'
   *  Lookup_n-D: '<S312>/1-D Lookup Table'
   *  Math: '<S325>/Math Function'
   *  RelationalOperator: '<S309>/Equal1'
   *  RelationalOperator: '<S315>/Compare'
   *  Signum: '<S309>/Sign'
   *  Signum: '<S309>/Sign1'
   *  Sum: '<S312>/Add'
   *  Sum: '<S325>/Add1'
   *  Sum: '<S325>/Add2'
   */
  rtb_Init_cv = (((real_T)((rtb_Switch2_bk == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S310>/Gain' */
  rtb_UnitDelay1_gi = Drive_Motor_Control_FF * rtb_Init_cv;

  /* Sum: '<S310>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Init_cv -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S317>/Sum1' incorporates:
   *  Constant: '<S310>/Constant2'
   *  Product: '<S317>/Product'
   *  Sum: '<S317>/Sum'
   *  UnitDelay: '<S317>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S310>/Product' incorporates:
   *  Constant: '<S310>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S316>/Diff' incorporates:
   *  UnitDelay: '<S316>/UD'
   *
   * Block description for '<S316>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S316>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Rotationmatrixfromlocalto_2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S310>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S310>/Add' incorporates:
   *  Gain: '<S310>/Gain1'
   *  Saturate: '<S310>/Saturation'
   */
  rtb_Switch4_g = ((Drive_Motor_Control_P * rtb_Init_cv) + rtb_UnitDelay1_gi) +
    cos_alpha;

  /* Sum: '<S310>/Subtract' incorporates:
   *  Constant: '<S310>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch4_g;

  /* Sum: '<S310>/Sum2' incorporates:
   *  Gain: '<S310>/Gain2'
   *  UnitDelay: '<S310>/Unit Delay'
   */
  rtb_UnitDelay1_gi = (Drive_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S318>/Switch2' incorporates:
   *  Constant: '<S310>/Constant'
   *  RelationalOperator: '<S318>/LowerRelop1'
   *  Sum: '<S310>/Subtract'
   */
  if (!(rtb_UnitDelay1_gi > (1.0 - rtb_Switch4_g))) {
    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S310>/Constant1'
     *  RelationalOperator: '<S318>/UpperRelop'
     *  Sum: '<S310>/Subtract1'
     */
    if (rtb_UnitDelay1_gi < (-1.0 - rtb_Switch4_g)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch4_g;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S318>/Switch' */
  }

  /* End of Switch: '<S318>/Switch2' */

  /* Saturate: '<S310>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_UnitDelay1_gi = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_UnitDelay1_gi = Drive_Motor_Control_I_LL;
  } else {
    rtb_UnitDelay1_gi = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S310>/Saturation1' */

  /* Sum: '<S310>/Add1' */
  cos_alpha = rtb_Switch4_g + rtb_UnitDelay1_gi;

  /* Saturate: '<S310>/Saturation2' */
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

  /* End of Saturate: '<S310>/Saturation2' */

  /* Sum: '<S326>/Add1' incorporates:
   *  Constant: '<S326>/Constant3'
   *  Constant: '<S326>/Constant4'
   *  Math: '<S326>/Math Function'
   *  Sum: '<S326>/Add2'
   */
  rtb_Init_cv = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S328>/Sum1' incorporates:
   *  Constant: '<S313>/Constant2'
   *  Product: '<S328>/Product'
   *  Sum: '<S328>/Sum'
   *  UnitDelay: '<S328>/Unit Delay1'
   */
  rtb_Switch4_g = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S313>/Product' incorporates:
   *  Constant: '<S313>/Constant3'
   */
  rtb_Sum1_li = rtb_Switch4_g * Steering_Motor_Control_D;

  /* Sum: '<S327>/Diff' incorporates:
   *  UnitDelay: '<S327>/UD'
   *
   * Block description for '<S327>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S327>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Sum1_li - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S313>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S313>/Add' incorporates:
   *  Gain: '<S313>/Gain1'
   *  Saturate: '<S313>/Saturation'
   */
  rtb_Switch2_p = (Steering_Motor_Control_P * rtb_Init_cv) + cos_alpha;

  /* Sum: '<S313>/Subtract' incorporates:
   *  Constant: '<S313>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch2_p;

  /* Sum: '<S313>/Sum2' incorporates:
   *  Gain: '<S313>/Gain2'
   *  UnitDelay: '<S313>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Steering_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S329>/Switch2' incorporates:
   *  Constant: '<S313>/Constant'
   *  RelationalOperator: '<S329>/LowerRelop1'
   *  Sum: '<S313>/Subtract'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > (1.0 - rtb_Switch2_p))) {
    /* Switch: '<S329>/Switch' incorporates:
     *  Constant: '<S313>/Constant1'
     *  RelationalOperator: '<S329>/UpperRelop'
     *  Sum: '<S313>/Subtract1'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < (-1.0 - rtb_Switch2_p)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch2_p;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S329>/Switch' */
  }

  /* End of Switch: '<S329>/Switch2' */

  /* Saturate: '<S313>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S313>/Saturation1' */

  /* Sum: '<S313>/Add1' */
  cos_alpha = rtb_Switch2_p + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S313>/Saturation2' */
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

  /* End of Saturate: '<S313>/Saturation2' */

  /* Product: '<S358>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch2_l;

  /* Switch: '<S363>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S363>/Switch' incorporates:
     *  Fcn: '<S364>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S363>/Switch' */

  /* Trigonometry: '<S259>/Cos4' incorporates:
   *  Switch: '<S248>/Angle_Switch'
   *  Trigonometry: '<S258>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S259>/Sin5' incorporates:
   *  UnaryMinus: '<S257>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S259>/Sin4' incorporates:
   *  Switch: '<S248>/Angle_Switch'
   *  Trigonometry: '<S258>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S259>/Cos5' incorporates:
   *  UnaryMinus: '<S257>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S259>/Subtract1' incorporates:
   *  Product: '<S259>/Product2'
   *  Product: '<S259>/Product3'
   *  Trigonometry: '<S259>/Cos4'
   *  Trigonometry: '<S259>/Sin4'
   */
  rtb_Switch2_p = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S259>/Subtract' incorporates:
   *  Product: '<S259>/Product'
   *  Product: '<S259>/Product1'
   *  Trigonometry: '<S259>/Cos4'
   *  Trigonometry: '<S259>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Add_fn * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S259>/Hypot' */
  rtb_Steer_Joystick_X_Rel_Mod = rt_hypotd_snf(rtb_Modulation_Drv, rtb_Switch2_p);

  /* Switch: '<S259>/Switch' incorporates:
   *  Constant: '<S259>/Constant'
   *  Constant: '<S259>/Constant1'
   *  Constant: '<S260>/Constant'
   *  Product: '<S259>/Divide'
   *  Product: '<S259>/Divide1'
   *  RelationalOperator: '<S260>/Compare'
   *  Switch: '<S259>/Switch1'
   */
  if (rtb_Steer_Joystick_X_Rel_Mod > 1.0E-6) {
    rtb_Init_cv = rtb_Switch2_p / rtb_Steer_Joystick_X_Rel_Mod;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Modulation_Drv /
      rtb_Steer_Joystick_X_Rel_Mod;
  } else {
    rtb_Init_cv = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S259>/Switch' */

  /* Switch: '<S248>/Speed_Switch' incorporates:
   *  Abs: '<S248>/Abs'
   *  Constant: '<S256>/Constant'
   *  RelationalOperator: '<S256>/Compare'
   *  Switch: '<S248>/Angle_Switch'
   *  Trigonometry: '<S258>/Atan1'
   *  Trigonometry: '<S259>/Atan1'
   *  UnaryMinus: '<S248>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_cv, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch2_bk = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S258>/Subtract1' incorporates:
     *  Product: '<S258>/Product2'
     *  Product: '<S258>/Product3'
     *  UnaryMinus: '<S248>/Unary Minus'
     */
    rtb_Switch2_p = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S258>/Subtract' incorporates:
     *  Product: '<S258>/Product'
     *  Product: '<S258>/Product1'
     */
    rtb_Steer_Joystick_X_Rel_Mod = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S258>/Hypot' */
    rtb_Modulation_Drv = rt_hypotd_snf(rtb_Steer_Joystick_X_Rel_Mod,
      rtb_Switch2_p);

    /* Switch: '<S258>/Switch1' incorporates:
     *  Constant: '<S258>/Constant'
     *  Constant: '<S258>/Constant1'
     *  Constant: '<S261>/Constant'
     *  Product: '<S258>/Divide'
     *  Product: '<S258>/Divide1'
     *  RelationalOperator: '<S261>/Compare'
     *  Switch: '<S258>/Switch'
     */
    if (rtb_Modulation_Drv > 1.0E-6) {
      rtb_Steer_Joystick_X_Rel_Mod /= rtb_Modulation_Drv;
      rtb_Switch2_p /= rtb_Modulation_Drv;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = 1.0;
      rtb_Switch2_p = 0.0;
    }

    /* End of Switch: '<S258>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Switch2_p,
      rtb_Steer_Joystick_X_Rel_Mod);
  } else {
    rtb_Switch2_bk = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S251>/Product2' incorporates:
   *  Constant: '<S251>/Constant'
   *  Switch: '<S248>/Speed_Switch'
   */
  rtb_Init_cv = rtb_Switch2_bk * 1530.1401357649195;

  /* Signum: '<S246>/Sign' */
  if (rtIsNaN(rtb_Init_cv)) {
    rtb_Switch2_bk = (rtNaN);
  } else if (rtb_Init_cv < 0.0) {
    rtb_Switch2_bk = -1.0;
  } else {
    rtb_Switch2_bk = (rtb_Init_cv > 0.0);
  }

  /* Signum: '<S246>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S249>/Add' incorporates:
   *  Sum: '<S250>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S241>/Product' incorporates:
   *  Abs: '<S246>/Abs'
   *  Abs: '<S249>/Abs'
   *  Constant: '<S252>/Constant'
   *  Constant: '<S262>/Constant3'
   *  Constant: '<S262>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S246>/OR'
   *  Lookup_n-D: '<S249>/1-D Lookup Table'
   *  Math: '<S262>/Math Function'
   *  RelationalOperator: '<S246>/Equal1'
   *  RelationalOperator: '<S252>/Compare'
   *  Signum: '<S246>/Sign'
   *  Signum: '<S246>/Sign1'
   *  Sum: '<S249>/Add'
   *  Sum: '<S262>/Add1'
   *  Sum: '<S262>/Add2'
   */
  rtb_Init_cv = (((real_T)((rtb_Switch2_bk == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S247>/Gain' */
  rtb_Steer_Joystick_X_Rel_Mod = Drive_Motor_Control_FF * rtb_Init_cv;

  /* Sum: '<S247>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Init_cv -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S254>/Sum1' incorporates:
   *  Constant: '<S247>/Constant2'
   *  Product: '<S254>/Product'
   *  Sum: '<S254>/Sum'
   *  UnitDelay: '<S254>/Unit Delay1'
   */
  rtb_Switch2_p = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S247>/Product' incorporates:
   *  Constant: '<S247>/Constant3'
   */
  rtb_Modulation_Drv = rtb_Switch2_p * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Modulation_Drv - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S247>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S247>/Add' incorporates:
   *  Gain: '<S247>/Gain1'
   *  Saturate: '<S247>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_Init_cv) +
                rtb_Steer_Joystick_X_Rel_Mod) + cos_alpha;

  /* Sum: '<S247>/Subtract' incorporates:
   *  Constant: '<S247>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_oh;

  /* Sum: '<S247>/Sum2' incorporates:
   *  Gain: '<S247>/Gain2'
   *  UnitDelay: '<S247>/Unit Delay'
   */
  rtb_Steer_Joystick_X_Rel_Mod = (Drive_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S255>/Switch2' incorporates:
   *  Constant: '<S247>/Constant'
   *  RelationalOperator: '<S255>/LowerRelop1'
   *  Sum: '<S247>/Subtract'
   */
  if (!(rtb_Steer_Joystick_X_Rel_Mod > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S247>/Constant1'
     *  RelationalOperator: '<S255>/UpperRelop'
     *  Sum: '<S247>/Subtract1'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod < (-1.0 - rtb_Add_oh)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_oh;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Steer_Joystick_X_Rel_Mod;
    }

    /* End of Switch: '<S255>/Switch' */
  }

  /* End of Switch: '<S255>/Switch2' */

  /* Saturate: '<S247>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Steer_Joystick_X_Rel_Mod = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Steer_Joystick_X_Rel_Mod = Drive_Motor_Control_I_LL;
  } else {
    rtb_Steer_Joystick_X_Rel_Mod = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S247>/Saturation1' */

  /* Sum: '<S247>/Add1' */
  cos_alpha = rtb_Add_oh + rtb_Steer_Joystick_X_Rel_Mod;

  /* Saturate: '<S247>/Saturation2' */
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

  /* End of Saturate: '<S247>/Saturation2' */

  /* Sum: '<S263>/Add1' incorporates:
   *  Constant: '<S263>/Constant3'
   *  Constant: '<S263>/Constant4'
   *  Math: '<S263>/Math Function'
   *  Sum: '<S263>/Add2'
   */
  rtb_Init_cv = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S265>/Sum1' incorporates:
   *  Constant: '<S250>/Constant2'
   *  Product: '<S265>/Product'
   *  Sum: '<S265>/Sum'
   *  UnitDelay: '<S265>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S250>/Product' incorporates:
   *  Constant: '<S250>/Constant3'
   */
  rtb_Subtract1_o = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S264>/Diff' incorporates:
   *  UnitDelay: '<S264>/UD'
   *
   * Block description for '<S264>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S264>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_o - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S250>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S250>/Add' incorporates:
   *  Gain: '<S250>/Gain1'
   *  Saturate: '<S250>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Init_cv) + cos_alpha;

  /* Sum: '<S250>/Subtract' incorporates:
   *  Constant: '<S250>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_fn;

  /* Sum: '<S250>/Sum2' incorporates:
   *  Gain: '<S250>/Gain2'
   *  UnitDelay: '<S250>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S266>/Switch2' incorporates:
   *  Constant: '<S250>/Constant'
   *  RelationalOperator: '<S266>/LowerRelop1'
   *  Sum: '<S250>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_fn))) {
    /* Switch: '<S266>/Switch' incorporates:
     *  Constant: '<S250>/Constant1'
     *  RelationalOperator: '<S266>/UpperRelop'
     *  Sum: '<S250>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_fn;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_e;
    }

    /* End of Switch: '<S266>/Switch' */
  }

  /* End of Switch: '<S266>/Switch2' */

  /* Saturate: '<S250>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S250>/Saturation1' */

  /* Sum: '<S250>/Add1' */
  cos_alpha = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S250>/Saturation2' */
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

  /* End of Saturate: '<S250>/Saturation2' */

  /* Product: '<S358>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch2_l;

  /* Switch: '<S368>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S368>/Switch' incorporates:
     *  Fcn: '<S369>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S368>/Switch' */

  /* Trigonometry: '<S280>/Cos4' incorporates:
   *  Switch: '<S269>/Angle_Switch'
   *  Trigonometry: '<S279>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S280>/Sin5' incorporates:
   *  UnaryMinus: '<S278>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S280>/Sin4' incorporates:
   *  Switch: '<S269>/Angle_Switch'
   *  Trigonometry: '<S279>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S280>/Cos5' incorporates:
   *  UnaryMinus: '<S278>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S280>/Subtract1' incorporates:
   *  Product: '<S280>/Product2'
   *  Product: '<S280>/Product3'
   *  Trigonometry: '<S280>/Cos4'
   *  Trigonometry: '<S280>/Sin4'
   */
  rtb_Subtract1_m = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S280>/Subtract' incorporates:
   *  Product: '<S280>/Product'
   *  Product: '<S280>/Product1'
   *  Trigonometry: '<S280>/Cos4'
   *  Trigonometry: '<S280>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_fn * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S280>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_m);

  /* Switch: '<S280>/Switch' incorporates:
   *  Constant: '<S280>/Constant'
   *  Constant: '<S280>/Constant1'
   *  Constant: '<S281>/Constant'
   *  Product: '<S280>/Divide'
   *  Product: '<S280>/Divide1'
   *  RelationalOperator: '<S281>/Compare'
   *  Switch: '<S280>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_Init_cv = rtb_Subtract1_m / rtb_Hypot_bl;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_bl;
  } else {
    rtb_Init_cv = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S280>/Switch' */

  /* Switch: '<S269>/Speed_Switch' incorporates:
   *  Abs: '<S269>/Abs'
   *  Constant: '<S277>/Constant'
   *  RelationalOperator: '<S277>/Compare'
   *  Switch: '<S269>/Angle_Switch'
   *  Trigonometry: '<S279>/Atan1'
   *  Trigonometry: '<S280>/Atan1'
   *  UnaryMinus: '<S269>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_cv, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch2_bk = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S279>/Subtract1' incorporates:
     *  Product: '<S279>/Product2'
     *  Product: '<S279>/Product3'
     *  UnaryMinus: '<S269>/Unary Minus'
     */
    rtb_Subtract1_m = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S279>/Subtract' incorporates:
     *  Product: '<S279>/Product'
     *  Product: '<S279>/Product1'
     */
    rtb_Subtract1_a1 = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S279>/Hypot' */
    rtb_Add_fn = rt_hypotd_snf(rtb_Subtract1_a1, rtb_Subtract1_m);

    /* Switch: '<S279>/Switch1' incorporates:
     *  Constant: '<S279>/Constant'
     *  Constant: '<S279>/Constant1'
     *  Constant: '<S282>/Constant'
     *  Product: '<S279>/Divide'
     *  Product: '<S279>/Divide1'
     *  RelationalOperator: '<S282>/Compare'
     *  Switch: '<S279>/Switch'
     */
    if (rtb_Add_fn > 1.0E-6) {
      rtb_Subtract1_a1 /= rtb_Add_fn;
      rtb_Add_fn = rtb_Subtract1_m / rtb_Add_fn;
    } else {
      rtb_Subtract1_a1 = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S279>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Subtract1_a1);
  } else {
    rtb_Switch2_bk = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S272>/Product2' incorporates:
   *  Constant: '<S272>/Constant'
   *  Switch: '<S269>/Speed_Switch'
   */
  rtb_Init_cv = rtb_Switch2_bk * 1530.1401357649195;

  /* Signum: '<S267>/Sign' */
  if (rtIsNaN(rtb_Init_cv)) {
    rtb_Switch2_bk = (rtNaN);
  } else if (rtb_Init_cv < 0.0) {
    rtb_Switch2_bk = -1.0;
  } else {
    rtb_Switch2_bk = (rtb_Init_cv > 0.0);
  }

  /* Signum: '<S267>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S270>/Add' incorporates:
   *  Sum: '<S271>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S242>/Product' incorporates:
   *  Abs: '<S267>/Abs'
   *  Abs: '<S270>/Abs'
   *  Constant: '<S273>/Constant'
   *  Constant: '<S283>/Constant3'
   *  Constant: '<S283>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S267>/OR'
   *  Lookup_n-D: '<S270>/1-D Lookup Table'
   *  Math: '<S283>/Math Function'
   *  RelationalOperator: '<S267>/Equal1'
   *  RelationalOperator: '<S273>/Compare'
   *  Signum: '<S267>/Sign'
   *  Signum: '<S267>/Sign1'
   *  Sum: '<S270>/Add'
   *  Sum: '<S283>/Add1'
   *  Sum: '<S283>/Add2'
   */
  rtb_Init_cv = (((real_T)((rtb_Switch2_bk == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S268>/Gain' */
  rtb_Subtract1_m = Drive_Motor_Control_FF * rtb_Init_cv;

  /* Sum: '<S268>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Init_cv -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S275>/Sum1' incorporates:
   *  Constant: '<S268>/Constant2'
   *  Product: '<S275>/Product'
   *  Sum: '<S275>/Sum'
   *  UnitDelay: '<S275>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S268>/Product' incorporates:
   *  Constant: '<S268>/Constant3'
   */
  rtb_Subtract1_a1 = rtb_Add_fn * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_a1 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S268>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S268>/Add' incorporates:
   *  Gain: '<S268>/Gain1'
   *  Saturate: '<S268>/Saturation'
   */
  rtb_Hypot_bl = ((Drive_Motor_Control_P * rtb_Init_cv) + rtb_Subtract1_m) +
    cos_alpha;

  /* Sum: '<S268>/Subtract' incorporates:
   *  Constant: '<S268>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_bl;

  /* Sum: '<S268>/Sum2' incorporates:
   *  Gain: '<S268>/Gain2'
   *  UnitDelay: '<S268>/Unit Delay'
   */
  rtb_Subtract1_m = (Drive_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S276>/Switch2' incorporates:
   *  Constant: '<S268>/Constant'
   *  RelationalOperator: '<S276>/LowerRelop1'
   *  Sum: '<S268>/Subtract'
   */
  if (!(rtb_Subtract1_m > (1.0 - rtb_Hypot_bl))) {
    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S268>/Constant1'
     *  RelationalOperator: '<S276>/UpperRelop'
     *  Sum: '<S268>/Subtract1'
     */
    if (rtb_Subtract1_m < (-1.0 - rtb_Hypot_bl)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_bl;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_m;
    }

    /* End of Switch: '<S276>/Switch' */
  }

  /* End of Switch: '<S276>/Switch2' */

  /* Saturate: '<S268>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_m = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_m = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_m = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S268>/Saturation1' */

  /* Sum: '<S268>/Add1' */
  cos_alpha = rtb_Hypot_bl + rtb_Subtract1_m;

  /* Saturate: '<S268>/Saturation2' */
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

  /* End of Saturate: '<S268>/Saturation2' */

  /* Sum: '<S284>/Add1' incorporates:
   *  Constant: '<S284>/Constant3'
   *  Constant: '<S284>/Constant4'
   *  Math: '<S284>/Math Function'
   *  Sum: '<S284>/Add2'
   */
  rtb_Init_cv = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S286>/Sum1' incorporates:
   *  Constant: '<S271>/Constant2'
   *  Product: '<S286>/Product'
   *  Sum: '<S286>/Sum'
   *  UnitDelay: '<S286>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S271>/Product' incorporates:
   *  Constant: '<S271>/Constant3'
   */
  rtb_Hypot_bl = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S285>/Diff' incorporates:
   *  UnitDelay: '<S285>/UD'
   *
   * Block description for '<S285>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S285>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Hypot_bl - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S271>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S271>/Add' incorporates:
   *  Gain: '<S271>/Gain1'
   *  Saturate: '<S271>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Init_cv) + cos_alpha;

  /* Sum: '<S271>/Subtract' incorporates:
   *  Constant: '<S271>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S271>/Sum2' incorporates:
   *  Gain: '<S271>/Gain2'
   *  UnitDelay: '<S271>/Unit Delay'
   */
  rtb_Subtract1_n = (Steering_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S287>/Switch2' incorporates:
   *  Constant: '<S271>/Constant'
   *  RelationalOperator: '<S287>/LowerRelop1'
   *  Sum: '<S271>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S287>/Switch' incorporates:
     *  Constant: '<S271>/Constant1'
     *  RelationalOperator: '<S287>/UpperRelop'
     *  Sum: '<S271>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_n;
    }

    /* End of Switch: '<S287>/Switch' */
  }

  /* End of Switch: '<S287>/Switch2' */

  /* Saturate: '<S271>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_n = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_n = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S271>/Saturation1' */

  /* Sum: '<S271>/Add1' */
  cos_alpha = rtb_Add_ik + rtb_Subtract1_n;

  /* Saturate: '<S271>/Saturation2' */
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

  /* End of Saturate: '<S271>/Saturation2' */

  /* Product: '<S358>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch2_l;

  /* Switch: '<S373>/Switch' */
  if (!rtb_AT_Tag_11_Active) {
    /* Switch: '<S373>/Switch' incorporates:
     *  Fcn: '<S374>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S373>/Switch' */

  /* Trigonometry: '<S301>/Cos4' incorporates:
   *  Switch: '<S290>/Angle_Switch'
   *  Trigonometry: '<S300>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S301>/Sin5' incorporates:
   *  UnaryMinus: '<S299>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S301>/Sin4' incorporates:
   *  Switch: '<S290>/Angle_Switch'
   *  Trigonometry: '<S300>/Sin4'
   */
  rtb_Subtract1_ie = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S301>/Cos5' incorporates:
   *  UnaryMinus: '<S299>/Unary Minus'
   */
  rtb_Init_cv = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S301>/Subtract1' incorporates:
   *  Product: '<S301>/Product2'
   *  Product: '<S301>/Product3'
   *  Trigonometry: '<S301>/Cos4'
   *  Trigonometry: '<S301>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_ie * rtb_Init_cv);

  /* Sum: '<S301>/Subtract' incorporates:
   *  Product: '<S301>/Product'
   *  Product: '<S301>/Product1'
   *  Trigonometry: '<S301>/Cos4'
   *  Trigonometry: '<S301>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ik * rtb_Init_cv) - (rtb_Subtract1_ie *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S301>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch2_l);

  /* Switch: '<S301>/Switch' incorporates:
   *  Constant: '<S301>/Constant'
   *  Constant: '<S301>/Constant1'
   *  Constant: '<S302>/Constant'
   *  Product: '<S301>/Divide'
   *  Product: '<S301>/Divide1'
   *  RelationalOperator: '<S302>/Compare'
   *  Switch: '<S301>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_l /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Init_cv = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Init_cv = 1.0;
  }

  /* End of Switch: '<S301>/Switch' */

  /* Switch: '<S290>/Speed_Switch' incorporates:
   *  Abs: '<S290>/Abs'
   *  Constant: '<S298>/Constant'
   *  RelationalOperator: '<S298>/Compare'
   *  Switch: '<S290>/Angle_Switch'
   *  Trigonometry: '<S300>/Atan1'
   *  Trigonometry: '<S301>/Atan1'
   *  UnaryMinus: '<S290>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Init_cv)) > 1.5707963267948966) {
    rtb_Switch2_bk = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S300>/Subtract1' incorporates:
     *  Product: '<S300>/Product2'
     *  Product: '<S300>/Product3'
     *  UnaryMinus: '<S290>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_ie * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S300>/Subtract' incorporates:
     *  Product: '<S300>/Product'
     *  Product: '<S300>/Product1'
     */
    rtb_Subtract1_ie = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_ie * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S300>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_ie, rtb_Subtract_n);

    /* Switch: '<S300>/Switch1' incorporates:
     *  Constant: '<S300>/Constant'
     *  Constant: '<S300>/Constant1'
     *  Constant: '<S303>/Constant'
     *  Product: '<S300>/Divide'
     *  Product: '<S300>/Divide1'
     *  RelationalOperator: '<S303>/Compare'
     *  Switch: '<S300>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_ie /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract_n / rtb_Add_ik;
    } else {
      rtb_Subtract1_ie = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S300>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_ie);
  } else {
    rtb_Switch2_bk = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S293>/Product2' incorporates:
   *  Constant: '<S293>/Constant'
   *  Switch: '<S290>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch2_bk * 1530.1401357649195;

  /* Signum: '<S288>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch2_bk = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch2_bk = -1.0;
  } else {
    rtb_Switch2_bk = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S288>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S291>/Add' incorporates:
   *  Sum: '<S292>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S243>/Product' incorporates:
   *  Abs: '<S288>/Abs'
   *  Abs: '<S291>/Abs'
   *  Constant: '<S294>/Constant'
   *  Constant: '<S304>/Constant3'
   *  Constant: '<S304>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S288>/OR'
   *  Lookup_n-D: '<S291>/1-D Lookup Table'
   *  Math: '<S304>/Math Function'
   *  RelationalOperator: '<S288>/Equal1'
   *  RelationalOperator: '<S294>/Compare'
   *  Signum: '<S288>/Sign'
   *  Signum: '<S288>/Sign1'
   *  Sum: '<S291>/Add'
   *  Sum: '<S304>/Add1'
   *  Sum: '<S304>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Switch2_bk == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S289>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S289>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S296>/Sum1' incorporates:
   *  Constant: '<S289>/Constant2'
   *  Product: '<S296>/Product'
   *  Sum: '<S296>/Sum'
   *  UnitDelay: '<S296>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S289>/Product' incorporates:
   *  Constant: '<S289>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_ik * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S289>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S289>/Add' incorporates:
   *  Gain: '<S289>/Gain1'
   *  Saturate: '<S289>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_n) +
    cos_alpha;

  /* Sum: '<S289>/Subtract' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Init_cv = 1.0 - rtb_Add_kv;

  /* Sum: '<S289>/Sum2' incorporates:
   *  Gain: '<S289>/Gain2'
   *  UnitDelay: '<S289>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S297>/Switch2' incorporates:
   *  Constant: '<S289>/Constant'
   *  RelationalOperator: '<S297>/LowerRelop1'
   *  Sum: '<S289>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S289>/Constant1'
     *  RelationalOperator: '<S297>/UpperRelop'
     *  Sum: '<S289>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_kv)) {
      rtb_Init_cv = -1.0 - rtb_Add_kv;
    } else {
      rtb_Init_cv = rtb_Switch2_l;
    }

    /* End of Switch: '<S297>/Switch' */
  }

  /* End of Switch: '<S297>/Switch2' */

  /* Saturate: '<S289>/Saturation1' */
  if (rtb_Init_cv > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Init_cv < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_Init_cv;
  }

  /* End of Saturate: '<S289>/Saturation1' */

  /* Sum: '<S289>/Add1' */
  cos_alpha = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S289>/Saturation2' */
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

  /* End of Saturate: '<S289>/Saturation2' */

  /* Sum: '<S305>/Add1' incorporates:
   *  Constant: '<S305>/Constant3'
   *  Constant: '<S305>/Constant4'
   *  Math: '<S305>/Math Function'
   *  Sum: '<S305>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S307>/Sum1' incorporates:
   *  Constant: '<S292>/Constant2'
   *  Product: '<S307>/Product'
   *  Sum: '<S307>/Sum'
   *  UnitDelay: '<S307>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S292>/Product' incorporates:
   *  Constant: '<S292>/Constant3'
   */
  rtb_Add_kv = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S306>/Diff' incorporates:
   *  UnitDelay: '<S306>/UD'
   *
   * Block description for '<S306>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S306>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S292>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S292>/Add' incorporates:
   *  Gain: '<S292>/Gain1'
   *  Saturate: '<S292>/Saturation'
   */
  rtb_Add_f1 = (Steering_Motor_Control_P * rtb_Switch2_l) + cos_alpha;

  /* Sum: '<S292>/Subtract' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_Init_cv = 1.0 - rtb_Add_f1;

  /* Sum: '<S292>/Sum2' incorporates:
   *  Gain: '<S292>/Gain2'
   *  UnitDelay: '<S292>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S308>/Switch2' incorporates:
   *  Constant: '<S292>/Constant'
   *  RelationalOperator: '<S308>/LowerRelop1'
   *  Sum: '<S292>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_f1))) {
    /* Switch: '<S308>/Switch' incorporates:
     *  Constant: '<S292>/Constant1'
     *  RelationalOperator: '<S308>/UpperRelop'
     *  Sum: '<S292>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_f1)) {
      rtb_Init_cv = -1.0 - rtb_Add_f1;
    } else {
      rtb_Init_cv = rtb_Switch2_l;
    }

    /* End of Switch: '<S308>/Switch' */
  }

  /* End of Switch: '<S308>/Switch2' */

  /* Saturate: '<S292>/Saturation1' */
  if (rtb_Init_cv > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_li = Steering_Motor_Control_I_UL;
  } else if (rtb_Init_cv < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_li = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_li = rtb_Init_cv;
  }

  /* End of Saturate: '<S292>/Saturation1' */

  /* Sum: '<S292>/Add1' */
  cos_alpha = rtb_Add_f1 + rtb_Subtract1_li;

  /* Saturate: '<S292>/Saturation2' */
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

  /* End of Saturate: '<S292>/Saturation2' */

  /* Chart: '<S13>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Prev_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (rtb_GameState != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Prev_GameState = rtb_GameState;
    }

    /* case IN_Not_Disabled: */
  } else if (rtb_GameState == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Prev_GameState = rtb_GameState;
  }

  /* End of Chart: '<S13>/Chart' */

  /* Gain: '<S137>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S138>/Compare' incorporates:
   *  Constant: '<S137>/Constant'
   *  Constant: '<S138>/Constant'
   */
  rtb_AT_Tag_11_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S137>/Switch1' incorporates:
   *  UnitDelay: '<S137>/Unit Delay1'
   */
  if (rtb_AT_Tag_11_Active) {
    rtb_Add_f1 = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_f1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S137>/Switch1' */

  /* Sum: '<S137>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_f1;

  /* Gain: '<S137>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S137>/Switch' incorporates:
   *  UnitDelay: '<S137>/Unit Delay'
   */
  if (rtb_AT_Tag_11_Active) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S137>/Switch' */

  /* Sum: '<S137>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  rtb_AND_p2 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S65>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S65>/Delay Input1'
   *
   * Block description for '<S65>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_13_Active = (((int32_T)rtb_AND_p2) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  rtb_Init_cv = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  rtb_Is_Absolute_Translation_g =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S66>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S66>/Delay Input1'
   *
   * Block description for '<S66>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_14_Active = (((int32_T)rtb_Is_Absolute_Translation_g) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_n));

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    4.0);

  /* RelationalOperator: '<S68>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S68>/Delay Input1'
   *
   * Block description for '<S68>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   */
  rtb_AT_Tag_11_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S67>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND2_k = (((int32_T)rtb_AT_Tag_11_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S69>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S69>/Delay Input1'
   *
   * Block description for '<S69>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   */
  rtb_AT_Tag_16_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* Chart: '<S8>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;
    Code_Gen_Model_B.Intake_Motor_DC = 0.0;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  } else {
    guard1 = false;
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Mod_IN_Extra_Run_Time2:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        guard1 = true;
      } else if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        guard1 = true;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time4:
      Code_Gen_Model_B.Note_State_ID = 4.2;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_16_Active)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

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
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Init_cv;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Init_cv;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.2;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_16_Active)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

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
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Co_IN_Note_Speaker_Score_Intake:
      Code_Gen_Model_B.Note_State_ID = 5.3;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist > Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_16_Active) {
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
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Init_cv;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Init_cv;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AT_Tag_16_Active) {
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
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
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
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_M_Waiting_for_Requests(&rtb_AT_Tag_13_Active,
        &rtb_AT_Tag_14_Active, &rtb_AT_Tag_15_Active, &rtb_AND2_k,
        &FixPtRelationalOperator_o, &rtb_Init_cv);
      break;
    }

    if (guard1) {
      Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
      Code_Gen_Model_B.Note_State_ID = 0.0;
      Code_Gen_Model_B.Intake_Motor_DC = 0.0;

      /* Outport: '<Root>/Shooter_Brake_Enable' */
      Code_Gen_Model_Y.Shooter_Brake_Enable = true;
      Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
    }
  }

  /* End of Chart: '<S8>/Chart_Intake_and_Shooter' */

  /* Switch: '<S8>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain4'
     *  Inport: '<Root>/Gamepad_LB'
     */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Test_DC_Gain_Intake *
      Code_Gen_Model_U.Gamepad_LB;
  } else {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Code_Gen_Model_B.Intake_Motor_DC;
  }

  /* End of Switch: '<S8>/Switch3' */

  /* Gain: '<S7>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_Switch2_l = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Sum: '<S70>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Error = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S70>/Add' incorporates:
   *  Gain: '<S70>/Gain'
   *  Gain: '<S70>/Gain1'
   */
  rtb_Add_aj = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Error);

  /* Switch: '<S70>/Switch' incorporates:
   *  Constant: '<S70>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S70>/Sum2' incorporates:
     *  Gain: '<S70>/Gain2'
     *  UnitDelay: '<S70>/Unit Delay'
     */
    rtb_Error = (Shooter_Motor_Control_I * rtb_Error) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S70>/Subtract' incorporates:
     *  Constant: '<S70>/Constant'
     */
    rtb_Init_cv = 1.0 - rtb_Add_aj;

    /* Switch: '<S72>/Switch2' incorporates:
     *  Constant: '<S70>/Constant'
     *  RelationalOperator: '<S72>/LowerRelop1'
     *  Sum: '<S70>/Subtract'
     */
    if (!(rtb_Error > (1.0 - rtb_Add_aj))) {
      /* Sum: '<S70>/Subtract1' incorporates:
       *  Constant: '<S70>/Constant1'
       */
      rtb_Init_cv = -1.0 - rtb_Add_aj;

      /* Switch: '<S72>/Switch' incorporates:
       *  Constant: '<S70>/Constant1'
       *  RelationalOperator: '<S72>/UpperRelop'
       *  Sum: '<S70>/Subtract1'
       */
      if (!(rtb_Error < (-1.0 - rtb_Add_aj))) {
        rtb_Init_cv = rtb_Error;
      }

      /* End of Switch: '<S72>/Switch' */
    }

    /* End of Switch: '<S72>/Switch2' */

    /* Saturate: '<S70>/Saturation1' */
    if (rtb_Init_cv > Shooter_Motor_Control_I_UL) {
      rtb_Error = Shooter_Motor_Control_I_UL;
    } else if (rtb_Init_cv < Shooter_Motor_Control_I_LL) {
      rtb_Error = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Error = rtb_Init_cv;
    }

    /* End of Saturate: '<S70>/Saturation1' */
  } else {
    rtb_Error = 0.0;
  }

  /* End of Switch: '<S70>/Switch' */

  /* Switch: '<S8>/Switch4' incorporates:
   *  Switch: '<S8>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S8>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_Switch2_l;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S70>/Add1' incorporates:
     *  Switch: '<S8>/Switch'
     */
    cos_alpha = rtb_Add_aj + rtb_Error;

    /* Saturate: '<S70>/Saturation2' incorporates:
     *  Switch: '<S8>/Switch'
     */
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

    /* End of Saturate: '<S70>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* Sum: '<S71>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Add_aj = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S71>/Add' incorporates:
   *  Gain: '<S71>/Gain'
   *  Gain: '<S71>/Gain1'
   */
  rtb_Init_cv = (Shooter_Motor_Control_FF *
                 Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Add_aj);

  /* Switch: '<S71>/Switch' incorporates:
   *  Constant: '<S71>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S71>/Sum2' incorporates:
     *  Gain: '<S71>/Gain2'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    rtb_Add_aj = (Shooter_Motor_Control_I * rtb_Add_aj) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S71>/Subtract' incorporates:
     *  Constant: '<S71>/Constant'
     */
    rtb_Switch2_bk = 1.0 - rtb_Init_cv;

    /* Switch: '<S73>/Switch2' incorporates:
     *  Constant: '<S71>/Constant'
     *  RelationalOperator: '<S73>/LowerRelop1'
     *  Sum: '<S71>/Subtract'
     */
    if (!(rtb_Add_aj > (1.0 - rtb_Init_cv))) {
      /* Sum: '<S71>/Subtract1' incorporates:
       *  Constant: '<S71>/Constant1'
       */
      rtb_Switch2_bk = -1.0 - rtb_Init_cv;

      /* Switch: '<S73>/Switch' incorporates:
       *  Constant: '<S71>/Constant1'
       *  RelationalOperator: '<S73>/UpperRelop'
       *  Sum: '<S71>/Subtract1'
       */
      if (!(rtb_Add_aj < (-1.0 - rtb_Init_cv))) {
        rtb_Switch2_bk = rtb_Add_aj;
      }

      /* End of Switch: '<S73>/Switch' */
    }

    /* End of Switch: '<S73>/Switch2' */

    /* Saturate: '<S71>/Saturation1' */
    if (rtb_Switch2_bk > Shooter_Motor_Control_I_UL) {
      rtb_Add_aj = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_bk < Shooter_Motor_Control_I_LL) {
      rtb_Add_aj = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_aj = rtb_Switch2_bk;
    }

    /* End of Saturate: '<S71>/Saturation1' */
  } else {
    rtb_Add_aj = 0.0;
  }

  /* End of Switch: '<S71>/Switch' */

  /* Switch: '<S8>/Switch5' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Switch2_l;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S71>/Add1' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    cos_alpha = rtb_Init_cv + rtb_Add_aj;

    /* Saturate: '<S71>/Saturation2' incorporates:
     *  Switch: '<S8>/Switch1'
     */
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

    /* End of Saturate: '<S71>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S8>/Switch5' */

  /* Sum: '<S22>/Subtract1' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   *  Product: '<S22>/Product'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  Code_Gen_Model_B.Ball_Screw_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  rtb_Switch2_bk = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(rtb_Switch2_bk)) || (rtIsInf(rtb_Switch2_bk))) {
    rtb_Switch2_bk = 0.0;
  } else {
    rtb_Switch2_bk = fmod(rtb_Switch2_bk, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_Switch2_bk < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Switch2_bk)))))) : ((int32_T)((uint8_T)
    rtb_Switch2_bk)));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant25'
   *  Constant: '<S14>/Constant26'
   *  Lookup_n-D: '<S14>/1-D Lookup Table'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Init_cv = TEST_Speaker_Height;
  } else {
    rtb_Init_cv = look1_binlcpw(TEST_Speaker_Angle,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 6U);
  }

  /* End of Switch: '<S14>/Switch4' */

  /* Sum: '<S20>/Subtract1' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   *  Product: '<S20>/Product'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Lower_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Lower * Dist_Per_Rev_Back_Lower) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g;

  /* Sum: '<S21>/Subtract1' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   *  Product: '<S21>/Product'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Upper_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Upper * Dist_Per_Rev_Back_Upper) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;

  /* Sum: '<S141>/Add' incorporates:
   *  Constant: '<S141>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S141>/Sqrt' incorporates:
   *  Math: '<S141>/Math Function'
   *  Sum: '<S141>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S23>/Subtract1' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S23>/Product'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;

  /* Sqrt: '<S145>/Sqrt' incorporates:
   *  Constant: '<S145>/Constant24'
   *  Math: '<S145>/Math Function'
   *  Sum: '<S145>/Add'
   *  Sum: '<S145>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* MATLAB Function: '<S14>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant12'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant22'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/Constant4'
   *  Constant: '<S14>/Constant5'
   *  Constant: '<S14>/Constant6'
   *  Constant: '<S14>/Constant7'
   *  Constant: '<S14>/Constant8'
   *  Constant: '<S14>/Constant9'
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
  rtb_Switch2_bk = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((rtb_Switch2_bk - 25.4) * (rtb_Switch2_bk - 25.4)) + (rtb_Switch2_l *
            rtb_Switch2_l));
  sqrt_input = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  sqrt_input = atan((rtb_Switch2_bk - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(sqrt_input);
  sin_alpha = sin(sqrt_input);
  sqrt_input = (d * cos_alpha) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((rtb_Switch2_bk - d) / (rtb_Switch2_l - sqrt_input)) -
    -0.16186298985390718;
  y = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  rtb_Switch2_bk = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((sqrt_input - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Switch2_bk - 465.697) * (rtb_Switch2_bk -
    465.697)) + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Switch2_bk;

  /* Gain: '<S14>/Gain2' incorporates:
   *  MATLAB Function: '<S14>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch2_l;

  /* Chart: '<S14>/Chart_Shooter_Position' incorporates:
   *  Constant: '<S14>/Constant26'
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
      if (rtb_GameState == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Shooter_Pos_State = 5.0;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_GameState == Code_Gen_Model_State_Stage) {
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
      if (rtb_GameState == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_GameState == Code_Gen_Model_State_Stage) {
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
      if (rtb_GameState == Code_Gen_Model_State_Stage) {
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
      if (rtb_GameState == Code_Gen_Model_State_Speaker) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Stage_to_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 1.0;
        Code_Gen_Model_B.Desired_Height = rtb_Init_cv;
      } else if (rtb_GameState == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Shooter_Pos_State = 5.0;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_GameState == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_GameState == Code_Gen_Model_State_Trap) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap;
        Code_Gen_Model_B.Shooter_Pos_State = 6.0;
        Code_Gen_Model_B.Desired_Angle = Trap_Angle;
        Code_Gen_Model_B.Desired_Height = Trap_Height;
        Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Stage_to_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 1.0;
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Init_cv + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Init_cv - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Init_cv;
        Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      }
      break;

     case Code_Gen_Model_IN_Trap:
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
      Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      if (rtb_GameState == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap_to_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
      }
      break;

     default:
      /* case IN_Trap_to_Stage: */
      if ((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
          (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;
    }
  }

  /* End of Chart: '<S14>/Chart_Shooter_Position' */

  /* Gain: '<S14>/Gain3' */
  rtb_Init_cv = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S14>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S14>/Constant10'
   *  Constant: '<S14>/Constant11'
   *  Constant: '<S14>/Constant13'
   *  Constant: '<S14>/Constant14'
   *  Constant: '<S14>/Constant15'
   *  Constant: '<S14>/Constant21'
   */
  rtb_Switch2_l = cos(rtb_Init_cv);
  rtb_Init_cv = sin(rtb_Init_cv);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    rtb_Switch2_bk = ((rtb_Switch2_l * 42.875) + ((-rtb_Init_cv) * -76.0)) +
      (sqrt(sqrt_input) - 50.027);
  } else {
    rtb_Switch2_bk = ((rtb_Switch2_l * 42.875) + ((-rtb_Init_cv) * -76.0)) -
      50.027;
  }

  rtb_Reshapey[0] = rtb_Switch2_bk;
  rtb_Minus_n[0] = ((rtb_Switch2_l * 155.54999999999998) + ((-rtb_Init_cv) *
    -25.4)) + rtb_Switch2_bk;
  rtb_Switch2_bk = ((rtb_Init_cv * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = rtb_Switch2_bk;
  rtb_Minus_n[1] = ((rtb_Init_cv * 155.54999999999998) + (rtb_Switch2_l * -25.4))
    + rtb_Switch2_bk;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Reshapey[1] - 25.4) *
    (rtb_Reshapey[1] - 25.4)) + (rtb_Reshapey[0] * rtb_Reshapey[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Switch2_l = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                       (rtb_Minus_n[1] * rtb_Minus_n[1]));
  sqrt_input = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_Switch2_l));
  rtb_Init_cv = ((288.925 / rtb_Switch2_l) * rtb_Minus_n[1]) -
    88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (sqrt_input * sqrt_input) + (rtb_Init_cv *
    rtb_Init_cv);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Switch2_l;

  /* End of MATLAB Function: '<S14>/Get_Arm_Lengths' */

  /* Switch: '<S172>/Init' incorporates:
   *  UnitDelay: '<S172>/FixPt Unit Delay1'
   *  UnitDelay: '<S172>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S172>/Init' */

  /* Sum: '<S170>/Sum1' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_BS_Length - rtb_Switch2_l;

  /* Switch: '<S171>/Switch2' incorporates:
   *  Constant: '<S154>/Constant1'
   *  Constant: '<S154>/Constant3'
   *  RelationalOperator: '<S171>/LowerRelop1'
   *  RelationalOperator: '<S171>/UpperRelop'
   *  Switch: '<S171>/Switch'
   */
  if (rtb_Init_cv > BS_Position_Inc_RL) {
    rtb_Init_cv = BS_Position_Inc_RL;
  } else if (rtb_Init_cv < BS_Position_Dec_RL) {
    /* Switch: '<S171>/Switch' incorporates:
     *  Constant: '<S154>/Constant1'
     */
    rtb_Init_cv = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S171>/Switch2' */

  /* Sum: '<S170>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Init_cv + rtb_Switch2_l;

  /* Sum: '<S148>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S157>/Sum1' incorporates:
   *  Constant: '<S148>/Constant2'
   *  Product: '<S157>/Product'
   *  Sum: '<S157>/Sum'
   *  UnitDelay: '<S157>/Unit Delay1'
   */
  rtb_Switch2_bk = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                    BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S148>/Product' incorporates:
   *  Constant: '<S148>/Constant3'
   */
  sqrt_input = rtb_Switch2_bk * BS_Deriv_Gain;

  /* Switch: '<S14>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S156>/Diff' incorporates:
     *  UnitDelay: '<S156>/UD'
     *
     * Block description for '<S156>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S156>/UD':
     *
     *  Store in Global RAM
     */
    cos_alpha = sqrt_input - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S148>/Saturation' */
    if (cos_alpha > BS_Deriv_UL) {
      cos_alpha = BS_Deriv_UL;
    } else if (cos_alpha < BS_Deriv_LL) {
      cos_alpha = BS_Deriv_LL;
    }

    /* Sum: '<S148>/Add' incorporates:
     *  Gain: '<S148>/Gain1'
     *  Saturate: '<S148>/Saturation'
     */
    cos_alpha += BS_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S148>/Saturation2' */
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

    /* End of Saturate: '<S148>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch3' */

  /* MATLAB Function: '<S14>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S14>/Constant23'
   *  Constant: '<S14>/Constant24'
   *  Constant: '<S14>/Constant28'
   *  Constant: '<S14>/Constant29'
   *  Constant: '<S14>/Constant30'
   *  Constant: '<S14>/Constant31'
   */
  rtb_Switch2_l = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                        Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_Switch2_l <= 98.425) {
    y = 79.375;
    rtb_Init_cv = 19.049999999999997;
  } else {
    y = fmin(fmax((((rtb_Switch2_l - 79.375) - 19.049999999999997) * 0.43) +
                  79.375, 79.375), 317.0);
    rtb_Init_cv = fmin(fmax(rtb_Switch2_l - y, 19.049999999999997), 334.0);
  }

  /* Switch: '<S169>/Init' incorporates:
   *  UnitDelay: '<S169>/FixPt Unit Delay1'
   *  UnitDelay: '<S169>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Init_cv;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S169>/Init' */

  /* Sum: '<S167>/Sum1' */
  rtb_Init_cv -= rtb_Switch2_l;

  /* Switch: '<S168>/Switch2' incorporates:
   *  Constant: '<S153>/Constant1'
   *  Constant: '<S153>/Constant3'
   *  RelationalOperator: '<S168>/LowerRelop1'
   *  RelationalOperator: '<S168>/UpperRelop'
   *  Switch: '<S168>/Switch'
   */
  if (rtb_Init_cv > AA_Position_Inc_RL) {
    rtb_Init_cv = AA_Position_Inc_RL;
  } else if (rtb_Init_cv < AA_Position_Dec_RL) {
    /* Switch: '<S168>/Switch' incorporates:
     *  Constant: '<S153>/Constant1'
     */
    rtb_Init_cv = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S168>/Switch2' */

  /* Sum: '<S167>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Init_cv + rtb_Switch2_l;

  /* Sum: '<S149>/Sum' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S149>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Init_cv;

  /* RelationalOperator: '<S143>/Compare' incorporates:
   *  Constant: '<S143>/Constant'
   */
  rtb_AT_Tag_13_Active = (rtb_GameState != 0);

  /* Switch: '<S149>/Switch' incorporates:
   *  Constant: '<S149>/Constant2'
   */
  if (rtb_AT_Tag_13_Active) {
    /* Switch: '<S149>/Switch1' incorporates:
     *  Constant: '<S149>/Constant3'
     *  UnitDelay: '<S158>/Delay Input1'
     *
     * Block description for '<S158>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      d = AA_Integral_IC;
    } else {
      /* Sum: '<S149>/Sum2' incorporates:
       *  Gain: '<S149>/Gain2'
       *  UnitDelay: '<S149>/Unit Delay'
       */
      rtb_Init_cv = (AA_Integral_Gain * rtb_Init_cv) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S149>/Subtract' incorporates:
       *  Constant: '<S149>/Constant'
       */
      d = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S159>/Switch2' incorporates:
       *  RelationalOperator: '<S159>/LowerRelop1'
       */
      if (!(rtb_Init_cv > d)) {
        /* Sum: '<S149>/Subtract1' incorporates:
         *  Constant: '<S149>/Constant1'
         */
        d = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S159>/Switch' incorporates:
         *  RelationalOperator: '<S159>/UpperRelop'
         */
        if (!(rtb_Init_cv < d)) {
          d = rtb_Init_cv;
        }

        /* End of Switch: '<S159>/Switch' */
      }

      /* End of Switch: '<S159>/Switch2' */

      /* Saturate: '<S149>/Saturation1' */
      if (d > AA_Integral_UL) {
        d = AA_Integral_UL;
      } else if (d < AA_Integral_LL) {
        d = AA_Integral_LL;
      }

      /* End of Saturate: '<S149>/Saturation1' */
    }

    /* End of Switch: '<S149>/Switch1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S149>/Switch' */

  /* Switch: '<S14>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S149>/Add1' */
    cos_alpha = rtb_Switch2_l + d;

    /* Saturate: '<S149>/Saturation2' */
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

    /* End of Saturate: '<S149>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Switch: '<S166>/Init' incorporates:
   *  MATLAB Function: '<S14>/Back_AA_To_Extentions'
   *  UnitDelay: '<S166>/FixPt Unit Delay1'
   *  UnitDelay: '<S166>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = y;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S166>/Init' */

  /* Sum: '<S164>/Sum1' incorporates:
   *  MATLAB Function: '<S14>/Back_AA_To_Extentions'
   */
  rtb_Init_cv = y - rtb_Switch2_l;

  /* Switch: '<S165>/Switch2' incorporates:
   *  Constant: '<S152>/Constant1'
   *  Constant: '<S152>/Constant3'
   *  RelationalOperator: '<S165>/LowerRelop1'
   *  RelationalOperator: '<S165>/UpperRelop'
   *  Switch: '<S165>/Switch'
   */
  if (rtb_Init_cv > AA_Position_Inc_RL) {
    rtb_Init_cv = AA_Position_Inc_RL;
  } else if (rtb_Init_cv < AA_Position_Dec_RL) {
    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S152>/Constant1'
     */
    rtb_Init_cv = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S165>/Switch2' */

  /* Sum: '<S164>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Init_cv + rtb_Switch2_l;

  /* Sum: '<S150>/Sum' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S150>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Init_cv;

  /* Switch: '<S150>/Switch' incorporates:
   *  Constant: '<S150>/Constant2'
   */
  if (rtb_AT_Tag_13_Active) {
    /* Switch: '<S150>/Switch1' incorporates:
     *  Constant: '<S150>/Constant3'
     *  UnitDelay: '<S160>/Delay Input1'
     *
     * Block description for '<S160>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      y = AA_Integral_IC;
    } else {
      /* Sum: '<S150>/Sum2' incorporates:
       *  Gain: '<S150>/Gain2'
       *  UnitDelay: '<S150>/Unit Delay'
       */
      rtb_Init_cv = (AA_Integral_Gain * rtb_Init_cv) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c2;

      /* Sum: '<S150>/Subtract' incorporates:
       *  Constant: '<S150>/Constant'
       */
      y = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S161>/Switch2' incorporates:
       *  RelationalOperator: '<S161>/LowerRelop1'
       */
      if (!(rtb_Init_cv > y)) {
        /* Sum: '<S150>/Subtract1' incorporates:
         *  Constant: '<S150>/Constant1'
         */
        y = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S161>/Switch' incorporates:
         *  RelationalOperator: '<S161>/UpperRelop'
         */
        if (!(rtb_Init_cv < y)) {
          y = rtb_Init_cv;
        }

        /* End of Switch: '<S161>/Switch' */
      }

      /* End of Switch: '<S161>/Switch2' */

      /* Saturate: '<S150>/Saturation1' */
      if (y > AA_Integral_UL) {
        y = AA_Integral_UL;
      } else if (y < AA_Integral_LL) {
        y = AA_Integral_LL;
      }

      /* End of Saturate: '<S150>/Saturation1' */
    }

    /* End of Switch: '<S150>/Switch1' */
  } else {
    y = 0.0;
  }

  /* End of Switch: '<S150>/Switch' */

  /* Switch: '<S14>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S150>/Add1' */
    cos_alpha = rtb_Switch2_l + y;

    /* Saturate: '<S150>/Saturation2' */
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

    /* End of Saturate: '<S150>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch' */

  /* Sum: '<S144>/Subtract1' incorporates:
   *  Constant: '<S144>/Constant24'
   *  Math: '<S144>/Math Function'
   *  Sqrt: '<S144>/Sqrt'
   *  Sum: '<S144>/Subtract'
   */
  rtb_Switch2_l = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                        Code_Gen_Model_B.Desired_Front_AA_Length) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S144>/Saturation' */
  if (rtb_Switch2_l > Front_AA_Max_Ext) {
    rtb_Switch2_l = Front_AA_Max_Ext;
  } else if (rtb_Switch2_l < Front_AA_Min_Ext) {
    rtb_Switch2_l = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S144>/Saturation' */

  /* Switch: '<S175>/Init' incorporates:
   *  UnitDelay: '<S175>/FixPt Unit Delay1'
   *  UnitDelay: '<S175>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Init_cv = rtb_Switch2_l;
  } else {
    rtb_Init_cv = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S175>/Init' */

  /* Sum: '<S173>/Sum1' */
  rtb_Switch2_l -= rtb_Init_cv;

  /* Switch: '<S174>/Switch2' incorporates:
   *  Constant: '<S155>/Constant1'
   *  Constant: '<S155>/Constant3'
   *  RelationalOperator: '<S174>/LowerRelop1'
   *  RelationalOperator: '<S174>/UpperRelop'
   *  Switch: '<S174>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S174>/Switch' incorporates:
     *  Constant: '<S155>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S174>/Switch2' */

  /* Sum: '<S173>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Init_cv;

  /* Sum: '<S151>/Sum' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S151>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Init_cv;

  /* Switch: '<S151>/Switch' incorporates:
   *  Constant: '<S151>/Constant2'
   */
  if (rtb_AT_Tag_13_Active) {
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S151>/Constant3'
     *  UnitDelay: '<S162>/Delay Input1'
     *
     * Block description for '<S162>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      rtb_Init_cv = AA_Integral_IC;
    } else {
      /* Sum: '<S151>/Sum2' incorporates:
       *  Gain: '<S151>/Gain2'
       *  UnitDelay: '<S151>/Unit Delay'
       */
      rtb_Init_cv = (AA_Integral_Gain * rtb_Init_cv) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S151>/Subtract' incorporates:
       *  Constant: '<S151>/Constant'
       */
      cos_alpha = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S163>/Switch2' incorporates:
       *  RelationalOperator: '<S163>/LowerRelop1'
       */
      if (!(rtb_Init_cv > cos_alpha)) {
        /* Sum: '<S151>/Subtract1' incorporates:
         *  Constant: '<S151>/Constant1'
         */
        cos_alpha = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S163>/Switch' incorporates:
         *  RelationalOperator: '<S163>/UpperRelop'
         */
        if (!(rtb_Init_cv < cos_alpha)) {
          cos_alpha = rtb_Init_cv;
        }

        /* End of Switch: '<S163>/Switch' */
      }

      /* End of Switch: '<S163>/Switch2' */

      /* Saturate: '<S151>/Saturation1' */
      if (cos_alpha > AA_Integral_UL) {
        rtb_Init_cv = AA_Integral_UL;
      } else if (cos_alpha < AA_Integral_LL) {
        rtb_Init_cv = AA_Integral_LL;
      } else {
        rtb_Init_cv = cos_alpha;
      }

      /* End of Saturate: '<S151>/Saturation1' */
    }

    /* End of Switch: '<S151>/Switch1' */
  } else {
    rtb_Init_cv = 0.0;
  }

  /* End of Switch: '<S151>/Switch' */

  /* Switch: '<S14>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S151>/Add1' */
    cos_alpha = rtb_Switch2_l + rtb_Init_cv;

    /* Saturate: '<S151>/Saturation2' */
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

    /* End of Saturate: '<S151>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch2' */

  /* Logic: '<S2>/Logical Operator' incorporates:
   *  Abs: '<S20>/Abs'
   *  Abs: '<S21>/Abs'
   *  Abs: '<S22>/Abs'
   *  Abs: '<S23>/Abs'
   *  Constant: '<S20>/Calibration_Tolerance'
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Constant: '<S21>/Calibration_Tolerance'
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Constant: '<S22>/Calibration_Tolerance'
   *  Constant: '<S22>/Dist_Reset_Value'
   *  Constant: '<S23>/Calibration_Tolerance'
   *  Constant: '<S23>/Dist_Reset_Value'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  Sum: '<S20>/Subtract'
   *  Sum: '<S21>/Subtract'
   *  Sum: '<S22>/Subtract'
   *  Sum: '<S23>/Subtract'
   */
  Code_Gen_Model_B.Is_All_Arms_Cal_Position = ((((fabs
    (Code_Gen_Model_B.Back_Lower_Arm_Length - Dist_Reset_Value_Back_Lower) <=
    Dist_AA_Cal_Tol) && (fabs(Code_Gen_Model_B.Back_Upper_Arm_Length -
    Dist_Reset_Value_Back_Upper) <= Dist_AA_Cal_Tol)) && (fabs
    (Code_Gen_Model_B.Front_Arm_Length - Dist_Reset_Value_Front) <=
    Dist_AA_Cal_Tol)) && (fabs(Code_Gen_Model_B.Ball_Screw_Arm_Length -
    Dist_Reset_Value_Ball_Screw) <= Dist_BS_Cal_Tol));

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant4'
   *  Switch: '<S8>/Switch6'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else if (Code_Gen_Model_B.Shooter_Servo) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S8>/Constant'
     *  Switch: '<S8>/Switch6'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Lookup_n-D: '<S8>/Lookup Servo based on Front Arm Extension'
     *  Sum: '<S23>/Subtract1'
     *  Switch: '<S8>/Switch6'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = look1_binlcpw
      (Code_Gen_Model_B.Front_Arm_Length,
       Code_Gen_Model_ConstP.LookupServobasedonFrontArmExt_h,
       Code_Gen_Model_ConstP.LookupServobasedonFrontArmExten, 7U);
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Update for UnitDelay: '<S129>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S130>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S131>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S132>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' incorporates:
     *  Bias: '<S204>/Bias'
     *  Merge: '<S178>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' incorporates:
     *  Bias: '<S204>/Bias'
     *  Merge: '<S178>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S74>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S94>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S74>/A'
   *  Delay: '<S74>/MemoryX'
   */
  rtb_Switch2_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  cos_alpha = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S74>/MemoryX' incorporates:
   *  Constant: '<S74>/B'
   *  Product: '<S94>/A[k]*xhat[k|k-1]'
   *  Product: '<S94>/B[k]*u[k]'
   *  Sum: '<S94>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch2_l) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + cos_alpha) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S128>/UD'
   *
   * Block description for '<S128>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Chain_DutyCycle;

  /* Update for DiscreteIntegrator: '<S12>/Accumulator2' incorporates:
   *  Constant: '<S12>/Constant'
   *  DiscreteIntegrator: '<S12>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S12>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S12>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_OR7;

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S341>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S341>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S355>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Gain1;

  /* Update for UnitDelay: '<S354>/UD'
   *
   * Block description for '<S354>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Merge1;

  /* Update for UnitDelay: '<S352>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S350>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S350>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S317>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S316>/UD'
   *
   * Block description for '<S316>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S310>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S328>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch4_g;

  /* Update for UnitDelay: '<S327>/UD'
   *
   * Block description for '<S327>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Sum1_li;

  /* Update for UnitDelay: '<S313>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S254>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Switch2_p;

  /* Update for UnitDelay: '<S253>/UD'
   *
   * Block description for '<S253>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S247>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Steer_Joystick_X_Rel_Mod;

  /* Update for UnitDelay: '<S265>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_oh;

  /* Update for UnitDelay: '<S264>/UD'
   *
   * Block description for '<S264>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_o;

  /* Update for UnitDelay: '<S250>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S275>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_fn;

  /* Update for UnitDelay: '<S274>/UD'
   *
   * Block description for '<S274>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a1;

  /* Update for UnitDelay: '<S268>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_m;

  /* Update for UnitDelay: '<S286>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S285>/UD'
   *
   * Block description for '<S285>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S271>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S296>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S295>/UD'
   *
   * Block description for '<S295>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S289>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S307>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S306>/UD'
   *
   * Block description for '<S306>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S292>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_li;

  /* Update for UnitDelay: '<S137>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_f1;

  /* Update for UnitDelay: '<S137>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S65>/Delay Input1'
   *
   * Block description for '<S65>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_AND_p2;

  /* Update for UnitDelay: '<S66>/Delay Input1'
   *
   * Block description for '<S66>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S68>/Delay Input1'
   *
   * Block description for '<S68>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S69>/Delay Input1'
   *
   * Block description for '<S69>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Error;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Add_aj;

  /* Update for UnitDelay: '<S172>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S172>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S157>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_bk;

  /* Update for UnitDelay: '<S156>/UD'
   *
   * Block description for '<S156>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = sqrt_input;

  /* Update for UnitDelay: '<S169>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S169>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S149>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = d;

  /* Update for UnitDelay: '<S158>/Delay Input1'
   *
   * Block description for '<S158>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_13_Active;

  /* Update for UnitDelay: '<S160>/Delay Input1'
   *
   * Block description for '<S160>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_13_Active;

  /* Update for UnitDelay: '<S166>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S166>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S150>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c2 = y;

  /* Update for UnitDelay: '<S162>/Delay Input1'
   *
   * Block description for '<S162>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_13_Active;

  /* Update for UnitDelay: '<S175>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S175>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S151>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Init_cv;
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

    /* Start for If: '<S15>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S74>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S341>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S350>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S20>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S172>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S169>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S166>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S175>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S410>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S182>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S178>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S182>/Robot_Index_Is_Valid' */
    /* Start for If: '<S185>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S185>/Circle_Check_Valid' */
    /* Start for If: '<S187>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S185>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S182>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S15>/Spline Path Following Enabled' */
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

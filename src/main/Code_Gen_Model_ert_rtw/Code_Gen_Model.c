/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.117
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Mar 10 16:37:37 2024
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
#define Co_IN_Note_Speaker_Score_Intake ((uint8_T)9U)
#define Co_IN_Note_Speaker_Score_SpinUp ((uint8_T)10U)
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)11U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)14U)
#define Code_Gen_Mod_IN_Extra_Run_Time2 ((uint8_T)2U)
#define Code_Gen_Mod_IN_Extra_Run_Time4 ((uint8_T)3U)
#define Code_Gen_Mod_IN_Extra_Run_Time5 ((uint8_T)4U)
#define Code_Gen_Mod_IN_Extra_Run_Time6 ((uint8_T)5U)
#define Code_Gen_Model_IN_Escape_Action ((uint8_T)1U)
#define Code_Gen_Model_IN_Note_Pickup  ((uint8_T)8U)
#define Code_Gen_Model_IN_Store_Servo  ((uint8_T)13U)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)6U)
#define Code_IN_Note_Intake_AND_Shooter ((uint8_T)7U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)12U)

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
                                        *   '<S151>/Gain2'
                                        *   '<S152>/Gain2'
                                        *   '<S153>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S151>/Constant3'
                                        *   '<S152>/Constant3'
                                        *   '<S153>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S151>/Saturation1'
                                        *   '<S152>/Saturation1'
                                        *   '<S153>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S151>/Saturation1'
                                        *   '<S152>/Saturation1'
                                        *   '<S153>/Saturation1'
                                        */
real_T AA_Position_Dec_RL = -2.0;      /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S154>/Constant1'
                                        *   '<S155>/Constant1'
                                        *   '<S157>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 2.0;       /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S154>/Constant3'
                                        *   '<S155>/Constant3'
                                        *   '<S157>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S151>/Gain1'
                                        *   '<S152>/Gain1'
                                        *   '<S153>/Gain1'
                                        */
real_T AA_TC_LL = -0.4;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S151>/Constant1'
                                        *   '<S151>/Saturation2'
                                        *   '<S152>/Constant1'
                                        *   '<S152>/Saturation2'
                                        *   '<S153>/Constant1'
                                        *   '<S153>/Saturation2'
                                        */
real_T AA_TC_UL = 0.4;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S151>/Constant'
                                        *   '<S151>/Saturation2'
                                        *   '<S152>/Constant'
                                        *   '<S152>/Saturation2'
                                        *   '<S153>/Constant'
                                        *   '<S153>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = 0.0;     /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S385>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S385>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S385>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S385>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S385>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S385>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S5>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S5>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S385>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = 0.0;      /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S385>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S5>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S5>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.3619;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S385>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.9213;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S385>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.3619;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S385>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.2902;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S385>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 10.3058;   /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S385>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S385>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.2352;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S385>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S385>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 4.1841;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S385>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.2902;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S385>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 4.1841;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S385>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.9213;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S385>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S385>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.5946;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S385>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S385>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.5946;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S385>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 0.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S389>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = 0.0;      /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S388>/Constant17'
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
                                        * Referenced by: '<S150>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S150>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S150>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S150>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -2.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S156>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 2.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S156>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S150>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S150>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S150>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S410>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S406>/Constant'
                                         *   '<S406>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S410>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S406>/Constant1'
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
                                        * Referenced by: '<S333>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S249>/Constant3'
                                        *   '<S270>/Constant3'
                                        *   '<S291>/Constant3'
                                        *   '<S312>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S249>/Constant2'
                                   *   '<S270>/Constant2'
                                   *   '<S291>/Constant2'
                                   *   '<S312>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S249>/Gain'
                                            *   '<S270>/Gain'
                                            *   '<S291>/Gain'
                                            *   '<S312>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S249>/Gain2'
                                        *   '<S270>/Gain2'
                                        *   '<S291>/Gain2'
                                        *   '<S312>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        *   '<S291>/Saturation1'
                                        *   '<S312>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        *   '<S291>/Saturation1'
                                        *   '<S312>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S249>/Gain1'
                                        *   '<S270>/Gain1'
                                        *   '<S291>/Gain1'
                                        *   '<S312>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S254>/Constant'
                            *   '<S275>/Constant'
                            *   '<S296>/Constant'
                            *   '<S317>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S24>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S146>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S146>/Saturation'
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
                                        * Referenced by:
                                        *   '<S6>/Constant2'
                                        *   '<S6>/Unit Delay1'
                                        */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S10>/Constant1'
                                        *   '<S10>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by:
                                          *   '<S10>/Constant'
                                          *   '<S387>/Constant'
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
                                        * Referenced by: '<S139>/Constant'
                                        */
real_T Servo_Position_Deploy = 0.0;    /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Position_Store = 0.8;     /* Variable: Servo_Position_Store
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
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
                                           *   '<S72>/Gain'
                                           *   '<S73>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S72>/Gain2'
                                         *   '<S73>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S72>/Saturation1'
                                          *   '<S73>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S72>/Saturation1'
                                         *   '<S73>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S72>/Gain1'
                                         *   '<S73>/Gain1'
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
                          * Referenced by: '<S234>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S234>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S181>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S194>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S234>/Constant3'
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
                                          * Referenced by: '<S390>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S354>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S354>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S354>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S354>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S353>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S354>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S354>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S354>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S354>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S354>/Constant1'
                                   *   '<S354>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S354>/Constant'
                                   *   '<S354>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S344>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S344>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S344>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S344>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S344>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S344>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S252>/Constant3'
                                        *   '<S273>/Constant3'
                                        *   '<S294>/Constant3'
                                        *   '<S315>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S252>/Constant2'
                                *   '<S273>/Constant2'
                                *   '<S294>/Constant2'
                                *   '<S315>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S252>/Saturation'
                                           *   '<S273>/Saturation'
                                           *   '<S294>/Saturation'
                                           *   '<S315>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S252>/Saturation'
                                          *   '<S273>/Saturation'
                                          *   '<S294>/Saturation'
                                          *   '<S315>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S252>/Gain2'
                                         *   '<S273>/Gain2'
                                         *   '<S294>/Gain2'
                                         *   '<S315>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S252>/Saturation1'
                                             *   '<S273>/Saturation1'
                                             *   '<S294>/Saturation1'
                                             *   '<S315>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S252>/Saturation1'
                                            *   '<S273>/Saturation1'
                                            *   '<S294>/Saturation1'
                                            *   '<S315>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S252>/Gain1'
                                        *   '<S273>/Gain1'
                                        *   '<S294>/Gain1'
                                        *   '<S315>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S388>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S388>/Constant1'
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
                        * Referenced by: '<S332>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S332>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S332>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S332>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S332>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S332>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S389>/Gain'
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
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
  } else if (*FixPtRelationalOperator_n) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
    Code_Gen_Model_B.Note_State_ID = 2.1;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

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
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
  } else if (*FixPtRelationalOperator_k) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
    Code_Gen_Model_B.Note_State_ID = 3.1;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
    Code_Gen_Model_DW.timer = 0.02;
  } else if (*FixPtRelationalOperator_o) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
    Code_Gen_Model_B.Note_State_ID = 5.1;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

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
  real_T rtb_Abs_n;
  real_T rtb_Add_dl;
  real_T rtb_Add_fn;
  real_T rtb_Add_ik;
  real_T rtb_Add_oh;
  real_T rtb_Chain_DutyCycle;
  real_T rtb_Gain1;
  real_T rtb_Gyro_Angle_Field;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Init_cv;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_Merge1;
  real_T rtb_Modulation_Drv;
  real_T rtb_Product_fi;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Steer_Joystick_X_Rel_Mod;
  real_T rtb_Subtract1_a1;
  real_T rtb_Subtract1_f5;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_m;
  real_T rtb_Subtract1_n;
  real_T rtb_Subtract1_o;
  real_T rtb_Subtract1_p5;
  real_T rtb_Sum1_li;
  real_T rtb_Sum2_e;
  real_T rtb_Switch;
  real_T rtb_Switch1_dm;
  real_T rtb_Switch1_e;
  real_T rtb_Switch1_k;
  real_T rtb_Switch1_n4;
  real_T rtb_Switch2_m;
  real_T rtb_Switch2_o;
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
  int32_T s206_iter;
  uint16_T s231_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  uint8_T rtb_GameState;
  boolean_T FixPtRelationalOperator_i;
  boolean_T FixPtRelationalOperator_o;
  boolean_T exitg1;
  boolean_T rtb_AND2_k;
  boolean_T rtb_AND_p2;
  boolean_T rtb_AT_Tag_11_Active;
  boolean_T rtb_AT_Tag_12_Active;
  boolean_T rtb_AT_Tag_13_Active;
  boolean_T rtb_AT_Tag_14_Active;
  boolean_T rtb_AT_Tag_15_Active;
  boolean_T rtb_AT_Tag_16_Active;
  boolean_T rtb_Arm_Dist_Cal_Flag;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_OR7;

  /* Sum: '<S239>/Add1' incorporates:
   *  Constant: '<S239>/Constant3'
   *  Constant: '<S239>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S239>/Math Function'
   *  Sum: '<S16>/Add'
   *  Sum: '<S239>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_Chain_DutyCycle = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S240>/Add1' incorporates:
   *  Constant: '<S240>/Constant3'
   *  Constant: '<S240>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S240>/Math Function'
   *  Sum: '<S16>/Add1'
   *  Sum: '<S240>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S241>/Add1' incorporates:
   *  Constant: '<S241>/Constant3'
   *  Constant: '<S241>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S241>/Math Function'
   *  Sum: '<S16>/Add2'
   *  Sum: '<S241>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product2' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S133>/Diff'
   *  UnitDelay: '<S133>/UD'
   *
   * Block description for '<S133>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S133>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S242>/Add1' incorporates:
   *  Constant: '<S242>/Constant3'
   *  Constant: '<S242>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S242>/Math Function'
   *  Sum: '<S16>/Add3'
   *  Sum: '<S242>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product3' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S134>/Diff'
   *  UnitDelay: '<S134>/UD'
   *
   * Block description for '<S134>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S134>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_cv = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                 Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S12>/Product7' incorporates:
   *  Fcn: '<S135>/r->x'
   *  Fcn: '<S135>/theta->y'
   *  Fcn: '<S136>/r->x'
   *  Fcn: '<S136>/theta->y'
   *  Fcn: '<S137>/r->x'
   *  Fcn: '<S137>/theta->y'
   *  Fcn: '<S138>/r->x'
   *  Fcn: '<S138>/theta->y'
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

  /* Reshape: '<S76>/Reshapey' incorporates:
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

  /* Delay: '<S76>/MemoryX' incorporates:
   *  Constant: '<S76>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  d = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(d)) || (rtIsInf(d))) {
    d = 0.0;
  } else {
    d = fmod(d, 256.0);
  }

  rtb_GameState = (uint8_T)((d < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)((uint8_T)
    (-d)))))) : ((int32_T)((uint8_T)d)));

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   */
  rtb_Arm_Dist_Cal_Flag = (rtb_GameState > 2);

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Constant2'
   *  Inport: '<Root>/Gamepad_B3_X'
   *  Inport: '<Root>/Gyro_Angle'
   *  Logic: '<S7>/OR8'
   *  RelationalOperator: '<S56>/FixPt Relational Operator'
   *  Sum: '<S6>/Sum'
   *  UnitDelay: '<S56>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (rtb_Arm_Dist_Cal_Flag && (Code_Gen_Model_U.Gamepad_B3_X >
       Code_Gen_Model_DW.DelayInput1_DSTATE)) {
    rtb_Chain_DutyCycle = Gyro_Calibration_Value - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Chain_DutyCycle = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Sum: '<S6>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Chain_DutyCycle;

  /* Gain: '<S25>/Gain1' */
  rtb_Gain1 = 0.017453292519943295 * Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Inport: '<Root>/IsRedAlliance'
   */
  if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
    d = 3.1415926535897931;
  } else {
    d = 0.0;
  }

  /* Sum: '<S6>/Add' incorporates:
   *  Switch: '<S6>/Switch'
   */
  rtb_Gyro_Angle_Field = rtb_Gain1 + d;

  /* Trigonometry: '<S12>/Trigonometric Function' */
  rtb_Abs_n = cos(rtb_Gyro_Angle_Field);

  /* Trigonometry: '<S12>/Trigonometric Function1' */
  rtb_Init_cv = sin(rtb_Gyro_Angle_Field);

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Abs_n;
  rtb_Rotationmatrixfromlocalto_1 = rtb_Init_cv;

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S12>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -rtb_Init_cv;
  rtb_Init_e = rtb_Abs_n;

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
  rtb_Abs_n = rtb_Gyro_Angle_Field - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S12>/Subtract2' incorporates:
   *  Constant: '<S12>/Constant3'
   *  Gain: '<S12>/Gain7'
   *  Math: '<S12>/Square'
   */
  rtb_Init_cv = 1.0 - ((rtb_Abs_n * rtb_Abs_n) * 0.16666666666666666);

  /* Gain: '<S12>/Gain6' */
  rtb_Abs_n *= 0.5;

  /* Product: '<S12>/Product7' incorporates:
   *  Constant: '<S12>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    d = 0.0;
    rtb_Num_Segments = 0;
    for (s206_iter = 0; s206_iter < 8; s206_iter++) {
      d += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s206_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = d;
  }

  /* End of Product: '<S12>/Product7' */

  /* Product: '<S12>/Product6' incorporates:
   *  SignalConversion generated from: '<S12>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S12>/Unary Minus2'
   */
  rtb_Sum1_li = (rtb_Init_cv * tmp[0]) + ((-rtb_Abs_n) * tmp[1]);
  rtb_Init_cv = (rtb_Abs_n * tmp[0]) + (rtb_Init_cv * tmp[1]);

  /* Product: '<S12>/Product6' incorporates:
   *  Concatenate: '<S12>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 * rtb_Sum1_li)
    + (rtb_Rotationmatrixfromlocalto_2 * rtb_Init_cv);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 * rtb_Sum1_li)
    + (rtb_Init_e * rtb_Init_cv);

  /* Outputs for Enabled SubSystem: '<S103>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S96>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S127>/Enable'
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

    /* Product: '<S127>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S76>/C'
     *  Delay: '<S76>/MemoryX'
     *  Product: '<S129>/Product'
     */
    rtb_Init_e = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Init_e;

    /* Sum: '<S127>/Sum' incorporates:
     *  Constant: '<S76>/D'
     *  Product: '<S127>/C[k]*xhat[k|k-1]'
     *  Product: '<S127>/D[k]*u[k]'
     *  Sum: '<S127>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_2 = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_1 = rtb_Reshapey[0] -
      (rtb_Rotationmatrixfromlocalto_2 + rtb_Init_e);

    /* Product: '<S127>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S76>/C'
     *  Delay: '<S76>/MemoryX'
     *  Product: '<S129>/Product'
     */
    rtb_Init_e = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Init_e;

    /* Sum: '<S127>/Sum' incorporates:
     *  Constant: '<S76>/D'
     *  Product: '<S127>/C[k]*xhat[k|k-1]'
     *  Product: '<S127>/D[k]*u[k]'
     *  Sum: '<S127>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[1] -
      (rtb_Rotationmatrixfromlocalto_2 + rtb_Init_e);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S127>/Product3' incorporates:
     *  Constant: '<S77>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_1) + (-2.0601714451538746E-17 *
      rtb_Rotationmatrixfromlocalto_2);

    /* Sum: '<S129>/Add1' incorporates:
     *  Product: '<S129>/Product'
     */
    rtb_Init_e = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S127>/Product3' incorporates:
     *  Constant: '<S77>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_1) + (0.095124921972504 *
      rtb_Rotationmatrixfromlocalto_2);

    /* Sum: '<S129>/Add1' incorporates:
     *  Product: '<S129>/Product'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S129>/Product2' incorporates:
     *  Constant: '<S77>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Init_e) +
      (5.9896845167210271E-17 * rtb_Rotationmatrixfromlocalto_2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Init_e) +
      (0.095124921972503981 * rtb_Rotationmatrixfromlocalto_2);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S127>/Product3' incorporates:
       *  Outport: '<S127>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S129>/Product2' incorporates:
       *  Outport: '<S129>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S10>/AND' */
  /* End of Outputs for SubSystem: '<S96>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S103>/Enabled Subsystem' */

  /* Sum: '<S103>/Add' incorporates:
   *  Delay: '<S76>/MemoryX'
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
   *  Constant: '<S33>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Logic: '<S7>/OR6'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
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

  /* SignalConversion: '<S7>/Signal Copy7' incorporates:
   *  Constant: '<S42>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   *  RelationalOperator: '<S42>/Compare'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* SignalConversion: '<S7>/Signal Copy8' incorporates:
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   *  RelationalOperator: '<S41>/Compare'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* SignalConversion: '<S7>/Signal Copy9' incorporates:
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   *  RelationalOperator: '<S40>/Compare'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* SignalConversion: '<S7>/Signal Copy16' incorporates:
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   *  RelationalOperator: '<S39>/Compare'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* SignalConversion: '<S7>/Signal Copy17' incorporates:
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   *  RelationalOperator: '<S38>/Compare'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* SignalConversion: '<S7>/Signal Copy19' incorporates:
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   *  RelationalOperator: '<S36>/Compare'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* SignalConversion: '<S7>/Signal Copy18' incorporates:
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   *  RelationalOperator: '<S37>/Compare'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* SignalConversion: '<S7>/Signal Copy10' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   *  RelationalOperator: '<S31>/Compare'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S49>/Constant'
   *  Constant: '<S50>/Constant'
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Inport: '<Root>/Gamepad_B3_X'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S7>/OR1'
   *  Logic: '<S7>/OR2'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   *  RelationalOperator: '<S53>/Compare'
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
  } else if (Code_Gen_Model_U.Gamepad_B3_X != 0.0) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant1'
     *  Switch: '<S7>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant2'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S7>/Constant3'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else if (Code_Gen_Model_U.Gamepad_B1_A != 0.0) {
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
   *  Constant: '<S34>/Constant'
   *  Constant: '<S45>/Constant'
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
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  Switch: '<S7>/Switch5'
   *  Switch: '<S7>/Switch6'
   *  Switch: '<S7>/Switch7'
   *  Switch: '<S7>/Switch8'
   *  UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((((int32_T)rtb_OR7) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_n)) ||
      (Code_Gen_Model_U.Gamepad_Stick_Right_Y <= Gamepad_Stick_Neg_Threshold)) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Switch: '<S7>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y <=
             Gamepad_Stick_Neg_Threshold) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant7'
     *  Switch: '<S7>/Switch5'
     *  Switch: '<S7>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >=
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
  d = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(d)) || (rtIsInf(d))) {
    d = 0.0;
  } else {
    d = fmod(d, 4.294967296E+9);
  }

  switch ((d < 0.0) ? (-((int32_T)((uint32_T)(-d)))) : ((int32_T)((uint32_T)d)))
  {
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

    /* Merge: '<S11>/Merge12' incorporates:
     *  Constant: '<S4>/Constant12'
     *  SignalConversion generated from: '<S4>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Outport: '<Root>/Chain_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant17'
     *  SignalConversion generated from: '<S4>/Chain_DutyCycle'
     */
    Code_Gen_Model_Y.Chain_DutyCycle = 0.0;

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

    /* Lookup_n-D: '<S385>/1-D Lookup Table' incorporates:
     *  Switch: '<S5>/Switch'
     */
    rtb_Rotationmatrixfromlocalto_1 = look1_binlcpw
      (Code_Gen_Model_B.Distance_Speaker,
       Code_Gen_Model_ConstP.uDLookupTable_bp01Data_g,
       Code_Gen_Model_ConstP.uDLookupTable_tableData_j, 8U);

    /* Logic: '<S385>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S385>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S385>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S385>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S385>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S385>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S385>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S385>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S385>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S385>/Logical Operator'
     *  Logic: '<S385>/Logical Operator1'
     *  Switch: '<S385>/Switch10'
     *  Switch: '<S385>/Switch11'
     *  Switch: '<S385>/Switch3'
     *  Switch: '<S385>/Switch4'
     *  Switch: '<S385>/Switch5'
     *  Switch: '<S385>/Switch6'
     *  Switch: '<S385>/Switch7'
     *  Switch: '<S385>/Switch8'
     *  Switch: '<S385>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S385>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S385>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Rotationmatrixfromlocalto_1 +
        Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S385>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S385>/Add8'
       *  Switch: '<S385>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Rotationmatrixfromlocalto_1 +
        Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S385>/Switch4' incorporates:
       *  Constant: '<S385>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S385>/Add7'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S385>/Switch5' incorporates:
       *  Constant: '<S385>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S385>/Add6'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S385>/Switch6' incorporates:
       *  Constant: '<S385>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S385>/Add5'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S385>/Switch7' incorporates:
       *  Constant: '<S385>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S385>/Add4'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S385>/Switch8' incorporates:
       *  Constant: '<S385>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S385>/Add3'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       *  Switch: '<S385>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S385>/Switch9' incorporates:
       *  Constant: '<S385>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S385>/Add2'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       *  Switch: '<S385>/Switch7'
       *  Switch: '<S385>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S385>/Switch10' incorporates:
       *  Constant: '<S385>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S385>/Add1'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       *  Switch: '<S385>/Switch7'
       *  Switch: '<S385>/Switch8'
       *  Switch: '<S385>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S385>/Switch11' incorporates:
       *  Constant: '<S385>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S385>/Add'
       *  Switch: '<S385>/Switch10'
       *  Switch: '<S385>/Switch2'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       *  Switch: '<S385>/Switch7'
       *  Switch: '<S385>/Switch8'
       *  Switch: '<S385>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S385>/Switch2' incorporates:
       *  Constant: '<S385>/Constant'
       *  Switch: '<S385>/Switch10'
       *  Switch: '<S385>/Switch11'
       *  Switch: '<S385>/Switch3'
       *  Switch: '<S385>/Switch4'
       *  Switch: '<S385>/Switch5'
       *  Switch: '<S385>/Switch6'
       *  Switch: '<S385>/Switch7'
       *  Switch: '<S385>/Switch8'
       *  Switch: '<S385>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S385>/Switch2' */

    /* Switch: '<S390>/Switch' incorporates:
     *  Constant: '<S390>/Constant'
     *  Constant: '<S390>/Constant1'
     *  Constant: '<S390>/Constant2'
     *  Math: '<S390>/Hypot'
     *  RelationalOperator: '<S390>/GreaterThan'
     *  Switch: '<S390>/Switch1'
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

    /* End of Switch: '<S390>/Switch' */

    /* Logic: '<S388>/AND' incorporates:
     *  Constant: '<S391>/Constant'
     *  Constant: '<S392>/Constant'
     *  Logic: '<S398>/AND'
     *  RelationalOperator: '<S391>/Compare'
     *  RelationalOperator: '<S392>/Compare'
     */
    rtb_AND_p2 = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Rotationmatrixfromlocalto_2
      == 0.0));

    /* Logic: '<S388>/AND2' incorporates:
     *  RelationalOperator: '<S393>/FixPt Relational Operator'
     *  RelationalOperator: '<S394>/FixPt Relational Operator'
     *  RelationalOperator: '<S395>/FixPt Relational Operator'
     *  RelationalOperator: '<S396>/FixPt Relational Operator'
     *  UnitDelay: '<S393>/Delay Input1'
     *  UnitDelay: '<S394>/Delay Input1'
     *  UnitDelay: '<S395>/Delay Input1'
     *  UnitDelay: '<S396>/Delay Input1'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S394>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S395>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S396>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ki))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant1'
     *  Constant: '<S388>/Constant17'
     *  Constant: '<S388>/Constant2'
     *  Logic: '<S388>/AND'
     *  Logic: '<S388>/AND4'
     *  Logic: '<S388>/NOT1'
     *  Product: '<S388>/Product1'
     *  Product: '<S388>/Product2'
     *  Sum: '<S388>/Add'
     *  Sum: '<S388>/Sum'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    if (rtb_AND_p2 && (!rtb_AND2_k)) {
      rtb_Rotationmatrixfromlocalto_1 = ((Code_Gen_Model_B.Steer_Joystick_Z *
        Steering_Twist_Gain) + (Code_Gen_Model_B.AT_Error_Yaw *
        AT_Yaw_Control_Gain)) + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Rotationmatrixfromlocalto_1 = 0.0;
    }

    /* End of Switch: '<S388>/Switch1' */

    /* Switch: '<S398>/Switch1' incorporates:
     *  Switch: '<S398>/Switch2'
     *  UnitDelay: '<S398>/Unit Delay'
     *  UnitDelay: '<S398>/Unit Delay1'
     */
    if (rtb_AND_p2) {
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Init_e = rtb_Rotationmatrixfromlocalto_2;
    }

    /* End of Switch: '<S398>/Switch1' */

    /* Logic: '<S388>/AND1' incorporates:
     *  Logic: '<S388>/AND'
     *  Logic: '<S388>/AND3'
     *  UnitDelay: '<S388>/Unit Delay2'
     */
    rtb_AND_p2 = (rtb_AND_p2 && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S388>/Switch4' incorporates:
     *  Constant: '<S388>/Constant5'
     *  Switch: '<S388>/Switch5'
     *  Switch: '<S388>/Switch6'
     *  Switch: '<S388>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S388>/Switch5' incorporates:
       *  Constant: '<S388>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S388>/Switch6' incorporates:
       *  Constant: '<S388>/Constant7'
       *  Switch: '<S388>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S388>/Switch7' incorporates:
       *  Constant: '<S388>/Constant8'
       *  Switch: '<S388>/Switch5'
       *  Switch: '<S388>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S388>/Switch6' incorporates:
       *  Switch: '<S388>/Switch5'
       *  UnitDelay: '<S388>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S388>/Switch4' */

    /* Switch: '<S388>/Switch3' incorporates:
     *  Logic: '<S388>/NOT'
     *  Trigonometry: '<S388>/Atan2'
     */
    if (!rtb_AND_p2) {
      d = rt_atan2d_snf(rtb_Init_e, rtb_UnitDelay1_gi);
    } else {
      d = rtb_Switch4_g;
    }

    /* Merge: '<S11>/Merge1' incorporates:
     *  Sum: '<S388>/Sum1'
     *  Switch: '<S388>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = d + rtb_Rotationmatrixfromlocalto_1;

    /* RelationalOperator: '<S401>/Compare' incorporates:
     *  Constant: '<S401>/Constant'
     */
    rtb_AND2_k = (rtb_UnitDelay1_gi < 0.0);

    /* Switch: '<S397>/Switch' incorporates:
     *  Constant: '<S397>/Constant'
     *  Constant: '<S397>/Constant1'
     *  Constant: '<S399>/Constant'
     *  Constant: '<S400>/Constant'
     *  Logic: '<S397>/Logical Operator'
     *  RelationalOperator: '<S399>/Compare'
     *  RelationalOperator: '<S400>/Compare'
     *  UnitDelay: '<S397>/Unit Delay'
     */
    if (((rtb_Init_e < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0)) &&
        rtb_AND2_k) {
      d = 6.2831853071795862;
    } else {
      d = 0.0;
    }

    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S397>/Constant2'
     *  Constant: '<S397>/Constant3'
     *  Constant: '<S402>/Constant'
     *  Constant: '<S403>/Constant'
     *  Logic: '<S397>/Logical Operator1'
     *  RelationalOperator: '<S402>/Compare'
     *  RelationalOperator: '<S403>/Compare'
     *  UnitDelay: '<S397>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Init_e >= 0.0)) &&
        rtb_AND2_k) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S397>/Sum1' incorporates:
     *  Switch: '<S397>/Switch'
     *  Switch: '<S397>/Switch1'
     *  UnitDelay: '<S397>/Unit Delay1'
     */
    rtb_Sum1_li = (d + rtb_Add_ik) + Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* RelationalOperator: '<S387>/Compare' incorporates:
     *  Constant: '<S387>/Constant'
     *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
     */
    rtb_AND2_k = (Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
                  KF_Vision_Ambiguity_Thresh);

    /* Switch: '<S385>/Switch23' incorporates:
     *  Logic: '<S385>/AND10'
     *  Logic: '<S385>/AND11'
     *  Logic: '<S385>/AND12'
     *  Logic: '<S385>/AND13'
     *  Logic: '<S385>/AND14'
     *  Logic: '<S385>/AND15'
     *  Logic: '<S385>/AND2'
     *  Logic: '<S385>/AND3'
     *  Switch: '<S385>/Switch1'
     *  Switch: '<S385>/Switch12'
     *  Switch: '<S385>/Switch13'
     *  Switch: '<S385>/Switch14'
     *  Switch: '<S385>/Switch15'
     *  Switch: '<S385>/Switch16'
     *  Switch: '<S385>/Switch19'
     *  Switch: '<S385>/Switch20'
     *  Switch: '<S385>/Switch21'
     *  Switch: '<S385>/Switch22'
     *  Switch: '<S385>/Switch24'
     *  Switch: '<S385>/Switch25'
     *  Switch: '<S385>/Switch26'
     */
    if (rtb_Is_Absolute_Translation_g && rtb_AND2_k) {
      /* Switch: '<S385>/Switch23' incorporates:
       *  Constant: '<S385>/Constant28'
       *  Sum: '<S385>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S385>/Switch15' incorporates:
       *  Constant: '<S385>/Constant9'
       *  Sum: '<S385>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_Is_Absolute_Steering && rtb_AND2_k) {
      /* Switch: '<S385>/Switch23' incorporates:
       *  Constant: '<S385>/Constant27'
       *  Sum: '<S385>/Add22'
       *  Switch: '<S385>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S385>/Switch15' incorporates:
       *  Constant: '<S385>/Constant5'
       *  Sum: '<S385>/Add16'
       *  Switch: '<S385>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_11_Active && rtb_AND2_k) {
      /* Switch: '<S385>/Switch23' incorporates:
       *  Constant: '<S385>/Constant26'
       *  Sum: '<S385>/Add12'
       *  Switch: '<S385>/Switch19'
       *  Switch: '<S385>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S385>/Switch15' incorporates:
       *  Constant: '<S385>/Constant4'
       *  Sum: '<S385>/Add10'
       *  Switch: '<S385>/Switch1'
       *  Switch: '<S385>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_12_Active && rtb_AND2_k) {
      /* Switch: '<S385>/Switch20' incorporates:
       *  Constant: '<S385>/Constant3'
       *  Sum: '<S385>/Add13'
       *  Switch: '<S385>/Switch19'
       *  Switch: '<S385>/Switch23'
       *  Switch: '<S385>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S385>/Switch12' incorporates:
       *  Constant: '<S385>/Constant17'
       *  Sum: '<S385>/Add11'
       *  Switch: '<S385>/Switch1'
       *  Switch: '<S385>/Switch15'
       *  Switch: '<S385>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_13_Active && rtb_AND2_k) {
      /* Switch: '<S385>/Switch21' incorporates:
       *  Constant: '<S385>/Constant21'
       *  Sum: '<S385>/Add20'
       *  Switch: '<S385>/Switch19'
       *  Switch: '<S385>/Switch20'
       *  Switch: '<S385>/Switch23'
       *  Switch: '<S385>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S385>/Switch13' incorporates:
       *  Constant: '<S385>/Constant18'
       *  Sum: '<S385>/Add14'
       *  Switch: '<S385>/Switch1'
       *  Switch: '<S385>/Switch12'
       *  Switch: '<S385>/Switch15'
       *  Switch: '<S385>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_14_Active && rtb_AND2_k) {
      /* Switch: '<S385>/Switch22' incorporates:
       *  Constant: '<S385>/Constant23'
       *  Sum: '<S385>/Add21'
       *  Switch: '<S385>/Switch19'
       *  Switch: '<S385>/Switch20'
       *  Switch: '<S385>/Switch21'
       *  Switch: '<S385>/Switch23'
       *  Switch: '<S385>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S385>/Switch14' incorporates:
       *  Constant: '<S385>/Constant19'
       *  Sum: '<S385>/Add15'
       *  Switch: '<S385>/Switch1'
       *  Switch: '<S385>/Switch12'
       *  Switch: '<S385>/Switch13'
       *  Switch: '<S385>/Switch15'
       *  Switch: '<S385>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;
    } else {
      if (rtb_AT_Tag_15_Active && rtb_AND2_k) {
        /* Switch: '<S385>/Switch25' incorporates:
         *  Constant: '<S385>/Constant24'
         *  Sum: '<S385>/Add24'
         *  Switch: '<S385>/Switch19'
         *  Switch: '<S385>/Switch20'
         *  Switch: '<S385>/Switch21'
         *  Switch: '<S385>/Switch22'
         *  Switch: '<S385>/Switch23'
         *  Switch: '<S385>/Switch24'
         */
        Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Tag_16_Active && rtb_AND2_k) {
        /* Switch: '<S385>/Switch26' incorporates:
         *  Constant: '<S385>/Constant25'
         *  Sum: '<S385>/Add25'
         *  Switch: '<S385>/Switch19'
         *  Switch: '<S385>/Switch20'
         *  Switch: '<S385>/Switch21'
         *  Switch: '<S385>/Switch22'
         *  Switch: '<S385>/Switch23'
         *  Switch: '<S385>/Switch24'
         *  Switch: '<S385>/Switch25'
         */
        Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
          Code_Gen_Model_B.KF_Position_Y;
      } else {
        /* Switch: '<S385>/Switch23' incorporates:
         *  Constant: '<S385>/Constant2'
         *  Switch: '<S385>/Switch19'
         *  Switch: '<S385>/Switch20'
         *  Switch: '<S385>/Switch21'
         *  Switch: '<S385>/Switch22'
         *  Switch: '<S385>/Switch24'
         *  Switch: '<S385>/Switch25'
         *  Switch: '<S385>/Switch26'
         */
        Code_Gen_Model_B.AT_Error_Y = 0.0;
      }

      /* Switch: '<S385>/Switch17' incorporates:
       *  Logic: '<S385>/AND15'
       *  Logic: '<S385>/AND8'
       *  Logic: '<S385>/AND9'
       *  Switch: '<S385>/Switch1'
       *  Switch: '<S385>/Switch12'
       *  Switch: '<S385>/Switch13'
       *  Switch: '<S385>/Switch14'
       *  Switch: '<S385>/Switch16'
       *  Switch: '<S385>/Switch18'
       *  Switch: '<S385>/Switch19'
       *  Switch: '<S385>/Switch20'
       *  Switch: '<S385>/Switch21'
       *  Switch: '<S385>/Switch22'
       *  Switch: '<S385>/Switch24'
       *  Switch: '<S385>/Switch25'
       *  Switch: '<S385>/Switch26'
       */
      if (rtb_AT_Tag_15_Active && rtb_AND2_k) {
        /* Switch: '<S385>/Switch15' incorporates:
         *  Constant: '<S385>/Constant20'
         *  Sum: '<S385>/Add18'
         */
        Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Tag_16_Active && rtb_AND2_k) {
        /* Switch: '<S385>/Switch18' incorporates:
         *  Constant: '<S385>/Constant22'
         *  Sum: '<S385>/Add19'
         *  Switch: '<S385>/Switch15'
         */
        Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
          Code_Gen_Model_B.KF_Position_X;
      } else {
        /* Switch: '<S385>/Switch15' incorporates:
         *  Constant: '<S385>/Constant1'
         *  Switch: '<S385>/Switch18'
         */
        Code_Gen_Model_B.AT_Error_X = 0.0;
      }

      /* End of Switch: '<S385>/Switch17' */
    }

    /* End of Switch: '<S385>/Switch23' */

    /* Switch: '<S409>/Switch1' incorporates:
     *  Constant: '<S414>/Constant'
     *  Constant: '<S415>/Constant'
     *  Logic: '<S409>/AND'
     *  RelationalOperator: '<S414>/Compare'
     *  RelationalOperator: '<S415>/Compare'
     *  Switch: '<S409>/Switch2'
     *  UnitDelay: '<S409>/Unit Delay'
     *  UnitDelay: '<S409>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S409>/Switch1' */

    /* Lookup_n-D: '<S389>/Modulation_Drv' incorporates:
     *  Math: '<S389>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S407>/Compare' incorporates:
     *  Constant: '<S407>/Constant'
     */
    rtb_AT_Tag_11_Active = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S389>/Logical Operator' incorporates:
     *  Constant: '<S408>/Constant'
     *  RelationalOperator: '<S408>/Compare'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_AT_Tag_11_Active);

    /* Switch: '<S389>/Switch1' incorporates:
     *  Switch: '<S389>/Switch4'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S11>/Merge3' incorporates:
       *  Constant: '<S389>/Constant3'
       */
      Code_Gen_Model_B.Translation_Angle = 1.5707963267948966;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S389>/Switch6' incorporates:
       *  Constant: '<S389>/Constant'
       *  Constant: '<S389>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S389>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        d = 3.1415926535897931;
      } else {
        d = 0.0;
      }

      /* Merge: '<S11>/Merge3' incorporates:
       *  Sum: '<S389>/Add1'
       *  Switch: '<S389>/Switch4'
       *  Switch: '<S389>/Switch6'
       *  Trigonometry: '<S389>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + d;
    } else {
      /* Merge: '<S11>/Merge3' incorporates:
       *  Switch: '<S389>/Switch4'
       *  Trigonometry: '<S389>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_o);
    }

    /* End of Switch: '<S389>/Switch1' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S389>/Switch3'
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

    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S406>/Constant'
     *  Constant: '<S406>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_High_Speed;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S406>/Switch1' */

    /* Switch: '<S413>/Init' incorporates:
     *  UnitDelay: '<S413>/FixPt Unit Delay1'
     *  UnitDelay: '<S413>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Rotationmatrixfromlocalto_2 = rtb_Steer_Joystick_X_Rel_Mod;
    } else {
      rtb_Rotationmatrixfromlocalto_2 =
        Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S413>/Init' */

    /* Sum: '<S411>/Sum1' */
    rtb_Steer_Joystick_X_Rel_Mod -= rtb_Rotationmatrixfromlocalto_2;

    /* Switch: '<S412>/Switch2' incorporates:
     *  Constant: '<S410>/Constant1'
     *  Constant: '<S410>/Constant3'
     *  RelationalOperator: '<S412>/LowerRelop1'
     *  RelationalOperator: '<S412>/UpperRelop'
     *  Switch: '<S412>/Switch'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod > Boost_Trigger_Increasing_Limit) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Steer_Joystick_X_Rel_Mod < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S412>/Switch' incorporates:
       *  Constant: '<S410>/Constant1'
       */
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S412>/Switch2' */

    /* Sum: '<S411>/Sum' */
    rtb_Rotationmatrixfromlocalto_2 += rtb_Steer_Joystick_X_Rel_Mod;

    /* Switch: '<S389>/Switch' incorporates:
     *  Switch: '<S389>/Switch2'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S389>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_AT_Tag_11_Active) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S389>/Gain2'
       *  Math: '<S389>/Magnitude1'
       *  Switch: '<S389>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S406>/Product' incorporates:
       *  Switch: '<S389>/Switch2'
       */
      rtb_Switch2_m = rtb_Modulation_Drv * rtb_Rotationmatrixfromlocalto_2;

      /* Saturate: '<S406>/Saturation' incorporates:
       *  Switch: '<S389>/Switch2'
       */
      if (rtb_Switch2_m > Boost_Trigger_High_Speed) {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Switch2_m < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Switch2_m;
      }

      /* End of Saturate: '<S406>/Saturation' */
    }

    /* End of Switch: '<S389>/Switch' */

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
     *  Constant: '<S388>/Constant'
     *  Lookup_n-D: '<S388>/Modulation_Str_Y_Rel'
     *  Product: '<S388>/Product'
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

    /* Update for UnitDelay: '<S388>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Rotationmatrixfromlocalto_1;

    /* Update for UnitDelay: '<S393>/Delay Input1'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S394>/Delay Input1'
     *
     * Block description for '<S394>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ki = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S395>/Delay Input1'
     *
     * Block description for '<S395>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S396>/Delay Input1'
     *
     * Block description for '<S396>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S398>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Init_e;

    /* Update for UnitDelay: '<S398>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S388>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND_p2;

    /* Update for UnitDelay: '<S388>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Init_e;

    /* Update for UnitDelay: '<S397>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_Sum1_li;

    /* Update for UnitDelay: '<S409>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S413>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S413>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S413>/FixPt Unit Delay1' */
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
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S19>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S19>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

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
   *  Constant: '<S231>/Constant'
   *  Logic: '<S231>/AND'
   *  MATLAB Function: '<S181>/Find closest index to curve'
   *  Product: '<S231>/Product'
   *  RelationalOperator: '<S231>/Relational Operator'
   *  RelationalOperator: '<S231>/Relational Operator1'
   *  Selector: '<S231>/Selector'
   *  Selector: '<S231>/Selector1'
   *  Selector: '<S232>/Selector'
   *  Sum: '<S231>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S184>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S187>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S189>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S184>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S15>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S179>/Action Port'
       */
      /* InitializeConditions for If: '<S15>/If' incorporates:
       *  UnitDelay: '<S179>/Unit Delay'
       *  UnitDelay: '<S180>/Unit Delay'
       *  UnitDelay: '<S182>/Unit Delay'
       *  UnitDelay: '<S182>/Unit Delay1'
       *  UnitDelay: '<S232>/Unit Delay'
       *  UnitDelay: '<S232>/Unit Delay1'
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
     *  ActionPort: '<S179>/Action Port'
     */
    /* Selector: '<S180>/Selector1' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S180>/Selector1' */

    /* Lookup_n-D: '<S179>/Capture Radius' incorporates:
     *  UnitDelay: '<S179>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_1 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S180>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S180>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S184>/If' incorporates:
     *  RelationalOperator: '<S184>/ '
     *  UnitDelay: '<S180>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S187>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S189>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S184>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S187>/Action Port'
       */
      /* InitializeConditions for If: '<S184>/If' incorporates:
       *  UnitDelay: '<S187>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S184>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S184>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S187>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S187>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S190>/Action Port'
       */
      /* If: '<S187>/If' incorporates:
       *  Selector: '<S180>/Selector1'
       *  Selector: '<S187>/Selector'
       *  Selector: '<S190>/Selector'
       */
      rtb_Abs_n = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S187>/Increment_If_Rectangle_Check' */

      /* Sum: '<S187>/Minus' incorporates:
       *  Concatenate: '<S180>/Matrix Concatenate2'
       *  Selector: '<S187>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Abs_n;

      /* Outputs for IfAction SubSystem: '<S187>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S190>/Action Port'
       */
      /* If: '<S187>/If' incorporates:
       *  Selector: '<S180>/Selector1'
       *  Selector: '<S187>/Selector'
       *  Selector: '<S190>/Selector'
       *  Sum: '<S187>/Minus'
       */
      rtb_Sum1_li = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S187>/Increment_If_Rectangle_Check' */

      /* Sum: '<S187>/Minus' incorporates:
       *  Concatenate: '<S180>/Matrix Concatenate2'
       *  Selector: '<S187>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Sum1_li;

      /* Math: '<S187>/Hypot' */
      rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S187>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S187>/Switch' incorporates:
       *  Logic: '<S187>/AND'
       *  Logic: '<S187>/OR'
       *  RelationalOperator: '<S187>/Relational Operator'
       *  UnitDelay: '<S187>/Unit Delay'
       */
      rtb_AND_p2 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Init_e <=
        rtb_Rotationmatrixfromlocalto_1) && rtb_Is_Absolute_Translation_g));

      /* If: '<S187>/If' */
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
        /* Disable for If: '<S189>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S187>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S189>/Action Port'
         */
        /* If: '<S189>/If' incorporates:
         *  RelationalOperator: '<S189>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S189>/Is_Last_Point' incorporates:
           *  ActionPort: '<S192>/Action Port'
           */
          /* InitializeConditions for If: '<S189>/If' incorporates:
           *  UnitDelay: '<S192>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S189>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S189>/Is_Last_Point' incorporates:
           *  ActionPort: '<S192>/Action Port'
           */
          /* Switch: '<S192>/Switch' incorporates:
           *  Constant: '<S194>/Constant'
           *  Logic: '<S192>/OR'
           *  RelationalOperator: '<S194>/Compare'
           *  UnitDelay: '<S192>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Init_e <= Spline_Stop_Radius));

          /* If: '<S192>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S192>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S195>/Action Port'
             */
            /* Merge: '<S184>/Merge2' incorporates:
             *  Constant: '<S195>/Constant'
             *  SignalConversion generated from: '<S195>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S195>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S195>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S192>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S192>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S196>/Action Port'
             */
            /* Merge: '<S184>/Merge2' incorporates:
             *  Constant: '<S196>/Constant'
             *  SignalConversion generated from: '<S196>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S196>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S196>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S192>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S192>/If' */

          /* Merge: '<S184>/Merge4' incorporates:
           *  SignalConversion: '<S192>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S192>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S189>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S189>/Increment_Search' incorporates:
           *  ActionPort: '<S191>/Action Port'
           */
          /* Merge: '<S184>/Merge2' incorporates:
           *  Constant: '<S191>/Constant'
           *  SignalConversion generated from: '<S191>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S191>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S191>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S184>/Merge4' incorporates:
           *  Constant: '<S193>/FixPt Constant'
           *  SignalConversion: '<S191>/Signal Copy'
           *  Sum: '<S193>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S189>/Increment_Search' */
        }

        /* End of If: '<S189>/If' */
        /* End of Outputs for SubSystem: '<S187>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S187>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S190>/Action Port'
         */
        /* Sum: '<S197>/FixPt Sum1' incorporates:
         *  Constant: '<S197>/FixPt Constant'
         */
        rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S190>/Selector1' incorporates:
         *  Selector: '<S180>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Init_e) - 1];

        /* Sum: '<S198>/Subtract' incorporates:
         *  Selector: '<S190>/Selector1'
         *  Sum: '<S198>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch4_g - rtb_Abs_n;

        /* Selector: '<S190>/Selector1' incorporates:
         *  Selector: '<S180>/Selector1'
         */
        rtb_UnitDelay1_gi = rtb_Ref_Poses[((int32_T)rtb_Init_e) + 5];

        /* Sum: '<S198>/Subtract' incorporates:
         *  Selector: '<S190>/Selector1'
         *  Sum: '<S198>/Minus1'
         */
        rtb_Minus_n[1] = rtb_UnitDelay1_gi - rtb_Sum1_li;

        /* Math: '<S198>/Hypot' */
        rtb_Rotationmatrixfromlocalto_2 = rt_hypotd_snf(rtb_Minus_n[0],
          rtb_Minus_n[1]);

        /* Product: '<S198>/Divide' */
        rtb_Init_e = rtb_Minus_n[1];

        /* UnaryMinus: '<S198>/Unary Minus' */
        rtb_Init_cv = rtb_Minus_n[0];

        /* Product: '<S198>/Product' incorporates:
         *  Product: '<S198>/Divide'
         *  UnaryMinus: '<S198>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Init_e / rtb_Rotationmatrixfromlocalto_2) *
          rtb_Rotationmatrixfromlocalto_1;
        rtb_Minus_n[1] = ((-rtb_Init_cv) / rtb_Rotationmatrixfromlocalto_2) *
          rtb_Rotationmatrixfromlocalto_1;

        /* Sum: '<S198>/Add1' incorporates:
         *  Sum: '<S198>/Add2'
         *  Sum: '<S198>/Minus'
         */
        rtb_Init_cv = rtb_Switch4_g - rtb_Minus_n[0];

        /* Sum: '<S198>/Minus4' incorporates:
         *  Sum: '<S198>/Add2'
         *  Sum: '<S198>/Minus'
         */
        rtb_Switch4_g = (rtb_Switch4_g + rtb_Minus_n[0]) - rtb_Init_cv;

        /* Sum: '<S198>/Minus5' incorporates:
         *  Concatenate: '<S180>/Matrix Concatenate2'
         *  Sum: '<S198>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Init_cv;

        /* Sum: '<S198>/Add' incorporates:
         *  Sum: '<S198>/Add2'
         *  Sum: '<S198>/Minus1'
         */
        rtb_Init_e = rtb_Abs_n - rtb_Minus_n[0];

        /* Sum: '<S198>/Minus' incorporates:
         *  Sum: '<S198>/Minus1'
         */
        rtb_Init_cv -= rtb_Init_e;

        /* DotProduct: '<S198>/Dot Product' incorporates:
         *  Concatenate: '<S180>/Matrix Concatenate2'
         *  Sum: '<S198>/Minus'
         *  Sum: '<S198>/Minus1'
         *  Sum: '<S198>/Minus5'
         */
        rtb_Rotationmatrixfromlocalto_2 = (rtb_Reshapey[0] - rtb_Init_e) *
          rtb_Init_cv;

        /* DotProduct: '<S198>/Dot Product1' incorporates:
         *  Sum: '<S198>/Minus'
         */
        rtb_Abs_n = rtb_Init_cv * rtb_Init_cv;

        /* DotProduct: '<S198>/Dot Product2' incorporates:
         *  Sum: '<S198>/Minus4'
         *  Sum: '<S198>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch4_g *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S198>/Minus4'
         */
        rtb_Switch2_o = rtb_Switch4_g * rtb_Switch4_g;

        /* Sum: '<S198>/Add1' incorporates:
         *  Sum: '<S198>/Add2'
         *  Sum: '<S198>/Minus'
         */
        rtb_Init_cv = rtb_UnitDelay1_gi - rtb_Minus_n[1];

        /* Sum: '<S198>/Minus4' incorporates:
         *  Sum: '<S198>/Add2'
         *  Sum: '<S198>/Minus'
         */
        rtb_Switch4_g = (rtb_UnitDelay1_gi + rtb_Minus_n[1]) - rtb_Init_cv;

        /* Sum: '<S198>/Minus5' incorporates:
         *  Concatenate: '<S180>/Matrix Concatenate2'
         *  Sum: '<S198>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Init_cv;

        /* Sum: '<S198>/Add' incorporates:
         *  Sum: '<S198>/Add2'
         *  Sum: '<S198>/Minus1'
         */
        rtb_Init_e = rtb_Sum1_li - rtb_Minus_n[1];

        /* Sum: '<S198>/Minus' incorporates:
         *  Sum: '<S198>/Minus1'
         */
        rtb_Init_cv -= rtb_Init_e;

        /* DotProduct: '<S198>/Dot Product' incorporates:
         *  Concatenate: '<S180>/Matrix Concatenate2'
         *  Sum: '<S198>/Minus'
         *  Sum: '<S198>/Minus1'
         *  Sum: '<S198>/Minus5'
         */
        rtb_Rotationmatrixfromlocalto_2 += (rtb_Reshapey[1] - rtb_Init_e) *
          rtb_Init_cv;

        /* RelationalOperator: '<S199>/Compare' incorporates:
         *  Constant: '<S199>/Constant'
         */
        rtb_Is_Absolute_Translation_g = (rtb_Rotationmatrixfromlocalto_2 >= 0.0);

        /* RelationalOperator: '<S198>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S198>/Dot Product1'
         *  Sum: '<S198>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Rotationmatrixfromlocalto_2 <=
          ((rtb_Init_cv * rtb_Init_cv) + rtb_Abs_n));

        /* DotProduct: '<S198>/Dot Product2' incorporates:
         *  Sum: '<S198>/Minus4'
         *  Sum: '<S198>/Minus5'
         */
        rtb_Rotationmatrixfromlocalto_2 = (rtb_Switch4_g *
          rtb_Rotationmatrixfromlocalto_0) + rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S184>/Merge4' incorporates:
         *  Constant: '<S200>/Constant'
         *  DataTypeConversion: '<S190>/Data Type Conversion'
         *  DotProduct: '<S198>/Dot Product3'
         *  Logic: '<S198>/AND'
         *  RelationalOperator: '<S198>/LessThanOrEqual1'
         *  RelationalOperator: '<S200>/Compare'
         *  Sum: '<S190>/Add'
         *  Sum: '<S198>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)
          (((rtb_Is_Absolute_Translation_g && rtb_Is_Absolute_Steering) &&
            (rtb_Rotationmatrixfromlocalto_2 >= 0.0)) &&
           (rtb_Rotationmatrixfromlocalto_2 <= ((rtb_Switch4_g * rtb_Switch4_g)
          + rtb_Switch2_o)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S190>/Constant2'
         *  SignalConversion generated from: '<S190>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S190>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S190>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S187>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S187>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S188>/Action Port'
         */
        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S188>/Constant2'
         *  SignalConversion generated from: '<S188>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S188>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S188>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S184>/Merge4' incorporates:
         *  SignalConversion generated from: '<S188>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S187>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S184>/Merge1' incorporates:
       *  Constant: '<S187>/Constant'
       *  SignalConversion generated from: '<S187>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S187>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_AND_p2;

      /* End of Outputs for SubSystem: '<S184>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S184>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S186>/Action Port'
       */
      /* Merge: '<S184>/Merge1' incorporates:
       *  Constant: '<S186>/Constant'
       *  SignalConversion generated from: '<S186>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S184>/Merge2' incorporates:
       *  Constant: '<S186>/Constant1'
       *  SignalConversion generated from: '<S186>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S186>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S186>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S184>/Merge4' incorporates:
       *  SignalConversion generated from: '<S186>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S184>/Escape_Auto_Driving' */
    }

    /* End of If: '<S184>/If' */

    /* If: '<S180>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S180>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S185>/Action Port'
       */
      /* Bias: '<S201>/Add Constant' incorporates:
       *  Bias: '<S201>/Bias'
       *  Sum: '<S201>/Subtract'
       */
      rtb_Init_e = ((Code_Gen_Model_B.Spline_Num_Poses -
                     Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S201>/Selector4' incorporates:
       *  Bias: '<S201>/Bias1'
       *  Constant: '<S203>/FixPt Constant'
       *  Sum: '<S203>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S201>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S201>/Selector' incorporates:
       *  Bias: '<S201>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S201>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S201>/Matrix Concatenate' incorporates:
       *  Gain: '<S204>/Gain'
       *  Gain: '<S205>/Gain'
       *  Selector: '<S180>/Selector1'
       *  Selector: '<S201>/Selector'
       *  Selector: '<S201>/Selector1'
       *  Selector: '<S201>/Selector2'
       *  Selector: '<S201>/Selector3'
       *  Sum: '<S204>/Subtract'
       *  Sum: '<S205>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S201>/Selector4' incorporates:
         *  Selector: '<S201>/Selector'
         */
        s206_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S204>/Subtract' incorporates:
         *  Bias: '<S201>/Add Constant1'
         *  Selector: '<S201>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s206_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S201>/Selector4' incorporates:
         *  Gain: '<S204>/Gain'
         *  Selector: '<S201>/Selector'
         *  Selector: '<S201>/Selector1'
         *  Sum: '<S204>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s206_iter) - 1];
        }
      }

      /* End of Concatenate: '<S201>/Matrix Concatenate' */

      /* Assignment: '<S201>/Assignment' incorporates:
       *  Selector: '<S201>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s206_iter = 0; s206_iter < rtb_Bias1_p; s206_iter++) {
          rtb_Assignment[s206_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s206_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S201>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S202>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S206>/While Iterator'
       */
      s206_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment[s206_iter + 1];
        rtb_Reshapey[0] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s206_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s206_iter] - rtb_Assignment[s206_iter +
          2];
        rtb_Add2_f[0] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s206_iter];
        rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment[s206_iter + 9];
        rtb_Reshapey[1] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s206_iter + 7];
        rtb_Abs_n = rtb_Assignment[s206_iter + 8];
        rtb_Minus_n[1] = rtb_Abs_n - rtb_Assignment[s206_iter + 10];
        rtb_Add2_f[1] = rtb_Rotationmatrixfromlocalto_2 - rtb_Abs_n;
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
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s206_iter];
          rtb_Switch2_o = ((((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1]
            * rtb_Sum1_li)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Abs_n;
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
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Switch2_o;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_UnitDelay1_gi) + (rtb_Minus_n[1] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_2)) *
            rtb_Rotationmatrixfromlocalto_0) - (((((rtb_Reshapey[0] *
            rtb_UnitDelay1_gi) + (rtb_Minus_n[0] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_2)) * rtb_Init_cv)) /
            rt_powd_snf(rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
            rtb_Init_cv), 3.0);
        }

        if (s206_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s206_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Rotationmatrixfromlocalto_2 = rtb_Init_e - ((real_T)s206_iter);
        rtb_Num_Segments = s206_iter;
        s206_iter++;
      } while ((rtb_Rotationmatrixfromlocalto_2 >= 4.0) && (s206_iter <= 3));

      /* End of Outputs for SubSystem: '<S202>/Sampling_Loop' */

      /* SignalConversion generated from: '<S185>/Position_and_Curvature' incorporates:
       *  Assignment: '<S206>/Assignment'
       *  Merge: '<S180>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S180>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S180>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S180>/If Action Subsystem' incorporates:
       *  ActionPort: '<S183>/Action Port'
       */
      /* Product: '<S183>/Product' incorporates:
       *  Selector: '<S180>/Selector'
       *  Selector: '<S180>/Selector1'
       */
      rtb_Rotationmatrixfromlocalto_2 = rtb_Ref_Poses[i - 1];

      /* Product: '<S183>/Product1' incorporates:
       *  Selector: '<S180>/Selector'
       *  Selector: '<S180>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S183>/Product' incorporates:
         *  Constant: '<S183>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Rotationmatrixfromlocalto_2;

        /* Product: '<S183>/Product1' incorporates:
         *  Constant: '<S183>/Constant2'
         *  Product: '<S183>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Init_e;
      }

      /* Assignment: '<S183>/Assignment' incorporates:
       *  Concatenate: '<S183>/Matrix Concatenate'
       *  Merge: '<S180>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S183>/Assignment' */

      /* SignalConversion generated from: '<S183>/Num_Segments' incorporates:
       *  Constant: '<S183>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S180>/If Action Subsystem' */
    }

    /* End of If: '<S180>/If1' */

    /* Concatenate: '<S181>/Matrix Concatenate' incorporates:
     *  Merge: '<S180>/Merge'
     *  Selector: '<S181>/Selector'
     *  Selector: '<S181>/Selector1'
     *  Selector: '<S181>/Selector3'
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

    /* End of Concatenate: '<S181>/Matrix Concatenate' */

    /* MATLAB Function: '<S181>/Distance Along Curve' incorporates:
     *  Concatenate: '<S181>/Matrix Concatenate'
     *  Selector: '<S181>/Selector4'
     *  Selector: '<S181>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s206_iter = 0; s206_iter < 149; s206_iter++) {
      /* Outputs for Iterator SubSystem: '<S202>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S206>/While Iterator'
       */
      rtb_Assignment_d[s206_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s206_iter + 1] -
         rtb_MatrixConcatenate_o[s206_iter], rtb_MatrixConcatenate_o[s206_iter +
         151] - rtb_MatrixConcatenate_o[s206_iter + 150]) +
        rtb_Assignment_d[s206_iter];

      /* End of Outputs for SubSystem: '<S202>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S181>/Distance Along Curve' */

    /* MATLAB Function: '<S181>/Find closest index to curve' incorporates:
     *  Concatenate: '<S181>/Matrix Concatenate'
     *  Selector: '<S181>/Selector4'
     *  Selector: '<S181>/Selector5'
     *  Selector: '<S232>/Selector'
     */
    for (s206_iter = 0; s206_iter < 150; s206_iter++) {
      /* Outputs for Iterator SubSystem: '<S202>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S206>/While Iterator'
       */
      distance_from_robot[s206_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s206_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s206_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S202>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s206_iter = 1;
    } else {
      s206_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s206_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s206_iter == 0) {
      rtb_Init_e = distance_from_robot[0];
    } else {
      rtb_Init_e = distance_from_robot[s206_iter - 1];
      for (rtb_Bias1_p = s206_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Rotationmatrixfromlocalto_2 = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Init_e > rtb_Rotationmatrixfromlocalto_2) {
          rtb_Init_e = rtb_Rotationmatrixfromlocalto_2;
        }
      }
    }

    s206_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s206_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Init_e) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S232>/Selector' incorporates:
     *  Constant: '<S232>/Constant'
     *  MATLAB Function: '<S181>/Find closest index to curve'
     *  MinMax: '<S232>/Min'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment_d[((int32_T)fmin(50.0,
      s206_iter)) - 1];

    /* If: '<S232>/If' incorporates:
     *  RelationalOperator: '<S232>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S232>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S235>/Action Port'
       */
      /* SignalConversion generated from: '<S235>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S237>/FixPt Sum1' incorporates:
       *  Constant: '<S237>/FixPt Constant'
       */
      rtb_Init_e = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S235>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S11>/Merge8'
       *  Selector: '<S235>/Selector11'
       *  Selector: '<S235>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Init_e) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S235>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S11>/Merge8'
       *  Selector: '<S235>/Selector1'
       *  Selector: '<S235>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Init_e) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S235>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S235>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Init_e), &rtb_Minus_n[0],
                           rtb_Rotationmatrixfromlocalto_2, &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S235>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S235>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S235>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0],
                           rtb_Rotationmatrixfromlocalto_2, &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S232>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S232>/Latch' incorporates:
       *  ActionPort: '<S236>/Action Port'
       */
      /* SignalConversion generated from: '<S236>/In1' incorporates:
       *  UnitDelay: '<S232>/Unit Delay1'
       */
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S236>/In2' incorporates:
       *  UnitDelay: '<S232>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S232>/Latch' */
    }

    /* End of If: '<S232>/If' */

    /* MinMax: '<S179>/Min' incorporates:
     *  Lookup_n-D: '<S179>/Lookahead Distance'
     *  UnitDelay: '<S179>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_1 = fmin(rtb_Rotationmatrixfromlocalto_1,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled7,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S181>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S231>/While Iterator'
     */
    s231_iter = 1U;
    rtb_AND_p2 = true;
    while (rtb_AND_p2 && (s231_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S181>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S231>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s231_iter;
      rtb_AND_p2 = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                     (rtb_Assignment_d[s206_iter - 1] +
                      rtb_Rotationmatrixfromlocalto_1)) &&
                    (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments)
        * 50.0)));
      s231_iter++;
    }

    /* End of Outputs for SubSystem: '<S181>/Find first index that meets distance target' */

    /* Switch: '<S234>/Switch' incorporates:
     *  Concatenate: '<S181>/Matrix Concatenate'
     *  Constant: '<S181>/Constant'
     *  Constant: '<S231>/Constant'
     *  Constant: '<S234>/Constant1'
     *  Constant: '<S234>/Constant2'
     *  Constant: '<S234>/Constant3'
     *  Logic: '<S231>/AND'
     *  MATLAB Function: '<S181>/Find closest index to curve'
     *  Math: '<S234>/Hypot'
     *  Merge: '<S11>/Merge8'
     *  MinMax: '<S234>/Min'
     *  MinMax: '<S234>/Min1'
     *  Product: '<S231>/Product'
     *  Product: '<S234>/Divide'
     *  Product: '<S234>/Product'
     *  Product: '<S234>/Product1'
     *  RelationalOperator: '<S181>/Relational Operator'
     *  RelationalOperator: '<S231>/Relational Operator'
     *  RelationalOperator: '<S231>/Relational Operator1'
     *  Selector: '<S181>/Selector10'
     *  Selector: '<S181>/Selector7'
     *  Selector: '<S181>/Selector8'
     *  Selector: '<S181>/Selector9'
     *  Selector: '<S231>/Selector'
     *  Selector: '<S231>/Selector1'
     *  Selector: '<S232>/Selector'
     *  Sqrt: '<S234>/Sqrt'
     *  Sum: '<S181>/Subtract'
     *  Sum: '<S231>/Add'
     *  Sum: '<S234>/Subtract'
     *  Sum: '<S234>/Subtract1'
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

    /* End of Switch: '<S234>/Switch' */

    /* Logic: '<S182>/OR' */
    rtb_Is_Absolute_Steering = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S182>/Switch1' incorporates:
     *  Switch: '<S182>/Switch'
     *  UnitDelay: '<S182>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S15>/Merge2' incorporates:
       *  Constant: '<S182>/Constant3'
       *  SignalConversion: '<S182>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S15>/Merge2' incorporates:
       *  SignalConversion: '<S182>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_1;
      rtb_Rotationmatrixfromlocalto_2 = rtb_Merge1;
    }

    /* End of Switch: '<S182>/Switch1' */

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion: '<S182>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Rotationmatrixfromlocalto_2;

    /* Selector: '<S181>/Selector6' incorporates:
     *  Concatenate: '<S181>/Matrix Concatenate'
     *  Selector: '<S181>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S181>/Selector2' incorporates:
     *  Concatenate: '<S181>/Matrix Concatenate'
     *  Selector: '<S181>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S182>/Switch2' incorporates:
     *  Sum: '<S238>/Subtract'
     *  Sum: '<S238>/Subtract1'
     *  Trigonometry: '<S238>/Atan2'
     *  UnitDelay: '<S182>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_UnitDelay1_gi = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S182>/Switch2' */

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion: '<S182>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_UnitDelay1_gi;

    /* Merge: '<S15>/Merge7' incorporates:
     *  SignalConversion: '<S179>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S182>/Constant2'
     *  SignalConversion generated from: '<S179>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S182>/Constant5'
     *  SignalConversion generated from: '<S179>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S15>/Merge5' incorporates:
     *  Constant: '<S182>/Constant6'
     *  SignalConversion generated from: '<S179>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S15>/Merge6' incorporates:
     *  Constant: '<S182>/Constant1'
     *  SignalConversion generated from: '<S179>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S180>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S179>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_1;

    /* Update for UnitDelay: '<S232>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Init_e;

    /* Update for UnitDelay: '<S232>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S182>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S182>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S15>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
     *  ActionPort: '<S178>/Action Port'
     */
    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S178>/Constant'
     *  SignalConversion generated from: '<S178>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion generated from: '<S178>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S15>/Merge1' incorporates:
     *  SignalConversion generated from: '<S178>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion generated from: '<S178>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion generated from: '<S178>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S15>/Merge4' incorporates:
     *  SignalConversion generated from: '<S178>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge5' incorporates:
     *  SignalConversion generated from: '<S178>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S15>/Merge6' incorporates:
     *  SignalConversion generated from: '<S178>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S15>/Pass Through' */
  }

  /* End of If: '<S15>/If' */

  /* Signum: '<S332>/Sign2' incorporates:
   *  UnitDelay: '<S332>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    d = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    d = -1.0;
  } else {
    d = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S332>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S332>/Product1' incorporates:
   *  Signum: '<S332>/Sign1'
   *  Signum: '<S332>/Sign2'
   */
  d *= rtb_Add_ik;
  if (rtIsNaN(d)) {
    i = 0;
  } else {
    i = (int32_T)fmod(d, 256.0);
  }

  /* Switch: '<S332>/Switch' incorporates:
   *  Constant: '<S332>/Constant'
   *  Constant: '<S337>/Constant'
   *  Constant: '<S338>/Constant'
   *  Logic: '<S332>/or'
   *  Product: '<S332>/Product1'
   *  RelationalOperator: '<S337>/Compare'
   *  RelationalOperator: '<S338>/Compare'
   *  UnitDelay: '<S332>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Init_cv = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Init_cv = 0.0;
  }

  /* End of Switch: '<S332>/Switch' */

  /* Switch: '<S343>/Init' incorporates:
   *  UnitDelay: '<S343>/FixPt Unit Delay1'
   *  UnitDelay: '<S343>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Init_cv;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S343>/Init' */

  /* RelationalOperator: '<S339>/Compare' incorporates:
   *  Constant: '<S339>/Constant'
   */
  rtb_AND_p2 = (rtb_Init_cv == 0.0);

  /* RelationalOperator: '<S340>/Compare' incorporates:
   *  Constant: '<S340>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Init_cv > 0.0);

  /* Abs: '<S332>/Abs' incorporates:
   *  Sum: '<S332>/Subtract'
   *  UnitDelay: '<S332>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S332>/Switch5' incorporates:
   *  Constant: '<S332>/Constant1'
   *  Switch: '<S332>/Switch1'
   *  UnaryMinus: '<S332>/Unary Minus'
   */
  if (rtb_AND_p2) {
    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S332>/Constant4'
     *  Constant: '<S332>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S332>/Constant2'
     *  Constant: '<S332>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S332>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S332>/Lookup Table Dynamic'
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
    d = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S332>/Constant10'
     *  Constant: '<S332>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S332>/Constant7'
     *  Constant: '<S332>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S332>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S332>/Lookup Table Dynamic1'
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

    /* Switch: '<S332>/Switch3' incorporates:
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S332>/Constant3'
     *  UnaryMinus: '<S332>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      d = Translation_Speed_Rate_Limit_Inc;
    } else {
      d = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S332>/Switch3' */
  }

  /* End of Switch: '<S332>/Switch5' */

  /* Product: '<S332>/Product' incorporates:
   *  Switch: '<S332>/Switch1'
   */
  rtb_uDLookupTable_l = d * rtb_Merge1;

  /* Sum: '<S341>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Init_cv - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S342>/Switch2' incorporates:
   *  RelationalOperator: '<S342>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_uDLookupTable_l)) {
    /* Switch: '<S332>/Switch2' incorporates:
     *  Constant: '<S332>/Constant1'
     *  Switch: '<S332>/Switch4'
     */
    if (rtb_AND_p2) {
      rtb_Init_e = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S332>/Switch4' incorporates:
       *  Constant: '<S332>/Constant1'
       */
      rtb_Init_e = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S332>/Switch4' incorporates:
       *  Constant: '<S332>/Constant3'
       *  UnaryMinus: '<S332>/Unary Minus1'
       */
      rtb_Init_e = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S332>/Switch2' */

    /* Product: '<S332>/Product2' */
    rtb_Init_e *= rtb_Merge1;

    /* Switch: '<S342>/Switch' incorporates:
     *  RelationalOperator: '<S342>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < rtb_Init_e) {
      rtb_uDLookupTable_l = rtb_Init_e;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S342>/Switch' */
  }

  /* End of Switch: '<S342>/Switch2' */

  /* Sum: '<S341>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S335>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S359>/Constant3'
     *  Constant: '<S359>/Constant4'
     *  Math: '<S359>/Math Function'
     *  Sum: '<S335>/Subtract'
     *  Sum: '<S359>/Add1'
     *  Sum: '<S359>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Gain1) + 3.1415926535897931,
       6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S335>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S335>/Switch' */

  /* Sum: '<S355>/Add1' incorporates:
   *  Constant: '<S355>/Constant3'
   *  Constant: '<S355>/Constant4'
   *  Math: '<S355>/Math Function'
   *  Sum: '<S334>/Add'
   *  Sum: '<S354>/Sum'
   *  Sum: '<S355>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Gain1 +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S357>/Sum1' incorporates:
   *  Constant: '<S354>/Constant2'
   *  Product: '<S357>/Product'
   *  Sum: '<S357>/Sum'
   *  UnitDelay: '<S357>/Unit Delay1'
   */
  rtb_Gain1 = ((rtb_MatrixConcatenate_b_idx_0 -
                Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
               Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S354>/Product' incorporates:
   *  Constant: '<S354>/Constant3'
   */
  rtb_Merge1 = rtb_Gain1 * Steering_Heading_Control_D;

  /* Sum: '<S356>/Diff' incorporates:
   *  UnitDelay: '<S356>/UD'
   *
   * Block description for '<S356>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S356>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Merge1 - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S354>/Saturation' */
  if (rtb_Switch2_m > Steering_Heading_Control_D_UL) {
    rtb_Switch2_m = Steering_Heading_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Heading_Control_D_LL) {
    rtb_Switch2_m = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S354>/Add' incorporates:
   *  Gain: '<S354>/Gain1'
   *  Saturate: '<S354>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Switch2_m;

  /* Sum: '<S354>/Subtract' incorporates:
   *  Constant: '<S354>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S354>/Sum2' incorporates:
   *  Gain: '<S354>/Gain2'
   *  UnitDelay: '<S354>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_1 = (Steering_Heading_Control_I *
    rtb_MatrixConcatenate_b_idx_0) + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S358>/Switch2' incorporates:
   *  RelationalOperator: '<S358>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_uDLookupTable_l)) {
    /* Sum: '<S354>/Subtract1' incorporates:
     *  Constant: '<S354>/Constant1'
     */
    rtb_Rotationmatrixfromlocalto_2 = Steering_Heading_Control_Total_LL -
      rtb_Init_e;

    /* Switch: '<S358>/Switch' incorporates:
     *  RelationalOperator: '<S358>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < rtb_Rotationmatrixfromlocalto_2) {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S358>/Switch' */
  }

  /* End of Switch: '<S358>/Switch2' */

  /* Saturate: '<S354>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_1 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_1 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_1 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S354>/Saturation1' */

  /* Sum: '<S354>/Add1' */
  rtb_Switch2_m = rtb_Init_e + rtb_Rotationmatrixfromlocalto_1;

  /* Saturate: '<S354>/Saturation2' */
  if (rtb_Switch2_m > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S354>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Switch2_m < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S354>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S354>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Switch2_m;
  }

  /* End of Saturate: '<S354>/Saturation2' */

  /* Switch: '<S334>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S345>/Switch' incorporates:
     *  Abs: '<S345>/Abs'
     *  Constant: '<S345>/Constant'
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S353>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S345>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S334>/Switch' */

  /* Signum: '<S344>/Sign2' incorporates:
   *  UnitDelay: '<S344>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    d = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    d = -1.0;
  } else {
    d = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S344>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S344>/Product1' incorporates:
   *  Signum: '<S344>/Sign1'
   *  Signum: '<S344>/Sign2'
   */
  d *= rtb_Add_ik;
  if (rtIsNaN(d)) {
    i = 0;
  } else {
    i = (int32_T)fmod(d, 256.0);
  }

  /* Switch: '<S344>/Switch' incorporates:
   *  Constant: '<S344>/Constant'
   *  Constant: '<S346>/Constant'
   *  Constant: '<S347>/Constant'
   *  Logic: '<S344>/or'
   *  Product: '<S344>/Product1'
   *  RelationalOperator: '<S346>/Compare'
   *  RelationalOperator: '<S347>/Compare'
   *  UnitDelay: '<S344>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_UnitDelay1_gi = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_UnitDelay1_gi = 0.0;
  }

  /* End of Switch: '<S344>/Switch' */

  /* Switch: '<S352>/Init' incorporates:
   *  UnitDelay: '<S352>/FixPt Unit Delay1'
   *  UnitDelay: '<S352>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_UnitDelay1_gi;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S352>/Init' */

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  rtb_AND_p2 = (rtb_UnitDelay1_gi == 0.0);

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_UnitDelay1_gi > 0.0);

  /* Abs: '<S344>/Abs' incorporates:
   *  Sum: '<S344>/Subtract'
   *  UnitDelay: '<S344>/Unit Delay'
   */
  rtb_Switch4_g = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S344>/Switch1' incorporates:
   *  Constant: '<S344>/Constant1'
   *  Switch: '<S344>/Switch3'
   *  Switch: '<S344>/Switch5'
   *  UnaryMinus: '<S344>/Unary Minus'
   */
  if (rtb_AND_p2) {
    rtb_Rotationmatrixfromlocalto_2 = -Steering_Localized_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant4'
     *  Constant: '<S344>/Constant6'
     *  UnaryMinus: '<S344>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S344>/Constant2'
     *  Constant: '<S344>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S344>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S344>/Lookup Table Dynamic'
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
      /* Switch: '<S344>/Switch3' incorporates:
       *  Constant: '<S344>/Constant3'
       */
      rtb_Rotationmatrixfromlocalto_2 = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant10'
     *  Constant: '<S344>/Constant8'
     *  UnaryMinus: '<S344>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S344>/Constant7'
     *  Constant: '<S344>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S344>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S344>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S344>/Switch1' */

  /* Product: '<S344>/Product' */
  rtb_Rotationmatrixfromlocalto_2 *= rtb_Switch4_g;

  /* Sum: '<S350>/Sum1' */
  rtb_UnitDelay1_gi -= rtb_Init_e;

  /* Switch: '<S351>/Switch2' incorporates:
   *  RelationalOperator: '<S351>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_Rotationmatrixfromlocalto_2)) {
    /* Switch: '<S344>/Switch2' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Switch: '<S344>/Switch4'
     */
    if (rtb_AND_p2) {
      rtb_Rotationmatrixfromlocalto_2 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S344>/Switch4' incorporates:
       *  Constant: '<S344>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_2 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S344>/Switch4' incorporates:
       *  Constant: '<S344>/Constant3'
       *  UnaryMinus: '<S344>/Unary Minus1'
       */
      rtb_Rotationmatrixfromlocalto_2 = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S344>/Switch2' */

    /* Product: '<S344>/Product2' */
    rtb_Rotationmatrixfromlocalto_2 *= rtb_Switch4_g;

    /* Switch: '<S351>/Switch' incorporates:
     *  RelationalOperator: '<S351>/UpperRelop'
     */
    if (!(rtb_UnitDelay1_gi < rtb_Rotationmatrixfromlocalto_2)) {
      rtb_Rotationmatrixfromlocalto_2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S351>/Switch' */
  }

  /* End of Switch: '<S351>/Switch2' */

  /* Sum: '<S350>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Rotationmatrixfromlocalto_2 +
    rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S247>/Initialize Function' */
  /* Sum: '<S333>/Add' incorporates:
   *  Constant: '<S333>/Constant'
   *  Constant: '<S333>/Constant4'
   *  Constant: '<S333>/Constant5'
   *  Trigonometry: '<S333>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S247>/Initialize Function' */

  /* Fcn: '<S367>/r->x' incorporates:
   *  Fcn: '<S372>/r->x'
   *  Fcn: '<S377>/r->x'
   *  Fcn: '<S382>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S361>/Add' incorporates:
   *  Fcn: '<S367>/r->x'
   *  Fcn: '<S368>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Rotationmatrixfromlocalto_2;

  /* Fcn: '<S367>/theta->y' incorporates:
   *  Fcn: '<S372>/theta->y'
   *  Fcn: '<S377>/theta->y'
   *  Fcn: '<S382>/theta->y'
   */
  rtb_Init_cv = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S361>/Add' incorporates:
   *  Fcn: '<S367>/theta->y'
   *  Fcn: '<S368>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Init_cv;

  /* Sum: '<S362>/Add' incorporates:
   *  Fcn: '<S373>/r->x'
   *  Fcn: '<S373>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Init_cv;

  /* Sum: '<S363>/Add' incorporates:
   *  Fcn: '<S378>/r->x'
   *  Fcn: '<S378>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Init_cv;

  /* Sum: '<S364>/Add' incorporates:
   *  Fcn: '<S383>/r->x'
   *  Fcn: '<S383>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Rotationmatrixfromlocalto_2 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    sin(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Init_cv;

  /* Fcn: '<S381>/x->r' */
  rtb_Abs_n = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
    rtb_Rotationmatrixfromlocalto_2);

  /* RelationalOperator: '<S384>/Compare' incorporates:
   *  Constant: '<S384>/Constant'
   */
  rtb_AND_p2 = (rtb_Abs_n == 0.0);

  /* Switch: '<S380>/Switch1' */
  if (rtb_AND_p2) {
    /* Switch: '<S380>/Switch1' incorporates:
     *  Constant: '<S380>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S380>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Abs_n;
  }

  /* End of Switch: '<S380>/Switch1' */

  /* Fcn: '<S366>/x->r' */
  rtb_Abs_n = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S369>/Compare' incorporates:
   *  Constant: '<S369>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Abs_n == 0.0);

  /* Switch: '<S365>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S365>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S365>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Abs_n;
  }

  /* End of Switch: '<S365>/Switch1' */

  /* Fcn: '<S371>/x->r' */
  rtb_Init_cv = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S374>/Compare' incorporates:
   *  Constant: '<S374>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init_cv == 0.0);

  /* Switch: '<S370>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S370>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S370>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Init_cv;
  }

  /* End of Switch: '<S370>/Switch1' */

  /* Fcn: '<S376>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S379>/Compare' incorporates:
   *  Constant: '<S379>/Constant'
   */
  rtb_AT_Tag_11_Active = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S375>/Switch1' */
  if (rtb_AT_Tag_11_Active) {
    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S375>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S375>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S375>/Switch1' */

  /* Product: '<S360>/Divide' incorporates:
   *  Abs: '<S360>/Abs'
   *  Abs: '<S360>/Abs1'
   *  Abs: '<S360>/Abs2'
   *  Abs: '<S360>/Abs3'
   *  Constant: '<S360>/Constant'
   *  MinMax: '<S360>/Max'
   */
  rtb_Abs_n = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S360>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Abs_n;

  /* Switch: '<S380>/Switch' */
  if (!rtb_AND_p2) {
    /* Switch: '<S380>/Switch' incorporates:
     *  Fcn: '<S381>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf
      (rtb_Rotationmatrixfromlocalto_2, rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S380>/Switch' */

  /* Trigonometry: '<S324>/Cos4' incorporates:
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S324>/Sin5' incorporates:
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S324>/Sin4' incorporates:
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S324>/Cos5' incorporates:
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S324>/Subtract1' incorporates:
   *  Product: '<S324>/Product2'
   *  Product: '<S324>/Product3'
   *  Trigonometry: '<S324>/Cos4'
   *  Trigonometry: '<S324>/Sin4'
   */
  rtb_Init_e = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S324>/Subtract' incorporates:
   *  Product: '<S324>/Product'
   *  Product: '<S324>/Product1'
   *  Trigonometry: '<S324>/Cos4'
   *  Trigonometry: '<S324>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_2 = (rtb_Add_fn * rtb_MatrixConcatenate_b_idx_0)
    - (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S324>/Hypot' */
  rtb_UnitDelay1_gi = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_2, rtb_Init_e);

  /* Switch: '<S324>/Switch' incorporates:
   *  Constant: '<S324>/Constant'
   *  Constant: '<S324>/Constant1'
   *  Constant: '<S325>/Constant'
   *  Product: '<S324>/Divide'
   *  Product: '<S324>/Divide1'
   *  RelationalOperator: '<S325>/Compare'
   *  Switch: '<S324>/Switch1'
   */
  if (rtb_UnitDelay1_gi > 1.0E-6) {
    rtb_Init_cv = rtb_Init_e / rtb_UnitDelay1_gi;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Rotationmatrixfromlocalto_2 /
      rtb_UnitDelay1_gi;
  } else {
    rtb_Init_cv = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S324>/Switch' */

  /* Switch: '<S313>/Speed_Switch' incorporates:
   *  Abs: '<S313>/Abs'
   *  Constant: '<S321>/Constant'
   *  RelationalOperator: '<S321>/Compare'
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Atan1'
   *  Trigonometry: '<S324>/Atan1'
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_cv, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S323>/Subtract1' incorporates:
     *  Product: '<S323>/Product2'
     *  Product: '<S323>/Product3'
     *  UnaryMinus: '<S313>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_a1
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S323>/Subtract' incorporates:
     *  Product: '<S323>/Product'
     *  Product: '<S323>/Product1'
     */
    rtb_UnitDelay1_gi = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S323>/Hypot' */
    rtb_Rotationmatrixfromlocalto_2 = rt_hypotd_snf(rtb_UnitDelay1_gi,
      rtb_Init_e);

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     *  Constant: '<S323>/Constant1'
     *  Constant: '<S326>/Constant'
     *  Product: '<S323>/Divide'
     *  Product: '<S323>/Divide1'
     *  RelationalOperator: '<S326>/Compare'
     *  Switch: '<S323>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_2 > 1.0E-6) {
      rtb_UnitDelay1_gi /= rtb_Rotationmatrixfromlocalto_2;
      rtb_Init_e /= rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_UnitDelay1_gi = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S323>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_UnitDelay1_gi);
  } else {
    d = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S316>/Product2' incorporates:
   *  Constant: '<S316>/Constant'
   *  Switch: '<S313>/Speed_Switch'
   */
  rtb_Init_cv = d * 1530.1401357649195;

  /* Signum: '<S311>/Sign' */
  if (rtIsNaN(rtb_Init_cv)) {
    d = (rtNaN);
  } else if (rtb_Init_cv < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Init_cv > 0.0);
  }

  /* Signum: '<S311>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S314>/Add' incorporates:
   *  Sum: '<S315>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S246>/Product' incorporates:
   *  Abs: '<S311>/Abs'
   *  Abs: '<S314>/Abs'
   *  Constant: '<S317>/Constant'
   *  Constant: '<S327>/Constant3'
   *  Constant: '<S327>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S311>/OR'
   *  Lookup_n-D: '<S314>/1-D Lookup Table'
   *  Math: '<S327>/Math Function'
   *  RelationalOperator: '<S311>/Equal1'
   *  RelationalOperator: '<S317>/Compare'
   *  Signum: '<S311>/Sign'
   *  Signum: '<S311>/Sign1'
   *  Sum: '<S314>/Add'
   *  Sum: '<S327>/Add1'
   *  Sum: '<S327>/Add2'
   */
  rtb_Init_cv = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S312>/Gain' */
  rtb_UnitDelay1_gi = Drive_Motor_Control_FF * rtb_Init_cv;

  /* Sum: '<S312>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Init_cv -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S319>/Sum1' incorporates:
   *  Constant: '<S312>/Constant2'
   *  Product: '<S319>/Product'
   *  Sum: '<S319>/Sum'
   *  UnitDelay: '<S319>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S312>/Product' incorporates:
   *  Constant: '<S312>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Init_e * Drive_Motor_Control_D;

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
  rtb_Switch2_m = rtb_Rotationmatrixfromlocalto_2 -
    Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S312>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S312>/Add' incorporates:
   *  Gain: '<S312>/Gain1'
   *  Saturate: '<S312>/Saturation'
   */
  rtb_Switch4_g = ((Drive_Motor_Control_P * rtb_Init_cv) + rtb_UnitDelay1_gi) +
    rtb_Switch2_m;

  /* Sum: '<S312>/Subtract' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch4_g;

  /* Sum: '<S312>/Sum2' incorporates:
   *  Gain: '<S312>/Gain2'
   *  UnitDelay: '<S312>/Unit Delay'
   */
  rtb_UnitDelay1_gi = (Drive_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S320>/Switch2' incorporates:
   *  Constant: '<S312>/Constant'
   *  RelationalOperator: '<S320>/LowerRelop1'
   *  Sum: '<S312>/Subtract'
   */
  if (!(rtb_UnitDelay1_gi > (1.0 - rtb_Switch4_g))) {
    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S312>/Constant1'
     *  RelationalOperator: '<S320>/UpperRelop'
     *  Sum: '<S312>/Subtract1'
     */
    if (rtb_UnitDelay1_gi < (-1.0 - rtb_Switch4_g)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch4_g;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S320>/Switch' */
  }

  /* End of Switch: '<S320>/Switch2' */

  /* Saturate: '<S312>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_UnitDelay1_gi = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_UnitDelay1_gi = Drive_Motor_Control_I_LL;
  } else {
    rtb_UnitDelay1_gi = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S312>/Saturation1' */

  /* Sum: '<S312>/Add1' */
  rtb_Switch2_m = rtb_Switch4_g + rtb_UnitDelay1_gi;

  /* Saturate: '<S312>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S312>/Saturation2' */

  /* Sum: '<S328>/Add1' incorporates:
   *  Constant: '<S328>/Constant3'
   *  Constant: '<S328>/Constant4'
   *  Math: '<S328>/Math Function'
   *  Sum: '<S328>/Add2'
   */
  rtb_Init_cv = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S330>/Sum1' incorporates:
   *  Constant: '<S315>/Constant2'
   *  Product: '<S330>/Product'
   *  Sum: '<S330>/Sum'
   *  UnitDelay: '<S330>/Unit Delay1'
   */
  rtb_Switch4_g = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S315>/Product' incorporates:
   *  Constant: '<S315>/Constant3'
   */
  rtb_Sum1_li = rtb_Switch4_g * Steering_Motor_Control_D;

  /* Sum: '<S329>/Diff' incorporates:
   *  UnitDelay: '<S329>/UD'
   *
   * Block description for '<S329>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S329>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Sum1_li - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S315>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S315>/Add' incorporates:
   *  Gain: '<S315>/Gain1'
   *  Saturate: '<S315>/Saturation'
   */
  rtb_Switch2_o = (Steering_Motor_Control_P * rtb_Init_cv) + rtb_Switch2_m;

  /* Sum: '<S315>/Subtract' incorporates:
   *  Constant: '<S315>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch2_o;

  /* Sum: '<S315>/Sum2' incorporates:
   *  Gain: '<S315>/Gain2'
   *  UnitDelay: '<S315>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Steering_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S331>/Switch2' incorporates:
   *  Constant: '<S315>/Constant'
   *  RelationalOperator: '<S331>/LowerRelop1'
   *  Sum: '<S315>/Subtract'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > (1.0 - rtb_Switch2_o))) {
    /* Switch: '<S331>/Switch' incorporates:
     *  Constant: '<S315>/Constant1'
     *  RelationalOperator: '<S331>/UpperRelop'
     *  Sum: '<S315>/Subtract1'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < (-1.0 - rtb_Switch2_o)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch2_o;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S331>/Switch' */
  }

  /* End of Switch: '<S331>/Switch2' */

  /* Saturate: '<S315>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S315>/Saturation1' */

  /* Sum: '<S315>/Add1' */
  rtb_Switch2_m = rtb_Switch2_o + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S315>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S315>/Saturation2' */

  /* Product: '<S360>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Abs_n;

  /* Switch: '<S365>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S365>/Switch' incorporates:
     *  Fcn: '<S366>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S365>/Switch' */

  /* Trigonometry: '<S261>/Cos4' incorporates:
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S261>/Sin5' incorporates:
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S261>/Sin4' incorporates:
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S261>/Cos5' incorporates:
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S261>/Subtract1' incorporates:
   *  Product: '<S261>/Product2'
   *  Product: '<S261>/Product3'
   *  Trigonometry: '<S261>/Cos4'
   *  Trigonometry: '<S261>/Sin4'
   */
  rtb_Switch2_o = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S261>/Subtract' incorporates:
   *  Product: '<S261>/Product'
   *  Product: '<S261>/Product1'
   *  Trigonometry: '<S261>/Cos4'
   *  Trigonometry: '<S261>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Add_fn * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S261>/Hypot' */
  rtb_Steer_Joystick_X_Rel_Mod = rt_hypotd_snf(rtb_Modulation_Drv, rtb_Switch2_o);

  /* Switch: '<S261>/Switch' incorporates:
   *  Constant: '<S261>/Constant'
   *  Constant: '<S261>/Constant1'
   *  Constant: '<S262>/Constant'
   *  Product: '<S261>/Divide'
   *  Product: '<S261>/Divide1'
   *  RelationalOperator: '<S262>/Compare'
   *  Switch: '<S261>/Switch1'
   */
  if (rtb_Steer_Joystick_X_Rel_Mod > 1.0E-6) {
    rtb_Init_cv = rtb_Switch2_o / rtb_Steer_Joystick_X_Rel_Mod;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Modulation_Drv /
      rtb_Steer_Joystick_X_Rel_Mod;
  } else {
    rtb_Init_cv = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S261>/Switch' */

  /* Switch: '<S250>/Speed_Switch' incorporates:
   *  Abs: '<S250>/Abs'
   *  Constant: '<S258>/Constant'
   *  RelationalOperator: '<S258>/Compare'
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Atan1'
   *  Trigonometry: '<S261>/Atan1'
   *  UnaryMinus: '<S250>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_cv, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S260>/Subtract1' incorporates:
     *  Product: '<S260>/Product2'
     *  Product: '<S260>/Product3'
     *  UnaryMinus: '<S250>/Unary Minus'
     */
    rtb_Switch2_o = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S260>/Subtract' incorporates:
     *  Product: '<S260>/Product'
     *  Product: '<S260>/Product1'
     */
    rtb_Steer_Joystick_X_Rel_Mod = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S260>/Hypot' */
    rtb_Modulation_Drv = rt_hypotd_snf(rtb_Steer_Joystick_X_Rel_Mod,
      rtb_Switch2_o);

    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S260>/Constant'
     *  Constant: '<S260>/Constant1'
     *  Constant: '<S263>/Constant'
     *  Product: '<S260>/Divide'
     *  Product: '<S260>/Divide1'
     *  RelationalOperator: '<S263>/Compare'
     *  Switch: '<S260>/Switch'
     */
    if (rtb_Modulation_Drv > 1.0E-6) {
      rtb_Steer_Joystick_X_Rel_Mod /= rtb_Modulation_Drv;
      rtb_Switch2_o /= rtb_Modulation_Drv;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = 1.0;
      rtb_Switch2_o = 0.0;
    }

    /* End of Switch: '<S260>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Switch2_o,
      rtb_Steer_Joystick_X_Rel_Mod);
  } else {
    d = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S253>/Product2' incorporates:
   *  Constant: '<S253>/Constant'
   *  Switch: '<S250>/Speed_Switch'
   */
  rtb_Init_cv = d * 1530.1401357649195;

  /* Signum: '<S248>/Sign' */
  if (rtIsNaN(rtb_Init_cv)) {
    d = (rtNaN);
  } else if (rtb_Init_cv < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Init_cv > 0.0);
  }

  /* Signum: '<S248>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S251>/Add' incorporates:
   *  Sum: '<S252>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S243>/Product' incorporates:
   *  Abs: '<S248>/Abs'
   *  Abs: '<S251>/Abs'
   *  Constant: '<S254>/Constant'
   *  Constant: '<S264>/Constant3'
   *  Constant: '<S264>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S248>/OR'
   *  Lookup_n-D: '<S251>/1-D Lookup Table'
   *  Math: '<S264>/Math Function'
   *  RelationalOperator: '<S248>/Equal1'
   *  RelationalOperator: '<S254>/Compare'
   *  Signum: '<S248>/Sign'
   *  Signum: '<S248>/Sign1'
   *  Sum: '<S251>/Add'
   *  Sum: '<S264>/Add1'
   *  Sum: '<S264>/Add2'
   */
  rtb_Init_cv = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S249>/Gain' */
  rtb_Steer_Joystick_X_Rel_Mod = Drive_Motor_Control_FF * rtb_Init_cv;

  /* Sum: '<S249>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Init_cv -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S256>/Sum1' incorporates:
   *  Constant: '<S249>/Constant2'
   *  Product: '<S256>/Product'
   *  Sum: '<S256>/Sum'
   *  UnitDelay: '<S256>/Unit Delay1'
   */
  rtb_Switch2_o = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S249>/Product' incorporates:
   *  Constant: '<S249>/Constant3'
   */
  rtb_Modulation_Drv = rtb_Switch2_o * Drive_Motor_Control_D;

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
  rtb_Switch2_m = rtb_Modulation_Drv - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S249>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S249>/Add' incorporates:
   *  Gain: '<S249>/Gain1'
   *  Saturate: '<S249>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_Init_cv) +
                rtb_Steer_Joystick_X_Rel_Mod) + rtb_Switch2_m;

  /* Sum: '<S249>/Subtract' incorporates:
   *  Constant: '<S249>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_oh;

  /* Sum: '<S249>/Sum2' incorporates:
   *  Gain: '<S249>/Gain2'
   *  UnitDelay: '<S249>/Unit Delay'
   */
  rtb_Steer_Joystick_X_Rel_Mod = (Drive_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S257>/Switch2' incorporates:
   *  Constant: '<S249>/Constant'
   *  RelationalOperator: '<S257>/LowerRelop1'
   *  Sum: '<S249>/Subtract'
   */
  if (!(rtb_Steer_Joystick_X_Rel_Mod > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S249>/Constant1'
     *  RelationalOperator: '<S257>/UpperRelop'
     *  Sum: '<S249>/Subtract1'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod < (-1.0 - rtb_Add_oh)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_oh;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Steer_Joystick_X_Rel_Mod;
    }

    /* End of Switch: '<S257>/Switch' */
  }

  /* End of Switch: '<S257>/Switch2' */

  /* Saturate: '<S249>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Steer_Joystick_X_Rel_Mod = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Steer_Joystick_X_Rel_Mod = Drive_Motor_Control_I_LL;
  } else {
    rtb_Steer_Joystick_X_Rel_Mod = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S249>/Saturation1' */

  /* Sum: '<S249>/Add1' */
  rtb_Switch2_m = rtb_Add_oh + rtb_Steer_Joystick_X_Rel_Mod;

  /* Saturate: '<S249>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S249>/Saturation2' */

  /* Sum: '<S265>/Add1' incorporates:
   *  Constant: '<S265>/Constant3'
   *  Constant: '<S265>/Constant4'
   *  Math: '<S265>/Math Function'
   *  Sum: '<S265>/Add2'
   */
  rtb_Init_cv = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S267>/Sum1' incorporates:
   *  Constant: '<S252>/Constant2'
   *  Product: '<S267>/Product'
   *  Sum: '<S267>/Sum'
   *  UnitDelay: '<S267>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S252>/Product' incorporates:
   *  Constant: '<S252>/Constant3'
   */
  rtb_Subtract1_o = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S266>/Diff' incorporates:
   *  UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Subtract1_o - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S252>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S252>/Add' incorporates:
   *  Gain: '<S252>/Gain1'
   *  Saturate: '<S252>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Init_cv) + rtb_Switch2_m;

  /* Sum: '<S252>/Subtract' incorporates:
   *  Constant: '<S252>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_fn;

  /* Sum: '<S252>/Sum2' incorporates:
   *  Gain: '<S252>/Gain2'
   *  UnitDelay: '<S252>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S268>/Switch2' incorporates:
   *  Constant: '<S252>/Constant'
   *  RelationalOperator: '<S268>/LowerRelop1'
   *  Sum: '<S252>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_fn))) {
    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S252>/Constant1'
     *  RelationalOperator: '<S268>/UpperRelop'
     *  Sum: '<S252>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_fn;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_e;
    }

    /* End of Switch: '<S268>/Switch' */
  }

  /* End of Switch: '<S268>/Switch2' */

  /* Saturate: '<S252>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S252>/Saturation1' */

  /* Sum: '<S252>/Add1' */
  rtb_Switch2_m = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S252>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S252>/Saturation2' */

  /* Product: '<S360>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Abs_n;

  /* Switch: '<S370>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S370>/Switch' incorporates:
     *  Fcn: '<S371>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S370>/Switch' */

  /* Trigonometry: '<S282>/Cos4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Sin5' incorporates:
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S282>/Sin4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Cos5' incorporates:
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S282>/Subtract1' incorporates:
   *  Product: '<S282>/Product2'
   *  Product: '<S282>/Product3'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Subtract1_m = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S282>/Subtract' incorporates:
   *  Product: '<S282>/Product'
   *  Product: '<S282>/Product1'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_fn * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S282>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_m);

  /* Switch: '<S282>/Switch' incorporates:
   *  Constant: '<S282>/Constant'
   *  Constant: '<S282>/Constant1'
   *  Constant: '<S283>/Constant'
   *  Product: '<S282>/Divide'
   *  Product: '<S282>/Divide1'
   *  RelationalOperator: '<S283>/Compare'
   *  Switch: '<S282>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_Init_cv = rtb_Subtract1_m / rtb_Hypot_bl;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_bl;
  } else {
    rtb_Init_cv = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S282>/Switch' */

  /* Switch: '<S271>/Speed_Switch' incorporates:
   *  Abs: '<S271>/Abs'
   *  Constant: '<S279>/Constant'
   *  RelationalOperator: '<S279>/Compare'
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Atan1'
   *  Trigonometry: '<S282>/Atan1'
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_cv, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S281>/Subtract1' incorporates:
     *  Product: '<S281>/Product2'
     *  Product: '<S281>/Product3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    rtb_Subtract1_m = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S281>/Subtract' incorporates:
     *  Product: '<S281>/Product'
     *  Product: '<S281>/Product1'
     */
    rtb_Subtract1_a1 = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S281>/Hypot' */
    rtb_Add_fn = rt_hypotd_snf(rtb_Subtract1_a1, rtb_Subtract1_m);

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Constant'
     *  Constant: '<S281>/Constant1'
     *  Constant: '<S284>/Constant'
     *  Product: '<S281>/Divide'
     *  Product: '<S281>/Divide1'
     *  RelationalOperator: '<S284>/Compare'
     *  Switch: '<S281>/Switch'
     */
    if (rtb_Add_fn > 1.0E-6) {
      rtb_Subtract1_a1 /= rtb_Add_fn;
      rtb_Add_fn = rtb_Subtract1_m / rtb_Add_fn;
    } else {
      rtb_Subtract1_a1 = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S281>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Subtract1_a1);
  } else {
    d = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S274>/Product2' incorporates:
   *  Constant: '<S274>/Constant'
   *  Switch: '<S271>/Speed_Switch'
   */
  rtb_Init_cv = d * 1530.1401357649195;

  /* Signum: '<S269>/Sign' */
  if (rtIsNaN(rtb_Init_cv)) {
    d = (rtNaN);
  } else if (rtb_Init_cv < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Init_cv > 0.0);
  }

  /* Signum: '<S269>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Sum: '<S273>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S244>/Product' incorporates:
   *  Abs: '<S269>/Abs'
   *  Abs: '<S272>/Abs'
   *  Constant: '<S275>/Constant'
   *  Constant: '<S285>/Constant3'
   *  Constant: '<S285>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S269>/OR'
   *  Lookup_n-D: '<S272>/1-D Lookup Table'
   *  Math: '<S285>/Math Function'
   *  RelationalOperator: '<S269>/Equal1'
   *  RelationalOperator: '<S275>/Compare'
   *  Signum: '<S269>/Sign'
   *  Signum: '<S269>/Sign1'
   *  Sum: '<S272>/Add'
   *  Sum: '<S285>/Add1'
   *  Sum: '<S285>/Add2'
   */
  rtb_Init_cv = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_cv) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S270>/Gain' */
  rtb_Subtract1_m = Drive_Motor_Control_FF * rtb_Init_cv;

  /* Sum: '<S270>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Init_cv -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S277>/Sum1' incorporates:
   *  Constant: '<S270>/Constant2'
   *  Product: '<S277>/Product'
   *  Sum: '<S277>/Sum'
   *  UnitDelay: '<S277>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S270>/Product' incorporates:
   *  Constant: '<S270>/Constant3'
   */
  rtb_Subtract1_a1 = rtb_Add_fn * Drive_Motor_Control_D;

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
  rtb_Switch2_m = rtb_Subtract1_a1 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S270>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S270>/Add' incorporates:
   *  Gain: '<S270>/Gain1'
   *  Saturate: '<S270>/Saturation'
   */
  rtb_Hypot_bl = ((Drive_Motor_Control_P * rtb_Init_cv) + rtb_Subtract1_m) +
    rtb_Switch2_m;

  /* Sum: '<S270>/Subtract' incorporates:
   *  Constant: '<S270>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_bl;

  /* Sum: '<S270>/Sum2' incorporates:
   *  Gain: '<S270>/Gain2'
   *  UnitDelay: '<S270>/Unit Delay'
   */
  rtb_Subtract1_m = (Drive_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S278>/Switch2' incorporates:
   *  Constant: '<S270>/Constant'
   *  RelationalOperator: '<S278>/LowerRelop1'
   *  Sum: '<S270>/Subtract'
   */
  if (!(rtb_Subtract1_m > (1.0 - rtb_Hypot_bl))) {
    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S270>/Constant1'
     *  RelationalOperator: '<S278>/UpperRelop'
     *  Sum: '<S270>/Subtract1'
     */
    if (rtb_Subtract1_m < (-1.0 - rtb_Hypot_bl)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_bl;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_m;
    }

    /* End of Switch: '<S278>/Switch' */
  }

  /* End of Switch: '<S278>/Switch2' */

  /* Saturate: '<S270>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_m = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_m = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_m = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S270>/Saturation1' */

  /* Sum: '<S270>/Add1' */
  rtb_Switch2_m = rtb_Hypot_bl + rtb_Subtract1_m;

  /* Saturate: '<S270>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S270>/Saturation2' */

  /* Sum: '<S286>/Add1' incorporates:
   *  Constant: '<S286>/Constant3'
   *  Constant: '<S286>/Constant4'
   *  Math: '<S286>/Math Function'
   *  Sum: '<S286>/Add2'
   */
  rtb_Init_cv = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S288>/Sum1' incorporates:
   *  Constant: '<S273>/Constant2'
   *  Product: '<S288>/Product'
   *  Sum: '<S288>/Sum'
   *  UnitDelay: '<S288>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Init_cv - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S273>/Product' incorporates:
   *  Constant: '<S273>/Constant3'
   */
  rtb_Hypot_bl = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S287>/Diff' incorporates:
   *  UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Hypot_bl - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S273>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S273>/Add' incorporates:
   *  Gain: '<S273>/Gain1'
   *  Saturate: '<S273>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Init_cv) + rtb_Switch2_m;

  /* Sum: '<S273>/Subtract' incorporates:
   *  Constant: '<S273>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S273>/Sum2' incorporates:
   *  Gain: '<S273>/Gain2'
   *  UnitDelay: '<S273>/Unit Delay'
   */
  rtb_Subtract1_n = (Steering_Motor_Control_I * rtb_Init_cv) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S289>/Switch2' incorporates:
   *  Constant: '<S273>/Constant'
   *  RelationalOperator: '<S289>/LowerRelop1'
   *  Sum: '<S273>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S289>/Switch' incorporates:
     *  Constant: '<S273>/Constant1'
     *  RelationalOperator: '<S289>/UpperRelop'
     *  Sum: '<S273>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_n;
    }

    /* End of Switch: '<S289>/Switch' */
  }

  /* End of Switch: '<S289>/Switch2' */

  /* Saturate: '<S273>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_n = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_n = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S273>/Saturation1' */

  /* Sum: '<S273>/Add1' */
  rtb_Switch2_m = rtb_Add_ik + rtb_Subtract1_n;

  /* Saturate: '<S273>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S273>/Saturation2' */

  /* Product: '<S360>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Abs_n;

  /* Switch: '<S375>/Switch' */
  if (!rtb_AT_Tag_11_Active) {
    /* Switch: '<S375>/Switch' incorporates:
     *  Fcn: '<S376>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S375>/Switch' */

  /* Trigonometry: '<S303>/Cos4' incorporates:
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S303>/Sin5' incorporates:
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S303>/Sin4' incorporates:
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Subtract1_ie = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S303>/Cos5' incorporates:
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  rtb_Init_cv = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S303>/Subtract1' incorporates:
   *  Product: '<S303>/Product2'
   *  Product: '<S303>/Product3'
   *  Trigonometry: '<S303>/Cos4'
   *  Trigonometry: '<S303>/Sin4'
   */
  rtb_Subtract1_f5 = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_ie * rtb_Init_cv);

  /* Sum: '<S303>/Subtract' incorporates:
   *  Product: '<S303>/Product'
   *  Product: '<S303>/Product1'
   *  Trigonometry: '<S303>/Cos4'
   *  Trigonometry: '<S303>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_ik * rtb_Init_cv) - (rtb_Subtract1_ie
    * rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S303>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Subtract1_f5);

  /* Switch: '<S303>/Switch' incorporates:
   *  Constant: '<S303>/Constant'
   *  Constant: '<S303>/Constant1'
   *  Constant: '<S304>/Constant'
   *  Product: '<S303>/Divide'
   *  Product: '<S303>/Divide1'
   *  RelationalOperator: '<S304>/Compare'
   *  Switch: '<S303>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_Abs_n = rtb_Subtract1_f5 / rtb_Hypot_d;
    rtb_Init_cv = rtb_MatrixConcatenate_b_idx_0 / rtb_Hypot_d;
  } else {
    rtb_Abs_n = 0.0;
    rtb_Init_cv = 1.0;
  }

  /* End of Switch: '<S303>/Switch' */

  /* Switch: '<S292>/Speed_Switch' incorporates:
   *  Abs: '<S292>/Abs'
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S300>/Compare'
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Atan1'
   *  Trigonometry: '<S303>/Atan1'
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Abs_n, rtb_Init_cv)) > 1.5707963267948966) {
    d = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S302>/Subtract1' incorporates:
     *  Product: '<S302>/Product2'
     *  Product: '<S302>/Product3'
     *  UnaryMinus: '<S292>/Unary Minus'
     */
    rtb_Subtract1_f5 = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_ie * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S302>/Subtract' incorporates:
     *  Product: '<S302>/Product'
     *  Product: '<S302>/Product1'
     */
    rtb_Subtract1_ie = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_ie * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S302>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_ie, rtb_Subtract1_f5);

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S302>/Constant'
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S305>/Constant'
     *  Product: '<S302>/Divide'
     *  Product: '<S302>/Divide1'
     *  RelationalOperator: '<S305>/Compare'
     *  Switch: '<S302>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_ie /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract1_f5 / rtb_Add_ik;
    } else {
      rtb_Subtract1_ie = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S302>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_ie);
  } else {
    d = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S295>/Product2' incorporates:
   *  Constant: '<S295>/Constant'
   *  Switch: '<S292>/Speed_Switch'
   */
  rtb_Abs_n = d * 1530.1401357649195;

  /* Signum: '<S290>/Sign' */
  if (rtIsNaN(rtb_Abs_n)) {
    d = (rtNaN);
  } else if (rtb_Abs_n < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Abs_n > 0.0);
  }

  /* Signum: '<S290>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S293>/Add' incorporates:
   *  Sum: '<S294>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S245>/Product' incorporates:
   *  Abs: '<S290>/Abs'
   *  Abs: '<S293>/Abs'
   *  Constant: '<S296>/Constant'
   *  Constant: '<S306>/Constant3'
   *  Constant: '<S306>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S290>/OR'
   *  Lookup_n-D: '<S293>/1-D Lookup Table'
   *  Math: '<S306>/Math Function'
   *  RelationalOperator: '<S290>/Equal1'
   *  RelationalOperator: '<S296>/Compare'
   *  Signum: '<S290>/Sign'
   *  Signum: '<S290>/Sign1'
   *  Sum: '<S293>/Add'
   *  Sum: '<S306>/Add1'
   *  Sum: '<S306>/Add2'
   */
  rtb_Abs_n = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Abs_n) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S291>/Gain' */
  rtb_Subtract1_f5 = Drive_Motor_Control_FF * rtb_Abs_n;

  /* Sum: '<S291>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Abs_n -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S298>/Sum1' incorporates:
   *  Constant: '<S291>/Constant2'
   *  Product: '<S298>/Product'
   *  Sum: '<S298>/Sum'
   *  UnitDelay: '<S298>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Abs_n - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S291>/Product' incorporates:
   *  Constant: '<S291>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_ik * Drive_Motor_Control_D;

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
  rtb_Switch2_m = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S291>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S291>/Add' incorporates:
   *  Gain: '<S291>/Gain1'
   *  Saturate: '<S291>/Saturation'
   */
  rtb_Hypot_d = ((Drive_Motor_Control_P * rtb_Abs_n) + rtb_Subtract1_f5) +
    rtb_Switch2_m;

  /* Sum: '<S291>/Subtract' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_Init_cv = 1.0 - rtb_Hypot_d;

  /* Sum: '<S291>/Sum2' incorporates:
   *  Gain: '<S291>/Gain2'
   *  UnitDelay: '<S291>/Unit Delay'
   */
  rtb_Subtract1_f5 = (Drive_Motor_Control_I * rtb_Abs_n) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S299>/Switch2' incorporates:
   *  Constant: '<S291>/Constant'
   *  RelationalOperator: '<S299>/LowerRelop1'
   *  Sum: '<S291>/Subtract'
   */
  if (!(rtb_Subtract1_f5 > (1.0 - rtb_Hypot_d))) {
    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S291>/Constant1'
     *  RelationalOperator: '<S299>/UpperRelop'
     *  Sum: '<S291>/Subtract1'
     */
    if (rtb_Subtract1_f5 < (-1.0 - rtb_Hypot_d)) {
      rtb_Init_cv = -1.0 - rtb_Hypot_d;
    } else {
      rtb_Init_cv = rtb_Subtract1_f5;
    }

    /* End of Switch: '<S299>/Switch' */
  }

  /* End of Switch: '<S299>/Switch2' */

  /* Saturate: '<S291>/Saturation1' */
  if (rtb_Init_cv > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_f5 = Drive_Motor_Control_I_UL;
  } else if (rtb_Init_cv < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_f5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f5 = rtb_Init_cv;
  }

  /* End of Saturate: '<S291>/Saturation1' */

  /* Sum: '<S291>/Add1' */
  rtb_Switch2_m = rtb_Hypot_d + rtb_Subtract1_f5;

  /* Saturate: '<S291>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S291>/Saturation2' */

  /* Sum: '<S307>/Add1' incorporates:
   *  Constant: '<S307>/Constant3'
   *  Constant: '<S307>/Constant4'
   *  Math: '<S307>/Math Function'
   *  Sum: '<S307>/Add2'
   */
  rtb_Abs_n = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S309>/Sum1' incorporates:
   *  Constant: '<S294>/Constant2'
   *  Product: '<S309>/Product'
   *  Sum: '<S309>/Sum'
   *  UnitDelay: '<S309>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Abs_n -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S294>/Product' incorporates:
   *  Constant: '<S294>/Constant3'
   */
  rtb_Hypot_d = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S308>/Diff' incorporates:
   *  UnitDelay: '<S308>/UD'
   *
   * Block description for '<S308>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S308>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Hypot_d - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S294>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S294>/Add' incorporates:
   *  Gain: '<S294>/Gain1'
   *  Saturate: '<S294>/Saturation'
   */
  rtb_Add_dl = (Steering_Motor_Control_P * rtb_Abs_n) + rtb_Switch2_m;

  /* Sum: '<S294>/Subtract' incorporates:
   *  Constant: '<S294>/Constant'
   */
  rtb_Init_cv = 1.0 - rtb_Add_dl;

  /* Sum: '<S294>/Sum2' incorporates:
   *  Gain: '<S294>/Gain2'
   *  UnitDelay: '<S294>/Unit Delay'
   */
  rtb_Abs_n = (Steering_Motor_Control_I * rtb_Abs_n) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S310>/Switch2' incorporates:
   *  Constant: '<S294>/Constant'
   *  RelationalOperator: '<S310>/LowerRelop1'
   *  Sum: '<S294>/Subtract'
   */
  if (!(rtb_Abs_n > (1.0 - rtb_Add_dl))) {
    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S294>/Constant1'
     *  RelationalOperator: '<S310>/UpperRelop'
     *  Sum: '<S294>/Subtract1'
     */
    if (rtb_Abs_n < (-1.0 - rtb_Add_dl)) {
      rtb_Init_cv = -1.0 - rtb_Add_dl;
    } else {
      rtb_Init_cv = rtb_Abs_n;
    }

    /* End of Switch: '<S310>/Switch' */
  }

  /* End of Switch: '<S310>/Switch2' */

  /* Saturate: '<S294>/Saturation1' */
  if (rtb_Init_cv > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_p5 = Steering_Motor_Control_I_UL;
  } else if (rtb_Init_cv < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_p5 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_p5 = rtb_Init_cv;
  }

  /* End of Saturate: '<S294>/Saturation1' */

  /* Sum: '<S294>/Add1' */
  rtb_Switch2_m = rtb_Add_dl + rtb_Subtract1_p5;

  /* Saturate: '<S294>/Saturation2' */
  if (rtb_Switch2_m > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch2_m < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Switch2_m;
  }

  /* End of Saturate: '<S294>/Saturation2' */

  /* Gain: '<S139>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S140>/Compare' incorporates:
   *  Constant: '<S139>/Constant'
   *  Constant: '<S140>/Constant'
   */
  rtb_AT_Tag_11_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S139>/Switch1' incorporates:
   *  UnitDelay: '<S139>/Unit Delay1'
   */
  if (rtb_AT_Tag_11_Active) {
    rtb_Add_dl = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_dl = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S139>/Switch1' */

  /* Sum: '<S139>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_dl;

  /* Gain: '<S139>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S139>/Switch' incorporates:
   *  UnitDelay: '<S139>/Unit Delay'
   */
  if (rtb_AT_Tag_11_Active) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S139>/Switch' */

  /* Sum: '<S139>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S7>/OR5' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Arm_Dist_Cal_Flag = (rtb_Arm_Dist_Cal_Flag &&
    (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE_k));

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   */
  rtb_Abs_n = Code_Gen_Model_U.Encoder_Revs_Back_Lower * Dist_Per_Rev_Back_Lower;

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    rtb_Switch1_k = Dist_Reset_Value_Back_Lower - rtb_Abs_n;
  } else {
    rtb_Switch1_k = Code_Gen_Model_DW.UnitDelay1_DSTATE_g;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Back_Lower_Arm_Length = rtb_Abs_n + rtb_Switch1_k;

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   */
  rtb_Abs_n = Code_Gen_Model_U.Encoder_Revs_Back_Upper * Dist_Per_Rev_Back_Upper;

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Sum: '<S21>/Sum'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    rtb_Switch1_n4 = Dist_Reset_Value_Back_Upper - rtb_Abs_n;
  } else {
    rtb_Switch1_n4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Back_Upper_Arm_Length = rtb_Abs_n + rtb_Switch1_n4;

  /* Sum: '<S143>/Add' incorporates:
   *  Constant: '<S143>/Constant24'
   */
  rtb_Abs_n = (Code_Gen_Model_B.Back_Lower_Arm_Length +
               Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S143>/Sqrt' incorporates:
   *  Math: '<S143>/Math Function'
   *  Sum: '<S143>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_Abs_n * rtb_Abs_n) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Product: '<S23>/Product' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   */
  rtb_Abs_n = Code_Gen_Model_U.Encoder_Revs_Front * Dist_Per_Rev_Front;

  /* Switch: '<S23>/Switch1' incorporates:
   *  Constant: '<S23>/Dist_Reset_Value'
   *  Sum: '<S23>/Sum'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    rtb_Switch1_dm = Dist_Reset_Value_Front - rtb_Abs_n;
  } else {
    rtb_Switch1_dm = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S23>/Switch1' */

  /* Sum: '<S23>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Abs_n + rtb_Switch1_dm;

  /* Sqrt: '<S147>/Sqrt' incorporates:
   *  Constant: '<S147>/Constant24'
   *  Math: '<S147>/Math Function'
   *  Sum: '<S147>/Add'
   *  Sum: '<S147>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Product: '<S22>/Product' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   */
  rtb_Abs_n = Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw;

  /* Switch: '<S22>/Switch1' incorporates:
   *  Constant: '<S22>/Dist_Reset_Value'
   *  Sum: '<S22>/Sum'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    rtb_Switch1_e = Dist_Reset_Value_Ball_Screw - rtb_Abs_n;
  } else {
    rtb_Switch1_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* Sum: '<S22>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Abs_n + rtb_Switch1_e;

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

  rtb_Abs_n = (((((((d * 0.84366148773210747) + 177.79999999999998) - (y *
    -0.53687549219315933)) - 177.79999999999998) - 139.7) *
                (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
               177.79999999999998) + 139.7;
  rtb_Init_cv = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((rtb_Init_cv - 25.4) * (rtb_Init_cv - 25.4)) + (rtb_Abs_n *
            rtb_Abs_n));
  sqrt_input = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  sqrt_input = atan((rtb_Init_cv - 25.4) / rtb_Abs_n);
  cos_alpha = cos(sqrt_input);
  sin_alpha = sin(sqrt_input);
  sqrt_input = (d * cos_alpha) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Abs_n = atan((rtb_Init_cv - d) / (rtb_Abs_n - sqrt_input)) -
    -0.16186298985390718;
  y = cos(rtb_Abs_n);
  cos_alpha = sin(rtb_Abs_n);
  rtb_Init_cv = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((sqrt_input - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Init_cv - 465.697) * (rtb_Init_cv - 465.697))
    + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Init_cv;

  /* Gain: '<S14>/Gain2' incorporates:
   *  MATLAB Function: '<S14>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Abs_n;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  d = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(d)) || (rtIsInf(d))) {
    d = 0.0;
  } else {
    d = fmod(d, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((d < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-d)))))) : ((int32_T)((uint8_T)d)));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant25'
   *  Constant: '<S14>/Constant26'
   *  Lookup_n-D: '<S14>/1-D Lookup Table'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Abs_n = TEST_Speaker_Height;
  } else {
    rtb_Abs_n = look1_binlcpw(TEST_Speaker_Angle,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 6U);
  }

  /* End of Switch: '<S14>/Switch4' */

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
        Code_Gen_Model_B.Desired_Height = rtb_Abs_n;
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
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Abs_n + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Abs_n - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Abs_n;
        Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      }
      break;

     case Code_Gen_Model_IN_Trap:
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
      Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
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
  rtb_Abs_n = cos(rtb_Init_cv);
  rtb_Init_cv = sin(rtb_Init_cv);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    d = ((rtb_Abs_n * 42.875) + ((-rtb_Init_cv) * -76.0)) + (sqrt(sqrt_input) -
      50.027);
  } else {
    d = ((rtb_Abs_n * 42.875) + ((-rtb_Init_cv) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = d;
  rtb_Minus_n[0] = ((rtb_Abs_n * 155.54999999999998) + ((-rtb_Init_cv) * -25.4))
    + d;
  d = ((rtb_Init_cv * 42.875) + (rtb_Abs_n * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = d;
  rtb_Minus_n[1] = ((rtb_Init_cv * 155.54999999999998) + (rtb_Abs_n * -25.4)) +
    d;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Reshapey[1] - 25.4) *
    (rtb_Reshapey[1] - 25.4)) + (rtb_Reshapey[0] * rtb_Reshapey[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Abs_n = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                   (rtb_Minus_n[1] * rtb_Minus_n[1]));
  sqrt_input = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_Abs_n));
  rtb_Init_cv = ((288.925 / rtb_Abs_n) * rtb_Minus_n[1]) - 88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (sqrt_input * sqrt_input) + (rtb_Init_cv *
    rtb_Init_cv);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Abs_n;

  /* End of MATLAB Function: '<S14>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S14>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S14>/Constant23'
   *  Constant: '<S14>/Constant24'
   *  Constant: '<S14>/Constant28'
   *  Constant: '<S14>/Constant29'
   *  Constant: '<S14>/Constant30'
   *  Constant: '<S14>/Constant31'
   */
  rtb_Abs_n = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                    Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_Abs_n <= 98.425) {
    y = 79.375;
    rtb_Init_cv = 19.049999999999997;
  } else if (rtb_Abs_n <= 413.375) {
    y = 79.375;
    rtb_Init_cv = rtb_Abs_n - 79.375;
  } else {
    y = fmin(rtb_Abs_n - 334.0, 317.0);
    rtb_Init_cv = 334.0;
  }

  /* End of MATLAB Function: '<S14>/Back_AA_To_Extentions' */

  /* Switch: '<S171>/Init' incorporates:
   *  UnitDelay: '<S171>/FixPt Unit Delay1'
   *  UnitDelay: '<S171>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Abs_n = rtb_Init_cv;
  } else {
    rtb_Abs_n = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S171>/Init' */

  /* Sum: '<S169>/Sum1' */
  rtb_Init_cv -= rtb_Abs_n;

  /* Switch: '<S170>/Switch2' incorporates:
   *  Constant: '<S155>/Constant1'
   *  Constant: '<S155>/Constant3'
   *  RelationalOperator: '<S170>/LowerRelop1'
   *  RelationalOperator: '<S170>/UpperRelop'
   *  Switch: '<S170>/Switch'
   */
  if (rtb_Init_cv > AA_Position_Inc_RL) {
    rtb_Init_cv = AA_Position_Inc_RL;
  } else if (rtb_Init_cv < AA_Position_Dec_RL) {
    /* Switch: '<S170>/Switch' incorporates:
     *  Constant: '<S155>/Constant1'
     */
    rtb_Init_cv = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S170>/Switch2' */

  /* Sum: '<S169>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Init_cv + rtb_Abs_n;

  /* Sum: '<S151>/Sum' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S151>/Gain1' */
  rtb_Abs_n = AA_Prop_Gain * rtb_Init_cv;

  /* RelationalOperator: '<S145>/Compare' incorporates:
   *  Constant: '<S145>/Constant'
   */
  rtb_Arm_Dist_Cal_Flag = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S151>/Switch' incorporates:
   *  Constant: '<S151>/Constant2'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S151>/Constant3'
     *  UnitDelay: '<S160>/Delay Input1'
     *
     * Block description for '<S160>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S151>/Sum2' incorporates:
       *  Gain: '<S151>/Gain2'
       *  UnitDelay: '<S151>/Unit Delay'
       */
      rtb_Init_cv = (AA_Integral_Gain * rtb_Init_cv) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S151>/Subtract' incorporates:
       *  Constant: '<S151>/Constant'
       */
      sqrt_input = AA_TC_UL - rtb_Abs_n;

      /* Switch: '<S161>/Switch2' incorporates:
       *  RelationalOperator: '<S161>/LowerRelop1'
       */
      if (!(rtb_Init_cv > sqrt_input)) {
        /* Sum: '<S151>/Subtract1' incorporates:
         *  Constant: '<S151>/Constant1'
         */
        sqrt_input = AA_TC_LL - rtb_Abs_n;

        /* Switch: '<S161>/Switch' incorporates:
         *  RelationalOperator: '<S161>/UpperRelop'
         */
        if (!(rtb_Init_cv < sqrt_input)) {
          sqrt_input = rtb_Init_cv;
        }

        /* End of Switch: '<S161>/Switch' */
      }

      /* End of Switch: '<S161>/Switch2' */

      /* Saturate: '<S151>/Saturation1' */
      if (sqrt_input > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (sqrt_input < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      }

      /* End of Saturate: '<S151>/Saturation1' */
    }

    /* End of Switch: '<S151>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S151>/Switch' */

  /* Switch: '<S14>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S151>/Add1' */
    rtb_Switch2_m = rtb_Abs_n + sqrt_input;

    /* Saturate: '<S151>/Saturation2' */
    if (rtb_Switch2_m > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Switch2_m < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = rtb_Switch2_m;
    }

    /* End of Saturate: '<S151>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  rtb_Init_cv = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  rtb_AND_p2 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S66>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S66>/Delay Input1'
   *
   * Block description for '<S66>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Is_Absolute_Translation_g = (((int32_T)rtb_AND_p2) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S67>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_11_Active = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_nx));

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S69>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S69>/Delay Input1'
   *
   * Block description for '<S69>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_13_Active = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   */
  rtb_AT_Tag_14_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S68>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S68>/Delay Input1'
   *
   * Block description for '<S68>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_i = (((int32_T)rtb_AT_Tag_14_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_hw));

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   */
  rtb_AT_Tag_15_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S70>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S70>/Delay Input1'
   *
   * Block description for '<S70>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AT_Tag_15_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   */
  rtb_AT_Tag_16_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* RelationalOperator: '<S71>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND2_k = (((int32_T)rtb_AT_Tag_16_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e0));

  /* Chart: '<S8>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;
    Code_Gen_Model_B.Intake_Motor_DC = 0.0;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
  } else {
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Model_IN_Escape_Action:
      Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
      Code_Gen_Model_B.Note_State_ID = 0.0;
      Code_Gen_Model_B.Intake_Motor_DC = 0.0;

      /* Outport: '<Root>/Shooter_Brake_Enable' */
      Code_Gen_Model_Y.Shooter_Brake_Enable = true;
      Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time2:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Escape_Action;
        Code_Gen_Model_B.Note_State_ID = 2.4;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time4:
      Code_Gen_Model_B.Note_State_ID = 4.2;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer) || rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time5:
      Code_Gen_Model_B.Note_State_ID = 5.4;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
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
      } else if (rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Intake_AND_Shooter:
      Code_Gen_Model_B.Note_State_ID = 4.1;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) ||
          rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      }
      break;

     case Co_IN_Note_Speaker_Score_Intake:
      Code_Gen_Model_B.Note_State_ID = 5.3;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist > Note_Detect_Dist_Intake) ||
          rtb_AND2_k) {
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
      } else if (rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else {
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Init_cv;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Init_cv;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AND2_k) {
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
      } else if (rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
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
      } else if (rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_M_Waiting_for_Requests(&rtb_Is_Absolute_Translation_g,
        &rtb_AT_Tag_11_Active, &rtb_AT_Tag_13_Active, &FixPtRelationalOperator_i,
        &FixPtRelationalOperator_o, &rtb_Init_cv);
      break;
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

  /* Sum: '<S72>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Abs_n = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S72>/Add' incorporates:
   *  Gain: '<S72>/Gain'
   *  Gain: '<S72>/Gain1'
   */
  rtb_Init_cv = (Shooter_Motor_Control_FF *
                 Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Abs_n);

  /* Switch: '<S72>/Switch' incorporates:
   *  Constant: '<S72>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S72>/Sum2' incorporates:
     *  Gain: '<S72>/Gain2'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_Abs_n = (Shooter_Motor_Control_I * rtb_Abs_n) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S72>/Subtract' incorporates:
     *  Constant: '<S72>/Constant'
     */
    d = 1.0 - rtb_Init_cv;

    /* Switch: '<S74>/Switch2' incorporates:
     *  Constant: '<S72>/Constant'
     *  RelationalOperator: '<S74>/LowerRelop1'
     *  Sum: '<S72>/Subtract'
     */
    if (!(rtb_Abs_n > (1.0 - rtb_Init_cv))) {
      /* Sum: '<S72>/Subtract1' incorporates:
       *  Constant: '<S72>/Constant1'
       */
      d = -1.0 - rtb_Init_cv;

      /* Switch: '<S74>/Switch' incorporates:
       *  Constant: '<S72>/Constant1'
       *  RelationalOperator: '<S74>/UpperRelop'
       *  Sum: '<S72>/Subtract1'
       */
      if (!(rtb_Abs_n < (-1.0 - rtb_Init_cv))) {
        d = rtb_Abs_n;
      }

      /* End of Switch: '<S74>/Switch' */
    }

    /* End of Switch: '<S74>/Switch2' */

    /* Saturate: '<S72>/Saturation1' */
    if (d > Shooter_Motor_Control_I_UL) {
      d = Shooter_Motor_Control_I_UL;
    } else if (d < Shooter_Motor_Control_I_LL) {
      d = Shooter_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S72>/Saturation1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Gain: '<S7>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_Abs_n = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Switch: '<S8>/Switch4' incorporates:
   *  Switch: '<S8>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S8>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_Abs_n;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S72>/Add1' incorporates:
     *  Switch: '<S8>/Switch'
     */
    rtb_Switch2_m = rtb_Init_cv + d;

    /* Saturate: '<S72>/Saturation2' incorporates:
     *  Switch: '<S8>/Switch'
     */
    if (rtb_Switch2_m > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Switch2_m < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Switch2_m;
    }

    /* End of Saturate: '<S72>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* Sum: '<S73>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  cos_alpha = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S73>/Add' incorporates:
   *  Gain: '<S73>/Gain'
   *  Gain: '<S73>/Gain1'
   */
  rtb_Init_cv = (Shooter_Motor_Control_FF *
                 Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * cos_alpha);

  /* Switch: '<S73>/Switch' incorporates:
   *  Constant: '<S73>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S73>/Sum2' incorporates:
     *  Gain: '<S73>/Gain2'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    cos_alpha = (Shooter_Motor_Control_I * cos_alpha) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S73>/Subtract' incorporates:
     *  Constant: '<S73>/Constant'
     */
    sin_alpha = 1.0 - rtb_Init_cv;

    /* Switch: '<S75>/Switch2' incorporates:
     *  Constant: '<S73>/Constant'
     *  RelationalOperator: '<S75>/LowerRelop1'
     *  Sum: '<S73>/Subtract'
     */
    if (!(cos_alpha > (1.0 - rtb_Init_cv))) {
      /* Sum: '<S73>/Subtract1' incorporates:
       *  Constant: '<S73>/Constant1'
       */
      sin_alpha = -1.0 - rtb_Init_cv;

      /* Switch: '<S75>/Switch' incorporates:
       *  Constant: '<S73>/Constant1'
       *  RelationalOperator: '<S75>/UpperRelop'
       *  Sum: '<S73>/Subtract1'
       */
      if (!(cos_alpha < (-1.0 - rtb_Init_cv))) {
        sin_alpha = cos_alpha;
      }

      /* End of Switch: '<S75>/Switch' */
    }

    /* End of Switch: '<S75>/Switch2' */

    /* Saturate: '<S73>/Saturation1' */
    if (sin_alpha > Shooter_Motor_Control_I_UL) {
      cos_alpha = Shooter_Motor_Control_I_UL;
    } else if (sin_alpha < Shooter_Motor_Control_I_LL) {
      cos_alpha = Shooter_Motor_Control_I_LL;
    } else {
      cos_alpha = sin_alpha;
    }

    /* End of Saturate: '<S73>/Saturation1' */
  } else {
    cos_alpha = 0.0;
  }

  /* End of Switch: '<S73>/Switch' */

  /* Switch: '<S8>/Switch5' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Abs_n;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S73>/Add1' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    rtb_Switch2_m = rtb_Init_cv + cos_alpha;

    /* Saturate: '<S73>/Saturation2' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    if (rtb_Switch2_m > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Switch2_m < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Switch2_m;
    }

    /* End of Saturate: '<S73>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S8>/Switch5' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S65>/Constant'
   *  Constant: '<S8>/Constant4'
   *  Logic: '<S8>/NOT'
   *  RelationalOperator: '<S65>/Compare'
   */
  if (!(TEST_Servo_Override_Flag != 0.0)) {
    /* Outport: '<Root>/Shooter_Servo_Position' */
    Code_Gen_Model_Y.Shooter_Servo_Position = Code_Gen_Model_B.Shooter_Servo_Pos;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Switch: '<S174>/Init' incorporates:
   *  UnitDelay: '<S174>/FixPt Unit Delay1'
   *  UnitDelay: '<S174>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Abs_n = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_Abs_n = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S174>/Init' */

  /* Sum: '<S172>/Sum1' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_BS_Length - rtb_Abs_n;

  /* Switch: '<S173>/Switch2' incorporates:
   *  Constant: '<S156>/Constant1'
   *  Constant: '<S156>/Constant3'
   *  RelationalOperator: '<S173>/LowerRelop1'
   *  RelationalOperator: '<S173>/UpperRelop'
   *  Switch: '<S173>/Switch'
   */
  if (rtb_Init_cv > BS_Position_Inc_RL) {
    rtb_Init_cv = BS_Position_Inc_RL;
  } else if (rtb_Init_cv < BS_Position_Dec_RL) {
    /* Switch: '<S173>/Switch' incorporates:
     *  Constant: '<S156>/Constant1'
     */
    rtb_Init_cv = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S173>/Switch2' */

  /* Sum: '<S172>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Init_cv + rtb_Abs_n;

  /* Sum: '<S150>/Sum' */
  rtb_Abs_n = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S159>/Sum1' incorporates:
   *  Constant: '<S150>/Constant2'
   *  Product: '<S159>/Product'
   *  Sum: '<S159>/Sum'
   *  UnitDelay: '<S159>/Unit Delay1'
   */
  sin_alpha = ((rtb_Abs_n - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S150>/Product' incorporates:
   *  Constant: '<S150>/Constant3'
   */
  rtb_Product_fi = sin_alpha * BS_Deriv_Gain;

  /* Switch: '<S14>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S158>/Diff' incorporates:
     *  UnitDelay: '<S158>/UD'
     *
     * Block description for '<S158>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S158>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Switch2_m = rtb_Product_fi - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S150>/Saturation' */
    if (rtb_Switch2_m > BS_Deriv_UL) {
      rtb_Switch2_m = BS_Deriv_UL;
    } else if (rtb_Switch2_m < BS_Deriv_LL) {
      rtb_Switch2_m = BS_Deriv_LL;
    }

    /* Sum: '<S150>/Add' incorporates:
     *  Gain: '<S150>/Gain1'
     *  Saturate: '<S150>/Saturation'
     */
    rtb_Switch2_m += BS_Prop_Gain * rtb_Abs_n;

    /* Saturate: '<S150>/Saturation2' */
    if (rtb_Switch2_m > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (rtb_Switch2_m < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = rtb_Switch2_m;
    }

    /* End of Saturate: '<S150>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch3' */

  /* Switch: '<S168>/Init' incorporates:
   *  UnitDelay: '<S168>/FixPt Unit Delay1'
   *  UnitDelay: '<S168>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Abs_n = y;
  } else {
    rtb_Abs_n = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S168>/Init' */

  /* Sum: '<S166>/Sum1' */
  rtb_Init_cv = y - rtb_Abs_n;

  /* Switch: '<S167>/Switch2' incorporates:
   *  Constant: '<S154>/Constant1'
   *  Constant: '<S154>/Constant3'
   *  RelationalOperator: '<S167>/LowerRelop1'
   *  RelationalOperator: '<S167>/UpperRelop'
   *  Switch: '<S167>/Switch'
   */
  if (rtb_Init_cv > AA_Position_Inc_RL) {
    rtb_Init_cv = AA_Position_Inc_RL;
  } else if (rtb_Init_cv < AA_Position_Dec_RL) {
    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S154>/Constant1'
     */
    rtb_Init_cv = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S167>/Switch2' */

  /* Sum: '<S166>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Init_cv + rtb_Abs_n;

  /* Sum: '<S152>/Sum' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S152>/Gain1' */
  rtb_Abs_n = AA_Prop_Gain * rtb_Init_cv;

  /* Switch: '<S152>/Switch' incorporates:
   *  Constant: '<S152>/Constant2'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    /* Switch: '<S152>/Switch1' incorporates:
     *  Constant: '<S152>/Constant3'
     *  UnitDelay: '<S162>/Delay Input1'
     *
     * Block description for '<S162>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      y = AA_Integral_IC;
    } else {
      /* Sum: '<S152>/Sum2' incorporates:
       *  Gain: '<S152>/Gain2'
       *  UnitDelay: '<S152>/Unit Delay'
       */
      rtb_Init_cv = (AA_Integral_Gain * rtb_Init_cv) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c2;

      /* Sum: '<S152>/Subtract' incorporates:
       *  Constant: '<S152>/Constant'
       */
      y = AA_TC_UL - rtb_Abs_n;

      /* Switch: '<S163>/Switch2' incorporates:
       *  RelationalOperator: '<S163>/LowerRelop1'
       */
      if (!(rtb_Init_cv > y)) {
        /* Sum: '<S152>/Subtract1' incorporates:
         *  Constant: '<S152>/Constant1'
         */
        y = AA_TC_LL - rtb_Abs_n;

        /* Switch: '<S163>/Switch' incorporates:
         *  RelationalOperator: '<S163>/UpperRelop'
         */
        if (!(rtb_Init_cv < y)) {
          y = rtb_Init_cv;
        }

        /* End of Switch: '<S163>/Switch' */
      }

      /* End of Switch: '<S163>/Switch2' */

      /* Saturate: '<S152>/Saturation1' */
      if (y > AA_Integral_UL) {
        y = AA_Integral_UL;
      } else if (y < AA_Integral_LL) {
        y = AA_Integral_LL;
      }

      /* End of Saturate: '<S152>/Saturation1' */
    }

    /* End of Switch: '<S152>/Switch1' */
  } else {
    y = 0.0;
  }

  /* End of Switch: '<S152>/Switch' */

  /* Switch: '<S14>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S152>/Add1' */
    rtb_Switch2_m = rtb_Abs_n + y;

    /* Saturate: '<S152>/Saturation2' */
    if (rtb_Switch2_m > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Switch2_m < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Switch2_m;
    }

    /* End of Saturate: '<S152>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch' */

  /* Sum: '<S146>/Subtract1' incorporates:
   *  Constant: '<S146>/Constant24'
   *  Math: '<S146>/Math Function'
   *  Sqrt: '<S146>/Sqrt'
   *  Sum: '<S146>/Subtract'
   */
  rtb_Abs_n = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                    Code_Gen_Model_B.Desired_Front_AA_Length) -
                   Code_Gen_Model_ConstB.MathFunction1_d) - 506.41249999999997;

  /* Saturate: '<S146>/Saturation' */
  if (rtb_Abs_n > Front_AA_Max_Ext) {
    rtb_Abs_n = Front_AA_Max_Ext;
  } else if (rtb_Abs_n < Front_AA_Min_Ext) {
    rtb_Abs_n = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S146>/Saturation' */

  /* Switch: '<S177>/Init' incorporates:
   *  UnitDelay: '<S177>/FixPt Unit Delay1'
   *  UnitDelay: '<S177>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Init_cv = rtb_Abs_n;
  } else {
    rtb_Init_cv = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S177>/Init' */

  /* Sum: '<S175>/Sum1' */
  rtb_Abs_n -= rtb_Init_cv;

  /* Switch: '<S176>/Switch2' incorporates:
   *  Constant: '<S157>/Constant1'
   *  Constant: '<S157>/Constant3'
   *  RelationalOperator: '<S176>/LowerRelop1'
   *  RelationalOperator: '<S176>/UpperRelop'
   *  Switch: '<S176>/Switch'
   */
  if (rtb_Abs_n > AA_Position_Inc_RL) {
    rtb_Abs_n = AA_Position_Inc_RL;
  } else if (rtb_Abs_n < AA_Position_Dec_RL) {
    /* Switch: '<S176>/Switch' incorporates:
     *  Constant: '<S157>/Constant1'
     */
    rtb_Abs_n = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S176>/Switch2' */

  /* Sum: '<S175>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Abs_n + rtb_Init_cv;

  /* Sum: '<S153>/Sum' */
  rtb_Init_cv = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S153>/Gain1' */
  rtb_Abs_n = AA_Prop_Gain * rtb_Init_cv;

  /* Switch: '<S153>/Switch' incorporates:
   *  Constant: '<S153>/Constant2'
   */
  if (rtb_Arm_Dist_Cal_Flag) {
    /* Switch: '<S153>/Switch1' incorporates:
     *  Constant: '<S153>/Constant3'
     *  UnitDelay: '<S164>/Delay Input1'
     *
     * Block description for '<S164>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      rtb_Init_cv = AA_Integral_IC;
    } else {
      /* Sum: '<S153>/Sum2' incorporates:
       *  Gain: '<S153>/Gain2'
       *  UnitDelay: '<S153>/Unit Delay'
       */
      rtb_Init_cv = (AA_Integral_Gain * rtb_Init_cv) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S153>/Subtract' incorporates:
       *  Constant: '<S153>/Constant'
       */
      rtb_Switch2_m = AA_TC_UL - rtb_Abs_n;

      /* Switch: '<S165>/Switch2' incorporates:
       *  RelationalOperator: '<S165>/LowerRelop1'
       */
      if (!(rtb_Init_cv > rtb_Switch2_m)) {
        /* Sum: '<S153>/Subtract1' incorporates:
         *  Constant: '<S153>/Constant1'
         */
        rtb_Switch2_m = AA_TC_LL - rtb_Abs_n;

        /* Switch: '<S165>/Switch' incorporates:
         *  RelationalOperator: '<S165>/UpperRelop'
         */
        if (!(rtb_Init_cv < rtb_Switch2_m)) {
          rtb_Switch2_m = rtb_Init_cv;
        }

        /* End of Switch: '<S165>/Switch' */
      }

      /* End of Switch: '<S165>/Switch2' */

      /* Saturate: '<S153>/Saturation1' */
      if (rtb_Switch2_m > AA_Integral_UL) {
        rtb_Init_cv = AA_Integral_UL;
      } else if (rtb_Switch2_m < AA_Integral_LL) {
        rtb_Init_cv = AA_Integral_LL;
      } else {
        rtb_Init_cv = rtb_Switch2_m;
      }

      /* End of Saturate: '<S153>/Saturation1' */
    }

    /* End of Switch: '<S153>/Switch1' */
  } else {
    rtb_Init_cv = 0.0;
  }

  /* End of Switch: '<S153>/Switch' */

  /* Switch: '<S14>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S153>/Add1' */
    rtb_Switch2_m = rtb_Abs_n + rtb_Init_cv;

    /* Saturate: '<S153>/Saturation2' */
    if (rtb_Switch2_m > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Switch2_m < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Switch2_m;
    }

    /* End of Saturate: '<S153>/Saturation2' */
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

  /* Update for UnitDelay: '<S131>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S132>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S133>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S133>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S134>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S134>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' incorporates:
     *  Bias: '<S206>/Bias'
     *  Merge: '<S180>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' incorporates:
     *  Bias: '<S206>/Bias'
     *  Merge: '<S180>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S76>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S96>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S76>/A'
   *  Delay: '<S76>/MemoryX'
   */
  rtb_Abs_n = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_m = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S76>/MemoryX' incorporates:
   *  Constant: '<S76>/B'
   *  Product: '<S96>/A[k]*xhat[k|k-1]'
   *  Product: '<S96>/B[k]*u[k]'
   *  Sum: '<S96>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Abs_n) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_m) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S56>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B3_X'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Gamepad_B3_X;

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Chain_DutyCycle;

  /* Update for UnitDelay: '<S130>/UD'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Gyro_Angle_Field;

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

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_OR7;

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S343>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S343>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S357>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Gain1;

  /* Update for UnitDelay: '<S356>/UD'
   *
   * Block description for '<S356>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Merge1;

  /* Update for UnitDelay: '<S354>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S352>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S352>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S319>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S312>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S330>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch4_g;

  /* Update for UnitDelay: '<S329>/UD'
   *
   * Block description for '<S329>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Sum1_li;

  /* Update for UnitDelay: '<S315>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S256>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Switch2_o;

  /* Update for UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S249>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Steer_Joystick_X_Rel_Mod;

  /* Update for UnitDelay: '<S267>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_oh;

  /* Update for UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_o;

  /* Update for UnitDelay: '<S252>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S277>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_fn;

  /* Update for UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a1;

  /* Update for UnitDelay: '<S270>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_m;

  /* Update for UnitDelay: '<S288>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S273>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S298>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S291>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract1_f5;

  /* Update for UnitDelay: '<S309>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S308>/UD'
   *
   * Block description for '<S308>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S294>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_p5;

  /* Update for UnitDelay: '<S139>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_dl;

  /* Update for UnitDelay: '<S139>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S54>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_U.Gamepad_B1_A;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_k;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_n4;

  /* Update for UnitDelay: '<S23>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_dm;

  /* Update for UnitDelay: '<S22>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_e;

  /* Update for UnitDelay: '<S171>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S171>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S151>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = sqrt_input;

  /* Update for UnitDelay: '<S160>/Delay Input1'
   *
   * Block description for '<S160>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Arm_Dist_Cal_Flag;

  /* Update for UnitDelay: '<S66>/Delay Input1'
   *
   * Block description for '<S66>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_AND_p2;

  /* Update for UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nx = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S69>/Delay Input1'
   *
   * Block description for '<S69>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S68>/Delay Input1'
   *
   * Block description for '<S68>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hw = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S70>/Delay Input1'
   *
   * Block description for '<S70>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_15_Active;

  /* Update for UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e0 = rtb_AT_Tag_16_Active;

  /* Update for UnitDelay: '<S72>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = d;

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = cos_alpha;

  /* Update for UnitDelay: '<S174>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S174>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S159>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = sin_alpha;

  /* Update for UnitDelay: '<S158>/UD'
   *
   * Block description for '<S158>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Product_fi;

  /* Update for UnitDelay: '<S168>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S168>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S162>/Delay Input1'
   *
   * Block description for '<S162>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_Arm_Dist_Cal_Flag;

  /* Update for UnitDelay: '<S152>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c2 = y;

  /* Update for UnitDelay: '<S177>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S177>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S164>/Delay Input1'
   *
   * Block description for '<S164>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Arm_Dist_Cal_Flag;

  /* Update for UnitDelay: '<S153>/Unit Delay' */
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

    /* InitializeConditions for Delay: '<S76>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S343>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S352>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S20>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S171>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S174>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S168>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S177>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S413>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S184>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S180>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S184>/Robot_Index_Is_Valid' */
    /* Start for If: '<S187>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S187>/Circle_Check_Valid' */
    /* Start for If: '<S189>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S187>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S184>/Robot_Index_Is_Valid' */
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

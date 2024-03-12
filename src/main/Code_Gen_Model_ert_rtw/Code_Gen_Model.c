/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.128
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Mar 12 18:07:28 2024
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
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
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
#define Code_Gen_Model_State_Amp       ((uint8_T)3U)
#define Code_Gen_Model_State_Speaker   ((uint8_T)1U)
#define Code_Gen_Model_State_Stage     ((uint8_T)0U)
#define Code_Gen_Model_State_Trap      ((uint8_T)4U)

/* Named constants for Chart: '<S27>/Chart' */
#define Code_Gen_IN_CheckForRobotOrNote ((uint8_T)1U)
#define Code_Gen_IN_PathToPickUpWODetec ((uint8_T)12U)
#define Code_Gen_Model_IN_End          ((uint8_T)2U)
#define Code_Gen_Model_IN_MoveArms     ((uint8_T)3U)
#define Code_Gen_Model_IN_Note6        ((uint8_T)4U)
#define Code_Gen_Model_IN_Note6_trans  ((uint8_T)5U)
#define Code_Gen_Model_IN_Note7        ((uint8_T)6U)
#define Code_Gen_Model_IN_Note7_trans  ((uint8_T)7U)
#define Code_Gen_Model_IN_Note8        ((uint8_T)8U)
#define Code_Gen_Model_IN_Note8_trans  ((uint8_T)9U)
#define Code_Gen_Model_IN_PathPicker   ((uint8_T)10U)
#define Code_Gen_Model_IN_PathToPickUp ((uint8_T)11U)
#define Code_Gen_Model_IN_PathToShoot  ((uint8_T)13U)
#define Code_Gen_Model_IN_PathToShoot1 ((uint8_T)1U)
#define Code_Gen_Model_IN_RunIntake    ((uint8_T)15U)
#define Code_Gen_Model_IN_RunIntake1   ((uint8_T)16U)
#define Code_Gen_Model_IN_Shoot        ((uint8_T)17U)
#define Code_Gen_Model_IN_Shoot1       ((uint8_T)2U)
#define Code_Gen_Model_IN_ShootWODetec ((uint8_T)18U)
#define Code_Gen_Model_t_sample        (0.02)
#define Code_Gen__IN_PathToShootWODetec ((uint8_T)14U)

/* Exported block parameters */
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S156>/Gain2'
                                        *   '<S157>/Gain2'
                                        *   '<S158>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S156>/Constant3'
                                        *   '<S157>/Constant3'
                                        *   '<S158>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S156>/Saturation1'
                                        *   '<S157>/Saturation1'
                                        *   '<S158>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S156>/Saturation1'
                                        *   '<S157>/Saturation1'
                                        *   '<S158>/Saturation1'
                                        */
real_T AA_Position_Back_Dec_RL = -1.0; /* Variable: AA_Position_Back_Dec_RL
                                        * Referenced by:
                                        *   '<S159>/Constant1'
                                        *   '<S160>/Constant1'
                                        */
real_T AA_Position_Back_Inc_RL = 1.0;  /* Variable: AA_Position_Back_Inc_RL
                                        * Referenced by:
                                        *   '<S159>/Constant3'
                                        *   '<S160>/Constant3'
                                        */
real_T AA_Position_Front_Dec_RL = -2.0;/* Variable: AA_Position_Front_Dec_RL
                                        * Referenced by: '<S162>/Constant1'
                                        */
real_T AA_Position_Front_Inc_RL = 2.0; /* Variable: AA_Position_Front_Inc_RL
                                        * Referenced by: '<S162>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S156>/Gain1'
                                        *   '<S157>/Gain1'
                                        *   '<S158>/Gain1'
                                        */
real_T AA_TC_LL = -0.4;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S156>/Constant1'
                                        *   '<S156>/Saturation2'
                                        *   '<S157>/Constant1'
                                        *   '<S157>/Saturation2'
                                        *   '<S158>/Constant1'
                                        *   '<S158>/Saturation2'
                                        */
real_T AA_TC_UL = 0.4;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S156>/Constant'
                                        *   '<S156>/Saturation2'
                                        *   '<S157>/Constant'
                                        *   '<S157>/Saturation2'
                                        *   '<S158>/Constant'
                                        *   '<S158>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = 0.0;     /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S390>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S390>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S390>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S390>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S390>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S390>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S5>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S5>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S390>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = -3.0;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S390>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S5>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S5>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.6667;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S390>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.3934;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S390>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.6667;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S390>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.8182;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S390>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 9.6962;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S390>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S390>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.8448;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S390>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S390>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 3.8793;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S390>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.8182;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S390>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 3.8793;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S390>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.3934;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S390>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S390>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.6802;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S390>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S390>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.6802;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S390>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S393>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = -0.0006;  /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S392>/Constant17'
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
                                        * Referenced by: '<S155>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S155>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S155>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S155>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -4.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S161>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 4.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S161>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S155>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S155>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S155>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S414>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S410>/Constant'
                                         *   '<S410>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S414>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S410>/Constant1'
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
                                        * Referenced by: '<S338>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S254>/Constant3'
                                        *   '<S275>/Constant3'
                                        *   '<S296>/Constant3'
                                        *   '<S317>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S254>/Constant2'
                                   *   '<S275>/Constant2'
                                   *   '<S296>/Constant2'
                                   *   '<S317>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S254>/Saturation'
                                        *   '<S275>/Saturation'
                                        *   '<S296>/Saturation'
                                        *   '<S317>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S254>/Saturation'
                                        *   '<S275>/Saturation'
                                        *   '<S296>/Saturation'
                                        *   '<S317>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S254>/Gain'
                                            *   '<S275>/Gain'
                                            *   '<S296>/Gain'
                                            *   '<S317>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S254>/Gain2'
                                        *   '<S275>/Gain2'
                                        *   '<S296>/Gain2'
                                        *   '<S317>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S254>/Saturation1'
                                        *   '<S275>/Saturation1'
                                        *   '<S296>/Saturation1'
                                        *   '<S317>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S254>/Saturation1'
                                        *   '<S275>/Saturation1'
                                        *   '<S296>/Saturation1'
                                        *   '<S317>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S254>/Gain1'
                                        *   '<S275>/Gain1'
                                        *   '<S296>/Gain1'
                                        *   '<S317>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S259>/Constant'
                            *   '<S280>/Constant'
                            *   '<S301>/Constant'
                            *   '<S322>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S26>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S151>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S151>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S33>/Constant'
                                           *   '<S35>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S34>/Constant'
                                          *   '<S36>/Constant'
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
real_T LoadShooter_Gap = 293.0;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S14>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 610.0;     /* Variable: LoadShooter_Height
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
                                        * Referenced by: '<S144>/Constant'
                                        */
real_T Servo_Store_Gain = 0.0071429;   /* Variable: Servo_Store_Gain
                                        * Referenced by: '<S8>/Gain'
                                        */
real_T Servo_Store_Offset = 0.6;       /* Variable: Servo_Store_Offset
                                        * Referenced by: '<S8>/Constant1'
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
                                           *   '<S77>/Gain'
                                           *   '<S78>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S77>/Gain2'
                                         *   '<S78>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S77>/Saturation1'
                                          *   '<S78>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S77>/Saturation1'
                                         *   '<S78>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S77>/Gain1'
                                         *   '<S78>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 300.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                      */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S239>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S239>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S186>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S199>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S239>/Constant3'
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
                                          * Referenced by: '<S394>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S359>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S359>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S359>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S359>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S358>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S359>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S359>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S359>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S359>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S359>/Constant1'
                                   *   '<S359>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S359>/Constant'
                                   *   '<S359>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S349>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S349>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S349>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S349>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S349>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S349>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S257>/Constant3'
                                        *   '<S278>/Constant3'
                                        *   '<S299>/Constant3'
                                        *   '<S320>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S257>/Constant2'
                                *   '<S278>/Constant2'
                                *   '<S299>/Constant2'
                                *   '<S320>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S257>/Saturation'
                                           *   '<S278>/Saturation'
                                           *   '<S299>/Saturation'
                                           *   '<S320>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S257>/Saturation'
                                          *   '<S278>/Saturation'
                                          *   '<S299>/Saturation'
                                          *   '<S320>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S257>/Gain2'
                                         *   '<S278>/Gain2'
                                         *   '<S299>/Gain2'
                                         *   '<S320>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S257>/Saturation1'
                                             *   '<S278>/Saturation1'
                                             *   '<S299>/Saturation1'
                                             *   '<S320>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S257>/Saturation1'
                                            *   '<S278>/Saturation1'
                                            *   '<S299>/Saturation1'
                                            *   '<S320>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S257>/Gain1'
                                        *   '<S278>/Gain1'
                                        *   '<S299>/Gain1'
                                        *   '<S320>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S392>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S392>/Constant1'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S8>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S8>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 0.0;       /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S14>/Constant26'
                                        */
real_T TEST_Speaker_Gap = 0.0;         /* Variable: TEST_Speaker_Gap
                                        * Referenced by: '<S14>/Constant27'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S14>/Constant25'
                                        */
real_T TEST_Speaker_Speed = 0.0;       /* Variable: TEST_Speaker_Speed
                                        * Referenced by: '<S8>/Constant26'
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
                        * Referenced by: '<S337>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S337>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S337>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S337>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S337>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S337>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S393>/Gain'
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
static void Code_Gen_Mo_CheckForRobotOrNote(uint32_T *entryPortIndex);
static void Code_Gen_Model_Note8_trans(const boolean_T *UnitDelay_e, const
  real_T *UnitDelay);
static void Code_Gen_Model_PathToPickUp(void);
static void Code_Gen_Model_PathToShoot(uint32_T *entryPortIndex);
static void Code_Gen_Model_RunIntake(uint32_T *entryPortIndex);
static void Code_Gen_Model_Shoot(uint32_T *entryPortIndex);
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  real_T *Switch9);

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

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Mo_CheckForRobotOrNote(uint32_T *entryPortIndex)
{
  real_T tmp;

  /* Inport: '<Root>/Priority_List' */
  tmp = Code_Gen_Model_U.Priority_List[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if ((tmp > 5.0) && (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    *entryPortIndex = 2U;
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    if ((*entryPortIndex) == 2U) {
      *entryPortIndex = 0U;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
      Code_Gen_Model_B.SplineEnable = 1.0;
      Code_Gen_Model_DW.CloseNoteCounter++;
    }
  } else if (tmp < 6.0) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_PathToPickUp;
    Code_Gen_Model_B.SplineEnable = 1.0;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_Note8_trans(const boolean_T *UnitDelay_e, const
  real_T *UnitDelay)
{
  if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
  } else if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6_trans;
  } else if (!(*UnitDelay_e)) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note8;
    Code_Gen_Model_DW.is_Note8 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (Code_Gen_Model_DW.CloseNoteCounter == 3.0) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_MoveArms;
    Code_Gen_Model_B.ArmStateRequest = 1.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  } else if (!((*UnitDelay) != 0.0)) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_End;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathToPickUp(void)
{
  if (Code_Gen_Model_DW.Timer < 16.0) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_IN_CheckForRobotOrNote;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathToShoot(uint32_T *entryPortIndex)
{
  real_T tmp;

  /* Inport: '<Root>/Priority_List' */
  tmp = Code_Gen_Model_U.Priority_List[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if (tmp < 6.0) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Shoot;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  } else if (tmp > 5.0) {
    Code_Gen_Model_B.SplineEnable = 0.0;
    *entryPortIndex = 2U;
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    if ((*entryPortIndex) == 2U) {
      *entryPortIndex = 0U;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
      Code_Gen_Model_B.SplineEnable = 1.0;
      Code_Gen_Model_DW.CloseNoteCounter++;
    }
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_RunIntake(uint32_T *entryPortIndex)
{
  /* Inport: '<Root>/Priority_List' */
  if ((Code_Gen_Model_U.Priority_List[((int32_T)
        Code_Gen_Model_B.CurrentPriorityIndex) - 1] < 6.0) &&
      (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    *entryPortIndex = 2U;
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    if ((*entryPortIndex) == 2U) {
      *entryPortIndex = 0U;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
      Code_Gen_Model_B.SplineEnable = 1.0;
      Code_Gen_Model_DW.CloseNoteCounter++;
    }
  }

  /* End of Inport: '<Root>/Priority_List' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_Shoot(uint32_T *entryPortIndex)
{
  real_T tmp;

  /* Inport: '<Root>/Priority_List' */
  tmp = Code_Gen_Model_U.Priority_List[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if (tmp < 6.0) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_PathToPickUp;
    Code_Gen_Model_B.SplineEnable = 1.0;
  } else if (tmp > 5.0) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    *entryPortIndex = 2U;
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    if ((*entryPortIndex) == 2U) {
      *entryPortIndex = 0U;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
      Code_Gen_Model_B.SplineEnable = 1.0;
      Code_Gen_Model_DW.CloseNoteCounter++;
    }
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }
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

/* Function for Chart: '<S8>/Chart_Intake_and_Shooter' */
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  real_T *Switch9)
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
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -(*Switch9);
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = *Switch9;
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
  real_T rtb_MatrixConcatenate_c[450];
  real_T rtb_Position_and_Curvature[450];
  real_T distance_from_robot[150];
  real_T rtb_Assignment_d[150];
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_dl;
  real_T rtb_Add_fn;
  real_T rtb_Add_ik;
  real_T rtb_Add_k5;
  real_T rtb_Add_oh;
  real_T rtb_Chain_DutyCycle;
  real_T rtb_Gain1;
  real_T rtb_Gyro_Angle_Field;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_er;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_Merge1;
  real_T rtb_Modulation_Drv;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Steer_Joystick_X_Rel_Mod;
  real_T rtb_Subtract1_a1;
  real_T rtb_Subtract1_f5;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_m;
  real_T rtb_Subtract1_n;
  real_T rtb_Subtract1_o;
  real_T rtb_Subtract1_p5;
  real_T rtb_Sum2_e;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch2;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_h;
  real_T rtb_Switch2_id;
  real_T rtb_Switch2_o;
  real_T rtb_Switch4_g;
  real_T rtb_Switch5_aj;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_uDLookupTable_l;
  real_T sin_alpha;
  real_T y;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T s211_iter;
  uint32_T entryPortIndex;
  uint16_T s236_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  uint8_T rtb_GameState;
  boolean_T FixPtRelationalOperator_o;
  boolean_T UnitDelay_e;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T rtb_AND2_k;
  boolean_T rtb_AT_Tag_11_Active;
  boolean_T rtb_AT_Tag_12_Active;
  boolean_T rtb_AT_Tag_13_Active;
  boolean_T rtb_AT_Tag_14_Active;
  boolean_T rtb_AT_Tag_15_Active;
  boolean_T rtb_AT_Tag_16_Active;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_OR7;

  /* Sum: '<S244>/Add1' incorporates:
   *  Constant: '<S244>/Constant3'
   *  Constant: '<S244>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S244>/Math Function'
   *  Sum: '<S16>/Add'
   *  Sum: '<S244>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S136>/Diff'
   *  UnitDelay: '<S136>/UD'
   *
   * Block description for '<S136>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S136>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Chain_DutyCycle = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S245>/Add1' incorporates:
   *  Constant: '<S245>/Constant3'
   *  Constant: '<S245>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S245>/Math Function'
   *  Sum: '<S16>/Add1'
   *  Sum: '<S245>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S137>/Diff'
   *  UnitDelay: '<S137>/UD'
   *
   * Block description for '<S137>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S137>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S246>/Add1' incorporates:
   *  Constant: '<S246>/Constant3'
   *  Constant: '<S246>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S246>/Math Function'
   *  Sum: '<S16>/Add2'
   *  Sum: '<S246>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product2' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S138>/Diff'
   *  UnitDelay: '<S138>/UD'
   *
   * Block description for '<S138>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S138>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S247>/Add1' incorporates:
   *  Constant: '<S247>/Constant3'
   *  Constant: '<S247>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S247>/Math Function'
   *  Sum: '<S16>/Add3'
   *  Sum: '<S247>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product3' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S139>/Diff'
   *  UnitDelay: '<S139>/UD'
   *
   * Block description for '<S139>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S12>/Product7' incorporates:
   *  Fcn: '<S140>/r->x'
   *  Fcn: '<S140>/theta->y'
   *  Fcn: '<S141>/r->x'
   *  Fcn: '<S141>/theta->y'
   *  Fcn: '<S142>/r->x'
   *  Fcn: '<S142>/theta->y'
   *  Fcn: '<S143>/r->x'
   *  Fcn: '<S143>/theta->y'
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
  rtb_TmpSignalConversionAtProduc[6] = rtb_Switch2_c * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Switch2_c * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S81>/Reshapey' incorporates:
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

  /* Delay: '<S81>/MemoryX' incorporates:
   *  Constant: '<S81>/X0'
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

  /* Gain: '<S32>/Gain1' */
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

  /* Trigonometry: '<S12>/Trigonometric Function1' */
  rtb_Switch2_c = sin(rtb_Gyro_Angle_Field);

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S12>/Trigonometric Function'
   */
  rtb_Init_e = cos(rtb_Gyro_Angle_Field);
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_c;

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S12>/Unary Minus'
   */
  rtb_Chain_DutyCycle = -rtb_Switch2_c;

  /* Sum: '<S135>/Diff' incorporates:
   *  UnitDelay: '<S135>/UD'
   *
   * Block description for '<S135>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S135>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch5_aj = rtb_Gyro_Angle_Field - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S12>/Subtract2' incorporates:
   *  Constant: '<S12>/Constant3'
   *  Gain: '<S12>/Gain7'
   *  Math: '<S12>/Square'
   */
  rtb_Switch2_c = 1.0 - ((rtb_Switch5_aj * rtb_Switch5_aj) * 0.16666666666666666);

  /* Gain: '<S12>/Gain6' */
  rtb_Switch5_aj *= 0.5;

  /* Product: '<S12>/Product7' incorporates:
   *  Constant: '<S12>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    d = 0.0;
    rtb_Num_Segments = 0;
    for (s211_iter = 0; s211_iter < 8; s211_iter++) {
      d += Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s211_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = d;
  }

  /* End of Product: '<S12>/Product7' */

  /* Product: '<S12>/Product6' incorporates:
   *  SignalConversion generated from: '<S12>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S12>/Unary Minus2'
   */
  rtb_Optimized_Module_Angle = (rtb_Switch2_c * tmp[0]) + ((-rtb_Switch5_aj) *
    tmp[1]);
  rtb_Switch2_c = (rtb_Switch5_aj * tmp[0]) + (rtb_Switch2_c * tmp[1]);

  /* Product: '<S12>/Product6' incorporates:
   *  Concatenate: '<S12>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Init_e * rtb_Optimized_Module_Angle) +
    (rtb_Chain_DutyCycle * rtb_Switch2_c);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Optimized_Module_Angle) + (rtb_Init_e * rtb_Switch2_c);

  /* Outputs for Enabled SubSystem: '<S108>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S134>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S101>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S132>/Enable'
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

    /* Product: '<S132>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S81>/C'
     *  Delay: '<S81>/MemoryX'
     *  Product: '<S134>/Product'
     */
    rtb_Switch5_aj = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch5_aj;

    /* Sum: '<S132>/Sum' incorporates:
     *  Constant: '<S81>/D'
     *  Product: '<S132>/C[k]*xhat[k|k-1]'
     *  Product: '<S132>/D[k]*u[k]'
     *  Sum: '<S132>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_0 = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Switch2_c = rtb_Reshapey[0] - (rtb_Rotationmatrixfromlocalto_0 +
      rtb_Switch5_aj);

    /* Product: '<S132>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S81>/C'
     *  Delay: '<S81>/MemoryX'
     *  Product: '<S134>/Product'
     */
    rtb_Switch5_aj = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch5_aj;

    /* Sum: '<S132>/Sum' incorporates:
     *  Constant: '<S81>/D'
     *  Product: '<S132>/C[k]*xhat[k|k-1]'
     *  Product: '<S132>/D[k]*u[k]'
     *  Sum: '<S132>/Add1'
     */
    rtb_Switch5_aj = rtb_Reshapey[1] - (rtb_Rotationmatrixfromlocalto_0 +
      rtb_Switch5_aj);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S132>/Product3' incorporates:
     *  Constant: '<S82>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Switch2_c) +
      (-2.0601714451538746E-17 * rtb_Switch5_aj);

    /* Sum: '<S134>/Add1' incorporates:
     *  Product: '<S134>/Product'
     */
    rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S132>/Product3' incorporates:
     *  Constant: '<S82>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Switch2_c) +
      (0.095124921972504 * rtb_Switch5_aj);

    /* Sum: '<S134>/Add1' incorporates:
     *  Product: '<S134>/Product'
     */
    rtb_Switch5_aj = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S134>/Product2' incorporates:
     *  Constant: '<S82>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Rotationmatrixfromlocalto_0) + (5.9896845167210271E-17 *
      rtb_Switch5_aj);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Rotationmatrixfromlocalto_0) + (0.095124921972503981 * rtb_Switch5_aj);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S132>/Product3' incorporates:
       *  Outport: '<S132>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S134>/Product2' incorporates:
       *  Outport: '<S134>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S10>/AND' */
  /* End of Outputs for SubSystem: '<S101>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S108>/Enabled Subsystem' */

  /* Sum: '<S108>/Add' incorporates:
   *  Delay: '<S81>/MemoryX'
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
   *  Constant: '<S41>/Constant'
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Logic: '<S7>/OR6'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
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

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
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

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S38>/Compare' incorporates:
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S55>/Constant'
   *  Constant: '<S56>/Constant'
   *  Constant: '<S59>/Constant'
   *  Constant: '<S60>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S63>/Constant'
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
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S63>/Compare'
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
  d = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(d)) || (rtIsInf(d))) {
    d = 0.0;
  } else {
    d = fmod(d, 256.0);
  }

  rtb_GameState = (uint8_T)((d < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)((uint8_T)
    (-d)))))) : ((int32_T)((uint8_T)d)));

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* Logic: '<S7>/OR7' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S39>/Constant'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  UnitDelay: '<S13>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S7>/Switch4' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Inport: '<Root>/Joystick_Left_B10'
   *  Inport: '<Root>/Joystick_Right_B10'
   *  Logic: '<S7>/OR'
   *  Logic: '<S7>/OR3'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S53>/Compare'
   *  RelationalOperator: '<S64>/FixPt Relational Operator'
   *  Switch: '<S7>/Switch5'
   *  Switch: '<S7>/Switch6'
   *  Switch: '<S7>/Switch7'
   *  Switch: '<S7>/Switch8'
   *  UnitDelay: '<S64>/Delay Input1'
   *
   * Block description for '<S64>/Delay Input1':
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

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_Chain_DutyCycle = Code_Gen_Model_DW.UnitDelay_DSTATE_o;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  d = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(d)) || (rtIsInf(d))) {
    d = 0.0;
  } else {
    d = fmod(d, 4.294967296E+9);
  }

  switch ((d < 0.0) ? (-((int32_T)((uint32_T)(-d)))) : ((int32_T)((uint32_T)d)))
  {
   case 0:
    rtAction = 0;
    break;

   case 1:
    rtAction = 1;
    break;

   case 2:
    rtAction = 2;
    break;

   default:
    rtAction = 3;
    break;
  }

  Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = rtAction;
  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* SignalConversion generated from: '<S4>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

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

    /* SignalConversion generated from: '<S4>/Chain_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant17'
     */
    rtb_Chain_DutyCycle = 0.0;

    /* Merge: '<S11>/Merge12' incorporates:
     *  SignalConversion generated from: '<S4>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* SystemReset for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S27>/Chart'
       */
      Code_Gen_Model_DW.is_active_c7_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note7 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note8 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
      Code_Gen_Model_B.SplineEnable = 0.0;
      Code_Gen_Model_B.CurrentPriorityIndex = 1.0;
      Code_Gen_Model_DW.Timer = 0.0;
      Code_Gen_Model_DW.CloseNoteCounter = 0.0;
      Code_Gen_Model_B.ArmStateRequest = 0.0;

      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* SignalConversion generated from: '<S3>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rtb_UnitDelay1_gi = 0.0;

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

    /* Chart: '<S27>/Chart' incorporates:
     *  UnitDelay: '<S9>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c7_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c7_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_PathPicker;
      Code_Gen_Model_DW.CloseNoteCounter = 0.0;
    } else {
      switch (Code_Gen_Model_DW.is_c7_Code_Gen_Model) {
       case Code_Gen_IN_CheckForRobotOrNote:
        Code_Gen_Mo_CheckForRobotOrNote(&entryPortIndex);
        break;

       case Code_Gen_Model_IN_End:
        break;

       case Code_Gen_Model_IN_MoveArms:
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        if (Code_Gen_Model_DW.Timer > 0.4) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Note6:
        if (Code_Gen_Model_DW.is_Note6 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (rtb_Chain_DutyCycle != 0.0) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note6 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex == 2U) {
          Code_Gen_Model_DW.exitPortIndex = 0U;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6_trans;
        }
        break;

       case Code_Gen_Model_IN_Note6_trans:
        if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note8_trans;
        } else if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
        } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6;
          Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
          Code_Gen_Model_B.SplineEnable = 1.0;
          Code_Gen_Model_DW.CloseNoteCounter++;
        } else if (!(rtb_Chain_DutyCycle != 0.0)) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_End;
        }
        break;

       case Code_Gen_Model_IN_Note7:
        if (Code_Gen_Model_DW.is_Note7 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (rtb_Chain_DutyCycle != 0.0) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex_n = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex_n == 2U) {
          Code_Gen_Model_DW.exitPortIndex_n = 0U;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
        }
        break;

       case Code_Gen_Model_IN_Note7_trans:
        if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note8_trans;
        } else if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6_trans;
        } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note7;
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Model_IN_PathToShoot1;
          Code_Gen_Model_B.SplineEnable = 1.0;
          Code_Gen_Model_DW.CloseNoteCounter++;
        } else if (!(rtb_Chain_DutyCycle != 0.0)) {
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_End;
        }
        break;

       case Code_Gen_Model_IN_Note8:
        if (Code_Gen_Model_DW.is_Note8 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note8 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (rtb_Chain_DutyCycle != 0.0) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note8 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex_h = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex_h == 2U) {
          Code_Gen_Model_DW.exitPortIndex_h = 0U;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note8_trans;
        }
        break;

       case Code_Gen_Model_IN_Note8_trans:
        Code_Gen_Model_Note8_trans(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
          &rtb_Chain_DutyCycle);
        break;

       case Code_Gen_Model_IN_PathPicker:
        Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_MoveArms;
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        break;

       case Code_Gen_Model_IN_PathToPickUp:
        Code_Gen_Model_PathToPickUp();
        break;

       case Code_Gen_IN_PathToPickUpWODetec:
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_RunIntake1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.CurrentPriorityIndex++;
        }
        break;

       case Code_Gen_Model_IN_PathToShoot:
        Code_Gen_Model_PathToShoot(&entryPortIndex);
        break;

       case Code_Gen__IN_PathToShootWODetec:
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_RunIntake:
        Code_Gen_Model_RunIntake(&entryPortIndex);
        break;

       case Code_Gen_Model_IN_RunIntake1:
        if ((rtb_Chain_DutyCycle != 0.0) || (Code_Gen_Model_DW.Timer >= 16.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model =
            Code_Gen__IN_PathToShootWODetec;
          Code_Gen_Model_B.SplineEnable = 1.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Shoot:
        Code_Gen_Model_Shoot(&entryPortIndex);
        break;

       default:
        /* case IN_ShootWODetec: */
        rtb_Is_Absolute_Translation_g = ((rtb_Chain_DutyCycle != 0.0) ||
          (Code_Gen_Model_DW.Timer > 16.0));
        if (rtb_Is_Absolute_Translation_g &&
            (Code_Gen_Model_B.CurrentPriorityIndex > 1.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_End;
        } else if (rtb_Is_Absolute_Translation_g) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c7_Code_Gen_Model =
            Code_Gen_IN_PathToPickUpWODetec;
          Code_Gen_Model_B.SplineEnable = 1.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;
      }
    }

    /* End of Chart: '<S27>/Chart' */

    /* Merge: '<S11>/Merge7' incorporates:
     *  Constant: '<S24>/Constant'
     *  RelationalOperator: '<S24>/Compare'
     */
    Code_Gen_Model_B.Spline_Enable = (Code_Gen_Model_B.SplineEnable != 0.0);

    /* RelationalOperator: '<S31>/Compare' incorporates:
     *  Constant: '<S31>/Constant'
     */
    rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Intake_Shooter_State_Request ==
      1.0);

    /* RelationalOperator: '<S25>/Compare' incorporates:
     *  Switch: '<S27>/Switch2'
     */
    rtb_Is_Absolute_Translation_g = !rtb_Is_Absolute_Steering;

    /* Switch: '<S27>/Switch3' */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Constant: '<S27>/Constant7'
       */
      Code_Gen_Model_B.Translation_Speed = 0.5;
    } else {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Constant: '<S27>/Constant6'
       */
      Code_Gen_Model_B.Translation_Speed = 0.0;
    }

    /* End of Switch: '<S27>/Switch3' */

    /* Merge: '<S11>/Merge12' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.ArmStateRequest;

    /* Merge: '<S11>/Merge11' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.Intake_Shooter_State_Request;

    /* Merge: '<S11>/Merge9' incorporates:
     *  Constant: '<S3>/Constant5'
     *  SignalConversion generated from: '<S3>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S11>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S3>/Chain_DutyCycle' incorporates:
     *  Constant: '<S3>/Constant17'
     */
    rtb_Chain_DutyCycle = 0.0;

    /* RelationalOperator: '<S26>/Compare' incorporates:
     *  Constant: '<S26>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     */
    Code_Gen_Model_B.Line_Sensor_Boolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range >= FloorDistance);

    /* Logic: '<S3>/NOT1' incorporates:
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* Lookup_n-D: '<S390>/1-D Lookup Table' incorporates:
     *  Switch: '<S5>/Switch'
     */
    rtb_Chain_DutyCycle = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 8U);

    /* Logic: '<S390>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S390>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S390>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S390>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S390>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S390>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S390>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S390>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S390>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S390>/Logical Operator'
     *  Logic: '<S390>/Logical Operator1'
     *  Switch: '<S390>/Switch10'
     *  Switch: '<S390>/Switch11'
     *  Switch: '<S390>/Switch3'
     *  Switch: '<S390>/Switch4'
     *  Switch: '<S390>/Switch5'
     *  Switch: '<S390>/Switch6'
     *  Switch: '<S390>/Switch7'
     *  Switch: '<S390>/Switch8'
     *  Switch: '<S390>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S390>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S390>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Chain_DutyCycle +
        Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S390>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S390>/Add8'
       *  Switch: '<S390>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Chain_DutyCycle +
        Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S390>/Switch4' incorporates:
       *  Constant: '<S390>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S390>/Add7'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S390>/Switch5' incorporates:
       *  Constant: '<S390>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S390>/Add6'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S390>/Switch6' incorporates:
       *  Constant: '<S390>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S390>/Add5'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S390>/Switch7' incorporates:
       *  Constant: '<S390>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S390>/Add4'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S390>/Switch8' incorporates:
       *  Constant: '<S390>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S390>/Add3'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       *  Switch: '<S390>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S390>/Switch9' incorporates:
       *  Constant: '<S390>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S390>/Add2'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       *  Switch: '<S390>/Switch7'
       *  Switch: '<S390>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S390>/Switch10' incorporates:
       *  Constant: '<S390>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S390>/Add1'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       *  Switch: '<S390>/Switch7'
       *  Switch: '<S390>/Switch8'
       *  Switch: '<S390>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S390>/Switch11' incorporates:
       *  Constant: '<S390>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S390>/Add'
       *  Switch: '<S390>/Switch10'
       *  Switch: '<S390>/Switch2'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       *  Switch: '<S390>/Switch7'
       *  Switch: '<S390>/Switch8'
       *  Switch: '<S390>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S390>/Switch2' incorporates:
       *  Constant: '<S390>/Constant'
       *  Switch: '<S390>/Switch10'
       *  Switch: '<S390>/Switch11'
       *  Switch: '<S390>/Switch3'
       *  Switch: '<S390>/Switch4'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       *  Switch: '<S390>/Switch7'
       *  Switch: '<S390>/Switch8'
       *  Switch: '<S390>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S390>/Switch2' */

    /* Switch: '<S394>/Switch' incorporates:
     *  Constant: '<S394>/Constant'
     *  Constant: '<S394>/Constant1'
     *  Constant: '<S394>/Constant2'
     *  Math: '<S394>/Hypot'
     *  RelationalOperator: '<S394>/GreaterThan'
     *  Switch: '<S394>/Switch1'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_X;
      rtb_Chain_DutyCycle = Code_Gen_Model_B.Steer_Joystick_Y;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_Chain_DutyCycle = 0.0;
    }

    /* End of Switch: '<S394>/Switch' */

    /* Logic: '<S392>/AND' incorporates:
     *  Constant: '<S395>/Constant'
     *  Constant: '<S396>/Constant'
     *  Logic: '<S402>/AND'
     *  RelationalOperator: '<S395>/Compare'
     *  RelationalOperator: '<S396>/Compare'
     */
    UnitDelay_e = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Chain_DutyCycle == 0.0));

    /* Logic: '<S392>/AND2' incorporates:
     *  RelationalOperator: '<S397>/FixPt Relational Operator'
     *  RelationalOperator: '<S398>/FixPt Relational Operator'
     *  RelationalOperator: '<S399>/FixPt Relational Operator'
     *  RelationalOperator: '<S400>/FixPt Relational Operator'
     *  UnitDelay: '<S397>/Delay Input1'
     *  UnitDelay: '<S398>/Delay Input1'
     *  UnitDelay: '<S399>/Delay Input1'
     *  UnitDelay: '<S400>/Delay Input1'
     *
     * Block description for '<S397>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S398>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S399>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S400>/Delay Input1':
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

    /* Switch: '<S392>/Switch1' incorporates:
     *  Constant: '<S392>/Constant1'
     *  Constant: '<S392>/Constant17'
     *  Constant: '<S392>/Constant2'
     *  Logic: '<S392>/AND'
     *  Logic: '<S392>/AND4'
     *  Logic: '<S392>/NOT1'
     *  Product: '<S392>/Product1'
     *  Product: '<S392>/Product2'
     *  Sum: '<S392>/Add'
     *  Sum: '<S392>/Sum'
     *  UnitDelay: '<S392>/Unit Delay'
     */
    if (UnitDelay_e && (!rtb_AND2_k)) {
      rtb_Rotationmatrixfromlocalto_0 = ((Code_Gen_Model_B.Steer_Joystick_Z *
        Steering_Twist_Gain) + (Code_Gen_Model_B.AT_Error_Yaw *
        AT_Yaw_Control_Gain)) + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = 0.0;
    }

    /* End of Switch: '<S392>/Switch1' */

    /* Switch: '<S402>/Switch1' incorporates:
     *  Switch: '<S402>/Switch2'
     *  UnitDelay: '<S402>/Unit Delay'
     *  UnitDelay: '<S402>/Unit Delay1'
     */
    if (UnitDelay_e) {
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Init_e = rtb_Chain_DutyCycle;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S402>/Switch1' */

    /* Logic: '<S392>/AND1' incorporates:
     *  Logic: '<S392>/AND'
     *  Logic: '<S392>/AND3'
     *  UnitDelay: '<S392>/Unit Delay2'
     */
    UnitDelay_e = (UnitDelay_e && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S392>/Switch4' incorporates:
     *  Constant: '<S392>/Constant5'
     *  Switch: '<S392>/Switch5'
     *  Switch: '<S392>/Switch6'
     *  Switch: '<S392>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S392>/Switch5' incorporates:
       *  Constant: '<S392>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S392>/Switch6' incorporates:
       *  Constant: '<S392>/Constant7'
       *  Switch: '<S392>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S392>/Switch7' incorporates:
       *  Constant: '<S392>/Constant8'
       *  Switch: '<S392>/Switch5'
       *  Switch: '<S392>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S392>/Switch6' incorporates:
       *  Switch: '<S392>/Switch5'
       *  UnitDelay: '<S392>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S392>/Switch4' */

    /* Switch: '<S392>/Switch3' incorporates:
     *  Logic: '<S392>/NOT'
     *  Trigonometry: '<S392>/Atan2'
     */
    if (!UnitDelay_e) {
      d = rt_atan2d_snf(rtb_Init_e, rtb_Switch2);
    } else {
      d = rtb_Switch4_g;
    }

    /* Merge: '<S11>/Merge1' incorporates:
     *  Sum: '<S392>/Sum1'
     *  Switch: '<S392>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = d + rtb_Rotationmatrixfromlocalto_0;

    /* RelationalOperator: '<S405>/Compare' incorporates:
     *  Constant: '<S405>/Constant'
     */
    rtb_AND2_k = (rtb_Switch2 < 0.0);

    /* Switch: '<S401>/Switch' incorporates:
     *  Constant: '<S401>/Constant'
     *  Constant: '<S401>/Constant1'
     *  Constant: '<S403>/Constant'
     *  Constant: '<S404>/Constant'
     *  Logic: '<S401>/Logical Operator'
     *  RelationalOperator: '<S403>/Compare'
     *  RelationalOperator: '<S404>/Compare'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    if (((rtb_Init_e < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0)) &&
        rtb_AND2_k) {
      d = 6.2831853071795862;
    } else {
      d = 0.0;
    }

    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S401>/Constant2'
     *  Constant: '<S401>/Constant3'
     *  Constant: '<S406>/Constant'
     *  Constant: '<S407>/Constant'
     *  Logic: '<S401>/Logical Operator1'
     *  RelationalOperator: '<S406>/Compare'
     *  RelationalOperator: '<S407>/Compare'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Init_e >= 0.0)) &&
        rtb_AND2_k) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S401>/Sum1' incorporates:
     *  Switch: '<S401>/Switch'
     *  Switch: '<S401>/Switch1'
     *  UnitDelay: '<S401>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (d + rtb_Add_ik) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S390>/Switch23' incorporates:
     *  Logic: '<S390>/AND10'
     *  Logic: '<S390>/AND11'
     *  Logic: '<S390>/AND12'
     *  Logic: '<S390>/AND13'
     *  Logic: '<S390>/AND14'
     *  Logic: '<S390>/AND15'
     *  Logic: '<S390>/AND2'
     *  Logic: '<S390>/AND3'
     *  Switch: '<S390>/Switch1'
     *  Switch: '<S390>/Switch12'
     *  Switch: '<S390>/Switch13'
     *  Switch: '<S390>/Switch14'
     *  Switch: '<S390>/Switch15'
     *  Switch: '<S390>/Switch16'
     *  Switch: '<S390>/Switch17'
     *  Switch: '<S390>/Switch19'
     *  Switch: '<S390>/Switch20'
     *  Switch: '<S390>/Switch21'
     *  Switch: '<S390>/Switch22'
     *  Switch: '<S390>/Switch24'
     *  Switch: '<S390>/Switch25'
     *  Switch: '<S390>/Switch26'
     */
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S390>/Switch23' incorporates:
       *  Constant: '<S390>/Constant28'
       *  Sum: '<S390>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch15' incorporates:
       *  Constant: '<S390>/Constant9'
       *  Sum: '<S390>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S390>/Switch23' incorporates:
       *  Constant: '<S390>/Constant27'
       *  Sum: '<S390>/Add22'
       *  Switch: '<S390>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch15' incorporates:
       *  Constant: '<S390>/Constant5'
       *  Sum: '<S390>/Add16'
       *  Switch: '<S390>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S390>/Switch23' incorporates:
       *  Constant: '<S390>/Constant26'
       *  Sum: '<S390>/Add12'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch15' incorporates:
       *  Constant: '<S390>/Constant4'
       *  Sum: '<S390>/Add10'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S390>/Switch23' incorporates:
       *  Constant: '<S390>/Constant3'
       *  Sum: '<S390>/Add13'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch20'
       *  Switch: '<S390>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch15' incorporates:
       *  Constant: '<S390>/Constant17'
       *  Sum: '<S390>/Add11'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch12'
       *  Switch: '<S390>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S390>/Switch23' incorporates:
       *  Constant: '<S390>/Constant21'
       *  Sum: '<S390>/Add20'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch20'
       *  Switch: '<S390>/Switch21'
       *  Switch: '<S390>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch15' incorporates:
       *  Constant: '<S390>/Constant18'
       *  Sum: '<S390>/Add14'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch12'
       *  Switch: '<S390>/Switch13'
       *  Switch: '<S390>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S390>/Switch22' incorporates:
       *  Constant: '<S390>/Constant23'
       *  Sum: '<S390>/Add21'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch20'
       *  Switch: '<S390>/Switch21'
       *  Switch: '<S390>/Switch23'
       *  Switch: '<S390>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch14' incorporates:
       *  Constant: '<S390>/Constant19'
       *  Sum: '<S390>/Add15'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch12'
       *  Switch: '<S390>/Switch13'
       *  Switch: '<S390>/Switch15'
       *  Switch: '<S390>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S390>/Switch25' incorporates:
       *  Constant: '<S390>/Constant24'
       *  Sum: '<S390>/Add24'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch20'
       *  Switch: '<S390>/Switch21'
       *  Switch: '<S390>/Switch22'
       *  Switch: '<S390>/Switch23'
       *  Switch: '<S390>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch17' incorporates:
       *  Constant: '<S390>/Constant20'
       *  Sum: '<S390>/Add18'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch12'
       *  Switch: '<S390>/Switch13'
       *  Switch: '<S390>/Switch14'
       *  Switch: '<S390>/Switch15'
       *  Switch: '<S390>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S390>/Switch26' incorporates:
       *  Constant: '<S390>/Constant25'
       *  Sum: '<S390>/Add25'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch20'
       *  Switch: '<S390>/Switch21'
       *  Switch: '<S390>/Switch22'
       *  Switch: '<S390>/Switch23'
       *  Switch: '<S390>/Switch24'
       *  Switch: '<S390>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S390>/Switch18' incorporates:
       *  Constant: '<S390>/Constant22'
       *  Sum: '<S390>/Add19'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch12'
       *  Switch: '<S390>/Switch13'
       *  Switch: '<S390>/Switch14'
       *  Switch: '<S390>/Switch15'
       *  Switch: '<S390>/Switch16'
       *  Switch: '<S390>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;
    } else {
      /* Switch: '<S390>/Switch23' incorporates:
       *  Constant: '<S390>/Constant2'
       *  Switch: '<S390>/Switch19'
       *  Switch: '<S390>/Switch20'
       *  Switch: '<S390>/Switch21'
       *  Switch: '<S390>/Switch22'
       *  Switch: '<S390>/Switch24'
       *  Switch: '<S390>/Switch25'
       *  Switch: '<S390>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;

      /* Switch: '<S390>/Switch15' incorporates:
       *  Constant: '<S390>/Constant1'
       *  Switch: '<S390>/Switch1'
       *  Switch: '<S390>/Switch12'
       *  Switch: '<S390>/Switch13'
       *  Switch: '<S390>/Switch14'
       *  Switch: '<S390>/Switch16'
       *  Switch: '<S390>/Switch17'
       *  Switch: '<S390>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;
    }

    /* End of Switch: '<S390>/Switch23' */

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S418>/Constant'
     *  Constant: '<S419>/Constant'
     *  Logic: '<S413>/AND'
     *  RelationalOperator: '<S418>/Compare'
     *  RelationalOperator: '<S419>/Compare'
     *  Switch: '<S413>/Switch2'
     *  UnitDelay: '<S413>/Unit Delay'
     *  UnitDelay: '<S413>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S413>/Switch1' */

    /* Lookup_n-D: '<S393>/Modulation_Drv' incorporates:
     *  Math: '<S393>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S411>/Compare' incorporates:
     *  Constant: '<S411>/Constant'
     */
    rtb_AT_Tag_11_Active = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S393>/Logical Operator' incorporates:
     *  Constant: '<S412>/Constant'
     *  RelationalOperator: '<S412>/Compare'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_AT_Tag_11_Active);

    /* Switch: '<S393>/Switch1' incorporates:
     *  Switch: '<S393>/Switch4'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S393>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S11>/Merge3' incorporates:
         *  Constant: '<S393>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S11>/Merge3' incorporates:
         *  Constant: '<S393>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S393>/Switch5' */
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S393>/Switch6' incorporates:
       *  Constant: '<S393>/Constant'
       *  Constant: '<S393>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S393>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        d = 3.1415926535897931;
      } else {
        d = 0.0;
      }

      /* Merge: '<S11>/Merge3' incorporates:
       *  Sum: '<S393>/Add1'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch6'
       *  Trigonometry: '<S393>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + d;
    } else {
      /* Merge: '<S11>/Merge3' incorporates:
       *  Switch: '<S393>/Switch4'
       *  Trigonometry: '<S393>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2_o);
    }

    /* End of Switch: '<S393>/Switch1' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S393>/Switch3'
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

    /* Switch: '<S410>/Switch1' incorporates:
     *  Constant: '<S410>/Constant'
     *  Constant: '<S410>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_High_Speed;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S410>/Switch1' */

    /* Switch: '<S417>/Init' incorporates:
     *  UnitDelay: '<S417>/FixPt Unit Delay1'
     *  UnitDelay: '<S417>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Chain_DutyCycle = rtb_Steer_Joystick_X_Rel_Mod;
    } else {
      rtb_Chain_DutyCycle = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S417>/Init' */

    /* Sum: '<S415>/Sum1' */
    rtb_Steer_Joystick_X_Rel_Mod -= rtb_Chain_DutyCycle;

    /* Switch: '<S416>/Switch2' incorporates:
     *  Constant: '<S414>/Constant1'
     *  Constant: '<S414>/Constant3'
     *  RelationalOperator: '<S416>/LowerRelop1'
     *  RelationalOperator: '<S416>/UpperRelop'
     *  Switch: '<S416>/Switch'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod > Boost_Trigger_Increasing_Limit) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Steer_Joystick_X_Rel_Mod < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S416>/Switch' incorporates:
       *  Constant: '<S414>/Constant1'
       */
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S416>/Switch2' */

    /* Sum: '<S415>/Sum' */
    rtb_Steer_Joystick_X_Rel_Mod += rtb_Chain_DutyCycle;

    /* Switch: '<S393>/Switch' incorporates:
     *  Switch: '<S393>/Switch2'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S393>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_AT_Tag_11_Active) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S393>/Gain2'
       *  Math: '<S393>/Magnitude1'
       *  Switch: '<S393>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S410>/Product' incorporates:
       *  Switch: '<S393>/Switch2'
       */
      rtb_Add_k5 = rtb_Modulation_Drv * rtb_Steer_Joystick_X_Rel_Mod;

      /* Saturate: '<S410>/Saturation' incorporates:
       *  Switch: '<S393>/Switch2'
       */
      if (rtb_Add_k5 > Boost_Trigger_High_Speed) {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Add_k5 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S11>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Add_k5;
      }

      /* End of Saturate: '<S410>/Saturation' */
    }

    /* End of Switch: '<S393>/Switch' */

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
     *  Constant: '<S392>/Constant'
     *  Lookup_n-D: '<S392>/Modulation_Str_Y_Rel'
     *  Product: '<S392>/Product'
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

    /* SignalConversion: '<S18>/Signal Copy' */
    rtb_Chain_DutyCycle = Code_Gen_Model_B.Chain_Hook;

    /* Update for UnitDelay: '<S392>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S397>/Delay Input1'
     *
     * Block description for '<S397>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S398>/Delay Input1'
     *
     * Block description for '<S398>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S399>/Delay Input1'
     *
     * Block description for '<S399>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S400>/Delay Input1'
     *
     * Block description for '<S400>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S402>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Init_e;

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S392>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = UnitDelay_e;

    /* Update for UnitDelay: '<S392>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S401>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Init_e;

    /* Update for UnitDelay: '<S401>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S413>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S417>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S417>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S417>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Steer_Joystick_X_Rel_Mod;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* SignalConversion generated from: '<S19>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S19>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

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

    /* SignalConversion: '<S19>/Signal Copy' */
    rtb_Chain_DutyCycle = Code_Gen_Model_B.Chain_Hook;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S15>/If' incorporates:
   *  Constant: '<S236>/Constant'
   *  Logic: '<S236>/AND'
   *  MATLAB Function: '<S186>/Find closest index to curve'
   *  Product: '<S236>/Product'
   *  RelationalOperator: '<S236>/Relational Operator'
   *  RelationalOperator: '<S236>/Relational Operator1'
   *  Selector: '<S236>/Selector'
   *  Selector: '<S236>/Selector1'
   *  Selector: '<S237>/Selector'
   *  Sum: '<S236>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S189>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S192>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S194>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S189>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S15>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S184>/Action Port'
       */
      /* InitializeConditions for If: '<S15>/If' incorporates:
       *  UnitDelay: '<S184>/Unit Delay'
       *  UnitDelay: '<S185>/Unit Delay'
       *  UnitDelay: '<S187>/Unit Delay'
       *  UnitDelay: '<S187>/Unit Delay1'
       *  UnitDelay: '<S237>/Unit Delay'
       *  UnitDelay: '<S237>/Unit Delay1'
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
     *  ActionPort: '<S184>/Action Port'
     */
    /* Lookup_n-D: '<S184>/Capture Radius' incorporates:
     *  UnitDelay: '<S184>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_0 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S185>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S185>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S189>/If' incorporates:
     *  RelationalOperator: '<S189>/ '
     *  UnitDelay: '<S185>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <= 6.0));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S192>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S194>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S189>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S192>/Action Port'
       */
      /* InitializeConditions for If: '<S189>/If' incorporates:
       *  UnitDelay: '<S192>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S189>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S189>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S192>/Action Port'
       */
      /* Sum: '<S192>/Minus' incorporates:
       *  Concatenate: '<S185>/Matrix Concatenate2'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0];
      rtb_Minus_n[1] = rtb_Reshapey[1];

      /* Math: '<S192>/Hypot' */
      rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S192>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
        6.0);

      /* Switch: '<S192>/Switch' incorporates:
       *  Logic: '<S192>/AND'
       *  Logic: '<S192>/OR'
       *  RelationalOperator: '<S192>/Relational Operator'
       *  UnitDelay: '<S192>/Unit Delay'
       */
      UnitDelay_e = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Init_e <=
        rtb_Rotationmatrixfromlocalto_0) && rtb_Is_Absolute_Translation_g));

      /* If: '<S192>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!UnitDelay_e) {
        if (!rtb_Is_Absolute_Translation_g) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S194>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S192>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S194>/Action Port'
         */
        /* If: '<S194>/If' incorporates:
         *  RelationalOperator: '<S194>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh == 6.0));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S194>/Is_Last_Point' incorporates:
           *  ActionPort: '<S197>/Action Port'
           */
          /* InitializeConditions for If: '<S194>/If' incorporates:
           *  UnitDelay: '<S197>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S194>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S194>/Is_Last_Point' incorporates:
           *  ActionPort: '<S197>/Action Port'
           */
          /* Switch: '<S197>/Switch' incorporates:
           *  Constant: '<S199>/Constant'
           *  Logic: '<S197>/OR'
           *  RelationalOperator: '<S199>/Compare'
           *  UnitDelay: '<S197>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Init_e <= Spline_Stop_Radius));

          /* If: '<S197>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S197>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S200>/Action Port'
             */
            /* Merge: '<S189>/Merge2' incorporates:
             *  Constant: '<S200>/Constant'
             *  SignalConversion generated from: '<S200>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S200>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S200>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S197>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S197>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S201>/Action Port'
             */
            /* Merge: '<S189>/Merge2' incorporates:
             *  Constant: '<S201>/Constant'
             *  SignalConversion generated from: '<S201>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S201>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S201>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S197>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S197>/If' */

          /* Merge: '<S189>/Merge4' incorporates:
           *  SignalConversion: '<S197>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S197>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S194>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S194>/Increment_Search' incorporates:
           *  ActionPort: '<S196>/Action Port'
           */
          /* Merge: '<S189>/Merge2' incorporates:
           *  Constant: '<S196>/Constant'
           *  SignalConversion generated from: '<S196>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S196>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S196>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S189>/Merge4' incorporates:
           *  Constant: '<S198>/FixPt Constant'
           *  SignalConversion: '<S196>/Signal Copy'
           *  Sum: '<S198>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S194>/Increment_Search' */
        }

        /* End of If: '<S194>/If' */
        /* End of Outputs for SubSystem: '<S192>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S192>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S195>/Action Port'
         */
        /* RelationalOperator: '<S204>/Compare' */
        rtb_Is_Absolute_Translation_g = false;

        /* RelationalOperator: '<S203>/LessThanOrEqual' */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S189>/Merge4' incorporates:
         *  Sum: '<S195>/Add'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S192>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S192>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* Merge: '<S189>/Merge2' incorporates:
         *  Constant: '<S193>/Constant2'
         *  SignalConversion generated from: '<S193>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S193>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S193>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S189>/Merge4' incorporates:
         *  SignalConversion generated from: '<S193>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S192>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* End of If: '<S192>/If' */

      /* Merge: '<S189>/Merge1' incorporates:
       *  Constant: '<S192>/Constant'
       *  SignalConversion generated from: '<S192>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S192>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay_e;

      /* End of Outputs for SubSystem: '<S189>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S189>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S191>/Action Port'
       */
      /* Merge: '<S189>/Merge1' incorporates:
       *  Constant: '<S191>/Constant'
       *  SignalConversion generated from: '<S191>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S189>/Merge2' incorporates:
       *  Constant: '<S191>/Constant1'
       *  SignalConversion generated from: '<S191>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S191>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S191>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S189>/Merge4' incorporates:
       *  SignalConversion generated from: '<S191>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S189>/Escape_Auto_Driving' */
    }

    /* End of If: '<S189>/If' */

    /* If: '<S185>/If1' incorporates:
     *  Assignment: '<S215>/Assignment'
     *  Bias: '<S220>/Bias'
     *  Concatenate: '<S215>/Matrix Concatenate'
     */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S185>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S190>/Action Port'
       */
      /* Bias: '<S206>/Add Constant' incorporates:
       *  Bias: '<S206>/Bias'
       *  Sum: '<S206>/Subtract'
       */
      rtb_Init_e = ((6.0 - Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S206>/Selector4' incorporates:
       *  Constant: '<S208>/FixPt Constant'
       *  Sum: '<S208>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;

      /* Selector: '<S206>/Selector4' */
      Code_Gen_Model_DW.Selector4_DIMS1[0] = 9 - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Outputs for Iterator SubSystem: '<S207>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S211>/While Iterator'
       */
      s211_iter = 1;

      /* Outputs for Iterator SubSystem: '<S213>/Sample_Curve' incorporates:
       *  ForIterator: '<S215>/For Iterator'
       */
      for (i = 0; i < 50; i++) {
        if ((i + 1) == 1) {
          memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
        }

        rtb_Assignment_d[i] = 0.0;
        rtb_Assignment_d[i + 50] = 0.0;
        rtb_Assignment_d[i + 100] = (rtNaN);
      }

      do {
        if (s211_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s211_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_UnitDelay1_gi = rtb_Init_e - ((real_T)s211_iter);
        rtb_Num_Segments = s211_iter;
        s211_iter++;
      } while ((rtb_UnitDelay1_gi >= 4.0) && (s211_iter <= 3));

      /* End of Outputs for SubSystem: '<S213>/Sample_Curve' */
      /* End of Outputs for SubSystem: '<S207>/Sampling_Loop' */

      /* SignalConversion generated from: '<S190>/Position_and_Curvature' incorporates:
       *  Assignment: '<S211>/Assignment'
       *  Assignment: '<S215>/Assignment'
       *  Bias: '<S220>/Bias'
       *  Concatenate: '<S215>/Matrix Concatenate'
       *  Merge: '<S185>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S185>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S185>/If Action Subsystem' incorporates:
       *  ActionPort: '<S188>/Action Port'
       */
      /* Assignment: '<S188>/Assignment' incorporates:
       *  Merge: '<S185>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = 0.0;
        rtb_Position_and_Curvature[i + 50] = 0.0;
      }

      /* End of Assignment: '<S188>/Assignment' */

      /* SignalConversion generated from: '<S188>/Num_Segments' incorporates:
       *  Constant: '<S188>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S185>/If Action Subsystem' */
    }

    /* End of If: '<S185>/If1' */

    /* Concatenate: '<S186>/Matrix Concatenate' incorporates:
     *  Merge: '<S185>/Merge'
     *  Selector: '<S186>/Selector'
     *  Selector: '<S186>/Selector1'
     *  Selector: '<S186>/Selector3'
     */
    for (i = 0; i < 50; i++) {
      rtb_MatrixConcatenate_c[i] = rtb_Position_and_Curvature[i];
      rtb_MatrixConcatenate_c[i + 50] = rtb_Position_and_Curvature[i + 150];
      rtb_MatrixConcatenate_c[i + 100] = rtb_Position_and_Curvature[i + 300];
      rtb_MatrixConcatenate_c[i + 150] = rtb_Position_and_Curvature[i + 50];
      rtb_MatrixConcatenate_c[i + 200] = rtb_Position_and_Curvature[i + 200];
      rtb_MatrixConcatenate_c[i + 250] = rtb_Position_and_Curvature[i + 350];
      rtb_MatrixConcatenate_c[i + 300] = rtb_Position_and_Curvature[i + 100];
      rtb_MatrixConcatenate_c[i + 350] = rtb_Position_and_Curvature[i + 250];
      rtb_MatrixConcatenate_c[i + 400] = rtb_Position_and_Curvature[i + 400];
    }

    /* End of Concatenate: '<S186>/Matrix Concatenate' */

    /* MATLAB Function: '<S186>/Distance Along Curve' incorporates:
     *  Concatenate: '<S186>/Matrix Concatenate'
     *  Selector: '<S186>/Selector4'
     *  Selector: '<S186>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s211_iter = 0; s211_iter < 149; s211_iter++) {
      /* Outputs for Iterator SubSystem: '<S207>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S211>/While Iterator'
       */
      rtb_Assignment_d[s211_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_c[s211_iter + 1] -
         rtb_MatrixConcatenate_c[s211_iter], rtb_MatrixConcatenate_c[s211_iter +
         151] - rtb_MatrixConcatenate_c[s211_iter + 150]) +
        rtb_Assignment_d[s211_iter];

      /* End of Outputs for SubSystem: '<S207>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S186>/Distance Along Curve' */

    /* MATLAB Function: '<S186>/Find closest index to curve' incorporates:
     *  Concatenate: '<S186>/Matrix Concatenate'
     *  Selector: '<S186>/Selector4'
     *  Selector: '<S186>/Selector5'
     *  Selector: '<S237>/Selector'
     */
    for (s211_iter = 0; s211_iter < 150; s211_iter++) {
      /* Outputs for Iterator SubSystem: '<S207>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S211>/While Iterator'
       */
      distance_from_robot[s211_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_c[s211_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_c[s211_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S207>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s211_iter = 1;
    } else {
      s211_iter = 0;
      i = 2;
      exitg1 = false;
      while ((!exitg1) && (i < 151)) {
        if (!rtIsNaN(distance_from_robot[i - 1])) {
          s211_iter = i;
          exitg1 = true;
        } else {
          i++;
        }
      }
    }

    if (s211_iter == 0) {
      rtb_Init_e = distance_from_robot[0];
    } else {
      rtb_Init_e = distance_from_robot[s211_iter - 1];
      for (i = s211_iter + 1; i < 151; i++) {
        rtb_Switch2_c = distance_from_robot[i - 1];
        if (rtb_Init_e > rtb_Switch2_c) {
          rtb_Init_e = rtb_Switch2_c;
        }
      }
    }

    s211_iter = 1;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 150)) {
      s211_iter = i + 1;
      if (distance_from_robot[i] == rtb_Init_e) {
        exitg1 = true;
      } else {
        i++;
      }
    }

    /* Selector: '<S237>/Selector' incorporates:
     *  Constant: '<S237>/Constant'
     *  MATLAB Function: '<S186>/Find closest index to curve'
     *  MinMax: '<S237>/Min'
     */
    rtb_UnitDelay1_gi = rtb_Assignment_d[((int32_T)fmin(50.0, s211_iter)) - 1];

    /* If: '<S237>/If' incorporates:
     *  RelationalOperator: '<S237>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S237>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S240>/Action Port'
       */
      /* SignalConversion generated from: '<S240>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S242>/FixPt Sum1' incorporates:
       *  Constant: '<S242>/FixPt Constant'
       */
      rtb_Init_e = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S240>/Lookup Table Dynamic' incorporates:
       *  Selector: '<S240>/Selector11'
       *  Selector: '<S240>/Selector12'
       */
      rtb_Minus_n[0] = 0.0;
      rtb_Minus_n[1] = 0.0;

      /* SignalConversion generated from: '<S240>/Lookup Table Dynamic1' incorporates:
       *  Selector: '<S240>/Selector1'
       *  Selector: '<S240>/Selector2'
       */
      rtb_Add2_f[0] = 0.0;
      rtb_Add2_f[1] = 0.0;

      /* S-Function (sfix_look1_dyn): '<S240>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S240>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Init_e), &rtb_Minus_n[0], rtb_UnitDelay1_gi,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S240>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S240>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S240>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_UnitDelay1_gi,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S237>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S237>/Latch' incorporates:
       *  ActionPort: '<S241>/Action Port'
       */
      /* SignalConversion generated from: '<S241>/In1' incorporates:
       *  UnitDelay: '<S237>/Unit Delay1'
       */
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S241>/In2' incorporates:
       *  UnitDelay: '<S237>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S237>/Latch' */
    }

    /* End of If: '<S237>/If' */

    /* MinMax: '<S184>/Min' incorporates:
     *  Lookup_n-D: '<S184>/Lookahead Distance'
     *  UnitDelay: '<S184>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_0 = fmin(rtb_Rotationmatrixfromlocalto_0,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled8,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S186>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S236>/While Iterator'
     */
    s236_iter = 1U;
    UnitDelay_e = true;
    while (UnitDelay_e && (s236_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S186>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S236>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s236_iter;
      UnitDelay_e = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                      (rtb_Assignment_d[s211_iter - 1] +
                       rtb_Rotationmatrixfromlocalto_0)) &&
                     (Code_Gen_Model_B.WhileIterator < (((real_T)
        rtb_Num_Segments) * 50.0)));
      s236_iter++;
    }

    /* End of Outputs for SubSystem: '<S186>/Find first index that meets distance target' */

    /* Switch: '<S239>/Switch' incorporates:
     *  Concatenate: '<S186>/Matrix Concatenate'
     *  Constant: '<S186>/Constant'
     *  Constant: '<S236>/Constant'
     *  Constant: '<S239>/Constant1'
     *  Constant: '<S239>/Constant2'
     *  Constant: '<S239>/Constant3'
     *  Logic: '<S236>/AND'
     *  MATLAB Function: '<S186>/Find closest index to curve'
     *  Math: '<S239>/Hypot'
     *  MinMax: '<S239>/Min'
     *  MinMax: '<S239>/Min1'
     *  Product: '<S236>/Product'
     *  Product: '<S239>/Divide'
     *  Product: '<S239>/Product'
     *  Product: '<S239>/Product1'
     *  RelationalOperator: '<S186>/Relational Operator'
     *  RelationalOperator: '<S236>/Relational Operator'
     *  RelationalOperator: '<S236>/Relational Operator1'
     *  Selector: '<S186>/Selector10'
     *  Selector: '<S186>/Selector7'
     *  Selector: '<S186>/Selector8'
     *  Selector: '<S186>/Selector9'
     *  Selector: '<S236>/Selector'
     *  Selector: '<S236>/Selector1'
     *  Selector: '<S237>/Selector'
     *  Sqrt: '<S239>/Sqrt'
     *  Sum: '<S186>/Subtract'
     *  Sum: '<S236>/Add'
     *  Sum: '<S239>/Subtract'
     *  Sum: '<S239>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (6.0 -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_0 = fmin(rt_hypotd_snf(0.0 -
        Code_Gen_Model_B.KF_Position_X, 0.0 - Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Init_e *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Rotationmatrixfromlocalto_0 = fmin(rtb_Init_e *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S239>/Switch' */

    /* Logic: '<S187>/OR' */
    rtb_Is_Absolute_Steering = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S187>/Switch1' incorporates:
     *  Switch: '<S187>/Switch'
     *  UnitDelay: '<S187>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S15>/Merge2' incorporates:
       *  Constant: '<S187>/Constant3'
       *  SignalConversion: '<S187>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S15>/Merge2' incorporates:
       *  SignalConversion: '<S187>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_0;
      rtb_UnitDelay1_gi = rtb_Merge1;
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion: '<S187>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_UnitDelay1_gi;

    /* Selector: '<S186>/Selector6' incorporates:
     *  Concatenate: '<S186>/Matrix Concatenate'
     *  Selector: '<S186>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S186>/Selector2' incorporates:
     *  Concatenate: '<S186>/Matrix Concatenate'
     *  Selector: '<S186>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S187>/Switch2' incorporates:
     *  Sum: '<S243>/Subtract'
     *  Sum: '<S243>/Subtract1'
     *  Trigonometry: '<S243>/Atan2'
     *  UnitDelay: '<S187>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S187>/Switch2' */

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion: '<S187>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S15>/Merge7' incorporates:
     *  SignalConversion: '<S184>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S187>/Constant2'
     *  SignalConversion generated from: '<S184>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S187>/Constant5'
     *  SignalConversion generated from: '<S184>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S15>/Merge5' incorporates:
     *  Constant: '<S187>/Constant6'
     *  SignalConversion generated from: '<S184>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S15>/Merge6' incorporates:
     *  Constant: '<S187>/Constant1'
     *  SignalConversion generated from: '<S184>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S184>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S237>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Init_e;

    /* Update for UnitDelay: '<S237>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S187>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S187>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S15>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
     *  ActionPort: '<S183>/Action Port'
     */
    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S183>/Constant'
     *  SignalConversion generated from: '<S183>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion generated from: '<S183>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S15>/Merge1' incorporates:
     *  SignalConversion generated from: '<S183>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion generated from: '<S183>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion generated from: '<S183>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S15>/Merge4' incorporates:
     *  SignalConversion generated from: '<S183>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge5' incorporates:
     *  SignalConversion generated from: '<S183>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S15>/Merge6' incorporates:
     *  SignalConversion generated from: '<S183>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S15>/Pass Through' */
  }

  /* End of If: '<S15>/If' */

  /* Signum: '<S337>/Sign2' incorporates:
   *  UnitDelay: '<S337>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    d = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    d = -1.0;
  } else {
    d = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S337>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S337>/Product1' incorporates:
   *  Signum: '<S337>/Sign1'
   *  Signum: '<S337>/Sign2'
   */
  d *= rtb_Add_ik;
  if (rtIsNaN(d)) {
    i = 0;
  } else {
    i = (int32_T)fmod(d, 256.0);
  }

  /* Switch: '<S337>/Switch' incorporates:
   *  Constant: '<S337>/Constant'
   *  Constant: '<S342>/Constant'
   *  Constant: '<S343>/Constant'
   *  Logic: '<S337>/or'
   *  Product: '<S337>/Product1'
   *  RelationalOperator: '<S342>/Compare'
   *  RelationalOperator: '<S343>/Compare'
   *  UnitDelay: '<S337>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S337>/Switch' */

  /* Switch: '<S348>/Init' incorporates:
   *  UnitDelay: '<S348>/FixPt Unit Delay1'
   *  UnitDelay: '<S348>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Optimized_Module_Angle = rtb_Switch2_c;
  } else {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S348>/Init' */

  /* RelationalOperator: '<S344>/Compare' incorporates:
   *  Constant: '<S344>/Constant'
   */
  UnitDelay_e = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_c > 0.0);

  /* Abs: '<S337>/Abs' incorporates:
   *  Sum: '<S337>/Subtract'
   *  UnitDelay: '<S337>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S337>/Switch5' incorporates:
   *  Constant: '<S337>/Constant1'
   *  Switch: '<S337>/Switch1'
   *  UnaryMinus: '<S337>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S337>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S337>/Constant4'
     *  Constant: '<S337>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S337>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S337>/Constant2'
     *  Constant: '<S337>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S337>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S337>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S337>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S337>/Constant10'
     *  Constant: '<S337>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S337>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S337>/Constant7'
     *  Constant: '<S337>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S337>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S337>/Lookup Table Dynamic1'
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

    /* Switch: '<S337>/Switch3' incorporates:
     *  Constant: '<S337>/Constant1'
     *  Constant: '<S337>/Constant3'
     *  UnaryMinus: '<S337>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      d = Translation_Speed_Rate_Limit_Inc;
    } else {
      d = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S337>/Switch3' */
  }

  /* End of Switch: '<S337>/Switch5' */

  /* Product: '<S337>/Product' incorporates:
   *  Switch: '<S337>/Switch1'
   */
  rtb_uDLookupTable_l = d * rtb_Merge1;

  /* Sum: '<S346>/Sum1' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_c - rtb_Optimized_Module_Angle;

  /* Switch: '<S347>/Switch2' incorporates:
   *  RelationalOperator: '<S347>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > rtb_uDLookupTable_l)) {
    /* Switch: '<S337>/Switch2' incorporates:
     *  Constant: '<S337>/Constant1'
     *  Switch: '<S337>/Switch4'
     */
    if (UnitDelay_e) {
      rtb_Init_e = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S337>/Switch4' incorporates:
       *  Constant: '<S337>/Constant1'
       */
      rtb_Init_e = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S337>/Switch4' incorporates:
       *  Constant: '<S337>/Constant3'
       *  UnaryMinus: '<S337>/Unary Minus1'
       */
      rtb_Init_e = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S337>/Switch2' */

    /* Product: '<S337>/Product2' */
    rtb_Init_e *= rtb_Merge1;

    /* Switch: '<S347>/Switch' incorporates:
     *  RelationalOperator: '<S347>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < rtb_Init_e) {
      rtb_uDLookupTable_l = rtb_Init_e;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S347>/Switch' */
  }

  /* End of Switch: '<S347>/Switch2' */

  /* Sum: '<S346>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_Optimized_Module_Angle;

  /* Switch: '<S340>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S340>/Switch' incorporates:
     *  Constant: '<S364>/Constant3'
     *  Constant: '<S364>/Constant4'
     *  Math: '<S364>/Math Function'
     *  Sum: '<S340>/Subtract'
     *  Sum: '<S364>/Add1'
     *  Sum: '<S364>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Gain1) + 3.1415926535897931,
       6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S340>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S340>/Switch' */

  /* Sum: '<S360>/Add1' incorporates:
   *  Constant: '<S360>/Constant3'
   *  Constant: '<S360>/Constant4'
   *  Math: '<S360>/Math Function'
   *  Sum: '<S339>/Add'
   *  Sum: '<S359>/Sum'
   *  Sum: '<S360>/Add2'
   */
  rtb_Optimized_Module_Angle = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Gain1 +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S362>/Sum1' incorporates:
   *  Constant: '<S359>/Constant2'
   *  Product: '<S362>/Product'
   *  Sum: '<S362>/Sum'
   *  UnitDelay: '<S362>/Unit Delay1'
   */
  rtb_Gain1 = ((rtb_Optimized_Module_Angle -
                Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
               Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S359>/Product' incorporates:
   *  Constant: '<S359>/Constant3'
   */
  rtb_Merge1 = rtb_Gain1 * Steering_Heading_Control_D;

  /* Sum: '<S361>/Diff' incorporates:
   *  UnitDelay: '<S361>/UD'
   *
   * Block description for '<S361>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S361>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Merge1 - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S359>/Saturation' */
  if (rtb_Add_k5 > Steering_Heading_Control_D_UL) {
    rtb_Add_k5 = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_k5 < Steering_Heading_Control_D_LL) {
    rtb_Add_k5 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S359>/Add' incorporates:
   *  Gain: '<S359>/Gain1'
   *  Saturate: '<S359>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_Optimized_Module_Angle) +
    rtb_Add_k5;

  /* Sum: '<S359>/Subtract' incorporates:
   *  Constant: '<S359>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S359>/Sum2' incorporates:
   *  Gain: '<S359>/Gain2'
   *  UnitDelay: '<S359>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Steering_Heading_Control_I *
    rtb_Optimized_Module_Angle) + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S363>/Switch2' incorporates:
   *  RelationalOperator: '<S363>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > rtb_uDLookupTable_l)) {
    /* Sum: '<S359>/Subtract1' incorporates:
     *  Constant: '<S359>/Constant1'
     */
    rtb_UnitDelay1_gi = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S363>/Switch' incorporates:
     *  RelationalOperator: '<S363>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < rtb_UnitDelay1_gi) {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S363>/Switch' */
  }

  /* End of Switch: '<S363>/Switch2' */

  /* Saturate: '<S359>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S359>/Saturation1' */

  /* Sum: '<S359>/Add1' */
  rtb_Add_k5 = rtb_Init_e + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S359>/Saturation2' */
  if (rtb_Add_k5 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S359>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_k5 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S359>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S359>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_k5;
  }

  /* End of Saturate: '<S359>/Saturation2' */

  /* Switch: '<S339>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S350>/Switch' incorporates:
     *  Abs: '<S350>/Abs'
     *  Constant: '<S350>/Constant'
     *  Constant: '<S358>/Constant'
     *  RelationalOperator: '<S358>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_Optimized_Module_Angle = 0.0;
    }

    /* End of Switch: '<S350>/Switch' */
  } else {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S339>/Switch' */

  /* Signum: '<S349>/Sign2' incorporates:
   *  UnitDelay: '<S349>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    d = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    d = -1.0;
  } else {
    d = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S349>/Sign1' */
  if (rtIsNaN(rtb_Optimized_Module_Angle)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_Optimized_Module_Angle < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_Optimized_Module_Angle > 0.0);
  }

  /* Product: '<S349>/Product1' incorporates:
   *  Signum: '<S349>/Sign1'
   *  Signum: '<S349>/Sign2'
   */
  d *= rtb_Add_ik;
  if (rtIsNaN(d)) {
    i = 0;
  } else {
    i = (int32_T)fmod(d, 256.0);
  }

  /* Switch: '<S349>/Switch' incorporates:
   *  Constant: '<S349>/Constant'
   *  Constant: '<S351>/Constant'
   *  Constant: '<S352>/Constant'
   *  Logic: '<S349>/or'
   *  Product: '<S349>/Product1'
   *  RelationalOperator: '<S351>/Compare'
   *  RelationalOperator: '<S352>/Compare'
   *  UnitDelay: '<S349>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2 = rtb_Optimized_Module_Angle;
  } else {
    rtb_Switch2 = 0.0;
  }

  /* End of Switch: '<S349>/Switch' */

  /* Switch: '<S357>/Init' incorporates:
   *  UnitDelay: '<S357>/FixPt Unit Delay1'
   *  UnitDelay: '<S357>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S357>/Init' */

  /* RelationalOperator: '<S353>/Compare' incorporates:
   *  Constant: '<S353>/Constant'
   */
  UnitDelay_e = (rtb_Switch2 == 0.0);

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2 > 0.0);

  /* Abs: '<S349>/Abs' incorporates:
   *  Sum: '<S349>/Subtract'
   *  UnitDelay: '<S349>/Unit Delay'
   */
  rtb_Switch4_g = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_Optimized_Module_Angle);

  /* Switch: '<S349>/Switch1' incorporates:
   *  Constant: '<S349>/Constant1'
   *  Switch: '<S349>/Switch3'
   *  Switch: '<S349>/Switch5'
   *  UnaryMinus: '<S349>/Unary Minus'
   */
  if (UnitDelay_e) {
    rtb_UnitDelay1_gi = -Steering_Localized_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S349>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S349>/Constant1'
     *  Constant: '<S349>/Constant4'
     *  Constant: '<S349>/Constant6'
     *  UnaryMinus: '<S349>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S349>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S349>/Constant2'
     *  Constant: '<S349>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S349>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S349>/Lookup Table Dynamic'
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
      /* Switch: '<S349>/Switch3' incorporates:
       *  Constant: '<S349>/Constant3'
       */
      rtb_UnitDelay1_gi = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_UnitDelay1_gi = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S349>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S349>/Constant1'
     *  Constant: '<S349>/Constant10'
     *  Constant: '<S349>/Constant8'
     *  UnaryMinus: '<S349>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S349>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S349>/Constant7'
     *  Constant: '<S349>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S349>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S349>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S349>/Switch1' */

  /* Product: '<S349>/Product' */
  rtb_UnitDelay1_gi *= rtb_Switch4_g;

  /* Sum: '<S355>/Sum1' */
  rtb_Switch2 -= rtb_Init_e;

  /* Switch: '<S356>/Switch2' incorporates:
   *  RelationalOperator: '<S356>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_UnitDelay1_gi)) {
    /* Switch: '<S349>/Switch2' incorporates:
     *  Constant: '<S349>/Constant1'
     *  Switch: '<S349>/Switch4'
     */
    if (UnitDelay_e) {
      rtb_UnitDelay1_gi = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S349>/Switch4' incorporates:
       *  Constant: '<S349>/Constant1'
       */
      rtb_UnitDelay1_gi = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S349>/Switch4' incorporates:
       *  Constant: '<S349>/Constant3'
       *  UnaryMinus: '<S349>/Unary Minus1'
       */
      rtb_UnitDelay1_gi = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S349>/Switch2' */

    /* Product: '<S349>/Product2' */
    rtb_UnitDelay1_gi *= rtb_Switch4_g;

    /* Switch: '<S356>/Switch' incorporates:
     *  RelationalOperator: '<S356>/UpperRelop'
     */
    if (!(rtb_Switch2 < rtb_UnitDelay1_gi)) {
      rtb_UnitDelay1_gi = rtb_Switch2;
    }

    /* End of Switch: '<S356>/Switch' */
  }

  /* End of Switch: '<S356>/Switch2' */

  /* Sum: '<S355>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_UnitDelay1_gi + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S252>/Initialize Function' */
  /* Sum: '<S338>/Add' incorporates:
   *  Constant: '<S338>/Constant'
   *  Constant: '<S338>/Constant4'
   *  Constant: '<S338>/Constant5'
   *  Trigonometry: '<S338>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S252>/Initialize Function' */

  /* Fcn: '<S372>/r->x' incorporates:
   *  Fcn: '<S377>/r->x'
   *  Fcn: '<S382>/r->x'
   *  Fcn: '<S387>/r->x'
   */
  rtb_Switch5_aj = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S366>/Add' incorporates:
   *  Fcn: '<S372>/r->x'
   *  Fcn: '<S373>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch5_aj;

  /* Fcn: '<S372>/theta->y' incorporates:
   *  Fcn: '<S377>/theta->y'
   *  Fcn: '<S382>/theta->y'
   *  Fcn: '<S387>/theta->y'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S366>/Add' incorporates:
   *  Fcn: '<S372>/theta->y'
   *  Fcn: '<S373>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_c;

  /* Sum: '<S367>/Add' incorporates:
   *  Fcn: '<S378>/r->x'
   *  Fcn: '<S378>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch5_aj;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;

  /* Sum: '<S368>/Add' incorporates:
   *  Fcn: '<S383>/r->x'
   *  Fcn: '<S383>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch5_aj;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;

  /* Sum: '<S369>/Add' incorporates:
   *  Fcn: '<S388>/r->x'
   *  Fcn: '<S388>/theta->y'
   */
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch5_aj;
  rtb_UnitDelay1_gi = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;

  /* Fcn: '<S386>/x->r' */
  rtb_Switch5_aj = rt_hypotd_snf(rtb_Init_e, rtb_UnitDelay1_gi);

  /* RelationalOperator: '<S389>/Compare' incorporates:
   *  Constant: '<S389>/Constant'
   */
  UnitDelay_e = (rtb_Switch5_aj == 0.0);

  /* Switch: '<S385>/Switch1' */
  if (UnitDelay_e) {
    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S385>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S385>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Switch5_aj;
  }

  /* End of Switch: '<S385>/Switch1' */

  /* Fcn: '<S371>/x->r' */
  rtb_Switch5_aj = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S374>/Compare' incorporates:
   *  Constant: '<S374>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch5_aj == 0.0);

  /* Switch: '<S370>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S370>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S370>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch5_aj;
  }

  /* End of Switch: '<S370>/Switch1' */

  /* Fcn: '<S376>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S379>/Compare' incorporates:
   *  Constant: '<S379>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c == 0.0);

  /* Switch: '<S375>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S375>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S375>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_c;
  }

  /* End of Switch: '<S375>/Switch1' */

  /* Fcn: '<S381>/x->r' */
  rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S384>/Compare' incorporates:
   *  Constant: '<S384>/Constant'
   */
  rtb_AT_Tag_13_Active = (rtb_Optimized_Module_Angle == 0.0);

  /* Switch: '<S380>/Switch1' */
  if (rtb_AT_Tag_13_Active) {
    /* Switch: '<S380>/Switch1' incorporates:
     *  Constant: '<S380>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S380>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Optimized_Module_Angle;
  }

  /* End of Switch: '<S380>/Switch1' */

  /* Product: '<S365>/Divide' incorporates:
   *  Abs: '<S365>/Abs'
   *  Abs: '<S365>/Abs1'
   *  Abs: '<S365>/Abs2'
   *  Abs: '<S365>/Abs3'
   *  Constant: '<S365>/Constant'
   *  MinMax: '<S365>/Max'
   */
  rtb_Switch5_aj = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S365>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch5_aj;

  /* Switch: '<S385>/Switch' */
  if (!UnitDelay_e) {
    /* Switch: '<S385>/Switch' incorporates:
     *  Fcn: '<S386>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_UnitDelay1_gi,
      rtb_Init_e);
  }

  /* End of Switch: '<S385>/Switch' */

  /* Trigonometry: '<S329>/Cos4' incorporates:
   *  Switch: '<S318>/Angle_Switch'
   *  Trigonometry: '<S328>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S329>/Sin5' incorporates:
   *  UnaryMinus: '<S327>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S329>/Sin4' incorporates:
   *  Switch: '<S318>/Angle_Switch'
   *  Trigonometry: '<S328>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S329>/Cos5' incorporates:
   *  UnaryMinus: '<S327>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S329>/Subtract1' incorporates:
   *  Product: '<S329>/Product2'
   *  Product: '<S329>/Product3'
   *  Trigonometry: '<S329>/Cos4'
   *  Trigonometry: '<S329>/Sin4'
   */
  rtb_Init_e = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_Optimized_Module_Angle);

  /* Sum: '<S329>/Subtract' incorporates:
   *  Product: '<S329>/Product'
   *  Product: '<S329>/Product1'
   *  Trigonometry: '<S329>/Cos4'
   *  Trigonometry: '<S329>/Sin4'
   */
  rtb_UnitDelay1_gi = (rtb_Add_fn * rtb_Optimized_Module_Angle) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S329>/Hypot' */
  rtb_Switch2 = rt_hypotd_snf(rtb_UnitDelay1_gi, rtb_Init_e);

  /* Switch: '<S329>/Switch' incorporates:
   *  Constant: '<S329>/Constant'
   *  Constant: '<S329>/Constant1'
   *  Constant: '<S330>/Constant'
   *  Product: '<S329>/Divide'
   *  Product: '<S329>/Divide1'
   *  RelationalOperator: '<S330>/Compare'
   *  Switch: '<S329>/Switch1'
   */
  if (rtb_Switch2 > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch2;
    rtb_Optimized_Module_Angle = rtb_UnitDelay1_gi / rtb_Switch2;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S329>/Switch' */

  /* Switch: '<S318>/Speed_Switch' incorporates:
   *  Abs: '<S318>/Abs'
   *  Constant: '<S326>/Constant'
   *  RelationalOperator: '<S326>/Compare'
   *  Switch: '<S318>/Angle_Switch'
   *  Trigonometry: '<S328>/Atan1'
   *  Trigonometry: '<S329>/Atan1'
   *  UnaryMinus: '<S318>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S328>/Subtract1' incorporates:
     *  Product: '<S328>/Product2'
     *  Product: '<S328>/Product3'
     *  UnaryMinus: '<S318>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_a1
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S328>/Subtract' incorporates:
     *  Product: '<S328>/Product'
     *  Product: '<S328>/Product1'
     */
    rtb_Switch2 = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S328>/Hypot' */
    rtb_UnitDelay1_gi = rt_hypotd_snf(rtb_Switch2, rtb_Init_e);

    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S328>/Constant'
     *  Constant: '<S328>/Constant1'
     *  Constant: '<S331>/Constant'
     *  Product: '<S328>/Divide'
     *  Product: '<S328>/Divide1'
     *  RelationalOperator: '<S331>/Compare'
     *  Switch: '<S328>/Switch'
     */
    if (rtb_UnitDelay1_gi > 1.0E-6) {
      rtb_Switch2 /= rtb_UnitDelay1_gi;
      rtb_Init_e /= rtb_UnitDelay1_gi;
    } else {
      rtb_Switch2 = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S328>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2);
  } else {
    d = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S321>/Product2' incorporates:
   *  Constant: '<S321>/Constant'
   *  Switch: '<S318>/Speed_Switch'
   */
  rtb_Switch2_c = d * 1530.1401357649195;

  /* Signum: '<S316>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    d = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S316>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S319>/Add' incorporates:
   *  Sum: '<S320>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S251>/Product' incorporates:
   *  Abs: '<S316>/Abs'
   *  Abs: '<S319>/Abs'
   *  Constant: '<S322>/Constant'
   *  Constant: '<S332>/Constant3'
   *  Constant: '<S332>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S316>/OR'
   *  Lookup_n-D: '<S319>/1-D Lookup Table'
   *  Math: '<S332>/Math Function'
   *  RelationalOperator: '<S316>/Equal1'
   *  RelationalOperator: '<S322>/Compare'
   *  Signum: '<S316>/Sign'
   *  Signum: '<S316>/Sign1'
   *  Sum: '<S319>/Add'
   *  Sum: '<S332>/Add1'
   *  Sum: '<S332>/Add2'
   */
  rtb_Switch2_c = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S317>/Gain' */
  rtb_Switch2 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S317>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S324>/Sum1' incorporates:
   *  Constant: '<S317>/Constant2'
   *  Product: '<S324>/Product'
   *  Sum: '<S324>/Sum'
   *  UnitDelay: '<S324>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S317>/Product' incorporates:
   *  Constant: '<S317>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S323>/Diff' incorporates:
   *  UnitDelay: '<S323>/UD'
   *
   * Block description for '<S323>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S323>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S317>/Saturation' */
  if (rtb_Add_k5 > Drive_Motor_Control_D_UL) {
    rtb_Add_k5 = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Drive_Motor_Control_D_LL) {
    rtb_Add_k5 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S317>/Add' incorporates:
   *  Gain: '<S317>/Gain1'
   *  Saturate: '<S317>/Saturation'
   */
  rtb_Switch4_g = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch2) +
    rtb_Add_k5;

  /* Sum: '<S317>/Subtract' incorporates:
   *  Constant: '<S317>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Switch4_g;

  /* Sum: '<S317>/Sum2' incorporates:
   *  Gain: '<S317>/Gain2'
   *  UnitDelay: '<S317>/Unit Delay'
   */
  rtb_Switch2 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S325>/Switch2' incorporates:
   *  Constant: '<S317>/Constant'
   *  RelationalOperator: '<S325>/LowerRelop1'
   *  Sum: '<S317>/Subtract'
   */
  if (!(rtb_Switch2 > (1.0 - rtb_Switch4_g))) {
    /* Switch: '<S325>/Switch' incorporates:
     *  Constant: '<S317>/Constant1'
     *  RelationalOperator: '<S325>/UpperRelop'
     *  Sum: '<S317>/Subtract1'
     */
    if (rtb_Switch2 < (-1.0 - rtb_Switch4_g)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Switch4_g;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2;
    }

    /* End of Switch: '<S325>/Switch' */
  }

  /* End of Switch: '<S325>/Switch2' */

  /* Saturate: '<S317>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Switch2 = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Switch2 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S317>/Saturation1' */

  /* Sum: '<S317>/Add1' */
  rtb_Add_k5 = rtb_Switch4_g + rtb_Switch2;

  /* Saturate: '<S317>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S317>/Saturation2' */

  /* Sum: '<S333>/Add1' incorporates:
   *  Constant: '<S333>/Constant3'
   *  Constant: '<S333>/Constant4'
   *  Math: '<S333>/Math Function'
   *  Sum: '<S333>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S335>/Sum1' incorporates:
   *  Constant: '<S320>/Constant2'
   *  Product: '<S335>/Product'
   *  Sum: '<S335>/Sum'
   *  UnitDelay: '<S335>/Unit Delay1'
   */
  rtb_Switch4_g = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S320>/Product' incorporates:
   *  Constant: '<S320>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Switch4_g * Steering_Motor_Control_D;

  /* Sum: '<S334>/Diff' incorporates:
   *  UnitDelay: '<S334>/UD'
   *
   * Block description for '<S334>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S334>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S320>/Saturation' */
  if (rtb_Add_k5 > Steering_Motor_Control_D_UL) {
    rtb_Add_k5 = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Steering_Motor_Control_D_LL) {
    rtb_Add_k5 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S320>/Add' incorporates:
   *  Gain: '<S320>/Gain1'
   *  Saturate: '<S320>/Saturation'
   */
  rtb_Modulation_Drv = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_k5;

  /* Sum: '<S320>/Subtract' incorporates:
   *  Constant: '<S320>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Modulation_Drv;

  /* Sum: '<S320>/Sum2' incorporates:
   *  Gain: '<S320>/Gain2'
   *  UnitDelay: '<S320>/Unit Delay'
   */
  rtb_Switch2_o = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S336>/Switch2' incorporates:
   *  Constant: '<S320>/Constant'
   *  RelationalOperator: '<S336>/LowerRelop1'
   *  Sum: '<S320>/Subtract'
   */
  if (!(rtb_Switch2_o > (1.0 - rtb_Modulation_Drv))) {
    /* Switch: '<S336>/Switch' incorporates:
     *  Constant: '<S320>/Constant1'
     *  RelationalOperator: '<S336>/UpperRelop'
     *  Sum: '<S320>/Subtract1'
     */
    if (rtb_Switch2_o < (-1.0 - rtb_Modulation_Drv)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Modulation_Drv;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_o;
    }

    /* End of Switch: '<S336>/Switch' */
  }

  /* End of Switch: '<S336>/Switch2' */

  /* Saturate: '<S320>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Switch2_o = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Switch2_o = Steering_Motor_Control_I_LL;
  } else {
    rtb_Switch2_o = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S320>/Saturation1' */

  /* Sum: '<S320>/Add1' */
  rtb_Add_k5 = rtb_Modulation_Drv + rtb_Switch2_o;

  /* Saturate: '<S320>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S320>/Saturation2' */

  /* Product: '<S365>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch5_aj;

  /* Switch: '<S370>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S370>/Switch' incorporates:
     *  Fcn: '<S371>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S370>/Switch' */

  /* Trigonometry: '<S266>/Cos4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Sin5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S266>/Sin4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Cos5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S266>/Subtract1' incorporates:
   *  Product: '<S266>/Product2'
   *  Product: '<S266>/Product3'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_Optimized_Module_Angle);

  /* Sum: '<S266>/Subtract' incorporates:
   *  Product: '<S266>/Product'
   *  Product: '<S266>/Product1'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Steer_Joystick_X_Rel_Mod = (rtb_Add_fn * rtb_Optimized_Module_Angle) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S266>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Steer_Joystick_X_Rel_Mod, rtb_Modulation_Drv);

  /* Switch: '<S266>/Switch' incorporates:
   *  Constant: '<S266>/Constant'
   *  Constant: '<S266>/Constant1'
   *  Constant: '<S267>/Constant'
   *  Product: '<S266>/Divide'
   *  Product: '<S266>/Divide1'
   *  RelationalOperator: '<S267>/Compare'
   *  Switch: '<S266>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Modulation_Drv / rtb_Hypot_g5;
    rtb_Optimized_Module_Angle = rtb_Steer_Joystick_X_Rel_Mod / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S266>/Switch' */

  /* Switch: '<S255>/Speed_Switch' incorporates:
   *  Abs: '<S255>/Abs'
   *  Constant: '<S263>/Constant'
   *  RelationalOperator: '<S263>/Compare'
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Atan1'
   *  Trigonometry: '<S266>/Atan1'
   *  UnaryMinus: '<S255>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S265>/Subtract1' incorporates:
     *  Product: '<S265>/Product2'
     *  Product: '<S265>/Product3'
     *  UnaryMinus: '<S255>/Unary Minus'
     */
    rtb_Modulation_Drv = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S265>/Subtract' incorporates:
     *  Product: '<S265>/Product'
     *  Product: '<S265>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract1_a1
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S265>/Hypot' */
    rtb_Steer_Joystick_X_Rel_Mod = rt_hypotd_snf(rtb_Hypot_g5,
      rtb_Modulation_Drv);

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S265>/Constant'
     *  Constant: '<S265>/Constant1'
     *  Constant: '<S268>/Constant'
     *  Product: '<S265>/Divide'
     *  Product: '<S265>/Divide1'
     *  RelationalOperator: '<S268>/Compare'
     *  Switch: '<S265>/Switch'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Steer_Joystick_X_Rel_Mod;
      rtb_Modulation_Drv /= rtb_Steer_Joystick_X_Rel_Mod;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Modulation_Drv = 0.0;
    }

    /* End of Switch: '<S265>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Modulation_Drv, rtb_Hypot_g5);
  } else {
    d = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S258>/Product2' incorporates:
   *  Constant: '<S258>/Constant'
   *  Switch: '<S255>/Speed_Switch'
   */
  rtb_Switch2_c = d * 1530.1401357649195;

  /* Signum: '<S253>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    d = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S253>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S256>/Add' incorporates:
   *  Sum: '<S257>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S248>/Product' incorporates:
   *  Abs: '<S253>/Abs'
   *  Abs: '<S256>/Abs'
   *  Constant: '<S259>/Constant'
   *  Constant: '<S269>/Constant3'
   *  Constant: '<S269>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S253>/OR'
   *  Lookup_n-D: '<S256>/1-D Lookup Table'
   *  Math: '<S269>/Math Function'
   *  RelationalOperator: '<S253>/Equal1'
   *  RelationalOperator: '<S259>/Compare'
   *  Signum: '<S253>/Sign'
   *  Signum: '<S253>/Sign1'
   *  Sum: '<S256>/Add'
   *  Sum: '<S269>/Add1'
   *  Sum: '<S269>/Add2'
   */
  rtb_Switch2_c = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S254>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S254>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S261>/Sum1' incorporates:
   *  Constant: '<S254>/Constant2'
   *  Product: '<S261>/Product'
   *  Sum: '<S261>/Sum'
   *  UnitDelay: '<S261>/Unit Delay1'
   */
  rtb_Modulation_Drv = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                        Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S254>/Product' incorporates:
   *  Constant: '<S254>/Constant3'
   */
  rtb_Steer_Joystick_X_Rel_Mod = rtb_Modulation_Drv * Drive_Motor_Control_D;

  /* Sum: '<S260>/Diff' incorporates:
   *  UnitDelay: '<S260>/UD'
   *
   * Block description for '<S260>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S260>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Steer_Joystick_X_Rel_Mod - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S254>/Saturation' */
  if (rtb_Add_k5 > Drive_Motor_Control_D_UL) {
    rtb_Add_k5 = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Drive_Motor_Control_D_LL) {
    rtb_Add_k5 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S254>/Add' incorporates:
   *  Gain: '<S254>/Gain1'
   *  Saturate: '<S254>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    rtb_Add_k5;

  /* Sum: '<S254>/Subtract' incorporates:
   *  Constant: '<S254>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_oh;

  /* Sum: '<S254>/Sum2' incorporates:
   *  Gain: '<S254>/Gain2'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S262>/Switch2' incorporates:
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S262>/LowerRelop1'
   *  Sum: '<S254>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S254>/Constant1'
     *  RelationalOperator: '<S262>/UpperRelop'
     *  Sum: '<S254>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_oh)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_oh;
    } else {
      rtb_Optimized_Module_Angle = rtb_Hypot_g5;
    }

    /* End of Switch: '<S262>/Switch' */
  }

  /* End of Switch: '<S262>/Switch2' */

  /* Saturate: '<S254>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S254>/Saturation1' */

  /* Sum: '<S254>/Add1' */
  rtb_Add_k5 = rtb_Add_oh + rtb_Hypot_g5;

  /* Saturate: '<S254>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S254>/Saturation2' */

  /* Sum: '<S270>/Add1' incorporates:
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Math: '<S270>/Math Function'
   *  Sum: '<S270>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S272>/Sum1' incorporates:
   *  Constant: '<S257>/Constant2'
   *  Product: '<S272>/Product'
   *  Sum: '<S272>/Sum'
   *  UnitDelay: '<S272>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_Subtract1_o = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S271>/Diff' incorporates:
   *  UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Subtract1_o - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S257>/Saturation' */
  if (rtb_Add_k5 > Steering_Motor_Control_D_UL) {
    rtb_Add_k5 = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Steering_Motor_Control_D_LL) {
    rtb_Add_k5 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_k5;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_fn;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S273>/Switch2' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S273>/LowerRelop1'
   *  Sum: '<S257>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_fn))) {
    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S257>/Constant1'
     *  RelationalOperator: '<S273>/UpperRelop'
     *  Sum: '<S257>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_fn;
    } else {
      rtb_Optimized_Module_Angle = rtb_Sum2_e;
    }

    /* End of Switch: '<S273>/Switch' */
  }

  /* End of Switch: '<S273>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  rtb_Add_k5 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S257>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S257>/Saturation2' */

  /* Product: '<S365>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch5_aj;

  /* Switch: '<S375>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S375>/Switch' incorporates:
     *  Fcn: '<S376>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S375>/Switch' */

  /* Trigonometry: '<S287>/Cos4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Cos4'
   */
  rtb_Add_fn = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Sin5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S287>/Sin4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Subtract1_a1 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Cos5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S287>/Subtract1' incorporates:
   *  Product: '<S287>/Product2'
   *  Product: '<S287>/Product3'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_Subtract1_m = (rtb_Add_fn * rtb_uDLookupTable_l) + (rtb_Subtract1_a1 *
    rtb_Optimized_Module_Angle);

  /* Sum: '<S287>/Subtract' incorporates:
   *  Product: '<S287>/Product'
   *  Product: '<S287>/Product1'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_fn * rtb_Optimized_Module_Angle) -
    (rtb_Subtract1_a1 * rtb_uDLookupTable_l);

  /* Math: '<S287>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_m);

  /* Switch: '<S287>/Switch' incorporates:
   *  Constant: '<S287>/Constant'
   *  Constant: '<S287>/Constant1'
   *  Constant: '<S288>/Constant'
   *  Product: '<S287>/Divide'
   *  Product: '<S287>/Divide1'
   *  RelationalOperator: '<S288>/Compare'
   *  Switch: '<S287>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_m / rtb_Hypot_b;
    rtb_Optimized_Module_Angle = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S287>/Switch' */

  /* Switch: '<S276>/Speed_Switch' incorporates:
   *  Abs: '<S276>/Abs'
   *  Constant: '<S284>/Constant'
   *  RelationalOperator: '<S284>/Compare'
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Atan1'
   *  Trigonometry: '<S287>/Atan1'
   *  UnaryMinus: '<S276>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S286>/Subtract1' incorporates:
     *  Product: '<S286>/Product2'
     *  Product: '<S286>/Product3'
     *  UnaryMinus: '<S276>/Unary Minus'
     */
    rtb_Subtract1_m = (rtb_Add_fn * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S286>/Subtract' incorporates:
     *  Product: '<S286>/Product'
     *  Product: '<S286>/Product1'
     */
    rtb_Subtract1_a1 = (rtb_Add_fn * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_a1 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S286>/Hypot' */
    rtb_Add_fn = rt_hypotd_snf(rtb_Subtract1_a1, rtb_Subtract1_m);

    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S286>/Constant'
     *  Constant: '<S286>/Constant1'
     *  Constant: '<S289>/Constant'
     *  Product: '<S286>/Divide'
     *  Product: '<S286>/Divide1'
     *  RelationalOperator: '<S289>/Compare'
     *  Switch: '<S286>/Switch'
     */
    if (rtb_Add_fn > 1.0E-6) {
      rtb_Subtract1_a1 /= rtb_Add_fn;
      rtb_Add_fn = rtb_Subtract1_m / rtb_Add_fn;
    } else {
      rtb_Subtract1_a1 = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S286>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Subtract1_a1);
  } else {
    d = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S279>/Product2' incorporates:
   *  Constant: '<S279>/Constant'
   *  Switch: '<S276>/Speed_Switch'
   */
  rtb_Switch2_c = d * 1530.1401357649195;

  /* Signum: '<S274>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    d = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S274>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Sum: '<S278>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S249>/Product' incorporates:
   *  Abs: '<S274>/Abs'
   *  Abs: '<S277>/Abs'
   *  Constant: '<S280>/Constant'
   *  Constant: '<S290>/Constant3'
   *  Constant: '<S290>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S274>/OR'
   *  Lookup_n-D: '<S277>/1-D Lookup Table'
   *  Math: '<S290>/Math Function'
   *  RelationalOperator: '<S274>/Equal1'
   *  RelationalOperator: '<S280>/Compare'
   *  Signum: '<S274>/Sign'
   *  Signum: '<S274>/Sign1'
   *  Sum: '<S277>/Add'
   *  Sum: '<S290>/Add1'
   *  Sum: '<S290>/Add2'
   */
  rtb_Switch2_c = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38, 1U);

  /* Gain: '<S275>/Gain' */
  rtb_Subtract1_m = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S275>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S282>/Sum1' incorporates:
   *  Constant: '<S275>/Constant2'
   *  Product: '<S282>/Product'
   *  Sum: '<S282>/Sum'
   *  UnitDelay: '<S282>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S275>/Product' incorporates:
   *  Constant: '<S275>/Constant3'
   */
  rtb_Subtract1_a1 = rtb_Add_fn * Drive_Motor_Control_D;

  /* Sum: '<S281>/Diff' incorporates:
   *  UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Subtract1_a1 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S275>/Saturation' */
  if (rtb_Add_k5 > Drive_Motor_Control_D_UL) {
    rtb_Add_k5 = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Drive_Motor_Control_D_LL) {
    rtb_Add_k5 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S275>/Add' incorporates:
   *  Gain: '<S275>/Gain1'
   *  Saturate: '<S275>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_m) +
    rtb_Add_k5;

  /* Sum: '<S275>/Subtract' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Hypot_b;

  /* Sum: '<S275>/Sum2' incorporates:
   *  Gain: '<S275>/Gain2'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  rtb_Subtract1_m = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S283>/Switch2' incorporates:
   *  Constant: '<S275>/Constant'
   *  RelationalOperator: '<S283>/LowerRelop1'
   *  Sum: '<S275>/Subtract'
   */
  if (!(rtb_Subtract1_m > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S275>/Constant1'
     *  RelationalOperator: '<S283>/UpperRelop'
     *  Sum: '<S275>/Subtract1'
     */
    if (rtb_Subtract1_m < (-1.0 - rtb_Hypot_b)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Hypot_b;
    } else {
      rtb_Optimized_Module_Angle = rtb_Subtract1_m;
    }

    /* End of Switch: '<S283>/Switch' */
  }

  /* End of Switch: '<S283>/Switch2' */

  /* Saturate: '<S275>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_m = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_m = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_m = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S275>/Saturation1' */

  /* Sum: '<S275>/Add1' */
  rtb_Add_k5 = rtb_Hypot_b + rtb_Subtract1_m;

  /* Saturate: '<S275>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S275>/Saturation2' */

  /* Sum: '<S291>/Add1' incorporates:
   *  Constant: '<S291>/Constant3'
   *  Constant: '<S291>/Constant4'
   *  Math: '<S291>/Math Function'
   *  Sum: '<S291>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S293>/Sum1' incorporates:
   *  Constant: '<S278>/Constant2'
   *  Product: '<S293>/Product'
   *  Sum: '<S293>/Sum'
   *  UnitDelay: '<S293>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S278>/Product' incorporates:
   *  Constant: '<S278>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S292>/Diff' incorporates:
   *  UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S278>/Saturation' */
  if (rtb_Add_k5 > Steering_Motor_Control_D_UL) {
    rtb_Add_k5 = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Steering_Motor_Control_D_LL) {
    rtb_Add_k5 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Gain: '<S278>/Gain1'
   *  Saturate: '<S278>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_k5;

  /* Sum: '<S278>/Subtract' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_ik;

  /* Sum: '<S278>/Sum2' incorporates:
   *  Gain: '<S278>/Gain2'
   *  UnitDelay: '<S278>/Unit Delay'
   */
  rtb_Subtract1_n = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S294>/Switch2' incorporates:
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S294>/LowerRelop1'
   *  Sum: '<S278>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S278>/Constant1'
     *  RelationalOperator: '<S294>/UpperRelop'
     *  Sum: '<S278>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Add_ik)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_ik;
    } else {
      rtb_Optimized_Module_Angle = rtb_Subtract1_n;
    }

    /* End of Switch: '<S294>/Switch' */
  }

  /* End of Switch: '<S294>/Switch2' */

  /* Saturate: '<S278>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_n = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_n = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S278>/Saturation1' */

  /* Sum: '<S278>/Add1' */
  rtb_Add_k5 = rtb_Add_ik + rtb_Subtract1_n;

  /* Saturate: '<S278>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S278>/Saturation2' */

  /* Product: '<S365>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch5_aj;

  /* Switch: '<S380>/Switch' */
  if (!rtb_AT_Tag_13_Active) {
    /* Switch: '<S380>/Switch' incorporates:
     *  Fcn: '<S381>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S380>/Switch' */

  /* Trigonometry: '<S308>/Cos4' incorporates:
   *  Switch: '<S297>/Angle_Switch'
   *  Trigonometry: '<S307>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S308>/Sin5' incorporates:
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S308>/Sin4' incorporates:
   *  Switch: '<S297>/Angle_Switch'
   *  Trigonometry: '<S307>/Sin4'
   */
  rtb_Subtract1_ie = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S308>/Cos5' incorporates:
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S308>/Subtract1' incorporates:
   *  Product: '<S308>/Product2'
   *  Product: '<S308>/Product3'
   *  Trigonometry: '<S308>/Cos4'
   *  Trigonometry: '<S308>/Sin4'
   */
  rtb_Subtract1_f5 = (rtb_Add_ik * rtb_Optimized_Module_Angle) +
    (rtb_Subtract1_ie * rtb_Switch2_c);

  /* Sum: '<S308>/Subtract' incorporates:
   *  Product: '<S308>/Product'
   *  Product: '<S308>/Product1'
   *  Trigonometry: '<S308>/Cos4'
   *  Trigonometry: '<S308>/Sin4'
   */
  rtb_Optimized_Module_Angle = (rtb_Add_ik * rtb_Switch2_c) - (rtb_Subtract1_ie *
    rtb_Optimized_Module_Angle);

  /* Math: '<S308>/Hypot' */
  rtb_Hypot_er = rt_hypotd_snf(rtb_Optimized_Module_Angle, rtb_Subtract1_f5);

  /* Switch: '<S308>/Switch' incorporates:
   *  Constant: '<S308>/Constant'
   *  Constant: '<S308>/Constant1'
   *  Constant: '<S309>/Constant'
   *  Product: '<S308>/Divide'
   *  Product: '<S308>/Divide1'
   *  RelationalOperator: '<S309>/Compare'
   *  Switch: '<S308>/Switch1'
   */
  if (rtb_Hypot_er > 1.0E-6) {
    rtb_Switch5_aj = rtb_Subtract1_f5 / rtb_Hypot_er;
    rtb_Switch2_c = rtb_Optimized_Module_Angle / rtb_Hypot_er;
  } else {
    rtb_Switch5_aj = 0.0;
    rtb_Switch2_c = 1.0;
  }

  /* End of Switch: '<S308>/Switch' */

  /* Switch: '<S297>/Speed_Switch' incorporates:
   *  Abs: '<S297>/Abs'
   *  Constant: '<S305>/Constant'
   *  RelationalOperator: '<S305>/Compare'
   *  Switch: '<S297>/Angle_Switch'
   *  Trigonometry: '<S307>/Atan1'
   *  Trigonometry: '<S308>/Atan1'
   *  UnaryMinus: '<S297>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch5_aj, rtb_Switch2_c)) > 1.5707963267948966) {
    d = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S307>/Subtract1' incorporates:
     *  Product: '<S307>/Product2'
     *  Product: '<S307>/Product3'
     *  UnaryMinus: '<S297>/Unary Minus'
     */
    rtb_Subtract1_f5 = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_ie * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S307>/Subtract' incorporates:
     *  Product: '<S307>/Product'
     *  Product: '<S307>/Product1'
     */
    rtb_Subtract1_ie = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_ie * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S307>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_ie, rtb_Subtract1_f5);

    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S307>/Constant'
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S310>/Constant'
     *  Product: '<S307>/Divide'
     *  Product: '<S307>/Divide1'
     *  RelationalOperator: '<S310>/Compare'
     *  Switch: '<S307>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_ie /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract1_f5 / rtb_Add_ik;
    } else {
      rtb_Subtract1_ie = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S307>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_ie);
  } else {
    d = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S300>/Product2' incorporates:
   *  Constant: '<S300>/Constant'
   *  Switch: '<S297>/Speed_Switch'
   */
  rtb_Switch5_aj = d * 1530.1401357649195;

  /* Signum: '<S295>/Sign' */
  if (rtIsNaN(rtb_Switch5_aj)) {
    d = (rtNaN);
  } else if (rtb_Switch5_aj < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Switch5_aj > 0.0);
  }

  /* Signum: '<S295>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S298>/Add' incorporates:
   *  Sum: '<S299>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S250>/Product' incorporates:
   *  Abs: '<S295>/Abs'
   *  Abs: '<S298>/Abs'
   *  Constant: '<S301>/Constant'
   *  Constant: '<S311>/Constant3'
   *  Constant: '<S311>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S295>/OR'
   *  Lookup_n-D: '<S298>/1-D Lookup Table'
   *  Math: '<S311>/Math Function'
   *  RelationalOperator: '<S295>/Equal1'
   *  RelationalOperator: '<S301>/Compare'
   *  Signum: '<S295>/Sign'
   *  Signum: '<S295>/Sign1'
   *  Sum: '<S298>/Add'
   *  Sum: '<S311>/Add1'
   *  Sum: '<S311>/Add2'
   */
  rtb_Switch5_aj = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch5_aj) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_Optimized_Module_Angle +
    1.5707963267948966, 3.1415926535897931) - 1.5707963267948966),
                  Code_Gen_Model_ConstP.pooled39, Code_Gen_Model_ConstP.pooled38,
                  1U);

  /* Gain: '<S296>/Gain' */
  rtb_Subtract1_f5 = Drive_Motor_Control_FF * rtb_Switch5_aj;

  /* Sum: '<S296>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch5_aj -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S303>/Sum1' incorporates:
   *  Constant: '<S296>/Constant2'
   *  Product: '<S303>/Product'
   *  Sum: '<S303>/Sum'
   *  UnitDelay: '<S303>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch5_aj - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S296>/Product' incorporates:
   *  Constant: '<S296>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S302>/Diff' incorporates:
   *  UnitDelay: '<S302>/UD'
   *
   * Block description for '<S302>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S302>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S296>/Saturation' */
  if (rtb_Add_k5 > Drive_Motor_Control_D_UL) {
    rtb_Add_k5 = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Drive_Motor_Control_D_LL) {
    rtb_Add_k5 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S296>/Add' incorporates:
   *  Gain: '<S296>/Gain1'
   *  Saturate: '<S296>/Saturation'
   */
  rtb_Hypot_er = ((Drive_Motor_Control_P * rtb_Switch5_aj) + rtb_Subtract1_f5) +
    rtb_Add_k5;

  /* Sum: '<S296>/Subtract' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Hypot_er;

  /* Sum: '<S296>/Sum2' incorporates:
   *  Gain: '<S296>/Gain2'
   *  UnitDelay: '<S296>/Unit Delay'
   */
  rtb_Subtract1_f5 = (Drive_Motor_Control_I * rtb_Switch5_aj) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S304>/Switch2' incorporates:
   *  Constant: '<S296>/Constant'
   *  RelationalOperator: '<S304>/LowerRelop1'
   *  Sum: '<S296>/Subtract'
   */
  if (!(rtb_Subtract1_f5 > (1.0 - rtb_Hypot_er))) {
    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S296>/Constant1'
     *  RelationalOperator: '<S304>/UpperRelop'
     *  Sum: '<S296>/Subtract1'
     */
    if (rtb_Subtract1_f5 < (-1.0 - rtb_Hypot_er)) {
      rtb_Switch2_c = -1.0 - rtb_Hypot_er;
    } else {
      rtb_Switch2_c = rtb_Subtract1_f5;
    }

    /* End of Switch: '<S304>/Switch' */
  }

  /* End of Switch: '<S304>/Switch2' */

  /* Saturate: '<S296>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_f5 = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_f5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f5 = rtb_Switch2_c;
  }

  /* End of Saturate: '<S296>/Saturation1' */

  /* Sum: '<S296>/Add1' */
  rtb_Add_k5 = rtb_Hypot_er + rtb_Subtract1_f5;

  /* Saturate: '<S296>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S296>/Saturation2' */

  /* Sum: '<S312>/Add1' incorporates:
   *  Constant: '<S312>/Constant3'
   *  Constant: '<S312>/Constant4'
   *  Math: '<S312>/Math Function'
   *  Sum: '<S312>/Add2'
   */
  rtb_Switch5_aj = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S314>/Sum1' incorporates:
   *  Constant: '<S299>/Constant2'
   *  Product: '<S314>/Product'
   *  Sum: '<S314>/Sum'
   *  UnitDelay: '<S314>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Switch5_aj -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S299>/Product' incorporates:
   *  Constant: '<S299>/Constant3'
   */
  rtb_Hypot_er = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S313>/Diff' incorporates:
   *  UnitDelay: '<S313>/UD'
   *
   * Block description for '<S313>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S313>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_k5 = rtb_Hypot_er - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S299>/Saturation' */
  if (rtb_Add_k5 > Steering_Motor_Control_D_UL) {
    rtb_Add_k5 = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_k5 < Steering_Motor_Control_D_LL) {
    rtb_Add_k5 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S299>/Add' incorporates:
   *  Gain: '<S299>/Gain1'
   *  Saturate: '<S299>/Saturation'
   */
  rtb_Add_dl = (Steering_Motor_Control_P * rtb_Switch5_aj) + rtb_Add_k5;

  /* Sum: '<S299>/Subtract' incorporates:
   *  Constant: '<S299>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_dl;

  /* Sum: '<S299>/Sum2' incorporates:
   *  Gain: '<S299>/Gain2'
   *  UnitDelay: '<S299>/Unit Delay'
   */
  rtb_Switch5_aj = (Steering_Motor_Control_I * rtb_Switch5_aj) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S315>/Switch2' incorporates:
   *  Constant: '<S299>/Constant'
   *  RelationalOperator: '<S315>/LowerRelop1'
   *  Sum: '<S299>/Subtract'
   */
  if (!(rtb_Switch5_aj > (1.0 - rtb_Add_dl))) {
    /* Switch: '<S315>/Switch' incorporates:
     *  Constant: '<S299>/Constant1'
     *  RelationalOperator: '<S315>/UpperRelop'
     *  Sum: '<S299>/Subtract1'
     */
    if (rtb_Switch5_aj < (-1.0 - rtb_Add_dl)) {
      rtb_Switch2_c = -1.0 - rtb_Add_dl;
    } else {
      rtb_Switch2_c = rtb_Switch5_aj;
    }

    /* End of Switch: '<S315>/Switch' */
  }

  /* End of Switch: '<S315>/Switch2' */

  /* Saturate: '<S299>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_p5 = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_p5 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_p5 = rtb_Switch2_c;
  }

  /* End of Saturate: '<S299>/Saturation1' */

  /* Sum: '<S299>/Add1' */
  rtb_Add_k5 = rtb_Add_dl + rtb_Subtract1_p5;

  /* Saturate: '<S299>/Saturation2' */
  if (rtb_Add_k5 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_k5 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_k5;
  }

  /* End of Saturate: '<S299>/Saturation2' */

  /* Switch: '<S8>/Switch9' incorporates:
   *  Constant: '<S8>/Constant26'
   */
  if (TEST_Speaker_Speed != 0.0) {
    /* Switch: '<S8>/Switch9' */
    rtb_Switch2_c = TEST_Speaker_Speed;
  } else {
    /* Switch: '<S8>/Switch9' incorporates:
     *  Lookup_n-D: '<S8>/1-D Lookup Table1'
     *  Switch: '<S5>/Switch'
     */
    rtb_Switch2_c = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled2,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData, 9U);
  }

  /* End of Switch: '<S8>/Switch9' */

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   */
  UnitDelay_e = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S72>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S72>/Delay Input1'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_13_Active = (((int32_T)UnitDelay_e) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   */
  rtb_Is_Absolute_Translation_g =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S73>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_14_Active = (((int32_T)rtb_Is_Absolute_Translation_g) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_n));

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    4.0);

  /* RelationalOperator: '<S75>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S75>/Delay Input1'
   *
   * Block description for '<S75>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   */
  rtb_AT_Tag_11_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S74>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND2_k = (((int32_T)rtb_AT_Tag_11_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S76>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S76>/Delay Input1'
   *
   * Block description for '<S76>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S71>/Compare' incorporates:
   *  Constant: '<S71>/Constant'
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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Switch2_c;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Switch2_c;
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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Switch2_c;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Switch2_c;
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
        &FixPtRelationalOperator_o, &rtb_Switch2_c);
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

  /* Sum: '<S148>/Add' incorporates:
   *  Constant: '<S148>/Constant24'
   */
  rtb_Switch5_aj = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                    Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S148>/Sqrt' incorporates:
   *  Math: '<S148>/Math Function'
   *  Sum: '<S148>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_Switch5_aj * rtb_Switch5_aj)
    + Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S23>/Subtract1' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S23>/Product'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;

  /* Sqrt: '<S152>/Sqrt' incorporates:
   *  Constant: '<S152>/Constant24'
   *  Math: '<S152>/Math Function'
   *  Sum: '<S152>/Add'
   *  Sum: '<S152>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Sum: '<S22>/Subtract1' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   *  Product: '<S22>/Product'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  Code_Gen_Model_B.Ball_Screw_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;

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
  rtb_Add_dl = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (rtb_Add_dl - 56058.355625000004) / 331.17548218429454;
  rtb_Add_dl -= d * d;
  if (rtb_Add_dl >= 0.0) {
    y = sqrt(rtb_Add_dl);
  } else {
    y = 0.0;
  }

  rtb_Switch5_aj = (((((((d * 0.84366148773210747) + 177.79999999999998) - (y *
    -0.53687549219315933)) - 177.79999999999998) - 139.7) *
                     (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
                    177.79999999999998) + 139.7;
  rtb_Switch2_c = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((rtb_Switch2_c - 25.4) * (rtb_Switch2_c - 25.4)) + (rtb_Switch5_aj *
            rtb_Switch5_aj));
  rtb_Add_dl = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + rtb_Add_dl) / (2.0 * d);
  rtb_Add_dl -= d * d;
  if (rtb_Add_dl >= 0.0) {
    y = sqrt(rtb_Add_dl);
  } else {
    y = 0.0;
  }

  rtb_Add_dl = atan((rtb_Switch2_c - 25.4) / rtb_Switch5_aj);
  cos_alpha = cos(rtb_Add_dl);
  sin_alpha = sin(rtb_Add_dl);
  rtb_Add_dl = (d * cos_alpha) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch5_aj = atan((rtb_Switch2_c - d) / (rtb_Switch5_aj - rtb_Add_dl)) -
    -0.16186298985390718;
  y = cos(rtb_Switch5_aj);
  cos_alpha = sin(rtb_Switch5_aj);
  rtb_Switch2_c = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((rtb_Add_dl - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Switch2_c - 465.697) * (rtb_Switch2_c -
    465.697)) + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Switch2_c;

  /* Gain: '<S14>/Gain2' incorporates:
   *  MATLAB Function: '<S14>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch5_aj;

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

  /* Switch: '<S14>/Switch5' incorporates:
   *  Constant: '<S14>/Constant26'
   *  Lookup_n-D: '<S14>/1-D Lookup Table1'
   *  Switch: '<S5>/Switch'
   */
  if (TEST_Speaker_Angle != 0.0) {
    rtb_Switch5_aj = TEST_Speaker_Angle;
  } else {
    rtb_Switch5_aj = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled2,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData_p, 9U);
  }

  /* End of Switch: '<S14>/Switch5' */

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant25'
   *  Lookup_n-D: '<S14>/1-D Lookup Table2'
   *  Switch: '<S5>/Switch'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Switch2_c = TEST_Speaker_Height;
  } else {
    rtb_Switch2_c = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled2,
      Code_Gen_Model_ConstP.uDLookupTable2_tableData, 9U);
  }

  /* End of Switch: '<S14>/Switch4' */

  /* Switch: '<S14>/Switch6' incorporates:
   *  Constant: '<S14>/Constant27'
   *  Lookup_n-D: '<S14>/1-D Lookup Table3'
   *  Switch: '<S5>/Switch'
   */
  if (TEST_Speaker_Gap != 0.0) {
    rtb_Add_dl = TEST_Speaker_Gap;
  } else {
    rtb_Add_dl = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled2,
      Code_Gen_Model_ConstP.uDLookupTable3_tableData, 9U);
  }

  /* End of Switch: '<S14>/Switch6' */

  /* Chart: '<S14>/Chart_Shooter_Position' */
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
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Speaker_to_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 3.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      } else {
        Code_Gen_Model_B.Desired_Angle = rtb_Switch5_aj;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
        Code_Gen_Model_B.Desired_Gap = rtb_Add_dl;
      }
      break;

     case Code_Gen_Mo_IN_Speaker_to_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 3.0;
      if ((((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
            (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) &&
           (Code_Gen_Model_B.Meas_Gap < (Stage_Gap + Tol_Gap))) &&
          (Code_Gen_Model_B.Meas_Gap > (Stage_Gap - Tol_Gap))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 0.0;
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
        Code_Gen_Model_B.Desired_Angle = rtb_Switch5_aj;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
        Code_Gen_Model_B.Desired_Gap = rtb_Add_dl;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
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

  /* End of Chart: '<S14>/Chart_Shooter_Position' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant4'
   *  Switch: '<S8>/Switch6'
   *  Switch: '<S8>/Switch8'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else if (Code_Gen_Model_B.Test_Mode) {
    /* Switch: '<S8>/Switch8' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Outport: '<Root>/Shooter_Servo_Position'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else if (Code_Gen_Model_B.Shooter_Servo) {
    /* Switch: '<S8>/Switch6' incorporates:
     *  Constant: '<S8>/Constant'
     *  Outport: '<Root>/Shooter_Servo_Position'
     *  Switch: '<S8>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S8>/Constant1'
     *  Gain: '<S8>/Gain'
     *  MinMax: '<S14>/Max'
     *  Sum: '<S8>/Add'
     *  Switch: '<S8>/Switch6'
     *  Switch: '<S8>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = (Servo_Store_Gain * fmin
      (Code_Gen_Model_B.Desired_Angle, Code_Gen_Model_B.Meas_Angle)) +
      Servo_Store_Offset;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Gain: '<S14>/Gain3' */
  rtb_Switch2_c = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S14>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S14>/Constant10'
   *  Constant: '<S14>/Constant11'
   *  Constant: '<S14>/Constant13'
   *  Constant: '<S14>/Constant14'
   *  Constant: '<S14>/Constant15'
   *  Constant: '<S14>/Constant21'
   */
  rtb_Switch5_aj = cos(rtb_Switch2_c);
  rtb_Switch2_c = sin(rtb_Switch2_c);
  rtb_Add_dl = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (rtb_Add_dl >= 0.0) {
    d = ((rtb_Switch5_aj * 42.875) + ((-rtb_Switch2_c) * -76.0)) + (sqrt
      (rtb_Add_dl) - 50.027);
  } else {
    d = ((rtb_Switch5_aj * 42.875) + ((-rtb_Switch2_c) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = d;
  rtb_Minus_n[0] = ((rtb_Switch5_aj * 155.54999999999998) + ((-rtb_Switch2_c) *
    -25.4)) + d;
  d = ((rtb_Switch2_c * 42.875) + (rtb_Switch5_aj * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = d;
  rtb_Minus_n[1] = ((rtb_Switch2_c * 155.54999999999998) + (rtb_Switch5_aj *
    -25.4)) + d;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Reshapey[1] - 25.4) *
    (rtb_Reshapey[1] - 25.4)) + (rtb_Reshapey[0] * rtb_Reshapey[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Switch5_aj = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                        (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Add_dl = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_Switch5_aj));
  rtb_Switch2_c = ((288.925 / rtb_Switch5_aj) * rtb_Minus_n[1]) -
    88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (rtb_Add_dl * rtb_Add_dl) +
    (rtb_Switch2_c * rtb_Switch2_c);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Switch5_aj;

  /* End of MATLAB Function: '<S14>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S14>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S14>/Constant23'
   *  Constant: '<S14>/Constant24'
   *  Constant: '<S14>/Constant28'
   *  Constant: '<S14>/Constant29'
   *  Constant: '<S14>/Constant30'
   *  Constant: '<S14>/Constant31'
   */
  rtb_Switch5_aj = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
    Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) - 421.79999999999995;
  if (rtb_Switch5_aj <= 98.425) {
    d = 79.375;
    rtb_Switch2_c = 19.049999999999997;
  } else {
    d = fmin(fmax((((rtb_Switch5_aj - 79.375) - 19.049999999999997) * 0.43) +
                  79.375, 79.375), 317.0);
    rtb_Switch2_c = fmin(fmax(rtb_Switch5_aj - d, 19.049999999999997), 334.0);
  }

  /* Switch: '<S176>/Init' incorporates:
   *  UnitDelay: '<S176>/FixPt Unit Delay1'
   *  UnitDelay: '<S176>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch5_aj = rtb_Switch2_c;
  } else {
    rtb_Switch5_aj = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S176>/Init' */

  /* Sum: '<S174>/Sum1' */
  rtb_Switch2_c -= rtb_Switch5_aj;

  /* Switch: '<S175>/Switch2' incorporates:
   *  Constant: '<S160>/Constant1'
   *  Constant: '<S160>/Constant3'
   *  RelationalOperator: '<S175>/LowerRelop1'
   *  RelationalOperator: '<S175>/UpperRelop'
   *  Switch: '<S175>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Back_Inc_RL) {
    rtb_Switch2_c = AA_Position_Back_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Back_Dec_RL) {
    /* Switch: '<S175>/Switch' incorporates:
     *  Constant: '<S160>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Back_Dec_RL;
  }

  /* End of Switch: '<S175>/Switch2' */

  /* Sum: '<S174>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch5_aj;

  /* Sum: '<S156>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S156>/Gain1' */
  rtb_Switch5_aj = AA_Prop_Gain * rtb_Switch2_c;

  /* RelationalOperator: '<S150>/Compare' incorporates:
   *  Constant: '<S150>/Constant'
   */
  rtb_AT_Tag_14_Active = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S156>/Switch' incorporates:
   *  Constant: '<S156>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S156>/Constant3'
     *  UnitDelay: '<S165>/Delay Input1'
     *
     * Block description for '<S165>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      rtb_Add_dl = AA_Integral_IC;
    } else {
      /* Sum: '<S156>/Sum2' incorporates:
       *  Gain: '<S156>/Gain2'
       *  UnitDelay: '<S156>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S156>/Subtract' incorporates:
       *  Constant: '<S156>/Constant'
       */
      rtb_Add_dl = AA_TC_UL - rtb_Switch5_aj;

      /* Switch: '<S166>/Switch2' incorporates:
       *  RelationalOperator: '<S166>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > rtb_Add_dl)) {
        /* Sum: '<S156>/Subtract1' incorporates:
         *  Constant: '<S156>/Constant1'
         */
        rtb_Add_dl = AA_TC_LL - rtb_Switch5_aj;

        /* Switch: '<S166>/Switch' incorporates:
         *  RelationalOperator: '<S166>/UpperRelop'
         */
        if (!(rtb_Switch2_c < rtb_Add_dl)) {
          rtb_Add_dl = rtb_Switch2_c;
        }

        /* End of Switch: '<S166>/Switch' */
      }

      /* End of Switch: '<S166>/Switch2' */

      /* Saturate: '<S156>/Saturation1' */
      if (rtb_Add_dl > AA_Integral_UL) {
        rtb_Add_dl = AA_Integral_UL;
      } else if (rtb_Add_dl < AA_Integral_LL) {
        rtb_Add_dl = AA_Integral_LL;
      }

      /* End of Saturate: '<S156>/Saturation1' */
    }

    /* End of Switch: '<S156>/Switch1' */
  } else {
    rtb_Add_dl = 0.0;
  }

  /* End of Switch: '<S156>/Switch' */

  /* Switch: '<S14>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S156>/Add1' */
    rtb_Add_k5 = rtb_Switch5_aj + rtb_Add_dl;

    /* Saturate: '<S156>/Saturation2' */
    if (rtb_Add_k5 > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_k5 < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = rtb_Add_k5;
    }

    /* End of Saturate: '<S156>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Switch: '<S173>/Init' incorporates:
   *  MATLAB Function: '<S14>/Back_AA_To_Extentions'
   *  UnitDelay: '<S173>/FixPt Unit Delay1'
   *  UnitDelay: '<S173>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch5_aj = d;
  } else {
    rtb_Switch5_aj = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S173>/Init' */

  /* Sum: '<S171>/Sum1' incorporates:
   *  MATLAB Function: '<S14>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c = d - rtb_Switch5_aj;

  /* Switch: '<S172>/Switch2' incorporates:
   *  Constant: '<S159>/Constant1'
   *  Constant: '<S159>/Constant3'
   *  RelationalOperator: '<S172>/LowerRelop1'
   *  RelationalOperator: '<S172>/UpperRelop'
   *  Switch: '<S172>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Back_Inc_RL) {
    rtb_Switch2_c = AA_Position_Back_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Back_Dec_RL) {
    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S159>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Back_Dec_RL;
  }

  /* End of Switch: '<S172>/Switch2' */

  /* Sum: '<S171>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch5_aj;

  /* Sum: '<S157>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S157>/Gain1' */
  rtb_Switch5_aj = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S157>/Switch' incorporates:
   *  Constant: '<S157>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S157>/Switch1' incorporates:
     *  Constant: '<S157>/Constant3'
     *  UnitDelay: '<S167>/Delay Input1'
     *
     * Block description for '<S167>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      d = AA_Integral_IC;
    } else {
      /* Sum: '<S157>/Sum2' incorporates:
       *  Gain: '<S157>/Gain2'
       *  UnitDelay: '<S157>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c;

      /* Sum: '<S157>/Subtract' incorporates:
       *  Constant: '<S157>/Constant'
       */
      d = AA_TC_UL - rtb_Switch5_aj;

      /* Switch: '<S168>/Switch2' incorporates:
       *  RelationalOperator: '<S168>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > d)) {
        /* Sum: '<S157>/Subtract1' incorporates:
         *  Constant: '<S157>/Constant1'
         */
        d = AA_TC_LL - rtb_Switch5_aj;

        /* Switch: '<S168>/Switch' incorporates:
         *  RelationalOperator: '<S168>/UpperRelop'
         */
        if (!(rtb_Switch2_c < d)) {
          d = rtb_Switch2_c;
        }

        /* End of Switch: '<S168>/Switch' */
      }

      /* End of Switch: '<S168>/Switch2' */

      /* Saturate: '<S157>/Saturation1' */
      if (d > AA_Integral_UL) {
        d = AA_Integral_UL;
      } else if (d < AA_Integral_LL) {
        d = AA_Integral_LL;
      }

      /* End of Saturate: '<S157>/Saturation1' */
    }

    /* End of Switch: '<S157>/Switch1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S157>/Switch' */

  /* Switch: '<S14>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S157>/Add1' */
    rtb_Add_k5 = rtb_Switch5_aj + d;

    /* Saturate: '<S157>/Saturation2' */
    if (rtb_Add_k5 > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_k5 < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Add_k5;
    }

    /* End of Saturate: '<S157>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch' */

  /* Sum: '<S151>/Subtract1' incorporates:
   *  Constant: '<S151>/Constant24'
   *  Math: '<S151>/Math Function'
   *  Sqrt: '<S151>/Sqrt'
   *  Sum: '<S151>/Subtract'
   */
  rtb_Switch5_aj = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
    Code_Gen_Model_B.Desired_Front_AA_Length) -
                        Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S151>/Saturation' */
  if (rtb_Switch5_aj > Front_AA_Max_Ext) {
    rtb_Switch5_aj = Front_AA_Max_Ext;
  } else if (rtb_Switch5_aj < Front_AA_Min_Ext) {
    rtb_Switch5_aj = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S151>/Saturation' */

  /* Switch: '<S182>/Init' incorporates:
   *  UnitDelay: '<S182>/FixPt Unit Delay1'
   *  UnitDelay: '<S182>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch5_aj;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S182>/Init' */

  /* Sum: '<S180>/Sum1' */
  rtb_Switch5_aj -= rtb_Switch2_c;

  /* Switch: '<S181>/Switch2' incorporates:
   *  Constant: '<S162>/Constant1'
   *  Constant: '<S162>/Constant3'
   *  RelationalOperator: '<S181>/LowerRelop1'
   *  RelationalOperator: '<S181>/UpperRelop'
   *  Switch: '<S181>/Switch'
   */
  if (rtb_Switch5_aj > AA_Position_Front_Inc_RL) {
    rtb_Switch5_aj = AA_Position_Front_Inc_RL;
  } else if (rtb_Switch5_aj < AA_Position_Front_Dec_RL) {
    /* Switch: '<S181>/Switch' incorporates:
     *  Constant: '<S162>/Constant1'
     */
    rtb_Switch5_aj = AA_Position_Front_Dec_RL;
  }

  /* End of Switch: '<S181>/Switch2' */

  /* Sum: '<S180>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch5_aj + rtb_Switch2_c;

  /* Sum: '<S158>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S158>/Gain1' */
  rtb_Switch5_aj = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S158>/Switch' incorporates:
   *  Constant: '<S158>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S158>/Switch1' incorporates:
     *  Constant: '<S158>/Constant3'
     *  UnitDelay: '<S169>/Delay Input1'
     *
     * Block description for '<S169>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      y = AA_Integral_IC;
    } else {
      /* Sum: '<S158>/Sum2' incorporates:
       *  Gain: '<S158>/Gain2'
       *  UnitDelay: '<S158>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S158>/Subtract' incorporates:
       *  Constant: '<S158>/Constant'
       */
      y = AA_TC_UL - rtb_Switch5_aj;

      /* Switch: '<S170>/Switch2' incorporates:
       *  RelationalOperator: '<S170>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > y)) {
        /* Sum: '<S158>/Subtract1' incorporates:
         *  Constant: '<S158>/Constant1'
         */
        y = AA_TC_LL - rtb_Switch5_aj;

        /* Switch: '<S170>/Switch' incorporates:
         *  RelationalOperator: '<S170>/UpperRelop'
         */
        if (!(rtb_Switch2_c < y)) {
          y = rtb_Switch2_c;
        }

        /* End of Switch: '<S170>/Switch' */
      }

      /* End of Switch: '<S170>/Switch2' */

      /* Saturate: '<S158>/Saturation1' */
      if (y > AA_Integral_UL) {
        y = AA_Integral_UL;
      } else if (y < AA_Integral_LL) {
        y = AA_Integral_LL;
      }

      /* End of Saturate: '<S158>/Saturation1' */
    }

    /* End of Switch: '<S158>/Switch1' */
  } else {
    y = 0.0;
  }

  /* End of Switch: '<S158>/Switch' */

  /* Switch: '<S14>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S158>/Add1' */
    rtb_Add_k5 = rtb_Switch5_aj + y;

    /* Saturate: '<S158>/Saturation2' */
    if (rtb_Add_k5 > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_k5 < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Add_k5;
    }

    /* End of Saturate: '<S158>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch2' */

  /* Switch: '<S179>/Init' incorporates:
   *  UnitDelay: '<S179>/FixPt Unit Delay1'
   *  UnitDelay: '<S179>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch5_aj = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_Switch5_aj = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S179>/Init' */

  /* Sum: '<S177>/Sum1' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_BS_Length - rtb_Switch5_aj;

  /* Switch: '<S178>/Switch2' incorporates:
   *  Constant: '<S161>/Constant1'
   *  Constant: '<S161>/Constant3'
   *  RelationalOperator: '<S178>/LowerRelop1'
   *  RelationalOperator: '<S178>/UpperRelop'
   *  Switch: '<S178>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S178>/Switch' incorporates:
     *  Constant: '<S161>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S178>/Switch2' */

  /* Sum: '<S177>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch5_aj;

  /* Sum: '<S155>/Sum' */
  cos_alpha = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S164>/Sum1' incorporates:
   *  Constant: '<S155>/Constant2'
   *  Product: '<S164>/Product'
   *  Sum: '<S164>/Sum'
   *  UnitDelay: '<S164>/Unit Delay1'
   */
  rtb_Switch5_aj = ((cos_alpha - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                    BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S155>/Product' incorporates:
   *  Constant: '<S155>/Constant3'
   */
  rtb_Switch2_c = rtb_Switch5_aj * BS_Deriv_Gain;

  /* Switch: '<S14>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S163>/Diff' incorporates:
     *  UnitDelay: '<S163>/UD'
     *
     * Block description for '<S163>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S163>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_k5 = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S155>/Saturation' */
    if (rtb_Add_k5 > BS_Deriv_UL) {
      rtb_Add_k5 = BS_Deriv_UL;
    } else if (rtb_Add_k5 < BS_Deriv_LL) {
      rtb_Add_k5 = BS_Deriv_LL;
    }

    /* Sum: '<S155>/Add' incorporates:
     *  Gain: '<S155>/Gain1'
     *  Saturate: '<S155>/Saturation'
     */
    rtb_Add_k5 += BS_Prop_Gain * cos_alpha;

    /* Saturate: '<S155>/Saturation2' */
    if (rtb_Add_k5 > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (rtb_Add_k5 < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = rtb_Add_k5;
    }

    /* End of Saturate: '<S155>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch3' */

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

  /* Gain: '<S7>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  cos_alpha = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Sum: '<S77>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  sin_alpha = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S77>/Add' incorporates:
   *  Gain: '<S77>/Gain'
   *  Gain: '<S77>/Gain1'
   */
  rtb_Add_k5 = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * sin_alpha);

  /* Switch: '<S77>/Switch' incorporates:
   *  Constant: '<S77>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S77>/Sum2' incorporates:
     *  Gain: '<S77>/Gain2'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    sin_alpha = (Shooter_Motor_Control_I * sin_alpha) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S77>/Subtract' incorporates:
     *  Constant: '<S77>/Constant'
     */
    rtb_Switch2_id = 1.0 - rtb_Add_k5;

    /* Switch: '<S79>/Switch2' incorporates:
     *  Constant: '<S77>/Constant'
     *  RelationalOperator: '<S79>/LowerRelop1'
     *  Sum: '<S77>/Subtract'
     */
    if (!(sin_alpha > (1.0 - rtb_Add_k5))) {
      /* Sum: '<S77>/Subtract1' incorporates:
       *  Constant: '<S77>/Constant1'
       */
      rtb_Switch2_id = -1.0 - rtb_Add_k5;

      /* Switch: '<S79>/Switch' incorporates:
       *  Constant: '<S77>/Constant1'
       *  RelationalOperator: '<S79>/UpperRelop'
       *  Sum: '<S77>/Subtract1'
       */
      if (!(sin_alpha < (-1.0 - rtb_Add_k5))) {
        rtb_Switch2_id = sin_alpha;
      }

      /* End of Switch: '<S79>/Switch' */
    }

    /* End of Switch: '<S79>/Switch2' */

    /* Saturate: '<S77>/Saturation1' */
    if (rtb_Switch2_id > Shooter_Motor_Control_I_UL) {
      sin_alpha = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_id < Shooter_Motor_Control_I_LL) {
      sin_alpha = Shooter_Motor_Control_I_LL;
    } else {
      sin_alpha = rtb_Switch2_id;
    }

    /* End of Saturate: '<S77>/Saturation1' */
  } else {
    sin_alpha = 0.0;
  }

  /* End of Switch: '<S77>/Switch' */

  /* Switch: '<S8>/Switch4' incorporates:
   *  Switch: '<S8>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S8>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -cos_alpha;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S77>/Add1' incorporates:
     *  Switch: '<S8>/Switch'
     */
    rtb_Add_k5 += sin_alpha;

    /* Saturate: '<S77>/Saturation2' incorporates:
     *  Switch: '<S8>/Switch'
     */
    if (rtb_Add_k5 > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_k5 < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Add_k5;
    }

    /* End of Saturate: '<S77>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* Sum: '<S78>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_id = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S78>/Add' incorporates:
   *  Gain: '<S78>/Gain'
   *  Gain: '<S78>/Gain1'
   */
  rtb_Add_k5 = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_id);

  /* Switch: '<S78>/Switch' incorporates:
   *  Constant: '<S78>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S78>/Sum2' incorporates:
     *  Gain: '<S78>/Gain2'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_Switch2_id = (Shooter_Motor_Control_I * rtb_Switch2_id) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S78>/Subtract' incorporates:
     *  Constant: '<S78>/Constant'
     */
    rtb_Switch2_h = 1.0 - rtb_Add_k5;

    /* Switch: '<S80>/Switch2' incorporates:
     *  Constant: '<S78>/Constant'
     *  RelationalOperator: '<S80>/LowerRelop1'
     *  Sum: '<S78>/Subtract'
     */
    if (!(rtb_Switch2_id > (1.0 - rtb_Add_k5))) {
      /* Sum: '<S78>/Subtract1' incorporates:
       *  Constant: '<S78>/Constant1'
       */
      rtb_Switch2_h = -1.0 - rtb_Add_k5;

      /* Switch: '<S80>/Switch' incorporates:
       *  Constant: '<S78>/Constant1'
       *  RelationalOperator: '<S80>/UpperRelop'
       *  Sum: '<S78>/Subtract1'
       */
      if (!(rtb_Switch2_id < (-1.0 - rtb_Add_k5))) {
        rtb_Switch2_h = rtb_Switch2_id;
      }

      /* End of Switch: '<S80>/Switch' */
    }

    /* End of Switch: '<S80>/Switch2' */

    /* Saturate: '<S78>/Saturation1' */
    if (rtb_Switch2_h > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_id = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_h < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_id = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_id = rtb_Switch2_h;
    }

    /* End of Saturate: '<S78>/Saturation1' */
  } else {
    rtb_Switch2_id = 0.0;
  }

  /* End of Switch: '<S78>/Switch' */

  /* Switch: '<S8>/Switch5' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = cos_alpha;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S78>/Add1' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    rtb_Add_k5 += rtb_Switch2_id;

    /* Saturate: '<S78>/Saturation2' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    if (rtb_Add_k5 > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_k5 < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Add_k5;
    }

    /* End of Saturate: '<S78>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S8>/Switch5' */

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

  /* Gain: '<S144>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S145>/Compare' incorporates:
   *  Constant: '<S144>/Constant'
   *  Constant: '<S145>/Constant'
   */
  rtb_AT_Tag_13_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S144>/Switch1' incorporates:
   *  UnitDelay: '<S144>/Unit Delay1'
   */
  if (rtb_AT_Tag_13_Active) {
    cos_alpha = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    cos_alpha = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S144>/Switch1' */

  /* Sum: '<S144>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - cos_alpha;

  /* Gain: '<S144>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S144>/Switch' incorporates:
   *  UnitDelay: '<S144>/Unit Delay'
   */
  if (rtb_AT_Tag_13_Active) {
    rtb_Add_k5 = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Add_k5 = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S144>/Switch' */

  /* Sum: '<S144>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Add_k5;

  /* Outport: '<Root>/Chain_DutyCycle' */
  Code_Gen_Model_Y.Chain_DutyCycle = rtb_Chain_DutyCycle;

  /* Update for UnitDelay: '<S136>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S136>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S137>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S137>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S138>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S138>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S139>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' incorporates:
     *  Bias: '<S211>/Bias'
     *  Merge: '<S185>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' incorporates:
     *  Bias: '<S211>/Bias'
     *  Merge: '<S185>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S81>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S101>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S81>/A'
   *  Delay: '<S81>/MemoryX'
   */
  rtb_Chain_DutyCycle = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_h = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S81>/MemoryX' incorporates:
   *  Constant: '<S81>/B'
   *  Product: '<S101>/A[k]*xhat[k|k-1]'
   *  Product: '<S101>/B[k]*u[k]'
   *  Sum: '<S101>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Chain_DutyCycle) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_h) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S135>/UD'
   *
   * Block description for '<S135>/UD':
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

  /* Update for UnitDelay: '<S64>/Delay Input1'
   *
   * Block description for '<S64>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_OR7;

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_o = Code_Gen_Model_B.Note_State_ID;

  /* Update for UnitDelay: '<S348>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S348>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S362>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Gain1;

  /* Update for UnitDelay: '<S361>/UD'
   *
   * Block description for '<S361>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Merge1;

  /* Update for UnitDelay: '<S359>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S357>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S357>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S324>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S323>/UD'
   *
   * Block description for '<S323>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S317>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2;

  /* Update for UnitDelay: '<S335>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch4_g;

  /* Update for UnitDelay: '<S334>/UD'
   *
   * Block description for '<S334>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S320>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Switch2_o;

  /* Update for UnitDelay: '<S261>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S260>/UD'
   *
   * Block description for '<S260>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Steer_Joystick_X_Rel_Mod;

  /* Update for UnitDelay: '<S254>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S272>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_oh;

  /* Update for UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_o;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S282>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_fn;

  /* Update for UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a1;

  /* Update for UnitDelay: '<S275>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_m;

  /* Update for UnitDelay: '<S293>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S278>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S303>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S302>/UD'
   *
   * Block description for '<S302>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S296>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract1_f5;

  /* Update for UnitDelay: '<S314>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S313>/UD'
   *
   * Block description for '<S313>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Hypot_er;

  /* Update for UnitDelay: '<S299>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_p5;

  /* Update for UnitDelay: '<S72>/Delay Input1'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay_e;

  /* Update for UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S75>/Delay Input1'
   *
   * Block description for '<S75>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S76>/Delay Input1'
   *
   * Block description for '<S76>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S176>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S176>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S156>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Add_dl;

  /* Update for UnitDelay: '<S165>/Delay Input1'
   *
   * Block description for '<S165>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S167>/Delay Input1'
   *
   * Block description for '<S167>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S173>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S173>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S157>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = d;

  /* Update for UnitDelay: '<S169>/Delay Input1'
   *
   * Block description for '<S169>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S182>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S182>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S158>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = y;

  /* Update for UnitDelay: '<S179>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S179>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S164>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch5_aj;

  /* Update for UnitDelay: '<S163>/UD'
   *
   * Block description for '<S163>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S77>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = sin_alpha;

  /* Update for UnitDelay: '<S78>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch2_id;

  /* Update for UnitDelay: '<S144>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = cos_alpha;

  /* Update for UnitDelay: '<S144>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = rtb_Add_k5;
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

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S15>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S81>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S348>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S357>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S20>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S176>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S173>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S182>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S179>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S27>/Chart' */
    Code_Gen_Model_B.CurrentPriorityIndex = 1.0;

    /* End of SystemInitialize for SubSystem: '<S1>/Autonomous' */

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S417>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S189>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S185>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S189>/Robot_Index_Is_Valid' */
    /* Start for If: '<S192>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S192>/Circle_Check_Valid' */
    /* Start for If: '<S194>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S192>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S189>/Robot_Index_Is_Valid' */
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

/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.171
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Mar 19 23:12:02 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "Code_Gen_Model_private.h"
#include <string.h>
#include "rt_defines.h"
#include <float.h>

/* Named constants for Chart: '<S10>/Chart_Intake_and_Shooter' */
#define Co_IN_Note_Speaker_Score_Intake ((uint8_T)8U)
#define Co_IN_Note_Speaker_Score_SpinUp ((uint8_T)9U)
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)10U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)14U)
#define Code_Gen_Mod_IN_Extra_Run_Time2 ((uint8_T)1U)
#define Code_Gen_Mod_IN_Extra_Run_Time4 ((uint8_T)2U)
#define Code_Gen_Mod_IN_Extra_Run_Time5 ((uint8_T)3U)
#define Code_Gen_Mod_IN_Extra_Run_Time6 ((uint8_T)4U)
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Mode_IN_Reverse_Intake ((uint8_T)11U)
#define Code_Gen_Model_IN_Note_Pickup  ((uint8_T)7U)
#define Code_Gen_Model_IN_Store_Servo  ((uint8_T)13U)
#define Code_Gen_Model_Servo_Down      (false)
#define Code_Gen_Model_Servo_Up        (true)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)5U)
#define Code_IN_Note_Intake_AND_Shooter ((uint8_T)6U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)12U)

/* Named constants for Chart: '<S15>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S16>/Chart_Shooter_Position' */
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

/* Named constants for Chart: '<S29>/Chart' */
#define Code_Gen_IN_CheckForRobotOrNote ((uint8_T)2U)
#define Code_Gen_IN_PathToPickUpWODetec ((uint8_T)16U)
#define Code_Gen_Model_IN_AngleArms    ((uint8_T)1U)
#define Code_Gen_Model_IN_DriveBack    ((uint8_T)3U)
#define Code_Gen_Model_IN_DriveOut     ((uint8_T)4U)
#define Code_Gen_Model_IN_End          ((uint8_T)5U)
#define Code_Gen_Model_IN_MoveArms     ((uint8_T)6U)
#define Code_Gen_Model_IN_Move_To_Shoot ((uint8_T)7U)
#define Code_Gen_Model_IN_Note6        ((uint8_T)8U)
#define Code_Gen_Model_IN_Note6_trans  ((uint8_T)9U)
#define Code_Gen_Model_IN_Note7        ((uint8_T)10U)
#define Code_Gen_Model_IN_Note7_trans  ((uint8_T)11U)
#define Code_Gen_Model_IN_Note8        ((uint8_T)12U)
#define Code_Gen_Model_IN_Note8_trans  ((uint8_T)13U)
#define Code_Gen_Model_IN_PathPicker   ((uint8_T)14U)
#define Code_Gen_Model_IN_PathToPickUp ((uint8_T)15U)
#define Code_Gen_Model_IN_PathToShoot  ((uint8_T)17U)
#define Code_Gen_Model_IN_PathToShoot1 ((uint8_T)1U)
#define Code_Gen_Model_IN_RunIntake    ((uint8_T)19U)
#define Code_Gen_Model_IN_RunIntake1   ((uint8_T)20U)
#define Code_Gen_Model_IN_Shoot        ((uint8_T)21U)
#define Code_Gen_Model_IN_Shoot1       ((uint8_T)2U)
#define Code_Gen_Model_IN_ShootAgain   ((uint8_T)22U)
#define Code_Gen_Model_IN_ShootNote    ((uint8_T)23U)
#define Code_Gen_Model_IN_ShootWODetec ((uint8_T)24U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)25U)
#define Code_Gen_Model_t_sample        (0.02)
#define Code_Gen__IN_PathToShootWODetec ((uint8_T)18U)

/* Exported block parameters */
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S168>/Gain2'
                                        *   '<S169>/Gain2'
                                        *   '<S170>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S168>/Constant3'
                                        *   '<S169>/Constant3'
                                        *   '<S170>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S168>/Saturation1'
                                        *   '<S169>/Saturation1'
                                        *   '<S170>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S168>/Saturation1'
                                        *   '<S169>/Saturation1'
                                        *   '<S170>/Saturation1'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S168>/Gain1'
                                        *   '<S169>/Gain1'
                                        *   '<S170>/Gain1'
                                        */
real_T AA_TC_LL = -0.6;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S168>/Constant1'
                                        *   '<S168>/Saturation2'
                                        *   '<S169>/Constant1'
                                        *   '<S169>/Saturation2'
                                        *   '<S170>/Constant1'
                                        *   '<S170>/Saturation2'
                                        */
real_T AA_TC_UL = 0.6;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S168>/Constant'
                                        *   '<S168>/Saturation2'
                                        *   '<S169>/Constant'
                                        *   '<S169>/Saturation2'
                                        *   '<S170>/Constant'
                                        *   '<S170>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = -3.0;    /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S399>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = -3.0;    /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S399>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = -3.0;    /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S399>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = -3.0;    /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S399>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = -3.0;    /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S399>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = -3.0;    /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S399>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S7>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S7>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = -3.0;     /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S399>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = -3.0;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S399>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S7>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.6667;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S399>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.3934;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S399>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.6667;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S399>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.8182;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S399>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 9.6962;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S399>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S399>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.8448;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S399>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S399>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 3.8793;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S399>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.8182;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S399>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 3.8793;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S399>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.3934;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S399>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S399>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.6802;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S399>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S399>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.6802;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S399>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S402>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = -0.0006;  /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S401>/Constant17'
                                        */
real_T Amp_Angle = -50.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 650.0;                /* Variable: Amp_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 1000.0;            /* Variable: Amp_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Auto_ID = 1.0;                  /* Variable: Auto_ID
                                        * Referenced by: '<Root>/Constant1'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S167>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S167>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S167>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S167>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -30.0;     /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S171>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 30.0;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S171>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S167>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S167>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S167>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S413>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S409>/Constant'
                                        *   '<S409>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S413>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S409>/Constant1'
                                        */
real_T Climber_DutyCycle_Neg = -1.0;   /* Variable: Climber_DutyCycle_Neg
                                        * Referenced by: '<S4>/Constant3'
                                        */
real_T Climber_DutyCycle_Pos = 0.4;    /* Variable: Climber_DutyCycle_Pos
                                        * Referenced by: '<S4>/Constant2'
                                        */
real_T Dist_AA_Cal_Tol = 5.0;          /* Variable: Dist_AA_Cal_Tol
                                        * Referenced by:
                                        *   '<S22>/Calibration_Tolerance'
                                        *   '<S23>/Calibration_Tolerance'
                                        *   '<S25>/Calibration_Tolerance'
                                        */
real_T Dist_BS_Cal_Tol = 1.0;          /* Variable: Dist_BS_Cal_Tol
                                        * Referenced by: '<S24>/Calibration_Tolerance'
                                        */
real_T Dist_Per_Rev_Back_Lower = 2.2166;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S22>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 2.2166;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S23>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.35278;/* Variable: Dist_Per_Rev_Ball_Screw
                                          * Referenced by: '<S24>/Rev_2_Dist'
                                          */
real_T Dist_Per_Rev_Front = 2.2166;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S25>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Value_Back_Lower = 79.375;/* Variable: Dist_Reset_Value_Back_Lower
                                             * Referenced by:
                                             *   '<S22>/Dist_Reset_Value'
                                             *   '<S22>/Unit Delay1'
                                             */
real_T Dist_Reset_Value_Back_Upper = 19.05;/* Variable: Dist_Reset_Value_Back_Upper
                                            * Referenced by:
                                            *   '<S23>/Dist_Reset_Value'
                                            *   '<S23>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Ball_Screw = 279.4;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by:
                                            *   '<S24>/Dist_Reset_Value'
                                            *   '<S24>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Front = 6.35;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S25>/Dist_Reset_Value'
                                        *   '<S25>/Unit Delay1'
                                        */
real_T Distance_FL_y = 0.26194;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S347>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S263>/Constant3'
                                        *   '<S284>/Constant3'
                                        *   '<S305>/Constant3'
                                        *   '<S326>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S263>/Constant2'
                                   *   '<S284>/Constant2'
                                   *   '<S305>/Constant2'
                                   *   '<S326>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S263>/Saturation'
                                        *   '<S284>/Saturation'
                                        *   '<S305>/Saturation'
                                        *   '<S326>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S263>/Saturation'
                                        *   '<S284>/Saturation'
                                        *   '<S305>/Saturation'
                                        *   '<S326>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S263>/Gain'
                                            *   '<S284>/Gain'
                                            *   '<S305>/Gain'
                                            *   '<S326>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S263>/Gain2'
                                        *   '<S284>/Gain2'
                                        *   '<S305>/Gain2'
                                        *   '<S326>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S263>/Saturation1'
                                        *   '<S284>/Saturation1'
                                        *   '<S305>/Saturation1'
                                        *   '<S326>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S263>/Saturation1'
                                        *   '<S284>/Saturation1'
                                        *   '<S305>/Saturation1'
                                        *   '<S326>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S263>/Gain1'
                                        *   '<S284>/Gain1'
                                        *   '<S305>/Gain1'
                                        *   '<S326>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S268>/Constant'
                            *   '<S289>/Constant'
                            *   '<S310>/Constant'
                            *   '<S331>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S28>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S163>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S163>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S39>/Constant'
                                           *   '<S41>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S40>/Constant'
                                          *   '<S42>/Constant'
                                          */
real_T Gyro_Calibration_Value = 0.0;   /* Variable: Gyro_Calibration_Value
                                        * Referenced by: '<S8>/Unit Delay1'
                                        */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S12>/Constant1'
                                        *   '<S12>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S12>/Constant'
                                          */
real_T LoadShooter_Angle = 45.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 280.0;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 600.0;     /* Variable: LoadShooter_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 200.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 1.0;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 1.0;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.0;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S14>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S155>/Constant'
                                        */
real_T RL_Back_Amp_to_Stage = 10.0;    /* Variable: RL_Back_Amp_to_Stage
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Load_to_Amp = 10.0;     /* Variable: RL_Back_Load_to_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Load_to_Stage = 4.0;    /* Variable: RL_Back_Load_to_Stage
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Speaker_Final_to_Speaker_Partial = 5.0;
                           /* Variable: RL_Back_Speaker_Final_to_Speaker_Partial
                            * Referenced by: '<S16>/Chart_Shooter_Position'
                            */
real_T RL_Back_Speaker_Partial_to_Speaker_Final = 3.0;
                           /* Variable: RL_Back_Speaker_Partial_to_Speaker_Final
                            * Referenced by: '<S16>/Chart_Shooter_Position'
                            */
real_T RL_Back_Speaker_Partial_to_Stage = 10.0;
                                   /* Variable: RL_Back_Speaker_Partial_to_Stage
                                    * Referenced by: '<S16>/Chart_Shooter_Position'
                                    */
real_T RL_Back_Stage_to_Amp = 6.0;     /* Variable: RL_Back_Stage_to_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Stage_to_Load = 7.0;    /* Variable: RL_Back_Stage_to_Load
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Stage_to_Speaker_Partial = 6.0;
                                   /* Variable: RL_Back_Stage_to_Speaker_Partial
                                    * Referenced by: '<S16>/Chart_Shooter_Position'
                                    */
real_T RL_Back_Stage_to_Trap = 1.0;    /* Variable: RL_Back_Stage_to_Trap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Trap_to_Stage = 1.0;    /* Variable: RL_Back_Trap_to_Stage
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Load_Amp = 0.42;    /* Variable: RL_FB_Ratio_Load_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Speaker_Final = 1.8;/* Variable: RL_FB_Ratio_Speaker_Final
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Speaker_Partial = 1.33;/* Variable: RL_FB_Ratio_Speaker_Partial
                                           * Referenced by: '<S16>/Chart_Shooter_Position'
                                           */
real_T RL_FB_Ratio_Stage_Amp = 0.72;   /* Variable: RL_FB_Ratio_Stage_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Stage_Load = 1.61;  /* Variable: RL_FB_Ratio_Stage_Load
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Stage_Trap = 1.15;  /* Variable: RL_FB_Ratio_Stage_Trap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Servo_Store_Gain = 0.0071429;   /* Variable: Servo_Store_Gain
                                        * Referenced by: '<S10>/Gain'
                                        */
real_T Servo_Store_Offset = 0.65;      /* Variable: Servo_Store_Offset
                                        * Referenced by: '<S10>/Constant1'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S88>/Gain'
                                           *   '<S89>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S88>/Gain2'
                                         *   '<S89>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S88>/Saturation1'
                                          *   '<S89>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S88>/Saturation1'
                                         *   '<S89>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S88>/Gain1'
                                         *   '<S89>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 500.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                      */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S248>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S248>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S195>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S208>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S248>/Constant3'
                                     */
real_T Stage_Angle = 16.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 241.3;              /* Variable: Stage_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 533.4;           /* Variable: Stage_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S368>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S368>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S368>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S368>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S367>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S368>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S368>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S368>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S368>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -3.0;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S368>/Constant1'
                                   *   '<S368>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 3.0;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S368>/Constant'
                                   *   '<S368>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S358>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S358>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S358>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 1.0;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S358>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -10.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S358>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 10.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S358>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S266>/Constant3'
                                        *   '<S287>/Constant3'
                                        *   '<S308>/Constant3'
                                        *   '<S329>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S266>/Constant2'
                                *   '<S287>/Constant2'
                                *   '<S308>/Constant2'
                                *   '<S329>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S266>/Saturation'
                                           *   '<S287>/Saturation'
                                           *   '<S308>/Saturation'
                                           *   '<S329>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S266>/Saturation'
                                          *   '<S287>/Saturation'
                                          *   '<S308>/Saturation'
                                          *   '<S329>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S266>/Gain2'
                                         *   '<S287>/Gain2'
                                         *   '<S308>/Gain2'
                                         *   '<S329>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S266>/Saturation1'
                                             *   '<S287>/Saturation1'
                                             *   '<S308>/Saturation1'
                                             *   '<S329>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S266>/Saturation1'
                                            *   '<S287>/Saturation1'
                                            *   '<S308>/Saturation1'
                                            *   '<S329>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S266>/Gain1'
                                        *   '<S287>/Gain1'
                                        *   '<S308>/Gain1'
                                        *   '<S329>/Gain1'
                                        */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S401>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S401>/Constant1'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S10>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S10>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 0.0;       /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S16>/Constant26'
                                        */
real_T TEST_Speaker_Distance = 0.0;    /* Variable: TEST_Speaker_Distance
                                        * Referenced by: '<S7>/Constant4'
                                        */
real_T TEST_Speaker_Gap = 0.0;         /* Variable: TEST_Speaker_Gap
                                        * Referenced by: '<S16>/Constant27'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S16>/Constant25'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S20>/Constant5'
                                      */
real_T Test_DC_Gain_BackLower = 0.3;   /* Variable: Test_DC_Gain_BackLower
                                        * Referenced by: '<S9>/Gain2'
                                        */
real_T Test_DC_Gain_BackUpper = 0.3;   /* Variable: Test_DC_Gain_BackUpper
                                        * Referenced by: '<S9>/Gain'
                                        */
real_T Test_DC_Gain_BallScrew = 0.2;   /* Variable: Test_DC_Gain_BallScrew
                                        * Referenced by: '<S9>/Gain3'
                                        */
real_T Test_DC_Gain_Front = 0.3;       /* Variable: Test_DC_Gain_Front
                                        * Referenced by: '<S9>/Gain1'
                                        */
real_T Test_DC_Gain_Intake = -1.0;     /* Variable: Test_DC_Gain_Intake
                                        * Referenced by: '<S9>/Gain4'
                                        */
real_T Test_DC_Gain_Shooter = 1.0;     /* Variable: Test_DC_Gain_Shooter
                                        * Referenced by: '<S9>/Gain5'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 12.7;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S346>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S346>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S346>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S346>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S346>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S346>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S402>/Gain'
                                        */
real_T Trap_Angle = 30.0;              /* Variable: Trap_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 460.0;               /* Variable: Trap_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 845.0;            /* Variable: Trap_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
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
static void Code_Gen_Mo_CheckForRobotOrNote(void);
static void Code_Gen_Model_Note6_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e);
static void Code_Gen_Model_Note8_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e);
static void Code_Gen_Model_PathPicker(void);
static void Code_Gen_Model_PathToPickUp(void);
static void Code_Gen_Model_PathToShoot(void);
static void Code_Gen_Model_RunIntake(void);
static void Code_Gen_Model_Shoot(void);
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  boolean_T *FixPtRelationalOperator_c);

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

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Mo_CheckForRobotOrNote(void)
{
  real_T tmp;

  /* Constant: '<Root>/Constant' */
  tmp = Code_Gen_Model_ConstP.Constant_Value_c[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if ((tmp > 5.0) && (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (tmp < 6.0) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_PathToPickUp;
    Code_Gen_Model_B.SplineEnable = 1.0;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }

  /* End of Constant: '<Root>/Constant' */
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_Note6_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e)
{
  if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note8_trans;
  } else if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
  } else if (!(*UnitDelay_e)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (!(*UnitDelay)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
  }
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_Note8_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e)
{
  if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
  } else if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6_trans;
  } else if (!(*UnitDelay_e)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note8;
    Code_Gen_Model_DW.is_Note8 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (!(*UnitDelay)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
  }
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_PathPicker(void)
{
  Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_MoveArms;
  Code_Gen_Model_B.ArmStateRequest = 1.0;
  Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_PathToPickUp(void)
{
  if (Code_Gen_Model_DW.Timer < 16.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_IN_CheckForRobotOrNote;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  }
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_PathToShoot(void)
{
  real_T tmp;

  /* Constant: '<Root>/Constant' */
  tmp = Code_Gen_Model_ConstP.Constant_Value_c[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if (tmp < 6.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Shoot;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  } else if (tmp > 5.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  }

  /* End of Constant: '<Root>/Constant' */
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_RunIntake(void)
{
  /* Constant: '<Root>/Constant' */
  if ((Code_Gen_Model_ConstP.Constant_Value_c[((int32_T)
        Code_Gen_Model_B.CurrentPriorityIndex) - 1] < 6.0) &&
      (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  }

  /* End of Constant: '<Root>/Constant' */
}

/* Function for Chart: '<S29>/Chart' */
static void Code_Gen_Model_Shoot(void)
{
  real_T tmp;

  /* Constant: '<Root>/Constant' */
  tmp = Code_Gen_Model_ConstP.Constant_Value_c[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if (tmp < 6.0) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_PathToPickUp;
    Code_Gen_Model_B.SplineEnable = 1.0;
  } else if (tmp > 5.0) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }

  /* End of Constant: '<Root>/Constant' */
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

/* Function for Chart: '<S10>/Chart_Intake_and_Shooter' */
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  boolean_T *FixPtRelationalOperator_c)
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
    Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
  } else if (*FixPtRelationalOperator_n) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
    Code_Gen_Model_B.Note_State_ID = 2.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Up;
    Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
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
    Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = -1.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 1.0;

    /* Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
       Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker;
       du: Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
       Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker; */
  } else if (*FixPtRelationalOperator_c) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mode_IN_Reverse_Intake;
    Code_Gen_Model_B.Note_State_ID = 6.1;
    Code_Gen_Model_B.Intake_Motor_DC = 1.0;
    Code_Gen_Model_DW.timer = 0.02;
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
  real_T rtb_Spline_Ref_Poses[40];
  real_T rtb_Assignment[24];
  real_T rtb_Selector4[24];
  real_T rtb_Ref_Poses[20];
  real_T rtb_thetay_n[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T Rot_Mat_idx_0;
  real_T Rot_Mat_idx_2;
  real_T Top_Front_Pivot_y;
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_de;
  real_T rtb_Add_iy;
  real_T rtb_Add_k5;
  real_T rtb_Add_ko;
  real_T rtb_Add_nz;
  real_T rtb_Climber_Cmd_Direction;
  real_T rtb_Gyro_Angle_Adjustment;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_o;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_Modulation_Drv;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_POSEexponentialmatrixfori_2;
  real_T rtb_Product_d;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Subtract1_h2;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_jk;
  real_T rtb_Subtract1_n;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_cg;
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Switch2_p2;
  real_T rtb_Switch4_g;
  real_T rtb_Switch6;
  real_T rtb_Switch8;
  real_T rtb_UnitDelay_kzl;
  real_T rtb_rx_j;
  real_T rtb_thetay;
  real_T rtb_thetay_a;
  real_T rtb_thetay_c;
  real_T rtb_thetay_o;
  real_T y;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s220_iter;
  uint16_T s245_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  uint8_T rtb_GameState;
  boolean_T UnitDelay;
  boolean_T UnitDelay_e;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T rtb_AND;
  boolean_T rtb_AT_Tag_11_Active;
  boolean_T rtb_AT_Tag_12_Active;
  boolean_T rtb_AT_Tag_13_Active;
  boolean_T rtb_AT_Tag_14_Active;
  boolean_T rtb_AT_Tag_15_Active;
  boolean_T rtb_AT_Tag_16_Active;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_AT_Tag_6_Active;
  boolean_T rtb_Compare_at;
  boolean_T rtb_Compare_jq;
  boolean_T rtb_OR7;
  boolean_T rtb_Relative_Translation_Flag;

  /* Switch: '<S9>/Switch9' incorporates:
   *  Constant: '<S56>/Constant'
   *  Constant: '<S57>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/Joystick_Left_B13'
   *  Inport: '<Root>/Joystick_Left_B14'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B13'
   *  Inport: '<Root>/Joystick_Right_B14'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  Logic: '<S9>/OR4'
   *  Logic: '<S9>/OR6'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  Switch: '<S9>/Switch10'
   */
  if ((((Code_Gen_Model_U.Joystick_Left_B7 != 0.0) ||
        (Code_Gen_Model_U.Joystick_Left_B13 != 0.0)) ||
       (Code_Gen_Model_U.Joystick_Right_B7 != 0.0)) ||
      (Code_Gen_Model_U.Joystick_Right_B13 != 0.0)) {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Constant: '<S9>/Constant10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 1.0;
  } else if ((((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
               (Code_Gen_Model_U.Joystick_Left_B14 != 0.0)) ||
              (Code_Gen_Model_U.Joystick_Right_B8 != 0.0)) ||
             (Code_Gen_Model_U.Joystick_Right_B14 != 0.0)) {
    /* Switch: '<S9>/Switch10' incorporates:
     *  Constant: '<S9>/Constant11'
     *  Switch: '<S9>/Switch9'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = -1.0;
  } else {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Constant: '<S9>/Constant12'
     *  Switch: '<S9>/Switch10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 0.0;
  }

  /* End of Switch: '<S9>/Switch9' */

  /* SignalConversion: '<S9>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S9>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S9>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S9>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S9>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S48>/Constant'
   *  Constant: '<S60>/Constant'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S68>/Constant'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Inport: '<Root>/Gamepad_B4_Y'
   *  Inport: '<Root>/Gamepad_Back'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S9>/OR1'
   *  Logic: '<S9>/OR2'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch11'
   *  Switch: '<S9>/Switch12'
   *  Switch: '<S9>/Switch2'
   *  Switch: '<S9>/Switch3'
   */
  if (Code_Gen_Model_U.Joystick_Right_B1 != 0.0) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_B4_Y != 0.0) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Switch: '<S9>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S9>/Constant3'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else if (Code_Gen_Model_U.Gamepad_B1_A != 0.0) {
    /* Switch: '<S9>/Switch11' incorporates:
     *  Constant: '<S9>/Constant13'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 6.0;
  } else if (Code_Gen_Model_U.Gamepad_Back != 0.0) {
    /* Switch: '<S9>/Switch12' incorporates:
     *  Constant: '<S9>/Constant14'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch11'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 7.0;
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant4'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch11'
     *  Switch: '<S9>/Switch12'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 0.0;
  }

  /* End of Switch: '<S9>/Switch' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_thetay = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_thetay)) || (rtIsInf(rtb_thetay))) {
    rtb_thetay = 0.0;
  } else {
    rtb_thetay = fmod(rtb_thetay, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_thetay < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-rtb_thetay)))))) : ((int32_T)((uint8_T)rtb_thetay)));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Logic: '<S9>/OR7' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S45>/Constant'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  UnitDelay: '<S15>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S9>/Switch4' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S58>/Constant'
   *  Inport: '<Root>/Gamepad_Start'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Logic: '<S9>/OR'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S73>/FixPt Relational Operator'
   *  Switch: '<S9>/Switch5'
   *  Switch: '<S9>/Switch6'
   *  Switch: '<S9>/Switch7'
   *  Switch: '<S9>/Switch8'
   *  UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((((int32_T)rtb_OR7) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE)) ||
      (Code_Gen_Model_U.Gamepad_Stick_Left_Y <= Gamepad_Stick_Neg_Threshold)) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant6'
     *  Switch: '<S9>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <=
             Gamepad_Stick_Neg_Threshold) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     *  Switch: '<S9>/Switch5'
     *  Switch: '<S9>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant8'
     *  Switch: '<S9>/Switch5'
     *  Switch: '<S9>/Switch6'
     *  Switch: '<S9>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  } else if (Code_Gen_Model_U.Gamepad_Start != 0.0) {
    /* Switch: '<S9>/Switch8' incorporates:
     *  Constant: '<S9>/Constant9'
     *  Switch: '<S9>/Switch4'
     *  Switch: '<S9>/Switch5'
     *  Switch: '<S9>/Switch6'
     *  Switch: '<S9>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 4.0;
  }

  /* End of Switch: '<S9>/Switch4' */

  /* Reshape: '<S92>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
   *  Sum: '<S12>/Add'
   *  Sum: '<S12>/Add1'
   */
  rtb_Reshapey_idx_0 = (((((Code_Gen_Model_U.Photon_Est_Pose_X +
    Code_Gen_Model_DW.TappedDelay_X[0]) + Code_Gen_Model_DW.TappedDelay_X[1]) +
    Code_Gen_Model_DW.TappedDelay_X[2]) + Code_Gen_Model_DW.TappedDelay_X[3]) +
                        Code_Gen_Model_DW.TappedDelay_X[4]) +
    Code_Gen_Model_DW.TappedDelay_X[5];
  rtb_Reshapey_idx_1 = (((((Code_Gen_Model_U.Photon_Est_Pose_Y +
    Code_Gen_Model_DW.TappedDelay1_X[0]) + Code_Gen_Model_DW.TappedDelay1_X[1])
    + Code_Gen_Model_DW.TappedDelay1_X[2]) + Code_Gen_Model_DW.TappedDelay1_X[3])
                        + Code_Gen_Model_DW.TappedDelay1_X[4]) +
    Code_Gen_Model_DW.TappedDelay1_X[5];

  /* Delay: '<S92>/MemoryX' incorporates:
   *  Constant: '<S92>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S12>/AND' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S12>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S119>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S145>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S145>/Add1' incorporates:
     *  Constant: '<S92>/C'
     *  Delay: '<S92>/MemoryX'
     *  Product: '<S145>/Product'
     */
    rtb_Switch4_g = rtb_Reshapey_idx_0 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_UnitDelay_kzl = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S145>/Product2' incorporates:
     *  Constant: '<S93>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch4_g) +
      (5.9896845167210271E-17 * rtb_UnitDelay_kzl);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch4_g) +
      (0.095124921972503981 * rtb_UnitDelay_kzl);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S145>/Product2' incorporates:
     *  Outport: '<S145>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S119>/Enabled Subsystem' */

  /* Sum: '<S119>/Add' incorporates:
   *  Delay: '<S92>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S14>/Accumulator2' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S14>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S12>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S12>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S12>/Switch' */

  /* DiscreteIntegrator: '<S14>/Accumulator' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S14>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S12>/Switch1' incorporates:
   *  Constant: '<S12>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S12>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S12>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant4'
   *  Inport: '<Root>/AT_Tag_4_Found'
   *  Inport: '<Root>/AT_Tag_7_Found'
   *  Switch: '<S7>/Switch'
   *  Switch: '<S7>/Switch1'
   */
  if (TEST_Speaker_Distance != 0.0) {
    /* Switch: '<S7>/Switch2' */
    Code_Gen_Model_B.Distance_Speaker = TEST_Speaker_Distance;
  } else if (Code_Gen_Model_U.AT_Tag_4_Found != 0.0) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant1'
     *  Constant: '<S7>/Constant9'
     *  Math: '<S7>/Hypot'
     *  Sum: '<S7>/Subtract'
     *  Sum: '<S7>/Subtract1'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_4_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_4_Coordinate_Y);
  } else if (Code_Gen_Model_U.AT_Tag_7_Found != 0.0) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     *  Constant: '<S7>/Constant3'
     *  Math: '<S7>/Hypot1'
     *  Sum: '<S7>/Subtract2'
     *  Sum: '<S7>/Subtract3'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_7_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_7_Coordinate_Y);
  } else {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant'
     *  Switch: '<S7>/Switch'
     *  Switch: '<S7>/Switch1'
     */
    Code_Gen_Model_B.Distance_Speaker = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Sum: '<S8>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   *  UnitDelay: '<S8>/Unit Delay1'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Gain: '<S38>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  rtb_thetay = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_thetay)) || (rtIsInf(rtb_thetay))) {
    rtb_thetay = 0.0;
  } else {
    rtb_thetay = fmod(rtb_thetay, 4.294967296E+9);
  }

  switch ((rtb_thetay < 0.0) ? (-((int32_T)((uint32_T)(-rtb_thetay)))) :
          ((int32_T)((uint32_T)rtb_thetay))) {
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
     *  ActionPort: '<S6>/Action Port'
     */
    /* SignalConversion generated from: '<S6>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  SignalConversion generated from: '<S6>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S13>/Merge2' incorporates:
     *  Constant: '<S6>/Constant2'
     *  SignalConversion generated from: '<S6>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S13>/Merge3' incorporates:
     *  Constant: '<S6>/Constant3'
     *  SignalConversion generated from: '<S6>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S6>/Constant4'
     *  SignalConversion generated from: '<S6>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S6>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    UnitDelay = true;

    /* SignalConversion generated from: '<S6>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S6>/Constant6'
     */
    UnitDelay_e = true;

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S6>/Constant7'
     *  SignalConversion generated from: '<S6>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S6>/Constant9'
     *  SignalConversion generated from: '<S6>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S6>/Constant10'
     *  SignalConversion generated from: '<S6>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S13>/Merge11' incorporates:
     *  Constant: '<S6>/Constant11'
     *  SignalConversion generated from: '<S6>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* SignalConversion generated from: '<S6>/Climber_Cmd_Direction' incorporates:
     *  Constant: '<S6>/Constant17'
     */
    rtb_Climber_Cmd_Direction = 0.0;

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S6>/State_Request_Arm'
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
       *  Chart: '<S29>/Chart'
       */
      Code_Gen_Model_DW.is_active_c10_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note7 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note8 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
      Code_Gen_Model_B.SplineEnable = 0.0;
      Code_Gen_Model_B.CurrentPriorityIndex = 0.0;
      Code_Gen_Model_DW.Timer = 0.0;
      Code_Gen_Model_DW.CloseNoteCounter = 0.0;
      Code_Gen_Model_B.AutoState = 0.0;
      Code_Gen_Model_B.ArmStateRequest = 0.0;
      Code_Gen_Model_B.RelativeMoveForward = 0.0;

      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Chart: '<S29>/Chart' incorporates:
     *  UnitDelay: '<S11>/Unit Delay'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c10_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c10_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_PathPicker;
      Code_Gen_Model_DW.CloseNoteCounter = 0.0;
      Code_Gen_Model_B.RelativeMoveForward = 0.0;
    } else {
      switch (Code_Gen_Model_DW.is_c10_Code_Gen_Model) {
       case Code_Gen_Model_IN_AngleArms:
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        if (Code_Gen_Model_DW.Timer > 1.0) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Move_To_Shoot;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.RelativeMoveForward = 0.5;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_IN_CheckForRobotOrNote:
        Code_Gen_Mo_CheckForRobotOrNote();
        break;

       case Code_Gen_Model_IN_DriveBack:
        if (Code_Gen_Model_DW.Timer > 2.5) {
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_ShootAgain;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_DriveOut:
        if (Code_Gen_Model_DW.Timer > 5.0) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_DriveBack;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.RelativeMoveForward = -1.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_End:
        break;

       case Code_Gen_Model_IN_MoveArms:
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        if (Code_Gen_Model_DW.Timer > 0.6) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.AutoState = 1.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Move_To_Shoot:
        if (Code_Gen_Model_DW.Timer > 1.5) {
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_ShootNote;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
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
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note6 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex == 2U) {
          Code_Gen_Model_DW.exitPortIndex = 0U;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note6_trans;
        }
        break;

       case Code_Gen_Model_IN_Note6_trans:
        Code_Gen_Model_Note6_trans(&Code_Gen_Model_DW.UnitDelay_DSTATE_oz,
          &Code_Gen_Model_DW.UnitDelay_DSTATE_ll);
        break;

       case Code_Gen_Model_IN_Note7:
        if (Code_Gen_Model_DW.is_Note7 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex_n = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex_n == 2U) {
          Code_Gen_Model_DW.exitPortIndex_n = 0U;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note7_trans;
        }
        break;

       case Code_Gen_Model_IN_Note7_trans:
        if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note8_trans;
        } else if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note6_trans;
        } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note7;
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Model_IN_PathToShoot1;
          Code_Gen_Model_B.SplineEnable = 1.0;
          Code_Gen_Model_DW.CloseNoteCounter++;
        } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
        }
        break;

       case Code_Gen_Model_IN_Note8:
        if (Code_Gen_Model_DW.is_Note8 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note8 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note8 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex_h = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex_h == 2U) {
          Code_Gen_Model_DW.exitPortIndex_h = 0U;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note8_trans;
        }
        break;

       case Code_Gen_Model_IN_Note8_trans:
        Code_Gen_Model_Note8_trans(&Code_Gen_Model_DW.UnitDelay_DSTATE_oz,
          &Code_Gen_Model_DW.UnitDelay_DSTATE_ll);
        break;

       case Code_Gen_Model_IN_PathPicker:
        Code_Gen_Model_PathPicker();
        break;

       case Code_Gen_Model_IN_PathToPickUp:
        Code_Gen_Model_PathToPickUp();
        break;

       case Code_Gen_IN_PathToPickUpWODetec:
        Code_Gen_Model_B.AutoState = 1.1;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_RunIntake1;
          Code_Gen_Model_B.AutoState = 1.2;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.5;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_PathToShoot:
        Code_Gen_Model_PathToShoot();
        break;

       case Code_Gen__IN_PathToShootWODetec:
        Code_Gen_Model_B.AutoState = 1.3;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.AutoState = 1.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_RunIntake:
        Code_Gen_Model_RunIntake();
        break;

       case Code_Gen_Model_IN_RunIntake1:
        Code_Gen_Model_B.AutoState = 1.2;
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >=
             4.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen__IN_PathToShootWODetec;
          Code_Gen_Model_B.AutoState = 1.3;
          Code_Gen_Model_B.SplineEnable = 1.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Shoot:
        Code_Gen_Model_Shoot();
        break;

       case Code_Gen_Model_IN_ShootAgain:
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >
             10.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Stop;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_ShootNote:
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >
             10.0)) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_DriveOut;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.5;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_ShootWODetec:
        Code_Gen_Model_B.AutoState = 1.0;
        if (((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer
              > 4.0)) && (Code_Gen_Model_B.CurrentPriorityIndex > 1.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
        } else if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) ||
                   (Code_Gen_Model_DW.Timer > 3.0)) {
          Code_Gen_Model_B.CurrentPriorityIndex++;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_IN_PathToPickUpWODetec;
          Code_Gen_Model_B.AutoState = 1.1;
          Code_Gen_Model_B.SplineEnable = 1.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       default:
        /* case IN_Stop: */
        break;
      }
    }

    /* End of Chart: '<S29>/Chart' */

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Constant'
     *  Constant: '<S31>/Constant'
     *  RelationalOperator: '<S31>/Compare'
     */
    if (Code_Gen_Model_B.AutoState == 1.1) {
      rtb_Climber_Cmd_Direction = 2.0;

      /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      /* If: '<S29>/If' incorporates:
       *  Constant: '<Root>/Constant1'
       *  Constant: '<S34>/Constant9'
       *  Merge: '<S29>/Merge'
       *  Selector: '<S34>/Selector'
       *  Selector: '<S34>/Selector1'
       */
      Code_Gen_Model_B.Spline_ID = Code_Gen_Model_ConstInitP.Constant9_Value
        [((((((int32_T)rtb_Climber_Cmd_Direction) - 1) * 10) + ((int32_T)
            Code_Gen_Model_B.CurrentPriorityIndex)) + ((((int32_T)Auto_ID) - 1) *
           30)) - 1];

      /* End of Outputs for SubSystem: '<S29>/If Action Subsystem' */
    } else if (Code_Gen_Model_B.AutoState == 1.3) {
      /* Switch: '<S29>/Switch1' incorporates:
       *  Constant: '<S29>/Constant1'
       */
      rtb_Climber_Cmd_Direction = 3.0;

      /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      /* If: '<S29>/If' incorporates:
       *  Constant: '<Root>/Constant1'
       *  Constant: '<S34>/Constant9'
       *  Merge: '<S29>/Merge'
       *  Selector: '<S34>/Selector'
       *  Selector: '<S34>/Selector1'
       */
      Code_Gen_Model_B.Spline_ID = Code_Gen_Model_ConstInitP.Constant9_Value
        [((((((int32_T)rtb_Climber_Cmd_Direction) - 1) * 10) + ((int32_T)
            Code_Gen_Model_B.CurrentPriorityIndex)) + ((((int32_T)Auto_ID) - 1) *
           30)) - 1];

      /* End of Outputs for SubSystem: '<S29>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      /* If: '<S29>/If' incorporates:
       *  Constant: '<S35>/Constant'
       *  Merge: '<S29>/Merge'
       *  SignalConversion generated from: '<S35>/Out1'
       */
      Code_Gen_Model_B.Spline_ID = 1.0;

      /* End of Outputs for SubSystem: '<S29>/If Action Subsystem1' */
    }

    /* End of Switch: '<S29>/Switch' */

    /* Selector: '<S3>/Selector' incorporates:
     *  Constant: '<S3>/Constant20'
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s220_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s220_iter] =
          Code_Gen_Model_ConstP.Constant20_Value[((((int32_T)
          Code_Gen_Model_B.Spline_ID) - 1) * 40) + s220_iter];
      }
    }

    /* End of Selector: '<S3>/Selector' */

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Selector: '<S3>/Selector1'
     */
    Code_Gen_Model_B.Spline_Num_Poses = Code_Gen_Model_ConstP.Constant6_Value
      [((int32_T)Code_Gen_Model_B.Spline_ID) - 1];

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S26>/Constant'
     *  RelationalOperator: '<S26>/Compare'
     */
    Code_Gen_Model_B.Spline_Enable = (Code_Gen_Model_B.SplineEnable != 0.0);

    /* RelationalOperator: '<S33>/Compare' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_Compare_jq = (Code_Gen_Model_B.RelativeMoveForward != 0.0);

    /* RelationalOperator: '<S27>/Compare' incorporates:
     *  Switch: '<S29>/Switch2'
     */
    UnitDelay = !rtb_Compare_jq;

    /* Switch: '<S29>/Switch3' */
    if (rtb_Compare_jq) {
      /* Merge: '<S13>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.RelativeMoveForward;
    } else {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Constant: '<S29>/Constant6'
       */
      Code_Gen_Model_B.Translation_Speed = 0.0;
    }

    /* End of Switch: '<S29>/Switch3' */

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.ArmStateRequest;

    /* Merge: '<S13>/Merge11' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.Intake_Shooter_State_Request;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S13>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S13>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S3>/Climber_Cmd_Direction' incorporates:
     *  Constant: '<S3>/Constant17'
     */
    rtb_Climber_Cmd_Direction = 0.0;

    /* RelationalOperator: '<S28>/Compare' incorporates:
     *  Constant: '<S28>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     */
    Code_Gen_Model_B.Line_Sensor_Boolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range >= FloorDistance);

    /* Logic: '<S3>/NOT1' incorporates:
     *  UnitDelay: '<S11>/Unit Delay'
     */
    UnitDelay_e = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* SignalConversion generated from: '<S20>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Lookup_n-D: '<S399>/1-D Lookup Table' incorporates:
     *  Switch: '<S7>/Switch2'
     */
    rtb_Climber_Cmd_Direction = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data_g,
      Code_Gen_Model_ConstP.uDLookupTable_tableData_j, 8U);

    /* Logic: '<S399>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S399>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_AT_Tag_6_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S399>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S399>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S399>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S399>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S399>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S399>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S399>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S399>/Logical Operator'
     *  Logic: '<S399>/Logical Operator1'
     *  Switch: '<S399>/Switch10'
     *  Switch: '<S399>/Switch11'
     *  Switch: '<S399>/Switch3'
     *  Switch: '<S399>/Switch4'
     *  Switch: '<S399>/Switch5'
     *  Switch: '<S399>/Switch6'
     *  Switch: '<S399>/Switch7'
     *  Switch: '<S399>/Switch8'
     *  Switch: '<S399>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S399>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S399>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Climber_Cmd_Direction +
        Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S399>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S399>/Add8'
       *  Switch: '<S399>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Climber_Cmd_Direction +
        Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S399>/Switch4' incorporates:
       *  Constant: '<S399>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S399>/Add7'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_AT_Tag_6_Active) {
      /* Switch: '<S399>/Switch5' incorporates:
       *  Constant: '<S399>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S399>/Add6'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S399>/Switch6' incorporates:
       *  Constant: '<S399>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S399>/Add5'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S399>/Switch7' incorporates:
       *  Constant: '<S399>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S399>/Add4'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S399>/Switch8' incorporates:
       *  Constant: '<S399>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S399>/Add3'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       *  Switch: '<S399>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S399>/Switch9' incorporates:
       *  Constant: '<S399>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S399>/Add2'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       *  Switch: '<S399>/Switch7'
       *  Switch: '<S399>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S399>/Switch10' incorporates:
       *  Constant: '<S399>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S399>/Add1'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       *  Switch: '<S399>/Switch7'
       *  Switch: '<S399>/Switch8'
       *  Switch: '<S399>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S399>/Switch11' incorporates:
       *  Constant: '<S399>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S399>/Add'
       *  Switch: '<S399>/Switch10'
       *  Switch: '<S399>/Switch2'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       *  Switch: '<S399>/Switch7'
       *  Switch: '<S399>/Switch8'
       *  Switch: '<S399>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S399>/Switch2' incorporates:
       *  Constant: '<S399>/Constant'
       *  Switch: '<S399>/Switch10'
       *  Switch: '<S399>/Switch11'
       *  Switch: '<S399>/Switch3'
       *  Switch: '<S399>/Switch4'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       *  Switch: '<S399>/Switch7'
       *  Switch: '<S399>/Switch8'
       *  Switch: '<S399>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S399>/Switch2' */

    /* Sum: '<S401>/Add' incorporates:
     *  Constant: '<S401>/Constant'
     *  Constant: '<S401>/Constant1'
     *  Lookup_n-D: '<S401>/Modulation_Str_Y_Rel'
     *  Product: '<S401>/Product'
     *  Product: '<S401>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_Climber_Cmd_Direction = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (Code_Gen_Model_B.Steer_Joystick_Z *
      Steering_Twist_Gain);

    /* RelationalOperator: '<S403>/Compare' incorporates:
     *  Constant: '<S403>/Constant'
     */
    rtb_Compare_jq = (rtb_Climber_Cmd_Direction == 0.0);

    /* Logic: '<S401>/AND1' incorporates:
     *  Logic: '<S401>/AND2'
     *  Logic: '<S401>/AND3'
     *  RelationalOperator: '<S404>/FixPt Relational Operator'
     *  RelationalOperator: '<S405>/FixPt Relational Operator'
     *  RelationalOperator: '<S406>/FixPt Relational Operator'
     *  RelationalOperator: '<S407>/FixPt Relational Operator'
     *  UnitDelay: '<S401>/Unit Delay2'
     *  UnitDelay: '<S404>/Delay Input1'
     *  UnitDelay: '<S405>/Delay Input1'
     *  UnitDelay: '<S406>/Delay Input1'
     *  UnitDelay: '<S407>/Delay Input1'
     *
     * Block description for '<S404>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S405>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S406>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S407>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.Steering_Abs_Ortho_Trigger = (rtb_Compare_jq &&
      (((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2))) ||
       (Code_Gen_Model_B.Steering_Abs_Ortho_Trigger)));

    /* Switch: '<S401>/Switch4' incorporates:
     *  Constant: '<S401>/Constant5'
     *  Switch: '<S401>/Switch5'
     *  Switch: '<S401>/Switch6'
     *  Switch: '<S401>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S401>/Switch5' incorporates:
       *  Constant: '<S401>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S401>/Switch6' incorporates:
       *  Constant: '<S401>/Constant7'
       *  Switch: '<S401>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S401>/Switch7' incorporates:
       *  Constant: '<S401>/Constant8'
       *  Switch: '<S401>/Switch5'
       *  Switch: '<S401>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S401>/Switch6' incorporates:
       *  Switch: '<S401>/Switch5'
       *  UnitDelay: '<S401>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S401>/Switch4' */

    /* Switch: '<S401>/Switch1' incorporates:
     *  Switch: '<S401>/Switch3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Ortho_Trigger) {
      /* Switch: '<S401>/Switch1' incorporates:
       *  Constant: '<S401>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Yaw = 0.0;

      /* Switch: '<S401>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Ortho = rtb_Switch4_g;
    } else {
      /* Switch: '<S401>/Switch1' incorporates:
       *  Constant: '<S401>/Constant17'
       *  Product: '<S401>/Product2'
       *  Sum: '<S401>/Sum'
       *  UnitDelay: '<S401>/Unit Delay'
       */
      Code_Gen_Model_B.Steering_Abs_Yaw += Code_Gen_Model_B.AT_Error_Yaw *
        AT_Yaw_Control_Gain;

      /* Switch: '<S401>/Switch3' incorporates:
       *  Constant: '<S401>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Ortho = 0.0;
    }

    /* End of Switch: '<S401>/Switch1' */

    /* RelationalOperator: '<S408>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S408>/Delay Input1'
     *
     * Block description for '<S408>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.Steering_Abs_Gyro_Trigger = (((int32_T)rtb_Compare_jq) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_j));

    /* Switch: '<S401>/Switch8' incorporates:
     *  UnitDelay: '<S401>/Unit Delay3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Gyro_Trigger) {
      rtb_Switch8 = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      rtb_Switch8 = Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S401>/Switch8' */

    /* Switch: '<S401>/Switch10' */
    if (Code_Gen_Model_B.Steering_Abs_Ortho_Trigger) {
      /* Switch: '<S401>/Switch10' incorporates:
       *  Constant: '<S401>/Constant10'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S401>/Switch10' */
      Code_Gen_Model_B.Steering_Abs_Gyro = rtb_Switch8;
    }

    /* End of Switch: '<S401>/Switch10' */

    /* Merge: '<S13>/Merge1' incorporates:
     *  Sum: '<S401>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = (Code_Gen_Model_B.Steering_Abs_Ortho +
      Code_Gen_Model_B.Steering_Abs_Gyro) + Code_Gen_Model_B.Steering_Abs_Yaw;

    /* Lookup_n-D: '<S402>/Modulation_Drv' incorporates:
     *  Math: '<S402>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S410>/Compare' incorporates:
     *  Constant: '<S410>/Constant'
     */
    rtb_Compare_at = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S402>/Logical Operator' incorporates:
     *  Constant: '<S411>/Constant'
     *  RelationalOperator: '<S411>/Compare'
     */
    rtb_Relative_Translation_Flag = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_Compare_at);

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S20>/Switch'
     *  Switch: '<S402>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      UnitDelay_e = Code_Gen_Model_U.Is_Absolute_Steering;
      UnitDelay = Code_Gen_Model_U.Is_Absolute_Translation;
    } else {
      UnitDelay_e = rtb_Compare_jq;
      UnitDelay = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Switch: '<S409>/Switch1' incorporates:
     *  Constant: '<S409>/Constant'
     *  Constant: '<S409>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Switch2_p2 = Boost_Trigger_High_Speed;
    } else {
      rtb_Switch2_p2 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S409>/Switch1' */

    /* Switch: '<S416>/Init' incorporates:
     *  UnitDelay: '<S416>/FixPt Unit Delay1'
     *  UnitDelay: '<S416>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_UnitDelay_kzl = rtb_Switch2_p2;
    } else {
      rtb_UnitDelay_kzl = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2;
    }

    /* End of Switch: '<S416>/Init' */

    /* Sum: '<S414>/Sum1' */
    rtb_Switch2_p2 -= rtb_UnitDelay_kzl;

    /* Switch: '<S415>/Switch2' incorporates:
     *  Constant: '<S413>/Constant1'
     *  Constant: '<S413>/Constant3'
     *  RelationalOperator: '<S415>/LowerRelop1'
     *  RelationalOperator: '<S415>/UpperRelop'
     *  Switch: '<S415>/Switch'
     */
    if (rtb_Switch2_p2 > Boost_Trigger_Increasing_Limit) {
      rtb_Switch2_p2 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Switch2_p2 < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S415>/Switch' incorporates:
       *  Constant: '<S413>/Constant1'
       */
      rtb_Switch2_p2 = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S415>/Switch2' */

    /* Sum: '<S414>/Sum' */
    rtb_UnitDelay_kzl += rtb_Switch2_p2;

    /* Switch: '<S399>/Switch15' incorporates:
     *  Logic: '<S399>/AND'
     *  Logic: '<S399>/AND1'
     *  Logic: '<S399>/AND4'
     *  Logic: '<S399>/AND5'
     *  Logic: '<S399>/AND6'
     *  Logic: '<S399>/AND7'
     *  Logic: '<S399>/AND8'
     *  Logic: '<S399>/AND9'
     *  Switch: '<S399>/Switch1'
     *  Switch: '<S399>/Switch12'
     *  Switch: '<S399>/Switch13'
     *  Switch: '<S399>/Switch14'
     *  Switch: '<S399>/Switch16'
     *  Switch: '<S399>/Switch17'
     *  Switch: '<S399>/Switch18'
     *  Switch: '<S399>/Switch19'
     *  Switch: '<S399>/Switch20'
     *  Switch: '<S399>/Switch21'
     *  Switch: '<S399>/Switch22'
     *  Switch: '<S399>/Switch23'
     *  Switch: '<S399>/Switch24'
     *  Switch: '<S399>/Switch25'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S399>/Switch15' incorporates:
       *  Constant: '<S399>/Constant9'
       *  Sum: '<S399>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch23' incorporates:
       *  Constant: '<S399>/Constant28'
       *  Sum: '<S399>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_6_Active) {
      /* Switch: '<S399>/Switch15' incorporates:
       *  Constant: '<S399>/Constant5'
       *  Sum: '<S399>/Add16'
       *  Switch: '<S399>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch23' incorporates:
       *  Constant: '<S399>/Constant27'
       *  Sum: '<S399>/Add22'
       *  Switch: '<S399>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S399>/Switch15' incorporates:
       *  Constant: '<S399>/Constant4'
       *  Sum: '<S399>/Add10'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch23' incorporates:
       *  Constant: '<S399>/Constant26'
       *  Sum: '<S399>/Add12'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S399>/Switch15' incorporates:
       *  Constant: '<S399>/Constant17'
       *  Sum: '<S399>/Add11'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch12'
       *  Switch: '<S399>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch23' incorporates:
       *  Constant: '<S399>/Constant3'
       *  Sum: '<S399>/Add13'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch20'
       *  Switch: '<S399>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S399>/Switch15' incorporates:
       *  Constant: '<S399>/Constant18'
       *  Sum: '<S399>/Add14'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch12'
       *  Switch: '<S399>/Switch13'
       *  Switch: '<S399>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch23' incorporates:
       *  Constant: '<S399>/Constant21'
       *  Sum: '<S399>/Add20'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch20'
       *  Switch: '<S399>/Switch21'
       *  Switch: '<S399>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S399>/Switch14' incorporates:
       *  Constant: '<S399>/Constant19'
       *  Sum: '<S399>/Add15'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch12'
       *  Switch: '<S399>/Switch13'
       *  Switch: '<S399>/Switch15'
       *  Switch: '<S399>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch22' incorporates:
       *  Constant: '<S399>/Constant23'
       *  Sum: '<S399>/Add21'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch20'
       *  Switch: '<S399>/Switch21'
       *  Switch: '<S399>/Switch23'
       *  Switch: '<S399>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S399>/Switch17' incorporates:
       *  Constant: '<S399>/Constant20'
       *  Sum: '<S399>/Add18'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch12'
       *  Switch: '<S399>/Switch13'
       *  Switch: '<S399>/Switch14'
       *  Switch: '<S399>/Switch15'
       *  Switch: '<S399>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch25' incorporates:
       *  Constant: '<S399>/Constant24'
       *  Sum: '<S399>/Add24'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch20'
       *  Switch: '<S399>/Switch21'
       *  Switch: '<S399>/Switch22'
       *  Switch: '<S399>/Switch23'
       *  Switch: '<S399>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S399>/Switch18' incorporates:
       *  Constant: '<S399>/Constant22'
       *  Sum: '<S399>/Add19'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch12'
       *  Switch: '<S399>/Switch13'
       *  Switch: '<S399>/Switch14'
       *  Switch: '<S399>/Switch15'
       *  Switch: '<S399>/Switch16'
       *  Switch: '<S399>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S399>/Switch26' incorporates:
       *  Constant: '<S399>/Constant25'
       *  Sum: '<S399>/Add25'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch20'
       *  Switch: '<S399>/Switch21'
       *  Switch: '<S399>/Switch22'
       *  Switch: '<S399>/Switch23'
       *  Switch: '<S399>/Switch24'
       *  Switch: '<S399>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S399>/Switch15' incorporates:
       *  Constant: '<S399>/Constant1'
       *  Switch: '<S399>/Switch1'
       *  Switch: '<S399>/Switch12'
       *  Switch: '<S399>/Switch13'
       *  Switch: '<S399>/Switch14'
       *  Switch: '<S399>/Switch16'
       *  Switch: '<S399>/Switch17'
       *  Switch: '<S399>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S399>/Switch23' incorporates:
       *  Constant: '<S399>/Constant2'
       *  Switch: '<S399>/Switch19'
       *  Switch: '<S399>/Switch20'
       *  Switch: '<S399>/Switch21'
       *  Switch: '<S399>/Switch22'
       *  Switch: '<S399>/Switch24'
       *  Switch: '<S399>/Switch25'
       *  Switch: '<S399>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S399>/Switch15' */

    /* Switch: '<S402>/Switch' incorporates:
     *  Switch: '<S402>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S402>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_Compare_at) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S402>/Gain2'
       *  Math: '<S402>/Magnitude1'
       *  Switch: '<S402>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S409>/Product' incorporates:
       *  Switch: '<S402>/Switch2'
       */
      Rot_Mat_idx_0 = rtb_Modulation_Drv * rtb_UnitDelay_kzl;

      /* Saturate: '<S409>/Saturation' incorporates:
       *  Switch: '<S402>/Switch2'
       */
      if (Rot_Mat_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (Rot_Mat_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Rot_Mat_idx_0;
      }

      /* End of Saturate: '<S409>/Saturation' */
    }

    /* End of Switch: '<S402>/Switch' */

    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S417>/Constant'
     *  Constant: '<S418>/Constant'
     *  Logic: '<S412>/AND'
     *  RelationalOperator: '<S417>/Compare'
     *  RelationalOperator: '<S418>/Compare'
     *  Switch: '<S412>/Switch2'
     *  UnitDelay: '<S412>/Unit Delay'
     *  UnitDelay: '<S412>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Modulation_Drv = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_p2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Modulation_Drv = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_p2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S412>/Switch1' */

    /* Switch: '<S402>/Switch1' incorporates:
     *  Switch: '<S402>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S402>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S402>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S402>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S402>/Switch5' */
    } else if (rtb_Compare_at) {
      /* Switch: '<S402>/Switch6' incorporates:
       *  Constant: '<S402>/Constant'
       *  Constant: '<S402>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S402>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        rtb_thetay = 3.1415926535897931;
      } else {
        rtb_thetay = 0.0;
      }

      /* Merge: '<S13>/Merge3' incorporates:
       *  Sum: '<S402>/Add1'
       *  Switch: '<S402>/Switch4'
       *  Switch: '<S402>/Switch6'
       *  Trigonometry: '<S402>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + rtb_thetay;
    } else {
      /* Merge: '<S13>/Merge3' incorporates:
       *  Switch: '<S402>/Switch4'
       *  Trigonometry: '<S402>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Modulation_Drv,
        rtb_Switch2_p2);
    }

    /* End of Switch: '<S402>/Switch1' */

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion: '<S401>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Climber_Cmd_Direction;

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S20>/Constant3'
     *  SignalConversion generated from: '<S20>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S20>/Constant9'
     *  SignalConversion generated from: '<S20>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S20>/Constant1'
     *  SignalConversion generated from: '<S20>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S13>/Merge11' incorporates:
     *  SignalConversion generated from: '<S20>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.State_Request_Intake_Shooter;

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S20>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* SignalConversion: '<S20>/Signal Copy' */
    rtb_Climber_Cmd_Direction = Code_Gen_Model_B.Climber_Cmd_Direction;

    /* Update for UnitDelay: '<S404>/Delay Input1'
     *
     * Block description for '<S404>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S405>/Delay Input1'
     *
     * Block description for '<S405>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S406>/Delay Input1'
     *
     * Block description for '<S406>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S407>/Delay Input1'
     *
     * Block description for '<S407>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S401>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S408>/Delay Input1'
     *
     * Block description for '<S408>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_Compare_jq;

    /* Update for UnitDelay: '<S401>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE = rtb_Switch8;

    /* Update for UnitDelay: '<S416>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S416>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S416>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2 = rtb_UnitDelay_kzl;

    /* Update for UnitDelay: '<S412>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Modulation_Drv;

    /* Update for UnitDelay: '<S412>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_p2;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* SignalConversion generated from: '<S21>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S21>/Constant1'
     *  SignalConversion generated from: '<S21>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S13>/Merge2' incorporates:
     *  Constant: '<S21>/Constant2'
     *  SignalConversion generated from: '<S21>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S13>/Merge3' incorporates:
     *  Constant: '<S21>/Constant3'
     *  SignalConversion generated from: '<S21>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S21>/Constant4'
     *  SignalConversion generated from: '<S21>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S21>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S21>/Constant5'
     */
    UnitDelay = false;

    /* SignalConversion generated from: '<S21>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    UnitDelay_e = false;

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S21>/Constant7'
     *  SignalConversion generated from: '<S21>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S21>/Constant9'
     *  SignalConversion generated from: '<S21>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S21>/Constant12'
     *  SignalConversion generated from: '<S21>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Merge: '<S13>/Merge11' incorporates:
     *  Constant: '<S21>/Constant10'
     *  SignalConversion generated from: '<S21>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S13>/Merge12' incorporates:
     *  Constant: '<S21>/Constant11'
     *  SignalConversion generated from: '<S21>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* SignalConversion: '<S21>/Signal Copy' */
    rtb_Climber_Cmd_Direction = Code_Gen_Model_B.Climber_Cmd_Direction;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S17>/If' incorporates:
   *  Constant: '<S245>/Constant'
   *  Logic: '<S245>/AND'
   *  MATLAB Function: '<S195>/Find closest index to curve'
   *  Product: '<S245>/Product'
   *  RelationalOperator: '<S245>/Relational Operator'
   *  RelationalOperator: '<S245>/Relational Operator1'
   *  Selector: '<S245>/Selector'
   *  Selector: '<S245>/Selector1'
   *  Selector: '<S246>/Selector'
   *  Sum: '<S245>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S198>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S201>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S203>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S198>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S17>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S193>/Action Port'
       */
      /* InitializeConditions for If: '<S17>/If' incorporates:
       *  UnitDelay: '<S193>/Unit Delay'
       *  UnitDelay: '<S194>/Unit Delay'
       *  UnitDelay: '<S196>/Unit Delay'
       *  UnitDelay: '<S196>/Unit Delay1'
       *  UnitDelay: '<S246>/Unit Delay'
       *  UnitDelay: '<S246>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S17>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S17>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S193>/Action Port'
     */
    /* Selector: '<S194>/Selector1' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S194>/Selector1' */

    /* Lookup_n-D: '<S193>/Capture Radius' incorporates:
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_Switch4_g = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled6,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S194>/Matrix Concatenate2' */
    rtb_Akxhatkk1[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S194>/Matrix Concatenate2' */
    rtb_Akxhatkk1[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S198>/If' incorporates:
     *  RelationalOperator: '<S198>/ '
     *  UnitDelay: '<S194>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S201>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S203>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S198>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S201>/Action Port'
       */
      /* InitializeConditions for If: '<S198>/If' incorporates:
       *  UnitDelay: '<S201>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S198>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S198>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S201>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S201>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S204>/Action Port'
       */
      /* If: '<S201>/If' incorporates:
       *  Selector: '<S194>/Selector1'
       *  Selector: '<S201>/Selector'
       *  Selector: '<S204>/Selector'
       */
      rtb_rx_j = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S201>/Increment_If_Rectangle_Check' */

      /* Sum: '<S201>/Minus' incorporates:
       *  Concatenate: '<S194>/Matrix Concatenate2'
       *  Selector: '<S201>/Selector'
       */
      rtb_Minus_n[0] = rtb_Akxhatkk1[0] - rtb_rx_j;

      /* Outputs for IfAction SubSystem: '<S201>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S204>/Action Port'
       */
      /* If: '<S201>/If' incorporates:
       *  Selector: '<S194>/Selector1'
       *  Selector: '<S201>/Selector'
       *  Selector: '<S204>/Selector'
       *  Sum: '<S201>/Minus'
       */
      rtb_Modulation_Drv = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S201>/Increment_If_Rectangle_Check' */

      /* Sum: '<S201>/Minus' incorporates:
       *  Concatenate: '<S194>/Matrix Concatenate2'
       *  Selector: '<S201>/Selector'
       */
      rtb_Minus_n[1] = rtb_Akxhatkk1[1] - rtb_Modulation_Drv;

      /* Math: '<S201>/Hypot' */
      rtb_Switch8 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S201>/Equal' */
      UnitDelay_e = (Code_Gen_Model_B.Spline_Num_Poses ==
                     Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S201>/Switch' incorporates:
       *  Logic: '<S201>/AND'
       *  Logic: '<S201>/OR'
       *  RelationalOperator: '<S201>/Relational Operator'
       *  UnitDelay: '<S201>/Unit Delay'
       */
      UnitDelay = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Switch8 <=
        rtb_Switch4_g) && UnitDelay_e));

      /* If: '<S201>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!UnitDelay) {
        if (!UnitDelay_e) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S203>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S201>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S203>/Action Port'
         */
        /* If: '<S203>/If' incorporates:
         *  RelationalOperator: '<S203>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S203>/Is_Last_Point' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          /* InitializeConditions for If: '<S203>/If' incorporates:
           *  UnitDelay: '<S206>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S203>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S203>/Is_Last_Point' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          /* Switch: '<S206>/Switch' incorporates:
           *  Constant: '<S208>/Constant'
           *  Logic: '<S206>/OR'
           *  RelationalOperator: '<S208>/Compare'
           *  UnitDelay: '<S206>/Unit Delay'
           */
          rtb_Compare_at = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                            (rtb_Switch8 <= Spline_Stop_Radius));

          /* If: '<S206>/If' */
          if (rtb_Compare_at) {
            /* Outputs for IfAction SubSystem: '<S206>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S209>/Action Port'
             */
            /* Merge: '<S198>/Merge2' incorporates:
             *  Constant: '<S209>/Constant'
             *  SignalConversion generated from: '<S209>/Robot_Reached_Destination'
             */
            UnitDelay_e = true;

            /* SignalConversion generated from: '<S209>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S209>/Constant1'
             */
            rtb_Compare_jq = false;

            /* End of Outputs for SubSystem: '<S206>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S206>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S210>/Action Port'
             */
            /* Merge: '<S198>/Merge2' incorporates:
             *  Constant: '<S210>/Constant'
             *  SignalConversion generated from: '<S210>/Robot_Reached_Destination'
             */
            UnitDelay_e = false;

            /* SignalConversion generated from: '<S210>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S210>/Constant1'
             */
            rtb_Compare_jq = true;

            /* End of Outputs for SubSystem: '<S206>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S206>/If' */

          /* Merge: '<S198>/Merge4' incorporates:
           *  SignalConversion: '<S206>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S206>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Compare_at;

          /* End of Outputs for SubSystem: '<S203>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S203>/Increment_Search' incorporates:
           *  ActionPort: '<S205>/Action Port'
           */
          /* Merge: '<S198>/Merge2' incorporates:
           *  Constant: '<S205>/Constant'
           *  SignalConversion generated from: '<S205>/Robot_Reached_Destination'
           */
          UnitDelay_e = false;

          /* SignalConversion generated from: '<S205>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S205>/Constant1'
           */
          rtb_Compare_jq = false;

          /* Merge: '<S198>/Merge4' incorporates:
           *  Constant: '<S207>/FixPt Constant'
           *  SignalConversion: '<S205>/Signal Copy'
           *  Sum: '<S207>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S203>/Increment_Search' */
        }

        /* End of If: '<S203>/If' */
        /* End of Outputs for SubSystem: '<S201>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S201>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S204>/Action Port'
         */
        /* Sum: '<S211>/FixPt Sum1' incorporates:
         *  Constant: '<S211>/FixPt Constant'
         */
        rtb_Switch8 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S204>/Selector1' incorporates:
         *  Selector: '<S194>/Selector1'
         */
        rtb_Gyro_Angle_Adjustment = rtb_Ref_Poses[((int32_T)rtb_Switch8) - 1];

        /* Sum: '<S212>/Subtract' incorporates:
         *  Selector: '<S204>/Selector1'
         *  Sum: '<S212>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Gyro_Angle_Adjustment - rtb_rx_j;

        /* Selector: '<S204>/Selector1' incorporates:
         *  Selector: '<S194>/Selector1'
         */
        rtb_Switch8 = rtb_Ref_Poses[((int32_T)rtb_Switch8) + 9];

        /* Sum: '<S212>/Subtract' incorporates:
         *  Selector: '<S204>/Selector1'
         *  Sum: '<S212>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch8 - rtb_Modulation_Drv;

        /* Math: '<S212>/Hypot' */
        rtb_UnitDelay_kzl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S212>/Divide' */
        rtb_Switch2_p2 = rtb_Minus_n[1];

        /* UnaryMinus: '<S212>/Unary Minus' */
        rtb_Subtract1_of = rtb_Minus_n[0];

        /* Product: '<S212>/Product' incorporates:
         *  Product: '<S212>/Divide'
         *  UnaryMinus: '<S212>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2_p2 / rtb_UnitDelay_kzl) * rtb_Switch4_g;
        rtb_Minus_n[1] = ((-rtb_Subtract1_of) / rtb_UnitDelay_kzl) *
          rtb_Switch4_g;

        /* Sum: '<S212>/Add1' incorporates:
         *  Sum: '<S212>/Add2'
         *  Sum: '<S212>/Minus'
         */
        rtb_Subtract1_of = rtb_Gyro_Angle_Adjustment - rtb_Minus_n[0];

        /* Sum: '<S212>/Minus4' incorporates:
         *  Sum: '<S212>/Add2'
         *  Sum: '<S212>/Minus'
         */
        rtb_Gyro_Angle_Adjustment = (rtb_Gyro_Angle_Adjustment + rtb_Minus_n[0])
          - rtb_Subtract1_of;

        /* Sum: '<S212>/Minus5' incorporates:
         *  Concatenate: '<S194>/Matrix Concatenate2'
         *  Sum: '<S212>/Minus'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Akxhatkk1[0] - rtb_Subtract1_of;

        /* Sum: '<S212>/Add' incorporates:
         *  Sum: '<S212>/Add2'
         *  Sum: '<S212>/Minus1'
         */
        rtb_Switch2_p2 = rtb_rx_j - rtb_Minus_n[0];

        /* Sum: '<S212>/Minus' incorporates:
         *  Sum: '<S212>/Minus1'
         */
        rtb_Subtract1_of -= rtb_Switch2_p2;

        /* DotProduct: '<S212>/Dot Product' incorporates:
         *  Concatenate: '<S194>/Matrix Concatenate2'
         *  Sum: '<S212>/Minus'
         *  Sum: '<S212>/Minus1'
         *  Sum: '<S212>/Minus5'
         */
        rtb_UnitDelay_kzl = (rtb_Akxhatkk1[0] - rtb_Switch2_p2) *
          rtb_Subtract1_of;

        /* DotProduct: '<S212>/Dot Product1' incorporates:
         *  Sum: '<S212>/Minus'
         */
        rtb_rx_j = rtb_Subtract1_of * rtb_Subtract1_of;

        /* DotProduct: '<S212>/Dot Product2' incorporates:
         *  Sum: '<S212>/Minus4'
         *  Sum: '<S212>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Gyro_Angle_Adjustment *
          rtb_MatrixConcatenate_b_idx_0;

        /* DotProduct: '<S212>/Dot Product3' incorporates:
         *  Sum: '<S212>/Minus4'
         */
        rtb_Sum2_e = rtb_Gyro_Angle_Adjustment * rtb_Gyro_Angle_Adjustment;

        /* Sum: '<S212>/Add1' incorporates:
         *  Sum: '<S212>/Add2'
         *  Sum: '<S212>/Minus'
         */
        rtb_Subtract1_of = rtb_Switch8 - rtb_Minus_n[1];

        /* Sum: '<S212>/Minus4' incorporates:
         *  Sum: '<S212>/Add2'
         *  Sum: '<S212>/Minus'
         */
        rtb_Gyro_Angle_Adjustment = (rtb_Switch8 + rtb_Minus_n[1]) -
          rtb_Subtract1_of;

        /* Sum: '<S212>/Minus5' incorporates:
         *  Concatenate: '<S194>/Matrix Concatenate2'
         *  Sum: '<S212>/Minus'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Akxhatkk1[1] - rtb_Subtract1_of;

        /* Sum: '<S212>/Add' incorporates:
         *  Sum: '<S212>/Add2'
         *  Sum: '<S212>/Minus1'
         */
        rtb_Switch2_p2 = rtb_Modulation_Drv - rtb_Minus_n[1];

        /* Sum: '<S212>/Minus' incorporates:
         *  Sum: '<S212>/Minus1'
         */
        rtb_Subtract1_of -= rtb_Switch2_p2;

        /* DotProduct: '<S212>/Dot Product' incorporates:
         *  Concatenate: '<S194>/Matrix Concatenate2'
         *  Sum: '<S212>/Minus'
         *  Sum: '<S212>/Minus1'
         *  Sum: '<S212>/Minus5'
         */
        rtb_UnitDelay_kzl += (rtb_Akxhatkk1[1] - rtb_Switch2_p2) *
          rtb_Subtract1_of;

        /* RelationalOperator: '<S213>/Compare' incorporates:
         *  Constant: '<S213>/Constant'
         */
        UnitDelay_e = (rtb_UnitDelay_kzl >= 0.0);

        /* RelationalOperator: '<S212>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S212>/Dot Product1'
         *  Sum: '<S212>/Minus'
         */
        rtb_Compare_jq = (rtb_UnitDelay_kzl <= ((rtb_Subtract1_of *
          rtb_Subtract1_of) + rtb_rx_j));

        /* DotProduct: '<S212>/Dot Product2' incorporates:
         *  Sum: '<S212>/Minus4'
         *  Sum: '<S212>/Minus5'
         */
        rtb_UnitDelay_kzl = (rtb_Gyro_Angle_Adjustment *
                             rtb_MatrixConcatenate_b_idx_0) +
          rtb_MatrixConcatenate_b_idx_1;

        /* Merge: '<S198>/Merge4' incorporates:
         *  Constant: '<S214>/Constant'
         *  DataTypeConversion: '<S204>/Data Type Conversion'
         *  DotProduct: '<S212>/Dot Product3'
         *  Logic: '<S212>/AND'
         *  RelationalOperator: '<S212>/LessThanOrEqual1'
         *  RelationalOperator: '<S214>/Compare'
         *  Sum: '<S204>/Add'
         *  Sum: '<S212>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((UnitDelay_e &&
          rtb_Compare_jq) && (rtb_UnitDelay_kzl >= 0.0)) && (rtb_UnitDelay_kzl <=
          ((rtb_Gyro_Angle_Adjustment * rtb_Gyro_Angle_Adjustment) + rtb_Sum2_e))))
          + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S198>/Merge2' incorporates:
         *  Constant: '<S204>/Constant2'
         *  SignalConversion generated from: '<S204>/Robot_Reached_Destination'
         */
        UnitDelay_e = false;

        /* SignalConversion generated from: '<S204>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S204>/Constant1'
         */
        rtb_Compare_jq = false;

        /* End of Outputs for SubSystem: '<S201>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S201>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S202>/Action Port'
         */
        /* Merge: '<S198>/Merge2' incorporates:
         *  Constant: '<S202>/Constant2'
         *  SignalConversion generated from: '<S202>/Robot_Reached_Destination'
         */
        UnitDelay_e = false;

        /* SignalConversion generated from: '<S202>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S202>/Constant1'
         */
        rtb_Compare_jq = false;

        /* Merge: '<S198>/Merge4' incorporates:
         *  SignalConversion generated from: '<S202>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S201>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S198>/Merge1' incorporates:
       *  Constant: '<S201>/Constant'
       *  SignalConversion generated from: '<S201>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S201>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay;

      /* End of Outputs for SubSystem: '<S198>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S198>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S200>/Action Port'
       */
      /* Merge: '<S198>/Merge1' incorporates:
       *  Constant: '<S200>/Constant'
       *  SignalConversion generated from: '<S200>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S198>/Merge2' incorporates:
       *  Constant: '<S200>/Constant1'
       *  SignalConversion generated from: '<S200>/Robot_Reached_Destination'
       */
      UnitDelay_e = false;

      /* SignalConversion generated from: '<S200>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S200>/Constant2'
       */
      rtb_Compare_jq = false;

      /* Merge: '<S198>/Merge4' incorporates:
       *  SignalConversion generated from: '<S200>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S198>/Escape_Auto_Driving' */
    }

    /* End of If: '<S198>/If' */

    /* If: '<S194>/If1' */
    if (!rtb_Compare_jq) {
      /* Outputs for IfAction SubSystem: '<S194>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* Bias: '<S215>/Add Constant' incorporates:
       *  Bias: '<S215>/Bias'
       *  Sum: '<S215>/Subtract'
       */
      rtb_Switch8 = ((Code_Gen_Model_B.Spline_Num_Poses -
                      Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S215>/Selector4' incorporates:
       *  Bias: '<S215>/Bias1'
       *  Constant: '<S217>/FixPt Constant'
       *  Sum: '<S217>/FixPt Sum1'
       */
      rtb_Akxhatkk1[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Akxhatkk1[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S215>/Selector4' */
      s220_iter = ((int32_T)rtb_Akxhatkk1[1]) - ((int32_T)rtb_Akxhatkk1[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s220_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Bias1_p = (int32_T)rtb_Akxhatkk1[0];

      /* Concatenate: '<S215>/Matrix Concatenate' incorporates:
       *  Bias: '<S215>/Add Constant1'
       *  Gain: '<S218>/Gain'
       *  Gain: '<S219>/Gain'
       *  Selector: '<S194>/Selector1'
       *  Selector: '<S215>/Selector'
       *  Selector: '<S215>/Selector1'
       *  Selector: '<S215>/Selector2'
       *  Selector: '<S215>/Selector3'
       *  Sum: '<S218>/Subtract'
       *  Sum: '<S219>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[12] = (2.0 * rtb_Ref_Poses[10]) - rtb_Ref_Poses[11];
      for (i = 0; i < 10; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 13] = rtb_Ref_Poses[i + 10];
      }

      for (i = 0; i < 2; i++) {
        rtb_Assignment[(12 * i) + 11] = (rtb_Ref_Poses[((10 * i) + ((int32_T)
          Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) - rtb_Ref_Poses
          [(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) + (10 * i)) - 1];

        /* Selector: '<S215>/Selector4' incorporates:
         *  Bias: '<S215>/Add Constant1'
         *  Gain: '<S218>/Gain'
         *  Selector: '<S215>/Selector'
         *  Selector: '<S215>/Selector1'
         *  Sum: '<S218>/Subtract'
         */
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s220_iter;
             rtb_Num_Segments++) {
          rtb_Selector4[rtb_Num_Segments + (Code_Gen_Model_DW.Selector4_DIMS1[0]
            * i)] = rtb_Assignment[((rtb_Num_Segments + rtb_Bias1_p) + (12 * i))
            - 1];
        }
      }

      /* End of Concatenate: '<S215>/Matrix Concatenate' */

      /* Assignment: '<S215>/Assignment' incorporates:
       *  Selector: '<S215>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));
      s220_iter = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (rtb_Bias1_p = 0; rtb_Bias1_p < s220_iter; rtb_Bias1_p++) {
          rtb_Assignment[rtb_Bias1_p + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            rtb_Bias1_p];
        }

        i += 12;
      }

      /* End of Assignment: '<S215>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S216>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S220>/While Iterator'
       */
      s220_iter = 1;
      do {
        rtb_Modulation_Drv = rtb_Assignment[s220_iter + 1];
        rtb_Akxhatkk1[0] = rtb_Modulation_Drv - rtb_Assignment[s220_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s220_iter] - rtb_Assignment[s220_iter +
          2];
        rtb_Add2_f[0] = rtb_Modulation_Drv - rtb_Assignment[s220_iter];
        rtb_Modulation_Drv = rtb_Assignment[s220_iter + 13];
        rtb_Akxhatkk1[1] = rtb_Modulation_Drv - rtb_Assignment[s220_iter + 11];
        rtb_rx_j = rtb_Assignment[s220_iter + 12];
        rtb_Minus_n[1] = rtb_rx_j - rtb_Assignment[s220_iter + 14];
        rtb_Add2_f[1] = rtb_Modulation_Drv - rtb_rx_j;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_UnitDelay_kzl = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Modulation_Drv = rt_powd_snf(rtb_UnitDelay_kzl, 2.0);
          rtb_Subtract1_of = rt_powd_snf(rtb_UnitDelay_kzl, 3.0);
          rtb_Switch2_p2 = (rtb_UnitDelay_kzl - (2.0 * rtb_Modulation_Drv)) +
            rtb_Subtract1_of;
          rtb_Gyro_Angle_Adjustment = rtb_Modulation_Drv - rtb_Subtract1_of;
          rtb_Subtract1_of = (3.0 * rtb_Modulation_Drv) - (2.0 *
            rtb_Subtract1_of);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Akxhatkk1[0] * rtb_Switch2_p2)
            + (rtb_Minus_n[0] * rtb_Gyro_Angle_Adjustment)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Subtract1_of)) + rtb_Assignment[s220_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Akxhatkk1[1] * rtb_Switch2_p2)
            + (rtb_Minus_n[1] * rtb_Gyro_Angle_Adjustment)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Subtract1_of)) + rtb_rx_j;
          rtb_Switch2_p2 = ((3.0 * rtb_Modulation_Drv) - (4.0 *
            rtb_UnitDelay_kzl)) + 1.0;
          rtb_Gyro_Angle_Adjustment = (2.0 * rtb_UnitDelay_kzl) - (3.0 *
            rtb_Modulation_Drv);
          rtb_Modulation_Drv = (rtb_UnitDelay_kzl - rtb_Modulation_Drv) * 6.0;
          rtb_Subtract1_of = (((rtb_Akxhatkk1[0] * rtb_Switch2_p2) +
                               (rtb_Minus_n[0] * rtb_Gyro_Angle_Adjustment)) *
                              0.5) + (rtb_Add2_f[0] * rtb_Modulation_Drv);
          rtb_Minus_k_idx_0 = rtb_Subtract1_of;
          Rot_Mat_idx_0 = rtb_Subtract1_of;
          rtb_Subtract1_of = (((rtb_Akxhatkk1[1] * rtb_Switch2_p2) +
                               (rtb_Minus_n[1] * rtb_Gyro_Angle_Adjustment)) *
                              0.5) + (rtb_Add2_f[1] * rtb_Modulation_Drv);
          rtb_Modulation_Drv = (6.0 * rtb_UnitDelay_kzl) - 4.0;
          rtb_Switch2_p2 = (-6.0 * rtb_UnitDelay_kzl) + 2.0;
          rtb_UnitDelay_kzl = (-12.0 * rtb_UnitDelay_kzl) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Akxhatkk1[1] *
            rtb_Modulation_Drv) + (rtb_Minus_n[1] * rtb_Switch2_p2)) * 0.5) +
            (rtb_Add2_f[1] * rtb_UnitDelay_kzl)) * Rot_Mat_idx_0) -
            (((((rtb_Akxhatkk1[0] * rtb_Modulation_Drv) + (rtb_Minus_n[0] *
            rtb_Switch2_p2)) * 0.5) + (rtb_Add2_f[0] * rtb_UnitDelay_kzl)) *
             rtb_Subtract1_of)) / rt_powd_snf(rt_hypotd_snf(rtb_Minus_k_idx_0,
            rtb_Subtract1_of), 3.0);
        }

        if (s220_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s220_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_UnitDelay_kzl = rtb_Switch8 - ((real_T)s220_iter);
        rtb_Num_Segments = s220_iter;
        s220_iter++;
      } while ((rtb_UnitDelay_kzl >= 4.0) && (s220_iter <= 3));

      /* End of Outputs for SubSystem: '<S216>/Sampling_Loop' */

      /* SignalConversion generated from: '<S199>/Position_and_Curvature' incorporates:
       *  Assignment: '<S220>/Assignment'
       *  Merge: '<S194>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S194>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S194>/If Action Subsystem' incorporates:
       *  ActionPort: '<S197>/Action Port'
       */
      /* Product: '<S197>/Product' incorporates:
       *  Selector: '<S194>/Selector'
       *  Selector: '<S194>/Selector1'
       */
      rtb_UnitDelay_kzl = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Num_Poses) - 1];

      /* Product: '<S197>/Product1' incorporates:
       *  Selector: '<S194>/Selector'
       *  Selector: '<S194>/Selector1'
       */
      rtb_Switch8 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) +
        9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S197>/Product' incorporates:
         *  Constant: '<S197>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_UnitDelay_kzl;

        /* Product: '<S197>/Product1' incorporates:
         *  Constant: '<S197>/Constant2'
         *  Product: '<S197>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch8;
      }

      /* Assignment: '<S197>/Assignment' incorporates:
       *  Concatenate: '<S197>/Matrix Concatenate'
       *  Merge: '<S194>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S197>/Assignment' */

      /* SignalConversion generated from: '<S197>/Num_Segments' incorporates:
       *  Constant: '<S197>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S194>/If Action Subsystem' */
    }

    /* End of If: '<S194>/If1' */

    /* Concatenate: '<S195>/Matrix Concatenate' incorporates:
     *  Merge: '<S194>/Merge'
     *  Selector: '<S195>/Selector'
     *  Selector: '<S195>/Selector1'
     *  Selector: '<S195>/Selector3'
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

    /* End of Concatenate: '<S195>/Matrix Concatenate' */

    /* MATLAB Function: '<S195>/Distance Along Curve' incorporates:
     *  Concatenate: '<S195>/Matrix Concatenate'
     *  Selector: '<S195>/Selector4'
     *  Selector: '<S195>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s220_iter = 0; s220_iter < 149; s220_iter++) {
      /* Outputs for Iterator SubSystem: '<S216>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S220>/While Iterator'
       */
      rtb_Assignment_d[s220_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s220_iter + 1] -
         rtb_MatrixConcatenate_o[s220_iter], rtb_MatrixConcatenate_o[s220_iter +
         151] - rtb_MatrixConcatenate_o[s220_iter + 150]) +
        rtb_Assignment_d[s220_iter];

      /* End of Outputs for SubSystem: '<S216>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S195>/Distance Along Curve' */

    /* MATLAB Function: '<S195>/Find closest index to curve' incorporates:
     *  Concatenate: '<S195>/Matrix Concatenate'
     *  Selector: '<S195>/Selector4'
     *  Selector: '<S195>/Selector5'
     *  Selector: '<S246>/Selector'
     */
    for (s220_iter = 0; s220_iter < 150; s220_iter++) {
      /* Outputs for Iterator SubSystem: '<S216>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S220>/While Iterator'
       */
      distance_from_robot[s220_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s220_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s220_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S216>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s220_iter = 1;
    } else {
      s220_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s220_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s220_iter == 0) {
      rtb_Switch8 = distance_from_robot[0];
    } else {
      rtb_Switch8 = distance_from_robot[s220_iter - 1];
      for (rtb_Bias1_p = s220_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_UnitDelay_kzl = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch8 > rtb_UnitDelay_kzl) {
          rtb_Switch8 = rtb_UnitDelay_kzl;
        }
      }
    }

    s220_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s220_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch8) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S246>/Selector' incorporates:
     *  Constant: '<S246>/Constant'
     *  MATLAB Function: '<S195>/Find closest index to curve'
     *  MinMax: '<S246>/Min'
     */
    rtb_UnitDelay_kzl = rtb_Assignment_d[((int32_T)fmin(50.0, s220_iter)) - 1];

    /* If: '<S246>/If' incorporates:
     *  RelationalOperator: '<S246>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S246>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S249>/Action Port'
       */
      /* SignalConversion generated from: '<S249>/Lookup Table Dynamic' */
      rtb_Akxhatkk1[0] = rtb_Assignment_d[0];
      rtb_Akxhatkk1[1] = rtb_Assignment_d[49];

      /* Sum: '<S251>/FixPt Sum1' incorporates:
       *  Constant: '<S251>/FixPt Constant'
       */
      rtb_Switch8 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S249>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S249>/Selector11'
       *  Selector: '<S249>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch8) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 19];

      /* SignalConversion generated from: '<S249>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S249>/Selector1'
       *  Selector: '<S249>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch8) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S249>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S249>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch8), &rtb_Minus_n[0], rtb_UnitDelay_kzl,
                           &rtb_Akxhatkk1[0], 1U);

      /* SignalConversion: '<S249>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S249>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S249>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_UnitDelay_kzl,
                           &rtb_Akxhatkk1[0], 1U);

      /* End of Outputs for SubSystem: '<S246>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S246>/Latch' incorporates:
       *  ActionPort: '<S250>/Action Port'
       */
      /* SignalConversion generated from: '<S250>/In1' incorporates:
       *  UnitDelay: '<S246>/Unit Delay1'
       */
      rtb_Switch8 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S250>/In2' incorporates:
       *  UnitDelay: '<S246>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S246>/Latch' */
    }

    /* End of If: '<S246>/If' */

    /* MinMax: '<S193>/Min' incorporates:
     *  Lookup_n-D: '<S193>/Lookahead Distance'
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_Switch4_g = fmin(rtb_Switch4_g, look1_binlcpw
                         (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                          Code_Gen_Model_ConstP.pooled6,
                          Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S195>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S245>/While Iterator'
     */
    s245_iter = 1U;
    UnitDelay = true;
    while (UnitDelay && (s245_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S195>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S245>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s245_iter;
      UnitDelay = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                    (rtb_Assignment_d[s220_iter - 1] + rtb_Switch4_g)) &&
                   (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments)
        * 50.0)));
      s245_iter++;
    }

    /* End of Outputs for SubSystem: '<S195>/Find first index that meets distance target' */

    /* Switch: '<S248>/Switch' incorporates:
     *  Concatenate: '<S195>/Matrix Concatenate'
     *  Constant: '<S195>/Constant'
     *  Constant: '<S245>/Constant'
     *  Constant: '<S248>/Constant1'
     *  Constant: '<S248>/Constant2'
     *  Constant: '<S248>/Constant3'
     *  Logic: '<S245>/AND'
     *  MATLAB Function: '<S195>/Find closest index to curve'
     *  Math: '<S248>/Hypot'
     *  Merge: '<S13>/Merge8'
     *  MinMax: '<S248>/Min'
     *  MinMax: '<S248>/Min1'
     *  Product: '<S245>/Product'
     *  Product: '<S248>/Divide'
     *  Product: '<S248>/Product'
     *  Product: '<S248>/Product1'
     *  RelationalOperator: '<S195>/Relational Operator'
     *  RelationalOperator: '<S245>/Relational Operator'
     *  RelationalOperator: '<S245>/Relational Operator1'
     *  Selector: '<S195>/Selector10'
     *  Selector: '<S195>/Selector7'
     *  Selector: '<S195>/Selector8'
     *  Selector: '<S195>/Selector9'
     *  Selector: '<S245>/Selector'
     *  Selector: '<S245>/Selector1'
     *  Selector: '<S246>/Selector'
     *  Sqrt: '<S248>/Sqrt'
     *  Sum: '<S195>/Subtract'
     *  Sum: '<S245>/Add'
     *  Sum: '<S248>/Subtract'
     *  Sum: '<S248>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Switch4_g = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[9] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
                           Spline_Last_Pose_Distance_to_Velocity_Gain, fmin
                           (rtb_Switch8 * Spline_Velocity_Multiplier_TEST, sqrt
                            (Spline_Max_Centripital_Acceleration /
        rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Switch4_g = fmin(rtb_Switch8 * Spline_Velocity_Multiplier_TEST, sqrt
                           (Spline_Max_Centripital_Acceleration /
                            rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator
                            + 299]));
    }

    /* End of Switch: '<S248>/Switch' */

    /* Logic: '<S196>/OR' */
    rtb_Compare_jq = (UnitDelay_e || (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S196>/Switch1' incorporates:
     *  Switch: '<S196>/Switch'
     *  UnitDelay: '<S196>/Unit Delay'
     */
    if (rtb_Compare_jq) {
      /* Merge: '<S17>/Merge2' incorporates:
       *  Constant: '<S196>/Constant3'
       *  SignalConversion: '<S196>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_UnitDelay_kzl = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S17>/Merge2' incorporates:
       *  SignalConversion: '<S196>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Switch4_g;
      rtb_UnitDelay_kzl = rtb_Merge1;
    }

    /* End of Switch: '<S196>/Switch1' */

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion: '<S196>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_UnitDelay_kzl;

    /* Selector: '<S195>/Selector6' incorporates:
     *  Concatenate: '<S195>/Matrix Concatenate'
     *  Selector: '<S195>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S195>/Selector2' incorporates:
     *  Concatenate: '<S195>/Matrix Concatenate'
     *  Selector: '<S195>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S196>/Switch2' incorporates:
     *  Sum: '<S252>/Subtract'
     *  Sum: '<S252>/Subtract1'
     *  Trigonometry: '<S252>/Atan2'
     *  UnitDelay: '<S196>/Unit Delay1'
     */
    if (rtb_Compare_jq) {
      rtb_Modulation_Drv = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Modulation_Drv = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S196>/Switch2' */

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion: '<S196>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Modulation_Drv;

    /* Merge: '<S17>/Merge7' incorporates:
     *  SignalConversion: '<S193>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = UnitDelay_e;

    /* Merge: '<S17>/Merge1' incorporates:
     *  Constant: '<S196>/Constant2'
     *  SignalConversion generated from: '<S193>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S17>/Merge4' incorporates:
     *  Constant: '<S196>/Constant5'
     *  SignalConversion generated from: '<S193>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S17>/Merge5' incorporates:
     *  Constant: '<S196>/Constant6'
     *  SignalConversion generated from: '<S193>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S17>/Merge6' incorporates:
     *  Constant: '<S196>/Constant1'
     *  SignalConversion generated from: '<S193>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S194>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S193>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Switch4_g;

    /* Update for UnitDelay: '<S246>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch8;

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S196>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_UnitDelay_kzl;

    /* Update for UnitDelay: '<S196>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Modulation_Drv;

    /* End of Outputs for SubSystem: '<S17>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S17>/Pass Through' incorporates:
     *  ActionPort: '<S192>/Action Port'
     */
    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S192>/Constant'
     *  SignalConversion generated from: '<S192>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion generated from: '<S192>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S17>/Merge1' incorporates:
     *  SignalConversion generated from: '<S192>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S17>/Merge2' incorporates:
     *  SignalConversion generated from: '<S192>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion generated from: '<S192>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S17>/Merge4' incorporates:
     *  SignalConversion generated from: '<S192>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = UnitDelay;

    /* Merge: '<S17>/Merge5' incorporates:
     *  SignalConversion generated from: '<S192>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = UnitDelay_e;

    /* Merge: '<S17>/Merge6' incorporates:
     *  SignalConversion generated from: '<S192>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* End of Outputs for SubSystem: '<S17>/Pass Through' */
  }

  /* End of If: '<S17>/If' */

  /* UnitDelay: '<S346>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S346>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S346>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_nz = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_nz = -1.0;
  } else {
    rtb_Add_nz = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S346>/Product1' incorporates:
   *  Signum: '<S346>/Sign1'
   *  Signum: '<S346>/Sign2'
   */
  rtb_thetay *= rtb_Add_nz;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S346>/Switch' incorporates:
   *  Constant: '<S346>/Constant'
   *  Constant: '<S351>/Constant'
   *  Constant: '<S352>/Constant'
   *  Logic: '<S346>/or'
   *  Product: '<S346>/Product1'
   *  RelationalOperator: '<S351>/Compare'
   *  RelationalOperator: '<S352>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_thetay_a = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_thetay_a = 0.0;
  }

  /* End of Switch: '<S346>/Switch' */

  /* RelationalOperator: '<S353>/Compare' incorporates:
   *  Constant: '<S353>/Constant'
   */
  UnitDelay = (rtb_thetay_a == 0.0);

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  UnitDelay_e = (rtb_thetay_a > 0.0);

  /* Abs: '<S346>/Abs' incorporates:
   *  Sum: '<S346>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S346>/Switch5' incorporates:
   *  Constant: '<S346>/Constant1'
   *  Switch: '<S346>/Switch1'
   *  UnaryMinus: '<S346>/Unary Minus'
   */
  if (UnitDelay) {
    /* SignalConversion generated from: '<S346>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S346>/Constant4'
     *  Constant: '<S346>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S346>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S346>/Constant2'
     *  Constant: '<S346>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S346>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S346>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch4_g = rtb_LookupTableDynamic_j;
    rtb_thetay = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S346>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S346>/Constant10'
     *  Constant: '<S346>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S346>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S346>/Constant7'
     *  Constant: '<S346>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S346>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S346>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch4_g = rtb_LookupTableDynamic1_i;

    /* Switch: '<S346>/Switch3' incorporates:
     *  Constant: '<S346>/Constant1'
     *  Constant: '<S346>/Constant3'
     *  UnaryMinus: '<S346>/Unary Minus'
     */
    if (UnitDelay_e) {
      rtb_thetay = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S346>/Switch3' */
  }

  /* End of Switch: '<S346>/Switch5' */

  /* Product: '<S346>/Product' incorporates:
   *  Switch: '<S346>/Switch1'
   */
  rtb_thetay *= rtb_Switch4_g;

  /* Switch: '<S357>/Init' incorporates:
   *  UnitDelay: '<S357>/FixPt Unit Delay1'
   *  UnitDelay: '<S357>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_thetay_a;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S357>/Init' */

  /* Sum: '<S355>/Sum1' */
  rtb_Switch8 = rtb_thetay_a - rtb_Merge1;

  /* Switch: '<S356>/Switch2' incorporates:
   *  RelationalOperator: '<S356>/LowerRelop1'
   */
  if (!(rtb_Switch8 > rtb_thetay)) {
    /* Switch: '<S346>/Switch2' incorporates:
     *  Constant: '<S346>/Constant1'
     *  Switch: '<S346>/Switch4'
     */
    if (UnitDelay) {
      rtb_UnitDelay_kzl = Translation_Speed_Rate_Limit_Dec;
    } else if (UnitDelay_e) {
      /* Switch: '<S346>/Switch4' incorporates:
       *  Constant: '<S346>/Constant1'
       */
      rtb_UnitDelay_kzl = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S346>/Switch4' incorporates:
       *  Constant: '<S346>/Constant3'
       *  UnaryMinus: '<S346>/Unary Minus1'
       */
      rtb_UnitDelay_kzl = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S346>/Switch2' */

    /* Product: '<S346>/Product2' */
    rtb_UnitDelay_kzl *= rtb_Switch4_g;

    /* Switch: '<S356>/Switch' incorporates:
     *  RelationalOperator: '<S356>/UpperRelop'
     */
    if (rtb_Switch8 < rtb_UnitDelay_kzl) {
      rtb_thetay = rtb_UnitDelay_kzl;
    } else {
      rtb_thetay = rtb_Switch8;
    }

    /* End of Switch: '<S356>/Switch' */
  }

  /* End of Switch: '<S356>/Switch2' */

  /* Sum: '<S355>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_thetay + rtb_Merge1;

  /* Switch: '<S349>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S349>/Switch' incorporates:
     *  Constant: '<S373>/Constant3'
     *  Constant: '<S373>/Constant4'
     *  Math: '<S373>/Math Function'
     *  Sum: '<S349>/Subtract'
     *  Sum: '<S373>/Add1'
     *  Sum: '<S373>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_rad)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S349>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S349>/Switch' */

  /* Sum: '<S369>/Add1' incorporates:
   *  Constant: '<S369>/Constant3'
   *  Constant: '<S369>/Constant4'
   *  Math: '<S369>/Math Function'
   *  Sum: '<S348>/Add'
   *  Sum: '<S368>/Sum'
   *  Sum: '<S369>/Add2'
   */
  rtb_thetay = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_rad) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S371>/Sum1' incorporates:
   *  Constant: '<S368>/Constant2'
   *  Product: '<S371>/Product'
   *  Sum: '<S371>/Sum'
   *  UnitDelay: '<S371>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_thetay - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S368>/Product' incorporates:
   *  Constant: '<S368>/Constant3'
   */
  rtb_Switch4_g = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S370>/Diff' incorporates:
   *  UnitDelay: '<S370>/UD'
   *
   * Block description for '<S370>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S370>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Switch4_g - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S368>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Heading_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Heading_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Heading_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S368>/Add' incorporates:
   *  Gain: '<S368>/Gain1'
   *  Saturate: '<S368>/Saturation'
   */
  rtb_UnitDelay_kzl = (Steering_Heading_Control_P * rtb_thetay) + Rot_Mat_idx_0;

  /* Sum: '<S368>/Subtract' incorporates:
   *  Constant: '<S368>/Constant'
   */
  rtb_rx_j = Steering_Heading_Control_Total_UL - rtb_UnitDelay_kzl;

  /* Sum: '<S368>/Sum2' incorporates:
   *  Gain: '<S368>/Gain2'
   *  UnitDelay: '<S368>/Unit Delay'
   */
  rtb_Switch8 = (Steering_Heading_Control_I * rtb_thetay) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S372>/Switch2' incorporates:
   *  RelationalOperator: '<S372>/LowerRelop1'
   */
  if (!(rtb_Switch8 > rtb_rx_j)) {
    /* Sum: '<S368>/Subtract1' incorporates:
     *  Constant: '<S368>/Constant1'
     */
    rtb_Modulation_Drv = Steering_Heading_Control_Total_LL - rtb_UnitDelay_kzl;

    /* Switch: '<S372>/Switch' incorporates:
     *  RelationalOperator: '<S372>/UpperRelop'
     */
    if (rtb_Switch8 < rtb_Modulation_Drv) {
      rtb_rx_j = rtb_Modulation_Drv;
    } else {
      rtb_rx_j = rtb_Switch8;
    }

    /* End of Switch: '<S372>/Switch' */
  }

  /* End of Switch: '<S372>/Switch2' */

  /* Saturate: '<S368>/Saturation1' */
  if (rtb_rx_j > Steering_Heading_Control_I_UL) {
    rtb_Switch8 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_j < Steering_Heading_Control_I_LL) {
    rtb_Switch8 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch8 = rtb_rx_j;
  }

  /* End of Saturate: '<S368>/Saturation1' */

  /* Sum: '<S368>/Add1' */
  Rot_Mat_idx_0 = rtb_UnitDelay_kzl + rtb_Switch8;

  /* Saturate: '<S368>/Saturation2' */
  if (Rot_Mat_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S368>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (Rot_Mat_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S368>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S368>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S368>/Saturation2' */

  /* Switch: '<S348>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S359>/Switch' incorporates:
     *  Abs: '<S359>/Abs'
     *  Constant: '<S359>/Constant'
     *  Constant: '<S367>/Constant'
     *  RelationalOperator: '<S367>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_rx_j = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_rx_j = 0.0;
    }

    /* End of Switch: '<S359>/Switch' */
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S348>/Switch' */

  /* Signum: '<S358>/Sign2' incorporates:
   *  UnitDelay: '<S358>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_thetay = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S358>/Sign1' */
  if (rtIsNaN(rtb_rx_j)) {
    rtb_Add_nz = (rtNaN);
  } else if (rtb_rx_j < 0.0) {
    rtb_Add_nz = -1.0;
  } else {
    rtb_Add_nz = (rtb_rx_j > 0.0);
  }

  /* Product: '<S358>/Product1' incorporates:
   *  Signum: '<S358>/Sign1'
   *  Signum: '<S358>/Sign2'
   */
  rtb_thetay *= rtb_Add_nz;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S358>/Switch' incorporates:
   *  Constant: '<S358>/Constant'
   *  Constant: '<S360>/Constant'
   *  Constant: '<S361>/Constant'
   *  Logic: '<S358>/or'
   *  Product: '<S358>/Product1'
   *  RelationalOperator: '<S360>/Compare'
   *  RelationalOperator: '<S361>/Compare'
   *  UnitDelay: '<S358>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_thetay_a = rtb_rx_j;
  } else {
    rtb_thetay_a = 0.0;
  }

  /* End of Switch: '<S358>/Switch' */

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S362>/Constant'
   */
  UnitDelay = (rtb_thetay_a == 0.0);

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  UnitDelay_e = (rtb_thetay_a > 0.0);

  /* Abs: '<S358>/Abs' incorporates:
   *  Sum: '<S358>/Subtract'
   *  UnitDelay: '<S358>/Unit Delay'
   */
  rtb_UnitDelay_kzl = fabs(Code_Gen_Model_B.Steering_Localized_Cmd - rtb_rx_j);

  /* Switch: '<S358>/Switch5' incorporates:
   *  Constant: '<S358>/Constant1'
   *  Switch: '<S358>/Switch1'
   *  UnaryMinus: '<S358>/Unary Minus'
   */
  if (UnitDelay) {
    /* SignalConversion generated from: '<S358>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S358>/Constant4'
     *  Constant: '<S358>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S358>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S358>/Constant2'
     *  Constant: '<S358>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S358>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S358>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_UnitDelay_kzl, &rtb_Minus_n[0], 1U);
    rtb_UnitDelay_kzl = rtb_LookupTableDynamic;
    rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S358>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S358>/Constant10'
     *  Constant: '<S358>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S358>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S358>/Constant7'
     *  Constant: '<S358>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S358>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S358>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_UnitDelay_kzl, &rtb_Minus_n[0], 1U);
    rtb_UnitDelay_kzl = rtb_LookupTableDynamic1;

    /* Switch: '<S358>/Switch3' incorporates:
     *  Constant: '<S358>/Constant1'
     *  Constant: '<S358>/Constant3'
     *  UnaryMinus: '<S358>/Unary Minus'
     */
    if (UnitDelay_e) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S358>/Switch3' */
  }

  /* End of Switch: '<S358>/Switch5' */

  /* Product: '<S358>/Product' incorporates:
   *  Switch: '<S358>/Switch1'
   */
  rtb_thetay_o = rtb_thetay * rtb_UnitDelay_kzl;

  /* Switch: '<S366>/Init' incorporates:
   *  UnitDelay: '<S366>/FixPt Unit Delay1'
   *  UnitDelay: '<S366>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_j = rtb_thetay_a;
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S366>/Init' */

  /* Sum: '<S364>/Sum1' */
  rtb_Modulation_Drv = rtb_thetay_a - rtb_rx_j;

  /* Switch: '<S365>/Switch2' incorporates:
   *  RelationalOperator: '<S365>/LowerRelop1'
   */
  if (!(rtb_Modulation_Drv > rtb_thetay_o)) {
    /* Switch: '<S358>/Switch2' incorporates:
     *  Constant: '<S358>/Constant1'
     *  Constant: '<S358>/Constant3'
     *  Switch: '<S358>/Switch4'
     *  UnaryMinus: '<S358>/Unary Minus1'
     */
    if (UnitDelay) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (UnitDelay_e) {
      /* Switch: '<S358>/Switch4' incorporates:
       *  Constant: '<S358>/Constant1'
       */
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S358>/Product2' incorporates:
     *  Switch: '<S358>/Switch2'
     */
    rtb_Switch2_p2 = rtb_thetay * rtb_UnitDelay_kzl;

    /* Switch: '<S365>/Switch' incorporates:
     *  RelationalOperator: '<S365>/UpperRelop'
     */
    if (rtb_Modulation_Drv < rtb_Switch2_p2) {
      rtb_thetay_o = rtb_Switch2_p2;
    } else {
      rtb_thetay_o = rtb_Modulation_Drv;
    }

    /* End of Switch: '<S365>/Switch' */
  }

  /* End of Switch: '<S365>/Switch2' */

  /* Sum: '<S364>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_thetay_o + rtb_rx_j;

  /* Outputs for Atomic SubSystem: '<S261>/Initialize Function' */
  /* Sum: '<S347>/Add' incorporates:
   *  Constant: '<S347>/Constant'
   *  Constant: '<S347>/Constant4'
   *  Constant: '<S347>/Constant5'
   *  Trigonometry: '<S347>/Atan2'
   */
  rtb_UnitDelay_kzl = rt_atan2d_snf(Distance_FL_y, 0.2619375) +
    1.5707963267948966;

  /* End of Outputs for SubSystem: '<S261>/Initialize Function' */

  /* Fcn: '<S381>/r->x' incorporates:
   *  Fcn: '<S386>/r->x'
   *  Fcn: '<S391>/r->x'
   *  Fcn: '<S396>/r->x'
   */
  rtb_Modulation_Drv = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S375>/Add' incorporates:
   *  Fcn: '<S381>/r->x'
   *  Fcn: '<S382>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_UnitDelay_kzl)) + rtb_Modulation_Drv;

  /* Fcn: '<S381>/theta->y' incorporates:
   *  Fcn: '<S386>/theta->y'
   *  Fcn: '<S391>/theta->y'
   *  Fcn: '<S396>/theta->y'
   */
  rtb_Switch2_p2 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S375>/Add' incorporates:
   *  Fcn: '<S381>/theta->y'
   *  Fcn: '<S382>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_UnitDelay_kzl)) + rtb_Switch2_p2;

  /* Fcn: '<S380>/x->r' */
  rtb_thetay_a = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S383>/Compare' incorporates:
   *  Constant: '<S383>/Constant'
   */
  UnitDelay = (rtb_thetay_a == 0.0);

  /* Switch: '<S379>/Switch1' */
  if (UnitDelay) {
    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S379>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S379>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_thetay_a;
  }

  /* End of Switch: '<S379>/Switch1' */

  /* Sum: '<S376>/Add' incorporates:
   *  Fcn: '<S387>/r->x'
   *  Fcn: '<S387>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Modulation_Drv;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_p2;

  /* Fcn: '<S385>/x->r' */
  rtb_thetay_o = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S388>/Compare' incorporates:
   *  Constant: '<S388>/Constant'
   */
  UnitDelay_e = (rtb_thetay_o == 0.0);

  /* Switch: '<S384>/Switch1' */
  if (UnitDelay_e) {
    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S384>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S384>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_thetay_o;
  }

  /* End of Switch: '<S384>/Switch1' */

  /* Sum: '<S377>/Add' incorporates:
   *  Fcn: '<S392>/r->x'
   *  Fcn: '<S392>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Modulation_Drv;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_p2;

  /* Fcn: '<S390>/x->r' */
  rtb_rx_j = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S393>/Compare' incorporates:
   *  Constant: '<S393>/Constant'
   */
  rtb_Compare_jq = (rtb_rx_j == 0.0);

  /* Switch: '<S389>/Switch1' */
  if (rtb_Compare_jq) {
    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S389>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S389>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_j;
  }

  /* End of Switch: '<S389>/Switch1' */

  /* Sum: '<S378>/Add' incorporates:
   *  Fcn: '<S397>/r->x'
   *  Fcn: '<S397>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Modulation_Drv;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Switch2_p2;

  /* Fcn: '<S395>/x->r' */
  rtb_thetay_c = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S398>/Compare' incorporates:
   *  Constant: '<S398>/Constant'
   */
  rtb_AT_Tag_6_Active = (rtb_thetay_c == 0.0);

  /* Switch: '<S394>/Switch1' */
  if (rtb_AT_Tag_6_Active) {
    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S394>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S394>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_c;
  }

  /* End of Switch: '<S394>/Switch1' */

  /* Product: '<S374>/Divide' incorporates:
   *  Abs: '<S374>/Abs'
   *  Abs: '<S374>/Abs1'
   *  Abs: '<S374>/Abs2'
   *  Abs: '<S374>/Abs3'
   *  Constant: '<S374>/Constant'
   *  MinMax: '<S374>/Max'
   */
  rtb_thetay_a = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S374>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_thetay_a;

  /* Switch: '<S379>/Switch' */
  if (!UnitDelay) {
    /* Switch: '<S379>/Switch' incorporates:
     *  Fcn: '<S380>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S379>/Switch' */

  /* Trigonometry: '<S275>/Cos4' incorporates:
   *  Switch: '<S264>/Angle_Switch'
   *  Trigonometry: '<S274>/Cos4'
   */
  rtb_Add_nz = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S253>/Add1' incorporates:
   *  Constant: '<S253>/Constant3'
   *  Constant: '<S253>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S253>/Math Function'
   *  Sum: '<S18>/Add'
   *  Sum: '<S253>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S275>/Sin5' incorporates:
   *  UnaryMinus: '<S273>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S275>/Sin4' incorporates:
   *  Switch: '<S264>/Angle_Switch'
   *  Trigonometry: '<S274>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S275>/Cos5' incorporates:
   *  UnaryMinus: '<S273>/Unary Minus'
   */
  rtb_thetay_o = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S275>/Subtract1' incorporates:
   *  Product: '<S275>/Product2'
   *  Product: '<S275>/Product3'
   *  Trigonometry: '<S275>/Cos4'
   *  Trigonometry: '<S275>/Sin4'
   */
  rtb_UnitDelay_kzl = (rtb_Add_nz * rtb_rx_j) + (rtb_MatrixConcatenate_b_idx_0 *
    rtb_thetay_o);

  /* Sum: '<S275>/Subtract' incorporates:
   *  Product: '<S275>/Product'
   *  Product: '<S275>/Product1'
   *  Trigonometry: '<S275>/Cos4'
   *  Trigonometry: '<S275>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Add_nz * rtb_thetay_o) -
    (rtb_MatrixConcatenate_b_idx_0 * rtb_rx_j);

  /* Math: '<S275>/Hypot' */
  rtb_Switch2_p2 = rt_hypotd_snf(rtb_Modulation_Drv, rtb_UnitDelay_kzl);

  /* Switch: '<S275>/Switch' incorporates:
   *  Constant: '<S275>/Constant'
   *  Constant: '<S275>/Constant1'
   *  Constant: '<S276>/Constant'
   *  Product: '<S275>/Divide'
   *  Product: '<S275>/Divide1'
   *  RelationalOperator: '<S276>/Compare'
   *  Switch: '<S275>/Switch1'
   */
  if (rtb_Switch2_p2 > 1.0E-6) {
    rtb_thetay_c = rtb_UnitDelay_kzl / rtb_Switch2_p2;
    rtb_thetay_o = rtb_Modulation_Drv / rtb_Switch2_p2;
  } else {
    rtb_thetay_c = 0.0;
    rtb_thetay_o = 1.0;
  }

  /* End of Switch: '<S275>/Switch' */

  /* Switch: '<S264>/Speed_Switch' incorporates:
   *  Abs: '<S264>/Abs'
   *  Constant: '<S272>/Constant'
   *  RelationalOperator: '<S272>/Compare'
   *  Switch: '<S264>/Angle_Switch'
   *  Trigonometry: '<S274>/Atan1'
   *  Trigonometry: '<S275>/Atan1'
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_c, rtb_thetay_o)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S274>/Subtract1' incorporates:
     *  Product: '<S274>/Product2'
     *  Product: '<S274>/Product3'
     *  UnaryMinus: '<S264>/Unary Minus'
     */
    rtb_UnitDelay_kzl = (rtb_Add_nz * Code_Gen_Model_ConstB.Sin5) +
      (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S274>/Subtract' incorporates:
     *  Product: '<S274>/Product'
     *  Product: '<S274>/Product1'
     */
    rtb_Switch2_p2 = (rtb_Add_nz * Code_Gen_Model_ConstB.Cos5) -
      (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S274>/Hypot' */
    rtb_Modulation_Drv = rt_hypotd_snf(rtb_Switch2_p2, rtb_UnitDelay_kzl);

    /* Switch: '<S274>/Switch1' incorporates:
     *  Constant: '<S274>/Constant'
     *  Constant: '<S274>/Constant1'
     *  Constant: '<S277>/Constant'
     *  Product: '<S274>/Divide'
     *  Product: '<S274>/Divide1'
     *  RelationalOperator: '<S277>/Compare'
     *  Switch: '<S274>/Switch'
     */
    if (rtb_Modulation_Drv > 1.0E-6) {
      rtb_Switch2_p2 /= rtb_Modulation_Drv;
      rtb_UnitDelay_kzl /= rtb_Modulation_Drv;
    } else {
      rtb_Switch2_p2 = 1.0;
      rtb_UnitDelay_kzl = 0.0;
    }

    /* End of Switch: '<S274>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_UnitDelay_kzl, rtb_Switch2_p2);
  } else {
    rtb_thetay = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S267>/Product2' incorporates:
   *  Constant: '<S267>/Constant'
   *  Switch: '<S264>/Speed_Switch'
   */
  rtb_thetay_c = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S262>/Sign' */
  if (rtIsNaN(rtb_thetay_c)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_c < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_c > 0.0);
  }

  /* Signum: '<S262>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_nz = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_nz = -1.0;
  } else {
    rtb_Add_nz = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S265>/Add' incorporates:
   *  Sum: '<S266>/Sum'
   */
  rtb_Product_d = rtb_rx_j - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S257>/Product' incorporates:
   *  Abs: '<S262>/Abs'
   *  Abs: '<S265>/Abs'
   *  Constant: '<S268>/Constant'
   *  Constant: '<S278>/Constant3'
   *  Constant: '<S278>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S262>/OR'
   *  Lookup_n-D: '<S265>/1-D Lookup Table'
   *  Math: '<S278>/Math Function'
   *  RelationalOperator: '<S262>/Equal1'
   *  RelationalOperator: '<S268>/Compare'
   *  Signum: '<S262>/Sign'
   *  Signum: '<S262>/Sign1'
   *  Sum: '<S265>/Add'
   *  Sum: '<S278>/Add1'
   *  Sum: '<S278>/Add2'
   */
  rtb_thetay_c = (((real_T)((rtb_thetay == rtb_Add_nz) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled41,
     Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S263>/Gain' */
  rtb_Switch2_p2 = Drive_Motor_Control_FF * rtb_thetay_c;

  /* Sum: '<S263>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S270>/Sum1' incorporates:
   *  Constant: '<S263>/Constant2'
   *  Product: '<S270>/Product'
   *  Sum: '<S270>/Sum'
   *  UnitDelay: '<S270>/Unit Delay1'
   */
  rtb_UnitDelay_kzl = ((rtb_thetay_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                       Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S263>/Product' incorporates:
   *  Constant: '<S263>/Constant3'
   */
  rtb_Modulation_Drv = rtb_UnitDelay_kzl * Drive_Motor_Control_D;

  /* Sum: '<S269>/Diff' incorporates:
   *  UnitDelay: '<S269>/UD'
   *
   * Block description for '<S269>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S269>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Modulation_Drv - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S263>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S263>/Add' incorporates:
   *  Gain: '<S263>/Gain1'
   *  Saturate: '<S263>/Saturation'
   */
  rtb_Gyro_Angle_Adjustment = ((Drive_Motor_Control_P * rtb_thetay_c) +
    rtb_Switch2_p2) + Rot_Mat_idx_0;

  /* Sum: '<S263>/Subtract' incorporates:
   *  Constant: '<S263>/Constant'
   */
  rtb_thetay_o = 1.0 - rtb_Gyro_Angle_Adjustment;

  /* Sum: '<S263>/Sum2' incorporates:
   *  Gain: '<S263>/Gain2'
   *  UnitDelay: '<S263>/Unit Delay'
   */
  rtb_Switch2_p2 = (Drive_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S271>/Switch2' incorporates:
   *  Constant: '<S263>/Constant'
   *  RelationalOperator: '<S271>/LowerRelop1'
   *  Sum: '<S263>/Subtract'
   */
  if (!(rtb_Switch2_p2 > (1.0 - rtb_Gyro_Angle_Adjustment))) {
    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S263>/Constant1'
     *  RelationalOperator: '<S271>/UpperRelop'
     *  Sum: '<S263>/Subtract1'
     */
    if (rtb_Switch2_p2 < (-1.0 - rtb_Gyro_Angle_Adjustment)) {
      rtb_thetay_o = -1.0 - rtb_Gyro_Angle_Adjustment;
    } else {
      rtb_thetay_o = rtb_Switch2_p2;
    }

    /* End of Switch: '<S271>/Switch' */
  }

  /* End of Switch: '<S271>/Switch2' */

  /* Saturate: '<S263>/Saturation1' */
  if (rtb_thetay_o > Drive_Motor_Control_I_UL) {
    rtb_Switch2_p2 = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_o < Drive_Motor_Control_I_LL) {
    rtb_Switch2_p2 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_p2 = rtb_thetay_o;
  }

  /* End of Saturate: '<S263>/Saturation1' */

  /* Sum: '<S263>/Add1' */
  Rot_Mat_idx_0 = rtb_Gyro_Angle_Adjustment + rtb_Switch2_p2;

  /* Saturate: '<S263>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S263>/Saturation2' */

  /* Sum: '<S279>/Add1' incorporates:
   *  Constant: '<S279>/Constant3'
   *  Constant: '<S279>/Constant4'
   *  Math: '<S279>/Math Function'
   *  Sum: '<S279>/Add2'
   */
  rtb_thetay_c = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S281>/Sum1' incorporates:
   *  Constant: '<S266>/Constant2'
   *  Product: '<S281>/Product'
   *  Sum: '<S281>/Sum'
   *  UnitDelay: '<S281>/Unit Delay1'
   */
  rtb_Gyro_Angle_Adjustment = ((rtb_thetay_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S266>/Product' incorporates:
   *  Constant: '<S266>/Constant3'
   */
  rtb_Subtract1_of = rtb_Gyro_Angle_Adjustment * Steering_Motor_Control_D;

  /* Sum: '<S280>/Diff' incorporates:
   *  UnitDelay: '<S280>/UD'
   *
   * Block description for '<S280>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S280>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S266>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S266>/Add' incorporates:
   *  Gain: '<S266>/Gain1'
   *  Saturate: '<S266>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_thetay_c) +
    Rot_Mat_idx_0;

  /* Sum: '<S266>/Subtract' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_thetay_o = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S266>/Sum2' incorporates:
   *  Gain: '<S266>/Gain2'
   *  UnitDelay: '<S266>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S282>/Switch2' incorporates:
   *  Constant: '<S266>/Constant'
   *  RelationalOperator: '<S282>/LowerRelop1'
   *  Sum: '<S266>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S266>/Constant1'
     *  RelationalOperator: '<S282>/UpperRelop'
     *  Sum: '<S266>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_thetay_o = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_thetay_o = rtb_Sum2_e;
    }

    /* End of Switch: '<S282>/Switch' */
  }

  /* End of Switch: '<S282>/Switch2' */

  /* Saturate: '<S266>/Saturation1' */
  if (rtb_thetay_o > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_o < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_thetay_o;
  }

  /* End of Saturate: '<S266>/Saturation1' */

  /* Sum: '<S266>/Add1' */
  Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_e;

  /* Saturate: '<S266>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S266>/Saturation2' */

  /* Product: '<S374>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_thetay_a;

  /* Switch: '<S384>/Switch' */
  if (!UnitDelay_e) {
    /* Switch: '<S384>/Switch' incorporates:
     *  Fcn: '<S385>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S384>/Switch' */

  /* Trigonometry: '<S296>/Cos4' incorporates:
   *  Switch: '<S285>/Angle_Switch'
   *  Trigonometry: '<S295>/Cos4'
   */
  rtb_Add_nz = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S254>/Add1' incorporates:
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S254>/Math Function'
   *  Sum: '<S18>/Add1'
   *  Sum: '<S254>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S296>/Sin5' incorporates:
   *  UnaryMinus: '<S294>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S296>/Sin4' incorporates:
   *  Switch: '<S285>/Angle_Switch'
   *  Trigonometry: '<S295>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S296>/Cos5' incorporates:
   *  UnaryMinus: '<S294>/Unary Minus'
   */
  rtb_thetay_o = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S296>/Subtract1' incorporates:
   *  Product: '<S296>/Product2'
   *  Product: '<S296>/Product3'
   *  Trigonometry: '<S296>/Cos4'
   *  Trigonometry: '<S296>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = (rtb_Add_nz * rtb_rx_j) +
    (rtb_MatrixConcatenate_b_idx_0 * rtb_thetay_o);

  /* Sum: '<S296>/Subtract' incorporates:
   *  Product: '<S296>/Product'
   *  Product: '<S296>/Product1'
   *  Trigonometry: '<S296>/Cos4'
   *  Trigonometry: '<S296>/Sin4'
   */
  rtb_Subtract1_jk = (rtb_Add_nz * rtb_thetay_o) -
    (rtb_MatrixConcatenate_b_idx_0 * rtb_rx_j);

  /* Math: '<S296>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_jk, rtb_MatrixConcatenate_b_idx_1);

  /* Switch: '<S296>/Switch' incorporates:
   *  Constant: '<S296>/Constant'
   *  Constant: '<S296>/Constant1'
   *  Constant: '<S297>/Constant'
   *  Product: '<S296>/Divide'
   *  Product: '<S296>/Divide1'
   *  RelationalOperator: '<S297>/Compare'
   *  Switch: '<S296>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_c = rtb_MatrixConcatenate_b_idx_1 / rtb_Hypot_bl;
    rtb_thetay_o = rtb_Subtract1_jk / rtb_Hypot_bl;
  } else {
    rtb_thetay_c = 0.0;
    rtb_thetay_o = 1.0;
  }

  /* End of Switch: '<S296>/Switch' */

  /* Switch: '<S285>/Speed_Switch' incorporates:
   *  Abs: '<S285>/Abs'
   *  Constant: '<S293>/Constant'
   *  RelationalOperator: '<S293>/Compare'
   *  Switch: '<S285>/Angle_Switch'
   *  Trigonometry: '<S295>/Atan1'
   *  Trigonometry: '<S296>/Atan1'
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_c, rtb_thetay_o)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S295>/Subtract1' incorporates:
     *  Product: '<S295>/Product2'
     *  Product: '<S295>/Product3'
     *  UnaryMinus: '<S285>/Unary Minus'
     */
    rtb_MatrixConcatenate_b_idx_1 = (rtb_Add_nz * Code_Gen_Model_ConstB.Sin5_m)
      + (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S295>/Subtract' incorporates:
     *  Product: '<S295>/Product'
     *  Product: '<S295>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_nz * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S295>/Hypot' */
    rtb_Subtract1_jk = rt_hypotd_snf(rtb_Hypot_bl, rtb_MatrixConcatenate_b_idx_1);

    /* Switch: '<S295>/Switch1' incorporates:
     *  Constant: '<S295>/Constant'
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S298>/Constant'
     *  Product: '<S295>/Divide'
     *  Product: '<S295>/Divide1'
     *  RelationalOperator: '<S298>/Compare'
     *  Switch: '<S295>/Switch'
     */
    if (rtb_Subtract1_jk > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_jk;
      rtb_MatrixConcatenate_b_idx_1 /= rtb_Subtract1_jk;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S295>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1, rtb_Hypot_bl);
  } else {
    rtb_thetay = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S288>/Product2' incorporates:
   *  Constant: '<S288>/Constant'
   *  Switch: '<S285>/Speed_Switch'
   */
  rtb_thetay_c = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S283>/Sign' */
  if (rtIsNaN(rtb_thetay_c)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_c < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_c > 0.0);
  }

  /* Signum: '<S283>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_nz = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_nz = -1.0;
  } else {
    rtb_Add_nz = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S286>/Add' incorporates:
   *  Sum: '<S287>/Sum'
   */
  rtb_Product_d = rtb_rx_j - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S258>/Product' incorporates:
   *  Abs: '<S283>/Abs'
   *  Abs: '<S286>/Abs'
   *  Constant: '<S289>/Constant'
   *  Constant: '<S299>/Constant3'
   *  Constant: '<S299>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S283>/OR'
   *  Lookup_n-D: '<S286>/1-D Lookup Table'
   *  Math: '<S299>/Math Function'
   *  RelationalOperator: '<S283>/Equal1'
   *  RelationalOperator: '<S289>/Compare'
   *  Signum: '<S283>/Sign'
   *  Signum: '<S283>/Sign1'
   *  Sum: '<S286>/Add'
   *  Sum: '<S299>/Add1'
   *  Sum: '<S299>/Add2'
   */
  rtb_thetay_c = (((real_T)((rtb_thetay == rtb_Add_nz) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled41,
     Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S284>/Gain' */
  rtb_Hypot_bl = Drive_Motor_Control_FF * rtb_thetay_c;

  /* Sum: '<S284>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S291>/Sum1' incorporates:
   *  Constant: '<S284>/Constant2'
   *  Product: '<S291>/Product'
   *  Sum: '<S291>/Sum'
   *  UnitDelay: '<S291>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_thetay_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S284>/Product' incorporates:
   *  Constant: '<S284>/Constant3'
   */
  rtb_Subtract1_jk = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S290>/Diff' incorporates:
   *  UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_jk - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S284>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S284>/Add' incorporates:
   *  Gain: '<S284>/Gain1'
   *  Saturate: '<S284>/Saturation'
   */
  rtb_Add_ko = ((Drive_Motor_Control_P * rtb_thetay_c) + rtb_Hypot_bl) +
    Rot_Mat_idx_0;

  /* Sum: '<S284>/Subtract' incorporates:
   *  Constant: '<S284>/Constant'
   */
  rtb_thetay_o = 1.0 - rtb_Add_ko;

  /* Sum: '<S284>/Sum2' incorporates:
   *  Gain: '<S284>/Gain2'
   *  UnitDelay: '<S284>/Unit Delay'
   */
  rtb_Hypot_bl = (Drive_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S292>/Switch2' incorporates:
   *  Constant: '<S284>/Constant'
   *  RelationalOperator: '<S292>/LowerRelop1'
   *  Sum: '<S284>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_ko))) {
    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S284>/Constant1'
     *  RelationalOperator: '<S292>/UpperRelop'
     *  Sum: '<S284>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_ko)) {
      rtb_thetay_o = -1.0 - rtb_Add_ko;
    } else {
      rtb_thetay_o = rtb_Hypot_bl;
    }

    /* End of Switch: '<S292>/Switch' */
  }

  /* End of Switch: '<S292>/Switch2' */

  /* Saturate: '<S284>/Saturation1' */
  if (rtb_thetay_o > Drive_Motor_Control_I_UL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_o < Drive_Motor_Control_I_LL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_o;
  }

  /* End of Saturate: '<S284>/Saturation1' */

  /* Sum: '<S284>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_ko + rtb_Hypot_bl;

  /* Saturate: '<S284>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S284>/Saturation2' */

  /* Sum: '<S300>/Add1' incorporates:
   *  Constant: '<S300>/Constant3'
   *  Constant: '<S300>/Constant4'
   *  Math: '<S300>/Math Function'
   *  Sum: '<S300>/Add2'
   */
  rtb_thetay_c = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S302>/Sum1' incorporates:
   *  Constant: '<S287>/Constant2'
   *  Product: '<S302>/Product'
   *  Sum: '<S302>/Sum'
   *  UnitDelay: '<S302>/Unit Delay1'
   */
  rtb_Add_ko = ((rtb_thetay_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S287>/Product' incorporates:
   *  Constant: '<S287>/Constant3'
   */
  rtb_Subtract1_n = rtb_Add_ko * Steering_Motor_Control_D;

  /* Sum: '<S301>/Diff' incorporates:
   *  UnitDelay: '<S301>/UD'
   *
   * Block description for '<S301>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S301>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_n - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S287>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S287>/Add' incorporates:
   *  Gain: '<S287>/Gain1'
   *  Saturate: '<S287>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_0 = (Steering_Motor_Control_P * rtb_thetay_c) +
    Rot_Mat_idx_0;

  /* Sum: '<S287>/Subtract' incorporates:
   *  Constant: '<S287>/Constant'
   */
  rtb_thetay_o = 1.0 - rtb_MatrixConcatenate_b_idx_0;

  /* Sum: '<S287>/Sum2' incorporates:
   *  Gain: '<S287>/Gain2'
   *  UnitDelay: '<S287>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S303>/Switch2' incorporates:
   *  Constant: '<S287>/Constant'
   *  RelationalOperator: '<S303>/LowerRelop1'
   *  Sum: '<S287>/Subtract'
   */
  if (!(rtb_Sum2_oc > (1.0 - rtb_MatrixConcatenate_b_idx_0))) {
    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S287>/Constant1'
     *  RelationalOperator: '<S303>/UpperRelop'
     *  Sum: '<S287>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_MatrixConcatenate_b_idx_0)) {
      rtb_thetay_o = -1.0 - rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_thetay_o = rtb_Sum2_oc;
    }

    /* End of Switch: '<S303>/Switch' */
  }

  /* End of Switch: '<S303>/Switch2' */

  /* Saturate: '<S287>/Saturation1' */
  if (rtb_thetay_o > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_o < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_thetay_o;
  }

  /* End of Saturate: '<S287>/Saturation1' */

  /* Sum: '<S287>/Add1' */
  Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_0 + rtb_Sum2_oc;

  /* Saturate: '<S287>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S287>/Saturation2' */

  /* Product: '<S374>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_thetay_a;

  /* Switch: '<S389>/Switch' */
  if (!rtb_Compare_jq) {
    /* Switch: '<S389>/Switch' incorporates:
     *  Fcn: '<S390>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S389>/Switch' */

  /* Trigonometry: '<S317>/Cos4' incorporates:
   *  Switch: '<S306>/Angle_Switch'
   *  Trigonometry: '<S316>/Cos4'
   */
  rtb_Add_nz = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S255>/Add1' incorporates:
   *  Constant: '<S255>/Constant3'
   *  Constant: '<S255>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S255>/Math Function'
   *  Sum: '<S18>/Add2'
   *  Sum: '<S255>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S317>/Sin5' incorporates:
   *  UnaryMinus: '<S315>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S317>/Sin4' incorporates:
   *  Switch: '<S306>/Angle_Switch'
   *  Trigonometry: '<S316>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S317>/Cos5' incorporates:
   *  UnaryMinus: '<S315>/Unary Minus'
   */
  rtb_thetay_o = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S317>/Subtract1' incorporates:
   *  Product: '<S317>/Product2'
   *  Product: '<S317>/Product3'
   *  Trigonometry: '<S317>/Cos4'
   *  Trigonometry: '<S317>/Sin4'
   */
  rtb_Subtract1_ie = (rtb_Add_nz * rtb_rx_j) + (rtb_MatrixConcatenate_b_idx_0 *
    rtb_thetay_o);

  /* Sum: '<S317>/Subtract' incorporates:
   *  Product: '<S317>/Product'
   *  Product: '<S317>/Product1'
   *  Trigonometry: '<S317>/Cos4'
   *  Trigonometry: '<S317>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_nz * rtb_thetay_o) - (rtb_MatrixConcatenate_b_idx_0 *
    rtb_rx_j);

  /* Math: '<S317>/Hypot' */
  rtb_rx_j = rt_hypotd_snf(rtb_Subtract_n, rtb_Subtract1_ie);

  /* Switch: '<S317>/Switch' incorporates:
   *  Constant: '<S317>/Constant'
   *  Constant: '<S317>/Constant1'
   *  Constant: '<S318>/Constant'
   *  Product: '<S317>/Divide'
   *  Product: '<S317>/Divide1'
   *  RelationalOperator: '<S318>/Compare'
   *  Switch: '<S317>/Switch1'
   */
  if (rtb_rx_j > 1.0E-6) {
    rtb_thetay_c = rtb_Subtract1_ie / rtb_rx_j;
    rtb_thetay_o = rtb_Subtract_n / rtb_rx_j;
  } else {
    rtb_thetay_c = 0.0;
    rtb_thetay_o = 1.0;
  }

  /* End of Switch: '<S317>/Switch' */

  /* Switch: '<S306>/Speed_Switch' incorporates:
   *  Abs: '<S306>/Abs'
   *  Constant: '<S314>/Constant'
   *  RelationalOperator: '<S314>/Compare'
   *  Switch: '<S306>/Angle_Switch'
   *  Trigonometry: '<S316>/Atan1'
   *  Trigonometry: '<S317>/Atan1'
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_c, rtb_thetay_o)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S316>/Subtract1' incorporates:
     *  Product: '<S316>/Product2'
     *  Product: '<S316>/Product3'
     *  UnaryMinus: '<S306>/Unary Minus'
     */
    rtb_Subtract1_ie = (rtb_Add_nz * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S316>/Subtract' incorporates:
     *  Product: '<S316>/Product'
     *  Product: '<S316>/Product1'
     */
    rtb_Subtract_n = (rtb_Add_nz * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S316>/Hypot' */
    rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n,
      rtb_Subtract1_ie);

    /* Switch: '<S316>/Switch1' incorporates:
     *  Constant: '<S316>/Constant'
     *  Constant: '<S316>/Constant1'
     *  Constant: '<S319>/Constant'
     *  Product: '<S316>/Divide'
     *  Product: '<S316>/Divide1'
     *  RelationalOperator: '<S319>/Compare'
     *  Switch: '<S316>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
      rtb_Subtract_n /= rtb_MatrixConcatenate_b_idx_0;
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_ie /
        rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_Subtract_n = 1.0;
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S316>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Subtract_n);
  } else {
    rtb_thetay = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S309>/Product2' incorporates:
   *  Constant: '<S309>/Constant'
   *  Switch: '<S306>/Speed_Switch'
   */
  rtb_thetay_c = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S304>/Sign' */
  if (rtIsNaN(rtb_thetay_c)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_c < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_c > 0.0);
  }

  /* Signum: '<S304>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_nz = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_nz = -1.0;
  } else {
    rtb_Add_nz = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S307>/Add' incorporates:
   *  Sum: '<S308>/Sum'
   */
  rtb_Product_d = rtb_rx_j - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S259>/Product' incorporates:
   *  Abs: '<S304>/Abs'
   *  Abs: '<S307>/Abs'
   *  Constant: '<S310>/Constant'
   *  Constant: '<S320>/Constant3'
   *  Constant: '<S320>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S304>/OR'
   *  Lookup_n-D: '<S307>/1-D Lookup Table'
   *  Math: '<S320>/Math Function'
   *  RelationalOperator: '<S304>/Equal1'
   *  RelationalOperator: '<S310>/Compare'
   *  Signum: '<S304>/Sign'
   *  Signum: '<S304>/Sign1'
   *  Sum: '<S307>/Add'
   *  Sum: '<S320>/Add1'
   *  Sum: '<S320>/Add2'
   */
  rtb_thetay_c = (((real_T)((rtb_thetay == rtb_Add_nz) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled41,
     Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S305>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_thetay_c;

  /* Sum: '<S305>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_c -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S312>/Sum1' incorporates:
   *  Constant: '<S305>/Constant2'
   *  Product: '<S312>/Product'
   *  Sum: '<S312>/Sum'
   *  UnitDelay: '<S312>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_thetay_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S305>/Product' incorporates:
   *  Constant: '<S305>/Constant3'
   */
  rtb_Subtract1_ie = rtb_MatrixConcatenate_b_idx_0 * Drive_Motor_Control_D;

  /* Sum: '<S311>/Diff' incorporates:
   *  UnitDelay: '<S311>/UD'
   *
   * Block description for '<S311>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S311>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S305>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S305>/Add' incorporates:
   *  Gain: '<S305>/Gain1'
   *  Saturate: '<S305>/Saturation'
   */
  rtb_Add_iy = ((Drive_Motor_Control_P * rtb_thetay_c) + rtb_Subtract_n) +
    Rot_Mat_idx_0;

  /* Sum: '<S305>/Subtract' incorporates:
   *  Constant: '<S305>/Constant'
   */
  rtb_thetay_o = 1.0 - rtb_Add_iy;

  /* Sum: '<S305>/Sum2' incorporates:
   *  Gain: '<S305>/Gain2'
   *  UnitDelay: '<S305>/Unit Delay'
   */
  rtb_Subtract_n = (Drive_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S313>/Switch2' incorporates:
   *  Constant: '<S305>/Constant'
   *  RelationalOperator: '<S313>/LowerRelop1'
   *  Sum: '<S305>/Subtract'
   */
  if (!(rtb_Subtract_n > (1.0 - rtb_Add_iy))) {
    /* Switch: '<S313>/Switch' incorporates:
     *  Constant: '<S305>/Constant1'
     *  RelationalOperator: '<S313>/UpperRelop'
     *  Sum: '<S305>/Subtract1'
     */
    if (rtb_Subtract_n < (-1.0 - rtb_Add_iy)) {
      rtb_thetay_o = -1.0 - rtb_Add_iy;
    } else {
      rtb_thetay_o = rtb_Subtract_n;
    }

    /* End of Switch: '<S313>/Switch' */
  }

  /* End of Switch: '<S313>/Switch2' */

  /* Saturate: '<S305>/Saturation1' */
  if (rtb_thetay_o > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_o < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_thetay_o;
  }

  /* End of Saturate: '<S305>/Saturation1' */

  /* Sum: '<S305>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_iy + rtb_Subtract_n;

  /* Saturate: '<S305>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S305>/Saturation2' */

  /* Sum: '<S321>/Add1' incorporates:
   *  Constant: '<S321>/Constant3'
   *  Constant: '<S321>/Constant4'
   *  Math: '<S321>/Math Function'
   *  Sum: '<S321>/Add2'
   */
  rtb_thetay_c = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S323>/Sum1' incorporates:
   *  Constant: '<S308>/Constant2'
   *  Product: '<S323>/Product'
   *  Sum: '<S323>/Sum'
   *  UnitDelay: '<S323>/Unit Delay1'
   */
  rtb_rx_j = ((rtb_thetay_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
              Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S308>/Product' incorporates:
   *  Constant: '<S308>/Constant3'
   */
  rtb_Add_iy = rtb_rx_j * Steering_Motor_Control_D;

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
  Rot_Mat_idx_0 = rtb_Add_iy - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S308>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S308>/Add' incorporates:
   *  Gain: '<S308>/Gain1'
   *  Saturate: '<S308>/Saturation'
   */
  rtb_Add_nz = (Steering_Motor_Control_P * rtb_thetay_c) + Rot_Mat_idx_0;

  /* Sum: '<S308>/Subtract' incorporates:
   *  Constant: '<S308>/Constant'
   */
  rtb_thetay_o = 1.0 - rtb_Add_nz;

  /* Sum: '<S308>/Sum2' incorporates:
   *  Gain: '<S308>/Gain2'
   *  UnitDelay: '<S308>/Unit Delay'
   */
  rtb_Subtract1_h2 = (Steering_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S324>/Switch2' incorporates:
   *  Constant: '<S308>/Constant'
   *  RelationalOperator: '<S324>/LowerRelop1'
   *  Sum: '<S308>/Subtract'
   */
  if (!(rtb_Subtract1_h2 > (1.0 - rtb_Add_nz))) {
    /* Switch: '<S324>/Switch' incorporates:
     *  Constant: '<S308>/Constant1'
     *  RelationalOperator: '<S324>/UpperRelop'
     *  Sum: '<S308>/Subtract1'
     */
    if (rtb_Subtract1_h2 < (-1.0 - rtb_Add_nz)) {
      rtb_thetay_o = -1.0 - rtb_Add_nz;
    } else {
      rtb_thetay_o = rtb_Subtract1_h2;
    }

    /* End of Switch: '<S324>/Switch' */
  }

  /* End of Switch: '<S324>/Switch2' */

  /* Saturate: '<S308>/Saturation1' */
  if (rtb_thetay_o > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_h2 = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_o < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_h2 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_h2 = rtb_thetay_o;
  }

  /* End of Saturate: '<S308>/Saturation1' */

  /* Sum: '<S308>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_nz + rtb_Subtract1_h2;

  /* Saturate: '<S308>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S308>/Saturation2' */

  /* Product: '<S374>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_thetay_a;

  /* Switch: '<S394>/Switch' */
  if (!rtb_AT_Tag_6_Active) {
    /* Switch: '<S394>/Switch' incorporates:
     *  Fcn: '<S395>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S394>/Switch' */

  /* Trigonometry: '<S338>/Cos4' incorporates:
   *  Switch: '<S327>/Angle_Switch'
   *  Trigonometry: '<S337>/Cos4'
   */
  rtb_Add_nz = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S256>/Add1' incorporates:
   *  Constant: '<S256>/Constant3'
   *  Constant: '<S256>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S256>/Math Function'
   *  Sum: '<S18>/Add3'
   *  Sum: '<S256>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S338>/Sin5' incorporates:
   *  UnaryMinus: '<S336>/Unary Minus'
   */
  rtb_thetay_o = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S338>/Sin4' incorporates:
   *  Switch: '<S327>/Angle_Switch'
   *  Trigonometry: '<S337>/Sin4'
   */
  rtb_Minus_k_idx_0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S338>/Cos5' incorporates:
   *  UnaryMinus: '<S336>/Unary Minus'
   */
  rtb_thetay_a = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S338>/Subtract1' incorporates:
   *  Product: '<S338>/Product2'
   *  Product: '<S338>/Product3'
   *  Trigonometry: '<S338>/Cos4'
   *  Trigonometry: '<S338>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Add_nz * rtb_thetay_o) + (rtb_Minus_k_idx_0 *
    rtb_thetay_a);

  /* Sum: '<S338>/Subtract' incorporates:
   *  Product: '<S338>/Product'
   *  Product: '<S338>/Product1'
   *  Trigonometry: '<S338>/Cos4'
   *  Trigonometry: '<S338>/Sin4'
   */
  rtb_thetay_a = (rtb_Add_nz * rtb_thetay_a) - (rtb_Minus_k_idx_0 * rtb_thetay_o);

  /* Math: '<S338>/Hypot' */
  rtb_Hypot_o = rt_hypotd_snf(rtb_thetay_a, rtb_Minus_k_idx_1);

  /* Switch: '<S338>/Switch' incorporates:
   *  Constant: '<S338>/Constant'
   *  Constant: '<S338>/Constant1'
   *  Constant: '<S339>/Constant'
   *  Product: '<S338>/Divide'
   *  Product: '<S338>/Divide1'
   *  RelationalOperator: '<S339>/Compare'
   *  Switch: '<S338>/Switch1'
   */
  if (rtb_Hypot_o > 1.0E-6) {
    rtb_thetay_c = rtb_Minus_k_idx_1 / rtb_Hypot_o;
    rtb_thetay_a /= rtb_Hypot_o;
  } else {
    rtb_thetay_c = 0.0;
    rtb_thetay_a = 1.0;
  }

  /* End of Switch: '<S338>/Switch' */

  /* Switch: '<S327>/Speed_Switch' incorporates:
   *  Abs: '<S327>/Abs'
   *  Constant: '<S335>/Constant'
   *  RelationalOperator: '<S335>/Compare'
   *  Switch: '<S327>/Angle_Switch'
   *  Trigonometry: '<S337>/Atan1'
   *  Trigonometry: '<S338>/Atan1'
   *  UnaryMinus: '<S327>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_c, rtb_thetay_a)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S337>/Subtract1' incorporates:
     *  Product: '<S337>/Product2'
     *  Product: '<S337>/Product3'
     *  UnaryMinus: '<S327>/Unary Minus'
     */
    rtb_thetay_a = (rtb_Add_nz * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S337>/Subtract' incorporates:
     *  Product: '<S337>/Product'
     *  Product: '<S337>/Product1'
     */
    rtb_Minus_k_idx_0 = (rtb_Add_nz * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S337>/Hypot' */
    rtb_Add_nz = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_thetay_a);

    /* Switch: '<S337>/Switch1' incorporates:
     *  Constant: '<S337>/Constant'
     *  Constant: '<S337>/Constant1'
     *  Constant: '<S340>/Constant'
     *  Product: '<S337>/Divide'
     *  Product: '<S337>/Divide1'
     *  RelationalOperator: '<S340>/Compare'
     *  Switch: '<S337>/Switch'
     */
    if (rtb_Add_nz > 1.0E-6) {
      rtb_Minus_k_idx_0 /= rtb_Add_nz;
      rtb_thetay_a /= rtb_Add_nz;
    } else {
      rtb_Minus_k_idx_0 = 1.0;
      rtb_thetay_a = 0.0;
    }

    /* End of Switch: '<S337>/Switch1' */
    rtb_thetay_o = rt_atan2d_snf(rtb_thetay_a, rtb_Minus_k_idx_0);
  } else {
    rtb_thetay = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_thetay_o = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S330>/Product2' incorporates:
   *  Constant: '<S330>/Constant'
   *  Switch: '<S327>/Speed_Switch'
   */
  rtb_thetay_c = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S325>/Sign' */
  if (rtIsNaN(rtb_thetay_c)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_c < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_c > 0.0);
  }

  /* Signum: '<S325>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_nz = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_nz = -1.0;
  } else {
    rtb_Add_nz = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S328>/Add' incorporates:
   *  Sum: '<S329>/Sum'
   */
  rtb_Product_d = rtb_thetay_o - Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S260>/Product' incorporates:
   *  Abs: '<S325>/Abs'
   *  Abs: '<S328>/Abs'
   *  Constant: '<S331>/Constant'
   *  Constant: '<S341>/Constant3'
   *  Constant: '<S341>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S325>/OR'
   *  Lookup_n-D: '<S328>/1-D Lookup Table'
   *  Math: '<S341>/Math Function'
   *  RelationalOperator: '<S325>/Equal1'
   *  RelationalOperator: '<S331>/Compare'
   *  Signum: '<S325>/Sign'
   *  Signum: '<S325>/Sign1'
   *  Sum: '<S328>/Add'
   *  Sum: '<S341>/Add1'
   *  Sum: '<S341>/Add2'
   */
  rtb_thetay_c = (((real_T)((rtb_thetay == rtb_Add_nz) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled41,
     Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S326>/Gain' */
  rtb_thetay_a = Drive_Motor_Control_FF * rtb_thetay_c;

  /* Sum: '<S326>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S333>/Sum1' incorporates:
   *  Constant: '<S326>/Constant2'
   *  Product: '<S333>/Product'
   *  Sum: '<S333>/Sum'
   *  UnitDelay: '<S333>/Unit Delay1'
   */
  rtb_Add_nz = ((rtb_thetay_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S326>/Product' incorporates:
   *  Constant: '<S326>/Constant3'
   */
  rtb_Minus_k_idx_0 = rtb_Add_nz * Drive_Motor_Control_D;

  /* Sum: '<S332>/Diff' incorporates:
   *  UnitDelay: '<S332>/UD'
   *
   * Block description for '<S332>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S332>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Minus_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S326>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S326>/Add' incorporates:
   *  Gain: '<S326>/Gain1'
   *  Saturate: '<S326>/Saturation'
   */
  rtb_Hypot_o = ((Drive_Motor_Control_P * rtb_thetay_c) + rtb_thetay_a) +
    Rot_Mat_idx_0;

  /* Sum: '<S326>/Subtract' incorporates:
   *  Constant: '<S326>/Constant'
   */
  rtb_thetay_a = 1.0 - rtb_Hypot_o;

  /* Sum: '<S326>/Sum2' incorporates:
   *  Gain: '<S326>/Gain2'
   *  UnitDelay: '<S326>/Unit Delay'
   */
  rtb_Minus_k_idx_1 = (Drive_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S334>/Switch2' incorporates:
   *  Constant: '<S326>/Constant'
   *  RelationalOperator: '<S334>/LowerRelop1'
   *  Sum: '<S326>/Subtract'
   */
  if (!(rtb_Minus_k_idx_1 > (1.0 - rtb_Hypot_o))) {
    /* Sum: '<S326>/Subtract1' incorporates:
     *  Constant: '<S326>/Constant1'
     */
    rtb_thetay_a = -1.0 - rtb_Hypot_o;

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S326>/Constant1'
     *  RelationalOperator: '<S334>/UpperRelop'
     *  Sum: '<S326>/Subtract1'
     */
    if (!(rtb_Minus_k_idx_1 < (-1.0 - rtb_Hypot_o))) {
      rtb_thetay_a = rtb_Minus_k_idx_1;
    }

    /* End of Switch: '<S334>/Switch' */
  }

  /* End of Switch: '<S334>/Switch2' */

  /* Saturate: '<S326>/Saturation1' */
  if (rtb_thetay_a > Drive_Motor_Control_I_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_a < Drive_Motor_Control_I_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Minus_k_idx_1 = rtb_thetay_a;
  }

  /* End of Saturate: '<S326>/Saturation1' */

  /* Sum: '<S326>/Add1' */
  Rot_Mat_idx_0 = rtb_Hypot_o + rtb_Minus_k_idx_1;

  /* Saturate: '<S326>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S326>/Saturation2' */

  /* Sum: '<S342>/Add1' incorporates:
   *  Constant: '<S342>/Constant3'
   *  Constant: '<S342>/Constant4'
   *  Math: '<S342>/Math Function'
   *  Sum: '<S342>/Add2'
   */
  rtb_thetay_c = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S344>/Sum1' incorporates:
   *  Constant: '<S329>/Constant2'
   *  Product: '<S344>/Product'
   *  Sum: '<S344>/Sum'
   *  UnitDelay: '<S344>/Unit Delay1'
   */
  rtb_Hypot_o = ((rtb_thetay_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                 Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S329>/Product' incorporates:
   *  Constant: '<S329>/Constant3'
   */
  rtb_Product_d = rtb_Hypot_o * Steering_Motor_Control_D;

  /* Sum: '<S343>/Diff' incorporates:
   *  UnitDelay: '<S343>/UD'
   *
   * Block description for '<S343>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S343>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S329>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S329>/Add' incorporates:
   *  Gain: '<S329>/Gain1'
   *  Saturate: '<S329>/Saturation'
   */
  rtb_Add_de = (Steering_Motor_Control_P * rtb_thetay_c) + Rot_Mat_idx_0;

  /* Sum: '<S329>/Subtract' incorporates:
   *  Constant: '<S329>/Constant'
   */
  rtb_thetay_a = 1.0 - rtb_Add_de;

  /* Sum: '<S329>/Sum2' incorporates:
   *  Gain: '<S329>/Gain2'
   *  UnitDelay: '<S329>/Unit Delay'
   */
  rtb_Sum2_cg = (Steering_Motor_Control_I * rtb_thetay_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S345>/Switch2' incorporates:
   *  Constant: '<S329>/Constant'
   *  RelationalOperator: '<S345>/LowerRelop1'
   *  Sum: '<S329>/Subtract'
   */
  if (!(rtb_Sum2_cg > (1.0 - rtb_Add_de))) {
    /* Sum: '<S329>/Subtract1' incorporates:
     *  Constant: '<S329>/Constant1'
     */
    rtb_thetay_a = -1.0 - rtb_Add_de;

    /* Switch: '<S345>/Switch' incorporates:
     *  Constant: '<S329>/Constant1'
     *  RelationalOperator: '<S345>/UpperRelop'
     *  Sum: '<S329>/Subtract1'
     */
    if (!(rtb_Sum2_cg < (-1.0 - rtb_Add_de))) {
      rtb_thetay_a = rtb_Sum2_cg;
    }

    /* End of Switch: '<S345>/Switch' */
  }

  /* End of Switch: '<S345>/Switch2' */

  /* Saturate: '<S329>/Saturation1' */
  if (rtb_thetay_a > Steering_Motor_Control_I_UL) {
    rtb_Sum2_cg = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_a < Steering_Motor_Control_I_LL) {
    rtb_Sum2_cg = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_cg = rtb_thetay_a;
  }

  /* End of Saturate: '<S329>/Saturation1' */

  /* Sum: '<S329>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_de + rtb_Sum2_cg;

  /* Saturate: '<S329>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S329>/Saturation2' */

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   */
  UnitDelay = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S82>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_6_Active = (((int32_T)UnitDelay) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  UnitDelay_e = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S83>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_11_Active = (((int32_T)UnitDelay_e) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_n));

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  rtb_Compare_jq = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S85>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_12_Active = (((int32_T)rtb_Compare_jq) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_Compare_at = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S84>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_14_Active = (((int32_T)rtb_Compare_at) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  rtb_Relative_Translation_Flag =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S86>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)rtb_Relative_Translation_Flag) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  rtb_AT_Tag_13_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  rtb_AT_Tag_5_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 7.0);

  /* RelationalOperator: '<S87>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_16_Active = (((int32_T)rtb_AT_Tag_5_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_i));

  /* Chart: '<S10>/Chart_Intake_and_Shooter' incorporates:
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
    Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  } else {
    guard1 = false;
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Mod_IN_Extra_Run_Time2:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (rtb_AT_Tag_13_Active) {
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
          rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time5:
      Code_Gen_Model_B.Note_State_ID = 5.4;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_13_Active)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
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
      } else if (rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = -1.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 1.0;

        /* Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
           Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker;
           du: Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
           Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker; */
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.2;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_13_Active)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
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
      Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
      Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Co_IN_Note_Speaker_Score_Intake:
      Code_Gen_Model_B.Note_State_ID = 5.3;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist > Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time5;
        Code_Gen_Model_B.Note_State_ID = 5.4;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Co_IN_Note_Speaker_Score_SpinUp:
      Code_Gen_Model_B.Note_State_ID = 5.1;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -1.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 1.0;
      if ((Code_Gen_Model_U.Shooter_Left_Motor_RPM <
           (-Shooter_Motor_Speed_Transition)) &&
          (Code_Gen_Model_U.Shooter_Right_Motor_RPM >
           Shooter_Motor_Speed_Transition)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time6;
        Code_Gen_Model_B.Note_State_ID = 5.2;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time2;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Mode_IN_Reverse_Intake:
      Code_Gen_Model_B.Note_State_ID = 6.1;
      Code_Gen_Model_B.Intake_Motor_DC = 1.0;
      if ((Code_Gen_Model_DW.timer > 5.0) || rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case IN_Spin_Up_Shooter_Before_Trans:
      Code_Gen_Model_B.Note_State_ID = 2.1;
      Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
      Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer_Spin_Up) &&
          (Code_Gen_Model_DW.timer >= Servo_Time_Deploy)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Cod_IN_Note_Transfer_to_Shooter;
        Code_Gen_Model_B.Note_State_ID = 2.2;
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      } else if (rtb_AT_Tag_13_Active) {
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
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
        Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (rtb_AT_Tag_13_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_M_Waiting_for_Requests(&rtb_AT_Tag_6_Active,
        &rtb_AT_Tag_11_Active, &rtb_AT_Tag_12_Active, &rtb_AT_Tag_14_Active,
        &rtb_AT_Tag_15_Active, &rtb_AT_Tag_16_Active);
      break;
    }

    if (guard1) {
      Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
      Code_Gen_Model_B.Note_State_ID = 0.0;
      Code_Gen_Model_B.Intake_Motor_DC = 0.0;
      Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
      Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
    }
  }

  /* End of Chart: '<S10>/Chart_Intake_and_Shooter' */

  /* Switch: '<S10>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain4'
     *  Inport: '<Root>/Gamepad_LB'
     */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Test_DC_Gain_Intake *
      Code_Gen_Model_U.Gamepad_LB;
  } else {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Code_Gen_Model_B.Intake_Motor_DC;
  }

  /* End of Switch: '<S10>/Switch3' */

  /* Gain: '<S9>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_thetay_a = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Sum: '<S88>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Add_de = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S88>/Add' incorporates:
   *  Gain: '<S88>/Gain'
   *  Gain: '<S88>/Gain1'
   */
  rtb_Add_k5 = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Add_de);

  /* Switch: '<S88>/Switch' incorporates:
   *  Constant: '<S88>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S88>/Sum2' incorporates:
     *  Gain: '<S88>/Gain2'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    rtb_Add_de = (Shooter_Motor_Control_I * rtb_Add_de) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S88>/Subtract' incorporates:
     *  Constant: '<S88>/Constant'
     */
    rtb_thetay_c = 1.0 - rtb_Add_k5;

    /* Switch: '<S90>/Switch2' incorporates:
     *  Constant: '<S88>/Constant'
     *  RelationalOperator: '<S90>/LowerRelop1'
     *  Sum: '<S88>/Subtract'
     */
    if (!(rtb_Add_de > (1.0 - rtb_Add_k5))) {
      /* Sum: '<S88>/Subtract1' incorporates:
       *  Constant: '<S88>/Constant1'
       */
      rtb_thetay_c = -1.0 - rtb_Add_k5;

      /* Switch: '<S90>/Switch' incorporates:
       *  Constant: '<S88>/Constant1'
       *  RelationalOperator: '<S90>/UpperRelop'
       *  Sum: '<S88>/Subtract1'
       */
      if (!(rtb_Add_de < (-1.0 - rtb_Add_k5))) {
        rtb_thetay_c = rtb_Add_de;
      }

      /* End of Switch: '<S90>/Switch' */
    }

    /* End of Switch: '<S90>/Switch2' */

    /* Saturate: '<S88>/Saturation1' */
    if (rtb_thetay_c > Shooter_Motor_Control_I_UL) {
      rtb_Add_de = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_c < Shooter_Motor_Control_I_LL) {
      rtb_Add_de = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_de = rtb_thetay_c;
    }

    /* End of Saturate: '<S88>/Saturation1' */
  } else {
    rtb_Add_de = 0.0;
  }

  /* End of Switch: '<S88>/Switch' */

  /* Switch: '<S10>/Switch4' incorporates:
   *  Switch: '<S10>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S10>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_thetay_a;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S88>/Add1' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Rot_Mat_idx_0 = rtb_Add_k5 + rtb_Add_de;

    /* Saturate: '<S88>/Saturation2' incorporates:
     *  Switch: '<S10>/Switch'
     */
    if (Rot_Mat_idx_0 > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (Rot_Mat_idx_0 < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S88>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S10>/Switch4' */

  /* Sum: '<S89>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Add_k5 = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S89>/Add' incorporates:
   *  Gain: '<S89>/Gain'
   *  Gain: '<S89>/Gain1'
   */
  rtb_thetay_c = (Shooter_Motor_Control_FF *
                  Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Add_k5);

  /* Switch: '<S89>/Switch' incorporates:
   *  Constant: '<S89>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S89>/Sum2' incorporates:
     *  Gain: '<S89>/Gain2'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_Add_k5 = (Shooter_Motor_Control_I * rtb_Add_k5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S89>/Subtract' incorporates:
     *  Constant: '<S89>/Constant'
     */
    rtb_thetay_o = 1.0 - rtb_thetay_c;

    /* Switch: '<S91>/Switch2' incorporates:
     *  Constant: '<S89>/Constant'
     *  RelationalOperator: '<S91>/LowerRelop1'
     *  Sum: '<S89>/Subtract'
     */
    if (!(rtb_Add_k5 > (1.0 - rtb_thetay_c))) {
      /* Sum: '<S89>/Subtract1' incorporates:
       *  Constant: '<S89>/Constant1'
       */
      rtb_thetay_o = -1.0 - rtb_thetay_c;

      /* Switch: '<S91>/Switch' incorporates:
       *  Constant: '<S89>/Constant1'
       *  RelationalOperator: '<S91>/UpperRelop'
       *  Sum: '<S89>/Subtract1'
       */
      if (!(rtb_Add_k5 < (-1.0 - rtb_thetay_c))) {
        rtb_thetay_o = rtb_Add_k5;
      }

      /* End of Switch: '<S91>/Switch' */
    }

    /* End of Switch: '<S91>/Switch2' */

    /* Saturate: '<S89>/Saturation1' */
    if (rtb_thetay_o > Shooter_Motor_Control_I_UL) {
      rtb_Add_k5 = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_o < Shooter_Motor_Control_I_LL) {
      rtb_Add_k5 = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_k5 = rtb_thetay_o;
    }

    /* End of Saturate: '<S89>/Saturation1' */
  } else {
    rtb_Add_k5 = 0.0;
  }

  /* End of Switch: '<S89>/Switch' */

  /* Switch: '<S10>/Switch5' incorporates:
   *  Switch: '<S10>/Switch1'
   *  Switch: '<S10>/Switch7'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_thetay_a;

    /* Outport: '<Root>/Shooter_Brake_Enable' incorporates:
     *  Constant: '<S10>/Constant3'
     */
    Code_Gen_Model_Y.Shooter_Brake_Enable = 0.0;
  } else {
    if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
      /* Sum: '<S89>/Add1' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      Rot_Mat_idx_0 = rtb_thetay_c + rtb_Add_k5;

      /* Saturate: '<S89>/Saturation2' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      if (Rot_Mat_idx_0 > 1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
      } else if (Rot_Mat_idx_0 < -1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
      } else {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = Rot_Mat_idx_0;
      }

      /* End of Saturate: '<S89>/Saturation2' */
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
        Code_Gen_Model_B.Shooter_Motor_DC_Right;
    }

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable =
      Code_Gen_Model_B.Shooter_Brake_Enable_out;
  }

  /* End of Switch: '<S10>/Switch5' */

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  rtb_thetay = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(rtb_thetay)) || (rtIsInf(rtb_thetay))) {
    rtb_thetay = 0.0;
  } else {
    rtb_thetay = fmod(rtb_thetay, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_thetay < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_thetay)))))) : ((int32_T)((uint8_T)rtb_thetay)));

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Switch: '<S16>/Switch5' incorporates:
   *  Constant: '<S16>/Constant26'
   *  Lookup_n-D: '<S16>/1-D Lookup Table1'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Angle != 0.0) {
    rtb_thetay_a = TEST_Speaker_Angle;
  } else {
    rtb_thetay_a = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData, 9U);
  }

  /* End of Switch: '<S16>/Switch5' */

  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/Constant25'
   *  Lookup_n-D: '<S16>/1-D Lookup Table2'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_thetay_o = TEST_Speaker_Height;
  } else {
    rtb_thetay_o = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable2_tableData, 9U);
  }

  /* End of Switch: '<S16>/Switch4' */

  /* Switch: '<S16>/Switch6' incorporates:
   *  Constant: '<S16>/Constant27'
   *  Lookup_n-D: '<S16>/1-D Lookup Table3'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Gap != 0.0) {
    rtb_Switch6 = TEST_Speaker_Gap;
  } else {
    rtb_Switch6 = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable3_tableData, 9U);
  }

  /* End of Switch: '<S16>/Switch6' */

  /* Sum: '<S22>/Subtract1' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   *  Product: '<S22>/Product'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Lower_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Lower * Dist_Per_Rev_Back_Lower) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g;

  /* Sum: '<S23>/Subtract1' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   *  Product: '<S23>/Product'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Upper_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Upper * Dist_Per_Rev_Back_Upper) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;

  /* Sum: '<S160>/Add' incorporates:
   *  Constant: '<S160>/Constant24'
   */
  rtb_thetay_c = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                  Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S160>/Sqrt' incorporates:
   *  Math: '<S160>/Math Function'
   *  Sum: '<S160>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_thetay_c * rtb_thetay_c) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S25>/Subtract1' incorporates:
   *  Constant: '<S25>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S25>/Product'
   *  UnitDelay: '<S25>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;

  /* Sqrt: '<S164>/Sqrt' incorporates:
   *  Constant: '<S164>/Constant24'
   *  Math: '<S164>/Math Function'
   *  Sum: '<S164>/Add'
   *  Sum: '<S164>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Sum: '<S24>/Subtract1' incorporates:
   *  Constant: '<S24>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   *  Product: '<S24>/Product'
   *  UnitDelay: '<S24>/Unit Delay1'
   */
  Code_Gen_Model_B.Ball_Screw_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;

  /* MATLAB Function: '<S16>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant12'
   *  Constant: '<S16>/Constant2'
   *  Constant: '<S16>/Constant22'
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S16>/Constant5'
   *  Constant: '<S16>/Constant6'
   *  Constant: '<S16>/Constant7'
   *  Constant: '<S16>/Constant8'
   *  Constant: '<S16>/Constant9'
   */
  y = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (y - 56058.355625000004) / 331.17548218429454;
  rtb_thetay = y - (d * d);
  if (rtb_thetay >= 0.0) {
    y = sqrt(rtb_thetay);
  } else {
    y = 0.0;
  }

  rtb_thetay_c = (((((((d * 0.84366148773210747) + 177.79999999999998) - (y *
    -0.53687549219315933)) - 177.79999999999998) - 139.7) *
                   (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
                  177.79999999999998) + 139.7;
  Top_Front_Pivot_y = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((Top_Front_Pivot_y - 25.4) * (Top_Front_Pivot_y - 25.4)) +
           (rtb_thetay_c * rtb_thetay_c));
  y = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + y) / (2.0 * d);
  rtb_thetay = y - (d * d);
  if (rtb_thetay >= 0.0) {
    y = sqrt(rtb_thetay);
  } else {
    y = 0.0;
  }

  rtb_thetay = atan((Top_Front_Pivot_y - 25.4) / rtb_thetay_c);
  cos_alpha = cos(rtb_thetay);
  Rot_Mat_idx_0 = sin(rtb_thetay);
  rtb_thetay = (d * cos_alpha) - (y * Rot_Mat_idx_0);
  d = ((d * Rot_Mat_idx_0) + (y * cos_alpha)) + 25.4;
  rtb_thetay_c = atan((Top_Front_Pivot_y - d) / (rtb_thetay_c - rtb_thetay)) -
    -0.16186298985390718;
  y = cos(rtb_thetay_c);
  cos_alpha = sin(rtb_thetay_c);
  Top_Front_Pivot_y = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((rtb_thetay - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((Top_Front_Pivot_y - 465.697) *
    (Top_Front_Pivot_y - 465.697)) + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = Top_Front_Pivot_y;

  /* Gain: '<S16>/Gain2' incorporates:
   *  MATLAB Function: '<S16>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_thetay_c;

  /* Chart: '<S16>/Chart_Shooter_Position' */
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
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Amp_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Amp;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_LoadShooter:
      Code_Gen_Model_B.Shooter_Pos_State = 5.0;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Load_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Load;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_B.RL_Back = RL_Back_Load_to_Amp;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Load_Amp;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      }
      break;

     case Code_Gen_Model_IN_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 2.0;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Final_to_Speaker_Partial;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Final;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Speaker_to_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 3.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      } else {
        Code_Gen_Model_B.Desired_Angle = rtb_thetay_a;
        Code_Gen_Model_B.Desired_Height = rtb_thetay_o;
        Code_Gen_Model_B.Desired_Gap = rtb_Switch6;
      }
      break;

     case Code_Gen_Mo_IN_Speaker_to_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 3.0;
      if ((((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
            (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) &&
           (Code_Gen_Model_B.Meas_Gap < (Stage_Gap + Tol_Gap))) &&
          (Code_Gen_Model_B.Meas_Gap > (Stage_Gap - Tol_Gap))) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Partial_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Partial;
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
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Speaker_Partial;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Partial;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Stage_to_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 1.0;
        Code_Gen_Model_B.Desired_Height = rtb_thetay_o;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Load;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Load;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Shooter_Pos_State = 5.0;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Trap) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Trap;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Trap;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap;
        Code_Gen_Model_B.Shooter_Pos_State = 6.0;
        Code_Gen_Model_B.Desired_Angle = Trap_Angle;
        Code_Gen_Model_B.Desired_Height = Trap_Height;
        Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Amp;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Amp;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Stage_to_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 1.0;
      if ((Code_Gen_Model_B.Meas_Height < (rtb_thetay_o + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_thetay_o - Tol_Height))) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Partial_to_Speaker_Final;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Final;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = rtb_thetay_a;
        Code_Gen_Model_B.Desired_Height = rtb_thetay_o;
        Code_Gen_Model_B.Desired_Gap = rtb_Switch6;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Trap_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Trap;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Chart_Shooter_Position' */

  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S10>/Constant4'
   *  Switch: '<S10>/Switch6'
   *  Switch: '<S10>/Switch8'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Switch: '<S10>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else if (Code_Gen_Model_B.Shooter_Servo) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant'
     *  Switch: '<S10>/Switch6'
     *  Switch: '<S10>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Gain: '<S10>/Gain'
     *  Lookup_n-D: '<S10>/1-D Lookup Table'
     *  MinMax: '<S16>/Max'
     *  Sum: '<S10>/Add'
     *  Sum: '<S10>/Add1'
     *  Sum: '<S25>/Subtract1'
     *  Switch: '<S10>/Switch6'
     *  Switch: '<S10>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = ((Servo_Store_Gain * fmin
      (Code_Gen_Model_B.Desired_Angle, Code_Gen_Model_B.Meas_Angle)) +
      Servo_Store_Offset) + look1_binlcpw(Code_Gen_Model_B.Front_Arm_Length,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 1U);
  }

  /* End of Switch: '<S10>/Switch2' */

  /* Product: '<S158>/Product3' incorporates:
   *  Constant: '<S158>/Constant1'
   */
  rtb_thetay_a = Code_Gen_Model_B.RL_Back * 0.5;

  /* Gain: '<S16>/Gain3' */
  rtb_thetay_o = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S16>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S16>/Constant10'
   *  Constant: '<S16>/Constant11'
   *  Constant: '<S16>/Constant13'
   *  Constant: '<S16>/Constant14'
   *  Constant: '<S16>/Constant15'
   *  Constant: '<S16>/Constant21'
   */
  rtb_thetay_c = cos(rtb_thetay_o);
  rtb_thetay_o = sin(rtb_thetay_o);
  rtb_thetay = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (rtb_thetay >= 0.0) {
    rtb_Switch6 = ((rtb_thetay_c * 42.875) + ((-rtb_thetay_o) * -76.0)) + (sqrt
      (rtb_thetay) - 50.027);
  } else {
    rtb_Switch6 = ((rtb_thetay_c * 42.875) + ((-rtb_thetay_o) * -76.0)) - 50.027;
  }

  rtb_Akxhatkk1[0] = rtb_Switch6;
  rtb_Minus_n[0] = ((rtb_thetay_c * 155.54999999999998) + ((-rtb_thetay_o) *
    -25.4)) + rtb_Switch6;
  rtb_Switch6 = ((rtb_thetay_o * 42.875) + (rtb_thetay_c * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Akxhatkk1[1] = rtb_Switch6;
  rtb_Minus_n[1] = ((rtb_thetay_o * 155.54999999999998) + (rtb_thetay_c * -25.4))
    + rtb_Switch6;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Akxhatkk1[1] - 25.4) *
    (rtb_Akxhatkk1[1] - 25.4)) + (rtb_Akxhatkk1[0] * rtb_Akxhatkk1[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_thetay_c = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                      (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_thetay = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_thetay_c));
  rtb_thetay_o = ((288.925 / rtb_thetay_c) * rtb_Minus_n[1]) -
    88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (rtb_thetay * rtb_thetay) + (rtb_thetay_o
    * rtb_thetay_o);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_thetay_c;

  /* End of MATLAB Function: '<S16>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S16>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S16>/Constant23'
   *  Constant: '<S16>/Constant24'
   *  Constant: '<S16>/Constant28'
   *  Constant: '<S16>/Constant29'
   *  Constant: '<S16>/Constant30'
   *  Constant: '<S16>/Constant31'
   */
  rtb_thetay_c = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                       Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_thetay_c <= 98.425) {
    rtb_thetay_o = 79.375;
    rtb_Switch6 = 19.049999999999997;
  } else if (rtb_thetay_c <= 188.425) {
    rtb_thetay_o = rtb_thetay_c - 19.049999999999997;
    rtb_Switch6 = 19.049999999999997;
  } else {
    rtb_thetay_o = fmin(fmax(((((rtb_thetay_c - 90.0) - 19.049999999999997) -
      79.375) * 0.32) + 169.375, 79.375), 317.0);
    rtb_Switch6 = fmin(fmax(rtb_thetay_c - rtb_thetay_o, 19.049999999999997),
                       334.0);
  }

  /* Switch: '<S180>/Init' incorporates:
   *  UnitDelay: '<S180>/FixPt Unit Delay1'
   *  UnitDelay: '<S180>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k != 0) {
    rtb_thetay_c = rtb_Switch6;
  } else {
    rtb_thetay_c = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S180>/Init' */

  /* Sum: '<S174>/Sum1' */
  rtb_Switch6 -= rtb_thetay_c;

  /* Switch: '<S179>/Switch2' incorporates:
   *  RelationalOperator: '<S179>/LowerRelop1'
   */
  if (!(rtb_Switch6 > rtb_thetay_a)) {
    /* Switch: '<S179>/Switch' incorporates:
     *  RelationalOperator: '<S179>/UpperRelop'
     *  UnaryMinus: '<S158>/Unary Minus3'
     */
    if (rtb_Switch6 < (-rtb_thetay_a)) {
      rtb_thetay_a = -rtb_thetay_a;
    } else {
      rtb_thetay_a = rtb_Switch6;
    }

    /* End of Switch: '<S179>/Switch' */
  }

  /* End of Switch: '<S179>/Switch2' */

  /* Sum: '<S174>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_thetay_a + rtb_thetay_c;

  /* Sum: '<S168>/Sum' */
  rtb_thetay_c = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S168>/Gain1' */
  rtb_thetay_a = AA_Prop_Gain * rtb_thetay_c;

  /* RelationalOperator: '<S162>/Compare' incorporates:
   *  Constant: '<S162>/Constant'
   */
  rtb_AT_Tag_11_Active = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S168>/Switch' incorporates:
   *  Constant: '<S168>/Constant2'
   */
  if (rtb_AT_Tag_11_Active) {
    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S168>/Constant3'
     *  UnitDelay: '<S183>/Delay Input1'
     *
     * Block description for '<S183>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      rtb_Switch6 = AA_Integral_IC;
    } else {
      /* Sum: '<S168>/Sum2' incorporates:
       *  Gain: '<S168>/Gain2'
       *  UnitDelay: '<S168>/Unit Delay'
       */
      rtb_thetay_c = (AA_Integral_Gain * rtb_thetay_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S168>/Subtract' incorporates:
       *  Constant: '<S168>/Constant'
       */
      rtb_Switch6 = AA_TC_UL - rtb_thetay_a;

      /* Switch: '<S184>/Switch2' incorporates:
       *  RelationalOperator: '<S184>/LowerRelop1'
       */
      if (!(rtb_thetay_c > rtb_Switch6)) {
        /* Sum: '<S168>/Subtract1' incorporates:
         *  Constant: '<S168>/Constant1'
         */
        rtb_Switch6 = AA_TC_LL - rtb_thetay_a;

        /* Switch: '<S184>/Switch' incorporates:
         *  RelationalOperator: '<S184>/UpperRelop'
         */
        if (!(rtb_thetay_c < rtb_Switch6)) {
          rtb_Switch6 = rtb_thetay_c;
        }

        /* End of Switch: '<S184>/Switch' */
      }

      /* End of Switch: '<S184>/Switch2' */

      /* Saturate: '<S168>/Saturation1' */
      if (rtb_Switch6 > AA_Integral_UL) {
        rtb_Switch6 = AA_Integral_UL;
      } else if (rtb_Switch6 < AA_Integral_LL) {
        rtb_Switch6 = AA_Integral_LL;
      }

      /* End of Saturate: '<S168>/Saturation1' */
    }

    /* End of Switch: '<S168>/Switch1' */
  } else {
    rtb_Switch6 = 0.0;
  }

  /* End of Switch: '<S168>/Switch' */

  /* Switch: '<S16>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S168>/Add1' */
    Rot_Mat_idx_0 = rtb_thetay_a + rtb_Switch6;

    /* Saturate: '<S168>/Saturation2' */
    if (Rot_Mat_idx_0 > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (Rot_Mat_idx_0 < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S168>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Switch: '<S158>/Switch' incorporates:
   *  Constant: '<S158>/Constant'
   *  Constant: '<S158>/Constant2'
   *  Constant: '<S16>/Constant28'
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  RelationalOperator: '<S158>/Relational Operator'
   *  UnitDelay: '<S158>/Unit Delay'
   */
  if (Code_Gen_Model_B.Desired_Back_Lower_Dist < 169.375) {
    rtb_thetay = 1.0;
  } else {
    rtb_thetay = 0.5;
  }

  /* Product: '<S158>/Product' incorporates:
   *  Switch: '<S158>/Switch'
   */
  rtb_thetay_a = Code_Gen_Model_B.RL_Back * rtb_thetay;

  /* Switch: '<S178>/Init' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  UnitDelay: '<S178>/FixPt Unit Delay1'
   *  UnitDelay: '<S178>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e != 0) {
    rtb_thetay_c = rtb_thetay_o;
  } else {
    rtb_thetay_c = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S178>/Init' */

  /* Sum: '<S173>/Sum1' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   */
  rtb_thetay_o -= rtb_thetay_c;

  /* Switch: '<S177>/Switch2' incorporates:
   *  RelationalOperator: '<S177>/LowerRelop1'
   */
  if (!(rtb_thetay_o > rtb_thetay_a)) {
    /* Switch: '<S177>/Switch' incorporates:
     *  RelationalOperator: '<S177>/UpperRelop'
     *  UnaryMinus: '<S158>/Unary Minus2'
     */
    if (rtb_thetay_o < (-rtb_thetay_a)) {
      rtb_thetay_a = -rtb_thetay_a;
    } else {
      rtb_thetay_a = rtb_thetay_o;
    }

    /* End of Switch: '<S177>/Switch' */
  }

  /* End of Switch: '<S177>/Switch2' */

  /* Sum: '<S173>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_thetay_a + rtb_thetay_c;

  /* Sum: '<S169>/Sum' */
  rtb_thetay_c = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S169>/Gain1' */
  rtb_thetay_a = AA_Prop_Gain * rtb_thetay_c;

  /* Switch: '<S169>/Switch' incorporates:
   *  Constant: '<S169>/Constant2'
   */
  if (rtb_AT_Tag_11_Active) {
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S169>/Constant3'
     *  UnitDelay: '<S185>/Delay Input1'
     *
     * Block description for '<S185>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      Top_Front_Pivot_y = AA_Integral_IC;
    } else {
      /* Sum: '<S169>/Sum2' incorporates:
       *  Gain: '<S169>/Gain2'
       *  UnitDelay: '<S169>/Unit Delay'
       */
      rtb_thetay_c = (AA_Integral_Gain * rtb_thetay_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c;

      /* Sum: '<S169>/Subtract' incorporates:
       *  Constant: '<S169>/Constant'
       */
      rtb_thetay_o = AA_TC_UL - rtb_thetay_a;

      /* Switch: '<S186>/Switch2' incorporates:
       *  RelationalOperator: '<S186>/LowerRelop1'
       */
      if (!(rtb_thetay_c > rtb_thetay_o)) {
        /* Sum: '<S169>/Subtract1' incorporates:
         *  Constant: '<S169>/Constant1'
         */
        rtb_thetay_o = AA_TC_LL - rtb_thetay_a;

        /* Switch: '<S186>/Switch' incorporates:
         *  RelationalOperator: '<S186>/UpperRelop'
         */
        if (!(rtb_thetay_c < rtb_thetay_o)) {
          rtb_thetay_o = rtb_thetay_c;
        }

        /* End of Switch: '<S186>/Switch' */
      }

      /* End of Switch: '<S186>/Switch2' */

      /* Saturate: '<S169>/Saturation1' */
      if (rtb_thetay_o > AA_Integral_UL) {
        Top_Front_Pivot_y = AA_Integral_UL;
      } else if (rtb_thetay_o < AA_Integral_LL) {
        Top_Front_Pivot_y = AA_Integral_LL;
      } else {
        Top_Front_Pivot_y = rtb_thetay_o;
      }

      /* End of Saturate: '<S169>/Saturation1' */
    }

    /* End of Switch: '<S169>/Switch1' */
  } else {
    Top_Front_Pivot_y = 0.0;
  }

  /* End of Switch: '<S169>/Switch' */

  /* Switch: '<S16>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S169>/Add1' */
    Rot_Mat_idx_0 = rtb_thetay_a + Top_Front_Pivot_y;

    /* Saturate: '<S169>/Saturation2' */
    if (Rot_Mat_idx_0 > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (Rot_Mat_idx_0 < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S169>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch' */

  /* Product: '<S158>/Product2' */
  rtb_thetay_o = Code_Gen_Model_B.RL_Back * Code_Gen_Model_B.RL_FB_Ratio;

  /* Sum: '<S163>/Subtract1' incorporates:
   *  Constant: '<S163>/Constant24'
   *  Math: '<S163>/Math Function'
   *  Sqrt: '<S163>/Sqrt'
   *  Sum: '<S163>/Subtract'
   */
  rtb_thetay_c = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                       Code_Gen_Model_B.Desired_Front_AA_Length) -
                      Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S163>/Saturation' */
  if (rtb_thetay_c > Front_AA_Max_Ext) {
    rtb_thetay_c = Front_AA_Max_Ext;
  } else if (rtb_thetay_c < Front_AA_Min_Ext) {
    rtb_thetay_c = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S163>/Saturation' */

  /* Switch: '<S176>/Init' incorporates:
   *  UnitDelay: '<S176>/FixPt Unit Delay1'
   *  UnitDelay: '<S176>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_thetay_a = rtb_thetay_c;
  } else {
    rtb_thetay_a = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S176>/Init' */

  /* Sum: '<S172>/Sum1' */
  rtb_thetay_c -= rtb_thetay_a;

  /* Switch: '<S175>/Switch2' incorporates:
   *  RelationalOperator: '<S175>/LowerRelop1'
   *  RelationalOperator: '<S175>/UpperRelop'
   *  Switch: '<S175>/Switch'
   *  UnaryMinus: '<S158>/Unary Minus1'
   */
  if (rtb_thetay_c > rtb_thetay_o) {
    rtb_thetay_c = rtb_thetay_o;
  } else if (rtb_thetay_c < (-rtb_thetay_o)) {
    /* Switch: '<S175>/Switch' incorporates:
     *  UnaryMinus: '<S158>/Unary Minus1'
     */
    rtb_thetay_c = -rtb_thetay_o;
  }

  /* End of Switch: '<S175>/Switch2' */

  /* Sum: '<S172>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_thetay_c + rtb_thetay_a;

  /* Sum: '<S170>/Sum' */
  rtb_thetay_c = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S170>/Gain1' */
  rtb_thetay_a = AA_Prop_Gain * rtb_thetay_c;

  /* Switch: '<S170>/Switch' incorporates:
   *  Constant: '<S170>/Constant2'
   */
  if (rtb_AT_Tag_11_Active) {
    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S170>/Constant3'
     *  UnitDelay: '<S187>/Delay Input1'
     *
     * Block description for '<S187>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      d = AA_Integral_IC;
    } else {
      /* Sum: '<S170>/Sum2' incorporates:
       *  Gain: '<S170>/Gain2'
       *  UnitDelay: '<S170>/Unit Delay'
       */
      rtb_thetay_c = (AA_Integral_Gain * rtb_thetay_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S170>/Subtract' incorporates:
       *  Constant: '<S170>/Constant'
       */
      rtb_thetay_o = AA_TC_UL - rtb_thetay_a;

      /* Switch: '<S188>/Switch2' incorporates:
       *  RelationalOperator: '<S188>/LowerRelop1'
       */
      if (!(rtb_thetay_c > rtb_thetay_o)) {
        /* Sum: '<S170>/Subtract1' incorporates:
         *  Constant: '<S170>/Constant1'
         */
        rtb_thetay_o = AA_TC_LL - rtb_thetay_a;

        /* Switch: '<S188>/Switch' incorporates:
         *  RelationalOperator: '<S188>/UpperRelop'
         */
        if (!(rtb_thetay_c < rtb_thetay_o)) {
          rtb_thetay_o = rtb_thetay_c;
        }

        /* End of Switch: '<S188>/Switch' */
      }

      /* End of Switch: '<S188>/Switch2' */

      /* Saturate: '<S170>/Saturation1' */
      if (rtb_thetay_o > AA_Integral_UL) {
        d = AA_Integral_UL;
      } else if (rtb_thetay_o < AA_Integral_LL) {
        d = AA_Integral_LL;
      } else {
        d = rtb_thetay_o;
      }

      /* End of Saturate: '<S170>/Saturation1' */
    }

    /* End of Switch: '<S170>/Switch1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S170>/Switch' */

  /* Switch: '<S16>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S170>/Add1' */
    Rot_Mat_idx_0 = rtb_thetay_a + d;

    /* Saturate: '<S170>/Saturation2' */
    if (Rot_Mat_idx_0 > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (Rot_Mat_idx_0 < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S170>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch2' */

  /* Switch: '<S191>/Init' incorporates:
   *  UnitDelay: '<S191>/FixPt Unit Delay1'
   *  UnitDelay: '<S191>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk != 0) {
    rtb_thetay_c = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_thetay_c = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S191>/Init' */

  /* Sum: '<S189>/Sum1' */
  rtb_thetay_a = Code_Gen_Model_B.Desired_BS_Length - rtb_thetay_c;

  /* Switch: '<S190>/Switch2' incorporates:
   *  Constant: '<S171>/Constant1'
   *  Constant: '<S171>/Constant3'
   *  RelationalOperator: '<S190>/LowerRelop1'
   *  RelationalOperator: '<S190>/UpperRelop'
   *  Switch: '<S190>/Switch'
   */
  if (rtb_thetay_a > BS_Position_Inc_RL) {
    rtb_thetay_a = BS_Position_Inc_RL;
  } else if (rtb_thetay_a < BS_Position_Dec_RL) {
    /* Switch: '<S190>/Switch' incorporates:
     *  Constant: '<S171>/Constant1'
     */
    rtb_thetay_a = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S190>/Switch2' */

  /* Sum: '<S189>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_thetay_a + rtb_thetay_c;

  /* Sum: '<S167>/Sum' */
  rtb_thetay_a = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S182>/Sum1' incorporates:
   *  Constant: '<S167>/Constant2'
   *  Product: '<S182>/Product'
   *  Sum: '<S182>/Sum'
   *  UnitDelay: '<S182>/Unit Delay1'
   */
  y = ((rtb_thetay_a - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S167>/Product' incorporates:
   *  Constant: '<S167>/Constant3'
   */
  cos_alpha = y * BS_Deriv_Gain;

  /* Switch: '<S16>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S181>/Diff' incorporates:
     *  UnitDelay: '<S181>/UD'
     *
     * Block description for '<S181>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S181>/UD':
     *
     *  Store in Global RAM
     */
    Rot_Mat_idx_0 = cos_alpha - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S167>/Saturation' */
    if (Rot_Mat_idx_0 > BS_Deriv_UL) {
      Rot_Mat_idx_0 = BS_Deriv_UL;
    } else if (Rot_Mat_idx_0 < BS_Deriv_LL) {
      Rot_Mat_idx_0 = BS_Deriv_LL;
    }

    /* Sum: '<S167>/Add' incorporates:
     *  Gain: '<S167>/Gain1'
     *  Saturate: '<S167>/Saturation'
     */
    Rot_Mat_idx_0 += BS_Prop_Gain * rtb_thetay_a;

    /* Saturate: '<S167>/Saturation2' */
    if (Rot_Mat_idx_0 > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (Rot_Mat_idx_0 < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S167>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch3' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  Switch: '<S4>/Switch1'
   */
  if (rtb_Climber_Cmd_Direction > 0.0) {
    /* Outport: '<Root>/Climber_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_DutyCycle_Pos;
  } else if (rtb_Climber_Cmd_Direction < 0.0) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Outport: '<Root>/Climber_DutyCycle'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_DutyCycle_Neg;
  } else {
    /* Outport: '<Root>/Climber_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Switch: '<S4>/Switch1'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = 0.0;
  }

  /* End of Switch: '<S4>/Switch' */

  /* Logic: '<S2>/Logical Operator' incorporates:
   *  Abs: '<S22>/Abs'
   *  Abs: '<S23>/Abs'
   *  Abs: '<S24>/Abs'
   *  Abs: '<S25>/Abs'
   *  Constant: '<S22>/Calibration_Tolerance'
   *  Constant: '<S22>/Dist_Reset_Value'
   *  Constant: '<S23>/Calibration_Tolerance'
   *  Constant: '<S23>/Dist_Reset_Value'
   *  Constant: '<S24>/Calibration_Tolerance'
   *  Constant: '<S24>/Dist_Reset_Value'
   *  Constant: '<S25>/Calibration_Tolerance'
   *  Constant: '<S25>/Dist_Reset_Value'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  Sum: '<S22>/Subtract'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S24>/Subtract'
   *  Sum: '<S25>/Subtract'
   */
  Code_Gen_Model_B.Is_All_Arms_Cal_Position = ((((fabs
    (Code_Gen_Model_B.Back_Lower_Arm_Length - Dist_Reset_Value_Back_Lower) <=
    Dist_AA_Cal_Tol) && (fabs(Code_Gen_Model_B.Back_Upper_Arm_Length -
    Dist_Reset_Value_Back_Upper) <= Dist_AA_Cal_Tol)) && (fabs
    (Code_Gen_Model_B.Front_Arm_Length - Dist_Reset_Value_Front) <=
    Dist_AA_Cal_Tol)) && (fabs(Code_Gen_Model_B.Ball_Screw_Arm_Length -
    Dist_Reset_Value_Ball_Screw) <= Dist_BS_Cal_Tol));

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/IsRedAlliance'
   */
  if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
    rtb_thetay = 3.1415926535897931;
  } else {
    rtb_thetay = 0.0;
  }

  /* Sum: '<S8>/Add' incorporates:
   *  Switch: '<S8>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_thetay;

  /* SignalConversion: '<S9>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S14>/Trigonometric Function1' */
  rtb_thetay_a = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S14>/Trigonometric Function'
   */
  Rot_Mat_idx_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Climber_Cmd_Direction = rtb_thetay_a;

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus'
   */
  Rot_Mat_idx_2 = -rtb_thetay_a;

  /* Sum: '<S146>/Diff' incorporates:
   *  UnitDelay: '<S146>/UD'
   *
   * Block description for '<S146>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S146>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_c = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S14>/Subtract2' incorporates:
   *  Constant: '<S14>/Constant3'
   *  Gain: '<S14>/Gain7'
   *  Math: '<S14>/Square'
   */
  rtb_thetay_a = 1.0 - ((rtb_thetay_c * rtb_thetay_c) * 0.16666666666666666);

  /* Gain: '<S14>/Gain6' */
  rtb_thetay_c *= 0.5;

  /* SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_a;
  rtb_POSEexponentialmatrixfori_1 = rtb_thetay_c;

  /* SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_2 = -rtb_thetay_c;

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S147>/Diff'
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
  rtb_thetay_c = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.037290702116950625;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S148>/Diff'
   *  UnitDelay: '<S148>/UD'
   *
   * Block description for '<S148>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S148>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_o = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Product: '<S14>/Product2' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S149>/Diff'
   *  UnitDelay: '<S149>/UD'
   *
   * Block description for '<S149>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S149>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_a = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.037290702116950625;

  /* Product: '<S14>/Product3' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S150>/Diff'
   *  UnitDelay: '<S150>/UD'
   *
   * Block description for '<S150>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S150>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_ce) * 0.037290702116950625;

  /* SignalConversion generated from: '<S14>/Product7' incorporates:
   *  Fcn: '<S151>/r->x'
   *  Fcn: '<S151>/theta->y'
   *  Fcn: '<S152>/r->x'
   *  Fcn: '<S152>/theta->y'
   *  Fcn: '<S153>/r->x'
   *  Fcn: '<S153>/theta->y'
   *  Fcn: '<S154>/r->x'
   *  Fcn: '<S154>/theta->y'
   */
  rtb_thetay_n[0] = rtb_thetay_c * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[1] = rtb_thetay_c * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[2] = rtb_thetay_o * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[3] = rtb_thetay_o * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[4] = rtb_thetay_a * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[5] = rtb_thetay_a * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[6] = rtb_thetay * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n[7] = rtb_thetay * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S14>/Product7' incorporates:
   *  Constant: '<S14>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_thetay = 0.0;
    rtb_Num_Segments = 0;
    for (rtb_Bias1_p = 0; rtb_Bias1_p < 8; rtb_Bias1_p++) {
      rtb_thetay += Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_thetay_n[rtb_Bias1_p];
      rtb_Num_Segments += 2;
    }

    rtb_Akxhatkk1[i] = rtb_thetay;
  }

  /* End of Product: '<S14>/Product7' */

  /* Product: '<S14>/Product6' incorporates:
   *  Concatenate: '<S14>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay_a = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) +
    (rtb_POSEexponentialmatrixfori_2 * rtb_Akxhatkk1[1]);
  rtb_thetay_o = (rtb_POSEexponentialmatrixfori_1 * rtb_Akxhatkk1[0]) +
    (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[1]);

  /* Product: '<S14>/Product6' incorporates:
   *  Concatenate: '<S14>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (Rot_Mat_idx_0 * rtb_thetay_a) + (Rot_Mat_idx_2
    * rtb_thetay_o);
  Code_Gen_Model_B.Product6[1] = (rtb_Climber_Cmd_Direction * rtb_thetay_a) +
    (Rot_Mat_idx_0 * rtb_thetay_o);

  /* Outputs for Enabled SubSystem: '<S112>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S143>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S143>/D[k]*u[k]' incorporates:
     *  Constant: '<S92>/D'
     */
    rtb_Climber_Cmd_Direction = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S143>/Sum' incorporates:
     *  Constant: '<S92>/C'
     *  Delay: '<S92>/MemoryX'
     *  Product: '<S143>/C[k]*xhat[k|k-1]'
     *  Product: '<S143>/D[k]*u[k]'
     *  Sum: '<S143>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_Climber_Cmd_Direction;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_Climber_Cmd_Direction;

    /* Product: '<S143>/Product3' incorporates:
     *  Constant: '<S93>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S143>/Product3' incorporates:
     *  Outport: '<S143>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S112>/MeasurementUpdate' */

  /* RelationalOperator: '<S156>/Compare' incorporates:
   *  Constant: '<S155>/Constant'
   *  Constant: '<S156>/Constant'
   */
  rtb_AT_Tag_6_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S155>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S155>/Switch' incorporates:
   *  UnitDelay: '<S155>/Unit Delay'
   */
  if (rtb_AT_Tag_6_Active) {
    rtb_Climber_Cmd_Direction = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Climber_Cmd_Direction = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S155>/Switch' */

  /* Sum: '<S155>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Climber_Cmd_Direction;

  /* Gain: '<S155>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S155>/Switch1' incorporates:
   *  UnitDelay: '<S155>/Unit Delay1'
   */
  if (rtb_AT_Tag_6_Active) {
    rtb_thetay_a = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay_a = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S155>/Switch1' */

  /* Sum: '<S155>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_thetay_a;

  /* Chart: '<S15>/Chart' */
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

  /* End of Chart: '<S15>/Chart' */

  /* Update for UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_OR7;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' incorporates:
     *  Bias: '<S220>/Bias'
     *  Merge: '<S194>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' incorporates:
     *  Bias: '<S220>/Bias'
     *  Merge: '<S194>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S92>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S112>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S92>/A'
   *  Delay: '<S92>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S92>/MemoryX' incorporates:
   *  Constant: '<S92>/B'
   *  Product: '<S112>/A[k]*xhat[k|k-1]'
   *  Product: '<S112>/B[k]*u[k]'
   *  Sum: '<S112>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S14>/Accumulator2' incorporates:
   *  Constant: '<S14>/Constant'
   *  DiscreteIntegrator: '<S14>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S14>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S14>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = (Code_Gen_Model_B.Note_State_ID == 0.0);

  /* Update for UnitDelay: '<S11>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S357>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S357>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S371>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S370>/UD'
   *
   * Block description for '<S370>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch4_g;

  /* Update for UnitDelay: '<S368>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch8;

  /* Update for UnitDelay: '<S366>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S366>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S270>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_UnitDelay_kzl;

  /* Update for UnitDelay: '<S269>/UD'
   *
   * Block description for '<S269>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S263>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Switch2_p2;

  /* Update for UnitDelay: '<S281>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Gyro_Angle_Adjustment;

  /* Update for UnitDelay: '<S280>/UD'
   *
   * Block description for '<S280>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S291>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_jk;

  /* Update for UnitDelay: '<S284>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S302>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_ko;

  /* Update for UnitDelay: '<S301>/UD'
   *
   * Block description for '<S301>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S287>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S312>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S311>/UD'
   *
   * Block description for '<S311>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S305>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S323>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_rx_j;

  /* Update for UnitDelay: '<S322>/UD'
   *
   * Block description for '<S322>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_iy;

  /* Update for UnitDelay: '<S308>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_h2;

  /* Update for UnitDelay: '<S333>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Add_nz;

  /* Update for UnitDelay: '<S332>/UD'
   *
   * Block description for '<S332>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Minus_k_idx_0;

  /* Update for UnitDelay: '<S326>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S344>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Hypot_o;

  /* Update for UnitDelay: '<S343>/UD'
   *
   * Block description for '<S343>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S329>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_cg;

  /* Update for UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay;

  /* Update for UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = UnitDelay_e;

  /* Update for UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Compare_jq;

  /* Update for UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Compare_at;

  /* Update for UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Relative_Translation_Flag;

  /* Update for UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_i = rtb_AT_Tag_5_Active;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Add_de;

  /* Update for UnitDelay: '<S89>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Add_k5;

  /* Update for UnitDelay: '<S180>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S180>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 0U;

  /* Update for UnitDelay: '<S183>/Delay Input1'
   *
   * Block description for '<S183>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S168>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Switch6;

  /* Update for UnitDelay: '<S178>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S178>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 0U;

  /* Update for UnitDelay: '<S185>/Delay Input1'
   *
   * Block description for '<S185>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S169>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = Top_Front_Pivot_y;

  /* Update for UnitDelay: '<S176>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S176>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S187>/Delay Input1'
   *
   * Block description for '<S187>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S170>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = d;

  /* Update for UnitDelay: '<S191>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S191>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk = 0U;

  /* Update for UnitDelay: '<S182>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = y;

  /* Update for UnitDelay: '<S181>/UD'
   *
   * Block description for '<S181>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = cos_alpha;

  /* Update for UnitDelay: '<S146>/UD'
   *
   * Block description for '<S146>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S147>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S147>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S148>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S148>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S149>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S149>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S150>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S150>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = rtb_Climber_Cmd_Direction;

  /* Update for UnitDelay: '<S155>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_thetay_a;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  Code_Gen_Model_ConstInitP.Constant9_Value[40] = rtNaN;
  Code_Gen_Model_ConstInitP.Constant9_Value[70] = rtNaN;
  Code_Gen_Model_ConstInitP.Constant9_Value[100] = rtNaN;

  {
    real_T Constant;
    real_T Constant1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S17>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S92>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for UnitDelay: '<S357>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S366>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S25>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S180>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 1U;

    /* InitializeConditions for UnitDelay: '<S178>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 1U;

    /* InitializeConditions for UnitDelay: '<S176>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S191>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S416>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S17>/Spline Path Following Enabled' */
    /* Start for If: '<S198>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S194>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S198>/Robot_Index_Is_Valid' */
    /* Start for If: '<S201>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S201>/Circle_Check_Valid' */
    /* Start for If: '<S203>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S201>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S198>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S17>/Spline Path Following Enabled' */
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

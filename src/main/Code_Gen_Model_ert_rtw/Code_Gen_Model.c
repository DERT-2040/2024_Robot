/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.139
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar 14 07:56:56 2024
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

/* Named constants for Chart: '<S9>/Chart_Intake_and_Shooter' */
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

/* Named constants for Chart: '<S14>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S15>/Chart_Shooter_Position' */
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

/* Named constants for Chart: '<S28>/Chart' */
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
                                        *   '<S163>/Gain2'
                                        *   '<S164>/Gain2'
                                        *   '<S165>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S163>/Constant3'
                                        *   '<S164>/Constant3'
                                        *   '<S165>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S163>/Saturation1'
                                        *   '<S164>/Saturation1'
                                        *   '<S165>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S163>/Saturation1'
                                        *   '<S164>/Saturation1'
                                        *   '<S165>/Saturation1'
                                        */
real_T AA_Position_Back_Dec_RL = -4.0; /* Variable: AA_Position_Back_Dec_RL
                                        * Referenced by:
                                        *   '<S166>/Constant1'
                                        *   '<S167>/Constant1'
                                        */
real_T AA_Position_Back_Inc_RL = 4.0;  /* Variable: AA_Position_Back_Inc_RL
                                        * Referenced by:
                                        *   '<S166>/Constant3'
                                        *   '<S167>/Constant3'
                                        */
real_T AA_Position_Front_Dec_RL = -8.0;/* Variable: AA_Position_Front_Dec_RL
                                        * Referenced by: '<S169>/Constant1'
                                        */
real_T AA_Position_Front_Inc_RL = 8.0; /* Variable: AA_Position_Front_Inc_RL
                                        * Referenced by: '<S169>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S163>/Gain1'
                                        *   '<S164>/Gain1'
                                        *   '<S165>/Gain1'
                                        */
real_T AA_TC_LL = -0.6;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S163>/Constant1'
                                        *   '<S163>/Saturation2'
                                        *   '<S164>/Constant1'
                                        *   '<S164>/Saturation2'
                                        *   '<S165>/Constant1'
                                        *   '<S165>/Saturation2'
                                        */
real_T AA_TC_UL = 0.6;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S163>/Constant'
                                        *   '<S163>/Saturation2'
                                        *   '<S164>/Constant'
                                        *   '<S164>/Saturation2'
                                        *   '<S165>/Constant'
                                        *   '<S165>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = 0.0;     /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S397>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S397>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S397>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S397>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S397>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S397>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S6>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S6>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S397>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = -3.0;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S397>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S6>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S6>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.6667;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S397>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.3934;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S397>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.6667;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S397>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.8182;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S397>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 9.6962;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S397>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S397>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.8448;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S397>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S397>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 3.8793;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S397>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.8182;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S397>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 3.8793;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S397>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.3934;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S397>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S397>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.6802;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S397>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S397>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.6802;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S397>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S400>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = -0.0006;  /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S399>/Constant17'
                                        */
real_T Amp_Angle = -40.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 571.5;                /* Variable: Amp_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 919.48;            /* Variable: Amp_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S162>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S162>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S162>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S162>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -4.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S168>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 4.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S168>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S162>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S162>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S162>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S421>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 4.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S417>/Constant'
                                        *   '<S417>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S421>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S417>/Constant1'
                                        */
real_T Climber_Distance_LL = 12.7;     /* Variable: Climber_Distance_LL
                                        * Referenced by: '<S4>/Saturation1'
                                        */
real_T Climber_Distance_UL = 342.9;    /* Variable: Climber_Distance_UL
                                        * Referenced by: '<S4>/Saturation1'
                                        */
real_T Climber_Integral_Gain = 0.0002; /* Variable: Climber_Integral_Gain
                                        * Referenced by: '<S36>/Gain2'
                                        */
real_T Climber_Integral_IC = 0.0;      /* Variable: Climber_Integral_IC
                                        * Referenced by: '<S36>/Constant3'
                                        */
real_T Climber_Integral_LL = -0.5;     /* Variable: Climber_Integral_LL
                                        * Referenced by: '<S36>/Saturation1'
                                        */
real_T Climber_Integral_UL = 0.5;      /* Variable: Climber_Integral_UL
                                        * Referenced by: '<S36>/Saturation1'
                                        */
real_T Climber_Position_Dec_RL = -5.08;/* Variable: Climber_Position_Dec_RL
                                        * Referenced by: '<S4>/Constant3'
                                        */
real_T Climber_Position_Inc_RL = 5.08; /* Variable: Climber_Position_Inc_RL
                                        * Referenced by: '<S4>/Constant2'
                                        */
real_T Climber_Prop_Gain = 0.01;       /* Variable: Climber_Prop_Gain
                                        * Referenced by: '<S36>/Gain1'
                                        */
real_T Climber_TC_LL = -1.0;           /* Variable: Climber_TC_LL
                                        * Referenced by:
                                        *   '<S36>/Constant1'
                                        *   '<S36>/Saturation2'
                                        */
real_T Climber_TC_UL = 1.0;            /* Variable: Climber_TC_UL
                                        * Referenced by:
                                        *   '<S36>/Constant'
                                        *   '<S36>/Saturation2'
                                        */
real_T Dist_AA_Cal_Tol = 5.0;          /* Variable: Dist_AA_Cal_Tol
                                        * Referenced by:
                                        *   '<S21>/Calibration_Tolerance'
                                        *   '<S22>/Calibration_Tolerance'
                                        *   '<S24>/Calibration_Tolerance'
                                        */
real_T Dist_BS_Cal_Tol = 1.0;          /* Variable: Dist_BS_Cal_Tol
                                        * Referenced by: '<S23>/Calibration_Tolerance'
                                        */
real_T Dist_Per_Rev_Back_Lower = 2.2166;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S21>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 2.2166;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S22>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.35278;/* Variable: Dist_Per_Rev_Ball_Screw
                                          * Referenced by: '<S23>/Rev_2_Dist'
                                          */
real_T Dist_Per_Rev_Climber = 4.7408;  /* Variable: Dist_Per_Rev_Climber
                                        * Referenced by: '<S4>/Constant'
                                        */
real_T Dist_Per_Rev_Front = 2.2166;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S24>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Value_Back_Lower = 79.375;/* Variable: Dist_Reset_Value_Back_Lower
                                             * Referenced by:
                                             *   '<S21>/Dist_Reset_Value'
                                             *   '<S21>/Unit Delay1'
                                             */
real_T Dist_Reset_Value_Back_Upper = 19.05;/* Variable: Dist_Reset_Value_Back_Upper
                                            * Referenced by:
                                            *   '<S22>/Dist_Reset_Value'
                                            *   '<S22>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Ball_Screw = 279.4;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by:
                                            *   '<S23>/Dist_Reset_Value'
                                            *   '<S23>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Front = 6.35;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S24>/Dist_Reset_Value'
                                        *   '<S24>/Unit Delay1'
                                        */
real_T Distance_FL_y = 0.26194;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S345>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S261>/Constant3'
                                        *   '<S282>/Constant3'
                                        *   '<S303>/Constant3'
                                        *   '<S324>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S261>/Constant2'
                                   *   '<S282>/Constant2'
                                   *   '<S303>/Constant2'
                                   *   '<S324>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S261>/Saturation'
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S261>/Saturation'
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016667;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S261>/Gain'
                                            *   '<S282>/Gain'
                                            *   '<S303>/Gain'
                                            *   '<S324>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S261>/Gain2'
                                        *   '<S282>/Gain2'
                                        *   '<S303>/Gain2'
                                        *   '<S324>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S261>/Saturation1'
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S261>/Saturation1'
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S261>/Gain1'
                                        *   '<S282>/Gain1'
                                        *   '<S303>/Gain1'
                                        *   '<S324>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S266>/Constant'
                            *   '<S287>/Constant'
                            *   '<S308>/Constant'
                            *   '<S329>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S27>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S158>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S158>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S40>/Constant'
                                           *   '<S42>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S41>/Constant'
                                          *   '<S43>/Constant'
                                          */
real_T Gyro_Calibration_Value = 0.0;   /* Variable: Gyro_Calibration_Value
                                        * Referenced by: '<S7>/Unit Delay1'
                                        */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S11>/Constant1'
                                        *   '<S11>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S11>/Constant'
                                          */
real_T LoadShooter_Angle = 47.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 270.0;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 510.0;     /* Variable: LoadShooter_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 100.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 1.0;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 1.0;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.1;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S13>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S151>/Constant'
                                        */
real_T Servo_Store_Gain = 0.0071429;   /* Variable: Servo_Store_Gain
                                        * Referenced by: '<S9>/Gain'
                                        */
real_T Servo_Store_Offset = 0.5;       /* Variable: Servo_Store_Offset
                                        * Referenced by: '<S9>/Constant1'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S84>/Gain'
                                           *   '<S85>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S84>/Gain2'
                                         *   '<S85>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S84>/Saturation1'
                                          *   '<S85>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S84>/Saturation1'
                                         *   '<S85>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S84>/Gain1'
                                         *   '<S85>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 300.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                      */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S246>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S246>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S193>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S206>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S246>/Constant3'
                                     */
real_T Stage_Angle = 16.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 241.3;              /* Variable: Stage_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 533.4;           /* Variable: Stage_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S401>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S366>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S366>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S366>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S366>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S365>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S366>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S366>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S366>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S366>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S366>/Constant1'
                                   *   '<S366>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S366>/Constant'
                                   *   '<S366>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S356>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S356>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S356>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S356>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S356>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S356>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S264>/Constant3'
                                        *   '<S285>/Constant3'
                                        *   '<S306>/Constant3'
                                        *   '<S327>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S264>/Constant2'
                                *   '<S285>/Constant2'
                                *   '<S306>/Constant2'
                                *   '<S327>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S264>/Saturation'
                                           *   '<S285>/Saturation'
                                           *   '<S306>/Saturation'
                                           *   '<S327>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S264>/Saturation'
                                          *   '<S285>/Saturation'
                                          *   '<S306>/Saturation'
                                          *   '<S327>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S264>/Gain2'
                                         *   '<S285>/Gain2'
                                         *   '<S306>/Gain2'
                                         *   '<S327>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S264>/Saturation1'
                                             *   '<S285>/Saturation1'
                                             *   '<S306>/Saturation1'
                                             *   '<S327>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S264>/Saturation1'
                                            *   '<S285>/Saturation1'
                                            *   '<S306>/Saturation1'
                                            *   '<S327>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S264>/Gain1'
                                        *   '<S285>/Gain1'
                                        *   '<S306>/Gain1'
                                        *   '<S327>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S399>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S399>/Constant1'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S9>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S9>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 0.0;       /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S15>/Constant26'
                                        */
real_T TEST_Speaker_Gap = 0.0;         /* Variable: TEST_Speaker_Gap
                                        * Referenced by: '<S15>/Constant27'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S15>/Constant25'
                                        */
real_T TEST_Speaker_Speed = 0.0;       /* Variable: TEST_Speaker_Speed
                                        * Referenced by: '<S9>/Constant26'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S19>/Constant5'
                                      */
real_T Test_DC_Gain_BackLower = 0.3;   /* Variable: Test_DC_Gain_BackLower
                                        * Referenced by: '<S8>/Gain2'
                                        */
real_T Test_DC_Gain_BackUpper = 0.3;   /* Variable: Test_DC_Gain_BackUpper
                                        * Referenced by: '<S8>/Gain'
                                        */
real_T Test_DC_Gain_BallScrew = 0.2;   /* Variable: Test_DC_Gain_BallScrew
                                        * Referenced by: '<S8>/Gain3'
                                        */
real_T Test_DC_Gain_Front = 0.3;       /* Variable: Test_DC_Gain_Front
                                        * Referenced by: '<S8>/Gain1'
                                        */
real_T Test_DC_Gain_Intake = -1.0;     /* Variable: Test_DC_Gain_Intake
                                        * Referenced by: '<S8>/Gain4'
                                        */
real_T Test_DC_Gain_Shooter = 1.0;     /* Variable: Test_DC_Gain_Shooter
                                        * Referenced by: '<S8>/Gain5'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 12.7;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S344>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S344>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S344>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S344>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S344>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S344>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S400>/Gain'
                                        */
real_T Trap_Angle = 50.0;              /* Variable: Trap_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 460.0;               /* Variable: Trap_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 845.0;            /* Variable: Trap_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
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

/* Function for Chart: '<S28>/Chart' */
static void Code_Gen_Mo_CheckForRobotOrNote(uint32_T *entryPortIndex)
{
  real_T tmp;

  /* Constant: '<Root>/Constant' */
  tmp = Code_Gen_Model_ConstP.Constant_Value[((int32_T)
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

  /* End of Constant: '<Root>/Constant' */
}

/* Function for Chart: '<S28>/Chart' */
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

/* Function for Chart: '<S28>/Chart' */
static void Code_Gen_Model_PathToPickUp(void)
{
  if (Code_Gen_Model_DW.Timer < 16.0) {
    Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_IN_CheckForRobotOrNote;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  }
}

/* Function for Chart: '<S28>/Chart' */
static void Code_Gen_Model_PathToShoot(uint32_T *entryPortIndex)
{
  real_T tmp;

  /* Constant: '<Root>/Constant' */
  tmp = Code_Gen_Model_ConstP.Constant_Value[((int32_T)
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

  /* End of Constant: '<Root>/Constant' */
}

/* Function for Chart: '<S28>/Chart' */
static void Code_Gen_Model_RunIntake(uint32_T *entryPortIndex)
{
  /* Constant: '<Root>/Constant' */
  if ((Code_Gen_Model_ConstP.Constant_Value[((int32_T)
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

  /* End of Constant: '<Root>/Constant' */
}

/* Function for Chart: '<S28>/Chart' */
static void Code_Gen_Model_Shoot(uint32_T *entryPortIndex)
{
  real_T tmp;

  /* Constant: '<Root>/Constant' */
  tmp = Code_Gen_Model_ConstP.Constant_Value[((int32_T)
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

/* Function for Chart: '<S9>/Chart_Intake_and_Shooter' */
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
  real_T rtb_thetay_n[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T Rot_Mat_idx_0;
  real_T Rot_Mat_idx_1;
  real_T Rot_Mat_idx_2;
  real_T Top_Front_Pivot_y;
  real_T UnitDelay;
  real_T d;
  real_T rtb_Add_e3;
  real_T rtb_Add_f1;
  real_T rtb_Add_g4;
  real_T rtb_Add_ik;
  real_T rtb_Add_kv;
  real_T rtb_Add_lw;
  real_T rtb_Gyro_Angle_Field;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_o;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_Modulation_Drv;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Steer_Joystick_X_Rel_Mod;
  real_T rtb_Subtract1_ed;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_inz;
  real_T rtb_Subtract1_kh;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_i;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_c;
  real_T rtb_Sum2_n;
  real_T rtb_Switch1_m5;
  real_T rtb_Switch1_nj;
  real_T rtb_Switch1_p;
  real_T rtb_Switch2;
  real_T rtb_Switch2_o;
  real_T rtb_Switch4_g;
  real_T rtb_Switch6;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_rx_d;
  real_T rtb_rx_j;
  real_T rtb_thetay;
  real_T rtb_thetay_f;
  real_T rtb_thetay_g;
  real_T sin_alpha;
  real_T sqrt_input;
  real_T y;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T s218_iter;
  uint32_T entryPortIndex;
  uint16_T s243_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  uint8_T rtb_GameState;
  boolean_T FixPtRelationalOperator_o;
  boolean_T UnitDelay_e;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T rtb_AND;
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

  /* Switch: '<S8>/Switch9' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  Logic: '<S8>/OR4'
   *  Logic: '<S8>/OR6'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  Switch: '<S8>/Switch10'
   */
  if ((Code_Gen_Model_U.Joystick_Left_B7 != 0.0) ||
      (Code_Gen_Model_U.Joystick_Right_B7 != 0.0)) {
    /* Switch: '<S8>/Switch9' incorporates:
     *  Constant: '<S8>/Constant10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 1.0;
  } else if ((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B8 != 0.0)) {
    /* Switch: '<S8>/Switch10' incorporates:
     *  Constant: '<S8>/Constant11'
     *  Switch: '<S8>/Switch9'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = -1.0;
  } else {
    /* Switch: '<S8>/Switch9' incorporates:
     *  Constant: '<S8>/Constant12'
     *  Switch: '<S8>/Switch10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 0.0;
  }

  /* End of Switch: '<S8>/Switch9' */

  /* SignalConversion: '<S8>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S8>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S8>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S8>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* SignalConversion: '<S8>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S8>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S56>/Compare' incorporates:
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Inport: '<Root>/Gamepad_B4_Y'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Inport: '<Root>/Joystick_Right_B14'
   *  Logic: '<S8>/OR1'
   *  Logic: '<S8>/OR2'
   *  Logic: '<S8>/OR8'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  Switch: '<S8>/Switch1'
   *  Switch: '<S8>/Switch11'
   *  Switch: '<S8>/Switch2'
   *  Switch: '<S8>/Switch3'
   */
  if (Code_Gen_Model_U.Joystick_Right_B1 != 0.0) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_B4_Y != 0.0) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  Switch: '<S8>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Switch: '<S8>/Switch'
     *  Switch: '<S8>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S8>/Constant3'
     *  Switch: '<S8>/Switch'
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else if ((Code_Gen_Model_U.Gamepad_B1_A != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B14 != 0.0)) {
    /* Switch: '<S8>/Switch11' incorporates:
     *  Constant: '<S8>/Constant13'
     *  Switch: '<S8>/Switch'
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch2'
     *  Switch: '<S8>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 6.0;
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant4'
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch11'
     *  Switch: '<S8>/Switch2'
     *  Switch: '<S8>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 0.0;
  }

  /* End of Switch: '<S8>/Switch' */

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
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

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Logic: '<S8>/OR7' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S46>/Constant'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  UnitDelay: '<S14>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S8>/Switch4' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Logic: '<S8>/OR'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S71>/FixPt Relational Operator'
   *  Switch: '<S8>/Switch5'
   *  Switch: '<S8>/Switch6'
   *  Switch: '<S8>/Switch7'
   *  UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((((int32_T)rtb_OR7) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE)) ||
      (Code_Gen_Model_U.Gamepad_Stick_Left_Y <= Gamepad_Stick_Neg_Threshold)) {
    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S8>/Constant6'
     *  Switch: '<S8>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <=
             Gamepad_Stick_Neg_Threshold) {
    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S8>/Constant7'
     *  Switch: '<S8>/Switch5'
     *  Switch: '<S8>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S8>/Switch7' incorporates:
     *  Constant: '<S8>/Constant8'
     *  Switch: '<S8>/Switch4'
     *  Switch: '<S8>/Switch5'
     *  Switch: '<S8>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* Reshape: '<S88>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
   *  Sum: '<S11>/Add'
   *  Sum: '<S11>/Add1'
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

  /* Delay: '<S88>/MemoryX' incorporates:
   *  Constant: '<S88>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S11>/AND' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S11>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S115>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S141>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S141>/Add1' incorporates:
     *  Constant: '<S88>/C'
     *  Delay: '<S88>/MemoryX'
     *  Product: '<S141>/Product'
     */
    UnitDelay = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1])
      + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_nj = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S141>/Product2' incorporates:
     *  Constant: '<S89>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * UnitDelay) +
      (5.9896845167210271E-17 * rtb_Switch1_nj);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * UnitDelay) +
      (0.095124921972503981 * rtb_Switch1_nj);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S141>/Product2' incorporates:
     *  Outport: '<S141>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S115>/Enabled Subsystem' */

  /* Sum: '<S115>/Add' incorporates:
   *  Delay: '<S88>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S13>/Accumulator2' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S13>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S11>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S11>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S11>/Switch' */

  /* DiscreteIntegrator: '<S13>/Accumulator' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S13>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S11>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S11>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Switch: '<S6>/Switch' incorporates:
   *  Inport: '<Root>/AT_Tag_4_Found'
   *  Inport: '<Root>/AT_Tag_7_Found'
   *  Switch: '<S6>/Switch1'
   */
  if (Code_Gen_Model_U.AT_Tag_4_Found != 0.0) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant9'
     *  Math: '<S6>/Hypot'
     *  Sum: '<S6>/Subtract'
     *  Sum: '<S6>/Subtract1'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_4_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_4_Coordinate_Y);
  } else if (Code_Gen_Model_U.AT_Tag_7_Found != 0.0) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant2'
     *  Constant: '<S6>/Constant3'
     *  Math: '<S6>/Hypot1'
     *  Sum: '<S6>/Subtract2'
     *  Sum: '<S6>/Subtract3'
     *  Switch: '<S6>/Switch'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_7_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_7_Coordinate_Y);
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    Code_Gen_Model_B.Distance_Speaker = 0.0;
  }

  /* End of Switch: '<S6>/Switch' */

  /* UnitDelay: '<S1>/Unit Delay' */
  UnitDelay = Code_Gen_Model_DW.UnitDelay_DSTATE_o;

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
     *  ActionPort: '<S5>/Action Port'
     */
    /* SignalConversion generated from: '<S5>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  SignalConversion generated from: '<S5>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S5>/Constant2'
     *  SignalConversion generated from: '<S5>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S12>/Merge3' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S5>/Constant4'
     *  SignalConversion generated from: '<S5>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S5>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S5>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S5>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S5>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S5>/Constant7'
     *  SignalConversion generated from: '<S5>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S5>/Constant10'
     *  SignalConversion generated from: '<S5>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S12>/Merge11' incorporates:
     *  Constant: '<S5>/Constant11'
     *  SignalConversion generated from: '<S5>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* SignalConversion generated from: '<S5>/Climber_Cmd_Direction' incorporates:
     *  Constant: '<S5>/Constant17'
     */
    UnitDelay = 0.0;

    /* Merge: '<S12>/Merge12' incorporates:
     *  SignalConversion generated from: '<S5>/State_Request_Arm'
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
       *  Chart: '<S28>/Chart'
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

    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S12>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Chart: '<S28>/Chart' incorporates:
     *  UnitDelay: '<S10>/Unit Delay'
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
        } else if (UnitDelay != 0.0) {
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
        } else if (!(UnitDelay != 0.0)) {
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
        } else if (UnitDelay != 0.0) {
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
        } else if (!(UnitDelay != 0.0)) {
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
        } else if (UnitDelay != 0.0) {
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
          &UnitDelay);
        break;

       case Code_Gen_Model_IN_PathPicker:
        Code_Gen_Model_DW.is_c7_Code_Gen_Model = Code_Gen_Model_IN_Note6;
        Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
        Code_Gen_Model_B.SplineEnable = 1.0;
        Code_Gen_Model_DW.CloseNoteCounter++;
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
        if ((UnitDelay != 0.0) || (Code_Gen_Model_DW.Timer >= 16.0)) {
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
        rtb_Is_Absolute_Translation_g = ((UnitDelay != 0.0) ||
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

    /* End of Chart: '<S28>/Chart' */

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S25>/Constant'
     *  RelationalOperator: '<S25>/Compare'
     */
    Code_Gen_Model_B.Spline_Enable = (Code_Gen_Model_B.SplineEnable != 0.0);

    /* RelationalOperator: '<S32>/Compare' incorporates:
     *  Constant: '<S32>/Constant'
     */
    rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Intake_Shooter_State_Request ==
      1.0);

    /* RelationalOperator: '<S26>/Compare' incorporates:
     *  Switch: '<S28>/Switch2'
     */
    rtb_Is_Absolute_Translation_g = !rtb_Is_Absolute_Steering;

    /* Switch: '<S28>/Switch3' */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Constant: '<S28>/Constant7'
       */
      Code_Gen_Model_B.Translation_Speed = 0.5;
    } else {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Constant: '<S28>/Constant6'
       */
      Code_Gen_Model_B.Translation_Speed = 0.0;
    }

    /* End of Switch: '<S28>/Switch3' */

    /* Merge: '<S12>/Merge12' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.ArmStateRequest;

    /* Merge: '<S12>/Merge11' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.Intake_Shooter_State_Request;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S3>/Constant5'
     *  SignalConversion generated from: '<S3>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S3>/Climber_Cmd_Direction' incorporates:
     *  Constant: '<S3>/Constant17'
     */
    UnitDelay = 0.0;

    /* RelationalOperator: '<S27>/Compare' incorporates:
     *  Constant: '<S27>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     */
    Code_Gen_Model_B.Line_Sensor_Boolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range >= FloorDistance);

    /* Logic: '<S3>/NOT1' incorporates:
     *  UnitDelay: '<S10>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* Lookup_n-D: '<S397>/1-D Lookup Table' incorporates:
     *  Switch: '<S6>/Switch'
     */
    UnitDelay = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data_g,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 8U);

    /* Logic: '<S397>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S397>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S397>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S397>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S397>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S397>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S397>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S397>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S397>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S397>/Logical Operator'
     *  Logic: '<S397>/Logical Operator1'
     *  Switch: '<S397>/Switch10'
     *  Switch: '<S397>/Switch11'
     *  Switch: '<S397>/Switch3'
     *  Switch: '<S397>/Switch4'
     *  Switch: '<S397>/Switch5'
     *  Switch: '<S397>/Switch6'
     *  Switch: '<S397>/Switch7'
     *  Switch: '<S397>/Switch8'
     *  Switch: '<S397>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S397>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S397>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = UnitDelay + Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S397>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S397>/Add8'
       *  Switch: '<S397>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = UnitDelay + Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S397>/Switch4' incorporates:
       *  Constant: '<S397>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S397>/Add7'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S397>/Switch5' incorporates:
       *  Constant: '<S397>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S397>/Add6'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S397>/Switch6' incorporates:
       *  Constant: '<S397>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S397>/Add5'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S397>/Switch7' incorporates:
       *  Constant: '<S397>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S397>/Add4'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       *  Switch: '<S397>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S397>/Switch8' incorporates:
       *  Constant: '<S397>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S397>/Add3'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       *  Switch: '<S397>/Switch6'
       *  Switch: '<S397>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S397>/Switch9' incorporates:
       *  Constant: '<S397>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S397>/Add2'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       *  Switch: '<S397>/Switch6'
       *  Switch: '<S397>/Switch7'
       *  Switch: '<S397>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S397>/Switch10' incorporates:
       *  Constant: '<S397>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S397>/Add1'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       *  Switch: '<S397>/Switch6'
       *  Switch: '<S397>/Switch7'
       *  Switch: '<S397>/Switch8'
       *  Switch: '<S397>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S397>/Switch11' incorporates:
       *  Constant: '<S397>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S397>/Add'
       *  Switch: '<S397>/Switch10'
       *  Switch: '<S397>/Switch2'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       *  Switch: '<S397>/Switch6'
       *  Switch: '<S397>/Switch7'
       *  Switch: '<S397>/Switch8'
       *  Switch: '<S397>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S397>/Switch2' incorporates:
       *  Constant: '<S397>/Constant'
       *  Switch: '<S397>/Switch10'
       *  Switch: '<S397>/Switch11'
       *  Switch: '<S397>/Switch3'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch5'
       *  Switch: '<S397>/Switch6'
       *  Switch: '<S397>/Switch7'
       *  Switch: '<S397>/Switch8'
       *  Switch: '<S397>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S397>/Switch2' */

    /* Switch: '<S401>/Switch' incorporates:
     *  Constant: '<S401>/Constant'
     *  Constant: '<S401>/Constant1'
     *  Constant: '<S401>/Constant2'
     *  Math: '<S401>/Hypot'
     *  RelationalOperator: '<S401>/GreaterThan'
     *  Switch: '<S401>/Switch1'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_X;
      UnitDelay = Code_Gen_Model_B.Steer_Joystick_Y;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      UnitDelay = 0.0;
    }

    /* End of Switch: '<S401>/Switch' */

    /* Logic: '<S399>/AND' incorporates:
     *  Constant: '<S402>/Constant'
     *  Constant: '<S403>/Constant'
     *  Logic: '<S409>/AND'
     *  RelationalOperator: '<S402>/Compare'
     *  RelationalOperator: '<S403>/Compare'
     */
    UnitDelay_e = ((rtb_UnitDelay1_gi == 0.0) && (UnitDelay == 0.0));

    /* Logic: '<S399>/AND2' incorporates:
     *  RelationalOperator: '<S404>/FixPt Relational Operator'
     *  RelationalOperator: '<S405>/FixPt Relational Operator'
     *  RelationalOperator: '<S406>/FixPt Relational Operator'
     *  RelationalOperator: '<S407>/FixPt Relational Operator'
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
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S399>/Switch1' incorporates:
     *  Constant: '<S399>/Constant1'
     *  Constant: '<S399>/Constant17'
     *  Constant: '<S399>/Constant2'
     *  Logic: '<S399>/AND'
     *  Logic: '<S399>/AND4'
     *  Logic: '<S399>/NOT1'
     *  Product: '<S399>/Product1'
     *  Product: '<S399>/Product2'
     *  Sum: '<S399>/Add'
     *  Sum: '<S399>/Sum'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    if (UnitDelay_e && (!rtb_AND2_k)) {
      rtb_Switch1_nj = ((Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain)
                        + (Code_Gen_Model_B.AT_Error_Yaw * AT_Yaw_Control_Gain))
        + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S399>/Switch1' */

    /* Switch: '<S409>/Switch1' incorporates:
     *  Switch: '<S409>/Switch2'
     *  UnitDelay: '<S409>/Unit Delay'
     *  UnitDelay: '<S409>/Unit Delay1'
     */
    if (UnitDelay_e) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = UnitDelay;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S409>/Switch1' */

    /* Logic: '<S399>/AND1' incorporates:
     *  Logic: '<S399>/AND'
     *  Logic: '<S399>/AND3'
     *  UnitDelay: '<S399>/Unit Delay2'
     */
    UnitDelay_e = (UnitDelay_e && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S399>/Switch4' incorporates:
     *  Constant: '<S399>/Constant5'
     *  Switch: '<S399>/Switch5'
     *  Switch: '<S399>/Switch6'
     *  Switch: '<S399>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S399>/Switch5' incorporates:
       *  Constant: '<S399>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S399>/Switch6' incorporates:
       *  Constant: '<S399>/Constant7'
       *  Switch: '<S399>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S399>/Switch7' incorporates:
       *  Constant: '<S399>/Constant8'
       *  Switch: '<S399>/Switch5'
       *  Switch: '<S399>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S399>/Switch6' incorporates:
       *  Switch: '<S399>/Switch5'
       *  UnitDelay: '<S399>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S399>/Switch4' */

    /* Switch: '<S399>/Switch3' incorporates:
     *  Logic: '<S399>/NOT'
     *  Trigonometry: '<S399>/Atan2'
     */
    if (!UnitDelay_e) {
      rtb_thetay = rt_atan2d_snf(rtb_Switch1_m5, rtb_Switch2);
    } else {
      rtb_thetay = rtb_Switch4_g;
    }

    /* Merge: '<S12>/Merge1' incorporates:
     *  Sum: '<S399>/Sum1'
     *  Switch: '<S399>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_thetay + rtb_Switch1_nj;

    /* RelationalOperator: '<S412>/Compare' incorporates:
     *  Constant: '<S412>/Constant'
     */
    rtb_AND2_k = (rtb_Switch2 < 0.0);

    /* Switch: '<S408>/Switch' incorporates:
     *  Constant: '<S408>/Constant'
     *  Constant: '<S408>/Constant1'
     *  Constant: '<S410>/Constant'
     *  Constant: '<S411>/Constant'
     *  Logic: '<S408>/Logical Operator'
     *  RelationalOperator: '<S410>/Compare'
     *  RelationalOperator: '<S411>/Compare'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_AND2_k) {
      rtb_thetay = 6.2831853071795862;
    } else {
      rtb_thetay = 0.0;
    }

    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S408>/Constant2'
     *  Constant: '<S408>/Constant3'
     *  Constant: '<S413>/Constant'
     *  Constant: '<S414>/Constant'
     *  Logic: '<S408>/Logical Operator1'
     *  RelationalOperator: '<S413>/Compare'
     *  RelationalOperator: '<S414>/Compare'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_AND2_k) {
      rtb_Add_f1 = -6.2831853071795862;
    } else {
      rtb_Add_f1 = 0.0;
    }

    /* Sum: '<S408>/Sum1' incorporates:
     *  Switch: '<S408>/Switch'
     *  Switch: '<S408>/Switch1'
     *  UnitDelay: '<S408>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_thetay + rtb_Add_f1) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S397>/Switch23' incorporates:
     *  Logic: '<S397>/AND10'
     *  Logic: '<S397>/AND11'
     *  Logic: '<S397>/AND12'
     *  Logic: '<S397>/AND13'
     *  Logic: '<S397>/AND14'
     *  Logic: '<S397>/AND15'
     *  Logic: '<S397>/AND2'
     *  Logic: '<S397>/AND3'
     *  Switch: '<S397>/Switch1'
     *  Switch: '<S397>/Switch12'
     *  Switch: '<S397>/Switch13'
     *  Switch: '<S397>/Switch14'
     *  Switch: '<S397>/Switch15'
     *  Switch: '<S397>/Switch16'
     *  Switch: '<S397>/Switch17'
     *  Switch: '<S397>/Switch19'
     *  Switch: '<S397>/Switch20'
     *  Switch: '<S397>/Switch21'
     *  Switch: '<S397>/Switch22'
     *  Switch: '<S397>/Switch24'
     *  Switch: '<S397>/Switch25'
     *  Switch: '<S397>/Switch26'
     */
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S397>/Switch23' incorporates:
       *  Constant: '<S397>/Constant28'
       *  Sum: '<S397>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch15' incorporates:
       *  Constant: '<S397>/Constant9'
       *  Sum: '<S397>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S397>/Switch23' incorporates:
       *  Constant: '<S397>/Constant27'
       *  Sum: '<S397>/Add22'
       *  Switch: '<S397>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch15' incorporates:
       *  Constant: '<S397>/Constant5'
       *  Sum: '<S397>/Add16'
       *  Switch: '<S397>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S397>/Switch23' incorporates:
       *  Constant: '<S397>/Constant26'
       *  Sum: '<S397>/Add12'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch15' incorporates:
       *  Constant: '<S397>/Constant4'
       *  Sum: '<S397>/Add10'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S397>/Switch23' incorporates:
       *  Constant: '<S397>/Constant3'
       *  Sum: '<S397>/Add13'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch20'
       *  Switch: '<S397>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch15' incorporates:
       *  Constant: '<S397>/Constant17'
       *  Sum: '<S397>/Add11'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch12'
       *  Switch: '<S397>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S397>/Switch23' incorporates:
       *  Constant: '<S397>/Constant21'
       *  Sum: '<S397>/Add20'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch20'
       *  Switch: '<S397>/Switch21'
       *  Switch: '<S397>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch15' incorporates:
       *  Constant: '<S397>/Constant18'
       *  Sum: '<S397>/Add14'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch12'
       *  Switch: '<S397>/Switch13'
       *  Switch: '<S397>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S397>/Switch22' incorporates:
       *  Constant: '<S397>/Constant23'
       *  Sum: '<S397>/Add21'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch20'
       *  Switch: '<S397>/Switch21'
       *  Switch: '<S397>/Switch23'
       *  Switch: '<S397>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch14' incorporates:
       *  Constant: '<S397>/Constant19'
       *  Sum: '<S397>/Add15'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch12'
       *  Switch: '<S397>/Switch13'
       *  Switch: '<S397>/Switch15'
       *  Switch: '<S397>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S397>/Switch25' incorporates:
       *  Constant: '<S397>/Constant24'
       *  Sum: '<S397>/Add24'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch20'
       *  Switch: '<S397>/Switch21'
       *  Switch: '<S397>/Switch22'
       *  Switch: '<S397>/Switch23'
       *  Switch: '<S397>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch17' incorporates:
       *  Constant: '<S397>/Constant20'
       *  Sum: '<S397>/Add18'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch12'
       *  Switch: '<S397>/Switch13'
       *  Switch: '<S397>/Switch14'
       *  Switch: '<S397>/Switch15'
       *  Switch: '<S397>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S397>/Switch26' incorporates:
       *  Constant: '<S397>/Constant25'
       *  Sum: '<S397>/Add25'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch20'
       *  Switch: '<S397>/Switch21'
       *  Switch: '<S397>/Switch22'
       *  Switch: '<S397>/Switch23'
       *  Switch: '<S397>/Switch24'
       *  Switch: '<S397>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S397>/Switch18' incorporates:
       *  Constant: '<S397>/Constant22'
       *  Sum: '<S397>/Add19'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch12'
       *  Switch: '<S397>/Switch13'
       *  Switch: '<S397>/Switch14'
       *  Switch: '<S397>/Switch15'
       *  Switch: '<S397>/Switch16'
       *  Switch: '<S397>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;
    } else {
      /* Switch: '<S397>/Switch23' incorporates:
       *  Constant: '<S397>/Constant2'
       *  Switch: '<S397>/Switch19'
       *  Switch: '<S397>/Switch20'
       *  Switch: '<S397>/Switch21'
       *  Switch: '<S397>/Switch22'
       *  Switch: '<S397>/Switch24'
       *  Switch: '<S397>/Switch25'
       *  Switch: '<S397>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;

      /* Switch: '<S397>/Switch15' incorporates:
       *  Constant: '<S397>/Constant1'
       *  Switch: '<S397>/Switch1'
       *  Switch: '<S397>/Switch12'
       *  Switch: '<S397>/Switch13'
       *  Switch: '<S397>/Switch14'
       *  Switch: '<S397>/Switch16'
       *  Switch: '<S397>/Switch17'
       *  Switch: '<S397>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;
    }

    /* End of Switch: '<S397>/Switch23' */

    /* Switch: '<S420>/Switch1' incorporates:
     *  Constant: '<S425>/Constant'
     *  Constant: '<S426>/Constant'
     *  Logic: '<S420>/AND'
     *  RelationalOperator: '<S425>/Compare'
     *  RelationalOperator: '<S426>/Compare'
     *  Switch: '<S420>/Switch2'
     *  UnitDelay: '<S420>/Unit Delay'
     *  UnitDelay: '<S420>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S420>/Switch1' */

    /* Lookup_n-D: '<S400>/Modulation_Drv' incorporates:
     *  Math: '<S400>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S418>/Compare' incorporates:
     *  Constant: '<S418>/Constant'
     */
    rtb_AT_Tag_11_Active = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S400>/Logical Operator' incorporates:
     *  Constant: '<S419>/Constant'
     *  RelationalOperator: '<S419>/Compare'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_AT_Tag_11_Active);

    /* Switch: '<S400>/Switch1' incorporates:
     *  Switch: '<S400>/Switch4'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S400>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S400>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S400>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S400>/Switch5' */
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S400>/Switch6' incorporates:
       *  Constant: '<S400>/Constant'
       *  Constant: '<S400>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S400>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        rtb_thetay = 3.1415926535897931;
      } else {
        rtb_thetay = 0.0;
      }

      /* Merge: '<S12>/Merge3' incorporates:
       *  Sum: '<S400>/Add1'
       *  Switch: '<S400>/Switch4'
       *  Switch: '<S400>/Switch6'
       *  Trigonometry: '<S400>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + rtb_thetay;
    } else {
      /* Merge: '<S12>/Merge3' incorporates:
       *  Switch: '<S400>/Switch4'
       *  Trigonometry: '<S400>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p,
        rtb_Switch2_o);
    }

    /* End of Switch: '<S400>/Switch1' */

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S400>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = Code_Gen_Model_U.Is_Absolute_Translation;
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_AT_Tag_12_Active;
    }

    /* End of Switch: '<S19>/Switch' */

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S19>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = ((!(TEST_Swerve_Mode_Override_Flag != 0.0)) ||
      (Code_Gen_Model_U.Is_Absolute_Steering));

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/Constant'
     *  Constant: '<S417>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_High_Speed;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S417>/Switch1' */

    /* Switch: '<S424>/Init' incorporates:
     *  UnitDelay: '<S424>/FixPt Unit Delay1'
     *  UnitDelay: '<S424>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      UnitDelay = rtb_Steer_Joystick_X_Rel_Mod;
    } else {
      UnitDelay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S424>/Init' */

    /* Sum: '<S422>/Sum1' */
    rtb_Steer_Joystick_X_Rel_Mod -= UnitDelay;

    /* Switch: '<S423>/Switch2' incorporates:
     *  Constant: '<S421>/Constant1'
     *  Constant: '<S421>/Constant3'
     *  RelationalOperator: '<S423>/LowerRelop1'
     *  RelationalOperator: '<S423>/UpperRelop'
     *  Switch: '<S423>/Switch'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod > Boost_Trigger_Increasing_Limit) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Steer_Joystick_X_Rel_Mod < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S423>/Switch' incorporates:
       *  Constant: '<S421>/Constant1'
       */
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S423>/Switch2' */

    /* Sum: '<S422>/Sum' */
    rtb_Steer_Joystick_X_Rel_Mod += UnitDelay;

    /* Switch: '<S400>/Switch' incorporates:
     *  Switch: '<S400>/Switch2'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S400>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_AT_Tag_11_Active) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S400>/Gain2'
       *  Math: '<S400>/Magnitude1'
       *  Switch: '<S400>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S417>/Product' incorporates:
       *  Switch: '<S400>/Switch2'
       */
      rtb_Gyro_Angle_Field = rtb_Modulation_Drv * rtb_Steer_Joystick_X_Rel_Mod;

      /* Saturate: '<S417>/Saturation' incorporates:
       *  Switch: '<S400>/Switch2'
       */
      if (rtb_Gyro_Angle_Field > Boost_Trigger_High_Speed) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Gyro_Angle_Field < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Gyro_Angle_Field;
      }

      /* End of Saturate: '<S417>/Saturation' */
    }

    /* End of Switch: '<S400>/Switch' */

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S19>/Constant3'
     *  SignalConversion generated from: '<S19>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S19>/Constant9'
     *  SignalConversion generated from: '<S19>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S19>/Constant1'
     *  SignalConversion generated from: '<S19>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S399>/Constant'
     *  Lookup_n-D: '<S399>/Modulation_Str_Y_Rel'
     *  Product: '<S399>/Product'
     *  SignalConversion: '<S8>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Merge: '<S12>/Merge11' incorporates:
     *  SignalConversion generated from: '<S19>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.State_Request_Intake_Shooter;

    /* Merge: '<S12>/Merge12' incorporates:
     *  SignalConversion generated from: '<S19>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* SignalConversion: '<S19>/Signal Copy' */
    UnitDelay = Code_Gen_Model_B.Climber_Cmd_Direction;

    /* Update for UnitDelay: '<S399>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

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

    /* Update for UnitDelay: '<S409>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S399>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = UnitDelay_e;

    /* Update for UnitDelay: '<S399>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S408>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S420>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p;

    /* Update for UnitDelay: '<S420>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S424>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S424>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S424>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Steer_Joystick_X_Rel_Mod;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* SignalConversion generated from: '<S20>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S20>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S20>/Constant1'
     *  SignalConversion generated from: '<S20>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S20>/Constant2'
     *  SignalConversion generated from: '<S20>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S12>/Merge3' incorporates:
     *  Constant: '<S20>/Constant3'
     *  SignalConversion generated from: '<S20>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S20>/Constant4'
     *  SignalConversion generated from: '<S20>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S20>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S20>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S20>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S20>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S20>/Constant7'
     *  SignalConversion generated from: '<S20>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S20>/Constant9'
     *  SignalConversion generated from: '<S20>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S20>/Constant12'
     *  SignalConversion generated from: '<S20>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Merge: '<S12>/Merge11' incorporates:
     *  Constant: '<S20>/Constant10'
     *  SignalConversion generated from: '<S20>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S12>/Merge12' incorporates:
     *  Constant: '<S20>/Constant11'
     *  SignalConversion generated from: '<S20>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* SignalConversion: '<S20>/Signal Copy' */
    UnitDelay = Code_Gen_Model_B.Climber_Cmd_Direction;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S16>/If' incorporates:
   *  Constant: '<S243>/Constant'
   *  Logic: '<S243>/AND'
   *  MATLAB Function: '<S193>/Find closest index to curve'
   *  Product: '<S243>/Product'
   *  RelationalOperator: '<S243>/Relational Operator'
   *  RelationalOperator: '<S243>/Relational Operator1'
   *  Selector: '<S243>/Selector'
   *  Selector: '<S243>/Selector1'
   *  Selector: '<S244>/Selector'
   *  Sum: '<S243>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S196>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S199>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S201>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S196>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S16>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S191>/Action Port'
       */
      /* InitializeConditions for If: '<S16>/If' incorporates:
       *  UnitDelay: '<S191>/Unit Delay'
       *  UnitDelay: '<S192>/Unit Delay'
       *  UnitDelay: '<S194>/Unit Delay'
       *  UnitDelay: '<S194>/Unit Delay1'
       *  UnitDelay: '<S244>/Unit Delay'
       *  UnitDelay: '<S244>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S16>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S16>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S191>/Action Port'
     */
    /* Lookup_n-D: '<S191>/Capture Radius' incorporates:
     *  UnitDelay: '<S191>/Unit Delay'
     */
    rtb_Switch1_nj = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S192>/Matrix Concatenate2' */
    rtb_Akxhatkk1[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S192>/Matrix Concatenate2' */
    rtb_Akxhatkk1[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S196>/If' incorporates:
     *  RelationalOperator: '<S196>/ '
     *  UnitDelay: '<S192>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <= 6.0));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S199>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S201>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S196>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* InitializeConditions for If: '<S196>/If' incorporates:
       *  UnitDelay: '<S199>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S196>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S196>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* Sum: '<S199>/Minus' incorporates:
       *  Concatenate: '<S192>/Matrix Concatenate2'
       */
      rtb_Minus_n[0] = rtb_Akxhatkk1[0];
      rtb_Minus_n[1] = rtb_Akxhatkk1[1];

      /* Math: '<S199>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S199>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
        6.0);

      /* Switch: '<S199>/Switch' incorporates:
       *  Logic: '<S199>/AND'
       *  Logic: '<S199>/OR'
       *  RelationalOperator: '<S199>/Relational Operator'
       *  UnitDelay: '<S199>/Unit Delay'
       */
      UnitDelay_e = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Switch1_m5
        <= rtb_Switch1_nj) && rtb_Is_Absolute_Translation_g));

      /* If: '<S199>/If' */
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
        /* Disable for If: '<S201>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S199>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S201>/Action Port'
         */
        /* If: '<S201>/If' incorporates:
         *  RelationalOperator: '<S201>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh == 6.0));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S201>/Is_Last_Point' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          /* InitializeConditions for If: '<S201>/If' incorporates:
           *  UnitDelay: '<S204>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S201>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S201>/Is_Last_Point' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          /* Switch: '<S204>/Switch' incorporates:
           *  Constant: '<S206>/Constant'
           *  Logic: '<S204>/OR'
           *  RelationalOperator: '<S206>/Compare'
           *  UnitDelay: '<S204>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S204>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S204>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S207>/Action Port'
             */
            /* Merge: '<S196>/Merge2' incorporates:
             *  Constant: '<S207>/Constant'
             *  SignalConversion generated from: '<S207>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S207>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S207>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S204>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S204>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S208>/Action Port'
             */
            /* Merge: '<S196>/Merge2' incorporates:
             *  Constant: '<S208>/Constant'
             *  SignalConversion generated from: '<S208>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S208>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S208>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S204>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S204>/If' */

          /* Merge: '<S196>/Merge4' incorporates:
           *  SignalConversion: '<S204>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S204>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S201>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S201>/Increment_Search' incorporates:
           *  ActionPort: '<S203>/Action Port'
           */
          /* Merge: '<S196>/Merge2' incorporates:
           *  Constant: '<S203>/Constant'
           *  SignalConversion generated from: '<S203>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S203>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S203>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S196>/Merge4' incorporates:
           *  Constant: '<S205>/FixPt Constant'
           *  SignalConversion: '<S203>/Signal Copy'
           *  Sum: '<S205>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S201>/Increment_Search' */
        }

        /* End of If: '<S201>/If' */
        /* End of Outputs for SubSystem: '<S199>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S199>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S202>/Action Port'
         */
        /* RelationalOperator: '<S211>/Compare' */
        rtb_Is_Absolute_Translation_g = false;

        /* RelationalOperator: '<S210>/LessThanOrEqual' */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S196>/Merge4' incorporates:
         *  Sum: '<S202>/Add'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S199>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S199>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        /* Merge: '<S196>/Merge2' incorporates:
         *  Constant: '<S200>/Constant2'
         *  SignalConversion generated from: '<S200>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S200>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S200>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S196>/Merge4' incorporates:
         *  SignalConversion generated from: '<S200>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S199>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* End of If: '<S199>/If' */

      /* Merge: '<S196>/Merge1' incorporates:
       *  Constant: '<S199>/Constant'
       *  SignalConversion generated from: '<S199>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S199>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay_e;

      /* End of Outputs for SubSystem: '<S196>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S196>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S198>/Action Port'
       */
      /* Merge: '<S196>/Merge1' incorporates:
       *  Constant: '<S198>/Constant'
       *  SignalConversion generated from: '<S198>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S196>/Merge2' incorporates:
       *  Constant: '<S198>/Constant1'
       *  SignalConversion generated from: '<S198>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S198>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S198>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S196>/Merge4' incorporates:
       *  SignalConversion generated from: '<S198>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S196>/Escape_Auto_Driving' */
    }

    /* End of If: '<S196>/If' */

    /* If: '<S192>/If1' incorporates:
     *  Assignment: '<S222>/Assignment'
     *  Bias: '<S227>/Bias'
     *  Concatenate: '<S222>/Matrix Concatenate'
     */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S192>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S197>/Action Port'
       */
      /* Bias: '<S213>/Add Constant' incorporates:
       *  Bias: '<S213>/Bias'
       *  Sum: '<S213>/Subtract'
       */
      rtb_Switch1_m5 = ((6.0 - Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S213>/Selector4' incorporates:
       *  Constant: '<S215>/FixPt Constant'
       *  Sum: '<S215>/FixPt Sum1'
       */
      rtb_Akxhatkk1[0] = Code_Gen_Model_B.Spline_Index - 1.0;

      /* Selector: '<S213>/Selector4' */
      Code_Gen_Model_DW.Selector4_DIMS1[0] = 9 - ((int32_T)rtb_Akxhatkk1[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Outputs for Iterator SubSystem: '<S214>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S218>/While Iterator'
       */
      s218_iter = 1;

      /* Outputs for Iterator SubSystem: '<S220>/Sample_Curve' incorporates:
       *  ForIterator: '<S222>/For Iterator'
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
        if (s218_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s218_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_UnitDelay1_gi = rtb_Switch1_m5 - ((real_T)s218_iter);
        rtb_Num_Segments = s218_iter;
        s218_iter++;
      } while ((rtb_UnitDelay1_gi >= 4.0) && (s218_iter <= 3));

      /* End of Outputs for SubSystem: '<S220>/Sample_Curve' */
      /* End of Outputs for SubSystem: '<S214>/Sampling_Loop' */

      /* SignalConversion generated from: '<S197>/Position_and_Curvature' incorporates:
       *  Assignment: '<S218>/Assignment'
       *  Assignment: '<S222>/Assignment'
       *  Bias: '<S227>/Bias'
       *  Concatenate: '<S222>/Matrix Concatenate'
       *  Merge: '<S192>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S192>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S192>/If Action Subsystem' incorporates:
       *  ActionPort: '<S195>/Action Port'
       */
      /* Assignment: '<S195>/Assignment' incorporates:
       *  Merge: '<S192>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = 0.0;
        rtb_Position_and_Curvature[i + 50] = 0.0;
      }

      /* End of Assignment: '<S195>/Assignment' */

      /* SignalConversion generated from: '<S195>/Num_Segments' incorporates:
       *  Constant: '<S195>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S192>/If Action Subsystem' */
    }

    /* End of If: '<S192>/If1' */

    /* Concatenate: '<S193>/Matrix Concatenate' incorporates:
     *  Merge: '<S192>/Merge'
     *  Selector: '<S193>/Selector'
     *  Selector: '<S193>/Selector1'
     *  Selector: '<S193>/Selector3'
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

    /* End of Concatenate: '<S193>/Matrix Concatenate' */

    /* MATLAB Function: '<S193>/Distance Along Curve' incorporates:
     *  Concatenate: '<S193>/Matrix Concatenate'
     *  Selector: '<S193>/Selector4'
     *  Selector: '<S193>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s218_iter = 0; s218_iter < 149; s218_iter++) {
      /* Outputs for Iterator SubSystem: '<S214>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S218>/While Iterator'
       */
      rtb_Assignment_d[s218_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_c[s218_iter + 1] -
         rtb_MatrixConcatenate_c[s218_iter], rtb_MatrixConcatenate_c[s218_iter +
         151] - rtb_MatrixConcatenate_c[s218_iter + 150]) +
        rtb_Assignment_d[s218_iter];

      /* End of Outputs for SubSystem: '<S214>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S193>/Distance Along Curve' */

    /* MATLAB Function: '<S193>/Find closest index to curve' incorporates:
     *  Concatenate: '<S193>/Matrix Concatenate'
     *  Selector: '<S193>/Selector4'
     *  Selector: '<S193>/Selector5'
     *  Selector: '<S244>/Selector'
     */
    for (s218_iter = 0; s218_iter < 150; s218_iter++) {
      /* Outputs for Iterator SubSystem: '<S214>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S218>/While Iterator'
       */
      distance_from_robot[s218_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_c[s218_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_c[s218_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S214>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s218_iter = 1;
    } else {
      s218_iter = 0;
      i = 2;
      exitg1 = false;
      while ((!exitg1) && (i < 151)) {
        if (!rtIsNaN(distance_from_robot[i - 1])) {
          s218_iter = i;
          exitg1 = true;
        } else {
          i++;
        }
      }
    }

    if (s218_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s218_iter - 1];
      for (i = s218_iter + 1; i < 151; i++) {
        rtb_Switch2 = distance_from_robot[i - 1];
        if (rtb_Switch1_m5 > rtb_Switch2) {
          rtb_Switch1_m5 = rtb_Switch2;
        }
      }
    }

    s218_iter = 1;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 150)) {
      s218_iter = i + 1;
      if (distance_from_robot[i] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        i++;
      }
    }

    /* Selector: '<S244>/Selector' incorporates:
     *  Constant: '<S244>/Constant'
     *  MATLAB Function: '<S193>/Find closest index to curve'
     *  MinMax: '<S244>/Min'
     */
    rtb_UnitDelay1_gi = rtb_Assignment_d[((int32_T)fmin(50.0, s218_iter)) - 1];

    /* If: '<S244>/If' incorporates:
     *  RelationalOperator: '<S244>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S244>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S247>/Action Port'
       */
      /* SignalConversion generated from: '<S247>/Lookup Table Dynamic' */
      rtb_Akxhatkk1[0] = rtb_Assignment_d[0];
      rtb_Akxhatkk1[1] = rtb_Assignment_d[49];

      /* Sum: '<S249>/FixPt Sum1' incorporates:
       *  Constant: '<S249>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S247>/Lookup Table Dynamic' incorporates:
       *  Selector: '<S247>/Selector11'
       *  Selector: '<S247>/Selector12'
       */
      rtb_Minus_n[0] = 0.0;
      rtb_Minus_n[1] = 0.0;

      /* SignalConversion generated from: '<S247>/Lookup Table Dynamic1' incorporates:
       *  Selector: '<S247>/Selector1'
       *  Selector: '<S247>/Selector2'
       */
      rtb_Add2_f[0] = 0.0;
      rtb_Add2_f[1] = 0.0;

      /* S-Function (sfix_look1_dyn): '<S247>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S247>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0],
                           rtb_UnitDelay1_gi, &rtb_Akxhatkk1[0], 1U);

      /* SignalConversion: '<S247>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S247>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S247>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_UnitDelay1_gi,
                           &rtb_Akxhatkk1[0], 1U);

      /* End of Outputs for SubSystem: '<S244>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S244>/Latch' incorporates:
       *  ActionPort: '<S248>/Action Port'
       */
      /* SignalConversion generated from: '<S248>/In1' incorporates:
       *  UnitDelay: '<S244>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S248>/In2' incorporates:
       *  UnitDelay: '<S244>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S244>/Latch' */
    }

    /* End of If: '<S244>/If' */

    /* MinMax: '<S191>/Min' incorporates:
     *  Lookup_n-D: '<S191>/Lookahead Distance'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    rtb_Switch1_nj = fmin(rtb_Switch1_nj, look1_binlcpw
                          (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S193>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S243>/While Iterator'
     */
    s243_iter = 1U;
    UnitDelay_e = true;
    while (UnitDelay_e && (s243_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S193>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S243>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s243_iter;
      UnitDelay_e = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                      (rtb_Assignment_d[s218_iter - 1] + rtb_Switch1_nj)) &&
                     (Code_Gen_Model_B.WhileIterator < (((real_T)
        rtb_Num_Segments) * 50.0)));
      s243_iter++;
    }

    /* End of Outputs for SubSystem: '<S193>/Find first index that meets distance target' */

    /* Switch: '<S246>/Switch' incorporates:
     *  Concatenate: '<S193>/Matrix Concatenate'
     *  Constant: '<S193>/Constant'
     *  Constant: '<S243>/Constant'
     *  Constant: '<S246>/Constant1'
     *  Constant: '<S246>/Constant2'
     *  Constant: '<S246>/Constant3'
     *  Logic: '<S243>/AND'
     *  MATLAB Function: '<S193>/Find closest index to curve'
     *  Math: '<S246>/Hypot'
     *  MinMax: '<S246>/Min'
     *  MinMax: '<S246>/Min1'
     *  Product: '<S243>/Product'
     *  Product: '<S246>/Divide'
     *  Product: '<S246>/Product'
     *  Product: '<S246>/Product1'
     *  RelationalOperator: '<S193>/Relational Operator'
     *  RelationalOperator: '<S243>/Relational Operator'
     *  RelationalOperator: '<S243>/Relational Operator1'
     *  Selector: '<S193>/Selector10'
     *  Selector: '<S193>/Selector7'
     *  Selector: '<S193>/Selector8'
     *  Selector: '<S193>/Selector9'
     *  Selector: '<S243>/Selector'
     *  Selector: '<S243>/Selector1'
     *  Selector: '<S244>/Selector'
     *  Sqrt: '<S246>/Sqrt'
     *  Sum: '<S193>/Subtract'
     *  Sum: '<S243>/Add'
     *  Sum: '<S246>/Subtract'
     *  Sum: '<S246>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (6.0 -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Switch1_nj = fmin(rt_hypotd_snf(0.0 - Code_Gen_Model_B.KF_Position_X,
        0.0 - Code_Gen_Model_B.KF_Position_Y) *
                            Spline_Last_Pose_Distance_to_Velocity_Gain, fmin
                            (rtb_Switch1_m5 * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Switch1_nj = fmin(rtb_Switch1_m5 * Spline_Velocity_Multiplier_TEST,
                            sqrt(Spline_Max_Centripital_Acceleration /
        rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S246>/Switch' */

    /* Logic: '<S194>/OR' */
    rtb_Is_Absolute_Steering = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S194>/Switch1' incorporates:
     *  Switch: '<S194>/Switch'
     *  UnitDelay: '<S194>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S16>/Merge2' incorporates:
       *  Constant: '<S194>/Constant3'
       *  SignalConversion: '<S194>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S16>/Merge2' incorporates:
       *  SignalConversion: '<S194>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Switch1_nj;
      rtb_UnitDelay1_gi = rtb_Merge1;
    }

    /* End of Switch: '<S194>/Switch1' */

    /* Merge: '<S16>/Merge' incorporates:
     *  SignalConversion: '<S194>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_UnitDelay1_gi;

    /* Selector: '<S193>/Selector6' incorporates:
     *  Concatenate: '<S193>/Matrix Concatenate'
     *  Selector: '<S193>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S193>/Selector2' incorporates:
     *  Concatenate: '<S193>/Matrix Concatenate'
     *  Selector: '<S193>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S194>/Switch2' incorporates:
     *  Sum: '<S250>/Subtract'
     *  Sum: '<S250>/Subtract1'
     *  Trigonometry: '<S250>/Atan2'
     *  UnitDelay: '<S194>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S194>/Switch2' */

    /* Merge: '<S16>/Merge3' incorporates:
     *  SignalConversion: '<S194>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S16>/Merge7' incorporates:
     *  SignalConversion: '<S191>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S194>/Constant2'
     *  SignalConversion generated from: '<S191>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
     *  Constant: '<S194>/Constant5'
     *  SignalConversion generated from: '<S191>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S16>/Merge5' incorporates:
     *  Constant: '<S194>/Constant6'
     *  SignalConversion generated from: '<S191>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S16>/Merge6' incorporates:
     *  Constant: '<S194>/Constant1'
     *  SignalConversion generated from: '<S191>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S192>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S244>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S244>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S194>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S194>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S16>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S16>/Pass Through' incorporates:
     *  ActionPort: '<S190>/Action Port'
     */
    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S190>/Constant'
     *  SignalConversion generated from: '<S190>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S16>/Merge' incorporates:
     *  SignalConversion generated from: '<S190>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S16>/Merge1' incorporates:
     *  SignalConversion generated from: '<S190>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S16>/Merge2' incorporates:
     *  SignalConversion generated from: '<S190>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S16>/Merge3' incorporates:
     *  SignalConversion generated from: '<S190>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S16>/Merge4' incorporates:
     *  SignalConversion generated from: '<S190>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S16>/Merge5' incorporates:
     *  SignalConversion generated from: '<S190>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S16>/Merge6' incorporates:
     *  SignalConversion generated from: '<S190>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S16>/Pass Through' */
  }

  /* End of If: '<S16>/If' */

  /* UnitDelay: '<S344>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S344>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S344>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S344>/Product1' incorporates:
   *  Signum: '<S344>/Sign1'
   *  Signum: '<S344>/Sign2'
   */
  rtb_thetay *= rtb_Add_f1;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S344>/Switch' incorporates:
   *  Constant: '<S344>/Constant'
   *  Constant: '<S349>/Constant'
   *  Constant: '<S350>/Constant'
   *  Logic: '<S344>/or'
   *  Product: '<S344>/Product1'
   *  RelationalOperator: '<S349>/Compare'
   *  RelationalOperator: '<S350>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_UnitDelay1_gi = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_UnitDelay1_gi = 0.0;
  }

  /* End of Switch: '<S344>/Switch' */

  /* RelationalOperator: '<S351>/Compare' incorporates:
   *  Constant: '<S351>/Constant'
   */
  UnitDelay_e = (rtb_UnitDelay1_gi == 0.0);

  /* RelationalOperator: '<S352>/Compare' incorporates:
   *  Constant: '<S352>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_UnitDelay1_gi > 0.0);

  /* Abs: '<S344>/Abs' incorporates:
   *  Sum: '<S344>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S344>/Switch5' incorporates:
   *  Constant: '<S344>/Constant1'
   *  Switch: '<S344>/Switch1'
   *  UnaryMinus: '<S344>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S344>/Constant4'
     *  Constant: '<S344>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S344>/Constant2'
     *  Constant: '<S344>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S344>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S344>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_nj = rtb_LookupTableDynamic_j;
    rtb_thetay = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S344>/Constant10'
     *  Constant: '<S344>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S344>/Constant7'
     *  Constant: '<S344>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S344>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S344>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_nj = rtb_LookupTableDynamic1_i;

    /* Switch: '<S344>/Switch3' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant3'
     *  UnaryMinus: '<S344>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_thetay = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S344>/Switch3' */
  }

  /* End of Switch: '<S344>/Switch5' */

  /* Product: '<S344>/Product' incorporates:
   *  Switch: '<S344>/Switch1'
   */
  rtb_thetay *= rtb_Switch1_nj;

  /* Switch: '<S355>/Init' incorporates:
   *  UnitDelay: '<S355>/FixPt Unit Delay1'
   *  UnitDelay: '<S355>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_UnitDelay1_gi;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S355>/Init' */

  /* Sum: '<S353>/Sum1' */
  rtb_Switch1_m5 = rtb_UnitDelay1_gi - rtb_Merge1;

  /* Switch: '<S354>/Switch2' incorporates:
   *  RelationalOperator: '<S354>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_thetay)) {
    /* Switch: '<S344>/Switch2' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Switch: '<S344>/Switch4'
     */
    if (UnitDelay_e) {
      rtb_UnitDelay1_gi = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S344>/Switch4' incorporates:
       *  Constant: '<S344>/Constant1'
       */
      rtb_UnitDelay1_gi = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S344>/Switch4' incorporates:
       *  Constant: '<S344>/Constant3'
       *  UnaryMinus: '<S344>/Unary Minus1'
       */
      rtb_UnitDelay1_gi = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S344>/Switch2' */

    /* Product: '<S344>/Product2' */
    rtb_UnitDelay1_gi *= rtb_Switch1_nj;

    /* Switch: '<S354>/Switch' incorporates:
     *  RelationalOperator: '<S354>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_UnitDelay1_gi) {
      rtb_thetay = rtb_UnitDelay1_gi;
    } else {
      rtb_thetay = rtb_Switch1_m5;
    }

    /* End of Switch: '<S354>/Switch' */
  }

  /* End of Switch: '<S354>/Switch2' */

  /* Sum: '<S353>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_thetay + rtb_Merge1;

  /* Sum: '<S7>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Gain: '<S39>/Gain1' */
  rtb_UnitDelay1_gi = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S347>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S371>/Constant3'
     *  Constant: '<S371>/Constant4'
     *  Math: '<S371>/Math Function'
     *  Sum: '<S347>/Subtract'
     *  Sum: '<S371>/Add1'
     *  Sum: '<S371>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_UnitDelay1_gi) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S347>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S347>/Switch' */

  /* Sum: '<S367>/Add1' incorporates:
   *  Constant: '<S367>/Constant3'
   *  Constant: '<S367>/Constant4'
   *  Math: '<S367>/Math Function'
   *  Sum: '<S346>/Add'
   *  Sum: '<S366>/Sum'
   *  Sum: '<S367>/Add2'
   */
  rtb_thetay = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    (rtb_UnitDelay1_gi + Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) +
    3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S369>/Sum1' incorporates:
   *  Constant: '<S366>/Constant2'
   *  Product: '<S369>/Product'
   *  Sum: '<S369>/Sum'
   *  UnitDelay: '<S369>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_thetay - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S366>/Product' incorporates:
   *  Constant: '<S366>/Constant3'
   */
  rtb_Switch1_nj = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S368>/Diff' incorporates:
   *  UnitDelay: '<S368>/UD'
   *
   * Block description for '<S368>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S368>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Switch1_nj - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S366>/Saturation' */
  if (rtb_Gyro_Angle_Field > Steering_Heading_Control_D_UL) {
    rtb_Gyro_Angle_Field = Steering_Heading_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Steering_Heading_Control_D_LL) {
    rtb_Gyro_Angle_Field = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S366>/Add' incorporates:
   *  Gain: '<S366>/Gain1'
   *  Saturate: '<S366>/Saturation'
   */
  rtb_Switch2 = (Steering_Heading_Control_P * rtb_thetay) + rtb_Gyro_Angle_Field;

  /* Sum: '<S366>/Subtract' incorporates:
   *  Constant: '<S366>/Constant'
   */
  rtb_rx_j = Steering_Heading_Control_Total_UL - rtb_Switch2;

  /* Sum: '<S366>/Sum2' incorporates:
   *  Gain: '<S366>/Gain2'
   *  UnitDelay: '<S366>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_thetay) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S370>/Switch2' incorporates:
   *  RelationalOperator: '<S370>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_rx_j)) {
    /* Sum: '<S366>/Subtract1' incorporates:
     *  Constant: '<S366>/Constant1'
     */
    rtb_Switch4_g = Steering_Heading_Control_Total_LL - rtb_Switch2;

    /* Switch: '<S370>/Switch' incorporates:
     *  RelationalOperator: '<S370>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch4_g) {
      rtb_rx_j = rtb_Switch4_g;
    } else {
      rtb_rx_j = rtb_Switch1_m5;
    }

    /* End of Switch: '<S370>/Switch' */
  }

  /* End of Switch: '<S370>/Switch2' */

  /* Saturate: '<S366>/Saturation1' */
  if (rtb_rx_j > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_j < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_rx_j;
  }

  /* End of Saturate: '<S366>/Saturation1' */

  /* Sum: '<S366>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Switch2 + rtb_Switch1_m5;

  /* Saturate: '<S366>/Saturation2' */
  if (rtb_Gyro_Angle_Field > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S366>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Gyro_Angle_Field < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S366>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S366>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S366>/Saturation2' */

  /* Switch: '<S346>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S357>/Switch' incorporates:
     *  Abs: '<S357>/Abs'
     *  Constant: '<S357>/Constant'
     *  Constant: '<S365>/Constant'
     *  RelationalOperator: '<S365>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_rx_j = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_rx_j = 0.0;
    }

    /* End of Switch: '<S357>/Switch' */
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S346>/Switch' */

  /* Signum: '<S356>/Sign2' incorporates:
   *  UnitDelay: '<S356>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_thetay = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S356>/Sign1' */
  if (rtIsNaN(rtb_rx_j)) {
    rtb_Add_f1 = (rtNaN);
  } else if (rtb_rx_j < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (rtb_rx_j > 0.0);
  }

  /* Product: '<S356>/Product1' incorporates:
   *  Signum: '<S356>/Sign1'
   *  Signum: '<S356>/Sign2'
   */
  rtb_thetay *= rtb_Add_f1;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S356>/Switch' incorporates:
   *  Constant: '<S356>/Constant'
   *  Constant: '<S358>/Constant'
   *  Constant: '<S359>/Constant'
   *  Logic: '<S356>/or'
   *  Product: '<S356>/Product1'
   *  RelationalOperator: '<S358>/Compare'
   *  RelationalOperator: '<S359>/Compare'
   *  UnitDelay: '<S356>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_rx_d = rtb_rx_j;
  } else {
    rtb_rx_d = 0.0;
  }

  /* End of Switch: '<S356>/Switch' */

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  UnitDelay_e = (rtb_rx_d == 0.0);

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_d > 0.0);

  /* Abs: '<S356>/Abs' incorporates:
   *  Sum: '<S356>/Subtract'
   *  UnitDelay: '<S356>/Unit Delay'
   */
  rtb_Switch2 = fabs(Code_Gen_Model_B.Steering_Localized_Cmd - rtb_rx_j);

  /* Switch: '<S356>/Switch5' incorporates:
   *  Constant: '<S356>/Constant1'
   *  Switch: '<S356>/Switch1'
   *  UnaryMinus: '<S356>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S356>/Constant4'
     *  Constant: '<S356>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S356>/Constant2'
     *  Constant: '<S356>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S356>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S356>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_Switch2, &rtb_Minus_n[0], 1U);
    rtb_Switch2 = rtb_LookupTableDynamic;
    rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S356>/Constant10'
     *  Constant: '<S356>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S356>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S356>/Constant7'
     *  Constant: '<S356>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S356>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S356>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_Switch2, &rtb_Minus_n[0], 1U);
    rtb_Switch2 = rtb_LookupTableDynamic1;

    /* Switch: '<S356>/Switch3' incorporates:
     *  Constant: '<S356>/Constant1'
     *  Constant: '<S356>/Constant3'
     *  UnaryMinus: '<S356>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S356>/Switch3' */
  }

  /* End of Switch: '<S356>/Switch5' */

  /* Product: '<S356>/Product' incorporates:
   *  Switch: '<S356>/Switch1'
   */
  rtb_thetay_f = rtb_thetay * rtb_Switch2;

  /* Switch: '<S364>/Init' incorporates:
   *  UnitDelay: '<S364>/FixPt Unit Delay1'
   *  UnitDelay: '<S364>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_j = rtb_rx_d;
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S364>/Init' */

  /* Sum: '<S362>/Sum1' */
  rtb_Switch4_g = rtb_rx_d - rtb_rx_j;

  /* Switch: '<S363>/Switch2' incorporates:
   *  RelationalOperator: '<S363>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_thetay_f)) {
    /* Switch: '<S356>/Switch2' incorporates:
     *  Constant: '<S356>/Constant1'
     *  Constant: '<S356>/Constant3'
     *  Switch: '<S356>/Switch4'
     *  UnaryMinus: '<S356>/Unary Minus1'
     */
    if (UnitDelay_e) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S356>/Switch4' incorporates:
       *  Constant: '<S356>/Constant1'
       */
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S356>/Product2' incorporates:
     *  Switch: '<S356>/Switch2'
     */
    rtb_Switch1_p = rtb_thetay * rtb_Switch2;

    /* Switch: '<S363>/Switch' incorporates:
     *  RelationalOperator: '<S363>/UpperRelop'
     */
    if (rtb_Switch4_g < rtb_Switch1_p) {
      rtb_thetay_f = rtb_Switch1_p;
    } else {
      rtb_thetay_f = rtb_Switch4_g;
    }

    /* End of Switch: '<S363>/Switch' */
  }

  /* End of Switch: '<S363>/Switch2' */

  /* Sum: '<S362>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_thetay_f + rtb_rx_j;

  /* Outputs for Atomic SubSystem: '<S259>/Initialize Function' */
  /* Sum: '<S345>/Add' incorporates:
   *  Constant: '<S345>/Constant'
   *  Constant: '<S345>/Constant4'
   *  Constant: '<S345>/Constant5'
   *  Trigonometry: '<S345>/Atan2'
   */
  rtb_Switch2 = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S259>/Initialize Function' */

  /* Fcn: '<S379>/r->x' incorporates:
   *  Fcn: '<S384>/r->x'
   *  Fcn: '<S389>/r->x'
   *  Fcn: '<S394>/r->x'
   */
  rtb_Switch1_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S373>/Add' incorporates:
   *  Fcn: '<S379>/r->x'
   *  Fcn: '<S380>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Switch2))
    + rtb_Switch1_p;

  /* Fcn: '<S379>/theta->y' incorporates:
   *  Fcn: '<S384>/theta->y'
   *  Fcn: '<S389>/theta->y'
   *  Fcn: '<S394>/theta->y'
   */
  rtb_Switch4_g = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S373>/Add' incorporates:
   *  Fcn: '<S379>/theta->y'
   *  Fcn: '<S380>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Switch2))
    + rtb_Switch4_g;

  /* Fcn: '<S378>/x->r' */
  rtb_rx_d = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S381>/Compare' incorporates:
   *  Constant: '<S381>/Constant'
   */
  UnitDelay_e = (rtb_rx_d == 0.0);

  /* Switch: '<S377>/Switch1' */
  if (UnitDelay_e) {
    /* Switch: '<S377>/Switch1' incorporates:
     *  Constant: '<S377>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S377>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_rx_d;
  }

  /* End of Switch: '<S377>/Switch1' */

  /* Sum: '<S374>/Add' incorporates:
   *  Fcn: '<S385>/r->x'
   *  Fcn: '<S385>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch4_g;

  /* Fcn: '<S383>/x->r' */
  rtb_thetay_f = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S386>/Compare' incorporates:
   *  Constant: '<S386>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_f == 0.0);

  /* Switch: '<S382>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S382>/Switch1' incorporates:
     *  Constant: '<S382>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S382>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_thetay_f;
  }

  /* End of Switch: '<S382>/Switch1' */

  /* Sum: '<S375>/Add' incorporates:
   *  Fcn: '<S390>/r->x'
   *  Fcn: '<S390>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch4_g;

  /* Fcn: '<S388>/x->r' */
  rtb_rx_j = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S391>/Compare' incorporates:
   *  Constant: '<S391>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_j == 0.0);

  /* Switch: '<S387>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S387>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S387>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_j;
  }

  /* End of Switch: '<S387>/Switch1' */

  /* Sum: '<S376>/Add' incorporates:
   *  Fcn: '<S395>/r->x'
   *  Fcn: '<S395>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_p;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch4_g;

  /* Fcn: '<S393>/x->r' */
  rtb_thetay_g = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S396>/Compare' incorporates:
   *  Constant: '<S396>/Constant'
   */
  rtb_AT_Tag_13_Active = (rtb_thetay_g == 0.0);

  /* Switch: '<S392>/Switch1' */
  if (rtb_AT_Tag_13_Active) {
    /* Switch: '<S392>/Switch1' incorporates:
     *  Constant: '<S392>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S392>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_g;
  }

  /* End of Switch: '<S392>/Switch1' */

  /* Product: '<S372>/Divide' incorporates:
   *  Abs: '<S372>/Abs'
   *  Abs: '<S372>/Abs1'
   *  Abs: '<S372>/Abs2'
   *  Abs: '<S372>/Abs3'
   *  Constant: '<S372>/Constant'
   *  MinMax: '<S372>/Max'
   */
  rtb_rx_d = 3.9212094760200449 / fmax(fmax(fmax(fmax(3.9212094760200449,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S372>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S377>/Switch' */
  if (!UnitDelay_e) {
    /* Switch: '<S377>/Switch' incorporates:
     *  Fcn: '<S378>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S377>/Switch' */

  /* Trigonometry: '<S273>/Cos4' incorporates:
   *  Switch: '<S262>/Angle_Switch'
   *  Trigonometry: '<S272>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S251>/Add1' incorporates:
   *  Constant: '<S251>/Constant3'
   *  Constant: '<S251>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S251>/Math Function'
   *  Sum: '<S17>/Add'
   *  Sum: '<S251>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S273>/Sin5' incorporates:
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S273>/Sin4' incorporates:
   *  Switch: '<S262>/Angle_Switch'
   *  Trigonometry: '<S272>/Sin4'
   */
  rtb_Add_ik = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S273>/Cos5' incorporates:
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S273>/Subtract1' incorporates:
   *  Product: '<S273>/Product2'
   *  Product: '<S273>/Product3'
   *  Trigonometry: '<S273>/Cos4'
   *  Trigonometry: '<S273>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_f1 * rtb_rx_j) + (rtb_Add_ik * rtb_thetay_f);

  /* Sum: '<S273>/Subtract' incorporates:
   *  Product: '<S273>/Product'
   *  Product: '<S273>/Product1'
   *  Trigonometry: '<S273>/Cos4'
   *  Trigonometry: '<S273>/Sin4'
   */
  rtb_Switch4_g = (rtb_Add_f1 * rtb_thetay_f) - (rtb_Add_ik * rtb_rx_j);

  /* Math: '<S273>/Hypot' */
  rtb_Switch1_p = rt_hypotd_snf(rtb_Switch4_g, rtb_Switch2);

  /* Switch: '<S273>/Switch' incorporates:
   *  Constant: '<S273>/Constant'
   *  Constant: '<S273>/Constant1'
   *  Constant: '<S274>/Constant'
   *  Product: '<S273>/Divide'
   *  Product: '<S273>/Divide1'
   *  RelationalOperator: '<S274>/Compare'
   *  Switch: '<S273>/Switch1'
   */
  if (rtb_Switch1_p > 1.0E-6) {
    rtb_thetay_g = rtb_Switch2 / rtb_Switch1_p;
    rtb_thetay_f = rtb_Switch4_g / rtb_Switch1_p;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S273>/Switch' */

  /* Switch: '<S262>/Speed_Switch' incorporates:
   *  Abs: '<S262>/Abs'
   *  Constant: '<S270>/Constant'
   *  RelationalOperator: '<S270>/Compare'
   *  Switch: '<S262>/Angle_Switch'
   *  Trigonometry: '<S272>/Atan1'
   *  Trigonometry: '<S273>/Atan1'
   *  UnaryMinus: '<S262>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S272>/Subtract1' incorporates:
     *  Product: '<S272>/Product2'
     *  Product: '<S272>/Product3'
     *  UnaryMinus: '<S262>/Unary Minus'
     */
    rtb_Switch2 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5) + (rtb_Add_ik *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S272>/Subtract' incorporates:
     *  Product: '<S272>/Product'
     *  Product: '<S272>/Product1'
     */
    rtb_Switch1_p = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5) - (rtb_Add_ik *
      Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S272>/Hypot' */
    rtb_Switch4_g = rt_hypotd_snf(rtb_Switch1_p, rtb_Switch2);

    /* Switch: '<S272>/Switch1' incorporates:
     *  Constant: '<S272>/Constant'
     *  Constant: '<S272>/Constant1'
     *  Constant: '<S275>/Constant'
     *  Product: '<S272>/Divide'
     *  Product: '<S272>/Divide1'
     *  RelationalOperator: '<S275>/Compare'
     *  Switch: '<S272>/Switch'
     */
    if (rtb_Switch4_g > 1.0E-6) {
      rtb_Switch1_p /= rtb_Switch4_g;
      rtb_Switch2 /= rtb_Switch4_g;
    } else {
      rtb_Switch1_p = 1.0;
      rtb_Switch2 = 0.0;
    }

    /* End of Switch: '<S272>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Switch2, rtb_Switch1_p);
  } else {
    rtb_thetay = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S265>/Product2' incorporates:
   *  Constant: '<S265>/Constant'
   *  Switch: '<S262>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S260>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S260>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S263>/Add' incorporates:
   *  Sum: '<S264>/Sum'
   */
  rtb_Hypot_o = rtb_rx_j - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S255>/Product' incorporates:
   *  Abs: '<S260>/Abs'
   *  Abs: '<S263>/Abs'
   *  Constant: '<S266>/Constant'
   *  Constant: '<S276>/Constant3'
   *  Constant: '<S276>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S260>/OR'
   *  Lookup_n-D: '<S263>/1-D Lookup Table'
   *  Math: '<S276>/Math Function'
   *  RelationalOperator: '<S260>/Equal1'
   *  RelationalOperator: '<S266>/Compare'
   *  Signum: '<S260>/Sign'
   *  Signum: '<S260>/Sign1'
   *  Sum: '<S263>/Add'
   *  Sum: '<S276>/Add1'
   *  Sum: '<S276>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S261>/Gain' */
  rtb_Switch1_p = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S261>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S268>/Sum1' incorporates:
   *  Constant: '<S261>/Constant2'
   *  Product: '<S268>/Product'
   *  Sum: '<S268>/Sum'
   *  UnitDelay: '<S268>/Unit Delay1'
   */
  rtb_Switch2 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                 Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S261>/Product' incorporates:
   *  Constant: '<S261>/Constant3'
   */
  rtb_Switch4_g = rtb_Switch2 * Drive_Motor_Control_D;

  /* Sum: '<S267>/Diff' incorporates:
   *  UnitDelay: '<S267>/UD'
   *
   * Block description for '<S267>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S267>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Switch4_g - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S261>/Saturation' */
  if (rtb_Gyro_Angle_Field > Drive_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Drive_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S261>/Add' incorporates:
   *  Gain: '<S261>/Gain1'
   *  Saturate: '<S261>/Saturation'
   */
  rtb_Switch2_o = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Switch1_p) +
    rtb_Gyro_Angle_Field;

  /* Sum: '<S261>/Subtract' incorporates:
   *  Constant: '<S261>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Switch2_o;

  /* Sum: '<S261>/Sum2' incorporates:
   *  Gain: '<S261>/Gain2'
   *  UnitDelay: '<S261>/Unit Delay'
   */
  rtb_Switch1_p = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S269>/Switch2' incorporates:
   *  Constant: '<S261>/Constant'
   *  RelationalOperator: '<S269>/LowerRelop1'
   *  Sum: '<S261>/Subtract'
   */
  if (!(rtb_Switch1_p > (1.0 - rtb_Switch2_o))) {
    /* Switch: '<S269>/Switch' incorporates:
     *  Constant: '<S261>/Constant1'
     *  RelationalOperator: '<S269>/UpperRelop'
     *  Sum: '<S261>/Subtract1'
     */
    if (rtb_Switch1_p < (-1.0 - rtb_Switch2_o)) {
      rtb_thetay_f = -1.0 - rtb_Switch2_o;
    } else {
      rtb_thetay_f = rtb_Switch1_p;
    }

    /* End of Switch: '<S269>/Switch' */
  }

  /* End of Switch: '<S269>/Switch2' */

  /* Saturate: '<S261>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Switch1_p = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Switch1_p = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch1_p = rtb_thetay_f;
  }

  /* End of Saturate: '<S261>/Saturation1' */

  /* Sum: '<S261>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Switch2_o + rtb_Switch1_p;

  /* Saturate: '<S261>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S261>/Saturation2' */

  /* Sum: '<S277>/Add1' incorporates:
   *  Constant: '<S277>/Constant3'
   *  Constant: '<S277>/Constant4'
   *  Math: '<S277>/Math Function'
   *  Sum: '<S277>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S279>/Sum1' incorporates:
   *  Constant: '<S264>/Constant2'
   *  Product: '<S279>/Product'
   *  Sum: '<S279>/Sum'
   *  UnitDelay: '<S279>/Unit Delay1'
   */
  rtb_Switch2_o = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S264>/Product' incorporates:
   *  Constant: '<S264>/Constant3'
   */
  rtb_Modulation_Drv = rtb_Switch2_o * Steering_Motor_Control_D;

  /* Sum: '<S278>/Diff' incorporates:
   *  UnitDelay: '<S278>/UD'
   *
   * Block description for '<S278>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S278>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Modulation_Drv - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S264>/Saturation' */
  if (rtb_Gyro_Angle_Field > Steering_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Steering_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S264>/Add' incorporates:
   *  Gain: '<S264>/Gain1'
   *  Saturate: '<S264>/Saturation'
   */
  rtb_Add_e3 = (Steering_Motor_Control_P * rtb_thetay_g) + rtb_Gyro_Angle_Field;

  /* Sum: '<S264>/Subtract' incorporates:
   *  Constant: '<S264>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_e3;

  /* Sum: '<S264>/Sum2' incorporates:
   *  Gain: '<S264>/Gain2'
   *  UnitDelay: '<S264>/Unit Delay'
   */
  rtb_Steer_Joystick_X_Rel_Mod = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S280>/Switch2' incorporates:
   *  Constant: '<S264>/Constant'
   *  RelationalOperator: '<S280>/LowerRelop1'
   *  Sum: '<S264>/Subtract'
   */
  if (!(rtb_Steer_Joystick_X_Rel_Mod > (1.0 - rtb_Add_e3))) {
    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S264>/Constant1'
     *  RelationalOperator: '<S280>/UpperRelop'
     *  Sum: '<S264>/Subtract1'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod < (-1.0 - rtb_Add_e3)) {
      rtb_thetay_f = -1.0 - rtb_Add_e3;
    } else {
      rtb_thetay_f = rtb_Steer_Joystick_X_Rel_Mod;
    }

    /* End of Switch: '<S280>/Switch' */
  }

  /* End of Switch: '<S280>/Switch2' */

  /* Saturate: '<S264>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Steer_Joystick_X_Rel_Mod = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Steer_Joystick_X_Rel_Mod = Steering_Motor_Control_I_LL;
  } else {
    rtb_Steer_Joystick_X_Rel_Mod = rtb_thetay_f;
  }

  /* End of Saturate: '<S264>/Saturation1' */

  /* Sum: '<S264>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Add_e3 + rtb_Steer_Joystick_X_Rel_Mod;

  /* Saturate: '<S264>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S264>/Saturation2' */

  /* Product: '<S372>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S382>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S382>/Switch' incorporates:
     *  Fcn: '<S383>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S382>/Switch' */

  /* Trigonometry: '<S294>/Cos4' incorporates:
   *  Switch: '<S283>/Angle_Switch'
   *  Trigonometry: '<S293>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S252>/Add1' incorporates:
   *  Constant: '<S252>/Constant3'
   *  Constant: '<S252>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S252>/Math Function'
   *  Sum: '<S17>/Add1'
   *  Sum: '<S252>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S294>/Sin5' incorporates:
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S294>/Sin4' incorporates:
   *  Switch: '<S283>/Angle_Switch'
   *  Trigonometry: '<S293>/Sin4'
   */
  rtb_Add_ik = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S294>/Cos5' incorporates:
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S294>/Subtract1' incorporates:
   *  Product: '<S294>/Product2'
   *  Product: '<S294>/Product3'
   *  Trigonometry: '<S294>/Cos4'
   *  Trigonometry: '<S294>/Sin4'
   */
  rtb_Add_e3 = (rtb_Add_f1 * rtb_rx_j) + (rtb_Add_ik * rtb_thetay_f);

  /* Sum: '<S294>/Subtract' incorporates:
   *  Product: '<S294>/Product'
   *  Product: '<S294>/Product1'
   *  Trigonometry: '<S294>/Cos4'
   *  Trigonometry: '<S294>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Add_f1 * rtb_thetay_f) - (rtb_Add_ik * rtb_rx_j);

  /* Math: '<S294>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_e3);

  /* Switch: '<S294>/Switch' incorporates:
   *  Constant: '<S294>/Constant'
   *  Constant: '<S294>/Constant1'
   *  Constant: '<S295>/Constant'
   *  Product: '<S294>/Divide'
   *  Product: '<S294>/Divide1'
   *  RelationalOperator: '<S295>/Compare'
   *  Switch: '<S294>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_g = rtb_Add_e3 / rtb_Hypot_bl;
    rtb_thetay_f = rtb_Subtract1_la / rtb_Hypot_bl;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S294>/Switch' */

  /* Switch: '<S283>/Speed_Switch' incorporates:
   *  Abs: '<S283>/Abs'
   *  Constant: '<S291>/Constant'
   *  RelationalOperator: '<S291>/Compare'
   *  Switch: '<S283>/Angle_Switch'
   *  Trigonometry: '<S293>/Atan1'
   *  Trigonometry: '<S294>/Atan1'
   *  UnaryMinus: '<S283>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S293>/Subtract1' incorporates:
     *  Product: '<S293>/Product2'
     *  Product: '<S293>/Product3'
     *  UnaryMinus: '<S283>/Unary Minus'
     */
    rtb_Add_e3 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Add_ik *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S293>/Subtract' incorporates:
     *  Product: '<S293>/Product'
     *  Product: '<S293>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_g) - (rtb_Add_ik *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S293>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_e3);

    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S293>/Constant'
     *  Constant: '<S293>/Constant1'
     *  Constant: '<S296>/Constant'
     *  Product: '<S293>/Divide'
     *  Product: '<S293>/Divide1'
     *  RelationalOperator: '<S296>/Compare'
     *  Switch: '<S293>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_la;
      rtb_Add_e3 /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_e3 = 0.0;
    }

    /* End of Switch: '<S293>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Add_e3, rtb_Hypot_bl);
  } else {
    rtb_thetay = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S286>/Product2' incorporates:
   *  Constant: '<S286>/Constant'
   *  Switch: '<S283>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S281>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S281>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S284>/Add' incorporates:
   *  Sum: '<S285>/Sum'
   */
  rtb_Hypot_o = rtb_rx_j - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S256>/Product' incorporates:
   *  Abs: '<S281>/Abs'
   *  Abs: '<S284>/Abs'
   *  Constant: '<S287>/Constant'
   *  Constant: '<S297>/Constant3'
   *  Constant: '<S297>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S281>/OR'
   *  Lookup_n-D: '<S284>/1-D Lookup Table'
   *  Math: '<S297>/Math Function'
   *  RelationalOperator: '<S281>/Equal1'
   *  RelationalOperator: '<S287>/Compare'
   *  Signum: '<S281>/Sign'
   *  Signum: '<S281>/Sign1'
   *  Sum: '<S284>/Add'
   *  Sum: '<S297>/Add1'
   *  Sum: '<S297>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S282>/Gain' */
  rtb_Hypot_bl = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S282>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S289>/Sum1' incorporates:
   *  Constant: '<S282>/Constant2'
   *  Product: '<S289>/Product'
   *  Sum: '<S289>/Sum'
   *  UnitDelay: '<S289>/Unit Delay1'
   */
  rtb_Add_e3 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S282>/Product' incorporates:
   *  Constant: '<S282>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_e3 * Drive_Motor_Control_D;

  /* Sum: '<S288>/Diff' incorporates:
   *  UnitDelay: '<S288>/UD'
   *
   * Block description for '<S288>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S288>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S282>/Saturation' */
  if (rtb_Gyro_Angle_Field > Drive_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Drive_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S282>/Add' incorporates:
   *  Gain: '<S282>/Gain1'
   *  Saturate: '<S282>/Saturation'
   */
  rtb_Add_g4 = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Hypot_bl) +
    rtb_Gyro_Angle_Field;

  /* Sum: '<S282>/Subtract' incorporates:
   *  Constant: '<S282>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_g4;

  /* Sum: '<S282>/Sum2' incorporates:
   *  Gain: '<S282>/Gain2'
   *  UnitDelay: '<S282>/Unit Delay'
   */
  rtb_Hypot_bl = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S290>/Switch2' incorporates:
   *  Constant: '<S282>/Constant'
   *  RelationalOperator: '<S290>/LowerRelop1'
   *  Sum: '<S282>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_g4))) {
    /* Switch: '<S290>/Switch' incorporates:
     *  Constant: '<S282>/Constant1'
     *  RelationalOperator: '<S290>/UpperRelop'
     *  Sum: '<S282>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_g4)) {
      rtb_thetay_f = -1.0 - rtb_Add_g4;
    } else {
      rtb_thetay_f = rtb_Hypot_bl;
    }

    /* End of Switch: '<S290>/Switch' */
  }

  /* End of Switch: '<S290>/Switch2' */

  /* Saturate: '<S282>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_f;
  }

  /* End of Saturate: '<S282>/Saturation1' */

  /* Sum: '<S282>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Add_g4 + rtb_Hypot_bl;

  /* Saturate: '<S282>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S282>/Saturation2' */

  /* Sum: '<S298>/Add1' incorporates:
   *  Constant: '<S298>/Constant3'
   *  Constant: '<S298>/Constant4'
   *  Math: '<S298>/Math Function'
   *  Sum: '<S298>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S300>/Sum1' incorporates:
   *  Constant: '<S285>/Constant2'
   *  Product: '<S300>/Product'
   *  Sum: '<S300>/Sum'
   *  UnitDelay: '<S300>/Unit Delay1'
   */
  rtb_Add_g4 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S285>/Product' incorporates:
   *  Constant: '<S285>/Constant3'
   */
  rtb_Subtract1_ed = rtb_Add_g4 * Steering_Motor_Control_D;

  /* Sum: '<S299>/Diff' incorporates:
   *  UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Subtract1_ed - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S285>/Saturation' */
  if (rtb_Gyro_Angle_Field > Steering_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Steering_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S285>/Add' incorporates:
   *  Gain: '<S285>/Gain1'
   *  Saturate: '<S285>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_thetay_g) + rtb_Gyro_Angle_Field;

  /* Sum: '<S285>/Subtract' incorporates:
   *  Constant: '<S285>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_ik;

  /* Sum: '<S285>/Sum2' incorporates:
   *  Gain: '<S285>/Gain2'
   *  UnitDelay: '<S285>/Unit Delay'
   */
  rtb_Sum2_n = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S301>/Switch2' incorporates:
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S301>/LowerRelop1'
   *  Sum: '<S285>/Subtract'
   */
  if (!(rtb_Sum2_n > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S285>/Constant1'
     *  RelationalOperator: '<S301>/UpperRelop'
     *  Sum: '<S285>/Subtract1'
     */
    if (rtb_Sum2_n < (-1.0 - rtb_Add_ik)) {
      rtb_thetay_f = -1.0 - rtb_Add_ik;
    } else {
      rtb_thetay_f = rtb_Sum2_n;
    }

    /* End of Switch: '<S301>/Switch' */
  }

  /* End of Switch: '<S301>/Switch2' */

  /* Saturate: '<S285>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Sum2_n = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Sum2_n = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_n = rtb_thetay_f;
  }

  /* End of Saturate: '<S285>/Saturation1' */

  /* Sum: '<S285>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Add_ik + rtb_Sum2_n;

  /* Saturate: '<S285>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S285>/Saturation2' */

  /* Product: '<S372>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S387>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S387>/Switch' incorporates:
     *  Fcn: '<S388>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S387>/Switch' */

  /* Trigonometry: '<S315>/Cos4' incorporates:
   *  Switch: '<S304>/Angle_Switch'
   *  Trigonometry: '<S314>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S253>/Add1' incorporates:
   *  Constant: '<S253>/Constant3'
   *  Constant: '<S253>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S253>/Math Function'
   *  Sum: '<S17>/Add2'
   *  Sum: '<S253>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S315>/Sin5' incorporates:
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S315>/Sin4' incorporates:
   *  Switch: '<S304>/Angle_Switch'
   *  Trigonometry: '<S314>/Sin4'
   */
  rtb_Add_ik = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S315>/Cos5' incorporates:
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S315>/Subtract1' incorporates:
   *  Product: '<S315>/Product2'
   *  Product: '<S315>/Product3'
   *  Trigonometry: '<S315>/Cos4'
   *  Trigonometry: '<S315>/Sin4'
   */
  rtb_Subtract1_kh = (rtb_Add_f1 * rtb_rx_j) + (rtb_Add_ik * rtb_thetay_f);

  /* Sum: '<S315>/Subtract' incorporates:
   *  Product: '<S315>/Product'
   *  Product: '<S315>/Product1'
   *  Trigonometry: '<S315>/Cos4'
   *  Trigonometry: '<S315>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_f1 * rtb_thetay_f) - (rtb_Add_ik * rtb_rx_j);

  /* Math: '<S315>/Hypot' */
  rtb_rx_j = rt_hypotd_snf(rtb_Subtract_n, rtb_Subtract1_kh);

  /* Switch: '<S315>/Switch' incorporates:
   *  Constant: '<S315>/Constant'
   *  Constant: '<S315>/Constant1'
   *  Constant: '<S316>/Constant'
   *  Product: '<S315>/Divide'
   *  Product: '<S315>/Divide1'
   *  RelationalOperator: '<S316>/Compare'
   *  Switch: '<S315>/Switch1'
   */
  if (rtb_rx_j > 1.0E-6) {
    rtb_thetay_g = rtb_Subtract1_kh / rtb_rx_j;
    rtb_thetay_f = rtb_Subtract_n / rtb_rx_j;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S315>/Switch' */

  /* Switch: '<S304>/Speed_Switch' incorporates:
   *  Abs: '<S304>/Abs'
   *  Constant: '<S312>/Constant'
   *  RelationalOperator: '<S312>/Compare'
   *  Switch: '<S304>/Angle_Switch'
   *  Trigonometry: '<S314>/Atan1'
   *  Trigonometry: '<S315>/Atan1'
   *  UnaryMinus: '<S304>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S314>/Subtract1' incorporates:
     *  Product: '<S314>/Product2'
     *  Product: '<S314>/Product3'
     *  UnaryMinus: '<S304>/Unary Minus'
     */
    rtb_Subtract1_kh = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Add_ik
      * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S314>/Subtract' incorporates:
     *  Product: '<S314>/Product'
     *  Product: '<S314>/Product1'
     */
    rtb_Subtract_n = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Add_ik *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S314>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract_n, rtb_Subtract1_kh);

    /* Switch: '<S314>/Switch1' incorporates:
     *  Constant: '<S314>/Constant'
     *  Constant: '<S314>/Constant1'
     *  Constant: '<S317>/Constant'
     *  Product: '<S314>/Divide'
     *  Product: '<S314>/Divide1'
     *  RelationalOperator: '<S317>/Compare'
     *  Switch: '<S314>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract_n /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract1_kh / rtb_Add_ik;
    } else {
      rtb_Subtract_n = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S314>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract_n);
  } else {
    rtb_thetay = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S307>/Product2' incorporates:
   *  Constant: '<S307>/Constant'
   *  Switch: '<S304>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S302>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S302>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S305>/Add' incorporates:
   *  Sum: '<S306>/Sum'
   */
  rtb_Hypot_o = rtb_rx_j - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S257>/Product' incorporates:
   *  Abs: '<S302>/Abs'
   *  Abs: '<S305>/Abs'
   *  Constant: '<S308>/Constant'
   *  Constant: '<S318>/Constant3'
   *  Constant: '<S318>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S302>/OR'
   *  Lookup_n-D: '<S305>/1-D Lookup Table'
   *  Math: '<S318>/Math Function'
   *  RelationalOperator: '<S302>/Equal1'
   *  RelationalOperator: '<S308>/Compare'
   *  Signum: '<S302>/Sign'
   *  Signum: '<S302>/Sign1'
   *  Sum: '<S305>/Add'
   *  Sum: '<S318>/Add1'
   *  Sum: '<S318>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S303>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S303>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S310>/Sum1' incorporates:
   *  Constant: '<S303>/Constant2'
   *  Product: '<S310>/Product'
   *  Sum: '<S310>/Sum'
   *  UnitDelay: '<S310>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S303>/Product' incorporates:
   *  Constant: '<S303>/Constant3'
   */
  rtb_Subtract1_kh = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S309>/Diff' incorporates:
   *  UnitDelay: '<S309>/UD'
   *
   * Block description for '<S309>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S309>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Subtract1_kh - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S303>/Saturation' */
  if (rtb_Gyro_Angle_Field > Drive_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Drive_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S303>/Add' incorporates:
   *  Gain: '<S303>/Gain1'
   *  Saturate: '<S303>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Subtract_n) +
    rtb_Gyro_Angle_Field;

  /* Sum: '<S303>/Subtract' incorporates:
   *  Constant: '<S303>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_kv;

  /* Sum: '<S303>/Sum2' incorporates:
   *  Gain: '<S303>/Gain2'
   *  UnitDelay: '<S303>/Unit Delay'
   */
  rtb_Subtract_n = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S311>/Switch2' incorporates:
   *  Constant: '<S303>/Constant'
   *  RelationalOperator: '<S311>/LowerRelop1'
   *  Sum: '<S303>/Subtract'
   */
  if (!(rtb_Subtract_n > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S303>/Constant1'
     *  RelationalOperator: '<S311>/UpperRelop'
     *  Sum: '<S303>/Subtract1'
     */
    if (rtb_Subtract_n < (-1.0 - rtb_Add_kv)) {
      rtb_thetay_f = -1.0 - rtb_Add_kv;
    } else {
      rtb_thetay_f = rtb_Subtract_n;
    }

    /* End of Switch: '<S311>/Switch' */
  }

  /* End of Switch: '<S311>/Switch2' */

  /* Saturate: '<S303>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_thetay_f;
  }

  /* End of Saturate: '<S303>/Saturation1' */

  /* Sum: '<S303>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S303>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S303>/Saturation2' */

  /* Sum: '<S319>/Add1' incorporates:
   *  Constant: '<S319>/Constant3'
   *  Constant: '<S319>/Constant4'
   *  Math: '<S319>/Math Function'
   *  Sum: '<S319>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S321>/Sum1' incorporates:
   *  Constant: '<S306>/Constant2'
   *  Product: '<S321>/Product'
   *  Sum: '<S321>/Sum'
   *  UnitDelay: '<S321>/Unit Delay1'
   */
  rtb_rx_j = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
              Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S306>/Product' incorporates:
   *  Constant: '<S306>/Constant3'
   */
  rtb_Add_kv = rtb_rx_j * Steering_Motor_Control_D;

  /* Sum: '<S320>/Diff' incorporates:
   *  UnitDelay: '<S320>/UD'
   *
   * Block description for '<S320>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S320>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S306>/Saturation' */
  if (rtb_Gyro_Angle_Field > Steering_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Steering_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S306>/Add' incorporates:
   *  Gain: '<S306>/Gain1'
   *  Saturate: '<S306>/Saturation'
   */
  rtb_Add_f1 = (Steering_Motor_Control_P * rtb_thetay_g) + rtb_Gyro_Angle_Field;

  /* Sum: '<S306>/Subtract' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_f1;

  /* Sum: '<S306>/Sum2' incorporates:
   *  Gain: '<S306>/Gain2'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  rtb_Subtract1_inz = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S322>/Switch2' incorporates:
   *  Constant: '<S306>/Constant'
   *  RelationalOperator: '<S322>/LowerRelop1'
   *  Sum: '<S306>/Subtract'
   */
  if (!(rtb_Subtract1_inz > (1.0 - rtb_Add_f1))) {
    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S306>/Constant1'
     *  RelationalOperator: '<S322>/UpperRelop'
     *  Sum: '<S306>/Subtract1'
     */
    if (rtb_Subtract1_inz < (-1.0 - rtb_Add_f1)) {
      rtb_thetay_f = -1.0 - rtb_Add_f1;
    } else {
      rtb_thetay_f = rtb_Subtract1_inz;
    }

    /* End of Switch: '<S322>/Switch' */
  }

  /* End of Switch: '<S322>/Switch2' */

  /* Saturate: '<S306>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_inz = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_inz = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_inz = rtb_thetay_f;
  }

  /* End of Saturate: '<S306>/Saturation1' */

  /* Sum: '<S306>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Add_f1 + rtb_Subtract1_inz;

  /* Saturate: '<S306>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S306>/Saturation2' */

  /* Product: '<S372>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S392>/Switch' */
  if (!rtb_AT_Tag_13_Active) {
    /* Switch: '<S392>/Switch' incorporates:
     *  Fcn: '<S393>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S392>/Switch' */

  /* Trigonometry: '<S336>/Cos4' incorporates:
   *  Switch: '<S325>/Angle_Switch'
   *  Trigonometry: '<S335>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S254>/Add1' incorporates:
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S254>/Math Function'
   *  Sum: '<S17>/Add3'
   *  Sum: '<S254>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S336>/Sin5' incorporates:
   *  UnaryMinus: '<S334>/Unary Minus'
   */
  rtb_thetay_f = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S336>/Sin4' incorporates:
   *  Switch: '<S325>/Angle_Switch'
   *  Trigonometry: '<S335>/Sin4'
   */
  rtb_Minus_k_idx_0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S336>/Cos5' incorporates:
   *  UnaryMinus: '<S334>/Unary Minus'
   */
  rtb_rx_d = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S336>/Subtract1' incorporates:
   *  Product: '<S336>/Product2'
   *  Product: '<S336>/Product3'
   *  Trigonometry: '<S336>/Cos4'
   *  Trigonometry: '<S336>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Add_f1 * rtb_thetay_f) + (rtb_Minus_k_idx_0 *
    rtb_rx_d);

  /* Sum: '<S336>/Subtract' incorporates:
   *  Product: '<S336>/Product'
   *  Product: '<S336>/Product1'
   *  Trigonometry: '<S336>/Cos4'
   *  Trigonometry: '<S336>/Sin4'
   */
  rtb_Subtract_i = (rtb_Add_f1 * rtb_rx_d) - (rtb_Minus_k_idx_0 * rtb_thetay_f);

  /* Math: '<S336>/Hypot' */
  rtb_Hypot_o = rt_hypotd_snf(rtb_Subtract_i, rtb_Minus_k_idx_1);

  /* Switch: '<S336>/Switch' incorporates:
   *  Constant: '<S336>/Constant'
   *  Constant: '<S336>/Constant1'
   *  Constant: '<S337>/Constant'
   *  Product: '<S336>/Divide'
   *  Product: '<S336>/Divide1'
   *  RelationalOperator: '<S337>/Compare'
   *  Switch: '<S336>/Switch1'
   */
  if (rtb_Hypot_o > 1.0E-6) {
    rtb_thetay_g = rtb_Minus_k_idx_1 / rtb_Hypot_o;
    rtb_rx_d = rtb_Subtract_i / rtb_Hypot_o;
  } else {
    rtb_thetay_g = 0.0;
    rtb_rx_d = 1.0;
  }

  /* End of Switch: '<S336>/Switch' */

  /* Switch: '<S325>/Speed_Switch' incorporates:
   *  Abs: '<S325>/Abs'
   *  Constant: '<S333>/Constant'
   *  RelationalOperator: '<S333>/Compare'
   *  Switch: '<S325>/Angle_Switch'
   *  Trigonometry: '<S335>/Atan1'
   *  Trigonometry: '<S336>/Atan1'
   *  UnaryMinus: '<S325>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_rx_d)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S335>/Subtract1' incorporates:
     *  Product: '<S335>/Product2'
     *  Product: '<S335>/Product3'
     *  UnaryMinus: '<S325>/Unary Minus'
     */
    rtb_Minus_k_idx_1 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S335>/Subtract' incorporates:
     *  Product: '<S335>/Product'
     *  Product: '<S335>/Product1'
     */
    rtb_Minus_k_idx_0 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S335>/Hypot' */
    rtb_Add_f1 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant'
     *  Constant: '<S335>/Constant1'
     *  Constant: '<S338>/Constant'
     *  Product: '<S335>/Divide'
     *  Product: '<S335>/Divide1'
     *  RelationalOperator: '<S338>/Compare'
     *  Switch: '<S335>/Switch'
     */
    if (rtb_Add_f1 > 1.0E-6) {
      rtb_Minus_k_idx_0 /= rtb_Add_f1;
      rtb_Add_f1 = rtb_Minus_k_idx_1 / rtb_Add_f1;
    } else {
      rtb_Minus_k_idx_0 = 1.0;
      rtb_Add_f1 = 0.0;
    }

    /* End of Switch: '<S335>/Switch1' */
    rtb_thetay_f = rt_atan2d_snf(rtb_Add_f1, rtb_Minus_k_idx_0);
  } else {
    rtb_thetay = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_thetay_f = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S328>/Product2' incorporates:
   *  Constant: '<S328>/Constant'
   *  Switch: '<S325>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S323>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S323>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S326>/Add' incorporates:
   *  Sum: '<S327>/Sum'
   */
  rtb_Hypot_o = rtb_thetay_f - Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S258>/Product' incorporates:
   *  Abs: '<S323>/Abs'
   *  Abs: '<S326>/Abs'
   *  Constant: '<S329>/Constant'
   *  Constant: '<S339>/Constant3'
   *  Constant: '<S339>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S323>/OR'
   *  Lookup_n-D: '<S326>/1-D Lookup Table'
   *  Math: '<S339>/Math Function'
   *  RelationalOperator: '<S323>/Equal1'
   *  RelationalOperator: '<S329>/Compare'
   *  Signum: '<S323>/Sign'
   *  Signum: '<S323>/Sign1'
   *  Sum: '<S326>/Add'
   *  Sum: '<S339>/Add1'
   *  Sum: '<S339>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S324>/Gain' */
  rtb_Minus_k_idx_1 = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S324>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S331>/Sum1' incorporates:
   *  Constant: '<S324>/Constant2'
   *  Product: '<S331>/Product'
   *  Sum: '<S331>/Sum'
   *  UnitDelay: '<S331>/Unit Delay1'
   */
  rtb_Add_f1 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S324>/Product' incorporates:
   *  Constant: '<S324>/Constant3'
   */
  rtb_Minus_k_idx_0 = rtb_Add_f1 * Drive_Motor_Control_D;

  /* Sum: '<S330>/Diff' incorporates:
   *  UnitDelay: '<S330>/UD'
   *
   * Block description for '<S330>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S330>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Minus_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S324>/Saturation' */
  if (rtb_Gyro_Angle_Field > Drive_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Drive_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S324>/Add' incorporates:
   *  Gain: '<S324>/Gain1'
   *  Saturate: '<S324>/Saturation'
   */
  rtb_Subtract_i = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Minus_k_idx_1)
    + rtb_Gyro_Angle_Field;

  /* Sum: '<S324>/Subtract' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Subtract_i;

  /* Sum: '<S324>/Sum2' incorporates:
   *  Gain: '<S324>/Gain2'
   *  UnitDelay: '<S324>/Unit Delay'
   */
  rtb_Minus_k_idx_1 = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S332>/Switch2' incorporates:
   *  Constant: '<S324>/Constant'
   *  RelationalOperator: '<S332>/LowerRelop1'
   *  Sum: '<S324>/Subtract'
   */
  if (!(rtb_Minus_k_idx_1 > (1.0 - rtb_Subtract_i))) {
    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S324>/Constant1'
     *  RelationalOperator: '<S332>/UpperRelop'
     *  Sum: '<S324>/Subtract1'
     */
    if (rtb_Minus_k_idx_1 < (-1.0 - rtb_Subtract_i)) {
      rtb_rx_d = -1.0 - rtb_Subtract_i;
    } else {
      rtb_rx_d = rtb_Minus_k_idx_1;
    }

    /* End of Switch: '<S332>/Switch' */
  }

  /* End of Switch: '<S332>/Switch2' */

  /* Saturate: '<S324>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Minus_k_idx_1 = rtb_rx_d;
  }

  /* End of Saturate: '<S324>/Saturation1' */

  /* Sum: '<S324>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Subtract_i + rtb_Minus_k_idx_1;

  /* Saturate: '<S324>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S324>/Saturation2' */

  /* Sum: '<S340>/Add1' incorporates:
   *  Constant: '<S340>/Constant3'
   *  Constant: '<S340>/Constant4'
   *  Math: '<S340>/Math Function'
   *  Sum: '<S340>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S342>/Sum1' incorporates:
   *  Constant: '<S327>/Constant2'
   *  Product: '<S342>/Product'
   *  Sum: '<S342>/Sum'
   *  UnitDelay: '<S342>/Unit Delay1'
   */
  rtb_Subtract_i = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S327>/Product' incorporates:
   *  Constant: '<S327>/Constant3'
   */
  rtb_Hypot_o = rtb_Subtract_i * Steering_Motor_Control_D;

  /* Sum: '<S341>/Diff' incorporates:
   *  UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Gyro_Angle_Field = rtb_Hypot_o - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S327>/Saturation' */
  if (rtb_Gyro_Angle_Field > Steering_Motor_Control_D_UL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_UL;
  } else if (rtb_Gyro_Angle_Field < Steering_Motor_Control_D_LL) {
    rtb_Gyro_Angle_Field = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S327>/Add' incorporates:
   *  Gain: '<S327>/Gain1'
   *  Saturate: '<S327>/Saturation'
   */
  rtb_Add_lw = (Steering_Motor_Control_P * rtb_thetay_g) + rtb_Gyro_Angle_Field;

  /* Sum: '<S327>/Subtract' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_lw;

  /* Sum: '<S327>/Sum2' incorporates:
   *  Gain: '<S327>/Gain2'
   *  UnitDelay: '<S327>/Unit Delay'
   */
  rtb_Sum2_c = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S343>/Switch2' incorporates:
   *  Constant: '<S327>/Constant'
   *  RelationalOperator: '<S343>/LowerRelop1'
   *  Sum: '<S327>/Subtract'
   */
  if (!(rtb_Sum2_c > (1.0 - rtb_Add_lw))) {
    /* Switch: '<S343>/Switch' incorporates:
     *  Constant: '<S327>/Constant1'
     *  RelationalOperator: '<S343>/UpperRelop'
     *  Sum: '<S327>/Subtract1'
     */
    if (rtb_Sum2_c < (-1.0 - rtb_Add_lw)) {
      rtb_rx_d = -1.0 - rtb_Add_lw;
    } else {
      rtb_rx_d = rtb_Sum2_c;
    }

    /* End of Switch: '<S343>/Switch' */
  }

  /* End of Switch: '<S343>/Switch2' */

  /* Saturate: '<S327>/Saturation1' */
  if (rtb_rx_d > Steering_Motor_Control_I_UL) {
    rtb_Sum2_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_d < Steering_Motor_Control_I_LL) {
    rtb_Sum2_c = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_c = rtb_rx_d;
  }

  /* End of Saturate: '<S327>/Saturation1' */

  /* Sum: '<S327>/Add1' */
  rtb_Gyro_Angle_Field = rtb_Add_lw + rtb_Sum2_c;

  /* Saturate: '<S327>/Saturation2' */
  if (rtb_Gyro_Angle_Field > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Gyro_Angle_Field < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S327>/Saturation2' */

  /* Switch: '<S9>/Switch9' incorporates:
   *  Constant: '<S9>/Constant26'
   */
  if (TEST_Speaker_Speed != 0.0) {
    /* Switch: '<S9>/Switch9' */
    rtb_rx_d = TEST_Speaker_Speed;
  } else {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Lookup_n-D: '<S9>/1-D Lookup Table1'
     *  Switch: '<S6>/Switch'
     */
    rtb_rx_d = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled3,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData, 9U);
  }

  /* End of Switch: '<S9>/Switch9' */

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   */
  UnitDelay_e = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S79>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S79>/Delay Input1'
   *
   * Block description for '<S79>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_13_Active = (((int32_T)UnitDelay_e) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   */
  rtb_Is_Absolute_Translation_g =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S80>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S80>/Delay Input1'
   *
   * Block description for '<S80>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_14_Active = (((int32_T)rtb_Is_Absolute_Translation_g) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_n));

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    4.0);

  /* RelationalOperator: '<S82>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   */
  rtb_AT_Tag_11_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S81>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND2_k = (((int32_T)rtb_AT_Tag_11_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S83>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  rtb_AT_Tag_16_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* Chart: '<S9>/Chart_Intake_and_Shooter' incorporates:
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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_16_Active)
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
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_rx_d;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_rx_d;
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
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_rx_d;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_rx_d;
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
      } else if (rtb_AT_Tag_16_Active) {
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
      Code_Gen_M_Waiting_for_Requests(&rtb_AT_Tag_13_Active,
        &rtb_AT_Tag_14_Active, &rtb_AT_Tag_15_Active, &rtb_AND2_k,
        &FixPtRelationalOperator_o, &rtb_rx_d);
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

  /* End of Chart: '<S9>/Chart_Intake_and_Shooter' */

  /* Switch: '<S9>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain4'
     *  Inport: '<Root>/Gamepad_LB'
     */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Test_DC_Gain_Intake *
      Code_Gen_Model_U.Gamepad_LB;
  } else {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Code_Gen_Model_B.Intake_Motor_DC;
  }

  /* End of Switch: '<S9>/Switch3' */

  /* Gain: '<S8>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_rx_d = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Sum: '<S84>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Add_lw = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S84>/Add' incorporates:
   *  Gain: '<S84>/Gain'
   *  Gain: '<S84>/Gain1'
   */
  rtb_Subtract1_g = (Shooter_Motor_Control_FF *
                     Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Add_lw);

  /* Switch: '<S84>/Switch' incorporates:
   *  Constant: '<S84>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S84>/Sum2' incorporates:
     *  Gain: '<S84>/Gain2'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_Add_lw = (Shooter_Motor_Control_I * rtb_Add_lw) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S84>/Subtract' incorporates:
     *  Constant: '<S84>/Constant'
     */
    rtb_thetay_g = 1.0 - rtb_Subtract1_g;

    /* Switch: '<S86>/Switch2' incorporates:
     *  Constant: '<S84>/Constant'
     *  RelationalOperator: '<S86>/LowerRelop1'
     *  Sum: '<S84>/Subtract'
     */
    if (!(rtb_Add_lw > (1.0 - rtb_Subtract1_g))) {
      /* Sum: '<S84>/Subtract1' incorporates:
       *  Constant: '<S84>/Constant1'
       */
      rtb_thetay_g = -1.0 - rtb_Subtract1_g;

      /* Switch: '<S86>/Switch' incorporates:
       *  Constant: '<S84>/Constant1'
       *  RelationalOperator: '<S86>/UpperRelop'
       *  Sum: '<S84>/Subtract1'
       */
      if (!(rtb_Add_lw < (-1.0 - rtb_Subtract1_g))) {
        rtb_thetay_g = rtb_Add_lw;
      }

      /* End of Switch: '<S86>/Switch' */
    }

    /* End of Switch: '<S86>/Switch2' */

    /* Saturate: '<S84>/Saturation1' */
    if (rtb_thetay_g > Shooter_Motor_Control_I_UL) {
      rtb_Add_lw = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_g < Shooter_Motor_Control_I_LL) {
      rtb_Add_lw = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_lw = rtb_thetay_g;
    }

    /* End of Saturate: '<S84>/Saturation1' */
  } else {
    rtb_Add_lw = 0.0;
  }

  /* End of Switch: '<S84>/Switch' */

  /* Switch: '<S9>/Switch4' incorporates:
   *  Switch: '<S9>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S9>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_rx_d;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S84>/Add1' incorporates:
     *  Switch: '<S9>/Switch'
     */
    rtb_Gyro_Angle_Field = rtb_Subtract1_g + rtb_Add_lw;

    /* Saturate: '<S84>/Saturation2' incorporates:
     *  Switch: '<S9>/Switch'
     */
    if (rtb_Gyro_Angle_Field > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Gyro_Angle_Field < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Gyro_Angle_Field;
    }

    /* End of Saturate: '<S84>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S9>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S9>/Switch4' */

  /* Sum: '<S85>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Subtract1_g = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S85>/Add' incorporates:
   *  Gain: '<S85>/Gain'
   *  Gain: '<S85>/Gain1'
   */
  rtb_thetay_g = (Shooter_Motor_Control_FF *
                  Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Subtract1_g);

  /* Switch: '<S85>/Switch' incorporates:
   *  Constant: '<S85>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S85>/Sum2' incorporates:
     *  Gain: '<S85>/Gain2'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    rtb_Subtract1_g = (Shooter_Motor_Control_I * rtb_Subtract1_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S85>/Subtract' incorporates:
     *  Constant: '<S85>/Constant'
     */
    rtb_thetay_f = 1.0 - rtb_thetay_g;

    /* Switch: '<S87>/Switch2' incorporates:
     *  Constant: '<S85>/Constant'
     *  RelationalOperator: '<S87>/LowerRelop1'
     *  Sum: '<S85>/Subtract'
     */
    if (!(rtb_Subtract1_g > (1.0 - rtb_thetay_g))) {
      /* Sum: '<S85>/Subtract1' incorporates:
       *  Constant: '<S85>/Constant1'
       */
      rtb_thetay_f = -1.0 - rtb_thetay_g;

      /* Switch: '<S87>/Switch' incorporates:
       *  Constant: '<S85>/Constant1'
       *  RelationalOperator: '<S87>/UpperRelop'
       *  Sum: '<S85>/Subtract1'
       */
      if (!(rtb_Subtract1_g < (-1.0 - rtb_thetay_g))) {
        rtb_thetay_f = rtb_Subtract1_g;
      }

      /* End of Switch: '<S87>/Switch' */
    }

    /* End of Switch: '<S87>/Switch2' */

    /* Saturate: '<S85>/Saturation1' */
    if (rtb_thetay_f > Shooter_Motor_Control_I_UL) {
      rtb_Subtract1_g = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_f < Shooter_Motor_Control_I_LL) {
      rtb_Subtract1_g = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Subtract1_g = rtb_thetay_f;
    }

    /* End of Saturate: '<S85>/Saturation1' */
  } else {
    rtb_Subtract1_g = 0.0;
  }

  /* End of Switch: '<S85>/Switch' */

  /* Switch: '<S9>/Switch5' incorporates:
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch7'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_rx_d;

    /* Outport: '<Root>/Shooter_Brake_Enable' incorporates:
     *  Constant: '<S9>/Constant3'
     */
    Code_Gen_Model_Y.Shooter_Brake_Enable = 0.0;
  } else {
    if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
      /* Sum: '<S85>/Add1' incorporates:
       *  Switch: '<S9>/Switch1'
       */
      rtb_Gyro_Angle_Field = rtb_thetay_g + rtb_Subtract1_g;

      /* Saturate: '<S85>/Saturation2' incorporates:
       *  Switch: '<S9>/Switch1'
       */
      if (rtb_Gyro_Angle_Field > 1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
      } else if (rtb_Gyro_Angle_Field < -1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
      } else {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Gyro_Angle_Field;
      }

      /* End of Saturate: '<S85>/Saturation2' */
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
       *  Switch: '<S9>/Switch1'
       */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
        Code_Gen_Model_B.Shooter_Motor_DC_Right;
    }

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable =
      Code_Gen_Model_B.Shooter_Brake_Enable_out;
  }

  /* End of Switch: '<S9>/Switch5' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  rtb_thetay = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(rtb_thetay)) || (rtIsInf(rtb_thetay))) {
    rtb_thetay = 0.0;
  } else {
    rtb_thetay = fmod(rtb_thetay, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_thetay < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_thetay)))))) : ((int32_T)((uint8_T)rtb_thetay)));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Switch: '<S15>/Switch5' incorporates:
   *  Constant: '<S15>/Constant26'
   *  Lookup_n-D: '<S15>/1-D Lookup Table1'
   *  Switch: '<S6>/Switch'
   */
  if (TEST_Speaker_Angle != 0.0) {
    rtb_rx_d = TEST_Speaker_Angle;
  } else {
    rtb_rx_d = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled3,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData_p, 9U);
  }

  /* End of Switch: '<S15>/Switch5' */

  /* Switch: '<S15>/Switch4' incorporates:
   *  Constant: '<S15>/Constant25'
   *  Lookup_n-D: '<S15>/1-D Lookup Table2'
   *  Switch: '<S6>/Switch'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_thetay_f = TEST_Speaker_Height;
  } else {
    rtb_thetay_f = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled3,
      Code_Gen_Model_ConstP.uDLookupTable2_tableData, 9U);
  }

  /* End of Switch: '<S15>/Switch4' */

  /* Switch: '<S15>/Switch6' incorporates:
   *  Constant: '<S15>/Constant27'
   *  Lookup_n-D: '<S15>/1-D Lookup Table3'
   *  Switch: '<S6>/Switch'
   */
  if (TEST_Speaker_Gap != 0.0) {
    rtb_Switch6 = TEST_Speaker_Gap;
  } else {
    rtb_Switch6 = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled3,
      Code_Gen_Model_ConstP.uDLookupTable3_tableData, 9U);
  }

  /* End of Switch: '<S15>/Switch6' */

  /* Sum: '<S21>/Subtract1' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   *  Product: '<S21>/Product'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Lower_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Lower * Dist_Per_Rev_Back_Lower) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g;

  /* Sum: '<S22>/Subtract1' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   *  Product: '<S22>/Product'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Upper_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Upper * Dist_Per_Rev_Back_Upper) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;

  /* Sum: '<S155>/Add' incorporates:
   *  Constant: '<S155>/Constant24'
   */
  rtb_thetay_g = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                  Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S155>/Sqrt' incorporates:
   *  Math: '<S155>/Math Function'
   *  Sum: '<S155>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_thetay_g * rtb_thetay_g) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S24>/Subtract1' incorporates:
   *  Constant: '<S24>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S24>/Product'
   *  UnitDelay: '<S24>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;

  /* Sqrt: '<S159>/Sqrt' incorporates:
   *  Constant: '<S159>/Constant24'
   *  Math: '<S159>/Math Function'
   *  Sum: '<S159>/Add'
   *  Sum: '<S159>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Sum: '<S23>/Subtract1' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   *  Product: '<S23>/Product'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  Code_Gen_Model_B.Ball_Screw_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;

  /* MATLAB Function: '<S15>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Constant: '<S15>/Constant12'
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant22'
   *  Constant: '<S15>/Constant3'
   *  Constant: '<S15>/Constant4'
   *  Constant: '<S15>/Constant5'
   *  Constant: '<S15>/Constant6'
   *  Constant: '<S15>/Constant7'
   *  Constant: '<S15>/Constant8'
   *  Constant: '<S15>/Constant9'
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

  rtb_thetay_g = (((((((d * 0.84366148773210747) + 177.79999999999998) - (y *
    -0.53687549219315933)) - 177.79999999999998) - 139.7) *
                   (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
                  177.79999999999998) + 139.7;
  Top_Front_Pivot_y = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((Top_Front_Pivot_y - 25.4) * (Top_Front_Pivot_y - 25.4)) +
           (rtb_thetay_g * rtb_thetay_g));
  sqrt_input = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  sqrt_input = atan((Top_Front_Pivot_y - 25.4) / rtb_thetay_g);
  rtb_thetay = cos(sqrt_input);
  sin_alpha = sin(sqrt_input);
  sqrt_input = (d * rtb_thetay) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * rtb_thetay)) + 25.4;
  rtb_thetay_g = atan((Top_Front_Pivot_y - d) / (rtb_thetay_g - sqrt_input)) -
    -0.16186298985390718;
  y = cos(rtb_thetay_g);
  rtb_thetay = sin(rtb_thetay_g);
  Top_Front_Pivot_y = (d - (42.875 * rtb_thetay)) - (-76.0 * y);
  d = ((sqrt_input - -50.027) - (42.875 * y)) + (-76.0 * rtb_thetay);
  Code_Gen_Model_B.Meas_Gap = ((Top_Front_Pivot_y - 465.697) *
    (Top_Front_Pivot_y - 465.697)) + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = Top_Front_Pivot_y;

  /* Gain: '<S15>/Gain2' incorporates:
   *  MATLAB Function: '<S15>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_thetay_g;

  /* Chart: '<S15>/Chart_Shooter_Position' */
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
        Code_Gen_Model_B.Desired_Angle = rtb_rx_d;
        Code_Gen_Model_B.Desired_Height = rtb_thetay_f;
        Code_Gen_Model_B.Desired_Gap = rtb_Switch6;
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
        Code_Gen_Model_B.Desired_Height = rtb_thetay_f;
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
      if ((Code_Gen_Model_B.Meas_Height < (rtb_thetay_f + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_thetay_f - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = rtb_rx_d;
        Code_Gen_Model_B.Desired_Height = rtb_thetay_f;
        Code_Gen_Model_B.Desired_Gap = rtb_Switch6;
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

  /* End of Chart: '<S15>/Chart_Shooter_Position' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant4'
   *  Switch: '<S9>/Switch6'
   *  Switch: '<S9>/Switch8'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Switch: '<S9>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else if (Code_Gen_Model_B.Shooter_Servo) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S9>/Constant'
     *  Switch: '<S9>/Switch6'
     *  Switch: '<S9>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Gain: '<S9>/Gain'
     *  Lookup_n-D: '<S9>/1-D Lookup Table'
     *  MinMax: '<S15>/Max'
     *  Sum: '<S24>/Subtract1'
     *  Sum: '<S9>/Add'
     *  Sum: '<S9>/Add1'
     *  Switch: '<S9>/Switch6'
     *  Switch: '<S9>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = ((Servo_Store_Gain * fmin
      (Code_Gen_Model_B.Desired_Angle, Code_Gen_Model_B.Meas_Angle)) +
      Servo_Store_Offset) + look1_binlcpw(Code_Gen_Model_B.Front_Arm_Length,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.pooled1, 1U);
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Gain: '<S15>/Gain3' */
  rtb_thetay_g = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S15>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S15>/Constant10'
   *  Constant: '<S15>/Constant11'
   *  Constant: '<S15>/Constant13'
   *  Constant: '<S15>/Constant14'
   *  Constant: '<S15>/Constant15'
   *  Constant: '<S15>/Constant21'
   */
  rtb_rx_d = cos(rtb_thetay_g);
  rtb_thetay_g = sin(rtb_thetay_g);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    rtb_thetay_f = ((rtb_rx_d * 42.875) + ((-rtb_thetay_g) * -76.0)) + (sqrt
      (sqrt_input) - 50.027);
  } else {
    rtb_thetay_f = ((rtb_rx_d * 42.875) + ((-rtb_thetay_g) * -76.0)) - 50.027;
  }

  rtb_Akxhatkk1[0] = rtb_thetay_f;
  rtb_Minus_n[0] = ((rtb_rx_d * 155.54999999999998) + ((-rtb_thetay_g) * -25.4))
    + rtb_thetay_f;
  rtb_thetay_f = ((rtb_thetay_g * 42.875) + (rtb_rx_d * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Akxhatkk1[1] = rtb_thetay_f;
  rtb_Minus_n[1] = ((rtb_thetay_g * 155.54999999999998) + (rtb_rx_d * -25.4)) +
    rtb_thetay_f;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Akxhatkk1[1] - 25.4) *
    (rtb_Akxhatkk1[1] - 25.4)) + (rtb_Akxhatkk1[0] * rtb_Akxhatkk1[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_rx_d = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                  (rtb_Minus_n[1] * rtb_Minus_n[1]));
  sqrt_input = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_rx_d));
  rtb_thetay_g = ((288.925 / rtb_rx_d) * rtb_Minus_n[1]) - 88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (sqrt_input * sqrt_input) + (rtb_thetay_g
    * rtb_thetay_g);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_rx_d;

  /* End of MATLAB Function: '<S15>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S15>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S15>/Constant23'
   *  Constant: '<S15>/Constant24'
   *  Constant: '<S15>/Constant28'
   *  Constant: '<S15>/Constant29'
   *  Constant: '<S15>/Constant30'
   *  Constant: '<S15>/Constant31'
   */
  rtb_rx_d = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                   Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_rx_d <= 98.425) {
    rtb_thetay_f = 79.375;
    rtb_rx_d = 19.049999999999997;
  } else if (rtb_rx_d <= 188.425) {
    rtb_thetay_f = rtb_rx_d - 19.049999999999997;
    rtb_rx_d = 19.049999999999997;
  } else {
    rtb_thetay_f = fmin(fmax(((((rtb_rx_d - 90.0) - 19.049999999999997) - 79.375)
      * 0.32) + 169.375, 79.375), 317.0);
    rtb_rx_d = fmin(fmax(rtb_rx_d - rtb_thetay_f, 19.049999999999997), 334.0);
  }

  /* Switch: '<S183>/Init' incorporates:
   *  UnitDelay: '<S183>/FixPt Unit Delay1'
   *  UnitDelay: '<S183>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_thetay_g = rtb_rx_d;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S183>/Init' */

  /* Sum: '<S181>/Sum1' */
  rtb_rx_d -= rtb_thetay_g;

  /* Switch: '<S182>/Switch2' incorporates:
   *  Constant: '<S167>/Constant1'
   *  Constant: '<S167>/Constant3'
   *  RelationalOperator: '<S182>/LowerRelop1'
   *  RelationalOperator: '<S182>/UpperRelop'
   *  Switch: '<S182>/Switch'
   */
  if (rtb_rx_d > AA_Position_Back_Inc_RL) {
    rtb_rx_d = AA_Position_Back_Inc_RL;
  } else if (rtb_rx_d < AA_Position_Back_Dec_RL) {
    /* Switch: '<S182>/Switch' incorporates:
     *  Constant: '<S167>/Constant1'
     */
    rtb_rx_d = AA_Position_Back_Dec_RL;
  }

  /* End of Switch: '<S182>/Switch2' */

  /* Sum: '<S181>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_rx_d + rtb_thetay_g;

  /* Sum: '<S163>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S163>/Gain1' */
  rtb_rx_d = AA_Prop_Gain * rtb_thetay_g;

  /* RelationalOperator: '<S157>/Compare' incorporates:
   *  Constant: '<S157>/Constant'
   */
  rtb_AT_Tag_14_Active = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S163>/Switch' incorporates:
   *  Constant: '<S163>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S163>/Constant3'
     *  UnitDelay: '<S172>/Delay Input1'
     *
     * Block description for '<S172>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      rtb_Switch6 = AA_Integral_IC;
    } else {
      /* Sum: '<S163>/Sum2' incorporates:
       *  Gain: '<S163>/Gain2'
       *  UnitDelay: '<S163>/Unit Delay'
       */
      rtb_thetay_g = (AA_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S163>/Subtract' incorporates:
       *  Constant: '<S163>/Constant'
       */
      rtb_Switch6 = AA_TC_UL - rtb_rx_d;

      /* Switch: '<S173>/Switch2' incorporates:
       *  RelationalOperator: '<S173>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_Switch6)) {
        /* Sum: '<S163>/Subtract1' incorporates:
         *  Constant: '<S163>/Constant1'
         */
        rtb_Switch6 = AA_TC_LL - rtb_rx_d;

        /* Switch: '<S173>/Switch' incorporates:
         *  RelationalOperator: '<S173>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_Switch6)) {
          rtb_Switch6 = rtb_thetay_g;
        }

        /* End of Switch: '<S173>/Switch' */
      }

      /* End of Switch: '<S173>/Switch2' */

      /* Saturate: '<S163>/Saturation1' */
      if (rtb_Switch6 > AA_Integral_UL) {
        rtb_Switch6 = AA_Integral_UL;
      } else if (rtb_Switch6 < AA_Integral_LL) {
        rtb_Switch6 = AA_Integral_LL;
      }

      /* End of Saturate: '<S163>/Saturation1' */
    }

    /* End of Switch: '<S163>/Switch1' */
  } else {
    rtb_Switch6 = 0.0;
  }

  /* End of Switch: '<S163>/Switch' */

  /* Switch: '<S15>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S163>/Add1' */
    rtb_Gyro_Angle_Field = rtb_rx_d + rtb_Switch6;

    /* Saturate: '<S163>/Saturation2' */
    if (rtb_Gyro_Angle_Field > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Gyro_Angle_Field < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = rtb_Gyro_Angle_Field;
    }

    /* End of Saturate: '<S163>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch1' */

  /* Switch: '<S166>/Switch' incorporates:
   *  Constant: '<S15>/Constant28'
   *  Constant: '<S166>/Constant'
   *  Constant: '<S166>/Constant2'
   *  MATLAB Function: '<S15>/Back_AA_To_Extentions'
   *  RelationalOperator: '<S166>/Relational Operator'
   *  UnitDelay: '<S166>/Unit Delay'
   */
  if (Code_Gen_Model_B.Desired_Back_Lower_Dist < 169.375) {
    Top_Front_Pivot_y = 2.0;
  } else {
    Top_Front_Pivot_y = 1.0;
  }

  /* End of Switch: '<S166>/Switch' */

  /* Product: '<S166>/Product' incorporates:
   *  Constant: '<S166>/Constant3'
   */
  rtb_thetay_g = AA_Position_Back_Inc_RL * Top_Front_Pivot_y;

  /* Switch: '<S180>/Init' incorporates:
   *  MATLAB Function: '<S15>/Back_AA_To_Extentions'
   *  UnitDelay: '<S180>/FixPt Unit Delay1'
   *  UnitDelay: '<S180>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l5 != 0) {
    rtb_rx_d = rtb_thetay_f;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S180>/Init' */

  /* Sum: '<S178>/Sum1' incorporates:
   *  MATLAB Function: '<S15>/Back_AA_To_Extentions'
   */
  rtb_thetay_f -= rtb_rx_d;

  /* Switch: '<S179>/Switch2' incorporates:
   *  RelationalOperator: '<S179>/LowerRelop1'
   */
  if (!(rtb_thetay_f > rtb_thetay_g)) {
    /* Product: '<S166>/Product1' incorporates:
     *  Constant: '<S166>/Constant1'
     */
    rtb_thetay_g = AA_Position_Back_Dec_RL * Top_Front_Pivot_y;

    /* Switch: '<S179>/Switch' incorporates:
     *  RelationalOperator: '<S179>/UpperRelop'
     */
    if (!(rtb_thetay_f < rtb_thetay_g)) {
      rtb_thetay_g = rtb_thetay_f;
    }

    /* End of Switch: '<S179>/Switch' */
  }

  /* End of Switch: '<S179>/Switch2' */

  /* Sum: '<S178>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_thetay_g + rtb_rx_d;

  /* Sum: '<S164>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S164>/Gain1' */
  rtb_rx_d = AA_Prop_Gain * rtb_thetay_g;

  /* Switch: '<S164>/Switch' incorporates:
   *  Constant: '<S164>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S164>/Constant3'
     *  UnitDelay: '<S174>/Delay Input1'
     *
     * Block description for '<S174>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      Top_Front_Pivot_y = AA_Integral_IC;
    } else {
      /* Sum: '<S164>/Sum2' incorporates:
       *  Gain: '<S164>/Gain2'
       *  UnitDelay: '<S164>/Unit Delay'
       */
      rtb_thetay_g = (AA_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c;

      /* Sum: '<S164>/Subtract' incorporates:
       *  Constant: '<S164>/Constant'
       */
      rtb_thetay_f = AA_TC_UL - rtb_rx_d;

      /* Switch: '<S175>/Switch2' incorporates:
       *  RelationalOperator: '<S175>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S164>/Subtract1' incorporates:
         *  Constant: '<S164>/Constant1'
         */
        rtb_thetay_f = AA_TC_LL - rtb_rx_d;

        /* Switch: '<S175>/Switch' incorporates:
         *  RelationalOperator: '<S175>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S175>/Switch' */
      }

      /* End of Switch: '<S175>/Switch2' */

      /* Saturate: '<S164>/Saturation1' */
      if (rtb_thetay_f > AA_Integral_UL) {
        Top_Front_Pivot_y = AA_Integral_UL;
      } else if (rtb_thetay_f < AA_Integral_LL) {
        Top_Front_Pivot_y = AA_Integral_LL;
      } else {
        Top_Front_Pivot_y = rtb_thetay_f;
      }

      /* End of Saturate: '<S164>/Saturation1' */
    }

    /* End of Switch: '<S164>/Switch1' */
  } else {
    Top_Front_Pivot_y = 0.0;
  }

  /* End of Switch: '<S164>/Switch' */

  /* Switch: '<S15>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S164>/Add1' */
    rtb_Gyro_Angle_Field = rtb_rx_d + Top_Front_Pivot_y;

    /* Saturate: '<S164>/Saturation2' */
    if (rtb_Gyro_Angle_Field > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Gyro_Angle_Field < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Gyro_Angle_Field;
    }

    /* End of Saturate: '<S164>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch' */

  /* Sum: '<S158>/Subtract1' incorporates:
   *  Constant: '<S158>/Constant24'
   *  Math: '<S158>/Math Function'
   *  Sqrt: '<S158>/Sqrt'
   *  Sum: '<S158>/Subtract'
   */
  rtb_thetay_g = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                       Code_Gen_Model_B.Desired_Front_AA_Length) -
                      Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S158>/Saturation' */
  if (rtb_thetay_g > Front_AA_Max_Ext) {
    rtb_thetay_g = Front_AA_Max_Ext;
  } else if (rtb_thetay_g < Front_AA_Min_Ext) {
    rtb_thetay_g = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S158>/Saturation' */

  /* Switch: '<S189>/Init' incorporates:
   *  UnitDelay: '<S189>/FixPt Unit Delay1'
   *  UnitDelay: '<S189>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_rx_d = rtb_thetay_g;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S189>/Init' */

  /* Sum: '<S187>/Sum1' */
  rtb_thetay_g -= rtb_rx_d;

  /* Switch: '<S188>/Switch2' incorporates:
   *  Constant: '<S169>/Constant1'
   *  Constant: '<S169>/Constant3'
   *  RelationalOperator: '<S188>/LowerRelop1'
   *  RelationalOperator: '<S188>/UpperRelop'
   *  Switch: '<S188>/Switch'
   */
  if (rtb_thetay_g > AA_Position_Front_Inc_RL) {
    rtb_thetay_g = AA_Position_Front_Inc_RL;
  } else if (rtb_thetay_g < AA_Position_Front_Dec_RL) {
    /* Switch: '<S188>/Switch' incorporates:
     *  Constant: '<S169>/Constant1'
     */
    rtb_thetay_g = AA_Position_Front_Dec_RL;
  }

  /* End of Switch: '<S188>/Switch2' */

  /* Sum: '<S187>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_thetay_g + rtb_rx_d;

  /* Sum: '<S165>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S165>/Gain1' */
  rtb_rx_d = AA_Prop_Gain * rtb_thetay_g;

  /* Switch: '<S165>/Switch' incorporates:
   *  Constant: '<S165>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S165>/Constant3'
     *  UnitDelay: '<S176>/Delay Input1'
     *
     * Block description for '<S176>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S165>/Sum2' incorporates:
       *  Gain: '<S165>/Gain2'
       *  UnitDelay: '<S165>/Unit Delay'
       */
      rtb_thetay_g = (AA_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S165>/Subtract' incorporates:
       *  Constant: '<S165>/Constant'
       */
      rtb_thetay_f = AA_TC_UL - rtb_rx_d;

      /* Switch: '<S177>/Switch2' incorporates:
       *  RelationalOperator: '<S177>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S165>/Subtract1' incorporates:
         *  Constant: '<S165>/Constant1'
         */
        rtb_thetay_f = AA_TC_LL - rtb_rx_d;

        /* Switch: '<S177>/Switch' incorporates:
         *  RelationalOperator: '<S177>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S177>/Switch' */
      }

      /* End of Switch: '<S177>/Switch2' */

      /* Saturate: '<S165>/Saturation1' */
      if (rtb_thetay_f > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (rtb_thetay_f < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      } else {
        sqrt_input = rtb_thetay_f;
      }

      /* End of Saturate: '<S165>/Saturation1' */
    }

    /* End of Switch: '<S165>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S165>/Switch' */

  /* Switch: '<S15>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S165>/Add1' */
    rtb_Gyro_Angle_Field = rtb_rx_d + sqrt_input;

    /* Saturate: '<S165>/Saturation2' */
    if (rtb_Gyro_Angle_Field > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Gyro_Angle_Field < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Gyro_Angle_Field;
    }

    /* End of Saturate: '<S165>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch2' */

  /* Switch: '<S186>/Init' incorporates:
   *  UnitDelay: '<S186>/FixPt Unit Delay1'
   *  UnitDelay: '<S186>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_thetay_g = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S186>/Init' */

  /* Sum: '<S184>/Sum1' */
  rtb_rx_d = Code_Gen_Model_B.Desired_BS_Length - rtb_thetay_g;

  /* Switch: '<S185>/Switch2' incorporates:
   *  Constant: '<S168>/Constant1'
   *  Constant: '<S168>/Constant3'
   *  RelationalOperator: '<S185>/LowerRelop1'
   *  RelationalOperator: '<S185>/UpperRelop'
   *  Switch: '<S185>/Switch'
   */
  if (rtb_rx_d > BS_Position_Inc_RL) {
    rtb_rx_d = BS_Position_Inc_RL;
  } else if (rtb_rx_d < BS_Position_Dec_RL) {
    /* Switch: '<S185>/Switch' incorporates:
     *  Constant: '<S168>/Constant1'
     */
    rtb_rx_d = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S185>/Switch2' */

  /* Sum: '<S184>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_rx_d + rtb_thetay_g;

  /* Sum: '<S162>/Sum' */
  rtb_rx_d = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S171>/Sum1' incorporates:
   *  Constant: '<S162>/Constant2'
   *  Product: '<S171>/Product'
   *  Sum: '<S171>/Sum'
   *  UnitDelay: '<S171>/Unit Delay1'
   */
  d = ((rtb_rx_d - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S162>/Product' incorporates:
   *  Constant: '<S162>/Constant3'
   */
  y = d * BS_Deriv_Gain;

  /* Switch: '<S15>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S170>/Diff' incorporates:
     *  UnitDelay: '<S170>/UD'
     *
     * Block description for '<S170>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S170>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Gyro_Angle_Field = y - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S162>/Saturation' */
    if (rtb_Gyro_Angle_Field > BS_Deriv_UL) {
      rtb_Gyro_Angle_Field = BS_Deriv_UL;
    } else if (rtb_Gyro_Angle_Field < BS_Deriv_LL) {
      rtb_Gyro_Angle_Field = BS_Deriv_LL;
    }

    /* Sum: '<S162>/Add' incorporates:
     *  Gain: '<S162>/Gain1'
     *  Saturate: '<S162>/Saturation'
     */
    rtb_Gyro_Angle_Field += BS_Prop_Gain * rtb_rx_d;

    /* Saturate: '<S162>/Saturation2' */
    if (rtb_Gyro_Angle_Field > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (rtb_Gyro_Angle_Field < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = rtb_Gyro_Angle_Field;
    }

    /* End of Saturate: '<S162>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch3' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  Switch: '<S4>/Switch1'
   */
  if (UnitDelay > 0.0) {
    rtb_thetay = Climber_Position_Inc_RL;
  } else if (UnitDelay < 0.0) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     */
    rtb_thetay = Climber_Position_Dec_RL;
  } else {
    rtb_thetay = 0.0;
  }

  /* Sum: '<S4>/Sum' incorporates:
   *  Switch: '<S4>/Switch'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  UnitDelay = rtb_thetay + Code_Gen_Model_DW.UnitDelay_DSTATE_om;

  /* Saturate: '<S4>/Saturation1' */
  if (UnitDelay > Climber_Distance_UL) {
    /* Saturate: '<S4>/Saturation1' */
    Code_Gen_Model_B.Climber_Desired_Position = Climber_Distance_UL;
  } else if (UnitDelay < Climber_Distance_LL) {
    /* Saturate: '<S4>/Saturation1' */
    Code_Gen_Model_B.Climber_Desired_Position = Climber_Distance_LL;
  } else {
    /* Saturate: '<S4>/Saturation1' */
    Code_Gen_Model_B.Climber_Desired_Position = UnitDelay;
  }

  /* End of Saturate: '<S4>/Saturation1' */

  /* Product: '<S4>/Product' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Encoder_Revs_Climber'
   */
  Code_Gen_Model_B.Climber_Length = Code_Gen_Model_U.Encoder_Revs_Climber *
    Dist_Per_Rev_Climber;

  /* Sum: '<S36>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Climber_Desired_Position -
    Code_Gen_Model_B.Climber_Length;

  /* Gain: '<S36>/Gain1' */
  rtb_rx_d = Climber_Prop_Gain * rtb_thetay_g;

  /* RelationalOperator: '<S35>/Compare' incorporates:
   *  Constant: '<S35>/Constant'
   */
  rtb_AT_Tag_15_Active = (rtb_GameState != 0);

  /* Switch: '<S36>/Switch' incorporates:
   *  Constant: '<S36>/Constant2'
   */
  if (rtb_AT_Tag_15_Active) {
    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S36>/Constant3'
     *  UnitDelay: '<S37>/Delay Input1'
     *
     * Block description for '<S37>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_eo) {
      sin_alpha = Climber_Integral_IC;
    } else {
      /* Sum: '<S36>/Sum2' incorporates:
       *  Gain: '<S36>/Gain2'
       *  UnitDelay: '<S36>/Unit Delay'
       */
      rtb_thetay_g = (Climber_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_ge;

      /* Sum: '<S36>/Subtract' incorporates:
       *  Constant: '<S36>/Constant'
       */
      rtb_thetay_f = Climber_TC_UL - rtb_rx_d;

      /* Switch: '<S38>/Switch2' incorporates:
       *  RelationalOperator: '<S38>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S36>/Subtract1' incorporates:
         *  Constant: '<S36>/Constant1'
         */
        rtb_thetay_f = Climber_TC_LL - rtb_rx_d;

        /* Switch: '<S38>/Switch' incorporates:
         *  RelationalOperator: '<S38>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S38>/Switch' */
      }

      /* End of Switch: '<S38>/Switch2' */

      /* Saturate: '<S36>/Saturation1' */
      if (rtb_thetay_f > Climber_Integral_UL) {
        sin_alpha = Climber_Integral_UL;
      } else if (rtb_thetay_f < Climber_Integral_LL) {
        sin_alpha = Climber_Integral_LL;
      } else {
        sin_alpha = rtb_thetay_f;
      }

      /* End of Saturate: '<S36>/Saturation1' */
    }

    /* End of Switch: '<S36>/Switch1' */
  } else {
    sin_alpha = 0.0;
  }

  /* End of Switch: '<S36>/Switch' */

  /* Sum: '<S36>/Add1' */
  rtb_Gyro_Angle_Field = rtb_rx_d + sin_alpha;

  /* Saturate: '<S36>/Saturation2' */
  if (rtb_Gyro_Angle_Field > Climber_TC_UL) {
    /* Outport: '<Root>/Climber_DutyCycle' */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_TC_UL;
  } else if (rtb_Gyro_Angle_Field < Climber_TC_LL) {
    /* Outport: '<Root>/Climber_DutyCycle' */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_TC_LL;
  } else {
    /* Outport: '<Root>/Climber_DutyCycle' */
    Code_Gen_Model_Y.Climber_DutyCycle = rtb_Gyro_Angle_Field;
  }

  /* End of Saturate: '<S36>/Saturation2' */

  /* Logic: '<S2>/Logical Operator' incorporates:
   *  Abs: '<S21>/Abs'
   *  Abs: '<S22>/Abs'
   *  Abs: '<S23>/Abs'
   *  Abs: '<S24>/Abs'
   *  Constant: '<S21>/Calibration_Tolerance'
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Constant: '<S22>/Calibration_Tolerance'
   *  Constant: '<S22>/Dist_Reset_Value'
   *  Constant: '<S23>/Calibration_Tolerance'
   *  Constant: '<S23>/Dist_Reset_Value'
   *  Constant: '<S24>/Calibration_Tolerance'
   *  Constant: '<S24>/Dist_Reset_Value'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  Sum: '<S21>/Subtract'
   *  Sum: '<S22>/Subtract'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S24>/Subtract'
   */
  Code_Gen_Model_B.Is_All_Arms_Cal_Position = ((((fabs
    (Code_Gen_Model_B.Back_Lower_Arm_Length - Dist_Reset_Value_Back_Lower) <=
    Dist_AA_Cal_Tol) && (fabs(Code_Gen_Model_B.Back_Upper_Arm_Length -
    Dist_Reset_Value_Back_Upper) <= Dist_AA_Cal_Tol)) && (fabs
    (Code_Gen_Model_B.Front_Arm_Length - Dist_Reset_Value_Front) <=
    Dist_AA_Cal_Tol)) && (fabs(Code_Gen_Model_B.Ball_Screw_Arm_Length -
    Dist_Reset_Value_Ball_Screw) <= Dist_BS_Cal_Tol));

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Inport: '<Root>/IsRedAlliance'
   */
  if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
    rtb_thetay = 3.1415926535897931;
  } else {
    rtb_thetay = 0.0;
  }

  /* Sum: '<S7>/Add' incorporates:
   *  Switch: '<S7>/Switch'
   */
  rtb_Gyro_Angle_Field = rtb_UnitDelay1_gi + rtb_thetay;

  /* Trigonometry: '<S13>/Trigonometric Function1' */
  rtb_rx_d = sin(rtb_Gyro_Angle_Field);

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S13>/Trigonometric Function'
   */
  Rot_Mat_idx_0 = cos(rtb_Gyro_Angle_Field);
  Rot_Mat_idx_1 = rtb_rx_d;

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus'
   */
  Rot_Mat_idx_2 = -rtb_rx_d;

  /* Sum: '<S142>/Diff' incorporates:
   *  UnitDelay: '<S142>/UD'
   *
   * Block description for '<S142>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_g = rtb_Gyro_Angle_Field - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S13>/Subtract2' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Gain: '<S13>/Gain7'
   *  Math: '<S13>/Square'
   */
  rtb_rx_d = 1.0 - ((rtb_thetay_g * rtb_thetay_g) * 0.16666666666666666);

  /* Gain: '<S13>/Gain6' */
  rtb_thetay_g *= 0.5;

  /* SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_1 = rtb_thetay_g;

  /* SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_0 = -rtb_thetay_g;

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S143>/Diff'
   *  UnitDelay: '<S143>/UD'
   *
   * Block description for '<S143>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_g = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.037290702116950625;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S144>/Diff'
   *  UnitDelay: '<S144>/UD'
   *
   * Block description for '<S144>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S144>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_f = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Product: '<S13>/Product2' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S145>/Diff'
   *  UnitDelay: '<S145>/UD'
   *
   * Block description for '<S145>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S145>/UD':
   *
   *  Store in Global RAM
   */
  rtb_UnitDelay1_gi = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                       Code_Gen_Model_DW.UD_DSTATE_ic) * 0.037290702116950625;

  /* Product: '<S13>/Product3' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S146>/Diff'
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
  rtb_thetay = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_ce) * 0.037290702116950625;

  /* SignalConversion generated from: '<S13>/Product7' incorporates:
   *  Fcn: '<S147>/r->x'
   *  Fcn: '<S147>/theta->y'
   *  Fcn: '<S148>/r->x'
   *  Fcn: '<S148>/theta->y'
   *  Fcn: '<S149>/r->x'
   *  Fcn: '<S149>/theta->y'
   *  Fcn: '<S150>/r->x'
   *  Fcn: '<S150>/theta->y'
   */
  rtb_thetay_n[0] = rtb_thetay_g * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[1] = rtb_thetay_g * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[2] = rtb_thetay_f * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[3] = rtb_thetay_f * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[4] = rtb_UnitDelay1_gi * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[5] = rtb_UnitDelay1_gi * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[6] = rtb_thetay * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n[7] = rtb_thetay * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S13>/Product7' incorporates:
   *  Constant: '<S13>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_thetay = 0.0;
    rtb_Num_Segments = 0;
    for (s218_iter = 0; s218_iter < 8; s218_iter++) {
      rtb_thetay += Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_thetay_n[s218_iter];
      rtb_Num_Segments += 2;
    }

    rtb_Akxhatkk1[i] = rtb_thetay;
  }

  /* End of Product: '<S13>/Product7' */

  /* Product: '<S13>/Product6' incorporates:
   *  Concatenate: '<S13>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_UnitDelay1_gi = (rtb_rx_d * rtb_Akxhatkk1[0]) +
    (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[1]);
  rtb_rx_d = (rtb_POSEexponentialmatrixfori_1 * rtb_Akxhatkk1[0]) + (rtb_rx_d *
    rtb_Akxhatkk1[1]);

  /* Product: '<S13>/Product6' incorporates:
   *  Concatenate: '<S13>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (Rot_Mat_idx_0 * rtb_UnitDelay1_gi) +
    (Rot_Mat_idx_2 * rtb_rx_d);
  Code_Gen_Model_B.Product6[1] = (Rot_Mat_idx_1 * rtb_UnitDelay1_gi) +
    (Rot_Mat_idx_0 * rtb_rx_d);

  /* Outputs for Enabled SubSystem: '<S108>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S139>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S139>/D[k]*u[k]' incorporates:
     *  Constant: '<S88>/D'
     */
    rtb_UnitDelay1_gi = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S139>/Sum' incorporates:
     *  Constant: '<S88>/C'
     *  Delay: '<S88>/MemoryX'
     *  Product: '<S139>/C[k]*xhat[k|k-1]'
     *  Product: '<S139>/D[k]*u[k]'
     *  Sum: '<S139>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_UnitDelay1_gi;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_UnitDelay1_gi;

    /* Product: '<S139>/Product3' incorporates:
     *  Constant: '<S89>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S139>/Product3' incorporates:
     *  Outport: '<S139>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S108>/MeasurementUpdate' */

  /* RelationalOperator: '<S152>/Compare' incorporates:
   *  Constant: '<S151>/Constant'
   *  Constant: '<S152>/Constant'
   */
  rtb_AT_Tag_13_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S151>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S151>/Switch' incorporates:
   *  UnitDelay: '<S151>/Unit Delay'
   */
  if (rtb_AT_Tag_13_Active) {
    rtb_UnitDelay1_gi = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S151>/Switch' */

  /* Sum: '<S151>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_UnitDelay1_gi;

  /* Gain: '<S151>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S151>/Switch1' incorporates:
   *  UnitDelay: '<S151>/Unit Delay1'
   */
  if (rtb_AT_Tag_13_Active) {
    rtb_rx_d = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_rx_d = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S151>/Switch1' */

  /* Sum: '<S151>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_rx_d;

  /* Chart: '<S14>/Chart' */
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

  /* End of Chart: '<S14>/Chart' */

  /* Update for UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_OR7;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' incorporates:
     *  Bias: '<S218>/Bias'
     *  Merge: '<S192>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' incorporates:
     *  Bias: '<S218>/Bias'
     *  Merge: '<S192>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S88>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S108>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S88>/A'
   *  Delay: '<S88>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S88>/MemoryX' incorporates:
   *  Constant: '<S88>/B'
   *  Product: '<S108>/A[k]*xhat[k|k-1]'
   *  Product: '<S108>/B[k]*u[k]'
   *  Sum: '<S108>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S13>/Accumulator2' incorporates:
   *  Constant: '<S13>/Constant'
   *  DiscreteIntegrator: '<S13>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S13>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S13>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S10>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_o = Code_Gen_Model_B.Note_State_ID;

  /* Update for UnitDelay: '<S355>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S355>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S369>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S368>/UD'
   *
   * Block description for '<S368>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_nj;

  /* Update for UnitDelay: '<S366>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S364>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S364>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S268>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Switch2;

  /* Update for UnitDelay: '<S267>/UD'
   *
   * Block description for '<S267>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Switch4_g;

  /* Update for UnitDelay: '<S261>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Switch1_p;

  /* Update for UnitDelay: '<S279>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Switch2_o;

  /* Update for UnitDelay: '<S278>/UD'
   *
   * Block description for '<S278>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S264>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Steer_Joystick_X_Rel_Mod;

  /* Update for UnitDelay: '<S289>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_e3;

  /* Update for UnitDelay: '<S288>/UD'
   *
   * Block description for '<S288>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S282>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S300>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_g4;

  /* Update for UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_ed;

  /* Update for UnitDelay: '<S285>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_n;

  /* Update for UnitDelay: '<S310>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S309>/UD'
   *
   * Block description for '<S309>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_kh;

  /* Update for UnitDelay: '<S303>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S321>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_rx_j;

  /* Update for UnitDelay: '<S320>/UD'
   *
   * Block description for '<S320>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S306>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_inz;

  /* Update for UnitDelay: '<S331>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Add_f1;

  /* Update for UnitDelay: '<S330>/UD'
   *
   * Block description for '<S330>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Minus_k_idx_0;

  /* Update for UnitDelay: '<S324>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S342>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Subtract_i;

  /* Update for UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Hypot_o;

  /* Update for UnitDelay: '<S327>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_c;

  /* Update for UnitDelay: '<S79>/Delay Input1'
   *
   * Block description for '<S79>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay_e;

  /* Update for UnitDelay: '<S80>/Delay Input1'
   *
   * Block description for '<S80>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S84>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Add_lw;

  /* Update for UnitDelay: '<S85>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S183>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S183>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S172>/Delay Input1'
   *
   * Block description for '<S172>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Switch6;

  /* Update for UnitDelay: '<S180>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S180>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l5 = 0U;

  /* Update for UnitDelay: '<S174>/Delay Input1'
   *
   * Block description for '<S174>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S164>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = Top_Front_Pivot_y;

  /* Update for UnitDelay: '<S189>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S189>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S176>/Delay Input1'
   *
   * Block description for '<S176>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S165>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = sqrt_input;

  /* Update for UnitDelay: '<S186>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S186>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S171>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = d;

  /* Update for UnitDelay: '<S170>/UD'
   *
   * Block description for '<S170>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = y;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_om = UnitDelay;

  /* Update for UnitDelay: '<S37>/Delay Input1'
   *
   * Block description for '<S37>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_eo = rtb_AT_Tag_15_Active;

  /* Update for UnitDelay: '<S36>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ge = sin_alpha;

  /* Update for UnitDelay: '<S142>/UD'
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Gyro_Angle_Field;

  /* Update for UnitDelay: '<S143>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S144>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S144>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S145>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S145>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S146>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S146>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S151>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S151>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_rx_d;
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

    /* Start for If: '<S16>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S88>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S355>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S7>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for UnitDelay: '<S364>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S183>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S180>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l5 = 1U;

    /* InitializeConditions for UnitDelay: '<S189>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S186>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S28>/Chart' */
    Code_Gen_Model_B.CurrentPriorityIndex = 1.0;

    /* End of SystemInitialize for SubSystem: '<S1>/Autonomous' */

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S424>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S16>/Spline Path Following Enabled' */
    /* Start for If: '<S196>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S196>/Robot_Index_Is_Valid' */
    /* Start for If: '<S199>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S199>/Circle_Check_Valid' */
    /* Start for If: '<S201>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S199>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S196>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S16>/Spline Path Following Enabled' */
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

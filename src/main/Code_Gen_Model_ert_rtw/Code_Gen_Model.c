/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.141
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar 14 21:01:51 2024
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
                                        *   '<S159>/Gain2'
                                        *   '<S160>/Gain2'
                                        *   '<S161>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S159>/Constant3'
                                        *   '<S160>/Constant3'
                                        *   '<S161>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S159>/Saturation1'
                                        *   '<S160>/Saturation1'
                                        *   '<S161>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S159>/Saturation1'
                                        *   '<S160>/Saturation1'
                                        *   '<S161>/Saturation1'
                                        */
real_T AA_Position_Back_Dec_RL = -2.5; /* Variable: AA_Position_Back_Dec_RL
                                        * Referenced by:
                                        *   '<S162>/Constant1'
                                        *   '<S163>/Constant1'
                                        */
real_T AA_Position_Back_Inc_RL = 2.5;  /* Variable: AA_Position_Back_Inc_RL
                                        * Referenced by:
                                        *   '<S162>/Constant3'
                                        *   '<S163>/Constant3'
                                        */
real_T AA_Position_Front_Dec_RL = -6.0;/* Variable: AA_Position_Front_Dec_RL
                                        * Referenced by: '<S165>/Constant1'
                                        */
real_T AA_Position_Front_Inc_RL = 6.0; /* Variable: AA_Position_Front_Inc_RL
                                        * Referenced by: '<S165>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S159>/Gain1'
                                        *   '<S160>/Gain1'
                                        *   '<S161>/Gain1'
                                        */
real_T AA_TC_LL = -0.6;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S159>/Constant1'
                                        *   '<S159>/Saturation2'
                                        *   '<S160>/Constant1'
                                        *   '<S160>/Saturation2'
                                        *   '<S161>/Constant1'
                                        *   '<S161>/Saturation2'
                                        */
real_T AA_TC_UL = 0.6;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S159>/Constant'
                                        *   '<S159>/Saturation2'
                                        *   '<S160>/Constant'
                                        *   '<S160>/Saturation2'
                                        *   '<S161>/Constant'
                                        *   '<S161>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = 0.0;     /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S393>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S393>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S393>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S393>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S393>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S393>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S6>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S6>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S393>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = -3.0;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S393>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S6>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S6>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.6667;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S393>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.3934;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S393>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.6667;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S393>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.8182;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S393>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 9.6962;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S393>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S393>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.8448;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S393>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S393>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 3.8793;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S393>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.8182;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S393>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 3.8793;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S393>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.3934;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S393>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S393>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.6802;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S393>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S393>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.6802;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S393>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S396>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = -0.0006;  /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S395>/Constant17'
                                        */
real_T Amp_Angle = -35.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 650.0;                /* Variable: Amp_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 1000.0;            /* Variable: Amp_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S158>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S158>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S158>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S158>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -4.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S164>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 4.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S164>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S158>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S158>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S158>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S417>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 4.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S413>/Constant'
                                        *   '<S413>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S417>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S413>/Constant1'
                                        */
real_T Climber_DutyCycle_Neg = -1.0;   /* Variable: Climber_DutyCycle_Neg
                                        * Referenced by: '<S4>/Constant3'
                                        */
real_T Climber_DutyCycle_Pos = 0.2;    /* Variable: Climber_DutyCycle_Pos
                                        * Referenced by: '<S4>/Constant2'
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
                                        * Referenced by: '<S341>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S257>/Constant3'
                                        *   '<S278>/Constant3'
                                        *   '<S299>/Constant3'
                                        *   '<S320>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S257>/Constant2'
                                   *   '<S278>/Constant2'
                                   *   '<S299>/Constant2'
                                   *   '<S320>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S257>/Saturation'
                                        *   '<S278>/Saturation'
                                        *   '<S299>/Saturation'
                                        *   '<S320>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S257>/Saturation'
                                        *   '<S278>/Saturation'
                                        *   '<S299>/Saturation'
                                        *   '<S320>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016667;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S257>/Gain'
                                            *   '<S278>/Gain'
                                            *   '<S299>/Gain'
                                            *   '<S320>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S257>/Gain2'
                                        *   '<S278>/Gain2'
                                        *   '<S299>/Gain2'
                                        *   '<S320>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S257>/Saturation1'
                                        *   '<S278>/Saturation1'
                                        *   '<S299>/Saturation1'
                                        *   '<S320>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S257>/Saturation1'
                                        *   '<S278>/Saturation1'
                                        *   '<S299>/Saturation1'
                                        *   '<S320>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S257>/Gain1'
                                        *   '<S278>/Gain1'
                                        *   '<S299>/Gain1'
                                        *   '<S320>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S262>/Constant'
                            *   '<S283>/Constant'
                            *   '<S304>/Constant'
                            *   '<S325>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S27>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S154>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S154>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S36>/Constant'
                                           *   '<S38>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S37>/Constant'
                                          *   '<S39>/Constant'
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
real_T Note_Detect_Dist_Intake = 200.0;/* Variable: Note_Detect_Dist_Intake
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
real_T Note_Time_Transfer = 0.0;       /* Variable: Note_Time_Transfer
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
                                        * Referenced by: '<S147>/Constant'
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
                                           *   '<S80>/Gain'
                                           *   '<S81>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S80>/Gain2'
                                         *   '<S81>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S80>/Saturation1'
                                          *   '<S81>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S80>/Saturation1'
                                         *   '<S81>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S80>/Gain1'
                                         *   '<S81>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 500.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                      */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S242>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S242>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S189>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S202>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S242>/Constant3'
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
                                          * Referenced by: '<S397>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S362>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S362>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S362>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S362>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S361>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S362>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S362>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S362>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S362>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -3.0;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S362>/Constant1'
                                   *   '<S362>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 3.0;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S362>/Constant'
                                   *   '<S362>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S352>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S352>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S352>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S352>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S352>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S352>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S260>/Constant3'
                                        *   '<S281>/Constant3'
                                        *   '<S302>/Constant3'
                                        *   '<S323>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S260>/Constant2'
                                *   '<S281>/Constant2'
                                *   '<S302>/Constant2'
                                *   '<S323>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S260>/Saturation'
                                           *   '<S281>/Saturation'
                                           *   '<S302>/Saturation'
                                           *   '<S323>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S260>/Saturation'
                                          *   '<S281>/Saturation'
                                          *   '<S302>/Saturation'
                                          *   '<S323>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S260>/Gain2'
                                         *   '<S281>/Gain2'
                                         *   '<S302>/Gain2'
                                         *   '<S323>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S260>/Saturation1'
                                             *   '<S281>/Saturation1'
                                             *   '<S302>/Saturation1'
                                             *   '<S323>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S260>/Saturation1'
                                            *   '<S281>/Saturation1'
                                            *   '<S302>/Saturation1'
                                            *   '<S323>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S260>/Gain1'
                                        *   '<S281>/Gain1'
                                        *   '<S302>/Gain1'
                                        *   '<S323>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S395>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S395>/Constant1'
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
real_T TEST_Speaker_Distance = 0.0;    /* Variable: TEST_Speaker_Distance
                                        * Referenced by: '<S6>/Constant4'
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
                        * Referenced by: '<S340>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S340>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S340>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S340>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -1.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S340>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 1.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S340>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S396>/Gain'
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
  real_T Rot_Mat_idx_2;
  real_T Top_Front_Pivot_y;
  real_T UnitDelay;
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_e3;
  real_T rtb_Add_f1;
  real_T rtb_Add_g4;
  real_T rtb_Add_ik;
  real_T rtb_Add_kv;
  real_T rtb_Add_l;
  real_T rtb_Add_lw;
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
  real_T y;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T s214_iter;
  uint32_T entryPortIndex;
  uint16_T s239_iter;
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
   *  Constant: '<S54>/Constant'
   *  Constant: '<S55>/Constant'
   *  Constant: '<S60>/Constant'
   *  Constant: '<S61>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  Logic: '<S8>/OR4'
   *  Logic: '<S8>/OR6'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S61>/Compare'
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

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
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

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S46>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
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
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
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
   *  Constant: '<S40>/Constant'
   *  Constant: '<S42>/Constant'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  UnitDelay: '<S14>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S8>/Switch4' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Logic: '<S8>/OR'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S67>/FixPt Relational Operator'
   *  Switch: '<S8>/Switch5'
   *  Switch: '<S8>/Switch6'
   *  Switch: '<S8>/Switch7'
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
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

  /* Reshape: '<S84>/Reshapey' incorporates:
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

  /* Delay: '<S84>/MemoryX' incorporates:
   *  Constant: '<S84>/X0'
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

  /* Outputs for Enabled SubSystem: '<S111>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S137>/Add1' incorporates:
     *  Constant: '<S84>/C'
     *  Delay: '<S84>/MemoryX'
     *  Product: '<S137>/Product'
     */
    UnitDelay = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1])
      + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_nj = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S137>/Product2' incorporates:
     *  Constant: '<S85>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * UnitDelay) +
      (5.9896845167210271E-17 * rtb_Switch1_nj);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * UnitDelay) +
      (0.095124921972503981 * rtb_Switch1_nj);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S137>/Product2' incorporates:
     *  Outport: '<S137>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S111>/Enabled Subsystem' */

  /* Sum: '<S111>/Add' incorporates:
   *  Delay: '<S84>/MemoryX'
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

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant4'
   *  Inport: '<Root>/AT_Tag_4_Found'
   *  Inport: '<Root>/AT_Tag_7_Found'
   *  Switch: '<S6>/Switch'
   *  Switch: '<S6>/Switch1'
   */
  if (TEST_Speaker_Distance != 0.0) {
    /* Switch: '<S6>/Switch2' */
    Code_Gen_Model_B.Distance_Speaker = TEST_Speaker_Distance;
  } else if (Code_Gen_Model_U.AT_Tag_4_Found != 0.0) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant9'
     *  Math: '<S6>/Hypot'
     *  Sum: '<S6>/Subtract'
     *  Sum: '<S6>/Subtract1'
     *  Switch: '<S6>/Switch2'
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
     *  Switch: '<S6>/Switch2'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_B.KF_Position_X - AT_Tag_7_Coordinate_X,
       Code_Gen_Model_B.KF_Position_Y - AT_Tag_7_Coordinate_Y);
  } else {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     */
    Code_Gen_Model_B.Distance_Speaker = 0.0;
  }

  /* End of Switch: '<S6>/Switch2' */

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
    /* Lookup_n-D: '<S393>/1-D Lookup Table' incorporates:
     *  Switch: '<S6>/Switch2'
     */
    UnitDelay = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data_g,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 8U);

    /* Logic: '<S393>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S393>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S393>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S393>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S393>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S393>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S393>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S393>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S393>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S393>/Logical Operator'
     *  Logic: '<S393>/Logical Operator1'
     *  Switch: '<S393>/Switch10'
     *  Switch: '<S393>/Switch11'
     *  Switch: '<S393>/Switch3'
     *  Switch: '<S393>/Switch4'
     *  Switch: '<S393>/Switch5'
     *  Switch: '<S393>/Switch6'
     *  Switch: '<S393>/Switch7'
     *  Switch: '<S393>/Switch8'
     *  Switch: '<S393>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S393>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S393>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = UnitDelay + Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S393>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S393>/Add8'
       *  Switch: '<S393>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = UnitDelay + Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S393>/Switch4' incorporates:
       *  Constant: '<S393>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S393>/Add7'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S393>/Switch5' incorporates:
       *  Constant: '<S393>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S393>/Add6'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S393>/Switch6' incorporates:
       *  Constant: '<S393>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S393>/Add5'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S393>/Switch7' incorporates:
       *  Constant: '<S393>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S393>/Add4'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S393>/Switch8' incorporates:
       *  Constant: '<S393>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S393>/Add3'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch6'
       *  Switch: '<S393>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S393>/Switch9' incorporates:
       *  Constant: '<S393>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S393>/Add2'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch6'
       *  Switch: '<S393>/Switch7'
       *  Switch: '<S393>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S393>/Switch10' incorporates:
       *  Constant: '<S393>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S393>/Add1'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch6'
       *  Switch: '<S393>/Switch7'
       *  Switch: '<S393>/Switch8'
       *  Switch: '<S393>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S393>/Switch11' incorporates:
       *  Constant: '<S393>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S393>/Add'
       *  Switch: '<S393>/Switch10'
       *  Switch: '<S393>/Switch2'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch6'
       *  Switch: '<S393>/Switch7'
       *  Switch: '<S393>/Switch8'
       *  Switch: '<S393>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S393>/Switch2' incorporates:
       *  Constant: '<S393>/Constant'
       *  Switch: '<S393>/Switch10'
       *  Switch: '<S393>/Switch11'
       *  Switch: '<S393>/Switch3'
       *  Switch: '<S393>/Switch4'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch6'
       *  Switch: '<S393>/Switch7'
       *  Switch: '<S393>/Switch8'
       *  Switch: '<S393>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S393>/Switch2' */

    /* Switch: '<S397>/Switch' incorporates:
     *  Constant: '<S397>/Constant'
     *  Constant: '<S397>/Constant1'
     *  Constant: '<S397>/Constant2'
     *  Math: '<S397>/Hypot'
     *  RelationalOperator: '<S397>/GreaterThan'
     *  Switch: '<S397>/Switch1'
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

    /* End of Switch: '<S397>/Switch' */

    /* Logic: '<S395>/AND' incorporates:
     *  Constant: '<S398>/Constant'
     *  Constant: '<S399>/Constant'
     *  Logic: '<S405>/AND'
     *  RelationalOperator: '<S398>/Compare'
     *  RelationalOperator: '<S399>/Compare'
     */
    UnitDelay_e = ((rtb_UnitDelay1_gi == 0.0) && (UnitDelay == 0.0));

    /* Logic: '<S395>/AND2' incorporates:
     *  RelationalOperator: '<S400>/FixPt Relational Operator'
     *  RelationalOperator: '<S401>/FixPt Relational Operator'
     *  RelationalOperator: '<S402>/FixPt Relational Operator'
     *  RelationalOperator: '<S403>/FixPt Relational Operator'
     *  UnitDelay: '<S400>/Delay Input1'
     *  UnitDelay: '<S401>/Delay Input1'
     *  UnitDelay: '<S402>/Delay Input1'
     *  UnitDelay: '<S403>/Delay Input1'
     *
     * Block description for '<S400>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S401>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S402>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S403>/Delay Input1':
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

    /* Switch: '<S395>/Switch1' incorporates:
     *  Constant: '<S395>/Constant1'
     *  Constant: '<S395>/Constant17'
     *  Constant: '<S395>/Constant2'
     *  Logic: '<S395>/AND'
     *  Logic: '<S395>/AND4'
     *  Logic: '<S395>/NOT1'
     *  Product: '<S395>/Product1'
     *  Product: '<S395>/Product2'
     *  Sum: '<S395>/Add'
     *  Sum: '<S395>/Sum'
     *  UnitDelay: '<S395>/Unit Delay'
     */
    if (UnitDelay_e && (!rtb_AND2_k)) {
      rtb_Switch1_nj = ((Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain)
                        + (Code_Gen_Model_B.AT_Error_Yaw * AT_Yaw_Control_Gain))
        + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* Switch: '<S405>/Switch1' incorporates:
     *  Switch: '<S405>/Switch2'
     *  UnitDelay: '<S405>/Unit Delay'
     *  UnitDelay: '<S405>/Unit Delay1'
     */
    if (UnitDelay_e) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = UnitDelay;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Logic: '<S395>/AND1' incorporates:
     *  Logic: '<S395>/AND'
     *  Logic: '<S395>/AND3'
     *  UnitDelay: '<S395>/Unit Delay2'
     */
    UnitDelay_e = (UnitDelay_e && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S395>/Switch4' incorporates:
     *  Constant: '<S395>/Constant5'
     *  Switch: '<S395>/Switch5'
     *  Switch: '<S395>/Switch6'
     *  Switch: '<S395>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S395>/Switch5' incorporates:
       *  Constant: '<S395>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S395>/Switch6' incorporates:
       *  Constant: '<S395>/Constant7'
       *  Switch: '<S395>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S395>/Switch7' incorporates:
       *  Constant: '<S395>/Constant8'
       *  Switch: '<S395>/Switch5'
       *  Switch: '<S395>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S395>/Switch6' incorporates:
       *  Switch: '<S395>/Switch5'
       *  UnitDelay: '<S395>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S395>/Switch4' */

    /* Switch: '<S395>/Switch3' incorporates:
     *  Logic: '<S395>/NOT'
     *  Trigonometry: '<S395>/Atan2'
     */
    if (!UnitDelay_e) {
      rtb_thetay = rt_atan2d_snf(rtb_Switch1_m5, rtb_Switch2);
    } else {
      rtb_thetay = rtb_Switch4_g;
    }

    /* Merge: '<S12>/Merge1' incorporates:
     *  Sum: '<S395>/Sum1'
     *  Switch: '<S395>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_thetay + rtb_Switch1_nj;

    /* RelationalOperator: '<S408>/Compare' incorporates:
     *  Constant: '<S408>/Constant'
     */
    rtb_AND2_k = (rtb_Switch2 < 0.0);

    /* Switch: '<S404>/Switch' incorporates:
     *  Constant: '<S404>/Constant'
     *  Constant: '<S404>/Constant1'
     *  Constant: '<S406>/Constant'
     *  Constant: '<S407>/Constant'
     *  Logic: '<S404>/Logical Operator'
     *  RelationalOperator: '<S406>/Compare'
     *  RelationalOperator: '<S407>/Compare'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_AND2_k) {
      rtb_thetay = 6.2831853071795862;
    } else {
      rtb_thetay = 0.0;
    }

    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S404>/Constant2'
     *  Constant: '<S404>/Constant3'
     *  Constant: '<S409>/Constant'
     *  Constant: '<S410>/Constant'
     *  Logic: '<S404>/Logical Operator1'
     *  RelationalOperator: '<S409>/Compare'
     *  RelationalOperator: '<S410>/Compare'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_AND2_k) {
      rtb_Add_f1 = -6.2831853071795862;
    } else {
      rtb_Add_f1 = 0.0;
    }

    /* Sum: '<S404>/Sum1' incorporates:
     *  Switch: '<S404>/Switch'
     *  Switch: '<S404>/Switch1'
     *  UnitDelay: '<S404>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_thetay + rtb_Add_f1) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S393>/Switch23' incorporates:
     *  Logic: '<S393>/AND10'
     *  Logic: '<S393>/AND11'
     *  Logic: '<S393>/AND12'
     *  Logic: '<S393>/AND13'
     *  Logic: '<S393>/AND14'
     *  Logic: '<S393>/AND15'
     *  Logic: '<S393>/AND2'
     *  Logic: '<S393>/AND3'
     *  Switch: '<S393>/Switch1'
     *  Switch: '<S393>/Switch12'
     *  Switch: '<S393>/Switch13'
     *  Switch: '<S393>/Switch14'
     *  Switch: '<S393>/Switch15'
     *  Switch: '<S393>/Switch16'
     *  Switch: '<S393>/Switch17'
     *  Switch: '<S393>/Switch19'
     *  Switch: '<S393>/Switch20'
     *  Switch: '<S393>/Switch21'
     *  Switch: '<S393>/Switch22'
     *  Switch: '<S393>/Switch24'
     *  Switch: '<S393>/Switch25'
     *  Switch: '<S393>/Switch26'
     */
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S393>/Switch23' incorporates:
       *  Constant: '<S393>/Constant28'
       *  Sum: '<S393>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch15' incorporates:
       *  Constant: '<S393>/Constant9'
       *  Sum: '<S393>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S393>/Switch23' incorporates:
       *  Constant: '<S393>/Constant27'
       *  Sum: '<S393>/Add22'
       *  Switch: '<S393>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch15' incorporates:
       *  Constant: '<S393>/Constant5'
       *  Sum: '<S393>/Add16'
       *  Switch: '<S393>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S393>/Switch23' incorporates:
       *  Constant: '<S393>/Constant26'
       *  Sum: '<S393>/Add12'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch15' incorporates:
       *  Constant: '<S393>/Constant4'
       *  Sum: '<S393>/Add10'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S393>/Switch23' incorporates:
       *  Constant: '<S393>/Constant3'
       *  Sum: '<S393>/Add13'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch20'
       *  Switch: '<S393>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch15' incorporates:
       *  Constant: '<S393>/Constant17'
       *  Sum: '<S393>/Add11'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch12'
       *  Switch: '<S393>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S393>/Switch23' incorporates:
       *  Constant: '<S393>/Constant21'
       *  Sum: '<S393>/Add20'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch20'
       *  Switch: '<S393>/Switch21'
       *  Switch: '<S393>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch15' incorporates:
       *  Constant: '<S393>/Constant18'
       *  Sum: '<S393>/Add14'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch12'
       *  Switch: '<S393>/Switch13'
       *  Switch: '<S393>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S393>/Switch22' incorporates:
       *  Constant: '<S393>/Constant23'
       *  Sum: '<S393>/Add21'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch20'
       *  Switch: '<S393>/Switch21'
       *  Switch: '<S393>/Switch23'
       *  Switch: '<S393>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch14' incorporates:
       *  Constant: '<S393>/Constant19'
       *  Sum: '<S393>/Add15'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch12'
       *  Switch: '<S393>/Switch13'
       *  Switch: '<S393>/Switch15'
       *  Switch: '<S393>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S393>/Switch25' incorporates:
       *  Constant: '<S393>/Constant24'
       *  Sum: '<S393>/Add24'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch20'
       *  Switch: '<S393>/Switch21'
       *  Switch: '<S393>/Switch22'
       *  Switch: '<S393>/Switch23'
       *  Switch: '<S393>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch17' incorporates:
       *  Constant: '<S393>/Constant20'
       *  Sum: '<S393>/Add18'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch12'
       *  Switch: '<S393>/Switch13'
       *  Switch: '<S393>/Switch14'
       *  Switch: '<S393>/Switch15'
       *  Switch: '<S393>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S393>/Switch26' incorporates:
       *  Constant: '<S393>/Constant25'
       *  Sum: '<S393>/Add25'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch20'
       *  Switch: '<S393>/Switch21'
       *  Switch: '<S393>/Switch22'
       *  Switch: '<S393>/Switch23'
       *  Switch: '<S393>/Switch24'
       *  Switch: '<S393>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S393>/Switch18' incorporates:
       *  Constant: '<S393>/Constant22'
       *  Sum: '<S393>/Add19'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch12'
       *  Switch: '<S393>/Switch13'
       *  Switch: '<S393>/Switch14'
       *  Switch: '<S393>/Switch15'
       *  Switch: '<S393>/Switch16'
       *  Switch: '<S393>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;
    } else {
      /* Switch: '<S393>/Switch23' incorporates:
       *  Constant: '<S393>/Constant2'
       *  Switch: '<S393>/Switch19'
       *  Switch: '<S393>/Switch20'
       *  Switch: '<S393>/Switch21'
       *  Switch: '<S393>/Switch22'
       *  Switch: '<S393>/Switch24'
       *  Switch: '<S393>/Switch25'
       *  Switch: '<S393>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;

      /* Switch: '<S393>/Switch15' incorporates:
       *  Constant: '<S393>/Constant1'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch12'
       *  Switch: '<S393>/Switch13'
       *  Switch: '<S393>/Switch14'
       *  Switch: '<S393>/Switch16'
       *  Switch: '<S393>/Switch17'
       *  Switch: '<S393>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;
    }

    /* End of Switch: '<S393>/Switch23' */

    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S421>/Constant'
     *  Constant: '<S422>/Constant'
     *  Logic: '<S416>/AND'
     *  RelationalOperator: '<S421>/Compare'
     *  RelationalOperator: '<S422>/Compare'
     *  Switch: '<S416>/Switch2'
     *  UnitDelay: '<S416>/Unit Delay'
     *  UnitDelay: '<S416>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S416>/Switch1' */

    /* Lookup_n-D: '<S396>/Modulation_Drv' incorporates:
     *  Math: '<S396>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S414>/Compare' incorporates:
     *  Constant: '<S414>/Constant'
     */
    rtb_AT_Tag_11_Active = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S396>/Logical Operator' incorporates:
     *  Constant: '<S415>/Constant'
     *  RelationalOperator: '<S415>/Compare'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_AT_Tag_11_Active);

    /* Switch: '<S396>/Switch1' incorporates:
     *  Switch: '<S396>/Switch4'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S396>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S396>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S396>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S396>/Switch5' */
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S396>/Switch6' incorporates:
       *  Constant: '<S396>/Constant'
       *  Constant: '<S396>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S396>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        rtb_thetay = 3.1415926535897931;
      } else {
        rtb_thetay = 0.0;
      }

      /* Merge: '<S12>/Merge3' incorporates:
       *  Sum: '<S396>/Add1'
       *  Switch: '<S396>/Switch4'
       *  Switch: '<S396>/Switch6'
       *  Trigonometry: '<S396>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + rtb_thetay;
    } else {
      /* Merge: '<S12>/Merge3' incorporates:
       *  Switch: '<S396>/Switch4'
       *  Trigonometry: '<S396>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p,
        rtb_Switch2_o);
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S396>/Switch3'
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

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S413>/Constant'
     *  Constant: '<S413>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_High_Speed;
    } else {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S413>/Switch1' */

    /* Switch: '<S420>/Init' incorporates:
     *  UnitDelay: '<S420>/FixPt Unit Delay1'
     *  UnitDelay: '<S420>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      UnitDelay = rtb_Steer_Joystick_X_Rel_Mod;
    } else {
      UnitDelay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S420>/Init' */

    /* Sum: '<S418>/Sum1' */
    rtb_Steer_Joystick_X_Rel_Mod -= UnitDelay;

    /* Switch: '<S419>/Switch2' incorporates:
     *  Constant: '<S417>/Constant1'
     *  Constant: '<S417>/Constant3'
     *  RelationalOperator: '<S419>/LowerRelop1'
     *  RelationalOperator: '<S419>/UpperRelop'
     *  Switch: '<S419>/Switch'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod > Boost_Trigger_Increasing_Limit) {
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Steer_Joystick_X_Rel_Mod < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S419>/Switch' incorporates:
       *  Constant: '<S417>/Constant1'
       */
      rtb_Steer_Joystick_X_Rel_Mod = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S419>/Switch2' */

    /* Sum: '<S418>/Sum' */
    rtb_Steer_Joystick_X_Rel_Mod += UnitDelay;

    /* Switch: '<S396>/Switch' incorporates:
     *  Switch: '<S396>/Switch2'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S396>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_AT_Tag_11_Active) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S396>/Gain2'
       *  Math: '<S396>/Magnitude1'
       *  Switch: '<S396>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S413>/Product' incorporates:
       *  Switch: '<S396>/Switch2'
       */
      sin_alpha = rtb_Modulation_Drv * rtb_Steer_Joystick_X_Rel_Mod;

      /* Saturate: '<S413>/Saturation' incorporates:
       *  Switch: '<S396>/Switch2'
       */
      if (sin_alpha > Boost_Trigger_High_Speed) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (sin_alpha < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = sin_alpha;
      }

      /* End of Saturate: '<S413>/Saturation' */
    }

    /* End of Switch: '<S396>/Switch' */

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
     *  Constant: '<S395>/Constant'
     *  Lookup_n-D: '<S395>/Modulation_Str_Y_Rel'
     *  Product: '<S395>/Product'
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

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S400>/Delay Input1'
     *
     * Block description for '<S400>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S401>/Delay Input1'
     *
     * Block description for '<S401>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S402>/Delay Input1'
     *
     * Block description for '<S402>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S403>/Delay Input1'
     *
     * Block description for '<S403>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S405>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S395>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = UnitDelay_e;

    /* Update for UnitDelay: '<S395>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S404>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S416>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p;

    /* Update for UnitDelay: '<S416>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S420>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S420>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S420>/FixPt Unit Delay1' */
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
   *  Constant: '<S239>/Constant'
   *  Logic: '<S239>/AND'
   *  MATLAB Function: '<S189>/Find closest index to curve'
   *  Product: '<S239>/Product'
   *  RelationalOperator: '<S239>/Relational Operator'
   *  RelationalOperator: '<S239>/Relational Operator1'
   *  Selector: '<S239>/Selector'
   *  Selector: '<S239>/Selector1'
   *  Selector: '<S240>/Selector'
   *  Sum: '<S239>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S192>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S195>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S197>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S192>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S16>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S187>/Action Port'
       */
      /* InitializeConditions for If: '<S16>/If' incorporates:
       *  UnitDelay: '<S187>/Unit Delay'
       *  UnitDelay: '<S188>/Unit Delay'
       *  UnitDelay: '<S190>/Unit Delay'
       *  UnitDelay: '<S190>/Unit Delay1'
       *  UnitDelay: '<S240>/Unit Delay'
       *  UnitDelay: '<S240>/Unit Delay1'
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
     *  ActionPort: '<S187>/Action Port'
     */
    /* Lookup_n-D: '<S187>/Capture Radius' incorporates:
     *  UnitDelay: '<S187>/Unit Delay'
     */
    rtb_Switch1_nj = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S188>/Matrix Concatenate2' */
    rtb_Akxhatkk1[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S188>/Matrix Concatenate2' */
    rtb_Akxhatkk1[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S192>/If' incorporates:
     *  RelationalOperator: '<S192>/ '
     *  UnitDelay: '<S188>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <= 6.0));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S195>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S197>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S192>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S195>/Action Port'
       */
      /* InitializeConditions for If: '<S192>/If' incorporates:
       *  UnitDelay: '<S195>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S192>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S192>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S195>/Action Port'
       */
      /* Sum: '<S195>/Minus' incorporates:
       *  Concatenate: '<S188>/Matrix Concatenate2'
       */
      rtb_Minus_n[0] = rtb_Akxhatkk1[0];
      rtb_Minus_n[1] = rtb_Akxhatkk1[1];

      /* Math: '<S195>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S195>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
        6.0);

      /* Switch: '<S195>/Switch' incorporates:
       *  Logic: '<S195>/AND'
       *  Logic: '<S195>/OR'
       *  RelationalOperator: '<S195>/Relational Operator'
       *  UnitDelay: '<S195>/Unit Delay'
       */
      UnitDelay_e = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Switch1_m5
        <= rtb_Switch1_nj) && rtb_Is_Absolute_Translation_g));

      /* If: '<S195>/If' */
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
        /* Disable for If: '<S197>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S195>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S197>/Action Port'
         */
        /* If: '<S197>/If' incorporates:
         *  RelationalOperator: '<S197>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh == 6.0));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S197>/Is_Last_Point' incorporates:
           *  ActionPort: '<S200>/Action Port'
           */
          /* InitializeConditions for If: '<S197>/If' incorporates:
           *  UnitDelay: '<S200>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S197>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S197>/Is_Last_Point' incorporates:
           *  ActionPort: '<S200>/Action Port'
           */
          /* Switch: '<S200>/Switch' incorporates:
           *  Constant: '<S202>/Constant'
           *  Logic: '<S200>/OR'
           *  RelationalOperator: '<S202>/Compare'
           *  UnitDelay: '<S200>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S200>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S200>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S203>/Action Port'
             */
            /* Merge: '<S192>/Merge2' incorporates:
             *  Constant: '<S203>/Constant'
             *  SignalConversion generated from: '<S203>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S203>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S203>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S200>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S200>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S204>/Action Port'
             */
            /* Merge: '<S192>/Merge2' incorporates:
             *  Constant: '<S204>/Constant'
             *  SignalConversion generated from: '<S204>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S204>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S204>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S200>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S200>/If' */

          /* Merge: '<S192>/Merge4' incorporates:
           *  SignalConversion: '<S200>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S200>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S197>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S197>/Increment_Search' incorporates:
           *  ActionPort: '<S199>/Action Port'
           */
          /* Merge: '<S192>/Merge2' incorporates:
           *  Constant: '<S199>/Constant'
           *  SignalConversion generated from: '<S199>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S199>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S199>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S192>/Merge4' incorporates:
           *  Constant: '<S201>/FixPt Constant'
           *  SignalConversion: '<S199>/Signal Copy'
           *  Sum: '<S201>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S197>/Increment_Search' */
        }

        /* End of If: '<S197>/If' */
        /* End of Outputs for SubSystem: '<S195>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S195>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S198>/Action Port'
         */
        /* RelationalOperator: '<S207>/Compare' */
        rtb_Is_Absolute_Translation_g = false;

        /* RelationalOperator: '<S206>/LessThanOrEqual' */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S192>/Merge4' incorporates:
         *  Sum: '<S198>/Add'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S195>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S195>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S196>/Action Port'
         */
        /* Merge: '<S192>/Merge2' incorporates:
         *  Constant: '<S196>/Constant2'
         *  SignalConversion generated from: '<S196>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S196>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S196>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S192>/Merge4' incorporates:
         *  SignalConversion generated from: '<S196>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S195>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* End of If: '<S195>/If' */

      /* Merge: '<S192>/Merge1' incorporates:
       *  Constant: '<S195>/Constant'
       *  SignalConversion generated from: '<S195>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S195>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay_e;

      /* End of Outputs for SubSystem: '<S192>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S192>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* Merge: '<S192>/Merge1' incorporates:
       *  Constant: '<S194>/Constant'
       *  SignalConversion generated from: '<S194>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S192>/Merge2' incorporates:
       *  Constant: '<S194>/Constant1'
       *  SignalConversion generated from: '<S194>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S194>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S194>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S192>/Merge4' incorporates:
       *  SignalConversion generated from: '<S194>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S192>/Escape_Auto_Driving' */
    }

    /* End of If: '<S192>/If' */

    /* If: '<S188>/If1' incorporates:
     *  Assignment: '<S218>/Assignment'
     *  Bias: '<S223>/Bias'
     *  Concatenate: '<S218>/Matrix Concatenate'
     */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S188>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S193>/Action Port'
       */
      /* Bias: '<S209>/Add Constant' incorporates:
       *  Bias: '<S209>/Bias'
       *  Sum: '<S209>/Subtract'
       */
      rtb_Switch1_m5 = ((6.0 - Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S209>/Selector4' incorporates:
       *  Constant: '<S211>/FixPt Constant'
       *  Sum: '<S211>/FixPt Sum1'
       */
      rtb_Akxhatkk1[0] = Code_Gen_Model_B.Spline_Index - 1.0;

      /* Selector: '<S209>/Selector4' */
      Code_Gen_Model_DW.Selector4_DIMS1[0] = 9 - ((int32_T)rtb_Akxhatkk1[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Outputs for Iterator SubSystem: '<S210>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S214>/While Iterator'
       */
      s214_iter = 1;

      /* Outputs for Iterator SubSystem: '<S216>/Sample_Curve' incorporates:
       *  ForIterator: '<S218>/For Iterator'
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
        if (s214_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s214_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_UnitDelay1_gi = rtb_Switch1_m5 - ((real_T)s214_iter);
        rtb_Num_Segments = s214_iter;
        s214_iter++;
      } while ((rtb_UnitDelay1_gi >= 4.0) && (s214_iter <= 3));

      /* End of Outputs for SubSystem: '<S216>/Sample_Curve' */
      /* End of Outputs for SubSystem: '<S210>/Sampling_Loop' */

      /* SignalConversion generated from: '<S193>/Position_and_Curvature' incorporates:
       *  Assignment: '<S214>/Assignment'
       *  Assignment: '<S218>/Assignment'
       *  Bias: '<S223>/Bias'
       *  Concatenate: '<S218>/Matrix Concatenate'
       *  Merge: '<S188>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S188>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S188>/If Action Subsystem' incorporates:
       *  ActionPort: '<S191>/Action Port'
       */
      /* Assignment: '<S191>/Assignment' incorporates:
       *  Merge: '<S188>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = 0.0;
        rtb_Position_and_Curvature[i + 50] = 0.0;
      }

      /* End of Assignment: '<S191>/Assignment' */

      /* SignalConversion generated from: '<S191>/Num_Segments' incorporates:
       *  Constant: '<S191>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S188>/If Action Subsystem' */
    }

    /* End of If: '<S188>/If1' */

    /* Concatenate: '<S189>/Matrix Concatenate' incorporates:
     *  Merge: '<S188>/Merge'
     *  Selector: '<S189>/Selector'
     *  Selector: '<S189>/Selector1'
     *  Selector: '<S189>/Selector3'
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

    /* End of Concatenate: '<S189>/Matrix Concatenate' */

    /* MATLAB Function: '<S189>/Distance Along Curve' incorporates:
     *  Concatenate: '<S189>/Matrix Concatenate'
     *  Selector: '<S189>/Selector4'
     *  Selector: '<S189>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s214_iter = 0; s214_iter < 149; s214_iter++) {
      /* Outputs for Iterator SubSystem: '<S210>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S214>/While Iterator'
       */
      rtb_Assignment_d[s214_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_c[s214_iter + 1] -
         rtb_MatrixConcatenate_c[s214_iter], rtb_MatrixConcatenate_c[s214_iter +
         151] - rtb_MatrixConcatenate_c[s214_iter + 150]) +
        rtb_Assignment_d[s214_iter];

      /* End of Outputs for SubSystem: '<S210>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S189>/Distance Along Curve' */

    /* MATLAB Function: '<S189>/Find closest index to curve' incorporates:
     *  Concatenate: '<S189>/Matrix Concatenate'
     *  Selector: '<S189>/Selector4'
     *  Selector: '<S189>/Selector5'
     *  Selector: '<S240>/Selector'
     */
    for (s214_iter = 0; s214_iter < 150; s214_iter++) {
      /* Outputs for Iterator SubSystem: '<S210>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S214>/While Iterator'
       */
      distance_from_robot[s214_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_c[s214_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_c[s214_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S210>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s214_iter = 1;
    } else {
      s214_iter = 0;
      i = 2;
      exitg1 = false;
      while ((!exitg1) && (i < 151)) {
        if (!rtIsNaN(distance_from_robot[i - 1])) {
          s214_iter = i;
          exitg1 = true;
        } else {
          i++;
        }
      }
    }

    if (s214_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s214_iter - 1];
      for (i = s214_iter + 1; i < 151; i++) {
        rtb_Switch2 = distance_from_robot[i - 1];
        if (rtb_Switch1_m5 > rtb_Switch2) {
          rtb_Switch1_m5 = rtb_Switch2;
        }
      }
    }

    s214_iter = 1;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 150)) {
      s214_iter = i + 1;
      if (distance_from_robot[i] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        i++;
      }
    }

    /* Selector: '<S240>/Selector' incorporates:
     *  Constant: '<S240>/Constant'
     *  MATLAB Function: '<S189>/Find closest index to curve'
     *  MinMax: '<S240>/Min'
     */
    rtb_UnitDelay1_gi = rtb_Assignment_d[((int32_T)fmin(50.0, s214_iter)) - 1];

    /* If: '<S240>/If' incorporates:
     *  RelationalOperator: '<S240>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S240>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S243>/Action Port'
       */
      /* SignalConversion generated from: '<S243>/Lookup Table Dynamic' */
      rtb_Akxhatkk1[0] = rtb_Assignment_d[0];
      rtb_Akxhatkk1[1] = rtb_Assignment_d[49];

      /* Sum: '<S245>/FixPt Sum1' incorporates:
       *  Constant: '<S245>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S243>/Lookup Table Dynamic' incorporates:
       *  Selector: '<S243>/Selector11'
       *  Selector: '<S243>/Selector12'
       */
      rtb_Minus_n[0] = 0.0;
      rtb_Minus_n[1] = 0.0;

      /* SignalConversion generated from: '<S243>/Lookup Table Dynamic1' incorporates:
       *  Selector: '<S243>/Selector1'
       *  Selector: '<S243>/Selector2'
       */
      rtb_Add2_f[0] = 0.0;
      rtb_Add2_f[1] = 0.0;

      /* S-Function (sfix_look1_dyn): '<S243>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S243>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0],
                           rtb_UnitDelay1_gi, &rtb_Akxhatkk1[0], 1U);

      /* SignalConversion: '<S243>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S243>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S243>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_UnitDelay1_gi,
                           &rtb_Akxhatkk1[0], 1U);

      /* End of Outputs for SubSystem: '<S240>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S240>/Latch' incorporates:
       *  ActionPort: '<S244>/Action Port'
       */
      /* SignalConversion generated from: '<S244>/In1' incorporates:
       *  UnitDelay: '<S240>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S244>/In2' incorporates:
       *  UnitDelay: '<S240>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S240>/Latch' */
    }

    /* End of If: '<S240>/If' */

    /* MinMax: '<S187>/Min' incorporates:
     *  Lookup_n-D: '<S187>/Lookahead Distance'
     *  UnitDelay: '<S187>/Unit Delay'
     */
    rtb_Switch1_nj = fmin(rtb_Switch1_nj, look1_binlcpw
                          (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S189>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S239>/While Iterator'
     */
    s239_iter = 1U;
    UnitDelay_e = true;
    while (UnitDelay_e && (s239_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S189>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S239>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s239_iter;
      UnitDelay_e = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                      (rtb_Assignment_d[s214_iter - 1] + rtb_Switch1_nj)) &&
                     (Code_Gen_Model_B.WhileIterator < (((real_T)
        rtb_Num_Segments) * 50.0)));
      s239_iter++;
    }

    /* End of Outputs for SubSystem: '<S189>/Find first index that meets distance target' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Concatenate: '<S189>/Matrix Concatenate'
     *  Constant: '<S189>/Constant'
     *  Constant: '<S239>/Constant'
     *  Constant: '<S242>/Constant1'
     *  Constant: '<S242>/Constant2'
     *  Constant: '<S242>/Constant3'
     *  Logic: '<S239>/AND'
     *  MATLAB Function: '<S189>/Find closest index to curve'
     *  Math: '<S242>/Hypot'
     *  MinMax: '<S242>/Min'
     *  MinMax: '<S242>/Min1'
     *  Product: '<S239>/Product'
     *  Product: '<S242>/Divide'
     *  Product: '<S242>/Product'
     *  Product: '<S242>/Product1'
     *  RelationalOperator: '<S189>/Relational Operator'
     *  RelationalOperator: '<S239>/Relational Operator'
     *  RelationalOperator: '<S239>/Relational Operator1'
     *  Selector: '<S189>/Selector10'
     *  Selector: '<S189>/Selector7'
     *  Selector: '<S189>/Selector8'
     *  Selector: '<S189>/Selector9'
     *  Selector: '<S239>/Selector'
     *  Selector: '<S239>/Selector1'
     *  Selector: '<S240>/Selector'
     *  Sqrt: '<S242>/Sqrt'
     *  Sum: '<S189>/Subtract'
     *  Sum: '<S239>/Add'
     *  Sum: '<S242>/Subtract'
     *  Sum: '<S242>/Subtract1'
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

    /* End of Switch: '<S242>/Switch' */

    /* Logic: '<S190>/OR' */
    rtb_Is_Absolute_Steering = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S190>/Switch1' incorporates:
     *  Switch: '<S190>/Switch'
     *  UnitDelay: '<S190>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S16>/Merge2' incorporates:
       *  Constant: '<S190>/Constant3'
       *  SignalConversion: '<S190>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S16>/Merge2' incorporates:
       *  SignalConversion: '<S190>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Switch1_nj;
      rtb_UnitDelay1_gi = rtb_Merge1;
    }

    /* End of Switch: '<S190>/Switch1' */

    /* Merge: '<S16>/Merge' incorporates:
     *  SignalConversion: '<S190>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_UnitDelay1_gi;

    /* Selector: '<S189>/Selector6' incorporates:
     *  Concatenate: '<S189>/Matrix Concatenate'
     *  Selector: '<S189>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S189>/Selector2' incorporates:
     *  Concatenate: '<S189>/Matrix Concatenate'
     *  Selector: '<S189>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_c[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S190>/Switch2' incorporates:
     *  Sum: '<S246>/Subtract'
     *  Sum: '<S246>/Subtract1'
     *  Trigonometry: '<S246>/Atan2'
     *  UnitDelay: '<S190>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S190>/Switch2' */

    /* Merge: '<S16>/Merge3' incorporates:
     *  SignalConversion: '<S190>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S16>/Merge7' incorporates:
     *  SignalConversion: '<S187>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S190>/Constant2'
     *  SignalConversion generated from: '<S187>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
     *  Constant: '<S190>/Constant5'
     *  SignalConversion generated from: '<S187>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S16>/Merge5' incorporates:
     *  Constant: '<S190>/Constant6'
     *  SignalConversion generated from: '<S187>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S16>/Merge6' incorporates:
     *  Constant: '<S190>/Constant1'
     *  SignalConversion generated from: '<S187>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S188>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S187>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S240>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S240>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S190>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S16>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S16>/Pass Through' incorporates:
     *  ActionPort: '<S186>/Action Port'
     */
    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S186>/Constant'
     *  SignalConversion generated from: '<S186>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S16>/Merge' incorporates:
     *  SignalConversion generated from: '<S186>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S16>/Merge1' incorporates:
     *  SignalConversion generated from: '<S186>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S16>/Merge2' incorporates:
     *  SignalConversion generated from: '<S186>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S16>/Merge3' incorporates:
     *  SignalConversion generated from: '<S186>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S16>/Merge4' incorporates:
     *  SignalConversion generated from: '<S186>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S16>/Merge5' incorporates:
     *  SignalConversion generated from: '<S186>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S16>/Merge6' incorporates:
     *  SignalConversion generated from: '<S186>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S16>/Pass Through' */
  }

  /* End of If: '<S16>/If' */

  /* UnitDelay: '<S340>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S340>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S340>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S340>/Product1' incorporates:
   *  Signum: '<S340>/Sign1'
   *  Signum: '<S340>/Sign2'
   */
  rtb_thetay *= rtb_Add_f1;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S340>/Switch' incorporates:
   *  Constant: '<S340>/Constant'
   *  Constant: '<S345>/Constant'
   *  Constant: '<S346>/Constant'
   *  Logic: '<S340>/or'
   *  Product: '<S340>/Product1'
   *  RelationalOperator: '<S345>/Compare'
   *  RelationalOperator: '<S346>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_UnitDelay1_gi = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_UnitDelay1_gi = 0.0;
  }

  /* End of Switch: '<S340>/Switch' */

  /* RelationalOperator: '<S347>/Compare' incorporates:
   *  Constant: '<S347>/Constant'
   */
  UnitDelay_e = (rtb_UnitDelay1_gi == 0.0);

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_UnitDelay1_gi > 0.0);

  /* Abs: '<S340>/Abs' incorporates:
   *  Sum: '<S340>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S340>/Switch5' incorporates:
   *  Constant: '<S340>/Constant1'
   *  Switch: '<S340>/Switch1'
   *  UnaryMinus: '<S340>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S340>/Constant4'
     *  Constant: '<S340>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S340>/Constant2'
     *  Constant: '<S340>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S340>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S340>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S340>/Constant10'
     *  Constant: '<S340>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S340>/Constant7'
     *  Constant: '<S340>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S340>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S340>/Lookup Table Dynamic1'
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

    /* Switch: '<S340>/Switch3' incorporates:
     *  Constant: '<S340>/Constant1'
     *  Constant: '<S340>/Constant3'
     *  UnaryMinus: '<S340>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_thetay = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S340>/Switch3' */
  }

  /* End of Switch: '<S340>/Switch5' */

  /* Product: '<S340>/Product' incorporates:
   *  Switch: '<S340>/Switch1'
   */
  rtb_thetay *= rtb_Switch1_nj;

  /* Switch: '<S351>/Init' incorporates:
   *  UnitDelay: '<S351>/FixPt Unit Delay1'
   *  UnitDelay: '<S351>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_UnitDelay1_gi;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S351>/Init' */

  /* Sum: '<S349>/Sum1' */
  rtb_Switch1_m5 = rtb_UnitDelay1_gi - rtb_Merge1;

  /* Switch: '<S350>/Switch2' incorporates:
   *  RelationalOperator: '<S350>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_thetay)) {
    /* Switch: '<S340>/Switch2' incorporates:
     *  Constant: '<S340>/Constant1'
     *  Switch: '<S340>/Switch4'
     */
    if (UnitDelay_e) {
      rtb_UnitDelay1_gi = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S340>/Switch4' incorporates:
       *  Constant: '<S340>/Constant1'
       */
      rtb_UnitDelay1_gi = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S340>/Switch4' incorporates:
       *  Constant: '<S340>/Constant3'
       *  UnaryMinus: '<S340>/Unary Minus1'
       */
      rtb_UnitDelay1_gi = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S340>/Switch2' */

    /* Product: '<S340>/Product2' */
    rtb_UnitDelay1_gi *= rtb_Switch1_nj;

    /* Switch: '<S350>/Switch' incorporates:
     *  RelationalOperator: '<S350>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_UnitDelay1_gi) {
      rtb_thetay = rtb_UnitDelay1_gi;
    } else {
      rtb_thetay = rtb_Switch1_m5;
    }

    /* End of Switch: '<S350>/Switch' */
  }

  /* End of Switch: '<S350>/Switch2' */

  /* Sum: '<S349>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_thetay + rtb_Merge1;

  /* Sum: '<S7>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Gain: '<S35>/Gain1' */
  rtb_UnitDelay1_gi = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S343>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S343>/Switch' incorporates:
     *  Constant: '<S367>/Constant3'
     *  Constant: '<S367>/Constant4'
     *  Math: '<S367>/Math Function'
     *  Sum: '<S343>/Subtract'
     *  Sum: '<S367>/Add1'
     *  Sum: '<S367>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_UnitDelay1_gi) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S343>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S343>/Switch' */

  /* Sum: '<S363>/Add1' incorporates:
   *  Constant: '<S363>/Constant3'
   *  Constant: '<S363>/Constant4'
   *  Math: '<S363>/Math Function'
   *  Sum: '<S342>/Add'
   *  Sum: '<S362>/Sum'
   *  Sum: '<S363>/Add2'
   */
  rtb_thetay = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    (rtb_UnitDelay1_gi + Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) +
    3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S365>/Sum1' incorporates:
   *  Constant: '<S362>/Constant2'
   *  Product: '<S365>/Product'
   *  Sum: '<S365>/Sum'
   *  UnitDelay: '<S365>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_thetay - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S362>/Product' incorporates:
   *  Constant: '<S362>/Constant3'
   */
  rtb_Switch1_nj = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S364>/Diff' incorporates:
   *  UnitDelay: '<S364>/UD'
   *
   * Block description for '<S364>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S364>/UD':
   *
   *  Store in Global RAM
   */
  sin_alpha = rtb_Switch1_nj - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S362>/Saturation' */
  if (sin_alpha > Steering_Heading_Control_D_UL) {
    sin_alpha = Steering_Heading_Control_D_UL;
  } else if (sin_alpha < Steering_Heading_Control_D_LL) {
    sin_alpha = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S362>/Add' incorporates:
   *  Gain: '<S362>/Gain1'
   *  Saturate: '<S362>/Saturation'
   */
  rtb_Switch2 = (Steering_Heading_Control_P * rtb_thetay) + sin_alpha;

  /* Sum: '<S362>/Subtract' incorporates:
   *  Constant: '<S362>/Constant'
   */
  rtb_rx_j = Steering_Heading_Control_Total_UL - rtb_Switch2;

  /* Sum: '<S362>/Sum2' incorporates:
   *  Gain: '<S362>/Gain2'
   *  UnitDelay: '<S362>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_thetay) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S366>/Switch2' incorporates:
   *  RelationalOperator: '<S366>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_rx_j)) {
    /* Sum: '<S362>/Subtract1' incorporates:
     *  Constant: '<S362>/Constant1'
     */
    rtb_Switch4_g = Steering_Heading_Control_Total_LL - rtb_Switch2;

    /* Switch: '<S366>/Switch' incorporates:
     *  RelationalOperator: '<S366>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch4_g) {
      rtb_rx_j = rtb_Switch4_g;
    } else {
      rtb_rx_j = rtb_Switch1_m5;
    }

    /* End of Switch: '<S366>/Switch' */
  }

  /* End of Switch: '<S366>/Switch2' */

  /* Saturate: '<S362>/Saturation1' */
  if (rtb_rx_j > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_j < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_rx_j;
  }

  /* End of Saturate: '<S362>/Saturation1' */

  /* Sum: '<S362>/Add1' */
  sin_alpha = rtb_Switch2 + rtb_Switch1_m5;

  /* Saturate: '<S362>/Saturation2' */
  if (sin_alpha > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S362>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (sin_alpha < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S362>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S362>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = sin_alpha;
  }

  /* End of Saturate: '<S362>/Saturation2' */

  /* Switch: '<S342>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S353>/Switch' incorporates:
     *  Abs: '<S353>/Abs'
     *  Constant: '<S353>/Constant'
     *  Constant: '<S361>/Constant'
     *  RelationalOperator: '<S361>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_rx_j = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_rx_j = 0.0;
    }

    /* End of Switch: '<S353>/Switch' */
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S342>/Switch' */

  /* Signum: '<S352>/Sign2' incorporates:
   *  UnitDelay: '<S352>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_thetay = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S352>/Sign1' */
  if (rtIsNaN(rtb_rx_j)) {
    rtb_Add_f1 = (rtNaN);
  } else if (rtb_rx_j < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (rtb_rx_j > 0.0);
  }

  /* Product: '<S352>/Product1' incorporates:
   *  Signum: '<S352>/Sign1'
   *  Signum: '<S352>/Sign2'
   */
  rtb_thetay *= rtb_Add_f1;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S352>/Switch' incorporates:
   *  Constant: '<S352>/Constant'
   *  Constant: '<S354>/Constant'
   *  Constant: '<S355>/Constant'
   *  Logic: '<S352>/or'
   *  Product: '<S352>/Product1'
   *  RelationalOperator: '<S354>/Compare'
   *  RelationalOperator: '<S355>/Compare'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_rx_d = rtb_rx_j;
  } else {
    rtb_rx_d = 0.0;
  }

  /* End of Switch: '<S352>/Switch' */

  /* RelationalOperator: '<S356>/Compare' incorporates:
   *  Constant: '<S356>/Constant'
   */
  UnitDelay_e = (rtb_rx_d == 0.0);

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_d > 0.0);

  /* Abs: '<S352>/Abs' incorporates:
   *  Sum: '<S352>/Subtract'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  rtb_Switch2 = fabs(Code_Gen_Model_B.Steering_Localized_Cmd - rtb_rx_j);

  /* Switch: '<S352>/Switch5' incorporates:
   *  Constant: '<S352>/Constant1'
   *  Switch: '<S352>/Switch1'
   *  UnaryMinus: '<S352>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S352>/Constant4'
     *  Constant: '<S352>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S352>/Constant2'
     *  Constant: '<S352>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S352>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S352>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S352>/Constant10'
     *  Constant: '<S352>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S352>/Constant7'
     *  Constant: '<S352>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S352>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S352>/Lookup Table Dynamic1'
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

    /* Switch: '<S352>/Switch3' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Constant: '<S352>/Constant3'
     *  UnaryMinus: '<S352>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S352>/Switch3' */
  }

  /* End of Switch: '<S352>/Switch5' */

  /* Product: '<S352>/Product' incorporates:
   *  Switch: '<S352>/Switch1'
   */
  rtb_thetay_f = rtb_thetay * rtb_Switch2;

  /* Switch: '<S360>/Init' incorporates:
   *  UnitDelay: '<S360>/FixPt Unit Delay1'
   *  UnitDelay: '<S360>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_j = rtb_rx_d;
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S360>/Init' */

  /* Sum: '<S358>/Sum1' */
  rtb_Switch4_g = rtb_rx_d - rtb_rx_j;

  /* Switch: '<S359>/Switch2' incorporates:
   *  RelationalOperator: '<S359>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_thetay_f)) {
    /* Switch: '<S352>/Switch2' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Constant: '<S352>/Constant3'
     *  Switch: '<S352>/Switch4'
     *  UnaryMinus: '<S352>/Unary Minus1'
     */
    if (UnitDelay_e) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S352>/Switch4' incorporates:
       *  Constant: '<S352>/Constant1'
       */
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S352>/Product2' incorporates:
     *  Switch: '<S352>/Switch2'
     */
    rtb_Switch1_p = rtb_thetay * rtb_Switch2;

    /* Switch: '<S359>/Switch' incorporates:
     *  RelationalOperator: '<S359>/UpperRelop'
     */
    if (rtb_Switch4_g < rtb_Switch1_p) {
      rtb_thetay_f = rtb_Switch1_p;
    } else {
      rtb_thetay_f = rtb_Switch4_g;
    }

    /* End of Switch: '<S359>/Switch' */
  }

  /* End of Switch: '<S359>/Switch2' */

  /* Sum: '<S358>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_thetay_f + rtb_rx_j;

  /* Outputs for Atomic SubSystem: '<S255>/Initialize Function' */
  /* Sum: '<S341>/Add' incorporates:
   *  Constant: '<S341>/Constant'
   *  Constant: '<S341>/Constant4'
   *  Constant: '<S341>/Constant5'
   *  Trigonometry: '<S341>/Atan2'
   */
  rtb_Switch2 = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S255>/Initialize Function' */

  /* Fcn: '<S375>/r->x' incorporates:
   *  Fcn: '<S380>/r->x'
   *  Fcn: '<S385>/r->x'
   *  Fcn: '<S390>/r->x'
   */
  rtb_Switch1_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S369>/Add' incorporates:
   *  Fcn: '<S375>/r->x'
   *  Fcn: '<S376>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Switch2))
    + rtb_Switch1_p;

  /* Fcn: '<S375>/theta->y' incorporates:
   *  Fcn: '<S380>/theta->y'
   *  Fcn: '<S385>/theta->y'
   *  Fcn: '<S390>/theta->y'
   */
  rtb_Switch4_g = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S369>/Add' incorporates:
   *  Fcn: '<S375>/theta->y'
   *  Fcn: '<S376>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Switch2))
    + rtb_Switch4_g;

  /* Fcn: '<S374>/x->r' */
  rtb_rx_d = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  UnitDelay_e = (rtb_rx_d == 0.0);

  /* Switch: '<S373>/Switch1' */
  if (UnitDelay_e) {
    /* Switch: '<S373>/Switch1' incorporates:
     *  Constant: '<S373>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S373>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_rx_d;
  }

  /* End of Switch: '<S373>/Switch1' */

  /* Sum: '<S370>/Add' incorporates:
   *  Fcn: '<S381>/r->x'
   *  Fcn: '<S381>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch4_g;

  /* Fcn: '<S379>/x->r' */
  rtb_thetay_f = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S382>/Compare' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_f == 0.0);

  /* Switch: '<S378>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S378>/Switch1' incorporates:
     *  Constant: '<S378>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S378>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_thetay_f;
  }

  /* End of Switch: '<S378>/Switch1' */

  /* Sum: '<S371>/Add' incorporates:
   *  Fcn: '<S386>/r->x'
   *  Fcn: '<S386>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch4_g;

  /* Fcn: '<S384>/x->r' */
  rtb_rx_j = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S387>/Compare' incorporates:
   *  Constant: '<S387>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_j == 0.0);

  /* Switch: '<S383>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S383>/Switch1' incorporates:
     *  Constant: '<S383>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S383>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_j;
  }

  /* End of Switch: '<S383>/Switch1' */

  /* Sum: '<S372>/Add' incorporates:
   *  Fcn: '<S391>/r->x'
   *  Fcn: '<S391>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_p;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch4_g;

  /* Fcn: '<S389>/x->r' */
  rtb_thetay_g = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S392>/Compare' incorporates:
   *  Constant: '<S392>/Constant'
   */
  rtb_AT_Tag_13_Active = (rtb_thetay_g == 0.0);

  /* Switch: '<S388>/Switch1' */
  if (rtb_AT_Tag_13_Active) {
    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S388>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_g;
  }

  /* End of Switch: '<S388>/Switch1' */

  /* Product: '<S368>/Divide' incorporates:
   *  Abs: '<S368>/Abs'
   *  Abs: '<S368>/Abs1'
   *  Abs: '<S368>/Abs2'
   *  Abs: '<S368>/Abs3'
   *  Constant: '<S368>/Constant'
   *  MinMax: '<S368>/Max'
   */
  rtb_rx_d = 3.9212094760200449 / fmax(fmax(fmax(fmax(3.9212094760200449,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S368>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S373>/Switch' */
  if (!UnitDelay_e) {
    /* Switch: '<S373>/Switch' incorporates:
     *  Fcn: '<S374>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S373>/Switch' */

  /* Trigonometry: '<S269>/Cos4' incorporates:
   *  Switch: '<S258>/Angle_Switch'
   *  Trigonometry: '<S268>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S247>/Add1' incorporates:
   *  Constant: '<S247>/Constant3'
   *  Constant: '<S247>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S247>/Math Function'
   *  Sum: '<S17>/Add'
   *  Sum: '<S247>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S269>/Sin5' incorporates:
   *  UnaryMinus: '<S267>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S269>/Sin4' incorporates:
   *  Switch: '<S258>/Angle_Switch'
   *  Trigonometry: '<S268>/Sin4'
   */
  rtb_Add_ik = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S269>/Cos5' incorporates:
   *  UnaryMinus: '<S267>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S269>/Subtract1' incorporates:
   *  Product: '<S269>/Product2'
   *  Product: '<S269>/Product3'
   *  Trigonometry: '<S269>/Cos4'
   *  Trigonometry: '<S269>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_f1 * rtb_rx_j) + (rtb_Add_ik * rtb_thetay_f);

  /* Sum: '<S269>/Subtract' incorporates:
   *  Product: '<S269>/Product'
   *  Product: '<S269>/Product1'
   *  Trigonometry: '<S269>/Cos4'
   *  Trigonometry: '<S269>/Sin4'
   */
  rtb_Switch4_g = (rtb_Add_f1 * rtb_thetay_f) - (rtb_Add_ik * rtb_rx_j);

  /* Math: '<S269>/Hypot' */
  rtb_Switch1_p = rt_hypotd_snf(rtb_Switch4_g, rtb_Switch2);

  /* Switch: '<S269>/Switch' incorporates:
   *  Constant: '<S269>/Constant'
   *  Constant: '<S269>/Constant1'
   *  Constant: '<S270>/Constant'
   *  Product: '<S269>/Divide'
   *  Product: '<S269>/Divide1'
   *  RelationalOperator: '<S270>/Compare'
   *  Switch: '<S269>/Switch1'
   */
  if (rtb_Switch1_p > 1.0E-6) {
    rtb_thetay_g = rtb_Switch2 / rtb_Switch1_p;
    rtb_thetay_f = rtb_Switch4_g / rtb_Switch1_p;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S268>/Subtract1' incorporates:
     *  Product: '<S268>/Product2'
     *  Product: '<S268>/Product3'
     *  UnaryMinus: '<S258>/Unary Minus'
     */
    rtb_Switch2 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5) + (rtb_Add_ik *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S268>/Subtract' incorporates:
     *  Product: '<S268>/Product'
     *  Product: '<S268>/Product1'
     */
    rtb_Switch1_p = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5) - (rtb_Add_ik *
      Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S268>/Hypot' */
    rtb_Switch4_g = rt_hypotd_snf(rtb_Switch1_p, rtb_Switch2);

    /* Switch: '<S268>/Switch1' incorporates:
     *  Constant: '<S268>/Constant'
     *  Constant: '<S268>/Constant1'
     *  Constant: '<S271>/Constant'
     *  Product: '<S268>/Divide'
     *  Product: '<S268>/Divide1'
     *  RelationalOperator: '<S271>/Compare'
     *  Switch: '<S268>/Switch'
     */
    if (rtb_Switch4_g > 1.0E-6) {
      rtb_Switch1_p /= rtb_Switch4_g;
      rtb_Switch2 /= rtb_Switch4_g;
    } else {
      rtb_Switch1_p = 1.0;
      rtb_Switch2 = 0.0;
    }

    /* End of Switch: '<S268>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Switch2, rtb_Switch1_p);
  } else {
    rtb_thetay = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S261>/Product2' incorporates:
   *  Constant: '<S261>/Constant'
   *  Switch: '<S258>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S256>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S256>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S259>/Add' incorporates:
   *  Sum: '<S260>/Sum'
   */
  rtb_Hypot_o = rtb_rx_j - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S251>/Product' incorporates:
   *  Abs: '<S256>/Abs'
   *  Abs: '<S259>/Abs'
   *  Constant: '<S262>/Constant'
   *  Constant: '<S272>/Constant3'
   *  Constant: '<S272>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
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
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S257>/Gain' */
  rtb_Switch1_p = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S257>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S264>/Sum1' incorporates:
   *  Constant: '<S257>/Constant2'
   *  Product: '<S264>/Product'
   *  Sum: '<S264>/Sum'
   *  UnitDelay: '<S264>/Unit Delay1'
   */
  rtb_Switch2 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                 Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_Switch4_g = rtb_Switch2 * Drive_Motor_Control_D;

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
  sin_alpha = rtb_Switch4_g - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S257>/Saturation' */
  if (sin_alpha > Drive_Motor_Control_D_UL) {
    sin_alpha = Drive_Motor_Control_D_UL;
  } else if (sin_alpha < Drive_Motor_Control_D_LL) {
    sin_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Switch2_o = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Switch1_p) +
    sin_alpha;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Switch2_o;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Switch1_p = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S265>/Switch2' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S265>/LowerRelop1'
   *  Sum: '<S257>/Subtract'
   */
  if (!(rtb_Switch1_p > (1.0 - rtb_Switch2_o))) {
    /* Switch: '<S265>/Switch' incorporates:
     *  Constant: '<S257>/Constant1'
     *  RelationalOperator: '<S265>/UpperRelop'
     *  Sum: '<S257>/Subtract1'
     */
    if (rtb_Switch1_p < (-1.0 - rtb_Switch2_o)) {
      rtb_thetay_f = -1.0 - rtb_Switch2_o;
    } else {
      rtb_thetay_f = rtb_Switch1_p;
    }

    /* End of Switch: '<S265>/Switch' */
  }

  /* End of Switch: '<S265>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Switch1_p = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Switch1_p = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch1_p = rtb_thetay_f;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  sin_alpha = rtb_Switch2_o + rtb_Switch1_p;

  /* Saturate: '<S257>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S257>/Saturation2' */

  /* Sum: '<S273>/Add1' incorporates:
   *  Constant: '<S273>/Constant3'
   *  Constant: '<S273>/Constant4'
   *  Math: '<S273>/Math Function'
   *  Sum: '<S273>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S275>/Sum1' incorporates:
   *  Constant: '<S260>/Constant2'
   *  Product: '<S275>/Product'
   *  Sum: '<S275>/Sum'
   *  UnitDelay: '<S275>/Unit Delay1'
   */
  rtb_Switch2_o = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S260>/Product' incorporates:
   *  Constant: '<S260>/Constant3'
   */
  rtb_Modulation_Drv = rtb_Switch2_o * Steering_Motor_Control_D;

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
  sin_alpha = rtb_Modulation_Drv - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S260>/Saturation' */
  if (sin_alpha > Steering_Motor_Control_D_UL) {
    sin_alpha = Steering_Motor_Control_D_UL;
  } else if (sin_alpha < Steering_Motor_Control_D_LL) {
    sin_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S260>/Add' incorporates:
   *  Gain: '<S260>/Gain1'
   *  Saturate: '<S260>/Saturation'
   */
  rtb_Add_e3 = (Steering_Motor_Control_P * rtb_thetay_g) + sin_alpha;

  /* Sum: '<S260>/Subtract' incorporates:
   *  Constant: '<S260>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_e3;

  /* Sum: '<S260>/Sum2' incorporates:
   *  Gain: '<S260>/Gain2'
   *  UnitDelay: '<S260>/Unit Delay'
   */
  rtb_Steer_Joystick_X_Rel_Mod = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S276>/Switch2' incorporates:
   *  Constant: '<S260>/Constant'
   *  RelationalOperator: '<S276>/LowerRelop1'
   *  Sum: '<S260>/Subtract'
   */
  if (!(rtb_Steer_Joystick_X_Rel_Mod > (1.0 - rtb_Add_e3))) {
    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S260>/Constant1'
     *  RelationalOperator: '<S276>/UpperRelop'
     *  Sum: '<S260>/Subtract1'
     */
    if (rtb_Steer_Joystick_X_Rel_Mod < (-1.0 - rtb_Add_e3)) {
      rtb_thetay_f = -1.0 - rtb_Add_e3;
    } else {
      rtb_thetay_f = rtb_Steer_Joystick_X_Rel_Mod;
    }

    /* End of Switch: '<S276>/Switch' */
  }

  /* End of Switch: '<S276>/Switch2' */

  /* Saturate: '<S260>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Steer_Joystick_X_Rel_Mod = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Steer_Joystick_X_Rel_Mod = Steering_Motor_Control_I_LL;
  } else {
    rtb_Steer_Joystick_X_Rel_Mod = rtb_thetay_f;
  }

  /* End of Saturate: '<S260>/Saturation1' */

  /* Sum: '<S260>/Add1' */
  sin_alpha = rtb_Add_e3 + rtb_Steer_Joystick_X_Rel_Mod;

  /* Saturate: '<S260>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S260>/Saturation2' */

  /* Product: '<S368>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S378>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S378>/Switch' incorporates:
     *  Fcn: '<S379>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S378>/Switch' */

  /* Trigonometry: '<S290>/Cos4' incorporates:
   *  Switch: '<S279>/Angle_Switch'
   *  Trigonometry: '<S289>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S248>/Add1' incorporates:
   *  Constant: '<S248>/Constant3'
   *  Constant: '<S248>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S248>/Math Function'
   *  Sum: '<S17>/Add1'
   *  Sum: '<S248>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S290>/Sin5' incorporates:
   *  UnaryMinus: '<S288>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S290>/Sin4' incorporates:
   *  Switch: '<S279>/Angle_Switch'
   *  Trigonometry: '<S289>/Sin4'
   */
  rtb_Add_ik = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S290>/Cos5' incorporates:
   *  UnaryMinus: '<S288>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S290>/Subtract1' incorporates:
   *  Product: '<S290>/Product2'
   *  Product: '<S290>/Product3'
   *  Trigonometry: '<S290>/Cos4'
   *  Trigonometry: '<S290>/Sin4'
   */
  rtb_Add_e3 = (rtb_Add_f1 * rtb_rx_j) + (rtb_Add_ik * rtb_thetay_f);

  /* Sum: '<S290>/Subtract' incorporates:
   *  Product: '<S290>/Product'
   *  Product: '<S290>/Product1'
   *  Trigonometry: '<S290>/Cos4'
   *  Trigonometry: '<S290>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Add_f1 * rtb_thetay_f) - (rtb_Add_ik * rtb_rx_j);

  /* Math: '<S290>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_e3);

  /* Switch: '<S290>/Switch' incorporates:
   *  Constant: '<S290>/Constant'
   *  Constant: '<S290>/Constant1'
   *  Constant: '<S291>/Constant'
   *  Product: '<S290>/Divide'
   *  Product: '<S290>/Divide1'
   *  RelationalOperator: '<S291>/Compare'
   *  Switch: '<S290>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_g = rtb_Add_e3 / rtb_Hypot_bl;
    rtb_thetay_f = rtb_Subtract1_la / rtb_Hypot_bl;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S289>/Subtract1' incorporates:
     *  Product: '<S289>/Product2'
     *  Product: '<S289>/Product3'
     *  UnaryMinus: '<S279>/Unary Minus'
     */
    rtb_Add_e3 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Add_ik *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S289>/Subtract' incorporates:
     *  Product: '<S289>/Product'
     *  Product: '<S289>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_g) - (rtb_Add_ik *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S289>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_e3);

    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S289>/Constant'
     *  Constant: '<S289>/Constant1'
     *  Constant: '<S292>/Constant'
     *  Product: '<S289>/Divide'
     *  Product: '<S289>/Divide1'
     *  RelationalOperator: '<S292>/Compare'
     *  Switch: '<S289>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_la;
      rtb_Add_e3 /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_e3 = 0.0;
    }

    /* End of Switch: '<S289>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Add_e3, rtb_Hypot_bl);
  } else {
    rtb_thetay = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S282>/Product2' incorporates:
   *  Constant: '<S282>/Constant'
   *  Switch: '<S279>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S277>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S277>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S280>/Add' incorporates:
   *  Sum: '<S281>/Sum'
   */
  rtb_Hypot_o = rtb_rx_j - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S252>/Product' incorporates:
   *  Abs: '<S277>/Abs'
   *  Abs: '<S280>/Abs'
   *  Constant: '<S283>/Constant'
   *  Constant: '<S293>/Constant3'
   *  Constant: '<S293>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
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
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S278>/Gain' */
  rtb_Hypot_bl = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S278>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S285>/Sum1' incorporates:
   *  Constant: '<S278>/Constant2'
   *  Product: '<S285>/Product'
   *  Sum: '<S285>/Sum'
   *  UnitDelay: '<S285>/Unit Delay1'
   */
  rtb_Add_e3 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S278>/Product' incorporates:
   *  Constant: '<S278>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_e3 * Drive_Motor_Control_D;

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
  sin_alpha = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S278>/Saturation' */
  if (sin_alpha > Drive_Motor_Control_D_UL) {
    sin_alpha = Drive_Motor_Control_D_UL;
  } else if (sin_alpha < Drive_Motor_Control_D_LL) {
    sin_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Gain: '<S278>/Gain1'
   *  Saturate: '<S278>/Saturation'
   */
  rtb_Add_g4 = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Hypot_bl) +
    sin_alpha;

  /* Sum: '<S278>/Subtract' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_g4;

  /* Sum: '<S278>/Sum2' incorporates:
   *  Gain: '<S278>/Gain2'
   *  UnitDelay: '<S278>/Unit Delay'
   */
  rtb_Hypot_bl = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S286>/Switch2' incorporates:
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S286>/LowerRelop1'
   *  Sum: '<S278>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_g4))) {
    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S278>/Constant1'
     *  RelationalOperator: '<S286>/UpperRelop'
     *  Sum: '<S278>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_g4)) {
      rtb_thetay_f = -1.0 - rtb_Add_g4;
    } else {
      rtb_thetay_f = rtb_Hypot_bl;
    }

    /* End of Switch: '<S286>/Switch' */
  }

  /* End of Switch: '<S286>/Switch2' */

  /* Saturate: '<S278>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_f;
  }

  /* End of Saturate: '<S278>/Saturation1' */

  /* Sum: '<S278>/Add1' */
  sin_alpha = rtb_Add_g4 + rtb_Hypot_bl;

  /* Saturate: '<S278>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S278>/Saturation2' */

  /* Sum: '<S294>/Add1' incorporates:
   *  Constant: '<S294>/Constant3'
   *  Constant: '<S294>/Constant4'
   *  Math: '<S294>/Math Function'
   *  Sum: '<S294>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S296>/Sum1' incorporates:
   *  Constant: '<S281>/Constant2'
   *  Product: '<S296>/Product'
   *  Sum: '<S296>/Sum'
   *  UnitDelay: '<S296>/Unit Delay1'
   */
  rtb_Add_g4 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S281>/Product' incorporates:
   *  Constant: '<S281>/Constant3'
   */
  rtb_Subtract1_ed = rtb_Add_g4 * Steering_Motor_Control_D;

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
  sin_alpha = rtb_Subtract1_ed - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S281>/Saturation' */
  if (sin_alpha > Steering_Motor_Control_D_UL) {
    sin_alpha = Steering_Motor_Control_D_UL;
  } else if (sin_alpha < Steering_Motor_Control_D_LL) {
    sin_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S281>/Add' incorporates:
   *  Gain: '<S281>/Gain1'
   *  Saturate: '<S281>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_thetay_g) + sin_alpha;

  /* Sum: '<S281>/Subtract' incorporates:
   *  Constant: '<S281>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_ik;

  /* Sum: '<S281>/Sum2' incorporates:
   *  Gain: '<S281>/Gain2'
   *  UnitDelay: '<S281>/Unit Delay'
   */
  rtb_Sum2_n = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S297>/Switch2' incorporates:
   *  Constant: '<S281>/Constant'
   *  RelationalOperator: '<S297>/LowerRelop1'
   *  Sum: '<S281>/Subtract'
   */
  if (!(rtb_Sum2_n > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S281>/Constant1'
     *  RelationalOperator: '<S297>/UpperRelop'
     *  Sum: '<S281>/Subtract1'
     */
    if (rtb_Sum2_n < (-1.0 - rtb_Add_ik)) {
      rtb_thetay_f = -1.0 - rtb_Add_ik;
    } else {
      rtb_thetay_f = rtb_Sum2_n;
    }

    /* End of Switch: '<S297>/Switch' */
  }

  /* End of Switch: '<S297>/Switch2' */

  /* Saturate: '<S281>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Sum2_n = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Sum2_n = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_n = rtb_thetay_f;
  }

  /* End of Saturate: '<S281>/Saturation1' */

  /* Sum: '<S281>/Add1' */
  sin_alpha = rtb_Add_ik + rtb_Sum2_n;

  /* Saturate: '<S281>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S281>/Saturation2' */

  /* Product: '<S368>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S383>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S383>/Switch' incorporates:
     *  Fcn: '<S384>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S383>/Switch' */

  /* Trigonometry: '<S311>/Cos4' incorporates:
   *  Switch: '<S300>/Angle_Switch'
   *  Trigonometry: '<S310>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S249>/Add1' incorporates:
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S249>/Math Function'
   *  Sum: '<S17>/Add2'
   *  Sum: '<S249>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S311>/Sin5' incorporates:
   *  UnaryMinus: '<S309>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S311>/Sin4' incorporates:
   *  Switch: '<S300>/Angle_Switch'
   *  Trigonometry: '<S310>/Sin4'
   */
  rtb_Add_ik = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S311>/Cos5' incorporates:
   *  UnaryMinus: '<S309>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S311>/Subtract1' incorporates:
   *  Product: '<S311>/Product2'
   *  Product: '<S311>/Product3'
   *  Trigonometry: '<S311>/Cos4'
   *  Trigonometry: '<S311>/Sin4'
   */
  rtb_Subtract1_kh = (rtb_Add_f1 * rtb_rx_j) + (rtb_Add_ik * rtb_thetay_f);

  /* Sum: '<S311>/Subtract' incorporates:
   *  Product: '<S311>/Product'
   *  Product: '<S311>/Product1'
   *  Trigonometry: '<S311>/Cos4'
   *  Trigonometry: '<S311>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_f1 * rtb_thetay_f) - (rtb_Add_ik * rtb_rx_j);

  /* Math: '<S311>/Hypot' */
  rtb_rx_j = rt_hypotd_snf(rtb_Subtract_n, rtb_Subtract1_kh);

  /* Switch: '<S311>/Switch' incorporates:
   *  Constant: '<S311>/Constant'
   *  Constant: '<S311>/Constant1'
   *  Constant: '<S312>/Constant'
   *  Product: '<S311>/Divide'
   *  Product: '<S311>/Divide1'
   *  RelationalOperator: '<S312>/Compare'
   *  Switch: '<S311>/Switch1'
   */
  if (rtb_rx_j > 1.0E-6) {
    rtb_thetay_g = rtb_Subtract1_kh / rtb_rx_j;
    rtb_thetay_f = rtb_Subtract_n / rtb_rx_j;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S311>/Switch' */

  /* Switch: '<S300>/Speed_Switch' incorporates:
   *  Abs: '<S300>/Abs'
   *  Constant: '<S308>/Constant'
   *  RelationalOperator: '<S308>/Compare'
   *  Switch: '<S300>/Angle_Switch'
   *  Trigonometry: '<S310>/Atan1'
   *  Trigonometry: '<S311>/Atan1'
   *  UnaryMinus: '<S300>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S310>/Subtract1' incorporates:
     *  Product: '<S310>/Product2'
     *  Product: '<S310>/Product3'
     *  UnaryMinus: '<S300>/Unary Minus'
     */
    rtb_Subtract1_kh = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Add_ik
      * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S310>/Subtract' incorporates:
     *  Product: '<S310>/Product'
     *  Product: '<S310>/Product1'
     */
    rtb_Subtract_n = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Add_ik *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S310>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract_n, rtb_Subtract1_kh);

    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S310>/Constant1'
     *  Constant: '<S313>/Constant'
     *  Product: '<S310>/Divide'
     *  Product: '<S310>/Divide1'
     *  RelationalOperator: '<S313>/Compare'
     *  Switch: '<S310>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract_n /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract1_kh / rtb_Add_ik;
    } else {
      rtb_Subtract_n = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S310>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract_n);
  } else {
    rtb_thetay = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S303>/Product2' incorporates:
   *  Constant: '<S303>/Constant'
   *  Switch: '<S300>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S298>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S298>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S301>/Add' incorporates:
   *  Sum: '<S302>/Sum'
   */
  rtb_Hypot_o = rtb_rx_j - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S253>/Product' incorporates:
   *  Abs: '<S298>/Abs'
   *  Abs: '<S301>/Abs'
   *  Constant: '<S304>/Constant'
   *  Constant: '<S314>/Constant3'
   *  Constant: '<S314>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S298>/OR'
   *  Lookup_n-D: '<S301>/1-D Lookup Table'
   *  Math: '<S314>/Math Function'
   *  RelationalOperator: '<S298>/Equal1'
   *  RelationalOperator: '<S304>/Compare'
   *  Signum: '<S298>/Sign'
   *  Signum: '<S298>/Sign1'
   *  Sum: '<S301>/Add'
   *  Sum: '<S314>/Add1'
   *  Sum: '<S314>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S299>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S299>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S306>/Sum1' incorporates:
   *  Constant: '<S299>/Constant2'
   *  Product: '<S306>/Product'
   *  Sum: '<S306>/Sum'
   *  UnitDelay: '<S306>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S299>/Product' incorporates:
   *  Constant: '<S299>/Constant3'
   */
  rtb_Subtract1_kh = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S305>/Diff' incorporates:
   *  UnitDelay: '<S305>/UD'
   *
   * Block description for '<S305>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S305>/UD':
   *
   *  Store in Global RAM
   */
  sin_alpha = rtb_Subtract1_kh - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S299>/Saturation' */
  if (sin_alpha > Drive_Motor_Control_D_UL) {
    sin_alpha = Drive_Motor_Control_D_UL;
  } else if (sin_alpha < Drive_Motor_Control_D_LL) {
    sin_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S299>/Add' incorporates:
   *  Gain: '<S299>/Gain1'
   *  Saturate: '<S299>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Subtract_n) +
    sin_alpha;

  /* Sum: '<S299>/Subtract' incorporates:
   *  Constant: '<S299>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_kv;

  /* Sum: '<S299>/Sum2' incorporates:
   *  Gain: '<S299>/Gain2'
   *  UnitDelay: '<S299>/Unit Delay'
   */
  rtb_Subtract_n = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S307>/Switch2' incorporates:
   *  Constant: '<S299>/Constant'
   *  RelationalOperator: '<S307>/LowerRelop1'
   *  Sum: '<S299>/Subtract'
   */
  if (!(rtb_Subtract_n > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S307>/Switch' incorporates:
     *  Constant: '<S299>/Constant1'
     *  RelationalOperator: '<S307>/UpperRelop'
     *  Sum: '<S299>/Subtract1'
     */
    if (rtb_Subtract_n < (-1.0 - rtb_Add_kv)) {
      rtb_thetay_f = -1.0 - rtb_Add_kv;
    } else {
      rtb_thetay_f = rtb_Subtract_n;
    }

    /* End of Switch: '<S307>/Switch' */
  }

  /* End of Switch: '<S307>/Switch2' */

  /* Saturate: '<S299>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_thetay_f;
  }

  /* End of Saturate: '<S299>/Saturation1' */

  /* Sum: '<S299>/Add1' */
  sin_alpha = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S299>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S299>/Saturation2' */

  /* Sum: '<S315>/Add1' incorporates:
   *  Constant: '<S315>/Constant3'
   *  Constant: '<S315>/Constant4'
   *  Math: '<S315>/Math Function'
   *  Sum: '<S315>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S317>/Sum1' incorporates:
   *  Constant: '<S302>/Constant2'
   *  Product: '<S317>/Product'
   *  Sum: '<S317>/Sum'
   *  UnitDelay: '<S317>/Unit Delay1'
   */
  rtb_rx_j = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
              Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S302>/Product' incorporates:
   *  Constant: '<S302>/Constant3'
   */
  rtb_Add_kv = rtb_rx_j * Steering_Motor_Control_D;

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
  sin_alpha = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S302>/Saturation' */
  if (sin_alpha > Steering_Motor_Control_D_UL) {
    sin_alpha = Steering_Motor_Control_D_UL;
  } else if (sin_alpha < Steering_Motor_Control_D_LL) {
    sin_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S302>/Add' incorporates:
   *  Gain: '<S302>/Gain1'
   *  Saturate: '<S302>/Saturation'
   */
  rtb_Add_f1 = (Steering_Motor_Control_P * rtb_thetay_g) + sin_alpha;

  /* Sum: '<S302>/Subtract' incorporates:
   *  Constant: '<S302>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_f1;

  /* Sum: '<S302>/Sum2' incorporates:
   *  Gain: '<S302>/Gain2'
   *  UnitDelay: '<S302>/Unit Delay'
   */
  rtb_Subtract1_inz = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S318>/Switch2' incorporates:
   *  Constant: '<S302>/Constant'
   *  RelationalOperator: '<S318>/LowerRelop1'
   *  Sum: '<S302>/Subtract'
   */
  if (!(rtb_Subtract1_inz > (1.0 - rtb_Add_f1))) {
    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S302>/Constant1'
     *  RelationalOperator: '<S318>/UpperRelop'
     *  Sum: '<S302>/Subtract1'
     */
    if (rtb_Subtract1_inz < (-1.0 - rtb_Add_f1)) {
      rtb_thetay_f = -1.0 - rtb_Add_f1;
    } else {
      rtb_thetay_f = rtb_Subtract1_inz;
    }

    /* End of Switch: '<S318>/Switch' */
  }

  /* End of Switch: '<S318>/Switch2' */

  /* Saturate: '<S302>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_inz = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_inz = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_inz = rtb_thetay_f;
  }

  /* End of Saturate: '<S302>/Saturation1' */

  /* Sum: '<S302>/Add1' */
  sin_alpha = rtb_Add_f1 + rtb_Subtract1_inz;

  /* Saturate: '<S302>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S302>/Saturation2' */

  /* Product: '<S368>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_rx_d;

  /* Switch: '<S388>/Switch' */
  if (!rtb_AT_Tag_13_Active) {
    /* Switch: '<S388>/Switch' incorporates:
     *  Fcn: '<S389>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S388>/Switch' */

  /* Trigonometry: '<S332>/Cos4' incorporates:
   *  Switch: '<S321>/Angle_Switch'
   *  Trigonometry: '<S331>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S250>/Add1' incorporates:
   *  Constant: '<S250>/Constant3'
   *  Constant: '<S250>/Constant4'
   *  Gain: '<S17>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S250>/Math Function'
   *  Sum: '<S17>/Add3'
   *  Sum: '<S250>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S332>/Sin5' incorporates:
   *  UnaryMinus: '<S330>/Unary Minus'
   */
  rtb_thetay_f = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S332>/Sin4' incorporates:
   *  Switch: '<S321>/Angle_Switch'
   *  Trigonometry: '<S331>/Sin4'
   */
  rtb_Minus_k_idx_0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S332>/Cos5' incorporates:
   *  UnaryMinus: '<S330>/Unary Minus'
   */
  rtb_rx_d = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S332>/Subtract1' incorporates:
   *  Product: '<S332>/Product2'
   *  Product: '<S332>/Product3'
   *  Trigonometry: '<S332>/Cos4'
   *  Trigonometry: '<S332>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Add_f1 * rtb_thetay_f) + (rtb_Minus_k_idx_0 *
    rtb_rx_d);

  /* Sum: '<S332>/Subtract' incorporates:
   *  Product: '<S332>/Product'
   *  Product: '<S332>/Product1'
   *  Trigonometry: '<S332>/Cos4'
   *  Trigonometry: '<S332>/Sin4'
   */
  rtb_Subtract_i = (rtb_Add_f1 * rtb_rx_d) - (rtb_Minus_k_idx_0 * rtb_thetay_f);

  /* Math: '<S332>/Hypot' */
  rtb_Hypot_o = rt_hypotd_snf(rtb_Subtract_i, rtb_Minus_k_idx_1);

  /* Switch: '<S332>/Switch' incorporates:
   *  Constant: '<S332>/Constant'
   *  Constant: '<S332>/Constant1'
   *  Constant: '<S333>/Constant'
   *  Product: '<S332>/Divide'
   *  Product: '<S332>/Divide1'
   *  RelationalOperator: '<S333>/Compare'
   *  Switch: '<S332>/Switch1'
   */
  if (rtb_Hypot_o > 1.0E-6) {
    rtb_thetay_g = rtb_Minus_k_idx_1 / rtb_Hypot_o;
    rtb_rx_d = rtb_Subtract_i / rtb_Hypot_o;
  } else {
    rtb_thetay_g = 0.0;
    rtb_rx_d = 1.0;
  }

  /* End of Switch: '<S332>/Switch' */

  /* Switch: '<S321>/Speed_Switch' incorporates:
   *  Abs: '<S321>/Abs'
   *  Constant: '<S329>/Constant'
   *  RelationalOperator: '<S329>/Compare'
   *  Switch: '<S321>/Angle_Switch'
   *  Trigonometry: '<S331>/Atan1'
   *  Trigonometry: '<S332>/Atan1'
   *  UnaryMinus: '<S321>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_rx_d)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S331>/Subtract1' incorporates:
     *  Product: '<S331>/Product2'
     *  Product: '<S331>/Product3'
     *  UnaryMinus: '<S321>/Unary Minus'
     */
    rtb_Minus_k_idx_1 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S331>/Subtract' incorporates:
     *  Product: '<S331>/Product'
     *  Product: '<S331>/Product1'
     */
    rtb_Minus_k_idx_0 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S331>/Hypot' */
    rtb_Add_f1 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S331>/Constant'
     *  Constant: '<S331>/Constant1'
     *  Constant: '<S334>/Constant'
     *  Product: '<S331>/Divide'
     *  Product: '<S331>/Divide1'
     *  RelationalOperator: '<S334>/Compare'
     *  Switch: '<S331>/Switch'
     */
    if (rtb_Add_f1 > 1.0E-6) {
      rtb_Minus_k_idx_0 /= rtb_Add_f1;
      rtb_Add_f1 = rtb_Minus_k_idx_1 / rtb_Add_f1;
    } else {
      rtb_Minus_k_idx_0 = 1.0;
      rtb_Add_f1 = 0.0;
    }

    /* End of Switch: '<S331>/Switch1' */
    rtb_thetay_f = rt_atan2d_snf(rtb_Add_f1, rtb_Minus_k_idx_0);
  } else {
    rtb_thetay = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_thetay_f = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S324>/Product2' incorporates:
   *  Constant: '<S324>/Constant'
   *  Switch: '<S321>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S319>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S319>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S322>/Add' incorporates:
   *  Sum: '<S323>/Sum'
   */
  rtb_Hypot_o = rtb_thetay_f - Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S254>/Product' incorporates:
   *  Abs: '<S319>/Abs'
   *  Abs: '<S322>/Abs'
   *  Constant: '<S325>/Constant'
   *  Constant: '<S335>/Constant3'
   *  Constant: '<S335>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S319>/OR'
   *  Lookup_n-D: '<S322>/1-D Lookup Table'
   *  Math: '<S335>/Math Function'
   *  RelationalOperator: '<S319>/Equal1'
   *  RelationalOperator: '<S325>/Compare'
   *  Signum: '<S319>/Sign'
   *  Signum: '<S319>/Sign1'
   *  Sum: '<S322>/Add'
   *  Sum: '<S335>/Add1'
   *  Sum: '<S335>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Hypot_o + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S320>/Gain' */
  rtb_Minus_k_idx_1 = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S320>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S327>/Sum1' incorporates:
   *  Constant: '<S320>/Constant2'
   *  Product: '<S327>/Product'
   *  Sum: '<S327>/Sum'
   *  UnitDelay: '<S327>/Unit Delay1'
   */
  rtb_Add_f1 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S320>/Product' incorporates:
   *  Constant: '<S320>/Constant3'
   */
  rtb_Minus_k_idx_0 = rtb_Add_f1 * Drive_Motor_Control_D;

  /* Sum: '<S326>/Diff' incorporates:
   *  UnitDelay: '<S326>/UD'
   *
   * Block description for '<S326>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S326>/UD':
   *
   *  Store in Global RAM
   */
  sin_alpha = rtb_Minus_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S320>/Saturation' */
  if (sin_alpha > Drive_Motor_Control_D_UL) {
    sin_alpha = Drive_Motor_Control_D_UL;
  } else if (sin_alpha < Drive_Motor_Control_D_LL) {
    sin_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S320>/Add' incorporates:
   *  Gain: '<S320>/Gain1'
   *  Saturate: '<S320>/Saturation'
   */
  rtb_Subtract_i = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Minus_k_idx_1)
    + sin_alpha;

  /* Sum: '<S320>/Subtract' incorporates:
   *  Constant: '<S320>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Subtract_i;

  /* Sum: '<S320>/Sum2' incorporates:
   *  Gain: '<S320>/Gain2'
   *  UnitDelay: '<S320>/Unit Delay'
   */
  rtb_Minus_k_idx_1 = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S328>/Switch2' incorporates:
   *  Constant: '<S320>/Constant'
   *  RelationalOperator: '<S328>/LowerRelop1'
   *  Sum: '<S320>/Subtract'
   */
  if (!(rtb_Minus_k_idx_1 > (1.0 - rtb_Subtract_i))) {
    /* Switch: '<S328>/Switch' incorporates:
     *  Constant: '<S320>/Constant1'
     *  RelationalOperator: '<S328>/UpperRelop'
     *  Sum: '<S320>/Subtract1'
     */
    if (rtb_Minus_k_idx_1 < (-1.0 - rtb_Subtract_i)) {
      rtb_rx_d = -1.0 - rtb_Subtract_i;
    } else {
      rtb_rx_d = rtb_Minus_k_idx_1;
    }

    /* End of Switch: '<S328>/Switch' */
  }

  /* End of Switch: '<S328>/Switch2' */

  /* Saturate: '<S320>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Minus_k_idx_1 = rtb_rx_d;
  }

  /* End of Saturate: '<S320>/Saturation1' */

  /* Sum: '<S320>/Add1' */
  sin_alpha = rtb_Subtract_i + rtb_Minus_k_idx_1;

  /* Saturate: '<S320>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S320>/Saturation2' */

  /* Sum: '<S336>/Add1' incorporates:
   *  Constant: '<S336>/Constant3'
   *  Constant: '<S336>/Constant4'
   *  Math: '<S336>/Math Function'
   *  Sum: '<S336>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Hypot_o + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S338>/Sum1' incorporates:
   *  Constant: '<S323>/Constant2'
   *  Product: '<S338>/Product'
   *  Sum: '<S338>/Sum'
   *  UnitDelay: '<S338>/Unit Delay1'
   */
  rtb_Subtract_i = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S323>/Product' incorporates:
   *  Constant: '<S323>/Constant3'
   */
  rtb_Hypot_o = rtb_Subtract_i * Steering_Motor_Control_D;

  /* Sum: '<S337>/Diff' incorporates:
   *  UnitDelay: '<S337>/UD'
   *
   * Block description for '<S337>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S337>/UD':
   *
   *  Store in Global RAM
   */
  sin_alpha = rtb_Hypot_o - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S323>/Saturation' */
  if (sin_alpha > Steering_Motor_Control_D_UL) {
    sin_alpha = Steering_Motor_Control_D_UL;
  } else if (sin_alpha < Steering_Motor_Control_D_LL) {
    sin_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S323>/Add' incorporates:
   *  Gain: '<S323>/Gain1'
   *  Saturate: '<S323>/Saturation'
   */
  rtb_Add_lw = (Steering_Motor_Control_P * rtb_thetay_g) + sin_alpha;

  /* Sum: '<S323>/Subtract' incorporates:
   *  Constant: '<S323>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_lw;

  /* Sum: '<S323>/Sum2' incorporates:
   *  Gain: '<S323>/Gain2'
   *  UnitDelay: '<S323>/Unit Delay'
   */
  rtb_Sum2_c = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S339>/Switch2' incorporates:
   *  Constant: '<S323>/Constant'
   *  RelationalOperator: '<S339>/LowerRelop1'
   *  Sum: '<S323>/Subtract'
   */
  if (!(rtb_Sum2_c > (1.0 - rtb_Add_lw))) {
    /* Sum: '<S323>/Subtract1' incorporates:
     *  Constant: '<S323>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_Add_lw;

    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S323>/Constant1'
     *  RelationalOperator: '<S339>/UpperRelop'
     *  Sum: '<S323>/Subtract1'
     */
    if (!(rtb_Sum2_c < (-1.0 - rtb_Add_lw))) {
      rtb_rx_d = rtb_Sum2_c;
    }

    /* End of Switch: '<S339>/Switch' */
  }

  /* End of Switch: '<S339>/Switch2' */

  /* Saturate: '<S323>/Saturation1' */
  if (rtb_rx_d > Steering_Motor_Control_I_UL) {
    rtb_Sum2_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_d < Steering_Motor_Control_I_LL) {
    rtb_Sum2_c = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_c = rtb_rx_d;
  }

  /* End of Saturate: '<S323>/Saturation1' */

  /* Sum: '<S323>/Add1' */
  sin_alpha = rtb_Add_lw + rtb_Sum2_c;

  /* Saturate: '<S323>/Saturation2' */
  if (sin_alpha > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (sin_alpha < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = sin_alpha;
  }

  /* End of Saturate: '<S323>/Saturation2' */

  /* Switch: '<S9>/Switch9' incorporates:
   *  Constant: '<S9>/Constant26'
   */
  if (TEST_Speaker_Speed != 0.0) {
    /* Switch: '<S9>/Switch9' */
    rtb_rx_d = TEST_Speaker_Speed;
  } else {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Lookup_n-D: '<S9>/1-D Lookup Table1'
     *  Switch: '<S6>/Switch2'
     */
    rtb_rx_d = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled3,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData, 9U);
  }

  /* End of Switch: '<S9>/Switch9' */

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   */
  UnitDelay_e = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S75>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S75>/Delay Input1'
   *
   * Block description for '<S75>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_13_Active = (((int32_T)UnitDelay_e) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   */
  rtb_Is_Absolute_Translation_g =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S76>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S76>/Delay Input1'
   *
   * Block description for '<S76>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_14_Active = (((int32_T)rtb_Is_Absolute_Translation_g) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_n));

  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    4.0);

  /* RelationalOperator: '<S78>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S78>/Delay Input1'
   *
   * Block description for '<S78>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S71>/Compare' incorporates:
   *  Constant: '<S71>/Constant'
   */
  rtb_AT_Tag_11_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S77>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S77>/Delay Input1'
   *
   * Block description for '<S77>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND2_k = (((int32_T)rtb_AT_Tag_11_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S79>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S79>/Delay Input1'
   *
   * Block description for '<S79>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
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

  /* Sum: '<S80>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Add_lw = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S80>/Add' incorporates:
   *  Gain: '<S80>/Gain'
   *  Gain: '<S80>/Gain1'
   */
  rtb_Add_l = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Add_lw);

  /* Switch: '<S80>/Switch' incorporates:
   *  Constant: '<S80>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S80>/Sum2' incorporates:
     *  Gain: '<S80>/Gain2'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_Add_lw = (Shooter_Motor_Control_I * rtb_Add_lw) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S80>/Subtract' incorporates:
     *  Constant: '<S80>/Constant'
     */
    rtb_thetay_g = 1.0 - rtb_Add_l;

    /* Switch: '<S82>/Switch2' incorporates:
     *  Constant: '<S80>/Constant'
     *  RelationalOperator: '<S82>/LowerRelop1'
     *  Sum: '<S80>/Subtract'
     */
    if (!(rtb_Add_lw > (1.0 - rtb_Add_l))) {
      /* Sum: '<S80>/Subtract1' incorporates:
       *  Constant: '<S80>/Constant1'
       */
      rtb_thetay_g = -1.0 - rtb_Add_l;

      /* Switch: '<S82>/Switch' incorporates:
       *  Constant: '<S80>/Constant1'
       *  RelationalOperator: '<S82>/UpperRelop'
       *  Sum: '<S80>/Subtract1'
       */
      if (!(rtb_Add_lw < (-1.0 - rtb_Add_l))) {
        rtb_thetay_g = rtb_Add_lw;
      }

      /* End of Switch: '<S82>/Switch' */
    }

    /* End of Switch: '<S82>/Switch2' */

    /* Saturate: '<S80>/Saturation1' */
    if (rtb_thetay_g > Shooter_Motor_Control_I_UL) {
      rtb_Add_lw = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_g < Shooter_Motor_Control_I_LL) {
      rtb_Add_lw = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_lw = rtb_thetay_g;
    }

    /* End of Saturate: '<S80>/Saturation1' */
  } else {
    rtb_Add_lw = 0.0;
  }

  /* End of Switch: '<S80>/Switch' */

  /* Switch: '<S9>/Switch4' incorporates:
   *  Switch: '<S9>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S9>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_rx_d;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S80>/Add1' incorporates:
     *  Switch: '<S9>/Switch'
     */
    sin_alpha = rtb_Add_l + rtb_Add_lw;

    /* Saturate: '<S80>/Saturation2' incorporates:
     *  Switch: '<S9>/Switch'
     */
    if (sin_alpha > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (sin_alpha < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = sin_alpha;
    }

    /* End of Saturate: '<S80>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S9>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S9>/Switch4' */

  /* Sum: '<S81>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Add_l = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S81>/Add' incorporates:
   *  Gain: '<S81>/Gain'
   *  Gain: '<S81>/Gain1'
   */
  rtb_thetay_g = (Shooter_Motor_Control_FF *
                  Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Add_l);

  /* Switch: '<S81>/Switch' incorporates:
   *  Constant: '<S81>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S81>/Sum2' incorporates:
     *  Gain: '<S81>/Gain2'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_Add_l = (Shooter_Motor_Control_I * rtb_Add_l) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S81>/Subtract' incorporates:
     *  Constant: '<S81>/Constant'
     */
    rtb_thetay_f = 1.0 - rtb_thetay_g;

    /* Switch: '<S83>/Switch2' incorporates:
     *  Constant: '<S81>/Constant'
     *  RelationalOperator: '<S83>/LowerRelop1'
     *  Sum: '<S81>/Subtract'
     */
    if (!(rtb_Add_l > (1.0 - rtb_thetay_g))) {
      /* Sum: '<S81>/Subtract1' incorporates:
       *  Constant: '<S81>/Constant1'
       */
      rtb_thetay_f = -1.0 - rtb_thetay_g;

      /* Switch: '<S83>/Switch' incorporates:
       *  Constant: '<S81>/Constant1'
       *  RelationalOperator: '<S83>/UpperRelop'
       *  Sum: '<S81>/Subtract1'
       */
      if (!(rtb_Add_l < (-1.0 - rtb_thetay_g))) {
        rtb_thetay_f = rtb_Add_l;
      }

      /* End of Switch: '<S83>/Switch' */
    }

    /* End of Switch: '<S83>/Switch2' */

    /* Saturate: '<S81>/Saturation1' */
    if (rtb_thetay_f > Shooter_Motor_Control_I_UL) {
      rtb_Add_l = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_f < Shooter_Motor_Control_I_LL) {
      rtb_Add_l = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_l = rtb_thetay_f;
    }

    /* End of Saturate: '<S81>/Saturation1' */
  } else {
    rtb_Add_l = 0.0;
  }

  /* End of Switch: '<S81>/Switch' */

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
      /* Sum: '<S81>/Add1' incorporates:
       *  Switch: '<S9>/Switch1'
       */
      sin_alpha = rtb_thetay_g + rtb_Add_l;

      /* Saturate: '<S81>/Saturation2' incorporates:
       *  Switch: '<S9>/Switch1'
       */
      if (sin_alpha > 1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
      } else if (sin_alpha < -1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
      } else {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = sin_alpha;
      }

      /* End of Saturate: '<S81>/Saturation2' */
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
   *  Switch: '<S6>/Switch2'
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
   *  Switch: '<S6>/Switch2'
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
   *  Switch: '<S6>/Switch2'
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

  /* Sum: '<S151>/Add' incorporates:
   *  Constant: '<S151>/Constant24'
   */
  rtb_thetay_g = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                  Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S151>/Sqrt' incorporates:
   *  Math: '<S151>/Math Function'
   *  Sum: '<S151>/Subtract'
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

  /* Sqrt: '<S155>/Sqrt' incorporates:
   *  Constant: '<S155>/Constant24'
   *  Math: '<S155>/Math Function'
   *  Sum: '<S155>/Add'
   *  Sum: '<S155>/Subtract'
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
  y = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (y - 56058.355625000004) / 331.17548218429454;
  rtb_thetay = y - (d * d);
  if (rtb_thetay >= 0.0) {
    y = sqrt(rtb_thetay);
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
  y = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + y) / (2.0 * d);
  rtb_thetay = y - (d * d);
  if (rtb_thetay >= 0.0) {
    y = sqrt(rtb_thetay);
  } else {
    y = 0.0;
  }

  rtb_thetay = atan((Top_Front_Pivot_y - 25.4) / rtb_thetay_g);
  cos_alpha = cos(rtb_thetay);
  sin_alpha = sin(rtb_thetay);
  rtb_thetay = (d * cos_alpha) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_thetay_g = atan((Top_Front_Pivot_y - d) / (rtb_thetay_g - rtb_thetay)) -
    -0.16186298985390718;
  y = cos(rtb_thetay_g);
  cos_alpha = sin(rtb_thetay_g);
  Top_Front_Pivot_y = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((rtb_thetay - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
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
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
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
  rtb_thetay = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (rtb_thetay >= 0.0) {
    rtb_thetay_f = ((rtb_rx_d * 42.875) + ((-rtb_thetay_g) * -76.0)) + (sqrt
      (rtb_thetay) - 50.027);
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
  rtb_thetay = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_rx_d));
  rtb_thetay_g = ((288.925 / rtb_rx_d) * rtb_Minus_n[1]) - 88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (rtb_thetay * rtb_thetay) + (rtb_thetay_g
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

  /* Switch: '<S179>/Init' incorporates:
   *  UnitDelay: '<S179>/FixPt Unit Delay1'
   *  UnitDelay: '<S179>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_thetay_g = rtb_rx_d;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S179>/Init' */

  /* Sum: '<S177>/Sum1' */
  rtb_rx_d -= rtb_thetay_g;

  /* Switch: '<S178>/Switch2' incorporates:
   *  Constant: '<S163>/Constant1'
   *  Constant: '<S163>/Constant3'
   *  RelationalOperator: '<S178>/LowerRelop1'
   *  RelationalOperator: '<S178>/UpperRelop'
   *  Switch: '<S178>/Switch'
   */
  if (rtb_rx_d > AA_Position_Back_Inc_RL) {
    rtb_rx_d = AA_Position_Back_Inc_RL;
  } else if (rtb_rx_d < AA_Position_Back_Dec_RL) {
    /* Switch: '<S178>/Switch' incorporates:
     *  Constant: '<S163>/Constant1'
     */
    rtb_rx_d = AA_Position_Back_Dec_RL;
  }

  /* End of Switch: '<S178>/Switch2' */

  /* Sum: '<S177>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_rx_d + rtb_thetay_g;

  /* Sum: '<S159>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S159>/Gain1' */
  rtb_rx_d = AA_Prop_Gain * rtb_thetay_g;

  /* RelationalOperator: '<S153>/Compare' incorporates:
   *  Constant: '<S153>/Constant'
   */
  rtb_AT_Tag_14_Active = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S159>/Switch' incorporates:
   *  Constant: '<S159>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S159>/Constant3'
     *  UnitDelay: '<S168>/Delay Input1'
     *
     * Block description for '<S168>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      rtb_Switch6 = AA_Integral_IC;
    } else {
      /* Sum: '<S159>/Sum2' incorporates:
       *  Gain: '<S159>/Gain2'
       *  UnitDelay: '<S159>/Unit Delay'
       */
      rtb_thetay_g = (AA_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S159>/Subtract' incorporates:
       *  Constant: '<S159>/Constant'
       */
      rtb_Switch6 = AA_TC_UL - rtb_rx_d;

      /* Switch: '<S169>/Switch2' incorporates:
       *  RelationalOperator: '<S169>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_Switch6)) {
        /* Sum: '<S159>/Subtract1' incorporates:
         *  Constant: '<S159>/Constant1'
         */
        rtb_Switch6 = AA_TC_LL - rtb_rx_d;

        /* Switch: '<S169>/Switch' incorporates:
         *  RelationalOperator: '<S169>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_Switch6)) {
          rtb_Switch6 = rtb_thetay_g;
        }

        /* End of Switch: '<S169>/Switch' */
      }

      /* End of Switch: '<S169>/Switch2' */

      /* Saturate: '<S159>/Saturation1' */
      if (rtb_Switch6 > AA_Integral_UL) {
        rtb_Switch6 = AA_Integral_UL;
      } else if (rtb_Switch6 < AA_Integral_LL) {
        rtb_Switch6 = AA_Integral_LL;
      }

      /* End of Saturate: '<S159>/Saturation1' */
    }

    /* End of Switch: '<S159>/Switch1' */
  } else {
    rtb_Switch6 = 0.0;
  }

  /* End of Switch: '<S159>/Switch' */

  /* Switch: '<S15>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S159>/Add1' */
    sin_alpha = rtb_rx_d + rtb_Switch6;

    /* Saturate: '<S159>/Saturation2' */
    if (sin_alpha > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (sin_alpha < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = sin_alpha;
    }

    /* End of Saturate: '<S159>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch1' */

  /* Switch: '<S162>/Switch' incorporates:
   *  Constant: '<S15>/Constant28'
   *  Constant: '<S162>/Constant'
   *  Constant: '<S162>/Constant2'
   *  MATLAB Function: '<S15>/Back_AA_To_Extentions'
   *  RelationalOperator: '<S162>/Relational Operator'
   *  UnitDelay: '<S162>/Unit Delay'
   */
  if (Code_Gen_Model_B.Desired_Back_Lower_Dist < 169.375) {
    Top_Front_Pivot_y = 2.0;
  } else {
    Top_Front_Pivot_y = 1.0;
  }

  /* End of Switch: '<S162>/Switch' */

  /* Product: '<S162>/Product' incorporates:
   *  Constant: '<S162>/Constant3'
   */
  rtb_thetay_g = AA_Position_Back_Inc_RL * Top_Front_Pivot_y;

  /* Switch: '<S176>/Init' incorporates:
   *  MATLAB Function: '<S15>/Back_AA_To_Extentions'
   *  UnitDelay: '<S176>/FixPt Unit Delay1'
   *  UnitDelay: '<S176>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l5 != 0) {
    rtb_rx_d = rtb_thetay_f;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S176>/Init' */

  /* Sum: '<S174>/Sum1' incorporates:
   *  MATLAB Function: '<S15>/Back_AA_To_Extentions'
   */
  rtb_thetay_f -= rtb_rx_d;

  /* Switch: '<S175>/Switch2' incorporates:
   *  RelationalOperator: '<S175>/LowerRelop1'
   */
  if (!(rtb_thetay_f > rtb_thetay_g)) {
    /* Product: '<S162>/Product1' incorporates:
     *  Constant: '<S162>/Constant1'
     */
    rtb_thetay_g = AA_Position_Back_Dec_RL * Top_Front_Pivot_y;

    /* Switch: '<S175>/Switch' incorporates:
     *  RelationalOperator: '<S175>/UpperRelop'
     */
    if (!(rtb_thetay_f < rtb_thetay_g)) {
      rtb_thetay_g = rtb_thetay_f;
    }

    /* End of Switch: '<S175>/Switch' */
  }

  /* End of Switch: '<S175>/Switch2' */

  /* Sum: '<S174>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_thetay_g + rtb_rx_d;

  /* Sum: '<S160>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S160>/Gain1' */
  rtb_rx_d = AA_Prop_Gain * rtb_thetay_g;

  /* Switch: '<S160>/Switch' incorporates:
   *  Constant: '<S160>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S160>/Constant3'
     *  UnitDelay: '<S170>/Delay Input1'
     *
     * Block description for '<S170>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      Top_Front_Pivot_y = AA_Integral_IC;
    } else {
      /* Sum: '<S160>/Sum2' incorporates:
       *  Gain: '<S160>/Gain2'
       *  UnitDelay: '<S160>/Unit Delay'
       */
      rtb_thetay_g = (AA_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c;

      /* Sum: '<S160>/Subtract' incorporates:
       *  Constant: '<S160>/Constant'
       */
      rtb_thetay_f = AA_TC_UL - rtb_rx_d;

      /* Switch: '<S171>/Switch2' incorporates:
       *  RelationalOperator: '<S171>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S160>/Subtract1' incorporates:
         *  Constant: '<S160>/Constant1'
         */
        rtb_thetay_f = AA_TC_LL - rtb_rx_d;

        /* Switch: '<S171>/Switch' incorporates:
         *  RelationalOperator: '<S171>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S171>/Switch' */
      }

      /* End of Switch: '<S171>/Switch2' */

      /* Saturate: '<S160>/Saturation1' */
      if (rtb_thetay_f > AA_Integral_UL) {
        Top_Front_Pivot_y = AA_Integral_UL;
      } else if (rtb_thetay_f < AA_Integral_LL) {
        Top_Front_Pivot_y = AA_Integral_LL;
      } else {
        Top_Front_Pivot_y = rtb_thetay_f;
      }

      /* End of Saturate: '<S160>/Saturation1' */
    }

    /* End of Switch: '<S160>/Switch1' */
  } else {
    Top_Front_Pivot_y = 0.0;
  }

  /* End of Switch: '<S160>/Switch' */

  /* Switch: '<S15>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S160>/Add1' */
    sin_alpha = rtb_rx_d + Top_Front_Pivot_y;

    /* Saturate: '<S160>/Saturation2' */
    if (sin_alpha > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (sin_alpha < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = sin_alpha;
    }

    /* End of Saturate: '<S160>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch' */

  /* Sum: '<S154>/Subtract1' incorporates:
   *  Constant: '<S154>/Constant24'
   *  Math: '<S154>/Math Function'
   *  Sqrt: '<S154>/Sqrt'
   *  Sum: '<S154>/Subtract'
   */
  rtb_thetay_g = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                       Code_Gen_Model_B.Desired_Front_AA_Length) -
                      Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S154>/Saturation' */
  if (rtb_thetay_g > Front_AA_Max_Ext) {
    rtb_thetay_g = Front_AA_Max_Ext;
  } else if (rtb_thetay_g < Front_AA_Min_Ext) {
    rtb_thetay_g = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S154>/Saturation' */

  /* Switch: '<S185>/Init' incorporates:
   *  UnitDelay: '<S185>/FixPt Unit Delay1'
   *  UnitDelay: '<S185>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_rx_d = rtb_thetay_g;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S185>/Init' */

  /* Sum: '<S183>/Sum1' */
  rtb_thetay_g -= rtb_rx_d;

  /* Switch: '<S184>/Switch2' incorporates:
   *  Constant: '<S165>/Constant1'
   *  Constant: '<S165>/Constant3'
   *  RelationalOperator: '<S184>/LowerRelop1'
   *  RelationalOperator: '<S184>/UpperRelop'
   *  Switch: '<S184>/Switch'
   */
  if (rtb_thetay_g > AA_Position_Front_Inc_RL) {
    rtb_thetay_g = AA_Position_Front_Inc_RL;
  } else if (rtb_thetay_g < AA_Position_Front_Dec_RL) {
    /* Switch: '<S184>/Switch' incorporates:
     *  Constant: '<S165>/Constant1'
     */
    rtb_thetay_g = AA_Position_Front_Dec_RL;
  }

  /* End of Switch: '<S184>/Switch2' */

  /* Sum: '<S183>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_thetay_g + rtb_rx_d;

  /* Sum: '<S161>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S161>/Gain1' */
  rtb_rx_d = AA_Prop_Gain * rtb_thetay_g;

  /* Switch: '<S161>/Switch' incorporates:
   *  Constant: '<S161>/Constant2'
   */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S161>/Constant3'
     *  UnitDelay: '<S172>/Delay Input1'
     *
     * Block description for '<S172>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      d = AA_Integral_IC;
    } else {
      /* Sum: '<S161>/Sum2' incorporates:
       *  Gain: '<S161>/Gain2'
       *  UnitDelay: '<S161>/Unit Delay'
       */
      rtb_thetay_g = (AA_Integral_Gain * rtb_thetay_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S161>/Subtract' incorporates:
       *  Constant: '<S161>/Constant'
       */
      rtb_thetay_f = AA_TC_UL - rtb_rx_d;

      /* Switch: '<S173>/Switch2' incorporates:
       *  RelationalOperator: '<S173>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S161>/Subtract1' incorporates:
         *  Constant: '<S161>/Constant1'
         */
        rtb_thetay_f = AA_TC_LL - rtb_rx_d;

        /* Switch: '<S173>/Switch' incorporates:
         *  RelationalOperator: '<S173>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S173>/Switch' */
      }

      /* End of Switch: '<S173>/Switch2' */

      /* Saturate: '<S161>/Saturation1' */
      if (rtb_thetay_f > AA_Integral_UL) {
        d = AA_Integral_UL;
      } else if (rtb_thetay_f < AA_Integral_LL) {
        d = AA_Integral_LL;
      } else {
        d = rtb_thetay_f;
      }

      /* End of Saturate: '<S161>/Saturation1' */
    }

    /* End of Switch: '<S161>/Switch1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S161>/Switch' */

  /* Switch: '<S15>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S161>/Add1' */
    sin_alpha = rtb_rx_d + d;

    /* Saturate: '<S161>/Saturation2' */
    if (sin_alpha > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (sin_alpha < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = sin_alpha;
    }

    /* End of Saturate: '<S161>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch2' */

  /* Switch: '<S182>/Init' incorporates:
   *  UnitDelay: '<S182>/FixPt Unit Delay1'
   *  UnitDelay: '<S182>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_thetay_g = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S182>/Init' */

  /* Sum: '<S180>/Sum1' */
  rtb_rx_d = Code_Gen_Model_B.Desired_BS_Length - rtb_thetay_g;

  /* Switch: '<S181>/Switch2' incorporates:
   *  Constant: '<S164>/Constant1'
   *  Constant: '<S164>/Constant3'
   *  RelationalOperator: '<S181>/LowerRelop1'
   *  RelationalOperator: '<S181>/UpperRelop'
   *  Switch: '<S181>/Switch'
   */
  if (rtb_rx_d > BS_Position_Inc_RL) {
    rtb_rx_d = BS_Position_Inc_RL;
  } else if (rtb_rx_d < BS_Position_Dec_RL) {
    /* Switch: '<S181>/Switch' incorporates:
     *  Constant: '<S164>/Constant1'
     */
    rtb_rx_d = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S181>/Switch2' */

  /* Sum: '<S180>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_rx_d + rtb_thetay_g;

  /* Sum: '<S158>/Sum' */
  rtb_rx_d = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S167>/Sum1' incorporates:
   *  Constant: '<S158>/Constant2'
   *  Product: '<S167>/Product'
   *  Sum: '<S167>/Sum'
   *  UnitDelay: '<S167>/Unit Delay1'
   */
  y = ((rtb_rx_d - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S158>/Product' incorporates:
   *  Constant: '<S158>/Constant3'
   */
  cos_alpha = y * BS_Deriv_Gain;

  /* Switch: '<S15>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S8>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S166>/Diff' incorporates:
     *  UnitDelay: '<S166>/UD'
     *
     * Block description for '<S166>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S166>/UD':
     *
     *  Store in Global RAM
     */
    sin_alpha = cos_alpha - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S158>/Saturation' */
    if (sin_alpha > BS_Deriv_UL) {
      sin_alpha = BS_Deriv_UL;
    } else if (sin_alpha < BS_Deriv_LL) {
      sin_alpha = BS_Deriv_LL;
    }

    /* Sum: '<S158>/Add' incorporates:
     *  Gain: '<S158>/Gain1'
     *  Saturate: '<S158>/Saturation'
     */
    sin_alpha += BS_Prop_Gain * rtb_rx_d;

    /* Saturate: '<S158>/Saturation2' */
    if (sin_alpha > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (sin_alpha < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = sin_alpha;
    }

    /* End of Saturate: '<S158>/Saturation2' */
  }

  /* End of Switch: '<S15>/Switch3' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  Switch: '<S4>/Switch1'
   */
  if (UnitDelay > 0.0) {
    /* Outport: '<Root>/Climber_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_DutyCycle_Pos;
  } else if (UnitDelay < 0.0) {
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
  UnitDelay = rtb_UnitDelay1_gi + rtb_thetay;

  /* Trigonometry: '<S13>/Trigonometric Function1' */
  rtb_rx_d = sin(UnitDelay);

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S13>/Trigonometric Function'
   */
  Rot_Mat_idx_0 = cos(UnitDelay);
  sin_alpha = rtb_rx_d;

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus'
   */
  Rot_Mat_idx_2 = -rtb_rx_d;

  /* Sum: '<S138>/Diff' incorporates:
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
  rtb_thetay_g = UnitDelay - Code_Gen_Model_DW.UD_DSTATE_d;

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
  rtb_thetay_g = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.037290702116950625;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S140>/Diff'
   *  UnitDelay: '<S140>/UD'
   *
   * Block description for '<S140>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S140>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_f = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Product: '<S13>/Product2' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S141>/Diff'
   *  UnitDelay: '<S141>/UD'
   *
   * Block description for '<S141>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  rtb_UnitDelay1_gi = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                       Code_Gen_Model_DW.UD_DSTATE_ic) * 0.037290702116950625;

  /* Product: '<S13>/Product3' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S142>/Diff'
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
  rtb_thetay = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_ce) * 0.037290702116950625;

  /* SignalConversion generated from: '<S13>/Product7' incorporates:
   *  Fcn: '<S143>/r->x'
   *  Fcn: '<S143>/theta->y'
   *  Fcn: '<S144>/r->x'
   *  Fcn: '<S144>/theta->y'
   *  Fcn: '<S145>/r->x'
   *  Fcn: '<S145>/theta->y'
   *  Fcn: '<S146>/r->x'
   *  Fcn: '<S146>/theta->y'
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
    for (s214_iter = 0; s214_iter < 8; s214_iter++) {
      rtb_thetay += Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_thetay_n[s214_iter];
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
  Code_Gen_Model_B.Product6[1] = (sin_alpha * rtb_UnitDelay1_gi) +
    (Rot_Mat_idx_0 * rtb_rx_d);

  /* Outputs for Enabled SubSystem: '<S104>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S135>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S135>/D[k]*u[k]' incorporates:
     *  Constant: '<S84>/D'
     */
    rtb_UnitDelay1_gi = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S135>/Sum' incorporates:
     *  Constant: '<S84>/C'
     *  Delay: '<S84>/MemoryX'
     *  Product: '<S135>/C[k]*xhat[k|k-1]'
     *  Product: '<S135>/D[k]*u[k]'
     *  Sum: '<S135>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_UnitDelay1_gi;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_UnitDelay1_gi;

    /* Product: '<S135>/Product3' incorporates:
     *  Constant: '<S85>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S135>/Product3' incorporates:
     *  Outport: '<S135>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S104>/MeasurementUpdate' */

  /* RelationalOperator: '<S148>/Compare' incorporates:
   *  Constant: '<S147>/Constant'
   *  Constant: '<S148>/Constant'
   */
  rtb_AT_Tag_13_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S147>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S147>/Switch' incorporates:
   *  UnitDelay: '<S147>/Unit Delay'
   */
  if (rtb_AT_Tag_13_Active) {
    rtb_UnitDelay1_gi = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Sum: '<S147>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_UnitDelay1_gi;

  /* Gain: '<S147>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S147>/Switch1' incorporates:
   *  UnitDelay: '<S147>/Unit Delay1'
   */
  if (rtb_AT_Tag_13_Active) {
    rtb_rx_d = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_rx_d = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S147>/Switch1' */

  /* Sum: '<S147>/Subtract1' */
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

  /* Update for UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_OR7;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' incorporates:
     *  Bias: '<S214>/Bias'
     *  Merge: '<S188>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' incorporates:
     *  Bias: '<S214>/Bias'
     *  Merge: '<S188>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S84>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S104>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S84>/A'
   *  Delay: '<S84>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S84>/MemoryX' incorporates:
   *  Constant: '<S84>/B'
   *  Product: '<S104>/A[k]*xhat[k|k-1]'
   *  Product: '<S104>/B[k]*u[k]'
   *  Sum: '<S104>/Add'
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

  /* Update for UnitDelay: '<S351>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S351>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S365>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S364>/UD'
   *
   * Block description for '<S364>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_nj;

  /* Update for UnitDelay: '<S362>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S360>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S360>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S264>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Switch2;

  /* Update for UnitDelay: '<S263>/UD'
   *
   * Block description for '<S263>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Switch4_g;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Switch1_p;

  /* Update for UnitDelay: '<S275>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Switch2_o;

  /* Update for UnitDelay: '<S274>/UD'
   *
   * Block description for '<S274>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S260>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Steer_Joystick_X_Rel_Mod;

  /* Update for UnitDelay: '<S285>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_e3;

  /* Update for UnitDelay: '<S284>/UD'
   *
   * Block description for '<S284>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S278>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S296>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_g4;

  /* Update for UnitDelay: '<S295>/UD'
   *
   * Block description for '<S295>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_ed;

  /* Update for UnitDelay: '<S281>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_n;

  /* Update for UnitDelay: '<S306>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S305>/UD'
   *
   * Block description for '<S305>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_kh;

  /* Update for UnitDelay: '<S299>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S317>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_rx_j;

  /* Update for UnitDelay: '<S316>/UD'
   *
   * Block description for '<S316>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S302>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_inz;

  /* Update for UnitDelay: '<S327>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Add_f1;

  /* Update for UnitDelay: '<S326>/UD'
   *
   * Block description for '<S326>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Minus_k_idx_0;

  /* Update for UnitDelay: '<S320>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S338>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Subtract_i;

  /* Update for UnitDelay: '<S337>/UD'
   *
   * Block description for '<S337>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Hypot_o;

  /* Update for UnitDelay: '<S323>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_c;

  /* Update for UnitDelay: '<S75>/Delay Input1'
   *
   * Block description for '<S75>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay_e;

  /* Update for UnitDelay: '<S76>/Delay Input1'
   *
   * Block description for '<S76>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S78>/Delay Input1'
   *
   * Block description for '<S78>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S77>/Delay Input1'
   *
   * Block description for '<S77>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S79>/Delay Input1'
   *
   * Block description for '<S79>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S80>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Add_lw;

  /* Update for UnitDelay: '<S81>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Add_l;

  /* Update for UnitDelay: '<S179>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S179>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S168>/Delay Input1'
   *
   * Block description for '<S168>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S159>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Switch6;

  /* Update for UnitDelay: '<S176>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S176>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l5 = 0U;

  /* Update for UnitDelay: '<S170>/Delay Input1'
   *
   * Block description for '<S170>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S160>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = Top_Front_Pivot_y;

  /* Update for UnitDelay: '<S185>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S185>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S172>/Delay Input1'
   *
   * Block description for '<S172>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S161>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = d;

  /* Update for UnitDelay: '<S182>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S182>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S167>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = y;

  /* Update for UnitDelay: '<S166>/UD'
   *
   * Block description for '<S166>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = cos_alpha;

  /* Update for UnitDelay: '<S138>/UD'
   *
   * Block description for '<S138>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = UnitDelay;

  /* Update for UnitDelay: '<S139>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S140>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S140>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S141>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S142>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S147>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S147>/Unit Delay1' */
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

    /* InitializeConditions for Delay: '<S84>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S351>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S7>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for UnitDelay: '<S360>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S179>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S176>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l5 = 1U;

    /* InitializeConditions for UnitDelay: '<S185>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S182>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S28>/Chart' */
    Code_Gen_Model_B.CurrentPriorityIndex = 1.0;

    /* End of SystemInitialize for SubSystem: '<S1>/Autonomous' */

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S420>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S16>/Spline Path Following Enabled' */
    /* Start for If: '<S192>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S188>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S192>/Robot_Index_Is_Valid' */
    /* Start for If: '<S195>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S195>/Circle_Check_Valid' */
    /* Start for If: '<S197>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S195>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S192>/Robot_Index_Is_Valid' */
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

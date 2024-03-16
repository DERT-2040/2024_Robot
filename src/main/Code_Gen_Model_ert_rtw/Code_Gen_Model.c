/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.162
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Mar 16 14:49:27 2024
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
                                        * Referenced by: '<S394>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S394>/Constant11'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S394>/Constant10'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S394>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S394>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S394>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S7>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S7>/Constant1'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S394>/Constant14'
                                        */
real_T AT_Tag_6_Yaw_Offset = -3.0;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S394>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S7>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T AT_Target_Tag_11_X = 12.6667;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S394>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.3934;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S394>/Constant26'
                                        */
real_T AT_Target_Tag_12_X = 12.6667;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S394>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.8182;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S394>/Constant3'
                                        */
real_T AT_Target_Tag_13_X = 9.6962;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S394>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S394>/Constant21'
                                        */
real_T AT_Target_Tag_14_X = 6.8448;    /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S394>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S394>/Constant23'
                                        */
real_T AT_Target_Tag_15_X = 3.8793;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S394>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.8182;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S394>/Constant24'
                                        */
real_T AT_Target_Tag_16_X = 3.8793;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S394>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.3934;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S394>/Constant25'
                                        */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S394>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.6802;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S394>/Constant28'
                                        */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S394>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.6802;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S394>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S397>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = -0.0006;  /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S396>/Constant17'
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
real_T BS_Position_Dec_RL = -30.0;     /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S166>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 30.0;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S166>/Constant3'
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
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S407>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S403>/Constant'
                                        *   '<S403>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S407>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S403>/Constant1'
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
                                        * Referenced by: '<S342>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S258>/Constant3'
                                        *   '<S279>/Constant3'
                                        *   '<S300>/Constant3'
                                        *   '<S321>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S258>/Constant2'
                                   *   '<S279>/Constant2'
                                   *   '<S300>/Constant2'
                                   *   '<S321>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S258>/Saturation'
                                        *   '<S279>/Saturation'
                                        *   '<S300>/Saturation'
                                        *   '<S321>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S258>/Saturation'
                                        *   '<S279>/Saturation'
                                        *   '<S300>/Saturation'
                                        *   '<S321>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016667;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S258>/Gain'
                                            *   '<S279>/Gain'
                                            *   '<S300>/Gain'
                                            *   '<S321>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S258>/Gain2'
                                        *   '<S279>/Gain2'
                                        *   '<S300>/Gain2'
                                        *   '<S321>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S258>/Saturation1'
                                        *   '<S279>/Saturation1'
                                        *   '<S300>/Saturation1'
                                        *   '<S321>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S258>/Saturation1'
                                        *   '<S279>/Saturation1'
                                        *   '<S300>/Saturation1'
                                        *   '<S321>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S258>/Gain1'
                                        *   '<S279>/Gain1'
                                        *   '<S300>/Gain1'
                                        *   '<S321>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S263>/Constant'
                            *   '<S284>/Constant'
                            *   '<S305>/Constant'
                            *   '<S326>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S28>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S158>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S158>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S37>/Constant'
                                           *   '<S39>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S38>/Constant'
                                          *   '<S40>/Constant'
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
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S14>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S150>/Constant'
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
real_T Servo_Store_Offset = 0.5;       /* Variable: Servo_Store_Offset
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
                                           *   '<S83>/Gain'
                                           *   '<S84>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S83>/Gain2'
                                         *   '<S84>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S83>/Saturation1'
                                          *   '<S84>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S83>/Saturation1'
                                         *   '<S84>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S83>/Gain1'
                                         *   '<S84>/Gain1'
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
                          * Referenced by: '<S243>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S243>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S190>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S203>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S243>/Constant3'
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
                                         * Referenced by: '<S363>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S363>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S363>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S363>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S362>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S363>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S363>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S363>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S363>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -3.0;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S363>/Constant1'
                                   *   '<S363>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 3.0;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S363>/Constant'
                                   *   '<S363>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S353>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S353>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S353>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 1.0;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S353>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -10.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S353>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 10.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S353>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S261>/Constant3'
                                        *   '<S282>/Constant3'
                                        *   '<S303>/Constant3'
                                        *   '<S324>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S261>/Constant2'
                                *   '<S282>/Constant2'
                                *   '<S303>/Constant2'
                                *   '<S324>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S261>/Saturation'
                                           *   '<S282>/Saturation'
                                           *   '<S303>/Saturation'
                                           *   '<S324>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S261>/Saturation'
                                          *   '<S282>/Saturation'
                                          *   '<S303>/Saturation'
                                          *   '<S324>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S261>/Gain2'
                                         *   '<S282>/Gain2'
                                         *   '<S303>/Gain2'
                                         *   '<S324>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S261>/Saturation1'
                                             *   '<S282>/Saturation1'
                                             *   '<S303>/Saturation1'
                                             *   '<S324>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S261>/Saturation1'
                                            *   '<S282>/Saturation1'
                                            *   '<S303>/Saturation1'
                                            *   '<S324>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S261>/Gain1'
                                        *   '<S282>/Gain1'
                                        *   '<S303>/Gain1'
                                        *   '<S324>/Gain1'
                                        */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S396>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S396>/Constant1'
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
                        * Referenced by: '<S341>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S341>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S341>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S341>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S341>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S341>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S397>/Gain'
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
  Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_AngleArms;
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
  real_T rtb_Selector1_c4[30];
  real_T rtb_Assignment[24];
  real_T rtb_Selector4[24];
  real_T rtb_Ref_Poses[20];
  real_T rtb_thetay_n[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T Rot_Mat_idx_0;
  real_T Rot_Mat_idx_1;
  real_T Rot_Mat_idx_2;
  real_T Top_Front_Pivot_y;
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_f1;
  real_T rtb_Add_fn;
  real_T rtb_Add_kv;
  real_T rtb_Add_l;
  real_T rtb_Add_lw;
  real_T rtb_Add_oh;
  real_T rtb_Add_pd;
  real_T rtb_Climber_Cmd_Direction;
  real_T rtb_Gyro_Angle_Adjustment;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_o;
  real_T rtb_Init;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
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
  real_T rtb_Switch1_ha;
  real_T rtb_Switch1_nj;
  real_T rtb_Switch2;
  real_T rtb_Switch4_g;
  real_T rtb_Switch6;
  real_T rtb_rx_j;
  real_T rtb_thetay;
  real_T rtb_thetay_f;
  real_T rtb_thetay_g;
  real_T y;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s215_iter;
  uint16_T s240_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  uint8_T rtb_GameState;
  boolean_T FixPtRelationalOperator_c;
  boolean_T FixPtRelationalOperator_i;
  boolean_T FixPtRelationalOperator_o;
  boolean_T UnitDelay;
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
  boolean_T rtb_OR7;

  /* Switch: '<S9>/Switch9' incorporates:
   *  Constant: '<S54>/Constant'
   *  Constant: '<S55>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  Logic: '<S9>/OR4'
   *  Logic: '<S9>/OR6'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  Switch: '<S9>/Switch10'
   */
  if ((Code_Gen_Model_U.Joystick_Left_B7 != 0.0) ||
      (Code_Gen_Model_U.Joystick_Right_B7 != 0.0)) {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Constant: '<S9>/Constant10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 1.0;
  } else if ((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B8 != 0.0)) {
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

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
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

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S46>/Constant'
   *  Constant: '<S57>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  Constant: '<S60>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Inport: '<Root>/Gamepad_B4_Y'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Gamepad_Start'
   *  Inport: '<Root>/Joystick_Left_B14'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Inport: '<Root>/Joystick_Right_B14'
   *  Logic: '<S9>/OR1'
   *  Logic: '<S9>/OR2'
   *  Logic: '<S9>/OR8'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
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
  } else if (((Code_Gen_Model_U.Gamepad_B1_A != 0.0) ||
              (Code_Gen_Model_U.Joystick_Left_B14 != 0.0)) ||
             (Code_Gen_Model_U.Joystick_Right_B14 != 0.0)) {
    /* Switch: '<S9>/Switch11' incorporates:
     *  Constant: '<S9>/Constant13'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 6.0;
  } else if (Code_Gen_Model_U.Gamepad_Start != 0.0) {
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
   *  Constant: '<S41>/Constant'
   *  Constant: '<S43>/Constant'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  UnitDelay: '<S15>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S9>/Switch4' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Logic: '<S9>/OR'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S68>/FixPt Relational Operator'
   *  Switch: '<S9>/Switch5'
   *  Switch: '<S9>/Switch6'
   *  Switch: '<S9>/Switch7'
   *  UnitDelay: '<S68>/Delay Input1'
   *
   * Block description for '<S68>/Delay Input1':
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
    /* Switch: '<S9>/Switch7' incorporates:
     *  Constant: '<S9>/Constant8'
     *  Switch: '<S9>/Switch4'
     *  Switch: '<S9>/Switch5'
     *  Switch: '<S9>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  }

  /* End of Switch: '<S9>/Switch4' */

  /* Reshape: '<S87>/Reshapey' incorporates:
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

  /* Delay: '<S87>/MemoryX' incorporates:
   *  Constant: '<S87>/X0'
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

  /* Outputs for Enabled SubSystem: '<S114>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S140>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S140>/Add1' incorporates:
     *  Constant: '<S87>/C'
     *  Delay: '<S87>/MemoryX'
     *  Product: '<S140>/Product'
     */
    rtb_Climber_Cmd_Direction = rtb_Reshapey_idx_0 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_nj = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S140>/Product2' incorporates:
     *  Constant: '<S88>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Climber_Cmd_Direction) + (5.9896845167210271E-17 * rtb_Switch1_nj);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Climber_Cmd_Direction) + (0.095124921972503981 * rtb_Switch1_nj);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S140>/Product2' incorporates:
     *  Outport: '<S140>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S114>/Enabled Subsystem' */

  /* Sum: '<S114>/Add' incorporates:
   *  Delay: '<S87>/MemoryX'
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
    rtb_Is_Absolute_Steering = true;

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
      Code_Gen_Model_B.CurrentPriorityIndex = 1.0;
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
    /* Selector: '<S29>/Selector1' incorporates:
     *  Constant: '<S29>/Constant9'
     *  Inport: '<Root>/Auto_ID'
     */
    for (i = 0; i < 3; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s215_iter = (10 * i) + rtb_Num_Segments;
        rtb_Selector1_c4[s215_iter] = Code_Gen_Model_ConstInitP.Constant9_Value
          [((((int32_T)Code_Gen_Model_U.Auto_ID) - 1) * 30) + s215_iter];
      }
    }

    /* End of Selector: '<S29>/Selector1' */

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
        if (Code_Gen_Model_DW.Timer > 0.4) {
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
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.CurrentPriorityIndex++;
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
             16.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
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
        UnitDelay = ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) ||
                     (Code_Gen_Model_DW.Timer > 16.0));
        if (UnitDelay && (Code_Gen_Model_B.CurrentPriorityIndex > 1.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
        } else if (UnitDelay) {
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
     *  Constant: '<S29>/Constant2'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S31>/Compare'
     *  RelationalOperator: '<S32>/Compare'
     *  Switch: '<S29>/Switch1'
     */
    if (Code_Gen_Model_B.AutoState == 1.1) {
      rtb_Climber_Cmd_Direction = 2.0;
    } else if (Code_Gen_Model_B.AutoState == 1.3) {
      /* Switch: '<S29>/Switch1' incorporates:
       *  Constant: '<S29>/Constant1'
       */
      rtb_Climber_Cmd_Direction = 3.0;
    } else {
      rtb_Climber_Cmd_Direction = 1.0;
    }

    /* End of Switch: '<S29>/Switch' */

    /* Selector: '<S3>/Selector' incorporates:
     *  Constant: '<S3>/Constant20'
     *  Merge: '<S13>/Merge8'
     *  Selector: '<S29>/Selector'
     *  Selector: '<S29>/Selector1'
     *  Selector: '<S3>/Selector1'
     */
    s215_iter = (int32_T)rtb_Selector1_c4[(((((int32_T)rtb_Climber_Cmd_Direction)
      - 1) * 10) + ((int32_T)Code_Gen_Model_B.CurrentPriorityIndex)) - 1];
    memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant20_Value
           [(s215_iter * 40) + -40], 40U * (sizeof(real_T)));

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Selector: '<S3>/Selector1'
     */
    Code_Gen_Model_B.Spline_Num_Poses =
      Code_Gen_Model_ConstP.Constant6_Value[s215_iter - 1];

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S26>/Constant'
     *  RelationalOperator: '<S26>/Compare'
     */
    Code_Gen_Model_B.Spline_Enable = (Code_Gen_Model_B.SplineEnable != 0.0);

    /* RelationalOperator: '<S33>/Compare' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_Is_Absolute_Steering = (Code_Gen_Model_B.RelativeMoveForward != 0.0);

    /* RelationalOperator: '<S27>/Compare' incorporates:
     *  Switch: '<S29>/Switch2'
     */
    UnitDelay = !rtb_Is_Absolute_Steering;

    /* Switch: '<S29>/Switch3' */
    if (rtb_Is_Absolute_Steering) {
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
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

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

    /* Lookup_n-D: '<S394>/1-D Lookup Table' incorporates:
     *  Switch: '<S7>/Switch2'
     */
    rtb_Climber_Cmd_Direction = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data_g,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 8U);

    /* Logic: '<S394>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    UnitDelay = ((Code_Gen_Model_B.Align_Amp) &&
                 (Code_Gen_Model_U.AT_Tag_5_Found));

    /* Logic: '<S394>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Logic: '<S394>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found));

    /* Logic: '<S394>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found));

    /* Logic: '<S394>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S394>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Logic: '<S394>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     */
    rtb_AT_Tag_15_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found));

    /* Logic: '<S394>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     */
    rtb_AT_Tag_16_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found));

    /* Switch: '<S394>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S394>/Logical Operator'
     *  Logic: '<S394>/Logical Operator1'
     *  Switch: '<S394>/Switch10'
     *  Switch: '<S394>/Switch11'
     *  Switch: '<S394>/Switch3'
     *  Switch: '<S394>/Switch4'
     *  Switch: '<S394>/Switch5'
     *  Switch: '<S394>/Switch6'
     *  Switch: '<S394>/Switch7'
     *  Switch: '<S394>/Switch8'
     *  Switch: '<S394>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found !=
         0.0)) {
      /* Switch: '<S394>/Switch2' incorporates:
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S394>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Climber_Cmd_Direction +
        Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found != 0.0)) {
      /* Switch: '<S394>/Switch3' incorporates:
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S394>/Add8'
       *  Switch: '<S394>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = rtb_Climber_Cmd_Direction +
        Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (UnitDelay) {
      /* Switch: '<S394>/Switch4' incorporates:
       *  Constant: '<S394>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S394>/Add7'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S394>/Switch5' incorporates:
       *  Constant: '<S394>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S394>/Add6'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S394>/Switch6' incorporates:
       *  Constant: '<S394>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S394>/Add5'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S394>/Switch7' incorporates:
       *  Constant: '<S394>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S394>/Add4'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       *  Switch: '<S394>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S394>/Switch8' incorporates:
       *  Constant: '<S394>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S394>/Add3'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       *  Switch: '<S394>/Switch6'
       *  Switch: '<S394>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S394>/Switch9' incorporates:
       *  Constant: '<S394>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S394>/Add2'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       *  Switch: '<S394>/Switch6'
       *  Switch: '<S394>/Switch7'
       *  Switch: '<S394>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S394>/Switch10' incorporates:
       *  Constant: '<S394>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S394>/Add1'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       *  Switch: '<S394>/Switch6'
       *  Switch: '<S394>/Switch7'
       *  Switch: '<S394>/Switch8'
       *  Switch: '<S394>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S394>/Switch11' incorporates:
       *  Constant: '<S394>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S394>/Add'
       *  Switch: '<S394>/Switch10'
       *  Switch: '<S394>/Switch2'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       *  Switch: '<S394>/Switch6'
       *  Switch: '<S394>/Switch7'
       *  Switch: '<S394>/Switch8'
       *  Switch: '<S394>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S394>/Switch2' incorporates:
       *  Constant: '<S394>/Constant'
       *  Switch: '<S394>/Switch10'
       *  Switch: '<S394>/Switch11'
       *  Switch: '<S394>/Switch3'
       *  Switch: '<S394>/Switch4'
       *  Switch: '<S394>/Switch5'
       *  Switch: '<S394>/Switch6'
       *  Switch: '<S394>/Switch7'
       *  Switch: '<S394>/Switch8'
       *  Switch: '<S394>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S394>/Switch2' */

    /* Sum: '<S396>/Add' incorporates:
     *  Constant: '<S396>/Constant'
     *  Constant: '<S396>/Constant1'
     *  Lookup_n-D: '<S396>/Modulation_Str_Y_Rel'
     *  Product: '<S396>/Product'
     *  Product: '<S396>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_Init = (Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain) +
      (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
                     Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
                     Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
       Steering_Relative_Gain);

    /* RelationalOperator: '<S398>/Compare' incorporates:
     *  Constant: '<S398>/Constant'
     */
    UnitDelay_e = (rtb_Init == 0.0);

    /* Logic: '<S396>/AND2' incorporates:
     *  RelationalOperator: '<S399>/FixPt Relational Operator'
     *  RelationalOperator: '<S400>/FixPt Relational Operator'
     *  RelationalOperator: '<S401>/FixPt Relational Operator'
     *  RelationalOperator: '<S402>/FixPt Relational Operator'
     *  UnitDelay: '<S399>/Delay Input1'
     *  UnitDelay: '<S400>/Delay Input1'
     *  UnitDelay: '<S401>/Delay Input1'
     *  UnitDelay: '<S402>/Delay Input1'
     *
     * Block description for '<S399>/Delay Input1':
     *
     *  Store in Global RAM
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
     */
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S396>/Constant17'
     *  Constant: '<S396>/Constant2'
     *  Logic: '<S396>/AND4'
     *  Logic: '<S396>/NOT1'
     *  Product: '<S396>/Product2'
     *  Sum: '<S396>/Sum'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    if (UnitDelay_e && (!rtb_AND2_k)) {
      rtb_Switch1_nj = (Code_Gen_Model_B.AT_Error_Yaw * AT_Yaw_Control_Gain) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Logic: '<S396>/AND1' incorporates:
     *  Logic: '<S396>/AND3'
     *  UnitDelay: '<S396>/Unit Delay2'
     */
    UnitDelay_e = (UnitDelay_e && (rtb_AND2_k ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S396>/Switch4' incorporates:
     *  Constant: '<S396>/Constant5'
     *  Switch: '<S396>/Switch5'
     *  Switch: '<S396>/Switch6'
     *  Switch: '<S396>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S396>/Switch5' incorporates:
       *  Constant: '<S396>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S396>/Switch6' incorporates:
       *  Constant: '<S396>/Constant7'
       *  Switch: '<S396>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S396>/Switch7' incorporates:
       *  Constant: '<S396>/Constant8'
       *  Switch: '<S396>/Switch5'
       *  Switch: '<S396>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S396>/Switch6' incorporates:
       *  Switch: '<S396>/Switch5'
       *  UnitDelay: '<S396>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S396>/Switch4' */

    /* Switch: '<S396>/Switch3' incorporates:
     *  Constant: '<S396>/Constant3'
     *  Logic: '<S396>/NOT'
     */
    if (!UnitDelay_e) {
      rtb_thetay = 0.0;
    } else {
      rtb_thetay = rtb_Switch4_g;
    }

    /* Merge: '<S13>/Merge1' incorporates:
     *  Sum: '<S396>/Sum1'
     *  Switch: '<S396>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_thetay + rtb_Switch1_nj;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion: '<S396>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Init;

    /* Switch: '<S394>/Switch23' incorporates:
     *  Logic: '<S394>/AND10'
     *  Logic: '<S394>/AND11'
     *  Logic: '<S394>/AND12'
     *  Logic: '<S394>/AND13'
     *  Logic: '<S394>/AND14'
     *  Logic: '<S394>/AND15'
     *  Logic: '<S394>/AND2'
     *  Logic: '<S394>/AND3'
     *  Switch: '<S394>/Switch1'
     *  Switch: '<S394>/Switch12'
     *  Switch: '<S394>/Switch13'
     *  Switch: '<S394>/Switch14'
     *  Switch: '<S394>/Switch15'
     *  Switch: '<S394>/Switch16'
     *  Switch: '<S394>/Switch17'
     *  Switch: '<S394>/Switch19'
     *  Switch: '<S394>/Switch20'
     *  Switch: '<S394>/Switch21'
     *  Switch: '<S394>/Switch22'
     *  Switch: '<S394>/Switch24'
     *  Switch: '<S394>/Switch25'
     *  Switch: '<S394>/Switch26'
     */
    if (UnitDelay) {
      /* Switch: '<S394>/Switch23' incorporates:
       *  Constant: '<S394>/Constant28'
       *  Sum: '<S394>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch15' incorporates:
       *  Constant: '<S394>/Constant9'
       *  Sum: '<S394>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S394>/Switch23' incorporates:
       *  Constant: '<S394>/Constant27'
       *  Sum: '<S394>/Add22'
       *  Switch: '<S394>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch15' incorporates:
       *  Constant: '<S394>/Constant5'
       *  Sum: '<S394>/Add16'
       *  Switch: '<S394>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S394>/Switch23' incorporates:
       *  Constant: '<S394>/Constant26'
       *  Sum: '<S394>/Add12'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch15' incorporates:
       *  Constant: '<S394>/Constant4'
       *  Sum: '<S394>/Add10'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S394>/Switch23' incorporates:
       *  Constant: '<S394>/Constant3'
       *  Sum: '<S394>/Add13'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch20'
       *  Switch: '<S394>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch15' incorporates:
       *  Constant: '<S394>/Constant17'
       *  Sum: '<S394>/Add11'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch12'
       *  Switch: '<S394>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S394>/Switch23' incorporates:
       *  Constant: '<S394>/Constant21'
       *  Sum: '<S394>/Add20'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch20'
       *  Switch: '<S394>/Switch21'
       *  Switch: '<S394>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch15' incorporates:
       *  Constant: '<S394>/Constant18'
       *  Sum: '<S394>/Add14'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch12'
       *  Switch: '<S394>/Switch13'
       *  Switch: '<S394>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S394>/Switch22' incorporates:
       *  Constant: '<S394>/Constant23'
       *  Sum: '<S394>/Add21'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch20'
       *  Switch: '<S394>/Switch21'
       *  Switch: '<S394>/Switch23'
       *  Switch: '<S394>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch14' incorporates:
       *  Constant: '<S394>/Constant19'
       *  Sum: '<S394>/Add15'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch12'
       *  Switch: '<S394>/Switch13'
       *  Switch: '<S394>/Switch15'
       *  Switch: '<S394>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S394>/Switch25' incorporates:
       *  Constant: '<S394>/Constant24'
       *  Sum: '<S394>/Add24'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch20'
       *  Switch: '<S394>/Switch21'
       *  Switch: '<S394>/Switch22'
       *  Switch: '<S394>/Switch23'
       *  Switch: '<S394>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch17' incorporates:
       *  Constant: '<S394>/Constant20'
       *  Sum: '<S394>/Add18'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch12'
       *  Switch: '<S394>/Switch13'
       *  Switch: '<S394>/Switch14'
       *  Switch: '<S394>/Switch15'
       *  Switch: '<S394>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S394>/Switch26' incorporates:
       *  Constant: '<S394>/Constant25'
       *  Sum: '<S394>/Add25'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch20'
       *  Switch: '<S394>/Switch21'
       *  Switch: '<S394>/Switch22'
       *  Switch: '<S394>/Switch23'
       *  Switch: '<S394>/Switch24'
       *  Switch: '<S394>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;

      /* Switch: '<S394>/Switch18' incorporates:
       *  Constant: '<S394>/Constant22'
       *  Sum: '<S394>/Add19'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch12'
       *  Switch: '<S394>/Switch13'
       *  Switch: '<S394>/Switch14'
       *  Switch: '<S394>/Switch15'
       *  Switch: '<S394>/Switch16'
       *  Switch: '<S394>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;
    } else {
      /* Switch: '<S394>/Switch23' incorporates:
       *  Constant: '<S394>/Constant2'
       *  Switch: '<S394>/Switch19'
       *  Switch: '<S394>/Switch20'
       *  Switch: '<S394>/Switch21'
       *  Switch: '<S394>/Switch22'
       *  Switch: '<S394>/Switch24'
       *  Switch: '<S394>/Switch25'
       *  Switch: '<S394>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;

      /* Switch: '<S394>/Switch15' incorporates:
       *  Constant: '<S394>/Constant1'
       *  Switch: '<S394>/Switch1'
       *  Switch: '<S394>/Switch12'
       *  Switch: '<S394>/Switch13'
       *  Switch: '<S394>/Switch14'
       *  Switch: '<S394>/Switch16'
       *  Switch: '<S394>/Switch17'
       *  Switch: '<S394>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;
    }

    /* End of Switch: '<S394>/Switch23' */

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
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_ha = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S406>/Switch1' */

    /* Lookup_n-D: '<S397>/Modulation_Drv' incorporates:
     *  Math: '<S397>/Magnitude'
     */
    rtb_Climber_Cmd_Direction = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S404>/Compare' incorporates:
     *  Constant: '<S404>/Constant'
     */
    rtb_AT_Tag_11_Active = (rtb_Climber_Cmd_Direction == 0.0);

    /* Logic: '<S397>/Logical Operator' incorporates:
     *  Constant: '<S405>/Constant'
     *  RelationalOperator: '<S405>/Compare'
     */
    rtb_AT_Tag_12_Active = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_AT_Tag_11_Active);

    /* Switch: '<S397>/Switch1' incorporates:
     *  Switch: '<S397>/Switch4'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S397>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S397>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S397>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S397>/Switch5' */
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S397>/Switch6' incorporates:
       *  Constant: '<S397>/Constant'
       *  Constant: '<S397>/Constant1'
       *  Inport: '<Root>/IsRedAlliance'
       *  Switch: '<S397>/Switch4'
       */
      if (Code_Gen_Model_U.IsRedAlliance != 0.0) {
        rtb_thetay = 3.1415926535897931;
      } else {
        rtb_thetay = 0.0;
      }

      /* Merge: '<S13>/Merge3' incorporates:
       *  Sum: '<S397>/Add1'
       *  Switch: '<S397>/Switch4'
       *  Switch: '<S397>/Switch6'
       *  Trigonometry: '<S397>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + rtb_thetay;
    } else {
      /* Merge: '<S13>/Merge3' incorporates:
       *  Switch: '<S397>/Switch4'
       *  Trigonometry: '<S397>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_ha,
        rtb_Switch2);
    }

    /* End of Switch: '<S397>/Switch1' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S397>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      UnitDelay = Code_Gen_Model_U.Is_Absolute_Translation;
    } else {
      UnitDelay = !rtb_AT_Tag_12_Active;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = ((TEST_Swerve_Mode_Override_Flag != 0.0) &&
      (Code_Gen_Model_U.Is_Absolute_Steering));

    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S403>/Constant'
     *  Constant: '<S403>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Gyro_Angle_Adjustment = Boost_Trigger_High_Speed;
    } else {
      rtb_Gyro_Angle_Adjustment = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S403>/Switch1' */

    /* Switch: '<S410>/Init' incorporates:
     *  UnitDelay: '<S410>/FixPt Unit Delay1'
     *  UnitDelay: '<S410>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init = rtb_Gyro_Angle_Adjustment;
    } else {
      rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2;
    }

    /* End of Switch: '<S410>/Init' */

    /* Sum: '<S408>/Sum1' */
    rtb_Gyro_Angle_Adjustment -= rtb_Init;

    /* Switch: '<S409>/Switch2' incorporates:
     *  Constant: '<S407>/Constant1'
     *  Constant: '<S407>/Constant3'
     *  RelationalOperator: '<S409>/LowerRelop1'
     *  RelationalOperator: '<S409>/UpperRelop'
     *  Switch: '<S409>/Switch'
     */
    if (rtb_Gyro_Angle_Adjustment > Boost_Trigger_Increasing_Limit) {
      rtb_Gyro_Angle_Adjustment = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Gyro_Angle_Adjustment < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S409>/Switch' incorporates:
       *  Constant: '<S407>/Constant1'
       */
      rtb_Gyro_Angle_Adjustment = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S409>/Switch2' */

    /* Sum: '<S408>/Sum' */
    rtb_Init += rtb_Gyro_Angle_Adjustment;

    /* Switch: '<S397>/Switch' incorporates:
     *  Switch: '<S397>/Switch2'
     */
    if (rtb_AT_Tag_12_Active) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S397>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_AT_Tag_11_Active) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S397>/Gain2'
       *  Math: '<S397>/Magnitude1'
       *  Switch: '<S397>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S403>/Product' incorporates:
       *  Switch: '<S397>/Switch2'
       */
      Rot_Mat_idx_0 = rtb_Climber_Cmd_Direction * rtb_Init;

      /* Saturate: '<S403>/Saturation' incorporates:
       *  Switch: '<S397>/Switch2'
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

      /* End of Saturate: '<S403>/Saturation' */
    }

    /* End of Switch: '<S397>/Switch' */

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

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S399>/Delay Input1'
     *
     * Block description for '<S399>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S400>/Delay Input1'
     *
     * Block description for '<S400>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S401>/Delay Input1'
     *
     * Block description for '<S401>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S402>/Delay Input1'
     *
     * Block description for '<S402>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S396>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = UnitDelay_e;

    /* Update for UnitDelay: '<S396>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S406>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_ha;

    /* Update for UnitDelay: '<S406>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S410>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S410>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S410>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2 = rtb_Init;

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
    rtb_Is_Absolute_Steering = false;

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
   *  Constant: '<S240>/Constant'
   *  Logic: '<S240>/AND'
   *  MATLAB Function: '<S190>/Find closest index to curve'
   *  Product: '<S240>/Product'
   *  RelationalOperator: '<S240>/Relational Operator'
   *  RelationalOperator: '<S240>/Relational Operator1'
   *  Selector: '<S240>/Selector'
   *  Selector: '<S240>/Selector1'
   *  Selector: '<S241>/Selector'
   *  Sum: '<S240>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S193>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S196>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S198>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S193>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S17>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S188>/Action Port'
       */
      /* InitializeConditions for If: '<S17>/If' incorporates:
       *  UnitDelay: '<S188>/Unit Delay'
       *  UnitDelay: '<S189>/Unit Delay'
       *  UnitDelay: '<S191>/Unit Delay'
       *  UnitDelay: '<S191>/Unit Delay1'
       *  UnitDelay: '<S241>/Unit Delay'
       *  UnitDelay: '<S241>/Unit Delay1'
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
     *  ActionPort: '<S188>/Action Port'
     */
    /* Selector: '<S189>/Selector1' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S189>/Selector1' */

    /* Lookup_n-D: '<S188>/Capture Radius' incorporates:
     *  UnitDelay: '<S188>/Unit Delay'
     */
    rtb_Switch1_nj = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S189>/Matrix Concatenate2' */
    rtb_Akxhatkk1[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S189>/Matrix Concatenate2' */
    rtb_Akxhatkk1[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S193>/If' incorporates:
     *  RelationalOperator: '<S193>/ '
     *  UnitDelay: '<S189>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S196>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S198>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S193>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S196>/Action Port'
       */
      /* InitializeConditions for If: '<S193>/If' incorporates:
       *  UnitDelay: '<S196>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S193>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S193>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S196>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S196>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* If: '<S196>/If' incorporates:
       *  Selector: '<S189>/Selector1'
       *  Selector: '<S196>/Selector'
       *  Selector: '<S199>/Selector'
       */
      rtb_rx_j = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S196>/Increment_If_Rectangle_Check' */

      /* Sum: '<S196>/Minus' incorporates:
       *  Concatenate: '<S189>/Matrix Concatenate2'
       *  Selector: '<S196>/Selector'
       */
      rtb_Minus_n[0] = rtb_Akxhatkk1[0] - rtb_rx_j;

      /* Outputs for IfAction SubSystem: '<S196>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* If: '<S196>/If' incorporates:
       *  Selector: '<S189>/Selector1'
       *  Selector: '<S196>/Selector'
       *  Selector: '<S199>/Selector'
       *  Sum: '<S196>/Minus'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S196>/Increment_If_Rectangle_Check' */

      /* Sum: '<S196>/Minus' incorporates:
       *  Concatenate: '<S189>/Matrix Concatenate2'
       *  Selector: '<S196>/Selector'
       */
      rtb_Minus_n[1] = rtb_Akxhatkk1[1] - rtb_Switch2;

      /* Math: '<S196>/Hypot' */
      rtb_Switch4_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S196>/Equal' */
      UnitDelay = (Code_Gen_Model_B.Spline_Num_Poses ==
                   Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S196>/Switch' incorporates:
       *  Logic: '<S196>/AND'
       *  Logic: '<S196>/OR'
       *  RelationalOperator: '<S196>/Relational Operator'
       *  UnitDelay: '<S196>/Unit Delay'
       */
      UnitDelay_e = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Switch4_g <=
        rtb_Switch1_nj) && UnitDelay));

      /* If: '<S196>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!UnitDelay_e) {
        if (!UnitDelay) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S198>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S196>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S198>/Action Port'
         */
        /* If: '<S198>/If' incorporates:
         *  RelationalOperator: '<S198>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S198>/Is_Last_Point' incorporates:
           *  ActionPort: '<S201>/Action Port'
           */
          /* InitializeConditions for If: '<S198>/If' incorporates:
           *  UnitDelay: '<S201>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S198>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S198>/Is_Last_Point' incorporates:
           *  ActionPort: '<S201>/Action Port'
           */
          /* Switch: '<S201>/Switch' incorporates:
           *  Constant: '<S203>/Constant'
           *  Logic: '<S201>/OR'
           *  RelationalOperator: '<S203>/Compare'
           *  UnitDelay: '<S201>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Switch4_g <= Spline_Stop_Radius));

          /* If: '<S201>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S201>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S204>/Action Port'
             */
            /* Merge: '<S193>/Merge2' incorporates:
             *  Constant: '<S204>/Constant'
             *  SignalConversion generated from: '<S204>/Robot_Reached_Destination'
             */
            UnitDelay = true;

            /* SignalConversion generated from: '<S204>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S204>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S201>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S201>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S205>/Action Port'
             */
            /* Merge: '<S193>/Merge2' incorporates:
             *  Constant: '<S205>/Constant'
             *  SignalConversion generated from: '<S205>/Robot_Reached_Destination'
             */
            UnitDelay = false;

            /* SignalConversion generated from: '<S205>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S205>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S201>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S201>/If' */

          /* Merge: '<S193>/Merge4' incorporates:
           *  SignalConversion: '<S201>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S201>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S198>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S198>/Increment_Search' incorporates:
           *  ActionPort: '<S200>/Action Port'
           */
          /* Merge: '<S193>/Merge2' incorporates:
           *  Constant: '<S200>/Constant'
           *  SignalConversion generated from: '<S200>/Robot_Reached_Destination'
           */
          UnitDelay = false;

          /* SignalConversion generated from: '<S200>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S200>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S193>/Merge4' incorporates:
           *  Constant: '<S202>/FixPt Constant'
           *  SignalConversion: '<S200>/Signal Copy'
           *  Sum: '<S202>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S198>/Increment_Search' */
        }

        /* End of If: '<S198>/If' */
        /* End of Outputs for SubSystem: '<S196>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S196>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S199>/Action Port'
         */
        /* Sum: '<S206>/FixPt Sum1' incorporates:
         *  Constant: '<S206>/FixPt Constant'
         */
        rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S199>/Selector1' incorporates:
         *  Selector: '<S189>/Selector1'
         */
        rtb_Gyro_Angle_Adjustment = rtb_Ref_Poses[((int32_T)rtb_Switch4_g) - 1];

        /* Sum: '<S207>/Subtract' incorporates:
         *  Selector: '<S199>/Selector1'
         *  Sum: '<S207>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Gyro_Angle_Adjustment - rtb_rx_j;

        /* Selector: '<S199>/Selector1' incorporates:
         *  Selector: '<S189>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Switch4_g) + 9];

        /* Sum: '<S207>/Subtract' incorporates:
         *  Selector: '<S199>/Selector1'
         *  Sum: '<S207>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch4_g - rtb_Switch2;

        /* Math: '<S207>/Hypot' */
        rtb_Switch1_ha = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S207>/Divide' */
        rtb_Init = rtb_Minus_n[1];

        /* UnaryMinus: '<S207>/Unary Minus' */
        rtb_Add_oh = rtb_Minus_n[0];

        /* Product: '<S207>/Product' incorporates:
         *  Product: '<S207>/Divide'
         *  UnaryMinus: '<S207>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Init / rtb_Switch1_ha) * rtb_Switch1_nj;
        rtb_Minus_n[1] = ((-rtb_Add_oh) / rtb_Switch1_ha) * rtb_Switch1_nj;

        /* Sum: '<S207>/Add1' incorporates:
         *  Sum: '<S207>/Add2'
         *  Sum: '<S207>/Minus'
         */
        rtb_Add_oh = rtb_Gyro_Angle_Adjustment - rtb_Minus_n[0];

        /* Sum: '<S207>/Minus4' incorporates:
         *  Sum: '<S207>/Add2'
         *  Sum: '<S207>/Minus'
         */
        rtb_Gyro_Angle_Adjustment = (rtb_Gyro_Angle_Adjustment + rtb_Minus_n[0])
          - rtb_Add_oh;

        /* Sum: '<S207>/Minus5' incorporates:
         *  Concatenate: '<S189>/Matrix Concatenate2'
         *  Sum: '<S207>/Minus'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Akxhatkk1[0] - rtb_Add_oh;

        /* Sum: '<S207>/Add' incorporates:
         *  Sum: '<S207>/Add2'
         *  Sum: '<S207>/Minus1'
         */
        rtb_Init = rtb_rx_j - rtb_Minus_n[0];

        /* Sum: '<S207>/Minus' incorporates:
         *  Sum: '<S207>/Minus1'
         */
        rtb_Add_oh -= rtb_Init;

        /* DotProduct: '<S207>/Dot Product' incorporates:
         *  Concatenate: '<S189>/Matrix Concatenate2'
         *  Sum: '<S207>/Minus'
         *  Sum: '<S207>/Minus1'
         *  Sum: '<S207>/Minus5'
         */
        rtb_Switch1_ha = (rtb_Akxhatkk1[0] - rtb_Init) * rtb_Add_oh;

        /* DotProduct: '<S207>/Dot Product1' incorporates:
         *  Sum: '<S207>/Minus'
         */
        rtb_rx_j = rtb_Add_oh * rtb_Add_oh;

        /* DotProduct: '<S207>/Dot Product2' incorporates:
         *  Sum: '<S207>/Minus4'
         *  Sum: '<S207>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Gyro_Angle_Adjustment *
          rtb_MatrixConcatenate_b_idx_0;

        /* DotProduct: '<S207>/Dot Product3' incorporates:
         *  Sum: '<S207>/Minus4'
         */
        rtb_Subtract1_of = rtb_Gyro_Angle_Adjustment * rtb_Gyro_Angle_Adjustment;

        /* Sum: '<S207>/Add1' incorporates:
         *  Sum: '<S207>/Add2'
         *  Sum: '<S207>/Minus'
         */
        rtb_Add_oh = rtb_Switch4_g - rtb_Minus_n[1];

        /* Sum: '<S207>/Minus4' incorporates:
         *  Sum: '<S207>/Add2'
         *  Sum: '<S207>/Minus'
         */
        rtb_Gyro_Angle_Adjustment = (rtb_Switch4_g + rtb_Minus_n[1]) -
          rtb_Add_oh;

        /* Sum: '<S207>/Minus5' incorporates:
         *  Concatenate: '<S189>/Matrix Concatenate2'
         *  Sum: '<S207>/Minus'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Akxhatkk1[1] - rtb_Add_oh;

        /* Sum: '<S207>/Add' incorporates:
         *  Sum: '<S207>/Add2'
         *  Sum: '<S207>/Minus1'
         */
        rtb_Init = rtb_Switch2 - rtb_Minus_n[1];

        /* Sum: '<S207>/Minus' incorporates:
         *  Sum: '<S207>/Minus1'
         */
        rtb_Add_oh -= rtb_Init;

        /* DotProduct: '<S207>/Dot Product' incorporates:
         *  Concatenate: '<S189>/Matrix Concatenate2'
         *  Sum: '<S207>/Minus'
         *  Sum: '<S207>/Minus1'
         *  Sum: '<S207>/Minus5'
         */
        rtb_Switch1_ha += (rtb_Akxhatkk1[1] - rtb_Init) * rtb_Add_oh;

        /* RelationalOperator: '<S208>/Compare' incorporates:
         *  Constant: '<S208>/Constant'
         */
        UnitDelay = (rtb_Switch1_ha >= 0.0);

        /* RelationalOperator: '<S207>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S207>/Dot Product1'
         *  Sum: '<S207>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Switch1_ha <= ((rtb_Add_oh * rtb_Add_oh)
          + rtb_rx_j));

        /* DotProduct: '<S207>/Dot Product2' incorporates:
         *  Sum: '<S207>/Minus4'
         *  Sum: '<S207>/Minus5'
         */
        rtb_Switch1_ha = (rtb_Gyro_Angle_Adjustment *
                          rtb_MatrixConcatenate_b_idx_0) +
          rtb_MatrixConcatenate_b_idx_1;

        /* Merge: '<S193>/Merge4' incorporates:
         *  Constant: '<S209>/Constant'
         *  DataTypeConversion: '<S199>/Data Type Conversion'
         *  DotProduct: '<S207>/Dot Product3'
         *  Logic: '<S207>/AND'
         *  RelationalOperator: '<S207>/LessThanOrEqual1'
         *  RelationalOperator: '<S209>/Compare'
         *  Sum: '<S199>/Add'
         *  Sum: '<S207>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((UnitDelay &&
          rtb_Is_Absolute_Steering) && (rtb_Switch1_ha >= 0.0)) &&
          (rtb_Switch1_ha <= ((rtb_Gyro_Angle_Adjustment *
          rtb_Gyro_Angle_Adjustment) + rtb_Subtract1_of)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S193>/Merge2' incorporates:
         *  Constant: '<S199>/Constant2'
         *  SignalConversion generated from: '<S199>/Robot_Reached_Destination'
         */
        UnitDelay = false;

        /* SignalConversion generated from: '<S199>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S199>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S196>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S196>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S197>/Action Port'
         */
        /* Merge: '<S193>/Merge2' incorporates:
         *  Constant: '<S197>/Constant2'
         *  SignalConversion generated from: '<S197>/Robot_Reached_Destination'
         */
        UnitDelay = false;

        /* SignalConversion generated from: '<S197>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S197>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S193>/Merge4' incorporates:
         *  SignalConversion generated from: '<S197>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S196>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S193>/Merge1' incorporates:
       *  Constant: '<S196>/Constant'
       *  SignalConversion generated from: '<S196>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S196>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay_e;

      /* End of Outputs for SubSystem: '<S193>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S193>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S195>/Action Port'
       */
      /* Merge: '<S193>/Merge1' incorporates:
       *  Constant: '<S195>/Constant'
       *  SignalConversion generated from: '<S195>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S193>/Merge2' incorporates:
       *  Constant: '<S195>/Constant1'
       *  SignalConversion generated from: '<S195>/Robot_Reached_Destination'
       */
      UnitDelay = false;

      /* SignalConversion generated from: '<S195>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S195>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S193>/Merge4' incorporates:
       *  SignalConversion generated from: '<S195>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S193>/Escape_Auto_Driving' */
    }

    /* End of If: '<S193>/If' */

    /* If: '<S189>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S189>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* Bias: '<S210>/Add Constant' incorporates:
       *  Bias: '<S210>/Bias'
       *  Sum: '<S210>/Subtract'
       */
      rtb_Switch4_g = ((Code_Gen_Model_B.Spline_Num_Poses -
                        Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S210>/Selector4' incorporates:
       *  Bias: '<S210>/Bias1'
       *  Constant: '<S212>/FixPt Constant'
       *  Sum: '<S212>/FixPt Sum1'
       */
      rtb_Akxhatkk1[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Akxhatkk1[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S210>/Selector4' */
      s215_iter = ((int32_T)rtb_Akxhatkk1[1]) - ((int32_T)rtb_Akxhatkk1[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s215_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Bias1_p = (int32_T)rtb_Akxhatkk1[0];

      /* Concatenate: '<S210>/Matrix Concatenate' incorporates:
       *  Bias: '<S210>/Add Constant1'
       *  Gain: '<S213>/Gain'
       *  Gain: '<S214>/Gain'
       *  Selector: '<S189>/Selector1'
       *  Selector: '<S210>/Selector'
       *  Selector: '<S210>/Selector1'
       *  Selector: '<S210>/Selector2'
       *  Selector: '<S210>/Selector3'
       *  Sum: '<S213>/Subtract'
       *  Sum: '<S214>/Subtract'
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

        /* Selector: '<S210>/Selector4' incorporates:
         *  Bias: '<S210>/Add Constant1'
         *  Gain: '<S213>/Gain'
         *  Selector: '<S210>/Selector'
         *  Selector: '<S210>/Selector1'
         *  Sum: '<S213>/Subtract'
         */
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s215_iter;
             rtb_Num_Segments++) {
          rtb_Selector4[rtb_Num_Segments + (Code_Gen_Model_DW.Selector4_DIMS1[0]
            * i)] = rtb_Assignment[((rtb_Num_Segments + rtb_Bias1_p) + (12 * i))
            - 1];
        }
      }

      /* End of Concatenate: '<S210>/Matrix Concatenate' */

      /* Assignment: '<S210>/Assignment' incorporates:
       *  Selector: '<S210>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));
      s215_iter = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (rtb_Bias1_p = 0; rtb_Bias1_p < s215_iter; rtb_Bias1_p++) {
          rtb_Assignment[rtb_Bias1_p + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            rtb_Bias1_p];
        }

        i += 12;
      }

      /* End of Assignment: '<S210>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S211>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S215>/While Iterator'
       */
      s215_iter = 1;
      do {
        rtb_Init = rtb_Assignment[s215_iter + 1];
        rtb_Akxhatkk1[0] = rtb_Init - rtb_Assignment[s215_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s215_iter] - rtb_Assignment[s215_iter +
          2];
        rtb_Add2_f[0] = rtb_Init - rtb_Assignment[s215_iter];
        rtb_Init = rtb_Assignment[s215_iter + 13];
        rtb_Akxhatkk1[1] = rtb_Init - rtb_Assignment[s215_iter + 11];
        rtb_rx_j = rtb_Assignment[s215_iter + 12];
        rtb_Minus_n[1] = rtb_rx_j - rtb_Assignment[s215_iter + 14];
        rtb_Add2_f[1] = rtb_Init - rtb_rx_j;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch1_ha = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2 = rt_powd_snf(rtb_Switch1_ha, 2.0);
          rtb_Add_oh = rt_powd_snf(rtb_Switch1_ha, 3.0);
          rtb_Init = (rtb_Switch1_ha - (2.0 * rtb_Switch2)) + rtb_Add_oh;
          rtb_Gyro_Angle_Adjustment = rtb_Switch2 - rtb_Add_oh;
          rtb_Add_oh = (3.0 * rtb_Switch2) - (2.0 * rtb_Add_oh);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Akxhatkk1[0] * rtb_Init) +
            (rtb_Minus_n[0] * rtb_Gyro_Angle_Adjustment)) * 0.5) + (rtb_Add2_f[0]
            * rtb_Add_oh)) + rtb_Assignment[s215_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Akxhatkk1[1] * rtb_Init) +
            (rtb_Minus_n[1] * rtb_Gyro_Angle_Adjustment)) * 0.5) + (rtb_Add2_f[1]
            * rtb_Add_oh)) + rtb_rx_j;
          rtb_Init = ((3.0 * rtb_Switch2) - (4.0 * rtb_Switch1_ha)) + 1.0;
          rtb_Gyro_Angle_Adjustment = (2.0 * rtb_Switch1_ha) - (3.0 *
            rtb_Switch2);
          rtb_Switch2 = (rtb_Switch1_ha - rtb_Switch2) * 6.0;
          rtb_Add_oh = (((rtb_Akxhatkk1[0] * rtb_Init) + (rtb_Minus_n[0] *
            rtb_Gyro_Angle_Adjustment)) * 0.5) + (rtb_Add2_f[0] * rtb_Switch2);
          rtb_Minus_k_idx_0 = rtb_Add_oh;
          Rot_Mat_idx_0 = rtb_Add_oh;
          rtb_Add_oh = (((rtb_Akxhatkk1[1] * rtb_Init) + (rtb_Minus_n[1] *
            rtb_Gyro_Angle_Adjustment)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch2);
          rtb_Switch2 = (6.0 * rtb_Switch1_ha) - 4.0;
          rtb_Init = (-6.0 * rtb_Switch1_ha) + 2.0;
          rtb_Switch1_ha = (-12.0 * rtb_Switch1_ha) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Akxhatkk1[1] *
            rtb_Switch2) + (rtb_Minus_n[1] * rtb_Init)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Switch1_ha)) * Rot_Mat_idx_0) - (((((rtb_Akxhatkk1[0] *
            rtb_Switch2) + (rtb_Minus_n[0] * rtb_Init)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch1_ha)) * rtb_Add_oh)) / rt_powd_snf(rt_hypotd_snf
            (rtb_Minus_k_idx_0, rtb_Add_oh), 3.0);
        }

        if (s215_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s215_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch1_ha = rtb_Switch4_g - ((real_T)s215_iter);
        rtb_Num_Segments = s215_iter;
        s215_iter++;
      } while ((rtb_Switch1_ha >= 4.0) && (s215_iter <= 3));

      /* End of Outputs for SubSystem: '<S211>/Sampling_Loop' */

      /* SignalConversion generated from: '<S194>/Position_and_Curvature' incorporates:
       *  Assignment: '<S215>/Assignment'
       *  Merge: '<S189>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S189>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S189>/If Action Subsystem' incorporates:
       *  ActionPort: '<S192>/Action Port'
       */
      /* Product: '<S192>/Product' incorporates:
       *  Selector: '<S189>/Selector'
       *  Selector: '<S189>/Selector1'
       */
      rtb_Switch1_ha = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S192>/Product1' incorporates:
       *  Selector: '<S189>/Selector'
       *  Selector: '<S189>/Selector1'
       */
      rtb_Switch4_g = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S192>/Product' incorporates:
         *  Constant: '<S192>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch1_ha;

        /* Product: '<S192>/Product1' incorporates:
         *  Constant: '<S192>/Constant2'
         *  Product: '<S192>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch4_g;
      }

      /* Assignment: '<S192>/Assignment' incorporates:
       *  Concatenate: '<S192>/Matrix Concatenate'
       *  Merge: '<S189>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S192>/Assignment' */

      /* SignalConversion generated from: '<S192>/Num_Segments' incorporates:
       *  Constant: '<S192>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S189>/If Action Subsystem' */
    }

    /* End of If: '<S189>/If1' */

    /* Concatenate: '<S190>/Matrix Concatenate' incorporates:
     *  Merge: '<S189>/Merge'
     *  Selector: '<S190>/Selector'
     *  Selector: '<S190>/Selector1'
     *  Selector: '<S190>/Selector3'
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

    /* End of Concatenate: '<S190>/Matrix Concatenate' */

    /* MATLAB Function: '<S190>/Distance Along Curve' incorporates:
     *  Concatenate: '<S190>/Matrix Concatenate'
     *  Selector: '<S190>/Selector4'
     *  Selector: '<S190>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s215_iter = 0; s215_iter < 149; s215_iter++) {
      /* Outputs for Iterator SubSystem: '<S211>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S215>/While Iterator'
       */
      rtb_Assignment_d[s215_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s215_iter + 1] -
         rtb_MatrixConcatenate_o[s215_iter], rtb_MatrixConcatenate_o[s215_iter +
         151] - rtb_MatrixConcatenate_o[s215_iter + 150]) +
        rtb_Assignment_d[s215_iter];

      /* End of Outputs for SubSystem: '<S211>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S190>/Distance Along Curve' */

    /* MATLAB Function: '<S190>/Find closest index to curve' incorporates:
     *  Concatenate: '<S190>/Matrix Concatenate'
     *  Selector: '<S190>/Selector4'
     *  Selector: '<S190>/Selector5'
     *  Selector: '<S241>/Selector'
     */
    for (s215_iter = 0; s215_iter < 150; s215_iter++) {
      /* Outputs for Iterator SubSystem: '<S211>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S215>/While Iterator'
       */
      distance_from_robot[s215_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s215_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s215_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S211>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s215_iter = 1;
    } else {
      s215_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s215_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s215_iter == 0) {
      rtb_Switch4_g = distance_from_robot[0];
    } else {
      rtb_Switch4_g = distance_from_robot[s215_iter - 1];
      for (rtb_Bias1_p = s215_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch1_ha = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch4_g > rtb_Switch1_ha) {
          rtb_Switch4_g = rtb_Switch1_ha;
        }
      }
    }

    s215_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s215_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch4_g) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S241>/Selector' incorporates:
     *  Constant: '<S241>/Constant'
     *  MATLAB Function: '<S190>/Find closest index to curve'
     *  MinMax: '<S241>/Min'
     */
    rtb_Switch1_ha = rtb_Assignment_d[((int32_T)fmin(50.0, s215_iter)) - 1];

    /* If: '<S241>/If' incorporates:
     *  RelationalOperator: '<S241>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S241>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S244>/Action Port'
       */
      /* SignalConversion generated from: '<S244>/Lookup Table Dynamic' */
      rtb_Akxhatkk1[0] = rtb_Assignment_d[0];
      rtb_Akxhatkk1[1] = rtb_Assignment_d[49];

      /* Sum: '<S246>/FixPt Sum1' incorporates:
       *  Constant: '<S246>/FixPt Constant'
       */
      rtb_Switch4_g = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S244>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S244>/Selector11'
       *  Selector: '<S244>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch4_g) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 19];

      /* SignalConversion generated from: '<S244>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S244>/Selector1'
       *  Selector: '<S244>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch4_g) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S244>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S244>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch4_g), &rtb_Minus_n[0], rtb_Switch1_ha,
                           &rtb_Akxhatkk1[0], 1U);

      /* SignalConversion: '<S244>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S244>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S244>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch1_ha,
                           &rtb_Akxhatkk1[0], 1U);

      /* End of Outputs for SubSystem: '<S241>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S241>/Latch' incorporates:
       *  ActionPort: '<S245>/Action Port'
       */
      /* SignalConversion generated from: '<S245>/In1' incorporates:
       *  UnitDelay: '<S241>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S245>/In2' incorporates:
       *  UnitDelay: '<S241>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S241>/Latch' */
    }

    /* End of If: '<S241>/If' */

    /* MinMax: '<S188>/Min' incorporates:
     *  Lookup_n-D: '<S188>/Lookahead Distance'
     *  UnitDelay: '<S188>/Unit Delay'
     */
    rtb_Switch1_nj = fmin(rtb_Switch1_nj, look1_binlcpw
                          (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled9,
      Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S190>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S240>/While Iterator'
     */
    s240_iter = 1U;
    UnitDelay_e = true;
    while (UnitDelay_e && (s240_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S190>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S240>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s240_iter;
      UnitDelay_e = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                      (rtb_Assignment_d[s215_iter - 1] + rtb_Switch1_nj)) &&
                     (Code_Gen_Model_B.WhileIterator < (((real_T)
        rtb_Num_Segments) * 50.0)));
      s240_iter++;
    }

    /* End of Outputs for SubSystem: '<S190>/Find first index that meets distance target' */

    /* Switch: '<S243>/Switch' incorporates:
     *  Concatenate: '<S190>/Matrix Concatenate'
     *  Constant: '<S190>/Constant'
     *  Constant: '<S240>/Constant'
     *  Constant: '<S243>/Constant1'
     *  Constant: '<S243>/Constant2'
     *  Constant: '<S243>/Constant3'
     *  Logic: '<S240>/AND'
     *  MATLAB Function: '<S190>/Find closest index to curve'
     *  Math: '<S243>/Hypot'
     *  Merge: '<S13>/Merge8'
     *  MinMax: '<S243>/Min'
     *  MinMax: '<S243>/Min1'
     *  Product: '<S240>/Product'
     *  Product: '<S243>/Divide'
     *  Product: '<S243>/Product'
     *  Product: '<S243>/Product1'
     *  RelationalOperator: '<S190>/Relational Operator'
     *  RelationalOperator: '<S240>/Relational Operator'
     *  RelationalOperator: '<S240>/Relational Operator1'
     *  Selector: '<S190>/Selector10'
     *  Selector: '<S190>/Selector7'
     *  Selector: '<S190>/Selector8'
     *  Selector: '<S190>/Selector9'
     *  Selector: '<S240>/Selector'
     *  Selector: '<S240>/Selector1'
     *  Selector: '<S241>/Selector'
     *  Sqrt: '<S243>/Sqrt'
     *  Sum: '<S190>/Subtract'
     *  Sum: '<S240>/Add'
     *  Sum: '<S243>/Subtract'
     *  Sum: '<S243>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Switch1_nj = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[9] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
                            Spline_Last_Pose_Distance_to_Velocity_Gain, fmin
                            (rtb_Switch4_g * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Switch1_nj = fmin(rtb_Switch4_g * Spline_Velocity_Multiplier_TEST,
                            sqrt(Spline_Max_Centripital_Acceleration /
        rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S243>/Switch' */

    /* Logic: '<S191>/OR' */
    rtb_Is_Absolute_Steering = (UnitDelay ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S191>/Switch1' incorporates:
     *  Switch: '<S191>/Switch'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S17>/Merge2' incorporates:
       *  Constant: '<S191>/Constant3'
       *  SignalConversion: '<S191>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S17>/Merge2' incorporates:
       *  SignalConversion: '<S191>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Switch1_nj;
      rtb_Switch1_ha = rtb_Merge1;
    }

    /* End of Switch: '<S191>/Switch1' */

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion: '<S191>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch1_ha;

    /* Selector: '<S190>/Selector6' incorporates:
     *  Concatenate: '<S190>/Matrix Concatenate'
     *  Selector: '<S190>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S190>/Selector2' incorporates:
     *  Concatenate: '<S190>/Matrix Concatenate'
     *  Selector: '<S190>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S191>/Switch2' incorporates:
     *  Sum: '<S247>/Subtract'
     *  Sum: '<S247>/Subtract1'
     *  Trigonometry: '<S247>/Atan2'
     *  UnitDelay: '<S191>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S191>/Switch2' */

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion: '<S191>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S17>/Merge7' incorporates:
     *  SignalConversion: '<S188>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = UnitDelay;

    /* Merge: '<S17>/Merge1' incorporates:
     *  Constant: '<S191>/Constant2'
     *  SignalConversion generated from: '<S188>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S17>/Merge4' incorporates:
     *  Constant: '<S191>/Constant5'
     *  SignalConversion generated from: '<S188>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S17>/Merge5' incorporates:
     *  Constant: '<S191>/Constant6'
     *  SignalConversion generated from: '<S188>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S17>/Merge6' incorporates:
     *  Constant: '<S191>/Constant1'
     *  SignalConversion generated from: '<S188>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S189>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S188>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S241>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch1_ha;

    /* Update for UnitDelay: '<S191>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S17>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S17>/Pass Through' incorporates:
     *  ActionPort: '<S187>/Action Port'
     */
    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S187>/Constant'
     *  SignalConversion generated from: '<S187>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion generated from: '<S187>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S17>/Merge1' incorporates:
     *  SignalConversion generated from: '<S187>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S17>/Merge2' incorporates:
     *  SignalConversion generated from: '<S187>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion generated from: '<S187>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S17>/Merge4' incorporates:
     *  SignalConversion generated from: '<S187>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = UnitDelay;

    /* Merge: '<S17>/Merge5' incorporates:
     *  SignalConversion generated from: '<S187>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S17>/Merge6' incorporates:
     *  SignalConversion generated from: '<S187>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* End of Outputs for SubSystem: '<S17>/Pass Through' */
  }

  /* End of If: '<S17>/If' */

  /* UnitDelay: '<S341>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S341>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S341>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S341>/Product1' incorporates:
   *  Signum: '<S341>/Sign1'
   *  Signum: '<S341>/Sign2'
   */
  rtb_thetay *= rtb_Add_f1;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S341>/Switch' incorporates:
   *  Constant: '<S341>/Constant'
   *  Constant: '<S346>/Constant'
   *  Constant: '<S347>/Constant'
   *  Logic: '<S341>/or'
   *  Product: '<S341>/Product1'
   *  RelationalOperator: '<S346>/Compare'
   *  RelationalOperator: '<S347>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_Switch1_ha = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch1_ha = 0.0;
  }

  /* End of Switch: '<S341>/Switch' */

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  UnitDelay_e = (rtb_Switch1_ha == 0.0);

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  UnitDelay = (rtb_Switch1_ha > 0.0);

  /* Abs: '<S341>/Abs' incorporates:
   *  Sum: '<S341>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S341>/Switch5' incorporates:
   *  Constant: '<S341>/Constant1'
   *  Switch: '<S341>/Switch1'
   *  UnaryMinus: '<S341>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S341>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S341>/Constant4'
     *  Constant: '<S341>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S341>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S341>/Constant2'
     *  Constant: '<S341>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S341>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S341>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S341>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S341>/Constant10'
     *  Constant: '<S341>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S341>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S341>/Constant7'
     *  Constant: '<S341>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S341>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S341>/Lookup Table Dynamic1'
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

    /* Switch: '<S341>/Switch3' incorporates:
     *  Constant: '<S341>/Constant1'
     *  Constant: '<S341>/Constant3'
     *  UnaryMinus: '<S341>/Unary Minus'
     */
    if (UnitDelay) {
      rtb_thetay = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S341>/Switch3' */
  }

  /* End of Switch: '<S341>/Switch5' */

  /* Product: '<S341>/Product' incorporates:
   *  Switch: '<S341>/Switch1'
   */
  rtb_thetay *= rtb_Switch1_nj;

  /* Switch: '<S352>/Init' incorporates:
   *  UnitDelay: '<S352>/FixPt Unit Delay1'
   *  UnitDelay: '<S352>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_Switch1_ha;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S352>/Init' */

  /* Sum: '<S350>/Sum1' */
  rtb_Switch4_g = rtb_Switch1_ha - rtb_Merge1;

  /* Switch: '<S351>/Switch2' incorporates:
   *  RelationalOperator: '<S351>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_thetay)) {
    /* Switch: '<S341>/Switch2' incorporates:
     *  Constant: '<S341>/Constant1'
     *  Switch: '<S341>/Switch4'
     */
    if (UnitDelay_e) {
      rtb_Switch1_ha = Translation_Speed_Rate_Limit_Dec;
    } else if (UnitDelay) {
      /* Switch: '<S341>/Switch4' incorporates:
       *  Constant: '<S341>/Constant1'
       */
      rtb_Switch1_ha = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S341>/Switch4' incorporates:
       *  Constant: '<S341>/Constant3'
       *  UnaryMinus: '<S341>/Unary Minus1'
       */
      rtb_Switch1_ha = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S341>/Switch2' */

    /* Product: '<S341>/Product2' */
    rtb_Switch1_ha *= rtb_Switch1_nj;

    /* Switch: '<S351>/Switch' incorporates:
     *  RelationalOperator: '<S351>/UpperRelop'
     */
    if (rtb_Switch4_g < rtb_Switch1_ha) {
      rtb_thetay = rtb_Switch1_ha;
    } else {
      rtb_thetay = rtb_Switch4_g;
    }

    /* End of Switch: '<S351>/Switch' */
  }

  /* End of Switch: '<S351>/Switch2' */

  /* Sum: '<S350>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_thetay + rtb_Merge1;

  /* Sum: '<S8>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   *  UnitDelay: '<S8>/Unit Delay1'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Gain: '<S36>/Gain1' */
  rtb_Switch1_ha = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S344>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S344>/Switch' incorporates:
     *  Constant: '<S368>/Constant3'
     *  Constant: '<S368>/Constant4'
     *  Math: '<S368>/Math Function'
     *  Sum: '<S344>/Subtract'
     *  Sum: '<S368>/Add1'
     *  Sum: '<S368>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Switch1_ha) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S344>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S344>/Switch' */

  /* Sum: '<S364>/Add1' incorporates:
   *  Constant: '<S364>/Constant3'
   *  Constant: '<S364>/Constant4'
   *  Math: '<S364>/Math Function'
   *  Sum: '<S343>/Add'
   *  Sum: '<S363>/Sum'
   *  Sum: '<S364>/Add2'
   */
  rtb_thetay = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    rtb_Switch1_ha) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S366>/Sum1' incorporates:
   *  Constant: '<S363>/Constant2'
   *  Product: '<S366>/Product'
   *  Sum: '<S366>/Sum'
   *  UnitDelay: '<S366>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_thetay - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S363>/Product' incorporates:
   *  Constant: '<S363>/Constant3'
   */
  rtb_Switch1_nj = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S365>/Diff' incorporates:
   *  UnitDelay: '<S365>/UD'
   *
   * Block description for '<S365>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S365>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Switch1_nj - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S363>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Heading_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Heading_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Heading_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S363>/Add' incorporates:
   *  Gain: '<S363>/Gain1'
   *  Saturate: '<S363>/Saturation'
   */
  rtb_Switch2 = (Steering_Heading_Control_P * rtb_thetay) + Rot_Mat_idx_0;

  /* Sum: '<S363>/Subtract' incorporates:
   *  Constant: '<S363>/Constant'
   */
  rtb_rx_j = Steering_Heading_Control_Total_UL - rtb_Switch2;

  /* Sum: '<S363>/Sum2' incorporates:
   *  Gain: '<S363>/Gain2'
   *  UnitDelay: '<S363>/Unit Delay'
   */
  rtb_Switch4_g = (Steering_Heading_Control_I * rtb_thetay) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S367>/Switch2' incorporates:
   *  RelationalOperator: '<S367>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_rx_j)) {
    /* Sum: '<S363>/Subtract1' incorporates:
     *  Constant: '<S363>/Constant1'
     */
    rtb_Init = Steering_Heading_Control_Total_LL - rtb_Switch2;

    /* Switch: '<S367>/Switch' incorporates:
     *  RelationalOperator: '<S367>/UpperRelop'
     */
    if (rtb_Switch4_g < rtb_Init) {
      rtb_rx_j = rtb_Init;
    } else {
      rtb_rx_j = rtb_Switch4_g;
    }

    /* End of Switch: '<S367>/Switch' */
  }

  /* End of Switch: '<S367>/Switch2' */

  /* Saturate: '<S363>/Saturation1' */
  if (rtb_rx_j > Steering_Heading_Control_I_UL) {
    rtb_Switch4_g = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_j < Steering_Heading_Control_I_LL) {
    rtb_Switch4_g = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch4_g = rtb_rx_j;
  }

  /* End of Saturate: '<S363>/Saturation1' */

  /* Sum: '<S363>/Add1' */
  Rot_Mat_idx_0 = rtb_Switch2 + rtb_Switch4_g;

  /* Saturate: '<S363>/Saturation2' */
  if (Rot_Mat_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S363>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (Rot_Mat_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S363>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S363>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S363>/Saturation2' */

  /* Switch: '<S343>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S354>/Switch' incorporates:
     *  Abs: '<S354>/Abs'
     *  Constant: '<S354>/Constant'
     *  Constant: '<S362>/Constant'
     *  RelationalOperator: '<S362>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_rx_j = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_rx_j = 0.0;
    }

    /* End of Switch: '<S354>/Switch' */
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S343>/Switch' */

  /* Signum: '<S353>/Sign2' incorporates:
   *  UnitDelay: '<S353>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_thetay = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S353>/Sign1' */
  if (rtIsNaN(rtb_rx_j)) {
    rtb_Add_f1 = (rtNaN);
  } else if (rtb_rx_j < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (rtb_rx_j > 0.0);
  }

  /* Product: '<S353>/Product1' incorporates:
   *  Signum: '<S353>/Sign1'
   *  Signum: '<S353>/Sign2'
   */
  rtb_thetay *= rtb_Add_f1;
  if (rtIsNaN(rtb_thetay)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_thetay, 256.0);
  }

  /* Switch: '<S353>/Switch' incorporates:
   *  Constant: '<S353>/Constant'
   *  Constant: '<S355>/Constant'
   *  Constant: '<S356>/Constant'
   *  Logic: '<S353>/or'
   *  Product: '<S353>/Product1'
   *  RelationalOperator: '<S355>/Compare'
   *  RelationalOperator: '<S356>/Compare'
   *  UnitDelay: '<S353>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_rx_j;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
  }

  /* End of Switch: '<S353>/Switch' */

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  UnitDelay_e = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  UnitDelay = (rtb_MatrixConcatenate_b_idx_0 > 0.0);

  /* Abs: '<S353>/Abs' incorporates:
   *  Sum: '<S353>/Subtract'
   *  UnitDelay: '<S353>/Unit Delay'
   */
  rtb_Switch2 = fabs(Code_Gen_Model_B.Steering_Localized_Cmd - rtb_rx_j);

  /* Switch: '<S353>/Switch5' incorporates:
   *  Constant: '<S353>/Constant1'
   *  Switch: '<S353>/Switch1'
   *  UnaryMinus: '<S353>/Unary Minus'
   */
  if (UnitDelay_e) {
    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S353>/Constant4'
     *  Constant: '<S353>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S353>/Constant2'
     *  Constant: '<S353>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S353>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S353>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S353>/Constant10'
     *  Constant: '<S353>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S353>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S353>/Constant7'
     *  Constant: '<S353>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S353>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S353>/Lookup Table Dynamic1'
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

    /* Switch: '<S353>/Switch3' incorporates:
     *  Constant: '<S353>/Constant1'
     *  Constant: '<S353>/Constant3'
     *  UnaryMinus: '<S353>/Unary Minus'
     */
    if (UnitDelay) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S353>/Switch3' */
  }

  /* End of Switch: '<S353>/Switch5' */

  /* Product: '<S353>/Product' incorporates:
   *  Switch: '<S353>/Switch1'
   */
  rtb_thetay_f = rtb_thetay * rtb_Switch2;

  /* Switch: '<S361>/Init' incorporates:
   *  UnitDelay: '<S361>/FixPt Unit Delay1'
   *  UnitDelay: '<S361>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_j = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_rx_j = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S361>/Init' */

  /* Sum: '<S359>/Sum1' */
  rtb_Init = rtb_MatrixConcatenate_b_idx_0 - rtb_rx_j;

  /* Switch: '<S360>/Switch2' incorporates:
   *  RelationalOperator: '<S360>/LowerRelop1'
   */
  if (!(rtb_Init > rtb_thetay_f)) {
    /* Switch: '<S353>/Switch2' incorporates:
     *  Constant: '<S353>/Constant1'
     *  Constant: '<S353>/Constant3'
     *  Switch: '<S353>/Switch4'
     *  UnaryMinus: '<S353>/Unary Minus1'
     */
    if (UnitDelay_e) {
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (UnitDelay) {
      /* Switch: '<S353>/Switch4' incorporates:
       *  Constant: '<S353>/Constant1'
       */
      rtb_thetay = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_thetay = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S353>/Product2' incorporates:
     *  Switch: '<S353>/Switch2'
     */
    rtb_Gyro_Angle_Adjustment = rtb_thetay * rtb_Switch2;

    /* Switch: '<S360>/Switch' incorporates:
     *  RelationalOperator: '<S360>/UpperRelop'
     */
    if (rtb_Init < rtb_Gyro_Angle_Adjustment) {
      rtb_thetay_f = rtb_Gyro_Angle_Adjustment;
    } else {
      rtb_thetay_f = rtb_Init;
    }

    /* End of Switch: '<S360>/Switch' */
  }

  /* End of Switch: '<S360>/Switch2' */

  /* Sum: '<S359>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_thetay_f + rtb_rx_j;

  /* Outputs for Atomic SubSystem: '<S256>/Initialize Function' */
  /* Sum: '<S342>/Add' incorporates:
   *  Constant: '<S342>/Constant'
   *  Constant: '<S342>/Constant4'
   *  Constant: '<S342>/Constant5'
   *  Trigonometry: '<S342>/Atan2'
   */
  rtb_Switch2 = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S256>/Initialize Function' */

  /* Fcn: '<S376>/r->x' incorporates:
   *  Fcn: '<S381>/r->x'
   *  Fcn: '<S386>/r->x'
   *  Fcn: '<S391>/r->x'
   */
  rtb_Init = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S370>/Add' incorporates:
   *  Fcn: '<S376>/r->x'
   *  Fcn: '<S377>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Switch2))
    + rtb_Init;

  /* Fcn: '<S376>/theta->y' incorporates:
   *  Fcn: '<S381>/theta->y'
   *  Fcn: '<S386>/theta->y'
   *  Fcn: '<S391>/theta->y'
   */
  rtb_Gyro_Angle_Adjustment = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S370>/Add' incorporates:
   *  Fcn: '<S376>/theta->y'
   *  Fcn: '<S377>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Switch2))
    + rtb_Gyro_Angle_Adjustment;

  /* Fcn: '<S375>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1
    [1]);

  /* RelationalOperator: '<S378>/Compare' incorporates:
   *  Constant: '<S378>/Constant'
   */
  UnitDelay_e = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S374>/Switch1' */
  if (UnitDelay_e) {
    /* Switch: '<S374>/Switch1' incorporates:
     *  Constant: '<S374>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S374>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S374>/Switch1' */

  /* Sum: '<S371>/Add' incorporates:
   *  Fcn: '<S382>/r->x'
   *  Fcn: '<S382>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Init;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Gyro_Angle_Adjustment;

  /* Fcn: '<S380>/x->r' */
  rtb_thetay_f = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S383>/Compare' incorporates:
   *  Constant: '<S383>/Constant'
   */
  UnitDelay = (rtb_thetay_f == 0.0);

  /* Switch: '<S379>/Switch1' */
  if (UnitDelay) {
    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S379>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S379>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_thetay_f;
  }

  /* End of Switch: '<S379>/Switch1' */

  /* Sum: '<S372>/Add' incorporates:
   *  Fcn: '<S387>/r->x'
   *  Fcn: '<S387>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Init;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Gyro_Angle_Adjustment;

  /* Fcn: '<S385>/x->r' */
  rtb_rx_j = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S388>/Compare' incorporates:
   *  Constant: '<S388>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_j == 0.0);

  /* Switch: '<S384>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S384>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S384>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_j;
  }

  /* End of Switch: '<S384>/Switch1' */

  /* Sum: '<S373>/Add' incorporates:
   *  Fcn: '<S392>/r->x'
   *  Fcn: '<S392>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Init;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Gyro_Angle_Adjustment;

  /* Fcn: '<S390>/x->r' */
  rtb_thetay_g = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S393>/Compare' incorporates:
   *  Constant: '<S393>/Constant'
   */
  rtb_AT_Tag_14_Active = (rtb_thetay_g == 0.0);

  /* Switch: '<S389>/Switch1' */
  if (rtb_AT_Tag_14_Active) {
    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S389>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S389>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_g;
  }

  /* End of Switch: '<S389>/Switch1' */

  /* Product: '<S369>/Divide' incorporates:
   *  Abs: '<S369>/Abs'
   *  Abs: '<S369>/Abs1'
   *  Abs: '<S369>/Abs2'
   *  Abs: '<S369>/Abs3'
   *  Constant: '<S369>/Constant'
   *  MinMax: '<S369>/Max'
   */
  rtb_MatrixConcatenate_b_idx_0 = 3.9212094760200449 / fmax(fmax(fmax(fmax
    (3.9212094760200449, Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S369>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S374>/Switch' */
  if (!UnitDelay_e) {
    /* Switch: '<S374>/Switch' incorporates:
     *  Fcn: '<S375>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S374>/Switch' */

  /* Trigonometry: '<S270>/Cos4' incorporates:
   *  Switch: '<S259>/Angle_Switch'
   *  Trigonometry: '<S269>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S248>/Add1' incorporates:
   *  Constant: '<S248>/Constant3'
   *  Constant: '<S248>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S248>/Math Function'
   *  Sum: '<S18>/Add'
   *  Sum: '<S248>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S270>/Sin5' incorporates:
   *  UnaryMinus: '<S268>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S270>/Sin4' incorporates:
   *  Switch: '<S259>/Angle_Switch'
   *  Trigonometry: '<S269>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S270>/Cos5' incorporates:
   *  UnaryMinus: '<S268>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S270>/Subtract1' incorporates:
   *  Product: '<S270>/Product2'
   *  Product: '<S270>/Product3'
   *  Trigonometry: '<S270>/Cos4'
   *  Trigonometry: '<S270>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_f1 * rtb_rx_j) + (rtb_MatrixConcatenate_b_idx_1 *
    rtb_thetay_f);

  /* Sum: '<S270>/Subtract' incorporates:
   *  Product: '<S270>/Product'
   *  Product: '<S270>/Product1'
   *  Trigonometry: '<S270>/Cos4'
   *  Trigonometry: '<S270>/Sin4'
   */
  rtb_Init = (rtb_Add_f1 * rtb_thetay_f) - (rtb_MatrixConcatenate_b_idx_1 *
    rtb_rx_j);

  /* Math: '<S270>/Hypot' */
  rtb_Gyro_Angle_Adjustment = rt_hypotd_snf(rtb_Init, rtb_Switch2);

  /* Switch: '<S270>/Switch' incorporates:
   *  Constant: '<S270>/Constant'
   *  Constant: '<S270>/Constant1'
   *  Constant: '<S271>/Constant'
   *  Product: '<S270>/Divide'
   *  Product: '<S270>/Divide1'
   *  RelationalOperator: '<S271>/Compare'
   *  Switch: '<S270>/Switch1'
   */
  if (rtb_Gyro_Angle_Adjustment > 1.0E-6) {
    rtb_thetay_g = rtb_Switch2 / rtb_Gyro_Angle_Adjustment;
    rtb_thetay_f = rtb_Init / rtb_Gyro_Angle_Adjustment;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S270>/Switch' */

  /* Switch: '<S259>/Speed_Switch' incorporates:
   *  Abs: '<S259>/Abs'
   *  Constant: '<S267>/Constant'
   *  RelationalOperator: '<S267>/Compare'
   *  Switch: '<S259>/Angle_Switch'
   *  Trigonometry: '<S269>/Atan1'
   *  Trigonometry: '<S270>/Atan1'
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S269>/Subtract1' incorporates:
     *  Product: '<S269>/Product2'
     *  Product: '<S269>/Product3'
     *  UnaryMinus: '<S259>/Unary Minus'
     */
    rtb_Switch2 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S269>/Subtract' incorporates:
     *  Product: '<S269>/Product'
     *  Product: '<S269>/Product1'
     */
    rtb_Gyro_Angle_Adjustment = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S269>/Hypot' */
    rtb_Init = rt_hypotd_snf(rtb_Gyro_Angle_Adjustment, rtb_Switch2);

    /* Switch: '<S269>/Switch1' incorporates:
     *  Constant: '<S269>/Constant'
     *  Constant: '<S269>/Constant1'
     *  Constant: '<S272>/Constant'
     *  Product: '<S269>/Divide'
     *  Product: '<S269>/Divide1'
     *  RelationalOperator: '<S272>/Compare'
     *  Switch: '<S269>/Switch'
     */
    if (rtb_Init > 1.0E-6) {
      rtb_Gyro_Angle_Adjustment /= rtb_Init;
      rtb_Switch2 /= rtb_Init;
    } else {
      rtb_Gyro_Angle_Adjustment = 1.0;
      rtb_Switch2 = 0.0;
    }

    /* End of Switch: '<S269>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Switch2, rtb_Gyro_Angle_Adjustment);
  } else {
    rtb_thetay = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S262>/Product2' incorporates:
   *  Constant: '<S262>/Constant'
   *  Switch: '<S259>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S257>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S257>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S260>/Add' incorporates:
   *  Sum: '<S261>/Sum'
   */
  rtb_Product_d = rtb_rx_j - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S252>/Product' incorporates:
   *  Abs: '<S257>/Abs'
   *  Abs: '<S260>/Abs'
   *  Constant: '<S263>/Constant'
   *  Constant: '<S273>/Constant3'
   *  Constant: '<S273>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S257>/OR'
   *  Lookup_n-D: '<S260>/1-D Lookup Table'
   *  Math: '<S273>/Math Function'
   *  RelationalOperator: '<S257>/Equal1'
   *  RelationalOperator: '<S263>/Compare'
   *  Signum: '<S257>/Sign'
   *  Signum: '<S257>/Sign1'
   *  Sum: '<S260>/Add'
   *  Sum: '<S273>/Add1'
   *  Sum: '<S273>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled42,
     Code_Gen_Model_ConstP.pooled41, 1U);

  /* Gain: '<S258>/Gain' */
  rtb_Gyro_Angle_Adjustment = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S258>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S265>/Sum1' incorporates:
   *  Constant: '<S258>/Constant2'
   *  Product: '<S265>/Product'
   *  Sum: '<S265>/Sum'
   *  UnitDelay: '<S265>/Unit Delay1'
   */
  rtb_Switch2 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                 Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S258>/Product' incorporates:
   *  Constant: '<S258>/Constant3'
   */
  rtb_Init = rtb_Switch2 * Drive_Motor_Control_D;

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
  Rot_Mat_idx_0 = rtb_Init - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S258>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S258>/Add' incorporates:
   *  Gain: '<S258>/Gain1'
   *  Saturate: '<S258>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_thetay_g) +
                rtb_Gyro_Angle_Adjustment) + Rot_Mat_idx_0;

  /* Sum: '<S258>/Subtract' incorporates:
   *  Constant: '<S258>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_oh;

  /* Sum: '<S258>/Sum2' incorporates:
   *  Gain: '<S258>/Gain2'
   *  UnitDelay: '<S258>/Unit Delay'
   */
  rtb_Gyro_Angle_Adjustment = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S266>/Switch2' incorporates:
   *  Constant: '<S258>/Constant'
   *  RelationalOperator: '<S266>/LowerRelop1'
   *  Sum: '<S258>/Subtract'
   */
  if (!(rtb_Gyro_Angle_Adjustment > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S266>/Switch' incorporates:
     *  Constant: '<S258>/Constant1'
     *  RelationalOperator: '<S266>/UpperRelop'
     *  Sum: '<S258>/Subtract1'
     */
    if (rtb_Gyro_Angle_Adjustment < (-1.0 - rtb_Add_oh)) {
      rtb_thetay_f = -1.0 - rtb_Add_oh;
    } else {
      rtb_thetay_f = rtb_Gyro_Angle_Adjustment;
    }

    /* End of Switch: '<S266>/Switch' */
  }

  /* End of Switch: '<S266>/Switch2' */

  /* Saturate: '<S258>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Gyro_Angle_Adjustment = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Gyro_Angle_Adjustment = Drive_Motor_Control_I_LL;
  } else {
    rtb_Gyro_Angle_Adjustment = rtb_thetay_f;
  }

  /* End of Saturate: '<S258>/Saturation1' */

  /* Sum: '<S258>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_oh + rtb_Gyro_Angle_Adjustment;

  /* Saturate: '<S258>/Saturation2' */
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

  /* End of Saturate: '<S258>/Saturation2' */

  /* Sum: '<S274>/Add1' incorporates:
   *  Constant: '<S274>/Constant3'
   *  Constant: '<S274>/Constant4'
   *  Math: '<S274>/Math Function'
   *  Sum: '<S274>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S276>/Sum1' incorporates:
   *  Constant: '<S261>/Constant2'
   *  Product: '<S276>/Product'
   *  Sum: '<S276>/Sum'
   *  UnitDelay: '<S276>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S261>/Product' incorporates:
   *  Constant: '<S261>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S275>/Diff' incorporates:
   *  UnitDelay: '<S275>/UD'
   *
   * Block description for '<S275>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S275>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S261>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S261>/Add' incorporates:
   *  Gain: '<S261>/Gain1'
   *  Saturate: '<S261>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_thetay_g) + Rot_Mat_idx_0;

  /* Sum: '<S261>/Subtract' incorporates:
   *  Constant: '<S261>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_fn;

  /* Sum: '<S261>/Sum2' incorporates:
   *  Gain: '<S261>/Gain2'
   *  UnitDelay: '<S261>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S277>/Switch2' incorporates:
   *  Constant: '<S261>/Constant'
   *  RelationalOperator: '<S277>/LowerRelop1'
   *  Sum: '<S261>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_fn))) {
    /* Switch: '<S277>/Switch' incorporates:
     *  Constant: '<S261>/Constant1'
     *  RelationalOperator: '<S277>/UpperRelop'
     *  Sum: '<S261>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_thetay_f = -1.0 - rtb_Add_fn;
    } else {
      rtb_thetay_f = rtb_Sum2_e;
    }

    /* End of Switch: '<S277>/Switch' */
  }

  /* End of Switch: '<S277>/Switch2' */

  /* Saturate: '<S261>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_thetay_f;
  }

  /* End of Saturate: '<S261>/Saturation1' */

  /* Sum: '<S261>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S261>/Saturation2' */
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

  /* End of Saturate: '<S261>/Saturation2' */

  /* Product: '<S369>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S379>/Switch' */
  if (!UnitDelay) {
    /* Switch: '<S379>/Switch' incorporates:
     *  Fcn: '<S380>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S379>/Switch' */

  /* Trigonometry: '<S291>/Cos4' incorporates:
   *  Switch: '<S280>/Angle_Switch'
   *  Trigonometry: '<S290>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S249>/Add1' incorporates:
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S249>/Math Function'
   *  Sum: '<S18>/Add1'
   *  Sum: '<S249>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S291>/Sin5' incorporates:
   *  UnaryMinus: '<S289>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S291>/Sin4' incorporates:
   *  Switch: '<S280>/Angle_Switch'
   *  Trigonometry: '<S290>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S291>/Cos5' incorporates:
   *  UnaryMinus: '<S289>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S291>/Subtract1' incorporates:
   *  Product: '<S291>/Product2'
   *  Product: '<S291>/Product3'
   *  Trigonometry: '<S291>/Cos4'
   *  Trigonometry: '<S291>/Sin4'
   */
  rtb_Add_fn = (rtb_Add_f1 * rtb_rx_j) + (rtb_MatrixConcatenate_b_idx_1 *
    rtb_thetay_f);

  /* Sum: '<S291>/Subtract' incorporates:
   *  Product: '<S291>/Product'
   *  Product: '<S291>/Product1'
   *  Trigonometry: '<S291>/Cos4'
   *  Trigonometry: '<S291>/Sin4'
   */
  rtb_Subtract1_jk = (rtb_Add_f1 * rtb_thetay_f) -
    (rtb_MatrixConcatenate_b_idx_1 * rtb_rx_j);

  /* Math: '<S291>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_jk, rtb_Add_fn);

  /* Switch: '<S291>/Switch' incorporates:
   *  Constant: '<S291>/Constant'
   *  Constant: '<S291>/Constant1'
   *  Constant: '<S292>/Constant'
   *  Product: '<S291>/Divide'
   *  Product: '<S291>/Divide1'
   *  RelationalOperator: '<S292>/Compare'
   *  Switch: '<S291>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_g = rtb_Add_fn / rtb_Hypot_bl;
    rtb_thetay_f = rtb_Subtract1_jk / rtb_Hypot_bl;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S291>/Switch' */

  /* Switch: '<S280>/Speed_Switch' incorporates:
   *  Abs: '<S280>/Abs'
   *  Constant: '<S288>/Constant'
   *  RelationalOperator: '<S288>/Compare'
   *  Switch: '<S280>/Angle_Switch'
   *  Trigonometry: '<S290>/Atan1'
   *  Trigonometry: '<S291>/Atan1'
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S290>/Subtract1' incorporates:
     *  Product: '<S290>/Product2'
     *  Product: '<S290>/Product3'
     *  UnaryMinus: '<S280>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S290>/Subtract' incorporates:
     *  Product: '<S290>/Product'
     *  Product: '<S290>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S290>/Hypot' */
    rtb_Subtract1_jk = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_fn);

    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S290>/Constant'
     *  Constant: '<S290>/Constant1'
     *  Constant: '<S293>/Constant'
     *  Product: '<S290>/Divide'
     *  Product: '<S290>/Divide1'
     *  RelationalOperator: '<S293>/Compare'
     *  Switch: '<S290>/Switch'
     */
    if (rtb_Subtract1_jk > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_jk;
      rtb_Add_fn /= rtb_Subtract1_jk;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S290>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_bl);
  } else {
    rtb_thetay = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S283>/Product2' incorporates:
   *  Constant: '<S283>/Constant'
   *  Switch: '<S280>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S278>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S278>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S281>/Add' incorporates:
   *  Sum: '<S282>/Sum'
   */
  rtb_Product_d = rtb_rx_j - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S253>/Product' incorporates:
   *  Abs: '<S278>/Abs'
   *  Abs: '<S281>/Abs'
   *  Constant: '<S284>/Constant'
   *  Constant: '<S294>/Constant3'
   *  Constant: '<S294>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S278>/OR'
   *  Lookup_n-D: '<S281>/1-D Lookup Table'
   *  Math: '<S294>/Math Function'
   *  RelationalOperator: '<S278>/Equal1'
   *  RelationalOperator: '<S284>/Compare'
   *  Signum: '<S278>/Sign'
   *  Signum: '<S278>/Sign1'
   *  Sum: '<S281>/Add'
   *  Sum: '<S294>/Add1'
   *  Sum: '<S294>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled42,
     Code_Gen_Model_ConstP.pooled41, 1U);

  /* Gain: '<S279>/Gain' */
  rtb_Hypot_bl = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S279>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S286>/Sum1' incorporates:
   *  Constant: '<S279>/Constant2'
   *  Product: '<S286>/Product'
   *  Sum: '<S286>/Sum'
   *  UnitDelay: '<S286>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S279>/Product' incorporates:
   *  Constant: '<S279>/Constant3'
   */
  rtb_Subtract1_jk = rtb_Add_fn * Drive_Motor_Control_D;

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
  Rot_Mat_idx_0 = rtb_Subtract1_jk - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S279>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S279>/Add' incorporates:
   *  Gain: '<S279>/Gain1'
   *  Saturate: '<S279>/Saturation'
   */
  rtb_Add_pd = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Hypot_bl) +
    Rot_Mat_idx_0;

  /* Sum: '<S279>/Subtract' incorporates:
   *  Constant: '<S279>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_pd;

  /* Sum: '<S279>/Sum2' incorporates:
   *  Gain: '<S279>/Gain2'
   *  UnitDelay: '<S279>/Unit Delay'
   */
  rtb_Hypot_bl = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S287>/Switch2' incorporates:
   *  Constant: '<S279>/Constant'
   *  RelationalOperator: '<S287>/LowerRelop1'
   *  Sum: '<S279>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_pd))) {
    /* Switch: '<S287>/Switch' incorporates:
     *  Constant: '<S279>/Constant1'
     *  RelationalOperator: '<S287>/UpperRelop'
     *  Sum: '<S279>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_pd)) {
      rtb_thetay_f = -1.0 - rtb_Add_pd;
    } else {
      rtb_thetay_f = rtb_Hypot_bl;
    }

    /* End of Switch: '<S287>/Switch' */
  }

  /* End of Switch: '<S287>/Switch2' */

  /* Saturate: '<S279>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Hypot_bl = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_f;
  }

  /* End of Saturate: '<S279>/Saturation1' */

  /* Sum: '<S279>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_pd + rtb_Hypot_bl;

  /* Saturate: '<S279>/Saturation2' */
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

  /* End of Saturate: '<S279>/Saturation2' */

  /* Sum: '<S295>/Add1' incorporates:
   *  Constant: '<S295>/Constant3'
   *  Constant: '<S295>/Constant4'
   *  Math: '<S295>/Math Function'
   *  Sum: '<S295>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S297>/Sum1' incorporates:
   *  Constant: '<S282>/Constant2'
   *  Product: '<S297>/Product'
   *  Sum: '<S297>/Sum'
   *  UnitDelay: '<S297>/Unit Delay1'
   */
  rtb_Add_pd = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S282>/Product' incorporates:
   *  Constant: '<S282>/Constant3'
   */
  rtb_Subtract1_n = rtb_Add_pd * Steering_Motor_Control_D;

  /* Sum: '<S296>/Diff' incorporates:
   *  UnitDelay: '<S296>/UD'
   *
   * Block description for '<S296>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S296>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_n - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S282>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S282>/Add' incorporates:
   *  Gain: '<S282>/Gain1'
   *  Saturate: '<S282>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_thetay_g) +
    Rot_Mat_idx_0;

  /* Sum: '<S282>/Subtract' incorporates:
   *  Constant: '<S282>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S282>/Sum2' incorporates:
   *  Gain: '<S282>/Gain2'
   *  UnitDelay: '<S282>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S298>/Switch2' incorporates:
   *  Constant: '<S282>/Constant'
   *  RelationalOperator: '<S298>/LowerRelop1'
   *  Sum: '<S282>/Subtract'
   */
  if (!(rtb_Sum2_oc > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S282>/Constant1'
     *  RelationalOperator: '<S298>/UpperRelop'
     *  Sum: '<S282>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_thetay_f = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_thetay_f = rtb_Sum2_oc;
    }

    /* End of Switch: '<S298>/Switch' */
  }

  /* End of Switch: '<S298>/Switch2' */

  /* Saturate: '<S282>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_thetay_f;
  }

  /* End of Saturate: '<S282>/Saturation1' */

  /* Sum: '<S282>/Add1' */
  Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_oc;

  /* Saturate: '<S282>/Saturation2' */
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

  /* End of Saturate: '<S282>/Saturation2' */

  /* Product: '<S369>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S384>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S384>/Switch' incorporates:
     *  Fcn: '<S385>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S384>/Switch' */

  /* Trigonometry: '<S312>/Cos4' incorporates:
   *  Switch: '<S301>/Angle_Switch'
   *  Trigonometry: '<S311>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S250>/Add1' incorporates:
   *  Constant: '<S250>/Constant3'
   *  Constant: '<S250>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S250>/Math Function'
   *  Sum: '<S18>/Add2'
   *  Sum: '<S250>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S312>/Sin5' incorporates:
   *  UnaryMinus: '<S310>/Unary Minus'
   */
  rtb_rx_j = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S312>/Sin4' incorporates:
   *  Switch: '<S301>/Angle_Switch'
   *  Trigonometry: '<S311>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S312>/Cos5' incorporates:
   *  UnaryMinus: '<S310>/Unary Minus'
   */
  rtb_thetay_f = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S312>/Subtract1' incorporates:
   *  Product: '<S312>/Product2'
   *  Product: '<S312>/Product3'
   *  Trigonometry: '<S312>/Cos4'
   *  Trigonometry: '<S312>/Sin4'
   */
  rtb_Subtract1_ie = (rtb_Add_f1 * rtb_rx_j) + (rtb_MatrixConcatenate_b_idx_1 *
    rtb_thetay_f);

  /* Sum: '<S312>/Subtract' incorporates:
   *  Product: '<S312>/Product'
   *  Product: '<S312>/Product1'
   *  Trigonometry: '<S312>/Cos4'
   *  Trigonometry: '<S312>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_f1 * rtb_thetay_f) - (rtb_MatrixConcatenate_b_idx_1 *
    rtb_rx_j);

  /* Math: '<S312>/Hypot' */
  rtb_rx_j = rt_hypotd_snf(rtb_Subtract_n, rtb_Subtract1_ie);

  /* Switch: '<S312>/Switch' incorporates:
   *  Constant: '<S312>/Constant'
   *  Constant: '<S312>/Constant1'
   *  Constant: '<S313>/Constant'
   *  Product: '<S312>/Divide'
   *  Product: '<S312>/Divide1'
   *  RelationalOperator: '<S313>/Compare'
   *  Switch: '<S312>/Switch1'
   */
  if (rtb_rx_j > 1.0E-6) {
    rtb_thetay_g = rtb_Subtract1_ie / rtb_rx_j;
    rtb_thetay_f = rtb_Subtract_n / rtb_rx_j;
  } else {
    rtb_thetay_g = 0.0;
    rtb_thetay_f = 1.0;
  }

  /* End of Switch: '<S312>/Switch' */

  /* Switch: '<S301>/Speed_Switch' incorporates:
   *  Abs: '<S301>/Abs'
   *  Constant: '<S309>/Constant'
   *  RelationalOperator: '<S309>/Compare'
   *  Switch: '<S301>/Angle_Switch'
   *  Trigonometry: '<S311>/Atan1'
   *  Trigonometry: '<S312>/Atan1'
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_thetay_f)) > 1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S311>/Subtract1' incorporates:
     *  Product: '<S311>/Product2'
     *  Product: '<S311>/Product3'
     *  UnaryMinus: '<S301>/Unary Minus'
     */
    rtb_Subtract1_ie = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S311>/Subtract' incorporates:
     *  Product: '<S311>/Product'
     *  Product: '<S311>/Product1'
     */
    rtb_Subtract_n = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S311>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract_n,
      rtb_Subtract1_ie);

    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S311>/Constant'
     *  Constant: '<S311>/Constant1'
     *  Constant: '<S314>/Constant'
     *  Product: '<S311>/Divide'
     *  Product: '<S311>/Divide1'
     *  RelationalOperator: '<S314>/Compare'
     *  Switch: '<S311>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract_n /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_ie /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract_n = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S311>/Switch1' */
    rtb_rx_j = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1, rtb_Subtract_n);
  } else {
    rtb_thetay = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_rx_j = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S304>/Product2' incorporates:
   *  Constant: '<S304>/Constant'
   *  Switch: '<S301>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S299>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S299>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S302>/Add' incorporates:
   *  Sum: '<S303>/Sum'
   */
  rtb_Product_d = rtb_rx_j - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S254>/Product' incorporates:
   *  Abs: '<S299>/Abs'
   *  Abs: '<S302>/Abs'
   *  Constant: '<S305>/Constant'
   *  Constant: '<S315>/Constant3'
   *  Constant: '<S315>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S299>/OR'
   *  Lookup_n-D: '<S302>/1-D Lookup Table'
   *  Math: '<S315>/Math Function'
   *  RelationalOperator: '<S299>/Equal1'
   *  RelationalOperator: '<S305>/Compare'
   *  Signum: '<S299>/Sign'
   *  Signum: '<S299>/Sign1'
   *  Sum: '<S302>/Add'
   *  Sum: '<S315>/Add1'
   *  Sum: '<S315>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled42,
     Code_Gen_Model_ConstP.pooled41, 1U);

  /* Gain: '<S300>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S300>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S307>/Sum1' incorporates:
   *  Constant: '<S300>/Constant2'
   *  Product: '<S307>/Product'
   *  Sum: '<S307>/Sum'
   *  UnitDelay: '<S307>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_thetay_g -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S300>/Product' incorporates:
   *  Constant: '<S300>/Constant3'
   */
  rtb_Subtract1_ie = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

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
  Rot_Mat_idx_0 = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S300>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S300>/Add' incorporates:
   *  Gain: '<S300>/Gain1'
   *  Saturate: '<S300>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_thetay_g) + rtb_Subtract_n) +
    Rot_Mat_idx_0;

  /* Sum: '<S300>/Subtract' incorporates:
   *  Constant: '<S300>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_kv;

  /* Sum: '<S300>/Sum2' incorporates:
   *  Gain: '<S300>/Gain2'
   *  UnitDelay: '<S300>/Unit Delay'
   */
  rtb_Subtract_n = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S308>/Switch2' incorporates:
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S308>/LowerRelop1'
   *  Sum: '<S300>/Subtract'
   */
  if (!(rtb_Subtract_n > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S308>/Switch' incorporates:
     *  Constant: '<S300>/Constant1'
     *  RelationalOperator: '<S308>/UpperRelop'
     *  Sum: '<S300>/Subtract1'
     */
    if (rtb_Subtract_n < (-1.0 - rtb_Add_kv)) {
      rtb_thetay_f = -1.0 - rtb_Add_kv;
    } else {
      rtb_thetay_f = rtb_Subtract_n;
    }

    /* End of Switch: '<S308>/Switch' */
  }

  /* End of Switch: '<S308>/Switch2' */

  /* Saturate: '<S300>/Saturation1' */
  if (rtb_thetay_f > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_thetay_f;
  }

  /* End of Saturate: '<S300>/Saturation1' */

  /* Sum: '<S300>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S300>/Saturation2' */
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

  /* End of Saturate: '<S300>/Saturation2' */

  /* Sum: '<S316>/Add1' incorporates:
   *  Constant: '<S316>/Constant3'
   *  Constant: '<S316>/Constant4'
   *  Math: '<S316>/Math Function'
   *  Sum: '<S316>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S318>/Sum1' incorporates:
   *  Constant: '<S303>/Constant2'
   *  Product: '<S318>/Product'
   *  Sum: '<S318>/Sum'
   *  UnitDelay: '<S318>/Unit Delay1'
   */
  rtb_rx_j = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
              Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S303>/Product' incorporates:
   *  Constant: '<S303>/Constant3'
   */
  rtb_Add_kv = rtb_rx_j * Steering_Motor_Control_D;

  /* Sum: '<S317>/Diff' incorporates:
   *  UnitDelay: '<S317>/UD'
   *
   * Block description for '<S317>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S317>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S303>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S303>/Add' incorporates:
   *  Gain: '<S303>/Gain1'
   *  Saturate: '<S303>/Saturation'
   */
  rtb_Add_f1 = (Steering_Motor_Control_P * rtb_thetay_g) + Rot_Mat_idx_0;

  /* Sum: '<S303>/Subtract' incorporates:
   *  Constant: '<S303>/Constant'
   */
  rtb_thetay_f = 1.0 - rtb_Add_f1;

  /* Sum: '<S303>/Sum2' incorporates:
   *  Gain: '<S303>/Gain2'
   *  UnitDelay: '<S303>/Unit Delay'
   */
  rtb_Subtract1_h2 = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S319>/Switch2' incorporates:
   *  Constant: '<S303>/Constant'
   *  RelationalOperator: '<S319>/LowerRelop1'
   *  Sum: '<S303>/Subtract'
   */
  if (!(rtb_Subtract1_h2 > (1.0 - rtb_Add_f1))) {
    /* Switch: '<S319>/Switch' incorporates:
     *  Constant: '<S303>/Constant1'
     *  RelationalOperator: '<S319>/UpperRelop'
     *  Sum: '<S303>/Subtract1'
     */
    if (rtb_Subtract1_h2 < (-1.0 - rtb_Add_f1)) {
      rtb_thetay_f = -1.0 - rtb_Add_f1;
    } else {
      rtb_thetay_f = rtb_Subtract1_h2;
    }

    /* End of Switch: '<S319>/Switch' */
  }

  /* End of Switch: '<S319>/Switch2' */

  /* Saturate: '<S303>/Saturation1' */
  if (rtb_thetay_f > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_h2 = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_f < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_h2 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_h2 = rtb_thetay_f;
  }

  /* End of Saturate: '<S303>/Saturation1' */

  /* Sum: '<S303>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_f1 + rtb_Subtract1_h2;

  /* Saturate: '<S303>/Saturation2' */
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

  /* End of Saturate: '<S303>/Saturation2' */

  /* Product: '<S369>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S389>/Switch' */
  if (!rtb_AT_Tag_14_Active) {
    /* Switch: '<S389>/Switch' incorporates:
     *  Fcn: '<S390>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S389>/Switch' */

  /* Trigonometry: '<S333>/Cos4' incorporates:
   *  Switch: '<S322>/Angle_Switch'
   *  Trigonometry: '<S332>/Cos4'
   */
  rtb_Add_f1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S251>/Add1' incorporates:
   *  Constant: '<S251>/Constant3'
   *  Constant: '<S251>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S251>/Math Function'
   *  Sum: '<S18>/Add3'
   *  Sum: '<S251>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S333>/Sin5' incorporates:
   *  UnaryMinus: '<S331>/Unary Minus'
   */
  rtb_thetay_f = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S333>/Sin4' incorporates:
   *  Switch: '<S322>/Angle_Switch'
   *  Trigonometry: '<S332>/Sin4'
   */
  rtb_Minus_k_idx_0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S333>/Cos5' incorporates:
   *  UnaryMinus: '<S331>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S333>/Subtract1' incorporates:
   *  Product: '<S333>/Product2'
   *  Product: '<S333>/Product3'
   *  Trigonometry: '<S333>/Cos4'
   *  Trigonometry: '<S333>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Add_f1 * rtb_thetay_f) + (rtb_Minus_k_idx_0 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S333>/Subtract' incorporates:
   *  Product: '<S333>/Product'
   *  Product: '<S333>/Product1'
   *  Trigonometry: '<S333>/Cos4'
   *  Trigonometry: '<S333>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_f1 * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Minus_k_idx_0 * rtb_thetay_f);

  /* Math: '<S333>/Hypot' */
  rtb_Hypot_o = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Minus_k_idx_1);

  /* Switch: '<S333>/Switch' incorporates:
   *  Constant: '<S333>/Constant'
   *  Constant: '<S333>/Constant1'
   *  Constant: '<S334>/Constant'
   *  Product: '<S333>/Divide'
   *  Product: '<S333>/Divide1'
   *  RelationalOperator: '<S334>/Compare'
   *  Switch: '<S333>/Switch1'
   */
  if (rtb_Hypot_o > 1.0E-6) {
    rtb_thetay_g = rtb_Minus_k_idx_1 / rtb_Hypot_o;
    rtb_MatrixConcatenate_b_idx_0 /= rtb_Hypot_o;
  } else {
    rtb_thetay_g = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S333>/Switch' */

  /* Switch: '<S322>/Speed_Switch' incorporates:
   *  Abs: '<S322>/Abs'
   *  Constant: '<S330>/Constant'
   *  RelationalOperator: '<S330>/Compare'
   *  Switch: '<S322>/Angle_Switch'
   *  Trigonometry: '<S332>/Atan1'
   *  Trigonometry: '<S333>/Atan1'
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_thetay_g, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_thetay = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S332>/Subtract1' incorporates:
     *  Product: '<S332>/Product2'
     *  Product: '<S332>/Product3'
     *  UnaryMinus: '<S322>/Unary Minus'
     */
    rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S332>/Subtract' incorporates:
     *  Product: '<S332>/Product'
     *  Product: '<S332>/Product1'
     */
    rtb_Minus_k_idx_0 = (rtb_Add_f1 * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Minus_k_idx_0 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S332>/Hypot' */
    rtb_Add_f1 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_MatrixConcatenate_b_idx_0);

    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S332>/Constant'
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S335>/Constant'
     *  Product: '<S332>/Divide'
     *  Product: '<S332>/Divide1'
     *  RelationalOperator: '<S335>/Compare'
     *  Switch: '<S332>/Switch'
     */
    if (rtb_Add_f1 > 1.0E-6) {
      rtb_Minus_k_idx_0 /= rtb_Add_f1;
      rtb_MatrixConcatenate_b_idx_0 /= rtb_Add_f1;
    } else {
      rtb_Minus_k_idx_0 = 1.0;
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S332>/Switch1' */
    rtb_thetay_f = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0,
      rtb_Minus_k_idx_0);
  } else {
    rtb_thetay = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_thetay_f = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S325>/Product2' incorporates:
   *  Constant: '<S325>/Constant'
   *  Switch: '<S322>/Speed_Switch'
   */
  rtb_thetay_g = rtb_thetay * 1530.1401357649195;

  /* Signum: '<S320>/Sign' */
  if (rtIsNaN(rtb_thetay_g)) {
    rtb_thetay = (rtNaN);
  } else if (rtb_thetay_g < 0.0) {
    rtb_thetay = -1.0;
  } else {
    rtb_thetay = (rtb_thetay_g > 0.0);
  }

  /* Signum: '<S320>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_f1 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_f1 = -1.0;
  } else {
    rtb_Add_f1 = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S323>/Add' incorporates:
   *  Sum: '<S324>/Sum'
   */
  rtb_Product_d = rtb_thetay_f - Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S255>/Product' incorporates:
   *  Abs: '<S320>/Abs'
   *  Abs: '<S323>/Abs'
   *  Constant: '<S326>/Constant'
   *  Constant: '<S336>/Constant3'
   *  Constant: '<S336>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S320>/OR'
   *  Lookup_n-D: '<S323>/1-D Lookup Table'
   *  Math: '<S336>/Math Function'
   *  RelationalOperator: '<S320>/Equal1'
   *  RelationalOperator: '<S326>/Compare'
   *  Signum: '<S320>/Sign'
   *  Signum: '<S320>/Sign1'
   *  Sum: '<S323>/Add'
   *  Sum: '<S336>/Add1'
   *  Sum: '<S336>/Add2'
   */
  rtb_thetay_g = (((real_T)((rtb_thetay == rtb_Add_f1) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled42,
     Code_Gen_Model_ConstP.pooled41, 1U);

  /* Gain: '<S321>/Gain' */
  rtb_MatrixConcatenate_b_idx_0 = Drive_Motor_Control_FF * rtb_thetay_g;

  /* Sum: '<S321>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_g -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S328>/Sum1' incorporates:
   *  Constant: '<S321>/Constant2'
   *  Product: '<S328>/Product'
   *  Sum: '<S328>/Sum'
   *  UnitDelay: '<S328>/Unit Delay1'
   */
  rtb_Add_f1 = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S321>/Product' incorporates:
   *  Constant: '<S321>/Constant3'
   */
  rtb_Minus_k_idx_0 = rtb_Add_f1 * Drive_Motor_Control_D;

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
  Rot_Mat_idx_0 = rtb_Minus_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S321>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S321>/Add' incorporates:
   *  Gain: '<S321>/Gain1'
   *  Saturate: '<S321>/Saturation'
   */
  rtb_Hypot_o = ((Drive_Motor_Control_P * rtb_thetay_g) +
                 rtb_MatrixConcatenate_b_idx_0) + Rot_Mat_idx_0;

  /* Sum: '<S321>/Subtract' incorporates:
   *  Constant: '<S321>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_o;

  /* Sum: '<S321>/Sum2' incorporates:
   *  Gain: '<S321>/Gain2'
   *  UnitDelay: '<S321>/Unit Delay'
   */
  rtb_Minus_k_idx_1 = (Drive_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S329>/Switch2' incorporates:
   *  Constant: '<S321>/Constant'
   *  RelationalOperator: '<S329>/LowerRelop1'
   *  Sum: '<S321>/Subtract'
   */
  if (!(rtb_Minus_k_idx_1 > (1.0 - rtb_Hypot_o))) {
    /* Sum: '<S321>/Subtract1' incorporates:
     *  Constant: '<S321>/Constant1'
     */
    rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_o;

    /* Switch: '<S329>/Switch' incorporates:
     *  Constant: '<S321>/Constant1'
     *  RelationalOperator: '<S329>/UpperRelop'
     *  Sum: '<S321>/Subtract1'
     */
    if (!(rtb_Minus_k_idx_1 < (-1.0 - rtb_Hypot_o))) {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Minus_k_idx_1;
    }

    /* End of Switch: '<S329>/Switch' */
  }

  /* End of Switch: '<S329>/Switch2' */

  /* Saturate: '<S321>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Minus_k_idx_1 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S321>/Saturation1' */

  /* Sum: '<S321>/Add1' */
  Rot_Mat_idx_0 = rtb_Hypot_o + rtb_Minus_k_idx_1;

  /* Saturate: '<S321>/Saturation2' */
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

  /* End of Saturate: '<S321>/Saturation2' */

  /* Sum: '<S337>/Add1' incorporates:
   *  Constant: '<S337>/Constant3'
   *  Constant: '<S337>/Constant4'
   *  Math: '<S337>/Math Function'
   *  Sum: '<S337>/Add2'
   */
  rtb_thetay_g = rt_modd_snf(rtb_Product_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S339>/Sum1' incorporates:
   *  Constant: '<S324>/Constant2'
   *  Product: '<S339>/Product'
   *  Sum: '<S339>/Sum'
   *  UnitDelay: '<S339>/Unit Delay1'
   */
  rtb_Hypot_o = ((rtb_thetay_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                 Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S324>/Product' incorporates:
   *  Constant: '<S324>/Constant3'
   */
  rtb_Product_d = rtb_Hypot_o * Steering_Motor_Control_D;

  /* Sum: '<S338>/Diff' incorporates:
   *  UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S324>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S324>/Add' incorporates:
   *  Gain: '<S324>/Gain1'
   *  Saturate: '<S324>/Saturation'
   */
  rtb_Add_lw = (Steering_Motor_Control_P * rtb_thetay_g) + Rot_Mat_idx_0;

  /* Sum: '<S324>/Subtract' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_lw;

  /* Sum: '<S324>/Sum2' incorporates:
   *  Gain: '<S324>/Gain2'
   *  UnitDelay: '<S324>/Unit Delay'
   */
  rtb_Sum2_cg = (Steering_Motor_Control_I * rtb_thetay_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S340>/Switch2' incorporates:
   *  Constant: '<S324>/Constant'
   *  RelationalOperator: '<S340>/LowerRelop1'
   *  Sum: '<S324>/Subtract'
   */
  if (!(rtb_Sum2_cg > (1.0 - rtb_Add_lw))) {
    /* Sum: '<S324>/Subtract1' incorporates:
     *  Constant: '<S324>/Constant1'
     */
    rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_lw;

    /* Switch: '<S340>/Switch' incorporates:
     *  Constant: '<S324>/Constant1'
     *  RelationalOperator: '<S340>/UpperRelop'
     *  Sum: '<S324>/Subtract1'
     */
    if (!(rtb_Sum2_cg < (-1.0 - rtb_Add_lw))) {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_cg;
    }

    /* End of Switch: '<S340>/Switch' */
  }

  /* End of Switch: '<S340>/Switch2' */

  /* Saturate: '<S324>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_cg = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_cg = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_cg = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S324>/Saturation1' */

  /* Sum: '<S324>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_lw + rtb_Sum2_cg;

  /* Saturate: '<S324>/Saturation2' */
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

  /* End of Saturate: '<S324>/Saturation2' */

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   */
  UnitDelay_e = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S77>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S77>/Delay Input1'
   *
   * Block description for '<S77>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_14_Active = (((int32_T)UnitDelay_e) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S71>/Compare' incorporates:
   *  Constant: '<S71>/Constant'
   */
  UnitDelay = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S78>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S78>/Delay Input1'
   *
   * Block description for '<S78>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)UnitDelay) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_n));

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    4.0);

  /* RelationalOperator: '<S80>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S80>/Delay Input1'
   *
   * Block description for '<S80>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_16_Active = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   */
  rtb_AT_Tag_11_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S79>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S79>/Delay Input1'
   *
   * Block description for '<S79>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_i = (((int32_T)rtb_AT_Tag_11_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S81>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   */
  rtb_AND2_k = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  rtb_AT_Tag_13_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 7.0);

  /* RelationalOperator: '<S82>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_c = (((int32_T)rtb_AT_Tag_13_Active) > ((int32_T)
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
      if (rtb_AND2_k) {
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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer) || rtb_AND2_k) {
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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AND2_k) {
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
      } else if (rtb_AND2_k) {
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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AND2_k) {
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
          rtb_AND2_k) {
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
      } else if (rtb_AND2_k) {
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
          rtb_AND2_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time2;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Mode_IN_Reverse_Intake:
      Code_Gen_Model_B.Note_State_ID = 6.1;
      Code_Gen_Model_B.Intake_Motor_DC = 1.0;
      if ((Code_Gen_Model_DW.timer > 5.0) || rtb_AND2_k) {
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
      } else if (rtb_AND2_k) {
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
      } else if (rtb_AND2_k) {
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
      Code_Gen_M_Waiting_for_Requests(&rtb_AT_Tag_14_Active,
        &rtb_AT_Tag_15_Active, &rtb_AT_Tag_16_Active, &FixPtRelationalOperator_i,
        &FixPtRelationalOperator_o, &FixPtRelationalOperator_c);
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
  rtb_MatrixConcatenate_b_idx_0 = Test_DC_Gain_Shooter *
    Code_Gen_Model_U.Gamepad_RB;

  /* Sum: '<S83>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Add_lw = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S83>/Add' incorporates:
   *  Gain: '<S83>/Gain'
   *  Gain: '<S83>/Gain1'
   */
  rtb_Add_l = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Add_lw);

  /* Switch: '<S83>/Switch' incorporates:
   *  Constant: '<S83>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S83>/Sum2' incorporates:
     *  Gain: '<S83>/Gain2'
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_Add_lw = (Shooter_Motor_Control_I * rtb_Add_lw) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S83>/Subtract' incorporates:
     *  Constant: '<S83>/Constant'
     */
    rtb_thetay_g = 1.0 - rtb_Add_l;

    /* Switch: '<S85>/Switch2' incorporates:
     *  Constant: '<S83>/Constant'
     *  RelationalOperator: '<S85>/LowerRelop1'
     *  Sum: '<S83>/Subtract'
     */
    if (!(rtb_Add_lw > (1.0 - rtb_Add_l))) {
      /* Sum: '<S83>/Subtract1' incorporates:
       *  Constant: '<S83>/Constant1'
       */
      rtb_thetay_g = -1.0 - rtb_Add_l;

      /* Switch: '<S85>/Switch' incorporates:
       *  Constant: '<S83>/Constant1'
       *  RelationalOperator: '<S85>/UpperRelop'
       *  Sum: '<S83>/Subtract1'
       */
      if (!(rtb_Add_lw < (-1.0 - rtb_Add_l))) {
        rtb_thetay_g = rtb_Add_lw;
      }

      /* End of Switch: '<S85>/Switch' */
    }

    /* End of Switch: '<S85>/Switch2' */

    /* Saturate: '<S83>/Saturation1' */
    if (rtb_thetay_g > Shooter_Motor_Control_I_UL) {
      rtb_Add_lw = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_g < Shooter_Motor_Control_I_LL) {
      rtb_Add_lw = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_lw = rtb_thetay_g;
    }

    /* End of Saturate: '<S83>/Saturation1' */
  } else {
    rtb_Add_lw = 0.0;
  }

  /* End of Switch: '<S83>/Switch' */

  /* Switch: '<S10>/Switch4' incorporates:
   *  Switch: '<S10>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S10>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      -rtb_MatrixConcatenate_b_idx_0;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S83>/Add1' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Rot_Mat_idx_0 = rtb_Add_l + rtb_Add_lw;

    /* Saturate: '<S83>/Saturation2' incorporates:
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

    /* End of Saturate: '<S83>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S10>/Switch4' */

  /* Sum: '<S84>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Add_l = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S84>/Add' incorporates:
   *  Gain: '<S84>/Gain'
   *  Gain: '<S84>/Gain1'
   */
  rtb_thetay_g = (Shooter_Motor_Control_FF *
                  Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Add_l);

  /* Switch: '<S84>/Switch' incorporates:
   *  Constant: '<S84>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S84>/Sum2' incorporates:
     *  Gain: '<S84>/Gain2'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_Add_l = (Shooter_Motor_Control_I * rtb_Add_l) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S84>/Subtract' incorporates:
     *  Constant: '<S84>/Constant'
     */
    rtb_thetay_f = 1.0 - rtb_thetay_g;

    /* Switch: '<S86>/Switch2' incorporates:
     *  Constant: '<S84>/Constant'
     *  RelationalOperator: '<S86>/LowerRelop1'
     *  Sum: '<S84>/Subtract'
     */
    if (!(rtb_Add_l > (1.0 - rtb_thetay_g))) {
      /* Sum: '<S84>/Subtract1' incorporates:
       *  Constant: '<S84>/Constant1'
       */
      rtb_thetay_f = -1.0 - rtb_thetay_g;

      /* Switch: '<S86>/Switch' incorporates:
       *  Constant: '<S84>/Constant1'
       *  RelationalOperator: '<S86>/UpperRelop'
       *  Sum: '<S84>/Subtract1'
       */
      if (!(rtb_Add_l < (-1.0 - rtb_thetay_g))) {
        rtb_thetay_f = rtb_Add_l;
      }

      /* End of Switch: '<S86>/Switch' */
    }

    /* End of Switch: '<S86>/Switch2' */

    /* Saturate: '<S84>/Saturation1' */
    if (rtb_thetay_f > Shooter_Motor_Control_I_UL) {
      rtb_Add_l = Shooter_Motor_Control_I_UL;
    } else if (rtb_thetay_f < Shooter_Motor_Control_I_LL) {
      rtb_Add_l = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_l = rtb_thetay_f;
    }

    /* End of Saturate: '<S84>/Saturation1' */
  } else {
    rtb_Add_l = 0.0;
  }

  /* End of Switch: '<S84>/Switch' */

  /* Switch: '<S10>/Switch5' incorporates:
   *  Switch: '<S10>/Switch1'
   *  Switch: '<S10>/Switch7'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      rtb_MatrixConcatenate_b_idx_0;

    /* Outport: '<Root>/Shooter_Brake_Enable' incorporates:
     *  Constant: '<S10>/Constant3'
     */
    Code_Gen_Model_Y.Shooter_Brake_Enable = 0.0;
  } else {
    if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
      /* Sum: '<S84>/Add1' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      Rot_Mat_idx_0 = rtb_thetay_g + rtb_Add_l;

      /* Saturate: '<S84>/Saturation2' incorporates:
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

      /* End of Saturate: '<S84>/Saturation2' */
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
    rtb_MatrixConcatenate_b_idx_0 = TEST_Speaker_Angle;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = look1_binlcpw
      (Code_Gen_Model_B.Distance_Speaker, Code_Gen_Model_ConstP.pooled3,
       Code_Gen_Model_ConstP.uDLookupTable1_tableData, 9U);
  }

  /* End of Switch: '<S16>/Switch5' */

  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/Constant25'
   *  Lookup_n-D: '<S16>/1-D Lookup Table2'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_thetay_f = TEST_Speaker_Height;
  } else {
    rtb_thetay_f = look1_binlcpw(Code_Gen_Model_B.Distance_Speaker,
      Code_Gen_Model_ConstP.pooled3,
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
      Code_Gen_Model_ConstP.pooled3,
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

  /* Sum: '<S25>/Subtract1' incorporates:
   *  Constant: '<S25>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S25>/Product'
   *  UnitDelay: '<S25>/Unit Delay1'
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
  Rot_Mat_idx_0 = sin(rtb_thetay);
  rtb_thetay = (d * cos_alpha) - (y * Rot_Mat_idx_0);
  d = ((d * Rot_Mat_idx_0) + (y * cos_alpha)) + 25.4;
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

  /* Gain: '<S16>/Gain2' incorporates:
   *  MATLAB Function: '<S16>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_thetay_g;

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
        Code_Gen_Model_B.Desired_Angle = rtb_MatrixConcatenate_b_idx_0;
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
        Code_Gen_Model_B.Desired_Height = rtb_thetay_f;
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
      if ((Code_Gen_Model_B.Meas_Height < (rtb_thetay_f + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_thetay_f - Tol_Height))) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Partial_to_Speaker_Final;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Final;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = rtb_MatrixConcatenate_b_idx_0;
        Code_Gen_Model_B.Desired_Height = rtb_thetay_f;
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
      Code_Gen_Model_ConstP.pooled1, 1U);
  }

  /* End of Switch: '<S10>/Switch2' */

  /* Product: '<S153>/Product3' incorporates:
   *  Constant: '<S153>/Constant1'
   */
  rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.RL_Back * 0.5;

  /* Gain: '<S16>/Gain3' */
  rtb_thetay_f = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S16>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S16>/Constant10'
   *  Constant: '<S16>/Constant11'
   *  Constant: '<S16>/Constant13'
   *  Constant: '<S16>/Constant14'
   *  Constant: '<S16>/Constant15'
   *  Constant: '<S16>/Constant21'
   */
  rtb_thetay_g = cos(rtb_thetay_f);
  rtb_thetay_f = sin(rtb_thetay_f);
  rtb_thetay = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (rtb_thetay >= 0.0) {
    rtb_Switch6 = ((rtb_thetay_g * 42.875) + ((-rtb_thetay_f) * -76.0)) + (sqrt
      (rtb_thetay) - 50.027);
  } else {
    rtb_Switch6 = ((rtb_thetay_g * 42.875) + ((-rtb_thetay_f) * -76.0)) - 50.027;
  }

  rtb_Akxhatkk1[0] = rtb_Switch6;
  rtb_Minus_n[0] = ((rtb_thetay_g * 155.54999999999998) + ((-rtb_thetay_f) *
    -25.4)) + rtb_Switch6;
  rtb_Switch6 = ((rtb_thetay_f * 42.875) + (rtb_thetay_g * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Akxhatkk1[1] = rtb_Switch6;
  rtb_Minus_n[1] = ((rtb_thetay_f * 155.54999999999998) + (rtb_thetay_g * -25.4))
    + rtb_Switch6;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Akxhatkk1[1] - 25.4) *
    (rtb_Akxhatkk1[1] - 25.4)) + (rtb_Akxhatkk1[0] * rtb_Akxhatkk1[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_thetay_g = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                      (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_thetay = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_thetay_g));
  rtb_thetay_f = ((288.925 / rtb_thetay_g) * rtb_Minus_n[1]) -
    88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (rtb_thetay * rtb_thetay) + (rtb_thetay_f
    * rtb_thetay_f);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_thetay_g;

  /* End of MATLAB Function: '<S16>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S16>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S16>/Constant23'
   *  Constant: '<S16>/Constant24'
   *  Constant: '<S16>/Constant28'
   *  Constant: '<S16>/Constant29'
   *  Constant: '<S16>/Constant30'
   *  Constant: '<S16>/Constant31'
   */
  rtb_thetay_g = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                       Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_thetay_g <= 98.425) {
    rtb_thetay_f = 79.375;
    rtb_Switch6 = 19.049999999999997;
  } else if (rtb_thetay_g <= 188.425) {
    rtb_thetay_f = rtb_thetay_g - 19.049999999999997;
    rtb_Switch6 = 19.049999999999997;
  } else {
    rtb_thetay_f = fmin(fmax(((((rtb_thetay_g - 90.0) - 19.049999999999997) -
      79.375) * 0.32) + 169.375, 79.375), 317.0);
    rtb_Switch6 = fmin(fmax(rtb_thetay_g - rtb_thetay_f, 19.049999999999997),
                       334.0);
  }

  /* Switch: '<S175>/Init' incorporates:
   *  UnitDelay: '<S175>/FixPt Unit Delay1'
   *  UnitDelay: '<S175>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k != 0) {
    rtb_thetay_g = rtb_Switch6;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S175>/Init' */

  /* Sum: '<S169>/Sum1' */
  rtb_Switch6 -= rtb_thetay_g;

  /* Switch: '<S174>/Switch2' incorporates:
   *  RelationalOperator: '<S174>/LowerRelop1'
   */
  if (!(rtb_Switch6 > rtb_MatrixConcatenate_b_idx_0)) {
    /* Switch: '<S174>/Switch' incorporates:
     *  RelationalOperator: '<S174>/UpperRelop'
     *  UnaryMinus: '<S153>/Unary Minus3'
     */
    if (rtb_Switch6 < (-rtb_MatrixConcatenate_b_idx_0)) {
      rtb_MatrixConcatenate_b_idx_0 = -rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch6;
    }

    /* End of Switch: '<S174>/Switch' */
  }

  /* End of Switch: '<S174>/Switch2' */

  /* Sum: '<S169>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_MatrixConcatenate_b_idx_0 +
    rtb_thetay_g;

  /* Sum: '<S163>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S163>/Gain1' */
  rtb_MatrixConcatenate_b_idx_0 = AA_Prop_Gain * rtb_thetay_g;

  /* RelationalOperator: '<S157>/Compare' incorporates:
   *  Constant: '<S157>/Constant'
   */
  rtb_AT_Tag_15_Active = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S163>/Switch' incorporates:
   *  Constant: '<S163>/Constant2'
   */
  if (rtb_AT_Tag_15_Active) {
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S163>/Constant3'
     *  UnitDelay: '<S178>/Delay Input1'
     *
     * Block description for '<S178>/Delay Input1':
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
      rtb_Switch6 = AA_TC_UL - rtb_MatrixConcatenate_b_idx_0;

      /* Switch: '<S179>/Switch2' incorporates:
       *  RelationalOperator: '<S179>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_Switch6)) {
        /* Sum: '<S163>/Subtract1' incorporates:
         *  Constant: '<S163>/Constant1'
         */
        rtb_Switch6 = AA_TC_LL - rtb_MatrixConcatenate_b_idx_0;

        /* Switch: '<S179>/Switch' incorporates:
         *  RelationalOperator: '<S179>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_Switch6)) {
          rtb_Switch6 = rtb_thetay_g;
        }

        /* End of Switch: '<S179>/Switch' */
      }

      /* End of Switch: '<S179>/Switch2' */

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

  /* Switch: '<S16>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S163>/Add1' */
    Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_0 + rtb_Switch6;

    /* Saturate: '<S163>/Saturation2' */
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

    /* End of Saturate: '<S163>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Switch: '<S153>/Switch' incorporates:
   *  Constant: '<S153>/Constant'
   *  Constant: '<S153>/Constant2'
   *  Constant: '<S16>/Constant28'
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  RelationalOperator: '<S153>/Relational Operator'
   *  UnitDelay: '<S153>/Unit Delay'
   */
  if (Code_Gen_Model_B.Desired_Back_Lower_Dist < 169.375) {
    rtb_thetay = 1.0;
  } else {
    rtb_thetay = 0.5;
  }

  /* Product: '<S153>/Product' incorporates:
   *  Switch: '<S153>/Switch'
   */
  rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.RL_Back * rtb_thetay;

  /* Switch: '<S173>/Init' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  UnitDelay: '<S173>/FixPt Unit Delay1'
   *  UnitDelay: '<S173>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e != 0) {
    rtb_thetay_g = rtb_thetay_f;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S173>/Init' */

  /* Sum: '<S168>/Sum1' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   */
  rtb_thetay_f -= rtb_thetay_g;

  /* Switch: '<S172>/Switch2' incorporates:
   *  RelationalOperator: '<S172>/LowerRelop1'
   */
  if (!(rtb_thetay_f > rtb_MatrixConcatenate_b_idx_0)) {
    /* Switch: '<S172>/Switch' incorporates:
     *  RelationalOperator: '<S172>/UpperRelop'
     *  UnaryMinus: '<S153>/Unary Minus2'
     */
    if (rtb_thetay_f < (-rtb_MatrixConcatenate_b_idx_0)) {
      rtb_MatrixConcatenate_b_idx_0 = -rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_thetay_f;
    }

    /* End of Switch: '<S172>/Switch' */
  }

  /* End of Switch: '<S172>/Switch2' */

  /* Sum: '<S168>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_MatrixConcatenate_b_idx_0 +
    rtb_thetay_g;

  /* Sum: '<S164>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S164>/Gain1' */
  rtb_MatrixConcatenate_b_idx_0 = AA_Prop_Gain * rtb_thetay_g;

  /* Switch: '<S164>/Switch' incorporates:
   *  Constant: '<S164>/Constant2'
   */
  if (rtb_AT_Tag_15_Active) {
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S164>/Constant3'
     *  UnitDelay: '<S180>/Delay Input1'
     *
     * Block description for '<S180>/Delay Input1':
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
      rtb_thetay_f = AA_TC_UL - rtb_MatrixConcatenate_b_idx_0;

      /* Switch: '<S181>/Switch2' incorporates:
       *  RelationalOperator: '<S181>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S164>/Subtract1' incorporates:
         *  Constant: '<S164>/Constant1'
         */
        rtb_thetay_f = AA_TC_LL - rtb_MatrixConcatenate_b_idx_0;

        /* Switch: '<S181>/Switch' incorporates:
         *  RelationalOperator: '<S181>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S181>/Switch' */
      }

      /* End of Switch: '<S181>/Switch2' */

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

  /* Switch: '<S16>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S164>/Add1' */
    Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_0 + Top_Front_Pivot_y;

    /* Saturate: '<S164>/Saturation2' */
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

    /* End of Saturate: '<S164>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch' */

  /* Product: '<S153>/Product2' */
  rtb_thetay_f = Code_Gen_Model_B.RL_Back * Code_Gen_Model_B.RL_FB_Ratio;

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

  /* Switch: '<S171>/Init' incorporates:
   *  UnitDelay: '<S171>/FixPt Unit Delay1'
   *  UnitDelay: '<S171>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_thetay_g;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S171>/Init' */

  /* Sum: '<S167>/Sum1' */
  rtb_thetay_g -= rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S170>/Switch2' incorporates:
   *  RelationalOperator: '<S170>/LowerRelop1'
   *  RelationalOperator: '<S170>/UpperRelop'
   *  Switch: '<S170>/Switch'
   *  UnaryMinus: '<S153>/Unary Minus1'
   */
  if (rtb_thetay_g > rtb_thetay_f) {
    rtb_thetay_g = rtb_thetay_f;
  } else if (rtb_thetay_g < (-rtb_thetay_f)) {
    /* Switch: '<S170>/Switch' incorporates:
     *  UnaryMinus: '<S153>/Unary Minus1'
     */
    rtb_thetay_g = -rtb_thetay_f;
  }

  /* End of Switch: '<S170>/Switch2' */

  /* Sum: '<S167>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_thetay_g +
    rtb_MatrixConcatenate_b_idx_0;

  /* Sum: '<S165>/Sum' */
  rtb_thetay_g = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S165>/Gain1' */
  rtb_MatrixConcatenate_b_idx_0 = AA_Prop_Gain * rtb_thetay_g;

  /* Switch: '<S165>/Switch' incorporates:
   *  Constant: '<S165>/Constant2'
   */
  if (rtb_AT_Tag_15_Active) {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S165>/Constant3'
     *  UnitDelay: '<S182>/Delay Input1'
     *
     * Block description for '<S182>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      d = AA_Integral_IC;
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
      rtb_thetay_f = AA_TC_UL - rtb_MatrixConcatenate_b_idx_0;

      /* Switch: '<S183>/Switch2' incorporates:
       *  RelationalOperator: '<S183>/LowerRelop1'
       */
      if (!(rtb_thetay_g > rtb_thetay_f)) {
        /* Sum: '<S165>/Subtract1' incorporates:
         *  Constant: '<S165>/Constant1'
         */
        rtb_thetay_f = AA_TC_LL - rtb_MatrixConcatenate_b_idx_0;

        /* Switch: '<S183>/Switch' incorporates:
         *  RelationalOperator: '<S183>/UpperRelop'
         */
        if (!(rtb_thetay_g < rtb_thetay_f)) {
          rtb_thetay_f = rtb_thetay_g;
        }

        /* End of Switch: '<S183>/Switch' */
      }

      /* End of Switch: '<S183>/Switch2' */

      /* Saturate: '<S165>/Saturation1' */
      if (rtb_thetay_f > AA_Integral_UL) {
        d = AA_Integral_UL;
      } else if (rtb_thetay_f < AA_Integral_LL) {
        d = AA_Integral_LL;
      } else {
        d = rtb_thetay_f;
      }

      /* End of Saturate: '<S165>/Saturation1' */
    }

    /* End of Switch: '<S165>/Switch1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S165>/Switch' */

  /* Switch: '<S16>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S165>/Add1' */
    Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_0 + d;

    /* Saturate: '<S165>/Saturation2' */
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

    /* End of Saturate: '<S165>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch2' */

  /* Switch: '<S186>/Init' incorporates:
   *  UnitDelay: '<S186>/FixPt Unit Delay1'
   *  UnitDelay: '<S186>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk != 0) {
    rtb_thetay_g = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_thetay_g = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S186>/Init' */

  /* Sum: '<S184>/Sum1' */
  rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Desired_BS_Length -
    rtb_thetay_g;

  /* Switch: '<S185>/Switch2' incorporates:
   *  Constant: '<S166>/Constant1'
   *  Constant: '<S166>/Constant3'
   *  RelationalOperator: '<S185>/LowerRelop1'
   *  RelationalOperator: '<S185>/UpperRelop'
   *  Switch: '<S185>/Switch'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > BS_Position_Inc_RL) {
    rtb_MatrixConcatenate_b_idx_0 = BS_Position_Inc_RL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < BS_Position_Dec_RL) {
    /* Switch: '<S185>/Switch' incorporates:
     *  Constant: '<S166>/Constant1'
     */
    rtb_MatrixConcatenate_b_idx_0 = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S185>/Switch2' */

  /* Sum: '<S184>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_MatrixConcatenate_b_idx_0 +
    rtb_thetay_g;

  /* Sum: '<S162>/Sum' */
  rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S177>/Sum1' incorporates:
   *  Constant: '<S162>/Constant2'
   *  Product: '<S177>/Product'
   *  Sum: '<S177>/Sum'
   *  UnitDelay: '<S177>/Unit Delay1'
   */
  y = ((rtb_MatrixConcatenate_b_idx_0 - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
       BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S162>/Product' incorporates:
   *  Constant: '<S162>/Constant3'
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
    /* Sum: '<S176>/Diff' incorporates:
     *  UnitDelay: '<S176>/UD'
     *
     * Block description for '<S176>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S176>/UD':
     *
     *  Store in Global RAM
     */
    Rot_Mat_idx_0 = cos_alpha - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S162>/Saturation' */
    if (Rot_Mat_idx_0 > BS_Deriv_UL) {
      Rot_Mat_idx_0 = BS_Deriv_UL;
    } else if (Rot_Mat_idx_0 < BS_Deriv_LL) {
      Rot_Mat_idx_0 = BS_Deriv_LL;
    }

    /* Sum: '<S162>/Add' incorporates:
     *  Gain: '<S162>/Gain1'
     *  Saturate: '<S162>/Saturation'
     */
    Rot_Mat_idx_0 += BS_Prop_Gain * rtb_MatrixConcatenate_b_idx_0;

    /* Saturate: '<S162>/Saturation2' */
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

    /* End of Saturate: '<S162>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch3' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
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
  rtb_Climber_Cmd_Direction = rtb_Switch1_ha + rtb_thetay;

  /* SignalConversion: '<S9>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S14>/Trigonometric Function1' */
  rtb_MatrixConcatenate_b_idx_0 = sin(rtb_Climber_Cmd_Direction);

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S14>/Trigonometric Function'
   */
  Rot_Mat_idx_0 = cos(rtb_Climber_Cmd_Direction);
  Rot_Mat_idx_1 = rtb_MatrixConcatenate_b_idx_0;

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus'
   */
  Rot_Mat_idx_2 = -rtb_MatrixConcatenate_b_idx_0;

  /* Sum: '<S141>/Diff' incorporates:
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
  rtb_thetay_g = rtb_Climber_Cmd_Direction - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S14>/Subtract2' incorporates:
   *  Constant: '<S14>/Constant3'
   *  Gain: '<S14>/Gain7'
   *  Math: '<S14>/Square'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - ((rtb_thetay_g * rtb_thetay_g) *
    0.16666666666666666);

  /* Gain: '<S14>/Gain6' */
  rtb_thetay_g *= 0.5;

  /* SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_g;

  /* SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_thetay_g;

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_thetay_g = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.037290702116950625;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_thetay_f = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Product: '<S14>/Product2' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_Switch1_ha = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE_ic) * 0.037290702116950625;

  /* Product: '<S14>/Product3' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_ce) * 0.037290702116950625;

  /* SignalConversion generated from: '<S14>/Product7' incorporates:
   *  Fcn: '<S146>/r->x'
   *  Fcn: '<S146>/theta->y'
   *  Fcn: '<S147>/r->x'
   *  Fcn: '<S147>/theta->y'
   *  Fcn: '<S148>/r->x'
   *  Fcn: '<S148>/theta->y'
   *  Fcn: '<S149>/r->x'
   *  Fcn: '<S149>/theta->y'
   */
  rtb_thetay_n[0] = rtb_thetay_g * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[1] = rtb_thetay_g * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[2] = rtb_thetay_f * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[3] = rtb_thetay_f * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[4] = rtb_Switch1_ha * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[5] = rtb_Switch1_ha * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
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
   *  SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_Switch1_ha = (rtb_MatrixConcatenate_b_idx_0 * rtb_Akxhatkk1[0]) +
    (rtb_POSEexponentialmatrixfori_1 * rtb_Akxhatkk1[1]);
  rtb_MatrixConcatenate_b_idx_0 = (rtb_POSEexponentialmatrixfori_0 *
    rtb_Akxhatkk1[0]) + (rtb_MatrixConcatenate_b_idx_0 * rtb_Akxhatkk1[1]);

  /* Product: '<S14>/Product6' incorporates:
   *  Concatenate: '<S14>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (Rot_Mat_idx_0 * rtb_Switch1_ha) +
    (Rot_Mat_idx_2 * rtb_MatrixConcatenate_b_idx_0);
  Code_Gen_Model_B.Product6[1] = (Rot_Mat_idx_1 * rtb_Switch1_ha) +
    (Rot_Mat_idx_0 * rtb_MatrixConcatenate_b_idx_0);

  /* Outputs for Enabled SubSystem: '<S107>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S138>/D[k]*u[k]' incorporates:
     *  Constant: '<S87>/D'
     */
    rtb_Switch1_ha = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S138>/Sum' incorporates:
     *  Constant: '<S87>/C'
     *  Delay: '<S87>/MemoryX'
     *  Product: '<S138>/C[k]*xhat[k|k-1]'
     *  Product: '<S138>/D[k]*u[k]'
     *  Sum: '<S138>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_Switch1_ha;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_Switch1_ha;

    /* Product: '<S138>/Product3' incorporates:
     *  Constant: '<S88>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S138>/Product3' incorporates:
     *  Outport: '<S138>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S107>/MeasurementUpdate' */

  /* RelationalOperator: '<S151>/Compare' incorporates:
   *  Constant: '<S150>/Constant'
   *  Constant: '<S151>/Constant'
   */
  rtb_AT_Tag_14_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S150>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S150>/Switch' incorporates:
   *  UnitDelay: '<S150>/Unit Delay'
   */
  if (rtb_AT_Tag_14_Active) {
    rtb_Switch1_ha = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S150>/Switch' */

  /* Sum: '<S150>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch1_ha;

  /* Gain: '<S150>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S150>/Switch1' incorporates:
   *  UnitDelay: '<S150>/Unit Delay1'
   */
  if (rtb_AT_Tag_14_Active) {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S150>/Switch1' */

  /* Sum: '<S150>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_MatrixConcatenate_b_idx_0;

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

  /* Update for UnitDelay: '<S68>/Delay Input1'
   *
   * Block description for '<S68>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_OR7;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' incorporates:
     *  Bias: '<S215>/Bias'
     *  Merge: '<S189>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' incorporates:
     *  Bias: '<S215>/Bias'
     *  Merge: '<S189>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S87>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S107>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S87>/A'
   *  Delay: '<S87>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S87>/MemoryX' incorporates:
   *  Constant: '<S87>/B'
   *  Product: '<S107>/A[k]*xhat[k|k-1]'
   *  Product: '<S107>/B[k]*u[k]'
   *  Sum: '<S107>/Add'
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

  /* Update for UnitDelay: '<S352>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S352>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S366>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S365>/UD'
   *
   * Block description for '<S365>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_nj;

  /* Update for UnitDelay: '<S363>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch4_g;

  /* Update for UnitDelay: '<S361>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S361>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S265>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Switch2;

  /* Update for UnitDelay: '<S264>/UD'
   *
   * Block description for '<S264>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Init;

  /* Update for UnitDelay: '<S258>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Gyro_Angle_Adjustment;

  /* Update for UnitDelay: '<S276>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_oh;

  /* Update for UnitDelay: '<S275>/UD'
   *
   * Block description for '<S275>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S261>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S286>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_fn;

  /* Update for UnitDelay: '<S285>/UD'
   *
   * Block description for '<S285>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_jk;

  /* Update for UnitDelay: '<S279>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S297>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_pd;

  /* Update for UnitDelay: '<S296>/UD'
   *
   * Block description for '<S296>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S282>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S307>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S306>/UD'
   *
   * Block description for '<S306>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S300>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S318>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_rx_j;

  /* Update for UnitDelay: '<S317>/UD'
   *
   * Block description for '<S317>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S303>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_h2;

  /* Update for UnitDelay: '<S328>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Add_f1;

  /* Update for UnitDelay: '<S327>/UD'
   *
   * Block description for '<S327>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Minus_k_idx_0;

  /* Update for UnitDelay: '<S321>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S339>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Hypot_o;

  /* Update for UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S324>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_cg;

  /* Update for UnitDelay: '<S77>/Delay Input1'
   *
   * Block description for '<S77>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay_e;

  /* Update for UnitDelay: '<S78>/Delay Input1'
   *
   * Block description for '<S78>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = UnitDelay;

  /* Update for UnitDelay: '<S80>/Delay Input1'
   *
   * Block description for '<S80>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S79>/Delay Input1'
   *
   * Block description for '<S79>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_i = rtb_AT_Tag_13_Active;

  /* Update for UnitDelay: '<S83>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Add_lw;

  /* Update for UnitDelay: '<S84>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Add_l;

  /* Update for UnitDelay: '<S175>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S175>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 0U;

  /* Update for UnitDelay: '<S178>/Delay Input1'
   *
   * Block description for '<S178>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_15_Active;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Switch6;

  /* Update for UnitDelay: '<S173>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S173>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 0U;

  /* Update for UnitDelay: '<S180>/Delay Input1'
   *
   * Block description for '<S180>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_15_Active;

  /* Update for UnitDelay: '<S164>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = Top_Front_Pivot_y;

  /* Update for UnitDelay: '<S171>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S171>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S182>/Delay Input1'
   *
   * Block description for '<S182>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_15_Active;

  /* Update for UnitDelay: '<S165>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = d;

  /* Update for UnitDelay: '<S186>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S186>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk = 0U;

  /* Update for UnitDelay: '<S177>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = y;

  /* Update for UnitDelay: '<S176>/UD'
   *
   * Block description for '<S176>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = cos_alpha;

  /* Update for UnitDelay: '<S141>/UD'
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Climber_Cmd_Direction;

  /* Update for UnitDelay: '<S142>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S143>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S144>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S144>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S145>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S145>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S150>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = rtb_Switch1_ha;

  /* Update for UnitDelay: '<S150>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_MatrixConcatenate_b_idx_0;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  Code_Gen_Model_ConstInitP.Constant9_Value[10] = rtNaN;
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

    /* InitializeConditions for Delay: '<S87>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S352>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Value;

    /* InitializeConditions for UnitDelay: '<S361>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S25>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S175>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 1U;

    /* InitializeConditions for UnitDelay: '<S173>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 1U;

    /* InitializeConditions for UnitDelay: '<S171>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S186>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S29>/Chart' */
    Code_Gen_Model_B.CurrentPriorityIndex = 1.0;

    /* End of SystemInitialize for SubSystem: '<S1>/Autonomous' */

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S410>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S17>/Spline Path Following Enabled' */
    /* Start for If: '<S193>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S189>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S193>/Robot_Index_Is_Valid' */
    /* Start for If: '<S196>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S196>/Circle_Check_Valid' */
    /* Start for If: '<S198>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S196>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S193>/Robot_Index_Is_Valid' */
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

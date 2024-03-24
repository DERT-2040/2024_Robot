/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.196
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Mar 23 22:28:38 2024
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

/* Named constants for Chart: '<S27>/Chart' */
#define Cod_IN_MoveArms_and_MoveForward ((uint8_T)6U)
#define Code_Gen_IN_CheckForRobotOrNote ((uint8_T)2U)
#define Code_Gen_IN_PathToPickUpWODetec ((uint8_T)16U)
#define Code_Gen_Model_IN_AngleArms    ((uint8_T)1U)
#define Code_Gen_Model_IN_DriveBack    ((uint8_T)3U)
#define Code_Gen_Model_IN_DriveOut     ((uint8_T)4U)
#define Code_Gen_Model_IN_End          ((uint8_T)5U)
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
#define Code_Gen_Model_IN_Reset_SPF    ((uint8_T)19U)
#define Code_Gen_Model_IN_RunIntake    ((uint8_T)20U)
#define Code_Gen_Model_IN_RunIntake1   ((uint8_T)21U)
#define Code_Gen_Model_IN_Shoot        ((uint8_T)22U)
#define Code_Gen_Model_IN_Shoot1       ((uint8_T)2U)
#define Code_Gen_Model_IN_ShootAgain   ((uint8_T)23U)
#define Code_Gen_Model_IN_ShootNote    ((uint8_T)24U)
#define Code_Gen_Model_IN_ShootWODetec ((uint8_T)25U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)26U)
#define Code_Gen_Model_t_sample        (0.02)
#define Code_Gen__IN_PathToShootWODetec ((uint8_T)18U)

/* Exported block parameters */
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S169>/Gain2'
                                        *   '<S170>/Gain2'
                                        *   '<S171>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S169>/Constant3'
                                        *   '<S170>/Constant3'
                                        *   '<S171>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S169>/Saturation1'
                                        *   '<S170>/Saturation1'
                                        *   '<S171>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S169>/Saturation1'
                                        *   '<S170>/Saturation1'
                                        *   '<S171>/Saturation1'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S169>/Gain1'
                                        *   '<S170>/Gain1'
                                        *   '<S171>/Gain1'
                                        */
real_T AA_TC_LL = -0.6;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S169>/Constant1'
                                        *   '<S169>/Saturation2'
                                        *   '<S170>/Constant1'
                                        *   '<S170>/Saturation2'
                                        *   '<S171>/Constant1'
                                        *   '<S171>/Saturation2'
                                        */
real_T AA_TC_UL = 0.6;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S169>/Constant'
                                        *   '<S169>/Saturation2'
                                        *   '<S170>/Constant'
                                        *   '<S170>/Saturation2'
                                        *   '<S171>/Constant'
                                        *   '<S171>/Saturation2'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S7>/Constant3'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S7>/Constant9'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S7>/Constant1'
                                        */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S408>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S408>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S408>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S408>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S408>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S408>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S408>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S408>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S408>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S408>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S408>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S408>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S408>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S408>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S408>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S408>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S408>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S408>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S408>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S408>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 6.985;      /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S408>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S408>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S408>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 6.985;      /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S408>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S411>/Gain2'
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
real_T Auto_Design_Path = 1.0;         /* Variable: Auto_Design_Path
                                        * Referenced by: '<S27>/Constant4'
                                        */
real_T Auto_Intake_Velocity = 0.0;     /* Variable: Auto_Intake_Velocity
                                        * Referenced by: '<S27>/Chart'
                                        */
real_T Auto_Start_Time = 1.5;          /* Variable: Auto_Start_Time
                                        * Referenced by: '<S27>/Chart'
                                        */
real_T Auto_Start_Velocity = 0.2;      /* Variable: Auto_Start_Velocity
                                        * Referenced by: '<S27>/Chart'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S168>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S168>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S168>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S168>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -30.0;     /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S172>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 30.0;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S172>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S168>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S168>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S168>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S423>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S419>/Constant'
                                        *   '<S419>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S423>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S419>/Constant1'
                                        */
real_T Climber_DutyCycle_Neg = -1.0;   /* Variable: Climber_DutyCycle_Neg
                                        * Referenced by: '<S4>/Constant3'
                                        */
real_T Climber_DutyCycle_Pos = 0.5;    /* Variable: Climber_DutyCycle_Pos
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
                                        * Referenced by: '<S348>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S264>/Constant3'
                                        *   '<S285>/Constant3'
                                        *   '<S306>/Constant3'
                                        *   '<S327>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S264>/Constant2'
                                   *   '<S285>/Constant2'
                                   *   '<S306>/Constant2'
                                   *   '<S327>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S264>/Saturation'
                                        *   '<S285>/Saturation'
                                        *   '<S306>/Saturation'
                                        *   '<S327>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S264>/Saturation'
                                        *   '<S285>/Saturation'
                                        *   '<S306>/Saturation'
                                        *   '<S327>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S264>/Gain'
                                            *   '<S285>/Gain'
                                            *   '<S306>/Gain'
                                            *   '<S327>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S264>/Gain2'
                                        *   '<S285>/Gain2'
                                        *   '<S306>/Gain2'
                                        *   '<S327>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S264>/Saturation1'
                                        *   '<S285>/Saturation1'
                                        *   '<S306>/Saturation1'
                                        *   '<S327>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S264>/Saturation1'
                                        *   '<S285>/Saturation1'
                                        *   '<S306>/Saturation1'
                                        *   '<S327>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S264>/Gain1'
                                        *   '<S285>/Gain1'
                                        *   '<S306>/Gain1'
                                        *   '<S327>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S269>/Constant'
                            *   '<S290>/Constant'
                            *   '<S311>/Constant'
                            *   '<S332>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S26>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S164>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S164>/Saturation'
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
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S8>/Constant2'
                                       *   '<S8>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S8>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S12>/Constant1'
                                        *   '<S12>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
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
real_T Note_Time_Speaker_Spin_Up = 0.5;/* Variable: Note_Time_Speaker_Spin_Up
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
                                        * Referenced by: '<S156>/Constant'
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
                                           *   '<S89>/Gain'
                                           *   '<S90>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S89>/Gain2'
                                         *   '<S90>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S89>/Saturation1'
                                          *   '<S90>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S89>/Saturation1'
                                         *   '<S90>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S89>/Gain1'
                                         *   '<S90>/Gain1'
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
                          * Referenced by: '<S249>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S249>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S196>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S209>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S249>/Constant3'
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
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S360>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S360>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S360>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S360>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S360>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S360>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S377>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S377>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S377>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S377>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S376>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S377>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S377>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S377>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S377>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S377>/Constant1'
                                   *   '<S377>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S377>/Constant'
                                   *   '<S377>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S267>/Constant3'
                                        *   '<S288>/Constant3'
                                        *   '<S309>/Constant3'
                                        *   '<S330>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S267>/Constant2'
                                *   '<S288>/Constant2'
                                *   '<S309>/Constant2'
                                *   '<S330>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S267>/Saturation'
                                           *   '<S288>/Saturation'
                                           *   '<S309>/Saturation'
                                           *   '<S330>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S267>/Saturation'
                                          *   '<S288>/Saturation'
                                          *   '<S309>/Saturation'
                                          *   '<S330>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S267>/Gain2'
                                         *   '<S288>/Gain2'
                                         *   '<S309>/Gain2'
                                         *   '<S330>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S267>/Saturation1'
                                             *   '<S288>/Saturation1'
                                             *   '<S309>/Saturation1'
                                             *   '<S330>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S267>/Saturation1'
                                            *   '<S288>/Saturation1'
                                            *   '<S309>/Saturation1'
                                            *   '<S330>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S267>/Gain1'
                                        *   '<S288>/Gain1'
                                        *   '<S309>/Gain1'
                                        *   '<S330>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S359>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S359>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S359>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S359>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S359>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S359>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S410>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S410>/Constant1'
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
                        * Referenced by: '<S347>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S347>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S347>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S347>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S347>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S347>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S411>/Gain'
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
static void Code_Gen_Model_ShootWODetec(const boolean_T *UnitDelay);
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

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Mo_CheckForRobotOrNote(void)
{
  real_T tmp;

  /* Constant: '<S27>/Constant3' */
  tmp = Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
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

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
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

/* Function for Chart: '<S27>/Chart' */
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

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathPicker(void)
{
  Code_Gen_Model_DW.is_c10_Code_Gen_Model = Cod_IN_MoveArms_and_MoveForward;
  Code_Gen_Model_B.ArmStateRequest = 1.0;
  Code_Gen_Model_B.SplineEnable = 0.0;
  Code_Gen_Model_B.RelativeMoveForward = Auto_Start_Velocity;
  Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathToPickUp(void)
{
  if (Code_Gen_Model_DW.Timer < 16.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_IN_CheckForRobotOrNote;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathToShoot(void)
{
  real_T tmp;

  /* Constant: '<S27>/Constant3' */
  tmp = Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
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

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_RunIntake(void)
{
  /* Constant: '<S27>/Constant3' */
  if ((Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
        Code_Gen_Model_B.CurrentPriorityIndex) - 1] < 6.0) &&
      (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  }

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_Shoot(void)
{
  real_T tmp;

  /* Constant: '<S27>/Constant3' */
  tmp = Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
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

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_ShootWODetec(const boolean_T *UnitDelay)
{
  boolean_T tmp;
  Code_Gen_Model_B.AutoState = 1.0;
  if ((*UnitDelay) || (Code_Gen_Model_DW.Timer > 4.0)) {
    tmp = (Code_Gen_Model_B.CurrentPriorityIndex == 2.0);
  } else {
    tmp = false;
  }

  if (tmp) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
  } else if ((*UnitDelay) || (Code_Gen_Model_DW.Timer > 3.0)) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_IN_PathToPickUpWODetec;
    Code_Gen_Model_B.AutoState = 1.1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }
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
  real_T rtb_LookupTableDynamic1_g;
  real_T rtb_LookupTableDynamic_p;
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
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T cos_alpha;
  real_T rtb_Add_ia;
  real_T rtb_Add_ie;
  real_T rtb_Add_jk;
  real_T rtb_Add_ls;
  real_T rtb_Add_nh;
  real_T rtb_Add_os;
  real_T rtb_Climber_Cmd_Direction;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Rotationmatrixfromlocalto_3;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_cj;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_jx;
  real_T rtb_Subtract1_k0;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract2;
  real_T rtb_Subtract3;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch2;
  real_T rtb_Switch2_my;
  real_T rtb_Switch2_p2;
  real_T rtb_Switch8;
  real_T rtb_Switch_pt;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T sin_alpha;
  real_T sqrt_input;
  real_T y;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s221_iter;
  uint16_T s246_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  uint8_T rtb_GameState;
  boolean_T UnitDelay;
  boolean_T UnitDelay_e;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T rtb_AND1;
  boolean_T rtb_AND4;
  boolean_T rtb_AND6;
  boolean_T rtb_AT_Tag_11_Active;
  boolean_T rtb_AT_Tag_12_Active;
  boolean_T rtb_AT_Tag_13_Active;
  boolean_T rtb_AT_Tag_14_Active;
  boolean_T rtb_AT_Tag_15_Active;
  boolean_T rtb_AT_Tag_16_Active;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_AT_Tag_6_Active;
  boolean_T rtb_AT_Target_Enable;
  boolean_T rtb_Compare_oq;
  boolean_T rtb_Compare_pf;
  boolean_T rtb_IsRedAlliance;
  boolean_T rtb_OR7;
  boolean_T rtb_Relative_Translation_Flag;

  /* Sum: '<S254>/Add1' incorporates:
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S254>/Math Function'
   *  Sum: '<S18>/Add'
   *  Sum: '<S254>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S255>/Add1' incorporates:
   *  Constant: '<S255>/Constant3'
   *  Constant: '<S255>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S255>/Math Function'
   *  Sum: '<S18>/Add1'
   *  Sum: '<S255>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Switch2_my = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S256>/Add1' incorporates:
   *  Constant: '<S256>/Constant3'
   *  Constant: '<S256>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S256>/Math Function'
   *  Sum: '<S18>/Add2'
   *  Sum: '<S256>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S14>/Product2' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S257>/Add1' incorporates:
   *  Constant: '<S257>/Constant3'
   *  Constant: '<S257>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S257>/Math Function'
   *  Sum: '<S18>/Add3'
   *  Sum: '<S257>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S14>/Product3' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S151>/Diff'
   *  UnitDelay: '<S151>/UD'
   *
   * Block description for '<S151>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S151>/UD':
   *
   *  Store in Global RAM
   */
  sqrt_input = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S14>/Product7' incorporates:
   *  Fcn: '<S152>/r->x'
   *  Fcn: '<S152>/theta->y'
   *  Fcn: '<S153>/r->x'
   *  Fcn: '<S153>/theta->y'
   *  Fcn: '<S154>/r->x'
   *  Fcn: '<S154>/theta->y'
   *  Fcn: '<S155>/r->x'
   *  Fcn: '<S155>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_thetay * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_thetay * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_Switch2_my * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_Switch2_my * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = sqrt_input * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = sqrt_input * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S93>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
   *  Sum: '<S12>/Add'
   *  Sum: '<S12>/Add1'
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

  /* Delay: '<S93>/MemoryX' incorporates:
   *  Constant: '<S93>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S39>/FixPt Relational Operator'
   *  Sum: '<S8>/Sum'
   *  UnitDelay: '<S39>/Delay Input1'
   *  UnitDelay: '<S8>/Unit Delay1'
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_thetay = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Sum: '<S8>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_thetay;

  /* Gain: '<S38>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    cos_alpha = 0.0;
  } else {
    cos_alpha = 3.1415926535897931;
  }

  /* Sum: '<S8>/Add' incorporates:
   *  Switch: '<S8>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    cos_alpha;

  /* Trigonometry: '<S14>/Trigonometric Function' */
  rtb_Switch_pt = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S14>/Trigonometric Function1' */
  sqrt_input = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch_pt;
  rtb_Rotationmatrixfromlocalto_1 = sqrt_input;

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -sqrt_input;
  rtb_Rotationmatrixfromlocalto_3 = rtb_Switch_pt;

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
  rtb_Switch_pt = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S14>/Subtract2' incorporates:
   *  Constant: '<S14>/Constant3'
   *  Gain: '<S14>/Gain7'
   *  Math: '<S14>/Square'
   */
  sqrt_input = 1.0 - ((rtb_Switch_pt * rtb_Switch_pt) * 0.16666666666666666);

  /* Gain: '<S14>/Gain6' */
  rtb_Switch_pt *= 0.5;

  /* Product: '<S14>/Product7' incorporates:
   *  Constant: '<S14>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    cos_alpha = 0.0;
    rtb_Num_Segments = 0;
    for (s221_iter = 0; s221_iter < 8; s221_iter++) {
      cos_alpha += Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s221_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = cos_alpha;
  }

  /* End of Product: '<S14>/Product7' */

  /* Product: '<S14>/Product6' incorporates:
   *  SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S14>/Unary Minus2'
   */
  rtb_Subtract3 = (sqrt_input * tmp[0]) + ((-rtb_Switch_pt) * tmp[1]);
  rtb_Subtract2 = (rtb_Switch_pt * tmp[0]) + (sqrt_input * tmp[1]);

  /* Product: '<S14>/Product6' incorporates:
   *  Concatenate: '<S14>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Subtract3) + (rtb_Rotationmatrixfromlocalto_2 * rtb_Subtract2);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 *
    rtb_Subtract3) + (rtb_Rotationmatrixfromlocalto_3 * rtb_Subtract2);

  /* Outputs for Enabled SubSystem: '<S120>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S146>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S113>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S144>/Enable'
   */
  /* Logic: '<S12>/AND' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S12>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <= KF_Vision_Ambiguity_Thresh)
      && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S144>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S93>/C'
     *  Delay: '<S93>/MemoryX'
     *  Product: '<S146>/Product'
     */
    rtb_Switch2 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2;

    /* Sum: '<S144>/Sum' incorporates:
     *  Constant: '<S93>/D'
     *  Product: '<S144>/C[k]*xhat[k|k-1]'
     *  Product: '<S144>/D[k]*u[k]'
     *  Sum: '<S144>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_2 = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_1 = rtb_Reshapey[0] -
      (rtb_Rotationmatrixfromlocalto_2 + rtb_Switch2);

    /* Product: '<S144>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S93>/C'
     *  Delay: '<S93>/MemoryX'
     *  Product: '<S146>/Product'
     */
    rtb_Switch2 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2;

    /* Sum: '<S144>/Sum' incorporates:
     *  Constant: '<S93>/D'
     *  Product: '<S144>/C[k]*xhat[k|k-1]'
     *  Product: '<S144>/D[k]*u[k]'
     *  Sum: '<S144>/Add1'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[1] -
      (rtb_Rotationmatrixfromlocalto_2 + rtb_Switch2);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S144>/Product3' incorporates:
     *  Constant: '<S94>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_1) + (-2.0601714451538746E-17 *
      rtb_Rotationmatrixfromlocalto_2);

    /* Sum: '<S146>/Add1' incorporates:
     *  Product: '<S146>/Product'
     */
    rtb_Rotationmatrixfromlocalto_3 = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S144>/Product3' incorporates:
     *  Constant: '<S94>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_1) + (0.095124921972504 *
      rtb_Rotationmatrixfromlocalto_2);

    /* Sum: '<S146>/Add1' incorporates:
     *  Product: '<S146>/Product'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S146>/Product2' incorporates:
     *  Constant: '<S94>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Rotationmatrixfromlocalto_3) + (5.9896845167210271E-17 *
      rtb_Rotationmatrixfromlocalto_2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Rotationmatrixfromlocalto_3) + (0.095124921972503981 *
      rtb_Rotationmatrixfromlocalto_2);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S144>/Product3' incorporates:
       *  Outport: '<S144>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S146>/Product2' incorporates:
       *  Outport: '<S146>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S12>/AND' */
  /* End of Outputs for SubSystem: '<S113>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S120>/Enabled Subsystem' */

  /* Sum: '<S120>/Add' incorporates:
   *  Delay: '<S93>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
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
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
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
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S12>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S9>/Switch9' incorporates:
   *  Constant: '<S57>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
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
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
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

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
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

  /* RelationalOperator: '<S56>/Compare' incorporates:
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S49>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
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
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
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
  cos_alpha = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(cos_alpha)) || (rtIsInf(cos_alpha))) {
    cos_alpha = 0.0;
  } else {
    cos_alpha = fmod(cos_alpha, 256.0);
  }

  rtb_GameState = (uint8_T)((cos_alpha < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-cos_alpha)))))) : ((int32_T)((uint8_T)cos_alpha)));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Logic: '<S9>/OR7' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S46>/Constant'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  UnitDelay: '<S15>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Prev_GameState > 2));

  /* Switch: '<S9>/Switch4' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S59>/Constant'
   *  Inport: '<Root>/Gamepad_Start'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Logic: '<S9>/OR'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S74>/FixPt Relational Operator'
   *  Switch: '<S9>/Switch5'
   *  Switch: '<S9>/Switch6'
   *  Switch: '<S9>/Switch7'
   *  Switch: '<S9>/Switch8'
   *  UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((((int32_T)rtb_OR7) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_n)) ||
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

  /* Sum: '<S7>/Subtract1' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.KF_Position_Y -
    AT_Tag_7_Coordinate_Y;

  /* Sum: '<S7>/Subtract' incorporates:
   *  Constant: '<S7>/Constant9'
   */
  rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.KF_Position_X -
    AT_Tag_7_Coordinate_X;

  /* Sum: '<S7>/Subtract3' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  rtb_Subtract3 = Code_Gen_Model_B.KF_Position_Y - AT_Tag_4_Coordinate_Y;

  /* Sum: '<S7>/Subtract2' incorporates:
   *  Constant: '<S7>/Constant3'
   */
  rtb_Subtract2 = Code_Gen_Model_B.KF_Position_X - AT_Tag_4_Coordinate_X;

  /* Switch: '<S7>/Switch1' incorporates:
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Trigonometry: '<S7>/Atan2'
     */
    Code_Gen_Model_B.Speaker_Angle = rt_atan2d_snf
      (rtb_Rotationmatrixfromlocalto_1, rtb_Rotationmatrixfromlocalto_2);
  } else {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Sum: '<S7>/Add'
     *  Trigonometry: '<S7>/Atan1'
     */
    Code_Gen_Model_B.Speaker_Angle = rt_atan2d_snf(rtb_Subtract3, rtb_Subtract2)
      + 3.1415926535897931;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  cos_alpha = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(cos_alpha)) || (rtIsInf(cos_alpha))) {
    cos_alpha = 0.0;
  } else {
    cos_alpha = fmod(cos_alpha, 4.294967296E+9);
  }

  switch ((cos_alpha < 0.0) ? (-((int32_T)((uint32_T)(-cos_alpha)))) : ((int32_T)
           ((uint32_T)cos_alpha))) {
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
       *  Chart: '<S27>/Chart'
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
    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S27>/Constant4'
     *  Inport: '<Root>/IsBlueAlliance'
     *  Switch: '<S27>/Switch4'
     */
    if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S27>/Switch3' incorporates:
       *  Constant: '<S27>/Constant4'
       */
      if (Auto_Design_Path > 1.0) {
        /* Switch: '<S27>/Switch2' incorporates:
         *  Constant: '<S27>/Constant5'
         */
        rtb_Climber_Cmd_Direction = 3.0;
      } else {
        /* Switch: '<S27>/Switch2' incorporates:
         *  Constant: '<S27>/Constant6'
         */
        rtb_Climber_Cmd_Direction = 1.0;
      }

      /* End of Switch: '<S27>/Switch3' */
    } else if (Auto_Design_Path > 1.0) {
      /* Switch: '<S27>/Switch4' incorporates:
       *  Constant: '<S27>/Constant7'
       *  Switch: '<S27>/Switch2'
       */
      rtb_Climber_Cmd_Direction = 4.0;
    } else {
      /* Switch: '<S27>/Switch2' incorporates:
       *  Constant: '<S27>/Constant9'
       *  Switch: '<S27>/Switch4'
       */
      rtb_Climber_Cmd_Direction = 2.0;
    }

    /* End of Switch: '<S27>/Switch2' */

    /* Chart: '<S27>/Chart' incorporates:
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

       case Cod_IN_MoveArms_and_MoveForward:
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        if (Code_Gen_Model_DW.Timer > Auto_Start_Time) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.AutoState = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
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
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) && (Code_Gen_Model_DW.Timer >=
             0.06)) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Reset_SPF;
          Code_Gen_Model_B.SplineEnable = 0.0;
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_RunIntake1;
          Code_Gen_Model_B.AutoState = 1.2;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = Auto_Intake_Velocity;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_PathToShoot:
        Code_Gen_Model_PathToShoot();
        break;

       case Code_Gen__IN_PathToShootWODetec:
        Code_Gen_Model_B.AutoState = 1.3;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.AutoState = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Reset_SPF:
        Code_Gen_Model_DW.is_c10_Code_Gen_Model =
          Code_Gen__IN_PathToShootWODetec;
        Code_Gen_Model_B.AutoState = 1.3;
        Code_Gen_Model_B.SplineEnable = 1.0;
        Code_Gen_Model_B.Intake_Shooter_State_Request = 6.0;
        break;

       case Code_Gen_Model_IN_RunIntake:
        Code_Gen_Model_RunIntake();
        break;

       case Code_Gen_Model_IN_RunIntake1:
        Code_Gen_Model_B.AutoState = 1.2;
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >=
             4.0)) {
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen__IN_PathToShootWODetec;
          Code_Gen_Model_B.AutoState = 1.3;
          Code_Gen_Model_B.SplineEnable = 1.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 6.0;
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
        Code_Gen_Model_ShootWODetec(&Code_Gen_Model_DW.UnitDelay_DSTATE_oz);
        break;

       default:
        /* case IN_Stop: */
        break;
      }
    }

    /* End of Chart: '<S27>/Chart' */

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S29>/Constant'
     *  RelationalOperator: '<S29>/Compare'
     */
    if (Code_Gen_Model_B.AutoState == 1.1) {
      rtb_Rotationmatrixfromlocalto_3 = 2.0;

      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      /* If: '<S27>/If' incorporates:
       *  Constant: '<S34>/Constant9'
       *  Merge: '<S27>/Merge'
       *  Selector: '<S34>/Selector'
       *  Selector: '<S34>/Selector1'
       */
      Code_Gen_Model_B.Spline_ID = Code_Gen_Model_ConstP.Constant9_Value
        [((((((int32_T)rtb_Rotationmatrixfromlocalto_3) - 1) * 10) + ((int32_T)
            Code_Gen_Model_B.CurrentPriorityIndex)) + ((((int32_T)
             rtb_Climber_Cmd_Direction) - 1) * 30)) - 1];

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem' */
    } else if (Code_Gen_Model_B.AutoState == 1.3) {
      /* Switch: '<S27>/Switch1' incorporates:
       *  Constant: '<S27>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_3 = 3.0;

      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      /* If: '<S27>/If' incorporates:
       *  Constant: '<S34>/Constant9'
       *  Merge: '<S27>/Merge'
       *  Selector: '<S34>/Selector'
       *  Selector: '<S34>/Selector1'
       */
      Code_Gen_Model_B.Spline_ID = Code_Gen_Model_ConstP.Constant9_Value
        [((((((int32_T)rtb_Rotationmatrixfromlocalto_3) - 1) * 10) + ((int32_T)
            Code_Gen_Model_B.CurrentPriorityIndex)) + ((((int32_T)
             rtb_Climber_Cmd_Direction) - 1) * 30)) - 1];

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      /* If: '<S27>/If' incorporates:
       *  Constant: '<S35>/Constant'
       *  Merge: '<S27>/Merge'
       *  SignalConversion generated from: '<S35>/Out1'
       */
      Code_Gen_Model_B.Spline_ID = 1.0;

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem1' */
    }

    /* End of Switch: '<S27>/Switch' */

    /* Selector: '<S3>/Selector' incorporates:
     *  Constant: '<S3>/Constant20'
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s221_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s221_iter] =
          Code_Gen_Model_ConstP.Constant20_Value[((((int32_T)
          Code_Gen_Model_B.Spline_ID) - 1) * 40) + s221_iter];
      }
    }

    /* End of Selector: '<S3>/Selector' */

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Selector: '<S3>/Selector1'
     */
    Code_Gen_Model_B.Spline_Num_Poses = Code_Gen_Model_ConstP.Constant6_Value
      [((int32_T)Code_Gen_Model_B.Spline_ID) - 1];

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.ArmStateRequest;

    /* Merge: '<S13>/Merge11' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.Intake_Shooter_State_Request;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.RelativeMoveForward;

    /* Logic: '<S27>/Logical Operator' incorporates:
     *  Constant: '<S31>/Constant'
     *  RelationalOperator: '<S31>/Compare'
     */
    UnitDelay = !(Code_Gen_Model_B.RelativeMoveForward != 0.0);

    /* Logic: '<S27>/Logical Operator2' incorporates:
     *  Constant: '<S33>/Constant'
     *  Logic: '<S27>/Logical Operator1'
     *  RelationalOperator: '<S33>/Compare'
     *  UnitDelay: '<S11>/Unit Delay'
     */
    UnitDelay_e = (((!Code_Gen_Model_DW.UnitDelay_DSTATE_ll) ||
                    (Code_Gen_Model_B.Intake_Shooter_State_Request == 5.0)) ||
                   UnitDelay);

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S32>/Compare'
     */
    Code_Gen_Model_B.Spline_Enable = (Code_Gen_Model_B.SplineEnable != 0.0);

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

    /* RelationalOperator: '<S26>/Compare' incorporates:
     *  Constant: '<S26>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     */
    Code_Gen_Model_B.Line_Sensor_Boolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range >= FloorDistance);

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion: '<S3>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Speaker_Angle;

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

    /* Logic: '<S408>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_IsRedAlliance = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S408>/Logical Operator4' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     */
    rtb_AT_Tag_11_Active = (((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_11_Found)) && rtb_IsRedAlliance);

    /* Logic: '<S408>/Logical Operator5' incorporates:
     *  Inport: '<Root>/AT_Tag_12_Found'
     */
    rtb_AT_Tag_12_Active = (((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_12_Found)) && rtb_IsRedAlliance);

    /* Logic: '<S408>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = (((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found)) && rtb_IsRedAlliance);

    /* Logic: '<S408>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Tag_14_Active = (((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found != 0.0)) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S408>/Logical Operator8' incorporates:
     *  Inport: '<Root>/AT_Tag_15_Found'
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Tag_15_Active = (((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_15_Found != 0.0)) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S408>/Logical Operator9' incorporates:
     *  Inport: '<Root>/AT_Tag_16_Found'
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Tag_16_Active = (((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_16_Found != 0.0)) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S408>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Tag_6_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S408>/Logical Operator2' */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) && rtb_IsRedAlliance);

    /* Switch: '<S408>/Switch15' incorporates:
     *  Switch: '<S408>/Switch1'
     *  Switch: '<S408>/Switch12'
     *  Switch: '<S408>/Switch13'
     *  Switch: '<S408>/Switch14'
     *  Switch: '<S408>/Switch16'
     *  Switch: '<S408>/Switch17'
     *  Switch: '<S408>/Switch18'
     *  Switch: '<S408>/Switch19'
     *  Switch: '<S408>/Switch20'
     *  Switch: '<S408>/Switch21'
     *  Switch: '<S408>/Switch22'
     *  Switch: '<S408>/Switch23'
     *  Switch: '<S408>/Switch24'
     *  Switch: '<S408>/Switch25'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S408>/Switch15' incorporates:
       *  Constant: '<S408>/Constant9'
       *  Sum: '<S408>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch23' incorporates:
       *  Constant: '<S408>/Constant28'
       *  Sum: '<S408>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_6_Active) {
      /* Switch: '<S408>/Switch15' incorporates:
       *  Constant: '<S408>/Constant5'
       *  Sum: '<S408>/Add16'
       *  Switch: '<S408>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch23' incorporates:
       *  Constant: '<S408>/Constant27'
       *  Sum: '<S408>/Add22'
       *  Switch: '<S408>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S408>/Switch15' incorporates:
       *  Constant: '<S408>/Constant4'
       *  Sum: '<S408>/Add10'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_11_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch23' incorporates:
       *  Constant: '<S408>/Constant26'
       *  Sum: '<S408>/Add12'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_11_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S408>/Switch15' incorporates:
       *  Constant: '<S408>/Constant17'
       *  Sum: '<S408>/Add11'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch12'
       *  Switch: '<S408>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_12_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch23' incorporates:
       *  Constant: '<S408>/Constant3'
       *  Sum: '<S408>/Add13'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch20'
       *  Switch: '<S408>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_12_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S408>/Switch15' incorporates:
       *  Constant: '<S408>/Constant18'
       *  Sum: '<S408>/Add14'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch12'
       *  Switch: '<S408>/Switch13'
       *  Switch: '<S408>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_13_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch23' incorporates:
       *  Constant: '<S408>/Constant21'
       *  Sum: '<S408>/Add20'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch20'
       *  Switch: '<S408>/Switch21'
       *  Switch: '<S408>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_13_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S408>/Switch14' incorporates:
       *  Constant: '<S408>/Constant19'
       *  Sum: '<S408>/Add15'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch12'
       *  Switch: '<S408>/Switch13'
       *  Switch: '<S408>/Switch15'
       *  Switch: '<S408>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_14_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch22' incorporates:
       *  Constant: '<S408>/Constant23'
       *  Sum: '<S408>/Add21'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch20'
       *  Switch: '<S408>/Switch21'
       *  Switch: '<S408>/Switch23'
       *  Switch: '<S408>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_14_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S408>/Switch17' incorporates:
       *  Constant: '<S408>/Constant20'
       *  Sum: '<S408>/Add18'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch12'
       *  Switch: '<S408>/Switch13'
       *  Switch: '<S408>/Switch14'
       *  Switch: '<S408>/Switch15'
       *  Switch: '<S408>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_15_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch25' incorporates:
       *  Constant: '<S408>/Constant24'
       *  Sum: '<S408>/Add24'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch20'
       *  Switch: '<S408>/Switch21'
       *  Switch: '<S408>/Switch22'
       *  Switch: '<S408>/Switch23'
       *  Switch: '<S408>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_15_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S408>/Switch18' incorporates:
       *  Constant: '<S408>/Constant22'
       *  Sum: '<S408>/Add19'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch12'
       *  Switch: '<S408>/Switch13'
       *  Switch: '<S408>/Switch14'
       *  Switch: '<S408>/Switch15'
       *  Switch: '<S408>/Switch16'
       *  Switch: '<S408>/Switch17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_16_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S408>/Switch26' incorporates:
       *  Constant: '<S408>/Constant25'
       *  Sum: '<S408>/Add25'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch20'
       *  Switch: '<S408>/Switch21'
       *  Switch: '<S408>/Switch22'
       *  Switch: '<S408>/Switch23'
       *  Switch: '<S408>/Switch24'
       *  Switch: '<S408>/Switch25'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_16_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S408>/Switch15' incorporates:
       *  Constant: '<S408>/Constant1'
       *  Switch: '<S408>/Switch1'
       *  Switch: '<S408>/Switch12'
       *  Switch: '<S408>/Switch13'
       *  Switch: '<S408>/Switch14'
       *  Switch: '<S408>/Switch16'
       *  Switch: '<S408>/Switch17'
       *  Switch: '<S408>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S408>/Switch23' incorporates:
       *  Constant: '<S408>/Constant2'
       *  Switch: '<S408>/Switch19'
       *  Switch: '<S408>/Switch20'
       *  Switch: '<S408>/Switch21'
       *  Switch: '<S408>/Switch22'
       *  Switch: '<S408>/Switch24'
       *  Switch: '<S408>/Switch25'
       *  Switch: '<S408>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S408>/Switch15' */

    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S427>/Constant'
     *  Constant: '<S428>/Constant'
     *  Logic: '<S422>/AND'
     *  RelationalOperator: '<S427>/Compare'
     *  RelationalOperator: '<S428>/Compare'
     *  Switch: '<S422>/Switch2'
     *  UnitDelay: '<S422>/Unit Delay'
     *  UnitDelay: '<S422>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_3 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S422>/Switch1' */

    /* Lookup_n-D: '<S411>/Modulation_Drv' incorporates:
     *  Math: '<S411>/Magnitude'
     */
    rtb_Climber_Cmd_Direction = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S420>/Compare' incorporates:
     *  Constant: '<S420>/Constant'
     */
    rtb_Compare_pf = (rtb_Climber_Cmd_Direction == 0.0);

    /* Logic: '<S411>/Logical Operator' incorporates:
     *  Constant: '<S421>/Constant'
     *  RelationalOperator: '<S421>/Compare'
     */
    rtb_Relative_Translation_Flag = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_Compare_pf);

    /* Switch: '<S411>/Switch1' incorporates:
     *  Switch: '<S411>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S411>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S411>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S411>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S411>/Switch5' */
    } else if (rtb_Compare_pf) {
      /* Switch: '<S411>/Switch6' incorporates:
       *  Constant: '<S411>/Constant'
       *  Constant: '<S411>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S411>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        cos_alpha = 0.0;
      } else {
        cos_alpha = 3.1415926535897931;
      }

      /* Merge: '<S13>/Merge3' incorporates:
       *  Sum: '<S411>/Add1'
       *  Switch: '<S411>/Switch4'
       *  Switch: '<S411>/Switch6'
       *  Trigonometry: '<S411>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + cos_alpha;
    } else {
      /* Merge: '<S13>/Merge3' incorporates:
       *  Switch: '<S411>/Switch4'
       *  Trigonometry: '<S411>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_3, rtb_Switch2);
    }

    /* End of Switch: '<S411>/Switch1' */

    /* Sum: '<S410>/Add' incorporates:
     *  Constant: '<S410>/Constant'
     *  Constant: '<S410>/Constant1'
     *  Lookup_n-D: '<S410>/Modulation_Str_Y_Rel'
     *  Product: '<S410>/Product'
     *  Product: '<S410>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_Init = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                Steering_Relative_Gain) + (Code_Gen_Model_B.Steer_Joystick_Z *
      Steering_Twist_Gain);

    /* RelationalOperator: '<S412>/Compare' incorporates:
     *  Constant: '<S412>/Constant'
     */
    rtb_Compare_oq = (rtb_Init == 0.0);

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S20>/Switch1'
     *  Switch: '<S411>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      UnitDelay = Code_Gen_Model_U.Is_Absolute_Translation;
      UnitDelay_e = Code_Gen_Model_U.Is_Absolute_Steering;
    } else {
      UnitDelay = !rtb_Relative_Translation_Flag;
      UnitDelay_e = rtb_Compare_oq;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Switch: '<S410>/Switch8' incorporates:
     *  RelationalOperator: '<S418>/FixPt Relational Operator'
     *  UnitDelay: '<S410>/Unit Delay3'
     *  UnitDelay: '<S418>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((int32_T)rtb_Compare_oq) > ((int32_T)
         Code_Gen_Model_DW.DelayInput1_DSTATE_j)) {
      rtb_Switch8 = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      rtb_Switch8 = Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S410>/Switch8' */

    /* Logic: '<S410>/AND1' incorporates:
     *  Logic: '<S410>/AND2'
     *  Logic: '<S410>/AND3'
     *  RelationalOperator: '<S413>/FixPt Relational Operator'
     *  RelationalOperator: '<S414>/FixPt Relational Operator'
     *  RelationalOperator: '<S415>/FixPt Relational Operator'
     *  RelationalOperator: '<S416>/FixPt Relational Operator'
     *  UnitDelay: '<S410>/Unit Delay2'
     *  UnitDelay: '<S413>/Delay Input1'
     *  UnitDelay: '<S414>/Delay Input1'
     *  UnitDelay: '<S415>/Delay Input1'
     *  UnitDelay: '<S416>/Delay Input1'
     *
     * Block description for '<S413>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S414>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S415>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S416>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND1 = (rtb_Compare_oq && (((((((int32_T)
      Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2))) ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S408>/Logical Operator11' */
    rtb_AT_Target_Enable = (((Code_Gen_Model_B.Align_Trap) ||
      (Code_Gen_Model_B.Align_Amp)) || (Code_Gen_Model_B.Align_Speaker));

    /* Logic: '<S410>/AND4' incorporates:
     *  Logic: '<S410>/AND5'
     *  RelationalOperator: '<S417>/FixPt Relational Operator'
     *  UnitDelay: '<S410>/Unit Delay4'
     *  UnitDelay: '<S417>/Delay Input1'
     *
     * Block description for '<S417>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND4 = (rtb_Compare_oq && ((((int32_T)rtb_AT_Target_Enable) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft)) ||
      (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S410>/AND6' */
    rtb_AND6 = (rtb_AND1 || rtb_AND4);

    /* Switch: '<S410>/Switch10' */
    if (rtb_AND6) {
      /* Switch: '<S410>/Switch10' incorporates:
       *  Constant: '<S410>/Constant10'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S410>/Switch10' */
      Code_Gen_Model_B.Steering_Abs_Gyro = rtb_Switch8;
    }

    /* End of Switch: '<S410>/Switch10' */

    /* Switch: '<S408>/Switch2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S408>/Logical Operator'
     *  Logic: '<S408>/Logical Operator1'
     *  Switch: '<S408>/Switch10'
     *  Switch: '<S408>/Switch11'
     *  Switch: '<S408>/Switch3'
     *  Switch: '<S408>/Switch4'
     *  Switch: '<S408>/Switch5'
     *  Switch: '<S408>/Switch6'
     *  Switch: '<S408>/Switch7'
     *  Switch: '<S408>/Switch8'
     *  Switch: '<S408>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && rtb_IsRedAlliance) {
      /* Switch: '<S408>/Switch2' */
      Code_Gen_Model_B.AT_Target_Angle = Code_Gen_Model_B.Speaker_Angle;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.IsBlueAlliance != 0.0)) {
      /* Switch: '<S408>/Switch3' incorporates:
       *  Switch: '<S408>/Switch2'
       */
      Code_Gen_Model_B.AT_Target_Angle = Code_Gen_Model_B.Speaker_Angle;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S408>/Switch4' incorporates:
       *  Constant: '<S408>/Constant14'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_AT_Tag_6_Active) {
      /* Switch: '<S408>/Switch5' incorporates:
       *  Constant: '<S408>/Constant13'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    } else if (rtb_AT_Tag_11_Active) {
      /* Switch: '<S408>/Switch6' incorporates:
       *  Constant: '<S408>/Constant12'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_11_Field_Angle;
    } else if (rtb_AT_Tag_12_Active) {
      /* Switch: '<S408>/Switch7' incorporates:
       *  Constant: '<S408>/Constant11'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       *  Switch: '<S408>/Switch6'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_12_Field_Angle;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S408>/Switch8' incorporates:
       *  Constant: '<S408>/Constant10'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       *  Switch: '<S408>/Switch6'
       *  Switch: '<S408>/Switch7'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_13_Field_Angle;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S408>/Switch9' incorporates:
       *  Constant: '<S408>/Constant8'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       *  Switch: '<S408>/Switch6'
       *  Switch: '<S408>/Switch7'
       *  Switch: '<S408>/Switch8'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_14_Field_Angle;
    } else if (rtb_AT_Tag_15_Active) {
      /* Switch: '<S408>/Switch10' incorporates:
       *  Constant: '<S408>/Constant7'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       *  Switch: '<S408>/Switch6'
       *  Switch: '<S408>/Switch7'
       *  Switch: '<S408>/Switch8'
       *  Switch: '<S408>/Switch9'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_15_Field_Angle;
    } else if (rtb_AT_Tag_16_Active) {
      /* Switch: '<S408>/Switch11' incorporates:
       *  Constant: '<S408>/Constant6'
       *  Switch: '<S408>/Switch10'
       *  Switch: '<S408>/Switch2'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       *  Switch: '<S408>/Switch6'
       *  Switch: '<S408>/Switch7'
       *  Switch: '<S408>/Switch8'
       *  Switch: '<S408>/Switch9'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_16_Field_Angle;
    } else {
      /* Switch: '<S408>/Switch2' incorporates:
       *  Constant: '<S408>/Constant'
       *  Switch: '<S408>/Switch10'
       *  Switch: '<S408>/Switch11'
       *  Switch: '<S408>/Switch3'
       *  Switch: '<S408>/Switch4'
       *  Switch: '<S408>/Switch5'
       *  Switch: '<S408>/Switch6'
       *  Switch: '<S408>/Switch7'
       *  Switch: '<S408>/Switch8'
       *  Switch: '<S408>/Switch9'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    }

    /* End of Switch: '<S408>/Switch2' */

    /* Switch: '<S410>/Switch4' incorporates:
     *  Constant: '<S410>/Constant5'
     *  Switch: '<S410>/Switch1'
     *  Switch: '<S410>/Switch5'
     *  Switch: '<S410>/Switch6'
     *  Switch: '<S410>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch2_my = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S410>/Switch5' incorporates:
       *  Constant: '<S410>/Constant6'
       */
      rtb_Switch2_my = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S410>/Switch6' incorporates:
       *  Constant: '<S410>/Constant7'
       *  Switch: '<S410>/Switch5'
       */
      rtb_Switch2_my = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S410>/Switch7' incorporates:
       *  Constant: '<S410>/Constant8'
       *  Switch: '<S410>/Switch5'
       *  Switch: '<S410>/Switch6'
       */
      rtb_Switch2_my = 4.71238898038469;
    } else if (rtb_AND4) {
      /* Switch: '<S410>/Switch1' incorporates:
       *  Switch: '<S410>/Switch5'
       *  Switch: '<S410>/Switch6'
       *  Switch: '<S410>/Switch7'
       */
      rtb_Switch2_my = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S410>/Switch6' incorporates:
       *  Switch: '<S410>/Switch5'
       *  Switch: '<S410>/Switch7'
       *  UnitDelay: '<S410>/Unit Delay1'
       */
      rtb_Switch2_my = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S410>/Switch4' */

    /* Switch: '<S410>/Switch3' */
    if (rtb_AND6) {
      /* Switch: '<S410>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch2_my;
    } else {
      /* Switch: '<S410>/Switch3' incorporates:
       *  Constant: '<S410>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S410>/Switch3' */

    /* Merge: '<S13>/Merge1' incorporates:
     *  Sum: '<S410>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion: '<S410>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Init;

    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S419>/Constant'
     *  Constant: '<S419>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Switch2_p2 = Boost_Trigger_High_Speed;
    } else {
      rtb_Switch2_p2 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S419>/Switch1' */

    /* Switch: '<S426>/Init' incorporates:
     *  UnitDelay: '<S426>/FixPt Unit Delay1'
     *  UnitDelay: '<S426>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init = rtb_Switch2_p2;
    } else {
      rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2;
    }

    /* End of Switch: '<S426>/Init' */

    /* Sum: '<S424>/Sum1' */
    rtb_Switch2_p2 -= rtb_Init;

    /* Switch: '<S425>/Switch2' incorporates:
     *  Constant: '<S423>/Constant1'
     *  Constant: '<S423>/Constant3'
     *  RelationalOperator: '<S425>/LowerRelop1'
     *  RelationalOperator: '<S425>/UpperRelop'
     *  Switch: '<S425>/Switch'
     */
    if (rtb_Switch2_p2 > Boost_Trigger_Increasing_Limit) {
      rtb_Switch2_p2 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Switch2_p2 < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S425>/Switch' incorporates:
       *  Constant: '<S423>/Constant1'
       */
      rtb_Switch2_p2 = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S425>/Switch2' */

    /* Sum: '<S424>/Sum' */
    rtb_Init += rtb_Switch2_p2;

    /* Switch: '<S411>/Switch' incorporates:
     *  Switch: '<S411>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S411>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        Code_Gen_Model_B.Drive_Joystick_Z;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S411>/Gain2'
       *  Math: '<S411>/Magnitude1'
       *  Switch: '<S411>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S419>/Product' incorporates:
       *  Switch: '<S411>/Switch2'
       */
      cos_alpha = rtb_Climber_Cmd_Direction * rtb_Init;

      /* Saturate: '<S419>/Saturation' incorporates:
       *  Switch: '<S411>/Switch2'
       */
      if (cos_alpha > Boost_Trigger_High_Speed) {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (cos_alpha < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = cos_alpha;
      }

      /* End of Saturate: '<S419>/Saturation' */
    }

    /* End of Switch: '<S411>/Switch' */

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

    /* Update for UnitDelay: '<S422>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_3;

    /* Update for UnitDelay: '<S422>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S418>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_Compare_oq;

    /* Update for UnitDelay: '<S410>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE = rtb_Switch8;

    /* Update for UnitDelay: '<S413>/Delay Input1'
     *
     * Block description for '<S413>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S414>/Delay Input1'
     *
     * Block description for '<S414>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S415>/Delay Input1'
     *
     * Block description for '<S415>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S416>/Delay Input1'
     *
     * Block description for '<S416>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S410>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S417>/Delay Input1'
     *
     * Block description for '<S417>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = rtb_AT_Target_Enable;

    /* Update for UnitDelay: '<S410>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND4;

    /* Update for UnitDelay: '<S410>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch2_my;

    /* Update for UnitDelay: '<S426>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S426>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S426>/FixPt Unit Delay1' */
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
   *  Constant: '<S246>/Constant'
   *  Logic: '<S246>/AND'
   *  MATLAB Function: '<S196>/Find closest index to curve'
   *  Product: '<S246>/Product'
   *  RelationalOperator: '<S246>/Relational Operator'
   *  RelationalOperator: '<S246>/Relational Operator1'
   *  Selector: '<S246>/Selector'
   *  Selector: '<S246>/Selector1'
   *  Selector: '<S247>/Selector'
   *  Sum: '<S246>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S199>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S202>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S204>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S199>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S17>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* InitializeConditions for If: '<S17>/If' incorporates:
       *  UnitDelay: '<S194>/Unit Delay'
       *  UnitDelay: '<S195>/Unit Delay'
       *  UnitDelay: '<S197>/Unit Delay'
       *  UnitDelay: '<S197>/Unit Delay1'
       *  UnitDelay: '<S247>/Unit Delay'
       *  UnitDelay: '<S247>/Unit Delay1'
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
     *  ActionPort: '<S194>/Action Port'
     */
    /* Selector: '<S195>/Selector1' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S195>/Selector1' */

    /* Lookup_n-D: '<S194>/Capture Radius' incorporates:
     *  UnitDelay: '<S194>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_3 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled5,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S195>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S195>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S199>/If' incorporates:
     *  RelationalOperator: '<S199>/ '
     *  UnitDelay: '<S195>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S202>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S204>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S199>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S202>/Action Port'
       */
      /* InitializeConditions for If: '<S199>/If' incorporates:
       *  UnitDelay: '<S202>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S199>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S199>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S202>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S202>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S205>/Action Port'
       */
      /* If: '<S202>/If' incorporates:
       *  Selector: '<S195>/Selector1'
       *  Selector: '<S202>/Selector'
       *  Selector: '<S205>/Selector'
       */
      sqrt_input = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S202>/Increment_If_Rectangle_Check' */

      /* Sum: '<S202>/Minus' incorporates:
       *  Concatenate: '<S195>/Matrix Concatenate2'
       *  Selector: '<S202>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - sqrt_input;

      /* Outputs for IfAction SubSystem: '<S202>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S205>/Action Port'
       */
      /* If: '<S202>/If' incorporates:
       *  Selector: '<S195>/Selector1'
       *  Selector: '<S202>/Selector'
       *  Selector: '<S205>/Selector'
       *  Sum: '<S202>/Minus'
       */
      rtb_Switch2_my = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S202>/Increment_If_Rectangle_Check' */

      /* Sum: '<S202>/Minus' incorporates:
       *  Concatenate: '<S195>/Matrix Concatenate2'
       *  Selector: '<S202>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2_my;

      /* Math: '<S202>/Hypot' */
      rtb_Switch2 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S202>/Equal' */
      UnitDelay_e = (Code_Gen_Model_B.Spline_Num_Poses ==
                     Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S202>/Switch' incorporates:
       *  Logic: '<S202>/AND'
       *  Logic: '<S202>/OR'
       *  RelationalOperator: '<S202>/Relational Operator'
       *  UnitDelay: '<S202>/Unit Delay'
       */
      UnitDelay = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Switch2 <=
        rtb_Rotationmatrixfromlocalto_3) && UnitDelay_e));

      /* If: '<S202>/If' */
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
        /* Disable for If: '<S204>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S202>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S204>/Action Port'
         */
        /* If: '<S204>/If' incorporates:
         *  RelationalOperator: '<S204>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S204>/Is_Last_Point' incorporates:
           *  ActionPort: '<S207>/Action Port'
           */
          /* InitializeConditions for If: '<S204>/If' incorporates:
           *  UnitDelay: '<S207>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S204>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S204>/Is_Last_Point' incorporates:
           *  ActionPort: '<S207>/Action Port'
           */
          /* Switch: '<S207>/Switch' incorporates:
           *  Constant: '<S209>/Constant'
           *  Logic: '<S207>/OR'
           *  RelationalOperator: '<S209>/Compare'
           *  UnitDelay: '<S207>/Unit Delay'
           */
          rtb_AT_Tag_11_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Switch2 <= Spline_Stop_Radius));

          /* If: '<S207>/If' */
          if (rtb_AT_Tag_11_Active) {
            /* Outputs for IfAction SubSystem: '<S207>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S210>/Action Port'
             */
            /* Merge: '<S199>/Merge2' incorporates:
             *  Constant: '<S210>/Constant'
             *  SignalConversion generated from: '<S210>/Robot_Reached_Destination'
             */
            UnitDelay_e = true;

            /* SignalConversion generated from: '<S210>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S210>/Constant1'
             */
            rtb_IsRedAlliance = false;

            /* End of Outputs for SubSystem: '<S207>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S207>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S211>/Action Port'
             */
            /* Merge: '<S199>/Merge2' incorporates:
             *  Constant: '<S211>/Constant'
             *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
             */
            UnitDelay_e = false;

            /* SignalConversion generated from: '<S211>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S211>/Constant1'
             */
            rtb_IsRedAlliance = true;

            /* End of Outputs for SubSystem: '<S207>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S207>/If' */

          /* Merge: '<S199>/Merge4' incorporates:
           *  SignalConversion: '<S207>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S207>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_11_Active;

          /* End of Outputs for SubSystem: '<S204>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S204>/Increment_Search' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          /* Merge: '<S199>/Merge2' incorporates:
           *  Constant: '<S206>/Constant'
           *  SignalConversion generated from: '<S206>/Robot_Reached_Destination'
           */
          UnitDelay_e = false;

          /* SignalConversion generated from: '<S206>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S206>/Constant1'
           */
          rtb_IsRedAlliance = false;

          /* Merge: '<S199>/Merge4' incorporates:
           *  Constant: '<S208>/FixPt Constant'
           *  SignalConversion: '<S206>/Signal Copy'
           *  Sum: '<S208>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S204>/Increment_Search' */
        }

        /* End of If: '<S204>/If' */
        /* End of Outputs for SubSystem: '<S202>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S202>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S205>/Action Port'
         */
        /* Sum: '<S212>/FixPt Sum1' incorporates:
         *  Constant: '<S212>/FixPt Constant'
         */
        rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S205>/Selector1' incorporates:
         *  Selector: '<S195>/Selector1'
         */
        rtb_Switch2_p2 = rtb_Ref_Poses[((int32_T)rtb_Switch2) - 1];

        /* Sum: '<S213>/Subtract' incorporates:
         *  Selector: '<S205>/Selector1'
         *  Sum: '<S213>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_p2 - sqrt_input;

        /* Selector: '<S205>/Selector1' incorporates:
         *  Selector: '<S195>/Selector1'
         */
        rtb_Init = rtb_Ref_Poses[((int32_T)rtb_Switch2) + 9];

        /* Sum: '<S213>/Subtract' incorporates:
         *  Selector: '<S205>/Selector1'
         *  Sum: '<S213>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Init - rtb_Switch2_my;

        /* Math: '<S213>/Hypot' */
        rtb_Switch8 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S213>/Divide' */
        rtb_Switch2 = rtb_Minus_n[1];

        /* UnaryMinus: '<S213>/Unary Minus' */
        rtb_Switch_pt = rtb_Minus_n[0];

        /* Product: '<S213>/Product' incorporates:
         *  Product: '<S213>/Divide'
         *  UnaryMinus: '<S213>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2 / rtb_Switch8) *
          rtb_Rotationmatrixfromlocalto_3;
        rtb_Minus_n[1] = ((-rtb_Switch_pt) / rtb_Switch8) *
          rtb_Rotationmatrixfromlocalto_3;

        /* Sum: '<S213>/Add1' incorporates:
         *  Sum: '<S213>/Add2'
         *  Sum: '<S213>/Minus'
         */
        rtb_Switch_pt = rtb_Switch2_p2 - rtb_Minus_n[0];

        /* Sum: '<S213>/Minus4' incorporates:
         *  Sum: '<S213>/Add2'
         *  Sum: '<S213>/Minus'
         */
        rtb_Switch2_p2 = (rtb_Switch2_p2 + rtb_Minus_n[0]) - rtb_Switch_pt;

        /* Sum: '<S213>/Minus5' incorporates:
         *  Concatenate: '<S195>/Matrix Concatenate2'
         *  Sum: '<S213>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Switch_pt;

        /* Sum: '<S213>/Add' incorporates:
         *  Sum: '<S213>/Add2'
         *  Sum: '<S213>/Minus1'
         */
        rtb_Switch2 = sqrt_input - rtb_Minus_n[0];

        /* Sum: '<S213>/Minus' incorporates:
         *  Sum: '<S213>/Minus1'
         */
        rtb_Switch_pt -= rtb_Switch2;

        /* DotProduct: '<S213>/Dot Product' incorporates:
         *  Concatenate: '<S195>/Matrix Concatenate2'
         *  Sum: '<S213>/Minus'
         *  Sum: '<S213>/Minus1'
         *  Sum: '<S213>/Minus5'
         */
        rtb_Switch8 = (rtb_Reshapey[0] - rtb_Switch2) * rtb_Switch_pt;

        /* DotProduct: '<S213>/Dot Product1' incorporates:
         *  Sum: '<S213>/Minus'
         */
        sqrt_input = rtb_Switch_pt * rtb_Switch_pt;

        /* DotProduct: '<S213>/Dot Product2' incorporates:
         *  Sum: '<S213>/Minus4'
         *  Sum: '<S213>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p2 *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S213>/Dot Product3' incorporates:
         *  Sum: '<S213>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Switch2_p2 * rtb_Switch2_p2;

        /* Sum: '<S213>/Add1' incorporates:
         *  Sum: '<S213>/Add2'
         *  Sum: '<S213>/Minus'
         */
        rtb_Switch_pt = rtb_Init - rtb_Minus_n[1];

        /* Sum: '<S213>/Minus4' incorporates:
         *  Sum: '<S213>/Add2'
         *  Sum: '<S213>/Minus'
         */
        rtb_Switch2_p2 = (rtb_Init + rtb_Minus_n[1]) - rtb_Switch_pt;

        /* Sum: '<S213>/Minus5' incorporates:
         *  Concatenate: '<S195>/Matrix Concatenate2'
         *  Sum: '<S213>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Switch_pt;

        /* Sum: '<S213>/Add' incorporates:
         *  Sum: '<S213>/Add2'
         *  Sum: '<S213>/Minus1'
         */
        rtb_Switch2 = rtb_Switch2_my - rtb_Minus_n[1];

        /* Sum: '<S213>/Minus' incorporates:
         *  Sum: '<S213>/Minus1'
         */
        rtb_Switch_pt -= rtb_Switch2;

        /* DotProduct: '<S213>/Dot Product' incorporates:
         *  Concatenate: '<S195>/Matrix Concatenate2'
         *  Sum: '<S213>/Minus'
         *  Sum: '<S213>/Minus1'
         *  Sum: '<S213>/Minus5'
         */
        rtb_Switch8 += (rtb_Reshapey[1] - rtb_Switch2) * rtb_Switch_pt;

        /* RelationalOperator: '<S214>/Compare' incorporates:
         *  Constant: '<S214>/Constant'
         */
        UnitDelay_e = (rtb_Switch8 >= 0.0);

        /* RelationalOperator: '<S213>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S213>/Dot Product1'
         *  Sum: '<S213>/Minus'
         */
        rtb_IsRedAlliance = (rtb_Switch8 <= ((rtb_Switch_pt * rtb_Switch_pt) +
          sqrt_input));

        /* DotProduct: '<S213>/Dot Product2' incorporates:
         *  Sum: '<S213>/Minus4'
         *  Sum: '<S213>/Minus5'
         */
        rtb_Switch8 = (rtb_Switch2_p2 * rtb_Rotationmatrixfromlocalto_0) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S199>/Merge4' incorporates:
         *  Constant: '<S215>/Constant'
         *  DataTypeConversion: '<S205>/Data Type Conversion'
         *  DotProduct: '<S213>/Dot Product3'
         *  Logic: '<S213>/AND'
         *  RelationalOperator: '<S213>/LessThanOrEqual1'
         *  RelationalOperator: '<S215>/Compare'
         *  Sum: '<S205>/Add'
         *  Sum: '<S213>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)(((UnitDelay_e &&
          rtb_IsRedAlliance) && (rtb_Switch8 >= 0.0)) && (rtb_Switch8 <=
          ((rtb_Switch2_p2 * rtb_Switch2_p2) + rtb_MatrixConcatenate_b_idx_1))))
          + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S205>/Constant2'
         *  SignalConversion generated from: '<S205>/Robot_Reached_Destination'
         */
        UnitDelay_e = false;

        /* SignalConversion generated from: '<S205>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S205>/Constant1'
         */
        rtb_IsRedAlliance = false;

        /* End of Outputs for SubSystem: '<S202>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S202>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S203>/Action Port'
         */
        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S203>/Constant2'
         *  SignalConversion generated from: '<S203>/Robot_Reached_Destination'
         */
        UnitDelay_e = false;

        /* SignalConversion generated from: '<S203>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S203>/Constant1'
         */
        rtb_IsRedAlliance = false;

        /* Merge: '<S199>/Merge4' incorporates:
         *  SignalConversion generated from: '<S203>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S202>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S199>/Merge1' incorporates:
       *  Constant: '<S202>/Constant'
       *  SignalConversion generated from: '<S202>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S202>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay;

      /* End of Outputs for SubSystem: '<S199>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S199>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S201>/Action Port'
       */
      /* Merge: '<S199>/Merge1' incorporates:
       *  Constant: '<S201>/Constant'
       *  SignalConversion generated from: '<S201>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S199>/Merge2' incorporates:
       *  Constant: '<S201>/Constant1'
       *  SignalConversion generated from: '<S201>/Robot_Reached_Destination'
       */
      UnitDelay_e = false;

      /* SignalConversion generated from: '<S201>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S201>/Constant2'
       */
      rtb_IsRedAlliance = false;

      /* Merge: '<S199>/Merge4' incorporates:
       *  SignalConversion generated from: '<S201>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S199>/Escape_Auto_Driving' */
    }

    /* End of If: '<S199>/If' */

    /* If: '<S195>/If1' */
    if (!rtb_IsRedAlliance) {
      /* Outputs for IfAction SubSystem: '<S195>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S200>/Action Port'
       */
      /* Bias: '<S216>/Add Constant' incorporates:
       *  Bias: '<S216>/Bias'
       *  Sum: '<S216>/Subtract'
       */
      rtb_Switch2 = ((Code_Gen_Model_B.Spline_Num_Poses -
                      Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S216>/Selector4' incorporates:
       *  Bias: '<S216>/Bias1'
       *  Constant: '<S218>/FixPt Constant'
       *  Sum: '<S218>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S216>/Selector4' */
      s221_iter = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s221_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Bias1_p = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S216>/Matrix Concatenate' incorporates:
       *  Bias: '<S216>/Add Constant1'
       *  Gain: '<S219>/Gain'
       *  Gain: '<S220>/Gain'
       *  Selector: '<S195>/Selector1'
       *  Selector: '<S216>/Selector'
       *  Selector: '<S216>/Selector1'
       *  Selector: '<S216>/Selector2'
       *  Selector: '<S216>/Selector3'
       *  Sum: '<S219>/Subtract'
       *  Sum: '<S220>/Subtract'
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

        /* Selector: '<S216>/Selector4' incorporates:
         *  Bias: '<S216>/Add Constant1'
         *  Gain: '<S219>/Gain'
         *  Selector: '<S216>/Selector'
         *  Selector: '<S216>/Selector1'
         *  Sum: '<S219>/Subtract'
         */
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s221_iter;
             rtb_Num_Segments++) {
          rtb_Selector4[rtb_Num_Segments + (Code_Gen_Model_DW.Selector4_DIMS1[0]
            * i)] = rtb_Assignment[((rtb_Num_Segments + rtb_Bias1_p) + (12 * i))
            - 1];
        }
      }

      /* End of Concatenate: '<S216>/Matrix Concatenate' */

      /* Assignment: '<S216>/Assignment' incorporates:
       *  Selector: '<S216>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s221_iter = 0; s221_iter < rtb_Bias1_p; s221_iter++) {
          rtb_Assignment[s221_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s221_iter];
        }

        i += 12;
      }

      /* End of Assignment: '<S216>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S217>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S221>/While Iterator'
       */
      s221_iter = 1;
      do {
        rtb_Switch_pt = rtb_Assignment[s221_iter + 1];
        rtb_Reshapey[0] = rtb_Switch_pt - rtb_Assignment[s221_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s221_iter] - rtb_Assignment[s221_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch_pt - rtb_Assignment[s221_iter];
        rtb_Switch_pt = rtb_Assignment[s221_iter + 13];
        rtb_Reshapey[1] = rtb_Switch_pt - rtb_Assignment[s221_iter + 11];
        sqrt_input = rtb_Assignment[s221_iter + 12];
        rtb_Minus_n[1] = sqrt_input - rtb_Assignment[s221_iter + 14];
        rtb_Add2_f[1] = rtb_Switch_pt - sqrt_input;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch8 = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2_my = rt_powd_snf(rtb_Switch8, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Switch8, 3.0);
          rtb_Init = (rtb_Switch8 - (2.0 * rtb_Switch2_my)) +
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Switch2_p2 = rtb_Switch2_my - rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Switch2_my) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Init) +
            (rtb_Minus_n[0] * rtb_Switch2_p2)) * 0.0) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s221_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Init) +
            (rtb_Minus_n[1] * rtb_Switch2_p2)) * 0.0) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + sqrt_input;
          rtb_Init = ((3.0 * rtb_Switch2_my) - (4.0 * rtb_Switch8)) + 1.0;
          rtb_Switch2_p2 = (2.0 * rtb_Switch8) - (3.0 * rtb_Switch2_my);
          rtb_Switch2_my = (rtb_Switch8 - rtb_Switch2_my) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Init) +
            (rtb_Minus_n[0] * rtb_Switch2_p2)) * 0.0) + (rtb_Add2_f[0] *
            rtb_Switch2_my);
          rtb_Switch_pt = (((rtb_Reshapey[1] * rtb_Init) + (rtb_Minus_n[1] *
            rtb_Switch2_p2)) * 0.0) + (rtb_Add2_f[1] * rtb_Switch2_my);
          rtb_Switch2_my = (6.0 * rtb_Switch8) - 4.0;
          rtb_Init = (-6.0 * rtb_Switch8) + 2.0;
          rtb_Switch8 = (-12.0 * rtb_Switch8) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch2_my) + (rtb_Minus_n[1] * rtb_Init)) * 0.0) + (rtb_Add2_f
            [1] * rtb_Switch8)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch2_my) + (rtb_Minus_n[0] * rtb_Init))
               * 0.0) + (rtb_Add2_f[0] * rtb_Switch8)) * rtb_Switch_pt)) /
            rt_powd_snf(rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0,
            rtb_Switch_pt), 3.0);
        }

        if (s221_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s221_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch8 = rtb_Switch2 - ((real_T)s221_iter);
        rtb_Num_Segments = s221_iter;
        s221_iter++;
      } while ((rtb_Switch8 >= 4.0) && (s221_iter <= 3));

      /* End of Outputs for SubSystem: '<S217>/Sampling_Loop' */

      /* SignalConversion generated from: '<S200>/Position_and_Curvature' incorporates:
       *  Assignment: '<S221>/Assignment'
       *  Merge: '<S195>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S195>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S195>/If Action Subsystem' incorporates:
       *  ActionPort: '<S198>/Action Port'
       */
      /* Product: '<S198>/Product' incorporates:
       *  Selector: '<S195>/Selector'
       *  Selector: '<S195>/Selector1'
       */
      rtb_Switch8 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S198>/Product1' incorporates:
       *  Selector: '<S195>/Selector'
       *  Selector: '<S195>/Selector1'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) +
        9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S198>/Product' incorporates:
         *  Constant: '<S198>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch8;

        /* Product: '<S198>/Product1' incorporates:
         *  Constant: '<S198>/Constant2'
         *  Product: '<S198>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2;
      }

      /* Assignment: '<S198>/Assignment' incorporates:
       *  Concatenate: '<S198>/Matrix Concatenate'
       *  Merge: '<S195>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S198>/Assignment' */

      /* SignalConversion generated from: '<S198>/Num_Segments' incorporates:
       *  Constant: '<S198>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S195>/If Action Subsystem' */
    }

    /* End of If: '<S195>/If1' */

    /* Concatenate: '<S196>/Matrix Concatenate' incorporates:
     *  Merge: '<S195>/Merge'
     *  Selector: '<S196>/Selector'
     *  Selector: '<S196>/Selector1'
     *  Selector: '<S196>/Selector3'
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

    /* End of Concatenate: '<S196>/Matrix Concatenate' */

    /* MATLAB Function: '<S196>/Distance Along Curve' incorporates:
     *  Concatenate: '<S196>/Matrix Concatenate'
     *  Selector: '<S196>/Selector4'
     *  Selector: '<S196>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s221_iter = 0; s221_iter < 149; s221_iter++) {
      /* Outputs for Iterator SubSystem: '<S217>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S221>/While Iterator'
       */
      rtb_Assignment_d[s221_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s221_iter + 1] -
         rtb_MatrixConcatenate_o[s221_iter], rtb_MatrixConcatenate_o[s221_iter +
         151] - rtb_MatrixConcatenate_o[s221_iter + 150]) +
        rtb_Assignment_d[s221_iter];

      /* End of Outputs for SubSystem: '<S217>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S196>/Distance Along Curve' */

    /* MATLAB Function: '<S196>/Find closest index to curve' incorporates:
     *  Concatenate: '<S196>/Matrix Concatenate'
     *  Selector: '<S196>/Selector4'
     *  Selector: '<S196>/Selector5'
     *  Selector: '<S247>/Selector'
     */
    for (s221_iter = 0; s221_iter < 150; s221_iter++) {
      /* Outputs for Iterator SubSystem: '<S217>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S221>/While Iterator'
       */
      distance_from_robot[s221_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s221_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s221_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S217>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s221_iter = 1;
    } else {
      s221_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s221_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s221_iter == 0) {
      rtb_Switch2 = distance_from_robot[0];
    } else {
      rtb_Switch2 = distance_from_robot[s221_iter - 1];
      for (rtb_Bias1_p = s221_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch8 = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2 > rtb_Switch8) {
          rtb_Switch2 = rtb_Switch8;
        }
      }
    }

    s221_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s221_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S247>/Selector' incorporates:
     *  Constant: '<S247>/Constant'
     *  MATLAB Function: '<S196>/Find closest index to curve'
     *  MinMax: '<S247>/Min'
     */
    rtb_Switch8 = rtb_Assignment_d[((int32_T)fmin(50.0, s221_iter)) - 1];

    /* If: '<S247>/If' incorporates:
     *  RelationalOperator: '<S247>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S247>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S250>/Action Port'
       */
      /* SignalConversion generated from: '<S250>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S252>/FixPt Sum1' incorporates:
       *  Constant: '<S252>/FixPt Constant'
       */
      rtb_Switch2 = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S250>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S250>/Selector11'
       *  Selector: '<S250>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S250>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S250>/Selector1'
       *  Selector: '<S250>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S250>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S250>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2), &rtb_Minus_n[0], rtb_Switch8,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S250>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S250>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S250>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch8,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S247>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S247>/Latch' incorporates:
       *  ActionPort: '<S251>/Action Port'
       */
      /* SignalConversion generated from: '<S251>/In1' incorporates:
       *  UnitDelay: '<S247>/Unit Delay1'
       */
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S251>/In2' incorporates:
       *  UnitDelay: '<S247>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S247>/Latch' */
    }

    /* End of If: '<S247>/If' */

    /* MinMax: '<S194>/Min' incorporates:
     *  Lookup_n-D: '<S194>/Lookahead Distance'
     *  UnitDelay: '<S194>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_3 = fmin(rtb_Rotationmatrixfromlocalto_3,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled5,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S196>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S246>/While Iterator'
     */
    s246_iter = 1U;
    UnitDelay = true;
    while (UnitDelay && (s246_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S196>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S246>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s246_iter;
      UnitDelay = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                    (rtb_Assignment_d[s221_iter - 1] +
                     rtb_Rotationmatrixfromlocalto_3)) &&
                   (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments)
        * 50.0)));
      s246_iter++;
    }

    /* End of Outputs for SubSystem: '<S196>/Find first index that meets distance target' */

    /* Switch: '<S249>/Switch' incorporates:
     *  Concatenate: '<S196>/Matrix Concatenate'
     *  Constant: '<S196>/Constant'
     *  Constant: '<S246>/Constant'
     *  Constant: '<S249>/Constant1'
     *  Constant: '<S249>/Constant2'
     *  Constant: '<S249>/Constant3'
     *  Logic: '<S246>/AND'
     *  MATLAB Function: '<S196>/Find closest index to curve'
     *  Math: '<S249>/Hypot'
     *  Merge: '<S13>/Merge8'
     *  MinMax: '<S249>/Min'
     *  MinMax: '<S249>/Min1'
     *  Product: '<S246>/Product'
     *  Product: '<S249>/Divide'
     *  Product: '<S249>/Product'
     *  Product: '<S249>/Product1'
     *  RelationalOperator: '<S196>/Relational Operator'
     *  RelationalOperator: '<S246>/Relational Operator'
     *  RelationalOperator: '<S246>/Relational Operator1'
     *  Selector: '<S196>/Selector10'
     *  Selector: '<S196>/Selector7'
     *  Selector: '<S196>/Selector8'
     *  Selector: '<S196>/Selector9'
     *  Selector: '<S246>/Selector'
     *  Selector: '<S246>/Selector1'
     *  Selector: '<S247>/Selector'
     *  Sqrt: '<S249>/Sqrt'
     *  Sum: '<S196>/Subtract'
     *  Sum: '<S246>/Add'
     *  Sum: '<S249>/Subtract'
     *  Sum: '<S249>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_3 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses
        [9] - Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch2 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Rotationmatrixfromlocalto_3 = fmin(rtb_Switch2 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S249>/Switch' */

    /* Logic: '<S197>/OR' */
    rtb_IsRedAlliance = (UnitDelay_e || (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S197>/Switch1' incorporates:
     *  Switch: '<S197>/Switch'
     *  UnitDelay: '<S197>/Unit Delay'
     */
    if (rtb_IsRedAlliance) {
      /* Merge: '<S17>/Merge2' incorporates:
       *  Constant: '<S197>/Constant3'
       *  SignalConversion: '<S197>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch8 = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S17>/Merge2' incorporates:
       *  SignalConversion: '<S197>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_3;
      rtb_Switch8 = rtb_Merge1;
    }

    /* End of Switch: '<S197>/Switch1' */

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion: '<S197>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch8;

    /* Selector: '<S196>/Selector6' incorporates:
     *  Concatenate: '<S196>/Matrix Concatenate'
     *  Selector: '<S196>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S196>/Selector2' incorporates:
     *  Concatenate: '<S196>/Matrix Concatenate'
     *  Selector: '<S196>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S197>/Switch2' incorporates:
     *  Sum: '<S253>/Subtract'
     *  Sum: '<S253>/Subtract1'
     *  Trigonometry: '<S253>/Atan2'
     *  UnitDelay: '<S197>/Unit Delay1'
     */
    if (rtb_IsRedAlliance) {
      rtb_Switch2_my = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2_my = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S197>/Switch2' */

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion: '<S197>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2_my;

    /* Merge: '<S17>/Merge7' incorporates:
     *  SignalConversion: '<S194>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = UnitDelay_e;

    /* Merge: '<S17>/Merge1' incorporates:
     *  Constant: '<S197>/Constant2'
     *  SignalConversion generated from: '<S194>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S17>/Merge4' incorporates:
     *  Constant: '<S197>/Constant5'
     *  SignalConversion generated from: '<S194>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S17>/Merge5' incorporates:
     *  Constant: '<S197>/Constant6'
     *  SignalConversion generated from: '<S194>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S17>/Merge8' incorporates:
     *  SignalConversion generated from: '<S194>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S195>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S194>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_3;

    /* Update for UnitDelay: '<S247>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2;

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S197>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch8;

    /* Update for UnitDelay: '<S197>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2_my;

    /* End of Outputs for SubSystem: '<S17>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S17>/Pass Through' incorporates:
     *  ActionPort: '<S193>/Action Port'
     */
    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S193>/Constant'
     *  SignalConversion generated from: '<S193>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = true;

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion generated from: '<S193>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S17>/Merge1' incorporates:
     *  SignalConversion generated from: '<S193>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S17>/Merge2' incorporates:
     *  SignalConversion generated from: '<S193>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion generated from: '<S193>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S17>/Merge4' incorporates:
     *  SignalConversion generated from: '<S193>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = UnitDelay;

    /* Merge: '<S17>/Merge5' incorporates:
     *  SignalConversion generated from: '<S193>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = UnitDelay_e;

    /* Merge: '<S17>/Merge8' incorporates:
     *  SignalConversion generated from: '<S193>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S17>/Pass Through' */
  }

  /* End of If: '<S17>/If' */

  /* Signum: '<S347>/Sign2' incorporates:
   *  UnitDelay: '<S347>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    cos_alpha = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S347>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S347>/Product1' incorporates:
   *  Signum: '<S347>/Sign1'
   *  Signum: '<S347>/Sign2'
   */
  cos_alpha *= rtb_Add_ie;
  if (rtIsNaN(cos_alpha)) {
    i = 0;
  } else {
    i = (int32_T)fmod(cos_alpha, 256.0);
  }

  /* Switch: '<S347>/Switch' incorporates:
   *  Constant: '<S347>/Constant'
   *  Constant: '<S352>/Constant'
   *  Constant: '<S353>/Constant'
   *  Logic: '<S347>/or'
   *  Product: '<S347>/Product1'
   *  RelationalOperator: '<S352>/Compare'
   *  RelationalOperator: '<S353>/Compare'
   *  UnitDelay: '<S347>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    sqrt_input = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S347>/Switch' */

  /* Switch: '<S358>/Init' incorporates:
   *  UnitDelay: '<S358>/FixPt Unit Delay1'
   *  UnitDelay: '<S358>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = sqrt_input;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S358>/Init' */

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  UnitDelay = (sqrt_input == 0.0);

  /* RelationalOperator: '<S355>/Compare' incorporates:
   *  Constant: '<S355>/Constant'
   */
  UnitDelay_e = (sqrt_input > 0.0);

  /* Abs: '<S347>/Abs' incorporates:
   *  Sum: '<S347>/Subtract'
   *  UnitDelay: '<S347>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S347>/Switch5' incorporates:
   *  Constant: '<S347>/Constant1'
   *  Switch: '<S347>/Switch1'
   *  UnaryMinus: '<S347>/Unary Minus'
   */
  if (UnitDelay) {
    /* SignalConversion generated from: '<S347>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S347>/Constant4'
     *  Constant: '<S347>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S347>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S347>/Constant2'
     *  Constant: '<S347>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S347>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S347>/Lookup Table Dynamic'
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
    cos_alpha = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S347>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S347>/Constant10'
     *  Constant: '<S347>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S347>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S347>/Constant7'
     *  Constant: '<S347>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S347>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S347>/Lookup Table Dynamic1'
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

    /* Switch: '<S347>/Switch3' incorporates:
     *  Constant: '<S347>/Constant1'
     *  Constant: '<S347>/Constant3'
     *  UnaryMinus: '<S347>/Unary Minus'
     */
    if (UnitDelay_e) {
      cos_alpha = Translation_Speed_Rate_Limit_Inc;
    } else {
      cos_alpha = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S347>/Switch3' */
  }

  /* End of Switch: '<S347>/Switch5' */

  /* Product: '<S347>/Product' incorporates:
   *  Switch: '<S347>/Switch1'
   */
  rtb_uDLookupTable_l = cos_alpha * rtb_Merge1;

  /* Sum: '<S356>/Sum1' */
  rtb_Rotationmatrixfromlocalto_3 = sqrt_input - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S357>/Switch2' incorporates:
   *  RelationalOperator: '<S357>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_3 > rtb_uDLookupTable_l)) {
    /* Switch: '<S347>/Switch2' incorporates:
     *  Constant: '<S347>/Constant1'
     *  Switch: '<S347>/Switch4'
     */
    if (UnitDelay) {
      rtb_Switch2 = Translation_Speed_Rate_Limit_Dec;
    } else if (UnitDelay_e) {
      /* Switch: '<S347>/Switch4' incorporates:
       *  Constant: '<S347>/Constant1'
       */
      rtb_Switch2 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S347>/Switch4' incorporates:
       *  Constant: '<S347>/Constant3'
       *  UnaryMinus: '<S347>/Unary Minus1'
       */
      rtb_Switch2 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S347>/Switch2' */

    /* Product: '<S347>/Product2' */
    rtb_Switch2 *= rtb_Merge1;

    /* Switch: '<S357>/Switch' incorporates:
     *  RelationalOperator: '<S357>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_3 < rtb_Switch2) {
      rtb_uDLookupTable_l = rtb_Switch2;
    } else {
      rtb_uDLookupTable_l = rtb_Rotationmatrixfromlocalto_3;
    }

    /* End of Switch: '<S357>/Switch' */
  }

  /* End of Switch: '<S357>/Switch2' */

  /* Sum: '<S356>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S350>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S350>/Switch' incorporates:
     *  Constant: '<S382>/Constant3'
     *  Constant: '<S382>/Constant4'
     *  Math: '<S382>/Math Function'
     *  Sum: '<S350>/Subtract'
     *  Sum: '<S382>/Add1'
     *  Sum: '<S382>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S350>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S350>/Switch' */

  /* Sum: '<S378>/Add1' incorporates:
   *  Constant: '<S378>/Constant3'
   *  Constant: '<S378>/Constant4'
   *  Math: '<S378>/Math Function'
   *  Sum: '<S377>/Sum'
   *  Sum: '<S378>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - Code_Gen_Model_B.Gyro_Angle_SPF) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S380>/Sum1' incorporates:
   *  Constant: '<S377>/Constant2'
   *  Product: '<S380>/Product'
   *  Sum: '<S380>/Sum'
   *  UnitDelay: '<S380>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S377>/Product' incorporates:
   *  Constant: '<S377>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_3 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S379>/Diff' incorporates:
   *  UnitDelay: '<S379>/UD'
   *
   * Block description for '<S379>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S379>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Rotationmatrixfromlocalto_3 - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S377>/Saturation' */
  if (cos_alpha > Steering_Heading_Control_D_UL) {
    cos_alpha = Steering_Heading_Control_D_UL;
  } else if (cos_alpha < Steering_Heading_Control_D_LL) {
    cos_alpha = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S377>/Add' incorporates:
   *  Gain: '<S377>/Gain1'
   *  Saturate: '<S377>/Saturation'
   */
  rtb_Switch8 = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    cos_alpha;

  /* Sum: '<S377>/Subtract' incorporates:
   *  Constant: '<S377>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Switch8;

  /* Sum: '<S377>/Sum2' incorporates:
   *  Gain: '<S377>/Gain2'
   *  UnitDelay: '<S377>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S381>/Switch2' incorporates:
   *  RelationalOperator: '<S381>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_uDLookupTable_l)) {
    /* Sum: '<S377>/Subtract1' incorporates:
     *  Constant: '<S377>/Constant1'
     */
    rtb_Switch2_my = Steering_Heading_Control_Total_LL - rtb_Switch8;

    /* Switch: '<S381>/Switch' incorporates:
     *  RelationalOperator: '<S381>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Switch2_my) {
      rtb_uDLookupTable_l = rtb_Switch2_my;
    } else {
      rtb_uDLookupTable_l = rtb_Switch2;
    }

    /* End of Switch: '<S381>/Switch' */
  }

  /* End of Switch: '<S381>/Switch2' */

  /* Saturate: '<S377>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S377>/Saturation1' */

  /* Sum: '<S377>/Add1' */
  cos_alpha = rtb_Switch8 + rtb_Switch2;

  /* Saturate: '<S377>/Saturation2' */
  if (cos_alpha > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S377>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (cos_alpha < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S377>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S377>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = cos_alpha;
  }

  /* End of Saturate: '<S377>/Saturation2' */

  /* Switch: '<S361>/Switch' incorporates:
   *  Abs: '<S361>/Abs'
   *  Constant: '<S361>/Constant'
   *  Constant: '<S376>/Constant'
   *  RelationalOperator: '<S376>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
  }

  /* End of Switch: '<S361>/Switch' */

  /* Signum: '<S360>/Sign2' incorporates:
   *  UnitDelay: '<S360>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    cos_alpha = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S360>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S360>/Product1' incorporates:
   *  Signum: '<S360>/Sign1'
   *  Signum: '<S360>/Sign2'
   */
  cos_alpha *= rtb_Add_ie;
  if (rtIsNaN(cos_alpha)) {
    i = 0;
  } else {
    i = (int32_T)fmod(cos_alpha, 256.0);
  }

  /* Switch: '<S360>/Switch' incorporates:
   *  Constant: '<S360>/Constant'
   *  Constant: '<S369>/Constant'
   *  Constant: '<S370>/Constant'
   *  Logic: '<S360>/or'
   *  Product: '<S360>/Product1'
   *  RelationalOperator: '<S369>/Compare'
   *  RelationalOperator: '<S370>/Compare'
   *  UnitDelay: '<S360>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Init = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S360>/Switch' */

  /* Switch: '<S375>/Init' incorporates:
   *  UnitDelay: '<S375>/FixPt Unit Delay1'
   *  UnitDelay: '<S375>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Switch2_my = rtb_Init;
  } else {
    rtb_Switch2_my = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S375>/Init' */

  /* RelationalOperator: '<S371>/Compare' incorporates:
   *  Constant: '<S371>/Constant'
   */
  UnitDelay = (rtb_Init == 0.0);

  /* RelationalOperator: '<S372>/Compare' incorporates:
   *  Constant: '<S372>/Constant'
   */
  UnitDelay_e = (rtb_Init > 0.0);

  /* Abs: '<S360>/Abs' incorporates:
   *  Sum: '<S360>/Subtract'
   *  UnitDelay: '<S360>/Unit Delay'
   */
  rtb_Switch2_p2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S360>/Switch1' incorporates:
   *  Constant: '<S360>/Constant1'
   *  Switch: '<S360>/Switch3'
   *  Switch: '<S360>/Switch5'
   *  UnaryMinus: '<S360>/Unary Minus'
   */
  if (UnitDelay) {
    rtb_Switch8 = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Constant: '<S360>/Constant4'
     *  Constant: '<S360>/Constant6'
     *  UnaryMinus: '<S360>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S360>/Constant2'
     *  Constant: '<S360>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S360>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S360>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch2_p2, &rtb_Minus_n[0], 1U);
    rtb_Switch2_p2 = rtb_LookupTableDynamic;
  } else {
    if (UnitDelay_e) {
      /* Switch: '<S360>/Switch3' incorporates:
       *  Constant: '<S360>/Constant3'
       */
      rtb_Switch8 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch8 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Constant: '<S360>/Constant10'
     *  Constant: '<S360>/Constant8'
     *  UnaryMinus: '<S360>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S360>/Constant7'
     *  Constant: '<S360>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S360>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S360>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch2_p2, &rtb_Minus_n[0], 1U);
    rtb_Switch2_p2 = rtb_LookupTableDynamic1;
  }

  /* End of Switch: '<S360>/Switch1' */

  /* Product: '<S360>/Product' */
  rtb_Switch8 *= rtb_Switch2_p2;

  /* Sum: '<S373>/Sum1' */
  rtb_Init -= rtb_Switch2_my;

  /* Switch: '<S374>/Switch2' incorporates:
   *  RelationalOperator: '<S374>/LowerRelop1'
   */
  if (!(rtb_Init > rtb_Switch8)) {
    /* Switch: '<S360>/Switch2' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Switch: '<S360>/Switch4'
     */
    if (UnitDelay) {
      rtb_Switch8 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (UnitDelay_e) {
      /* Switch: '<S360>/Switch4' incorporates:
       *  Constant: '<S360>/Constant1'
       */
      rtb_Switch8 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S360>/Switch4' incorporates:
       *  Constant: '<S360>/Constant3'
       *  UnaryMinus: '<S360>/Unary Minus1'
       */
      rtb_Switch8 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S360>/Switch2' */

    /* Product: '<S360>/Product2' */
    rtb_Switch8 *= rtb_Switch2_p2;

    /* Switch: '<S374>/Switch' incorporates:
     *  RelationalOperator: '<S374>/UpperRelop'
     */
    if (!(rtb_Init < rtb_Switch8)) {
      rtb_Switch8 = rtb_Init;
    }

    /* End of Switch: '<S374>/Switch' */
  }

  /* End of Switch: '<S374>/Switch2' */

  /* Sum: '<S373>/Sum' */
  rtb_Switch8 += rtb_Switch2_my;

  /* Signum: '<S359>/Sign2' incorporates:
   *  UnitDelay: '<S359>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    cos_alpha = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S359>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S359>/Product1' incorporates:
   *  Signum: '<S359>/Sign1'
   *  Signum: '<S359>/Sign2'
   */
  cos_alpha *= rtb_Add_ie;
  if (rtIsNaN(cos_alpha)) {
    i = 0;
  } else {
    i = (int32_T)fmod(cos_alpha, 256.0);
  }

  /* Switch: '<S359>/Switch' incorporates:
   *  Constant: '<S359>/Constant'
   *  Constant: '<S362>/Constant'
   *  Constant: '<S363>/Constant'
   *  Logic: '<S359>/or'
   *  Product: '<S359>/Product1'
   *  RelationalOperator: '<S362>/Compare'
   *  RelationalOperator: '<S363>/Compare'
   *  UnitDelay: '<S359>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S359>/Switch' */

  /* Switch: '<S368>/Init' incorporates:
   *  UnitDelay: '<S368>/FixPt Unit Delay1'
   *  UnitDelay: '<S368>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init = rtb_uDLookupTable_l;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S368>/Init' */

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  UnitDelay = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S365>/Compare' incorporates:
   *  Constant: '<S365>/Constant'
   */
  UnitDelay_e = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S359>/Abs' incorporates:
   *  Sum: '<S359>/Subtract'
   *  UnitDelay: '<S359>/Unit Delay'
   */
  rtb_Switch2_p2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                        Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S359>/Switch5' incorporates:
   *  Constant: '<S359>/Constant1'
   *  Switch: '<S359>/Switch1'
   *  UnaryMinus: '<S359>/Unary Minus'
   */
  if (UnitDelay) {
    /* SignalConversion generated from: '<S359>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S359>/Constant4'
     *  Constant: '<S359>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S359>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S359>/Constant2'
     *  Constant: '<S359>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S359>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S359>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Switch2_p2, &rtb_Minus_n[0], 1U);
    rtb_Switch2_p2 = rtb_LookupTableDynamic_p;
    cos_alpha = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S359>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S359>/Constant10'
     *  Constant: '<S359>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S359>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S359>/Constant7'
     *  Constant: '<S359>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S359>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S359>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Switch2_p2, &rtb_Minus_n[0], 1U);
    rtb_Switch2_p2 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S359>/Switch3' incorporates:
     *  Constant: '<S359>/Constant1'
     *  Constant: '<S359>/Constant3'
     *  UnaryMinus: '<S359>/Unary Minus'
     */
    if (UnitDelay_e) {
      cos_alpha = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      cos_alpha = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S359>/Switch3' */
  }

  /* End of Switch: '<S359>/Switch5' */

  /* Product: '<S359>/Product' incorporates:
   *  Switch: '<S359>/Switch1'
   */
  rtb_Switch2_my = cos_alpha * rtb_Switch2_p2;

  /* Sum: '<S366>/Sum1' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_uDLookupTable_l - rtb_Init;

  /* Switch: '<S367>/Switch2' incorporates:
   *  RelationalOperator: '<S367>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > rtb_Switch2_my)) {
    /* Switch: '<S359>/Switch2' incorporates:
     *  Constant: '<S359>/Constant1'
     *  Constant: '<S359>/Constant3'
     *  Switch: '<S359>/Switch4'
     *  UnaryMinus: '<S359>/Unary Minus1'
     */
    if (UnitDelay) {
      cos_alpha = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (UnitDelay_e) {
      /* Switch: '<S359>/Switch4' incorporates:
       *  Constant: '<S359>/Constant1'
       */
      cos_alpha = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      cos_alpha = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S359>/Product2' incorporates:
     *  Switch: '<S359>/Switch2'
     */
    rtb_Switch2_my = cos_alpha * rtb_Switch2_p2;

    /* Switch: '<S367>/Switch' incorporates:
     *  RelationalOperator: '<S367>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_0 < rtb_Switch2_my)) {
      rtb_Switch2_my = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S367>/Switch' */
  }

  /* End of Switch: '<S367>/Switch2' */

  /* Sum: '<S366>/Sum' */
  rtb_Switch2_my += rtb_Init;

  /* Switch: '<S349>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S349>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch8;
  } else {
    /* Switch: '<S349>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_my;
  }

  /* End of Switch: '<S349>/Switch' */

  /* Outputs for Atomic SubSystem: '<S262>/Initialize Function' */
  /* Sum: '<S348>/Add' incorporates:
   *  Constant: '<S348>/Constant'
   *  Constant: '<S348>/Constant4'
   *  Constant: '<S348>/Constant5'
   *  Trigonometry: '<S348>/Atan2'
   */
  rtb_Init = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S262>/Initialize Function' */

  /* Fcn: '<S390>/r->x' incorporates:
   *  Fcn: '<S395>/r->x'
   *  Fcn: '<S400>/r->x'
   *  Fcn: '<S405>/r->x'
   */
  rtb_Switch_pt = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S384>/Add' incorporates:
   *  Fcn: '<S390>/r->x'
   *  Fcn: '<S391>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init)) +
    rtb_Switch_pt;

  /* Fcn: '<S390>/theta->y' incorporates:
   *  Fcn: '<S395>/theta->y'
   *  Fcn: '<S400>/theta->y'
   *  Fcn: '<S405>/theta->y'
   */
  rtb_Switch2_p2 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S384>/Add' incorporates:
   *  Fcn: '<S390>/theta->y'
   *  Fcn: '<S391>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init)) +
    rtb_Switch2_p2;

  /* Sum: '<S385>/Add' incorporates:
   *  Fcn: '<S396>/r->x'
   *  Fcn: '<S396>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch_pt;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_p2;

  /* Sum: '<S386>/Add' incorporates:
   *  Fcn: '<S401>/r->x'
   *  Fcn: '<S401>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch_pt;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_p2;

  /* Sum: '<S387>/Add' incorporates:
   *  Fcn: '<S406>/r->x'
   *  Fcn: '<S406>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch_pt;
  rtb_Init = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
              (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_p2;

  /* Fcn: '<S404>/x->r' */
  rtb_Switch_pt = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Init);

  /* RelationalOperator: '<S407>/Compare' incorporates:
   *  Constant: '<S407>/Constant'
   */
  UnitDelay = (rtb_Switch_pt == 0.0);

  /* Switch: '<S403>/Switch1' */
  if (UnitDelay) {
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S403>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S403>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Switch_pt;
  }

  /* End of Switch: '<S403>/Switch1' */

  /* Fcn: '<S389>/x->r' */
  rtb_Switch_pt = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S392>/Compare' incorporates:
   *  Constant: '<S392>/Constant'
   */
  UnitDelay_e = (rtb_Switch_pt == 0.0);

  /* Switch: '<S388>/Switch1' */
  if (UnitDelay_e) {
    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S388>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch_pt;
  }

  /* End of Switch: '<S388>/Switch1' */

  /* Fcn: '<S394>/x->r' */
  sqrt_input = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S397>/Compare' incorporates:
   *  Constant: '<S397>/Constant'
   */
  rtb_IsRedAlliance = (sqrt_input == 0.0);

  /* Switch: '<S393>/Switch1' */
  if (rtb_IsRedAlliance) {
    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S393>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S393>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = sqrt_input;
  }

  /* End of Switch: '<S393>/Switch1' */

  /* Fcn: '<S399>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S402>/Compare' incorporates:
   *  Constant: '<S402>/Constant'
   */
  rtb_AT_Tag_15_Active = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S398>/Switch1' */
  if (rtb_AT_Tag_15_Active) {
    /* Switch: '<S398>/Switch1' incorporates:
     *  Constant: '<S398>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S398>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S398>/Switch1' */

  /* Product: '<S383>/Divide' incorporates:
   *  Abs: '<S383>/Abs'
   *  Abs: '<S383>/Abs1'
   *  Abs: '<S383>/Abs2'
   *  Abs: '<S383>/Abs3'
   *  Constant: '<S383>/Constant'
   *  MinMax: '<S383>/Max'
   */
  rtb_Switch_pt = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S383>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch_pt;

  /* Switch: '<S403>/Switch' */
  if (!UnitDelay) {
    /* Switch: '<S403>/Switch' incorporates:
     *  Fcn: '<S404>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init,
      rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S403>/Switch' */

  /* Trigonometry: '<S339>/Cos4' incorporates:
   *  Switch: '<S328>/Angle_Switch'
   *  Trigonometry: '<S338>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S339>/Sin5' incorporates:
   *  UnaryMinus: '<S337>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S339>/Sin4' incorporates:
   *  Switch: '<S328>/Angle_Switch'
   *  Trigonometry: '<S338>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S339>/Cos5' incorporates:
   *  UnaryMinus: '<S337>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S339>/Subtract1' incorporates:
   *  Product: '<S339>/Product2'
   *  Product: '<S339>/Product3'
   *  Trigonometry: '<S339>/Cos4'
   *  Trigonometry: '<S339>/Sin4'
   */
  rtb_Init = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S339>/Subtract' incorporates:
   *  Product: '<S339>/Product'
   *  Product: '<S339>/Product1'
   *  Trigonometry: '<S339>/Cos4'
   *  Trigonometry: '<S339>/Sin4'
   */
  rtb_Switch2_p2 = (rtb_MatrixConcatenate_b_idx_1 *
                    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S339>/Hypot' */
  rtb_Rotationmatrixfromlocalto_0 = rt_hypotd_snf(rtb_Switch2_p2, rtb_Init);

  /* Switch: '<S339>/Switch' incorporates:
   *  Constant: '<S339>/Constant'
   *  Constant: '<S339>/Constant1'
   *  Constant: '<S340>/Constant'
   *  Product: '<S339>/Divide'
   *  Product: '<S339>/Divide1'
   *  RelationalOperator: '<S340>/Compare'
   *  Switch: '<S339>/Switch1'
   */
  if (rtb_Rotationmatrixfromlocalto_0 > 1.0E-6) {
    sqrt_input = rtb_Init / rtb_Rotationmatrixfromlocalto_0;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p2 /
      rtb_Rotationmatrixfromlocalto_0;
  } else {
    sqrt_input = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S339>/Switch' */

  /* Switch: '<S328>/Speed_Switch' incorporates:
   *  Abs: '<S328>/Abs'
   *  Constant: '<S336>/Constant'
   *  RelationalOperator: '<S336>/Compare'
   *  Switch: '<S328>/Angle_Switch'
   *  Trigonometry: '<S338>/Atan1'
   *  Trigonometry: '<S339>/Atan1'
   *  UnaryMinus: '<S328>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(sqrt_input, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    cos_alpha = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S338>/Subtract1' incorporates:
     *  Product: '<S338>/Product2'
     *  Product: '<S338>/Product3'
     *  UnaryMinus: '<S328>/Unary Minus'
     */
    rtb_Init = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S338>/Subtract' incorporates:
     *  Product: '<S338>/Product'
     *  Product: '<S338>/Product1'
     */
    rtb_Rotationmatrixfromlocalto_0 = (rtb_MatrixConcatenate_b_idx_1 *
      Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S338>/Hypot' */
    rtb_Switch2_p2 = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Init);

    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S338>/Constant'
     *  Constant: '<S338>/Constant1'
     *  Constant: '<S341>/Constant'
     *  Product: '<S338>/Divide'
     *  Product: '<S338>/Divide1'
     *  RelationalOperator: '<S341>/Compare'
     *  Switch: '<S338>/Switch'
     */
    if (rtb_Switch2_p2 > 1.0E-6) {
      rtb_Rotationmatrixfromlocalto_0 /= rtb_Switch2_p2;
      rtb_Init /= rtb_Switch2_p2;
    } else {
      rtb_Rotationmatrixfromlocalto_0 = 1.0;
      rtb_Init = 0.0;
    }

    /* End of Switch: '<S338>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init,
      rtb_Rotationmatrixfromlocalto_0);
  } else {
    cos_alpha = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S331>/Product2' incorporates:
   *  Constant: '<S331>/Constant'
   *  Switch: '<S328>/Speed_Switch'
   */
  sqrt_input = cos_alpha * 1530.1401357649195;

  /* Signum: '<S326>/Sign' */
  if (rtIsNaN(sqrt_input)) {
    cos_alpha = (rtNaN);
  } else if (sqrt_input < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (sqrt_input > 0.0);
  }

  /* Signum: '<S326>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S329>/Add' incorporates:
   *  Sum: '<S330>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S261>/Product' incorporates:
   *  Abs: '<S326>/Abs'
   *  Abs: '<S329>/Abs'
   *  Constant: '<S332>/Constant'
   *  Constant: '<S342>/Constant3'
   *  Constant: '<S342>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S326>/OR'
   *  Lookup_n-D: '<S329>/1-D Lookup Table'
   *  Math: '<S342>/Math Function'
   *  RelationalOperator: '<S326>/Equal1'
   *  RelationalOperator: '<S332>/Compare'
   *  Signum: '<S326>/Sign'
   *  Signum: '<S326>/Sign1'
   *  Sum: '<S329>/Add'
   *  Sum: '<S342>/Add1'
   *  Sum: '<S342>/Add2'
   */
  sqrt_input = (((real_T)((cos_alpha == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * sqrt_input) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled41, Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S327>/Gain' */
  rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_FF * sqrt_input;

  /* Sum: '<S327>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  sqrt_input -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S334>/Sum1' incorporates:
   *  Constant: '<S327>/Constant2'
   *  Product: '<S334>/Product'
   *  Sum: '<S334>/Sum'
   *  UnitDelay: '<S334>/Unit Delay1'
   */
  rtb_Init = ((sqrt_input - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S327>/Product' incorporates:
   *  Constant: '<S327>/Constant3'
   */
  rtb_Switch2_p2 = rtb_Init * Drive_Motor_Control_D;

  /* Sum: '<S333>/Diff' incorporates:
   *  UnitDelay: '<S333>/UD'
   *
   * Block description for '<S333>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S333>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Switch2_p2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S327>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S327>/Add' incorporates:
   *  Gain: '<S327>/Gain1'
   *  Saturate: '<S327>/Saturation'
   */
  rtb_Add_jk = ((Drive_Motor_Control_P * sqrt_input) +
                rtb_Rotationmatrixfromlocalto_0) + cos_alpha;

  /* Sum: '<S327>/Subtract' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_jk;

  /* Sum: '<S327>/Sum2' incorporates:
   *  Gain: '<S327>/Gain2'
   *  UnitDelay: '<S327>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Drive_Motor_Control_I * sqrt_input) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S335>/Switch2' incorporates:
   *  Constant: '<S327>/Constant'
   *  RelationalOperator: '<S335>/LowerRelop1'
   *  Sum: '<S327>/Subtract'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > (1.0 - rtb_Add_jk))) {
    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S327>/Constant1'
     *  RelationalOperator: '<S335>/UpperRelop'
     *  Sum: '<S327>/Subtract1'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < (-1.0 - rtb_Add_jk)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_jk;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S335>/Switch' */
  }

  /* End of Switch: '<S335>/Switch2' */

  /* Saturate: '<S327>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_0 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S327>/Saturation1' */

  /* Sum: '<S327>/Add1' */
  cos_alpha = rtb_Add_jk + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S327>/Saturation2' */
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

  /* End of Saturate: '<S327>/Saturation2' */

  /* Sum: '<S343>/Add1' incorporates:
   *  Constant: '<S343>/Constant3'
   *  Constant: '<S343>/Constant4'
   *  Math: '<S343>/Math Function'
   *  Sum: '<S343>/Add2'
   */
  sqrt_input = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S345>/Sum1' incorporates:
   *  Constant: '<S330>/Constant2'
   *  Product: '<S345>/Product'
   *  Sum: '<S345>/Sum'
   *  UnitDelay: '<S345>/Unit Delay1'
   */
  rtb_Add_jk = ((sqrt_input - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S330>/Product' incorporates:
   *  Constant: '<S330>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Add_jk * Steering_Motor_Control_D;

  /* Sum: '<S344>/Diff' incorporates:
   *  UnitDelay: '<S344>/UD'
   *
   * Block description for '<S344>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S344>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S330>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S330>/Add' incorporates:
   *  Gain: '<S330>/Gain1'
   *  Saturate: '<S330>/Saturation'
   */
  rtb_Add_os = (Steering_Motor_Control_P * sqrt_input) + cos_alpha;

  /* Sum: '<S330>/Subtract' incorporates:
   *  Constant: '<S330>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_os;

  /* Sum: '<S330>/Sum2' incorporates:
   *  Gain: '<S330>/Gain2'
   *  UnitDelay: '<S330>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * sqrt_input) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S346>/Switch2' incorporates:
   *  Constant: '<S330>/Constant'
   *  RelationalOperator: '<S346>/LowerRelop1'
   *  Sum: '<S330>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_os))) {
    /* Switch: '<S346>/Switch' incorporates:
     *  Constant: '<S330>/Constant1'
     *  RelationalOperator: '<S346>/UpperRelop'
     *  Sum: '<S330>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_os)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_os;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S346>/Switch' */
  }

  /* End of Switch: '<S346>/Switch2' */

  /* Saturate: '<S330>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S330>/Saturation1' */

  /* Sum: '<S330>/Add1' */
  cos_alpha = rtb_Add_os + rtb_Sum2_fc;

  /* Saturate: '<S330>/Saturation2' */
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

  /* End of Saturate: '<S330>/Saturation2' */

  /* Product: '<S383>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch_pt;

  /* Switch: '<S388>/Switch' */
  if (!UnitDelay_e) {
    /* Switch: '<S388>/Switch' incorporates:
     *  Fcn: '<S389>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S388>/Switch' */

  /* Trigonometry: '<S276>/Cos4' incorporates:
   *  Switch: '<S265>/Angle_Switch'
   *  Trigonometry: '<S275>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S276>/Sin5' incorporates:
   *  UnaryMinus: '<S274>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S276>/Sin4' incorporates:
   *  Switch: '<S265>/Angle_Switch'
   *  Trigonometry: '<S275>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S276>/Cos5' incorporates:
   *  UnaryMinus: '<S274>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S276>/Subtract1' incorporates:
   *  Product: '<S276>/Product2'
   *  Product: '<S276>/Product3'
   *  Trigonometry: '<S276>/Cos4'
   *  Trigonometry: '<S276>/Sin4'
   */
  rtb_Add_os = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S276>/Subtract' incorporates:
   *  Product: '<S276>/Product'
   *  Product: '<S276>/Product1'
   *  Trigonometry: '<S276>/Cos4'
   *  Trigonometry: '<S276>/Sin4'
   */
  rtb_Subtract1_b = (rtb_MatrixConcatenate_b_idx_1 *
                     rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S276>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_b, rtb_Add_os);

  /* Switch: '<S276>/Switch' incorporates:
   *  Constant: '<S276>/Constant'
   *  Constant: '<S276>/Constant1'
   *  Constant: '<S277>/Constant'
   *  Product: '<S276>/Divide'
   *  Product: '<S276>/Divide1'
   *  RelationalOperator: '<S277>/Compare'
   *  Switch: '<S276>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    sqrt_input = rtb_Add_os / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_b / rtb_Hypot_g5;
  } else {
    sqrt_input = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S276>/Switch' */

  /* Switch: '<S265>/Speed_Switch' incorporates:
   *  Abs: '<S265>/Abs'
   *  Constant: '<S273>/Constant'
   *  RelationalOperator: '<S273>/Compare'
   *  Switch: '<S265>/Angle_Switch'
   *  Trigonometry: '<S275>/Atan1'
   *  Trigonometry: '<S276>/Atan1'
   *  UnaryMinus: '<S265>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(sqrt_input, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    cos_alpha = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S275>/Subtract1' incorporates:
     *  Product: '<S275>/Product2'
     *  Product: '<S275>/Product3'
     *  UnaryMinus: '<S265>/Unary Minus'
     */
    rtb_Add_os = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S275>/Subtract' incorporates:
     *  Product: '<S275>/Product'
     *  Product: '<S275>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S275>/Hypot' */
    rtb_Subtract1_b = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_os);

    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S275>/Constant'
     *  Constant: '<S275>/Constant1'
     *  Constant: '<S278>/Constant'
     *  Product: '<S275>/Divide'
     *  Product: '<S275>/Divide1'
     *  RelationalOperator: '<S278>/Compare'
     *  Switch: '<S275>/Switch'
     */
    if (rtb_Subtract1_b > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_b;
      rtb_Add_os /= rtb_Subtract1_b;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_os = 0.0;
    }

    /* End of Switch: '<S275>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_os, rtb_Hypot_g5);
  } else {
    cos_alpha = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S268>/Product2' incorporates:
   *  Constant: '<S268>/Constant'
   *  Switch: '<S265>/Speed_Switch'
   */
  sqrt_input = cos_alpha * 1530.1401357649195;

  /* Signum: '<S263>/Sign' */
  if (rtIsNaN(sqrt_input)) {
    cos_alpha = (rtNaN);
  } else if (sqrt_input < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (sqrt_input > 0.0);
  }

  /* Signum: '<S263>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S266>/Add' incorporates:
   *  Sum: '<S267>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S258>/Product' incorporates:
   *  Abs: '<S263>/Abs'
   *  Abs: '<S266>/Abs'
   *  Constant: '<S269>/Constant'
   *  Constant: '<S279>/Constant3'
   *  Constant: '<S279>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S263>/OR'
   *  Lookup_n-D: '<S266>/1-D Lookup Table'
   *  Math: '<S279>/Math Function'
   *  RelationalOperator: '<S263>/Equal1'
   *  RelationalOperator: '<S269>/Compare'
   *  Signum: '<S263>/Sign'
   *  Signum: '<S263>/Sign1'
   *  Sum: '<S266>/Add'
   *  Sum: '<S279>/Add1'
   *  Sum: '<S279>/Add2'
   */
  sqrt_input = (((real_T)((cos_alpha == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * sqrt_input) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled41, Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S264>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * sqrt_input;

  /* Sum: '<S264>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  sqrt_input -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S271>/Sum1' incorporates:
   *  Constant: '<S264>/Constant2'
   *  Product: '<S271>/Product'
   *  Sum: '<S271>/Sum'
   *  UnitDelay: '<S271>/Unit Delay1'
   */
  rtb_Add_os = ((sqrt_input - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S264>/Product' incorporates:
   *  Constant: '<S264>/Constant3'
   */
  rtb_Subtract1_b = rtb_Add_os * Drive_Motor_Control_D;

  /* Sum: '<S270>/Diff' incorporates:
   *  UnitDelay: '<S270>/UD'
   *
   * Block description for '<S270>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S270>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_b - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S264>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S264>/Add' incorporates:
   *  Gain: '<S264>/Gain1'
   *  Saturate: '<S264>/Saturation'
   */
  rtb_Add_ia = ((Drive_Motor_Control_P * sqrt_input) + rtb_Hypot_g5) + cos_alpha;

  /* Sum: '<S264>/Subtract' incorporates:
   *  Constant: '<S264>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ia;

  /* Sum: '<S264>/Sum2' incorporates:
   *  Gain: '<S264>/Gain2'
   *  UnitDelay: '<S264>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * sqrt_input) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S272>/Switch2' incorporates:
   *  Constant: '<S264>/Constant'
   *  RelationalOperator: '<S272>/LowerRelop1'
   *  Sum: '<S264>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ia))) {
    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S264>/Constant1'
     *  RelationalOperator: '<S272>/UpperRelop'
     *  Sum: '<S264>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_ia)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ia;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S272>/Switch' */
  }

  /* End of Switch: '<S272>/Switch2' */

  /* Saturate: '<S264>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S264>/Saturation1' */

  /* Sum: '<S264>/Add1' */
  cos_alpha = rtb_Add_ia + rtb_Hypot_g5;

  /* Saturate: '<S264>/Saturation2' */
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

  /* End of Saturate: '<S264>/Saturation2' */

  /* Sum: '<S280>/Add1' incorporates:
   *  Constant: '<S280>/Constant3'
   *  Constant: '<S280>/Constant4'
   *  Math: '<S280>/Math Function'
   *  Sum: '<S280>/Add2'
   */
  sqrt_input = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S282>/Sum1' incorporates:
   *  Constant: '<S267>/Constant2'
   *  Product: '<S282>/Product'
   *  Sum: '<S282>/Sum'
   *  UnitDelay: '<S282>/Unit Delay1'
   */
  rtb_Add_ia = ((sqrt_input - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S267>/Product' incorporates:
   *  Constant: '<S267>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_ia * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S267>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S267>/Add' incorporates:
   *  Gain: '<S267>/Gain1'
   *  Saturate: '<S267>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * sqrt_input) +
    cos_alpha;

  /* Sum: '<S267>/Subtract' incorporates:
   *  Constant: '<S267>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S267>/Sum2' incorporates:
   *  Gain: '<S267>/Gain2'
   *  UnitDelay: '<S267>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * sqrt_input) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S283>/Switch2' incorporates:
   *  Constant: '<S267>/Constant'
   *  RelationalOperator: '<S283>/LowerRelop1'
   *  Sum: '<S267>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S267>/Constant1'
     *  RelationalOperator: '<S283>/UpperRelop'
     *  Sum: '<S267>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S283>/Switch' */
  }

  /* End of Switch: '<S283>/Switch2' */

  /* Saturate: '<S267>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S267>/Saturation1' */

  /* Sum: '<S267>/Add1' */
  cos_alpha = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S267>/Saturation2' */
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

  /* End of Saturate: '<S267>/Saturation2' */

  /* Product: '<S383>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch_pt;

  /* Switch: '<S393>/Switch' */
  if (!rtb_IsRedAlliance) {
    /* Switch: '<S393>/Switch' incorporates:
     *  Fcn: '<S394>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S393>/Switch' */

  /* Trigonometry: '<S297>/Cos4' incorporates:
   *  Switch: '<S286>/Angle_Switch'
   *  Trigonometry: '<S296>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S297>/Sin5' incorporates:
   *  UnaryMinus: '<S295>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S297>/Sin4' incorporates:
   *  Switch: '<S286>/Angle_Switch'
   *  Trigonometry: '<S296>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S297>/Cos5' incorporates:
   *  UnaryMinus: '<S295>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S297>/Subtract1' incorporates:
   *  Product: '<S297>/Product2'
   *  Product: '<S297>/Product3'
   *  Trigonometry: '<S297>/Cos4'
   *  Trigonometry: '<S297>/Sin4'
   */
  rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S297>/Subtract' incorporates:
   *  Product: '<S297>/Product'
   *  Product: '<S297>/Product1'
   *  Trigonometry: '<S297>/Cos4'
   *  Trigonometry: '<S297>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_MatrixConcatenate_b_idx_1 *
    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 * rtb_uDLookupTable_l);

  /* Math: '<S297>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_g);

  /* Switch: '<S297>/Switch' incorporates:
   *  Constant: '<S297>/Constant'
   *  Constant: '<S297>/Constant1'
   *  Constant: '<S298>/Constant'
   *  Product: '<S297>/Divide'
   *  Product: '<S297>/Divide1'
   *  RelationalOperator: '<S298>/Compare'
   *  Switch: '<S297>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    sqrt_input = rtb_Subtract1_g / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    sqrt_input = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Switch: '<S286>/Speed_Switch' incorporates:
   *  Abs: '<S286>/Abs'
   *  Constant: '<S294>/Constant'
   *  RelationalOperator: '<S294>/Compare'
   *  Switch: '<S286>/Angle_Switch'
   *  Trigonometry: '<S296>/Atan1'
   *  Trigonometry: '<S297>/Atan1'
   *  UnaryMinus: '<S286>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(sqrt_input, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    cos_alpha = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S296>/Subtract1' incorporates:
     *  Product: '<S296>/Product2'
     *  Product: '<S296>/Product3'
     *  UnaryMinus: '<S286>/Unary Minus'
     */
    rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S296>/Subtract' incorporates:
     *  Product: '<S296>/Product'
     *  Product: '<S296>/Product1'
     */
    rtb_Subtract1_k0 = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S296>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract1_k0,
      rtb_Subtract1_g);

    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S296>/Constant'
     *  Constant: '<S296>/Constant1'
     *  Constant: '<S299>/Constant'
     *  Product: '<S296>/Divide'
     *  Product: '<S296>/Divide1'
     *  RelationalOperator: '<S299>/Compare'
     *  Switch: '<S296>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract1_k0 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_g /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract1_k0 = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S296>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract1_k0);
  } else {
    cos_alpha = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S289>/Product2' incorporates:
   *  Constant: '<S289>/Constant'
   *  Switch: '<S286>/Speed_Switch'
   */
  sqrt_input = cos_alpha * 1530.1401357649195;

  /* Signum: '<S284>/Sign' */
  if (rtIsNaN(sqrt_input)) {
    cos_alpha = (rtNaN);
  } else if (sqrt_input < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (sqrt_input > 0.0);
  }

  /* Signum: '<S284>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S287>/Add' incorporates:
   *  Sum: '<S288>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S259>/Product' incorporates:
   *  Abs: '<S284>/Abs'
   *  Abs: '<S287>/Abs'
   *  Constant: '<S290>/Constant'
   *  Constant: '<S300>/Constant3'
   *  Constant: '<S300>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S284>/OR'
   *  Lookup_n-D: '<S287>/1-D Lookup Table'
   *  Math: '<S300>/Math Function'
   *  RelationalOperator: '<S284>/Equal1'
   *  RelationalOperator: '<S290>/Compare'
   *  Signum: '<S284>/Sign'
   *  Signum: '<S284>/Sign1'
   *  Sum: '<S287>/Add'
   *  Sum: '<S300>/Add1'
   *  Sum: '<S300>/Add2'
   */
  sqrt_input = (((real_T)((cos_alpha == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * sqrt_input) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled41, Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S285>/Gain' */
  rtb_Subtract1_g = Drive_Motor_Control_FF * sqrt_input;

  /* Sum: '<S285>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  sqrt_input -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S292>/Sum1' incorporates:
   *  Constant: '<S285>/Constant2'
   *  Product: '<S292>/Product'
   *  Sum: '<S292>/Sum'
   *  UnitDelay: '<S292>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((sqrt_input -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S285>/Product' incorporates:
   *  Constant: '<S285>/Constant3'
   */
  rtb_Subtract1_k0 = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S291>/Diff' incorporates:
   *  UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_k0 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S285>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S285>/Add' incorporates:
   *  Gain: '<S285>/Gain1'
   *  Saturate: '<S285>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * sqrt_input) + rtb_Subtract1_g) +
    cos_alpha;

  /* Sum: '<S285>/Subtract' incorporates:
   *  Constant: '<S285>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S285>/Sum2' incorporates:
   *  Gain: '<S285>/Gain2'
   *  UnitDelay: '<S285>/Unit Delay'
   */
  rtb_Subtract1_g = (Drive_Motor_Control_I * sqrt_input) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S293>/Switch2' incorporates:
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S293>/LowerRelop1'
   *  Sum: '<S285>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S285>/Constant1'
     *  RelationalOperator: '<S293>/UpperRelop'
     *  Sum: '<S285>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S293>/Switch' */
  }

  /* End of Switch: '<S293>/Switch2' */

  /* Saturate: '<S285>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S285>/Saturation1' */

  /* Sum: '<S285>/Add1' */
  cos_alpha = rtb_Hypot_b + rtb_Subtract1_g;

  /* Saturate: '<S285>/Saturation2' */
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

  /* End of Saturate: '<S285>/Saturation2' */

  /* Sum: '<S301>/Add1' incorporates:
   *  Constant: '<S301>/Constant3'
   *  Constant: '<S301>/Constant4'
   *  Math: '<S301>/Math Function'
   *  Sum: '<S301>/Add2'
   */
  sqrt_input = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S303>/Sum1' incorporates:
   *  Constant: '<S288>/Constant2'
   *  Product: '<S303>/Product'
   *  Sum: '<S303>/Sum'
   *  UnitDelay: '<S303>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((sqrt_input - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S288>/Product' incorporates:
   *  Constant: '<S288>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S288>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S288>/Add' incorporates:
   *  Gain: '<S288>/Gain1'
   *  Saturate: '<S288>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * sqrt_input) + cos_alpha;

  /* Sum: '<S288>/Subtract' incorporates:
   *  Constant: '<S288>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S288>/Sum2' incorporates:
   *  Gain: '<S288>/Gain2'
   *  UnitDelay: '<S288>/Unit Delay'
   */
  rtb_Subtract1_jx = (Steering_Motor_Control_I * sqrt_input) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S304>/Switch2' incorporates:
   *  Constant: '<S288>/Constant'
   *  RelationalOperator: '<S304>/LowerRelop1'
   *  Sum: '<S288>/Subtract'
   */
  if (!(rtb_Subtract1_jx > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S288>/Constant1'
     *  RelationalOperator: '<S304>/UpperRelop'
     *  Sum: '<S288>/Subtract1'
     */
    if (rtb_Subtract1_jx < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_jx;
    }

    /* End of Switch: '<S304>/Switch' */
  }

  /* End of Switch: '<S304>/Switch2' */

  /* Saturate: '<S288>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_jx = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S288>/Saturation1' */

  /* Sum: '<S288>/Add1' */
  cos_alpha = rtb_Add_ie + rtb_Subtract1_jx;

  /* Saturate: '<S288>/Saturation2' */
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

  /* End of Saturate: '<S288>/Saturation2' */

  /* Product: '<S383>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch_pt;

  /* Switch: '<S398>/Switch' */
  if (!rtb_AT_Tag_15_Active) {
    /* Switch: '<S398>/Switch' incorporates:
     *  Fcn: '<S399>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S398>/Switch' */

  /* Trigonometry: '<S318>/Cos4' incorporates:
   *  Switch: '<S307>/Angle_Switch'
   *  Trigonometry: '<S317>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S318>/Sin5' incorporates:
   *  UnaryMinus: '<S316>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S318>/Sin4' incorporates:
   *  Switch: '<S307>/Angle_Switch'
   *  Trigonometry: '<S317>/Sin4'
   */
  rtb_Subtract1_cj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S318>/Cos5' incorporates:
   *  UnaryMinus: '<S316>/Unary Minus'
   */
  sqrt_input = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S318>/Subtract1' incorporates:
   *  Product: '<S318>/Product2'
   *  Product: '<S318>/Product3'
   *  Trigonometry: '<S318>/Cos4'
   *  Trigonometry: '<S318>/Sin4'
   */
  rtb_Switch_pt = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_cj * sqrt_input);

  /* Sum: '<S318>/Subtract' incorporates:
   *  Product: '<S318>/Product'
   *  Product: '<S318>/Product1'
   *  Trigonometry: '<S318>/Cos4'
   *  Trigonometry: '<S318>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ie * sqrt_input) - (rtb_Subtract1_cj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S318>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch_pt);

  /* Switch: '<S318>/Switch' incorporates:
   *  Constant: '<S318>/Constant'
   *  Constant: '<S318>/Constant1'
   *  Constant: '<S319>/Constant'
   *  Product: '<S318>/Divide'
   *  Product: '<S318>/Divide1'
   *  RelationalOperator: '<S319>/Compare'
   *  Switch: '<S318>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch_pt /= rtb_MatrixConcatenate_b_idx_0;
    sqrt_input = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch_pt = 0.0;
    sqrt_input = 1.0;
  }

  /* End of Switch: '<S318>/Switch' */

  /* Switch: '<S307>/Speed_Switch' incorporates:
   *  Abs: '<S307>/Abs'
   *  Constant: '<S315>/Constant'
   *  RelationalOperator: '<S315>/Compare'
   *  Switch: '<S307>/Angle_Switch'
   *  Trigonometry: '<S317>/Atan1'
   *  Trigonometry: '<S318>/Atan1'
   *  UnaryMinus: '<S307>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch_pt, sqrt_input)) > 1.5707963267948966) {
    cos_alpha = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S317>/Subtract1' incorporates:
     *  Product: '<S317>/Product2'
     *  Product: '<S317>/Product3'
     *  UnaryMinus: '<S307>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S317>/Subtract' incorporates:
     *  Product: '<S317>/Product'
     *  Product: '<S317>/Product1'
     */
    rtb_Subtract1_cj = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S317>/Hypot' */
    rtb_Add_ie = rt_hypotd_snf(rtb_Subtract1_cj, rtb_Subtract_n);

    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S317>/Constant'
     *  Constant: '<S317>/Constant1'
     *  Constant: '<S320>/Constant'
     *  Product: '<S317>/Divide'
     *  Product: '<S317>/Divide1'
     *  RelationalOperator: '<S320>/Compare'
     *  Switch: '<S317>/Switch'
     */
    if (rtb_Add_ie > 1.0E-6) {
      rtb_Subtract1_cj /= rtb_Add_ie;
      rtb_Add_ie = rtb_Subtract_n / rtb_Add_ie;
    } else {
      rtb_Subtract1_cj = 1.0;
      rtb_Add_ie = 0.0;
    }

    /* End of Switch: '<S317>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ie, rtb_Subtract1_cj);
  } else {
    cos_alpha = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S310>/Product2' incorporates:
   *  Constant: '<S310>/Constant'
   *  Switch: '<S307>/Speed_Switch'
   */
  rtb_Switch_pt = cos_alpha * 1530.1401357649195;

  /* Signum: '<S305>/Sign' */
  if (rtIsNaN(rtb_Switch_pt)) {
    cos_alpha = (rtNaN);
  } else if (rtb_Switch_pt < 0.0) {
    cos_alpha = -1.0;
  } else {
    cos_alpha = (rtb_Switch_pt > 0.0);
  }

  /* Signum: '<S305>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S308>/Add' incorporates:
   *  Sum: '<S309>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S260>/Product' incorporates:
   *  Abs: '<S305>/Abs'
   *  Abs: '<S308>/Abs'
   *  Constant: '<S311>/Constant'
   *  Constant: '<S321>/Constant3'
   *  Constant: '<S321>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S305>/OR'
   *  Lookup_n-D: '<S308>/1-D Lookup Table'
   *  Math: '<S321>/Math Function'
   *  RelationalOperator: '<S305>/Equal1'
   *  RelationalOperator: '<S311>/Compare'
   *  Signum: '<S305>/Sign'
   *  Signum: '<S305>/Sign1'
   *  Sum: '<S308>/Add'
   *  Sum: '<S321>/Add1'
   *  Sum: '<S321>/Add2'
   */
  rtb_Switch_pt = (((real_T)((cos_alpha == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch_pt) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled41, Code_Gen_Model_ConstP.pooled40, 1U);

  /* Gain: '<S306>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch_pt;

  /* Sum: '<S306>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch_pt -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S313>/Sum1' incorporates:
   *  Constant: '<S306>/Constant2'
   *  Product: '<S313>/Product'
   *  Sum: '<S313>/Sum'
   *  UnitDelay: '<S313>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch_pt - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S306>/Product' incorporates:
   *  Constant: '<S306>/Constant3'
   */
  rtb_Subtract1_cj = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S312>/Diff' incorporates:
   *  UnitDelay: '<S312>/UD'
   *
   * Block description for '<S312>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S312>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_cj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S306>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S306>/Add' incorporates:
   *  Gain: '<S306>/Gain1'
   *  Saturate: '<S306>/Saturation'
   */
  rtb_Add_nh = ((Drive_Motor_Control_P * rtb_Switch_pt) + rtb_Subtract_n) +
    cos_alpha;

  /* Sum: '<S306>/Subtract' incorporates:
   *  Constant: '<S306>/Constant'
   */
  sqrt_input = 1.0 - rtb_Add_nh;

  /* Sum: '<S306>/Sum2' incorporates:
   *  Gain: '<S306>/Gain2'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  rtb_Switch_pt = (Drive_Motor_Control_I * rtb_Switch_pt) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S314>/Switch2' incorporates:
   *  Constant: '<S306>/Constant'
   *  RelationalOperator: '<S314>/LowerRelop1'
   *  Sum: '<S306>/Subtract'
   */
  if (!(rtb_Switch_pt > (1.0 - rtb_Add_nh))) {
    /* Switch: '<S314>/Switch' incorporates:
     *  Constant: '<S306>/Constant1'
     *  RelationalOperator: '<S314>/UpperRelop'
     *  Sum: '<S306>/Subtract1'
     */
    if (rtb_Switch_pt < (-1.0 - rtb_Add_nh)) {
      sqrt_input = -1.0 - rtb_Add_nh;
    } else {
      sqrt_input = rtb_Switch_pt;
    }

    /* End of Switch: '<S314>/Switch' */
  }

  /* End of Switch: '<S314>/Switch2' */

  /* Saturate: '<S306>/Saturation1' */
  if (sqrt_input > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (sqrt_input < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = sqrt_input;
  }

  /* End of Saturate: '<S306>/Saturation1' */

  /* Sum: '<S306>/Add1' */
  cos_alpha = rtb_Add_nh + rtb_Subtract_n;

  /* Saturate: '<S306>/Saturation2' */
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

  /* End of Saturate: '<S306>/Saturation2' */

  /* Sum: '<S322>/Add1' incorporates:
   *  Constant: '<S322>/Constant3'
   *  Constant: '<S322>/Constant4'
   *  Math: '<S322>/Math Function'
   *  Sum: '<S322>/Add2'
   */
  rtb_Switch_pt = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S324>/Sum1' incorporates:
   *  Constant: '<S309>/Constant2'
   *  Product: '<S324>/Product'
   *  Sum: '<S324>/Sum'
   *  UnitDelay: '<S324>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch_pt -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S309>/Product' incorporates:
   *  Constant: '<S309>/Constant3'
   */
  rtb_Add_nh = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Add_nh - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S309>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S309>/Add' incorporates:
   *  Gain: '<S309>/Gain1'
   *  Saturate: '<S309>/Saturation'
   */
  rtb_Add_ls = (Steering_Motor_Control_P * rtb_Switch_pt) + cos_alpha;

  /* Sum: '<S309>/Subtract' incorporates:
   *  Constant: '<S309>/Constant'
   */
  sqrt_input = 1.0 - rtb_Add_ls;

  /* Sum: '<S309>/Sum2' incorporates:
   *  Gain: '<S309>/Gain2'
   *  UnitDelay: '<S309>/Unit Delay'
   */
  rtb_Switch_pt = (Steering_Motor_Control_I * rtb_Switch_pt) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S325>/Switch2' incorporates:
   *  Constant: '<S309>/Constant'
   *  RelationalOperator: '<S325>/LowerRelop1'
   *  Sum: '<S309>/Subtract'
   */
  if (!(rtb_Switch_pt > (1.0 - rtb_Add_ls))) {
    /* Switch: '<S325>/Switch' incorporates:
     *  Constant: '<S309>/Constant1'
     *  RelationalOperator: '<S325>/UpperRelop'
     *  Sum: '<S309>/Subtract1'
     */
    if (rtb_Switch_pt < (-1.0 - rtb_Add_ls)) {
      sqrt_input = -1.0 - rtb_Add_ls;
    } else {
      sqrt_input = rtb_Switch_pt;
    }

    /* End of Switch: '<S325>/Switch' */
  }

  /* End of Switch: '<S325>/Switch2' */

  /* Saturate: '<S309>/Saturation1' */
  if (sqrt_input > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (sqrt_input < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = sqrt_input;
  }

  /* End of Saturate: '<S309>/Saturation1' */

  /* Sum: '<S309>/Add1' */
  cos_alpha = rtb_Add_ls + rtb_Subtract1_f;

  /* Saturate: '<S309>/Saturation2' */
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

  /* End of Saturate: '<S309>/Saturation2' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant4'
   *  Inport: '<Root>/IsBlueAlliance'
   *  Switch: '<S7>/Switch'
   */
  if (TEST_Speaker_Distance != 0.0) {
    /* Switch: '<S7>/Switch2' */
    Code_Gen_Model_B.Speaker_Distance = TEST_Speaker_Distance;
  } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Math: '<S7>/Hypot'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_B.Speaker_Distance = rt_hypotd_snf
      (rtb_Rotationmatrixfromlocalto_2, rtb_Rotationmatrixfromlocalto_1);
  } else {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Math: '<S7>/Hypot1'
     *  Switch: '<S7>/Switch'
     */
    Code_Gen_Model_B.Speaker_Distance = rt_hypotd_snf(rtb_Subtract2,
      rtb_Subtract3);
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S16>/Switch5' incorporates:
   *  Constant: '<S16>/Constant26'
   *  Lookup_n-D: '<S16>/1-D Lookup Table1'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Angle != 0.0) {
    rtb_Rotationmatrixfromlocalto_1 = TEST_Speaker_Angle;
  } else {
    rtb_Rotationmatrixfromlocalto_1 = look1_binlcpw
      (Code_Gen_Model_B.Speaker_Distance, Code_Gen_Model_ConstP.pooled1,
       Code_Gen_Model_ConstP.uDLookupTable1_tableData, 8U);
  }

  /* End of Switch: '<S16>/Switch5' */

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  cos_alpha = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(cos_alpha)) || (rtIsInf(cos_alpha))) {
    cos_alpha = 0.0;
  } else {
    cos_alpha = fmod(cos_alpha, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((cos_alpha < 0.0) ? ((int32_T)((uint8_T)(
    -((int8_T)((uint8_T)(-cos_alpha)))))) : ((int32_T)((uint8_T)cos_alpha)));

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/Constant25'
   *  Lookup_n-D: '<S16>/1-D Lookup Table2'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Rotationmatrixfromlocalto_2 = TEST_Speaker_Height;
  } else {
    rtb_Rotationmatrixfromlocalto_2 = look1_binlcpw
      (Code_Gen_Model_B.Speaker_Distance, Code_Gen_Model_ConstP.pooled1,
       Code_Gen_Model_ConstP.uDLookupTable2_tableData, 8U);
  }

  /* End of Switch: '<S16>/Switch4' */

  /* Switch: '<S16>/Switch6' incorporates:
   *  Constant: '<S16>/Constant27'
   *  Lookup_n-D: '<S16>/1-D Lookup Table3'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Gap != 0.0) {
    rtb_Subtract3 = TEST_Speaker_Gap;
  } else {
    rtb_Subtract3 = look1_binlcpw(Code_Gen_Model_B.Speaker_Distance,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable3_tableData, 8U);
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

  /* Sum: '<S161>/Add' incorporates:
   *  Constant: '<S161>/Constant24'
   */
  rtb_Switch_pt = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S161>/Sqrt' incorporates:
   *  Math: '<S161>/Math Function'
   *  Sum: '<S161>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_Switch_pt * rtb_Switch_pt) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S25>/Subtract1' incorporates:
   *  Constant: '<S25>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S25>/Product'
   *  UnitDelay: '<S25>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;

  /* Sqrt: '<S165>/Sqrt' incorporates:
   *  Constant: '<S165>/Constant24'
   *  Math: '<S165>/Math Function'
   *  Sum: '<S165>/Add'
   *  Sum: '<S165>/Subtract'
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
  sqrt_input = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  rtb_Add_ls = (sqrt_input - 56058.355625000004) / 331.17548218429454;
  sqrt_input -= rtb_Add_ls * rtb_Add_ls;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  rtb_Subtract2 = (((((((rtb_Add_ls * 0.84366148773210747) + 177.79999999999998)
                       - (y * -0.53687549219315933)) - 177.79999999999998) -
                     139.7) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925))
                   + 177.79999999999998) + 139.7;
  rtb_Switch_pt = (((rtb_Add_ls * -0.53687549219315933) + 88.899999999999991) +
                   (y * 0.84366148773210747)) *
    (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  rtb_Add_ls = sqrt(((rtb_Switch_pt - 25.4) * (rtb_Switch_pt - 25.4)) +
                    (rtb_Subtract2 * rtb_Subtract2));
  sqrt_input = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  rtb_Add_ls = (((rtb_Add_ls * rtb_Add_ls) - 24840.962499999998) + sqrt_input) /
    (2.0 * rtb_Add_ls);
  sqrt_input -= rtb_Add_ls * rtb_Add_ls;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  sqrt_input = atan((rtb_Switch_pt - 25.4) / rtb_Subtract2);
  cos_alpha = cos(sqrt_input);
  sin_alpha = sin(sqrt_input);
  sqrt_input = (rtb_Add_ls * cos_alpha) - (y * sin_alpha);
  rtb_Add_ls = ((rtb_Add_ls * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Subtract2 = atan((rtb_Switch_pt - rtb_Add_ls) / (rtb_Subtract2 -
    sqrt_input)) - -0.16186298985390718;
  y = cos(rtb_Subtract2);
  cos_alpha = sin(rtb_Subtract2);
  rtb_Switch_pt = (rtb_Add_ls - (42.875 * cos_alpha)) - (-76.0 * y);
  rtb_Add_ls = ((sqrt_input - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Switch_pt - 465.697) * (rtb_Switch_pt -
    465.697)) + (rtb_Add_ls * rtb_Add_ls);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Switch_pt;

  /* Gain: '<S16>/Gain2' incorporates:
   *  MATLAB Function: '<S16>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Subtract2;

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
        Code_Gen_Model_B.Desired_Angle = rtb_Rotationmatrixfromlocalto_1;
        Code_Gen_Model_B.Desired_Height = rtb_Rotationmatrixfromlocalto_2;
        Code_Gen_Model_B.Desired_Gap = rtb_Subtract3;
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
        Code_Gen_Model_B.Desired_Height = rtb_Rotationmatrixfromlocalto_2;
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
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Rotationmatrixfromlocalto_2 +
            Tol_Height)) && (Code_Gen_Model_B.Meas_Height >
                             (rtb_Rotationmatrixfromlocalto_2 - Tol_Height))) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Partial_to_Speaker_Final;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Final;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = rtb_Rotationmatrixfromlocalto_1;
        Code_Gen_Model_B.Desired_Height = rtb_Rotationmatrixfromlocalto_2;
        Code_Gen_Model_B.Desired_Gap = rtb_Subtract3;
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

  /* Gain: '<S16>/Gain3' */
  rtb_Rotationmatrixfromlocalto_2 = 0.017453292519943295 *
    Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S16>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S16>/Constant10'
   *  Constant: '<S16>/Constant11'
   *  Constant: '<S16>/Constant13'
   *  Constant: '<S16>/Constant14'
   *  Constant: '<S16>/Constant15'
   *  Constant: '<S16>/Constant21'
   */
  rtb_Rotationmatrixfromlocalto_1 = cos(rtb_Rotationmatrixfromlocalto_2);
  rtb_Rotationmatrixfromlocalto_2 = sin(rtb_Rotationmatrixfromlocalto_2);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    rtb_Subtract3 = ((rtb_Rotationmatrixfromlocalto_1 * 42.875) +
                     ((-rtb_Rotationmatrixfromlocalto_2) * -76.0)) + (sqrt
      (sqrt_input) - 50.027);
  } else {
    rtb_Subtract3 = ((rtb_Rotationmatrixfromlocalto_1 * 42.875) +
                     ((-rtb_Rotationmatrixfromlocalto_2) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = rtb_Subtract3;
  rtb_Minus_n[0] = ((rtb_Rotationmatrixfromlocalto_1 * 155.54999999999998) +
                    ((-rtb_Rotationmatrixfromlocalto_2) * -25.4)) +
    rtb_Subtract3;
  rtb_Subtract3 = ((rtb_Rotationmatrixfromlocalto_2 * 42.875) +
                   (rtb_Rotationmatrixfromlocalto_1 * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = rtb_Subtract3;
  rtb_Minus_n[1] = ((rtb_Rotationmatrixfromlocalto_2 * 155.54999999999998) +
                    (rtb_Rotationmatrixfromlocalto_1 * -25.4)) + rtb_Subtract3;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Reshapey[1] - 25.4) *
    (rtb_Reshapey[1] - 25.4)) + (rtb_Reshapey[0] * rtb_Reshapey[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Rotationmatrixfromlocalto_1 = sqrt(((rtb_Minus_n[0] - 317.5) *
    (rtb_Minus_n[0] - 317.5)) + (rtb_Minus_n[1] * rtb_Minus_n[1]));
  sqrt_input = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 /
    rtb_Rotationmatrixfromlocalto_1));
  rtb_Rotationmatrixfromlocalto_2 = ((288.925 / rtb_Rotationmatrixfromlocalto_1)
    * rtb_Minus_n[1]) - 88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (sqrt_input * sqrt_input) +
    (rtb_Rotationmatrixfromlocalto_2 * rtb_Rotationmatrixfromlocalto_2);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Rotationmatrixfromlocalto_1;

  /* End of MATLAB Function: '<S16>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S16>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S16>/Constant23'
   *  Constant: '<S16>/Constant24'
   *  Constant: '<S16>/Constant28'
   *  Constant: '<S16>/Constant29'
   *  Constant: '<S16>/Constant30'
   *  Constant: '<S16>/Constant31'
   */
  rtb_Rotationmatrixfromlocalto_1 = sqrt
    ((Code_Gen_Model_B.Desired_Back_AA_Length *
      Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) - 421.79999999999995;
  if (rtb_Rotationmatrixfromlocalto_1 <= 98.425) {
    rtb_Subtract3 = 79.375;
    rtb_Rotationmatrixfromlocalto_1 = 19.049999999999997;
  } else if (rtb_Rotationmatrixfromlocalto_1 <= 213.425) {
    rtb_Subtract3 = rtb_Rotationmatrixfromlocalto_1 - 19.049999999999997;
    rtb_Rotationmatrixfromlocalto_1 = 19.049999999999997;
  } else {
    rtb_Subtract3 = fmin(fmax(((((rtb_Rotationmatrixfromlocalto_1 - 115.0) -
      19.049999999999997) - 79.375) * 0.32) + 194.375, 79.375), 317.0);
    rtb_Rotationmatrixfromlocalto_1 = fmin(fmax(rtb_Rotationmatrixfromlocalto_1
      - rtb_Subtract3, 19.049999999999997), 334.0);
  }

  /* Switch: '<S181>/Init' incorporates:
   *  UnitDelay: '<S181>/FixPt Unit Delay1'
   *  UnitDelay: '<S181>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k != 0) {
    rtb_Switch_pt = rtb_Rotationmatrixfromlocalto_1;
  } else {
    rtb_Switch_pt = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S181>/Init' */

  /* Sum: '<S175>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 -= rtb_Switch_pt;

  /* Product: '<S159>/Product3' incorporates:
   *  Constant: '<S159>/Constant1'
   */
  sqrt_input = Code_Gen_Model_B.RL_Back * 0.5;

  /* Switch: '<S180>/Switch2' incorporates:
   *  RelationalOperator: '<S180>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > sqrt_input)) {
    /* Switch: '<S180>/Switch' incorporates:
     *  RelationalOperator: '<S180>/UpperRelop'
     *  UnaryMinus: '<S159>/Unary Minus3'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < (-sqrt_input)) {
      sqrt_input = -sqrt_input;
    } else {
      sqrt_input = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S180>/Switch' */
  }

  /* End of Switch: '<S180>/Switch2' */

  /* Sum: '<S175>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = sqrt_input + rtb_Switch_pt;

  /* Sum: '<S169>/Sum' */
  rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S169>/Gain1' */
  rtb_Rotationmatrixfromlocalto_2 = AA_Prop_Gain *
    rtb_Rotationmatrixfromlocalto_1;

  /* RelationalOperator: '<S163>/Compare' incorporates:
   *  Constant: '<S163>/Constant'
   */
  UnitDelay = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S169>/Switch' incorporates:
   *  Constant: '<S169>/Constant2'
   */
  if (UnitDelay) {
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S169>/Constant3'
     *  UnitDelay: '<S184>/Delay Input1'
     *
     * Block description for '<S184>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
      rtb_Rotationmatrixfromlocalto_1 = AA_Integral_IC;
    } else {
      /* Sum: '<S169>/Sum2' incorporates:
       *  Gain: '<S169>/Gain2'
       *  UnitDelay: '<S169>/Unit Delay'
       */
      rtb_Rotationmatrixfromlocalto_1 = (AA_Integral_Gain *
        rtb_Rotationmatrixfromlocalto_1) + Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S169>/Subtract' incorporates:
       *  Constant: '<S169>/Constant'
       */
      rtb_Subtract2 = AA_TC_UL - rtb_Rotationmatrixfromlocalto_2;

      /* Switch: '<S185>/Switch2' incorporates:
       *  RelationalOperator: '<S185>/LowerRelop1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Subtract2)) {
        /* Sum: '<S169>/Subtract1' incorporates:
         *  Constant: '<S169>/Constant1'
         */
        rtb_Subtract2 = AA_TC_LL - rtb_Rotationmatrixfromlocalto_2;

        /* Switch: '<S185>/Switch' incorporates:
         *  RelationalOperator: '<S185>/UpperRelop'
         */
        if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Subtract2)) {
          rtb_Subtract2 = rtb_Rotationmatrixfromlocalto_1;
        }

        /* End of Switch: '<S185>/Switch' */
      }

      /* End of Switch: '<S185>/Switch2' */

      /* Saturate: '<S169>/Saturation1' */
      if (rtb_Subtract2 > AA_Integral_UL) {
        rtb_Rotationmatrixfromlocalto_1 = AA_Integral_UL;
      } else if (rtb_Subtract2 < AA_Integral_LL) {
        rtb_Rotationmatrixfromlocalto_1 = AA_Integral_LL;
      } else {
        rtb_Rotationmatrixfromlocalto_1 = rtb_Subtract2;
      }

      /* End of Saturate: '<S169>/Saturation1' */
    }

    /* End of Switch: '<S169>/Switch1' */
  } else {
    rtb_Rotationmatrixfromlocalto_1 = 0.0;
  }

  /* End of Switch: '<S169>/Switch' */

  /* Switch: '<S16>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S169>/Add1' */
    cos_alpha = rtb_Rotationmatrixfromlocalto_2 +
      rtb_Rotationmatrixfromlocalto_1;

    /* Saturate: '<S169>/Saturation2' */
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

    /* End of Saturate: '<S169>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch1' */

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  UnitDelay_e = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S83>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_15_Active = (((int32_T)UnitDelay_e) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_IsRedAlliance = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S84>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_16_Active = (((int32_T)rtb_IsRedAlliance) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_nx));

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  rtb_AT_Tag_11_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S86>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_6_Active = (((int32_T)rtb_AT_Tag_11_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  rtb_AT_Tag_12_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S85>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Compare_pf = (((int32_T)rtb_AT_Tag_12_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_hw));

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  rtb_AT_Tag_13_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S87>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Relative_Translation_Flag = (((int32_T)rtb_AT_Tag_13_Active) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_e));

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  rtb_AT_Tag_5_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   */
  rtb_AT_Tag_14_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 7.0);

  /* RelationalOperator: '<S88>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S88>/Delay Input1'
   *
   * Block description for '<S88>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Compare_oq = (((int32_T)rtb_AT_Tag_14_Active) > ((int32_T)
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
      if (rtb_AT_Tag_5_Active) {
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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer) || rtb_AT_Tag_5_Active)
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

     case Code_Gen_Mod_IN_Extra_Run_Time5:
      Code_Gen_Model_B.Note_State_ID = 5.4;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_5_Active) {
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
      } else if (rtb_AT_Tag_5_Active) {
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
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_5_Active) {
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
          rtb_AT_Tag_5_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_5_Active) {
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
          rtb_AT_Tag_5_Active) {
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
      } else if (rtb_AT_Tag_5_Active) {
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
          rtb_AT_Tag_5_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time2;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Mode_IN_Reverse_Intake:
      Code_Gen_Model_B.Note_State_ID = 6.1;
      Code_Gen_Model_B.Intake_Motor_DC = 1.0;
      if ((Code_Gen_Model_DW.timer > 5.0) || rtb_AT_Tag_5_Active) {
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
      } else if (rtb_AT_Tag_5_Active) {
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
      } else if (rtb_AT_Tag_5_Active) {
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
      Code_Gen_M_Waiting_for_Requests(&rtb_AT_Tag_15_Active,
        &rtb_AT_Tag_16_Active, &rtb_AT_Tag_6_Active, &rtb_Compare_pf,
        &rtb_Relative_Translation_Flag, &rtb_Compare_oq);
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

  /* Sum: '<S89>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S89>/Add' incorporates:
   *  Gain: '<S89>/Gain'
   *  Gain: '<S89>/Gain1'
   */
  rtb_Subtract2 = (Shooter_Motor_Control_FF *
                   Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Rotationmatrixfromlocalto_2);

  /* Switch: '<S89>/Switch' incorporates:
   *  Constant: '<S89>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S89>/Sum2' incorporates:
     *  Gain: '<S89>/Gain2'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = (Shooter_Motor_Control_I *
      rtb_Rotationmatrixfromlocalto_2) + Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S89>/Subtract' incorporates:
     *  Constant: '<S89>/Constant'
     */
    rtb_Switch_pt = 1.0 - rtb_Subtract2;

    /* Switch: '<S91>/Switch2' incorporates:
     *  Constant: '<S89>/Constant'
     *  RelationalOperator: '<S91>/LowerRelop1'
     *  Sum: '<S89>/Subtract'
     */
    if (!(rtb_Rotationmatrixfromlocalto_2 > (1.0 - rtb_Subtract2))) {
      /* Sum: '<S89>/Subtract1' incorporates:
       *  Constant: '<S89>/Constant1'
       */
      rtb_Switch_pt = -1.0 - rtb_Subtract2;

      /* Switch: '<S91>/Switch' incorporates:
       *  Constant: '<S89>/Constant1'
       *  RelationalOperator: '<S91>/UpperRelop'
       *  Sum: '<S89>/Subtract1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_2 < (-1.0 - rtb_Subtract2))) {
        rtb_Switch_pt = rtb_Rotationmatrixfromlocalto_2;
      }

      /* End of Switch: '<S91>/Switch' */
    }

    /* End of Switch: '<S91>/Switch2' */

    /* Saturate: '<S89>/Saturation1' */
    if (rtb_Switch_pt > Shooter_Motor_Control_I_UL) {
      rtb_Rotationmatrixfromlocalto_2 = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch_pt < Shooter_Motor_Control_I_LL) {
      rtb_Rotationmatrixfromlocalto_2 = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = rtb_Switch_pt;
    }

    /* End of Saturate: '<S89>/Saturation1' */
  } else {
    rtb_Rotationmatrixfromlocalto_2 = 0.0;
  }

  /* End of Switch: '<S89>/Switch' */

  /* Gain: '<S9>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_Switch_pt = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Switch: '<S10>/Switch4' incorporates:
   *  Switch: '<S10>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S10>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_Switch_pt;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S89>/Add1' incorporates:
     *  Switch: '<S10>/Switch'
     */
    cos_alpha = rtb_Subtract2 + rtb_Rotationmatrixfromlocalto_2;

    /* Saturate: '<S89>/Saturation2' incorporates:
     *  Switch: '<S10>/Switch'
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

    /* End of Saturate: '<S89>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S10>/Switch4' */

  /* Sum: '<S90>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Subtract2 = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S90>/Add' incorporates:
   *  Gain: '<S90>/Gain'
   *  Gain: '<S90>/Gain1'
   */
  sqrt_input = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Subtract2);

  /* Switch: '<S90>/Switch' incorporates:
   *  Constant: '<S90>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S90>/Sum2' incorporates:
     *  Gain: '<S90>/Gain2'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_Subtract2 = (Shooter_Motor_Control_I * rtb_Subtract2) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S90>/Subtract' incorporates:
     *  Constant: '<S90>/Constant'
     */
    rtb_Add_ls = 1.0 - sqrt_input;

    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S90>/Constant'
     *  RelationalOperator: '<S92>/LowerRelop1'
     *  Sum: '<S90>/Subtract'
     */
    if (!(rtb_Subtract2 > (1.0 - sqrt_input))) {
      /* Sum: '<S90>/Subtract1' incorporates:
       *  Constant: '<S90>/Constant1'
       */
      rtb_Add_ls = -1.0 - sqrt_input;

      /* Switch: '<S92>/Switch' incorporates:
       *  Constant: '<S90>/Constant1'
       *  RelationalOperator: '<S92>/UpperRelop'
       *  Sum: '<S90>/Subtract1'
       */
      if (!(rtb_Subtract2 < (-1.0 - sqrt_input))) {
        rtb_Add_ls = rtb_Subtract2;
      }

      /* End of Switch: '<S92>/Switch' */
    }

    /* End of Switch: '<S92>/Switch2' */

    /* Saturate: '<S90>/Saturation1' */
    if (rtb_Add_ls > Shooter_Motor_Control_I_UL) {
      rtb_Subtract2 = Shooter_Motor_Control_I_UL;
    } else if (rtb_Add_ls < Shooter_Motor_Control_I_LL) {
      rtb_Subtract2 = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Subtract2 = rtb_Add_ls;
    }

    /* End of Saturate: '<S90>/Saturation1' */
  } else {
    rtb_Subtract2 = 0.0;
  }

  /* End of Switch: '<S90>/Switch' */

  /* Switch: '<S10>/Switch5' incorporates:
   *  Switch: '<S10>/Switch1'
   *  Switch: '<S10>/Switch7'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Switch_pt;

    /* Outport: '<Root>/Shooter_Brake_Enable' incorporates:
     *  Constant: '<S10>/Constant3'
     */
    Code_Gen_Model_Y.Shooter_Brake_Enable = 0.0;
  } else {
    if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
      /* Sum: '<S90>/Add1' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      cos_alpha = sqrt_input + rtb_Subtract2;

      /* Saturate: '<S90>/Saturation2' incorporates:
       *  Switch: '<S10>/Switch1'
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

      /* End of Saturate: '<S90>/Saturation2' */
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

  /* Switch: '<S192>/Init' incorporates:
   *  UnitDelay: '<S192>/FixPt Unit Delay1'
   *  UnitDelay: '<S192>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch_pt = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_Switch_pt = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S192>/Init' */

  /* Sum: '<S190>/Sum1' */
  sqrt_input = Code_Gen_Model_B.Desired_BS_Length - rtb_Switch_pt;

  /* Switch: '<S191>/Switch2' incorporates:
   *  Constant: '<S172>/Constant1'
   *  Constant: '<S172>/Constant3'
   *  RelationalOperator: '<S191>/LowerRelop1'
   *  RelationalOperator: '<S191>/UpperRelop'
   *  Switch: '<S191>/Switch'
   */
  if (sqrt_input > BS_Position_Inc_RL) {
    sqrt_input = BS_Position_Inc_RL;
  } else if (sqrt_input < BS_Position_Dec_RL) {
    /* Switch: '<S191>/Switch' incorporates:
     *  Constant: '<S172>/Constant1'
     */
    sqrt_input = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S191>/Switch2' */

  /* Sum: '<S190>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = sqrt_input + rtb_Switch_pt;

  /* Sum: '<S168>/Sum' */
  rtb_Switch_pt = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S183>/Sum1' incorporates:
   *  Constant: '<S168>/Constant2'
   *  Product: '<S183>/Product'
   *  Sum: '<S183>/Sum'
   *  UnitDelay: '<S183>/Unit Delay1'
   */
  rtb_Add_ls = ((rtb_Switch_pt - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S168>/Product' incorporates:
   *  Constant: '<S168>/Constant3'
   */
  y = rtb_Add_ls * BS_Deriv_Gain;

  /* Switch: '<S16>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S182>/Diff' incorporates:
     *  UnitDelay: '<S182>/UD'
     *
     * Block description for '<S182>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S182>/UD':
     *
     *  Store in Global RAM
     */
    cos_alpha = y - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S168>/Saturation' */
    if (cos_alpha > BS_Deriv_UL) {
      cos_alpha = BS_Deriv_UL;
    } else if (cos_alpha < BS_Deriv_LL) {
      cos_alpha = BS_Deriv_LL;
    }

    /* Sum: '<S168>/Add' incorporates:
     *  Gain: '<S168>/Gain1'
     *  Saturate: '<S168>/Saturation'
     */
    cos_alpha += BS_Prop_Gain * rtb_Switch_pt;

    /* Saturate: '<S168>/Saturation2' */
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

    /* End of Saturate: '<S168>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch3' */

  /* Switch: '<S179>/Init' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  UnitDelay: '<S179>/FixPt Unit Delay1'
   *  UnitDelay: '<S179>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e != 0) {
    rtb_Switch_pt = rtb_Subtract3;
  } else {
    rtb_Switch_pt = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S179>/Init' */

  /* Switch: '<S159>/Switch' incorporates:
   *  Constant: '<S159>/Constant'
   *  Constant: '<S159>/Constant2'
   *  Constant: '<S16>/Constant28'
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  RelationalOperator: '<S159>/Relational Operator'
   *  UnitDelay: '<S159>/Unit Delay'
   */
  if (Code_Gen_Model_B.Desired_Back_Lower_Dist < 194.375) {
    cos_alpha = 1.0;
  } else {
    cos_alpha = 0.5;
  }

  /* Product: '<S159>/Product' incorporates:
   *  Switch: '<S159>/Switch'
   */
  sqrt_input = Code_Gen_Model_B.RL_Back * cos_alpha;

  /* Sum: '<S174>/Sum1' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   */
  rtb_Subtract3 -= rtb_Switch_pt;

  /* Switch: '<S178>/Switch2' incorporates:
   *  RelationalOperator: '<S178>/LowerRelop1'
   */
  if (!(rtb_Subtract3 > sqrt_input)) {
    /* Switch: '<S178>/Switch' incorporates:
     *  RelationalOperator: '<S178>/UpperRelop'
     *  UnaryMinus: '<S159>/Unary Minus2'
     */
    if (rtb_Subtract3 < (-sqrt_input)) {
      sqrt_input = -sqrt_input;
    } else {
      sqrt_input = rtb_Subtract3;
    }

    /* End of Switch: '<S178>/Switch' */
  }

  /* End of Switch: '<S178>/Switch2' */

  /* Sum: '<S174>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = sqrt_input + rtb_Switch_pt;

  /* Sum: '<S170>/Sum' */
  rtb_Subtract3 = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S170>/Gain1' */
  rtb_Switch_pt = AA_Prop_Gain * rtb_Subtract3;

  /* Switch: '<S170>/Switch' incorporates:
   *  Constant: '<S170>/Constant2'
   */
  if (UnitDelay) {
    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S170>/Constant3'
     *  UnitDelay: '<S186>/Delay Input1'
     *
     * Block description for '<S186>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      rtb_Subtract3 = AA_Integral_IC;
    } else {
      /* Sum: '<S170>/Sum2' incorporates:
       *  Gain: '<S170>/Gain2'
       *  UnitDelay: '<S170>/Unit Delay'
       */
      rtb_Subtract3 = (AA_Integral_Gain * rtb_Subtract3) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c;

      /* Sum: '<S170>/Subtract' incorporates:
       *  Constant: '<S170>/Constant'
       */
      sqrt_input = AA_TC_UL - rtb_Switch_pt;

      /* Switch: '<S187>/Switch2' incorporates:
       *  RelationalOperator: '<S187>/LowerRelop1'
       */
      if (!(rtb_Subtract3 > sqrt_input)) {
        /* Sum: '<S170>/Subtract1' incorporates:
         *  Constant: '<S170>/Constant1'
         */
        sqrt_input = AA_TC_LL - rtb_Switch_pt;

        /* Switch: '<S187>/Switch' incorporates:
         *  RelationalOperator: '<S187>/UpperRelop'
         */
        if (!(rtb_Subtract3 < sqrt_input)) {
          sqrt_input = rtb_Subtract3;
        }

        /* End of Switch: '<S187>/Switch' */
      }

      /* End of Switch: '<S187>/Switch2' */

      /* Saturate: '<S170>/Saturation1' */
      if (sqrt_input > AA_Integral_UL) {
        rtb_Subtract3 = AA_Integral_UL;
      } else if (sqrt_input < AA_Integral_LL) {
        rtb_Subtract3 = AA_Integral_LL;
      } else {
        rtb_Subtract3 = sqrt_input;
      }

      /* End of Saturate: '<S170>/Saturation1' */
    }

    /* End of Switch: '<S170>/Switch1' */
  } else {
    rtb_Subtract3 = 0.0;
  }

  /* End of Switch: '<S170>/Switch' */

  /* Switch: '<S16>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S170>/Add1' */
    cos_alpha = rtb_Switch_pt + rtb_Subtract3;

    /* Saturate: '<S170>/Saturation2' */
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

    /* End of Saturate: '<S170>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch' */

  /* Sum: '<S164>/Subtract1' incorporates:
   *  Constant: '<S164>/Constant24'
   *  Math: '<S164>/Math Function'
   *  Sqrt: '<S164>/Sqrt'
   *  Sum: '<S164>/Subtract'
   */
  rtb_Switch_pt = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                        Code_Gen_Model_B.Desired_Front_AA_Length) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S164>/Saturation' */
  if (rtb_Switch_pt > Front_AA_Max_Ext) {
    rtb_Switch_pt = Front_AA_Max_Ext;
  } else if (rtb_Switch_pt < Front_AA_Min_Ext) {
    rtb_Switch_pt = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S164>/Saturation' */

  /* Switch: '<S177>/Init' incorporates:
   *  UnitDelay: '<S177>/FixPt Unit Delay1'
   *  UnitDelay: '<S177>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j5 != 0) {
    sqrt_input = rtb_Switch_pt;
  } else {
    sqrt_input = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S177>/Init' */

  /* Product: '<S159>/Product2' */
  cos_alpha = Code_Gen_Model_B.RL_Back * Code_Gen_Model_B.RL_FB_Ratio;

  /* Sum: '<S173>/Sum1' */
  rtb_Switch_pt -= sqrt_input;

  /* Switch: '<S176>/Switch2' incorporates:
   *  RelationalOperator: '<S176>/LowerRelop1'
   *  RelationalOperator: '<S176>/UpperRelop'
   *  Switch: '<S176>/Switch'
   *  UnaryMinus: '<S159>/Unary Minus1'
   */
  if (rtb_Switch_pt > cos_alpha) {
    rtb_Switch_pt = cos_alpha;
  } else if (rtb_Switch_pt < (-cos_alpha)) {
    /* Switch: '<S176>/Switch' incorporates:
     *  UnaryMinus: '<S159>/Unary Minus1'
     */
    rtb_Switch_pt = -cos_alpha;
  }

  /* End of Switch: '<S176>/Switch2' */

  /* Sum: '<S173>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch_pt + sqrt_input;

  /* Sum: '<S171>/Sum' */
  sqrt_input = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S171>/Gain1' */
  rtb_Switch_pt = AA_Prop_Gain * sqrt_input;

  /* Switch: '<S171>/Switch' incorporates:
   *  Constant: '<S171>/Constant2'
   */
  if (UnitDelay) {
    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S171>/Constant3'
     *  UnitDelay: '<S188>/Delay Input1'
     *
     * Block description for '<S188>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S171>/Sum2' incorporates:
       *  Gain: '<S171>/Gain2'
       *  UnitDelay: '<S171>/Unit Delay'
       */
      sqrt_input = (AA_Integral_Gain * sqrt_input) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S171>/Subtract' incorporates:
       *  Constant: '<S171>/Constant'
       */
      cos_alpha = AA_TC_UL - rtb_Switch_pt;

      /* Switch: '<S189>/Switch2' incorporates:
       *  RelationalOperator: '<S189>/LowerRelop1'
       */
      if (!(sqrt_input > cos_alpha)) {
        /* Sum: '<S171>/Subtract1' incorporates:
         *  Constant: '<S171>/Constant1'
         */
        cos_alpha = AA_TC_LL - rtb_Switch_pt;

        /* Switch: '<S189>/Switch' incorporates:
         *  RelationalOperator: '<S189>/UpperRelop'
         */
        if (!(sqrt_input < cos_alpha)) {
          cos_alpha = sqrt_input;
        }

        /* End of Switch: '<S189>/Switch' */
      }

      /* End of Switch: '<S189>/Switch2' */

      /* Saturate: '<S171>/Saturation1' */
      if (cos_alpha > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (cos_alpha < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      } else {
        sqrt_input = cos_alpha;
      }

      /* End of Saturate: '<S171>/Saturation1' */
    }

    /* End of Switch: '<S171>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S171>/Switch' */

  /* Switch: '<S16>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S171>/Add1' */
    cos_alpha = rtb_Switch_pt + sqrt_input;

    /* Saturate: '<S171>/Saturation2' */
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

    /* End of Saturate: '<S171>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch2' */

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

  /* Gain: '<S156>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S157>/Compare' incorporates:
   *  Constant: '<S156>/Constant'
   *  Constant: '<S157>/Constant'
   */
  rtb_AT_Tag_15_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S156>/Switch1' incorporates:
   *  UnitDelay: '<S156>/Unit Delay1'
   */
  if (rtb_AT_Tag_15_Active) {
    rtb_Switch_pt = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch_pt = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S156>/Switch1' */

  /* Sum: '<S156>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch_pt;

  /* Gain: '<S156>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S156>/Switch' incorporates:
   *  UnitDelay: '<S156>/Unit Delay'
   */
  if (rtb_AT_Tag_15_Active) {
    cos_alpha = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    cos_alpha = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S156>/Switch' */

  /* Sum: '<S156>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - cos_alpha;

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

  /* SignalConversion: '<S9>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Update for UnitDelay: '<S148>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S148>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S149>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S149>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S150>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S150>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S151>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S151>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' incorporates:
     *  Bias: '<S221>/Bias'
     *  Merge: '<S195>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' incorporates:
     *  Bias: '<S221>/Bias'
     *  Merge: '<S195>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S93>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S113>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S93>/A'
   *  Delay: '<S93>/MemoryX'
   */
  rtb_Climber_Cmd_Direction = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  sin_alpha = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S93>/MemoryX' incorporates:
   *  Constant: '<S93>/B'
   *  Product: '<S113>/A[k]*xhat[k|k-1]'
   *  Product: '<S113>/B[k]*u[k]'
   *  Sum: '<S113>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Climber_Cmd_Direction) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + sin_alpha) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S39>/Delay Input1' incorporates:
   *  Constant: '<S8>/Constant3'
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_thetay;

  /* Update for UnitDelay: '<S147>/UD'
   *
   * Block description for '<S147>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

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

  /* Update for UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_OR7;

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = (Code_Gen_Model_B.Note_State_ID == 0.0);

  /* Update for UnitDelay: '<S11>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S358>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S358>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S380>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S379>/UD'
   *
   * Block description for '<S379>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_3;

  /* Update for UnitDelay: '<S377>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S360>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch8;

  /* Update for UnitDelay: '<S375>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S375>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S375>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch8;

  /* Update for UnitDelay: '<S359>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_my;

  /* Update for UnitDelay: '<S368>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S368>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S368>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_my;

  /* Update for UnitDelay: '<S334>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init;

  /* Update for UnitDelay: '<S333>/UD'
   *
   * Block description for '<S333>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2_p2;

  /* Update for UnitDelay: '<S327>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S345>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Add_jk;

  /* Update for UnitDelay: '<S344>/UD'
   *
   * Block description for '<S344>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S330>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S271>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_os;

  /* Update for UnitDelay: '<S270>/UD'
   *
   * Block description for '<S270>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S264>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S282>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ia;

  /* Update for UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S267>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S292>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_k0;

  /* Update for UnitDelay: '<S285>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S303>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S302>/UD'
   *
   * Block description for '<S302>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S288>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_jx;

  /* Update for UnitDelay: '<S313>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S312>/UD'
   *
   * Block description for '<S312>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_cj;

  /* Update for UnitDelay: '<S306>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S324>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S323>/UD'
   *
   * Block description for '<S323>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_nh;

  /* Update for UnitDelay: '<S309>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S181>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S181>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 0U;

  /* Update for UnitDelay: '<S169>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S184>/Delay Input1'
   *
   * Block description for '<S184>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = UnitDelay;

  /* Update for UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay_e;

  /* Update for UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nx = rtb_IsRedAlliance;

  /* Update for UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_AT_Tag_11_Active;

  /* Update for UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hw = rtb_AT_Tag_12_Active;

  /* Update for UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_13_Active;

  /* Update for UnitDelay: '<S88>/Delay Input1'
   *
   * Block description for '<S88>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_i = rtb_AT_Tag_14_Active;

  /* Update for UnitDelay: '<S89>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S90>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Subtract2;

  /* Update for UnitDelay: '<S192>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S192>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S183>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Add_ls;

  /* Update for UnitDelay: '<S182>/UD'
   *
   * Block description for '<S182>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = y;

  /* Update for UnitDelay: '<S179>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S179>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 0U;

  /* Update for UnitDelay: '<S186>/Delay Input1'
   *
   * Block description for '<S186>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = UnitDelay;

  /* Update for UnitDelay: '<S170>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Subtract3;

  /* Update for UnitDelay: '<S177>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S177>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j5 = 0U;

  /* Update for UnitDelay: '<S188>/Delay Input1'
   *
   * Block description for '<S188>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = UnitDelay;

  /* Update for UnitDelay: '<S171>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = sqrt_input;

  /* Update for UnitDelay: '<S156>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch_pt;

  /* Update for UnitDelay: '<S156>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = cos_alpha;
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

    /* Start for If: '<S17>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S93>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S358>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S375>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S368>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S25>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S181>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 1U;

    /* InitializeConditions for UnitDelay: '<S192>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S179>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 1U;

    /* InitializeConditions for UnitDelay: '<S177>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j5 = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S426>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S17>/Spline Path Following Enabled' */
    /* Start for If: '<S199>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S195>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S199>/Robot_Index_Is_Valid' */
    /* Start for If: '<S202>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S202>/Circle_Check_Valid' */
    /* Start for If: '<S204>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S202>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S199>/Robot_Index_Is_Valid' */
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

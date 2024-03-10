/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.106
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Mar  9 22:54:40 2024
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

/* Exported block parameters */
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S147>/Gain2'
                                        *   '<S148>/Gain2'
                                        *   '<S149>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S147>/Constant3'
                                        *   '<S148>/Constant3'
                                        *   '<S149>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S147>/Saturation1'
                                        *   '<S148>/Saturation1'
                                        *   '<S149>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S147>/Saturation1'
                                        *   '<S148>/Saturation1'
                                        *   '<S149>/Saturation1'
                                        */
real_T AA_Position_Dec_RL = -2.0;      /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S150>/Constant1'
                                        *   '<S151>/Constant1'
                                        *   '<S153>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 2.0;       /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S150>/Constant3'
                                        *   '<S151>/Constant3'
                                        *   '<S153>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S147>/Gain1'
                                        *   '<S148>/Gain1'
                                        *   '<S149>/Gain1'
                                        */
real_T AA_TC_LL = -0.4;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S147>/Constant1'
                                        *   '<S147>/Saturation2'
                                        *   '<S148>/Constant1'
                                        *   '<S148>/Saturation2'
                                        *   '<S149>/Constant1'
                                        *   '<S149>/Saturation2'
                                        */
real_T AA_TC_UL = 0.4;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S147>/Constant'
                                        *   '<S147>/Saturation2'
                                        *   '<S148>/Constant'
                                        *   '<S148>/Saturation2'
                                        *   '<S149>/Constant'
                                        *   '<S149>/Saturation2'
                                        */
real_T AT_Tag_11_Yaw_Offset = 0.0;     /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S381>/Constant12'
                                        */
real_T AT_Tag_12_Yaw_Offset = 0.0;     /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S381>/Constant11'
                                        */
real_T AT_Tag_13_Coordinate_Y = 4.1051;/* Variable: AT_Tag_13_Coordinate_Y
                                        * Referenced by: '<S381>/Constant2'
                                        */
real_T AT_Tag_13_Yaw_Offset = 0.0;     /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S381>/Constant10'
                                        */
real_T AT_Tag_14_Coordinate_Y = 4.1051;/* Variable: AT_Tag_14_Coordinate_Y
                                        * Referenced by: '<S381>/Constant21'
                                        */
real_T AT_Tag_14_Yaw_Offset = 0.0;     /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S381>/Constant8'
                                        */
real_T AT_Tag_15_Yaw_Offset = 0.0;     /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S381>/Constant7'
                                        */
real_T AT_Tag_16_Yaw_Offset = 0.0;     /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S381>/Constant6'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S6>/Constant9'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S6>/Constant1'
                                        */
real_T AT_Tag_4_Yaw_Offset = 0.0;      /* Variable: AT_Tag_4_Yaw_Offset
                                        * Referenced by: '<S381>/Constant16'
                                        */
real_T AT_Tag_5_Coordinate_X = 14.7008;/* Variable: AT_Tag_5_Coordinate_X
                                        * Referenced by: '<S381>/Constant9'
                                        */
real_T AT_Tag_5_Yaw_Offset = 0.0;      /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S381>/Constant14'
                                        */
real_T AT_Tag_6_Coordinate_X = 1.8415; /* Variable: AT_Tag_6_Coordinate_X
                                        * Referenced by: '<S381>/Constant5'
                                        */
real_T AT_Tag_6_Yaw_Offset = 0.0;      /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S381>/Constant13'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S6>/Constant3'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S6>/Constant2'
                                        */
real_T AT_Tag_7_Yaw_Offset = 0.0;      /* Variable: AT_Tag_7_Yaw_Offset
                                        * Referenced by: '<S381>/Constant15'
                                        */
real_T AT_XY_Control_Gain = 0.0;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S385>/Gain2'
                                        */
real_T AT_Yaw_Control_Gain = 0.0;      /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S384>/Constant17'
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
                                        * Referenced by: '<S146>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S146>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S146>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S146>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -2.0;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S152>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 2.0;       /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S152>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S146>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S146>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S146>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S406>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S402>/Constant'
                                         *   '<S402>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S406>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S402>/Constant1'
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
                                        * Referenced by: '<S329>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S245>/Constant3'
                                        *   '<S266>/Constant3'
                                        *   '<S287>/Constant3'
                                        *   '<S308>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S245>/Constant2'
                                   *   '<S266>/Constant2'
                                   *   '<S287>/Constant2'
                                   *   '<S308>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S245>/Saturation'
                                        *   '<S266>/Saturation'
                                        *   '<S287>/Saturation'
                                        *   '<S308>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S245>/Saturation'
                                        *   '<S266>/Saturation'
                                        *   '<S287>/Saturation'
                                        *   '<S308>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S245>/Gain'
                                            *   '<S266>/Gain'
                                            *   '<S287>/Gain'
                                            *   '<S308>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S245>/Gain2'
                                        *   '<S266>/Gain2'
                                        *   '<S287>/Gain2'
                                        *   '<S308>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S245>/Saturation1'
                                        *   '<S266>/Saturation1'
                                        *   '<S287>/Saturation1'
                                        *   '<S308>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S245>/Saturation1'
                                        *   '<S266>/Saturation1'
                                        *   '<S287>/Saturation1'
                                        *   '<S308>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S245>/Gain1'
                                        *   '<S266>/Gain1'
                                        *   '<S287>/Gain1'
                                        *   '<S308>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S250>/Constant'
                            *   '<S271>/Constant'
                            *   '<S292>/Constant'
                            *   '<S313>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S24>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S142>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S142>/Saturation'
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
real_T KF_Enable = 0.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S10>/Constant1'
                                        *   '<S10>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by:
                                          *   '<S10>/Constant'
                                          *   '<S25>/Constant'
                                          *   '<S383>/Constant'
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
                                        * Referenced by: '<S135>/Constant'
                                        */
real_T Servo_Position_Deploy = 1.0;    /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S8>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Position_Store = 0.0;     /* Variable: Servo_Position_Store
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
                                           *   '<S68>/Gain'
                                           *   '<S69>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S68>/Gain2'
                                         *   '<S69>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S68>/Saturation1'
                                          *   '<S69>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S68>/Saturation1'
                                         *   '<S69>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S68>/Gain1'
                                         *   '<S69>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 450.0;/* Variable: Shooter_Motor_DesSpd_Store
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
                          * Referenced by: '<S230>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S230>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S177>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S190>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S230>/Constant3'
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
                                          * Referenced by: '<S386>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S350>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S350>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S350>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S350>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S349>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S350>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S350>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S350>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S350>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S350>/Constant1'
                                   *   '<S350>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S350>/Constant'
                                   *   '<S350>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S340>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S340>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S340>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S340>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S340>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S340>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S248>/Constant3'
                                        *   '<S269>/Constant3'
                                        *   '<S290>/Constant3'
                                        *   '<S311>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S248>/Constant2'
                                *   '<S269>/Constant2'
                                *   '<S290>/Constant2'
                                *   '<S311>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S248>/Saturation'
                                           *   '<S269>/Saturation'
                                           *   '<S290>/Saturation'
                                           *   '<S311>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S248>/Saturation'
                                          *   '<S269>/Saturation'
                                          *   '<S290>/Saturation'
                                          *   '<S311>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S248>/Gain2'
                                         *   '<S269>/Gain2'
                                         *   '<S290>/Gain2'
                                         *   '<S311>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S248>/Saturation1'
                                             *   '<S269>/Saturation1'
                                             *   '<S290>/Saturation1'
                                             *   '<S311>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S248>/Saturation1'
                                            *   '<S269>/Saturation1'
                                            *   '<S290>/Saturation1'
                                            *   '<S311>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S248>/Gain1'
                                        *   '<S269>/Gain1'
                                        *   '<S290>/Gain1'
                                        *   '<S311>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S384>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S384>/Constant1'
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
                        * Referenced by: '<S328>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S328>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S328>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S328>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S328>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S328>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S385>/Gain'
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
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_c4;
  real_T rtb_Add_dl;
  real_T rtb_Add_ik;
  real_T rtb_Add_pw;
  real_T rtb_Chain_DutyCycle;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_er;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Init_g;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Modulation_Drv;
  real_T rtb_Product_fi;
  real_T rtb_Subtract1_bm;
  real_T rtb_Subtract1_dk;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_hq;
  real_T rtb_Subtract1_kj;
  real_T rtb_Subtract1_m4;
  real_T rtb_Subtract1_n;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch;
  real_T rtb_Switch1_dm;
  real_T rtb_Switch1_e;
  real_T rtb_Switch1_k;
  real_T rtb_Switch1_n4;
  real_T rtb_Switch2;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_j;
  real_T rtb_Switch2_m;
  real_T rtb_Switch4_g;
  real_T rtb_Switch_ar;
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
  int32_T s202_iter;
  uint16_T s227_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T exitg1;
  boolean_T rtb_AT_Tag_13_Active;
  boolean_T rtb_AT_Tag_14_Active;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_AT_Tag_6_Active;
  boolean_T rtb_Compare_pf;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_OR7;
  boolean_T rtb_Relative_Translation_Flag;

  /* Sum: '<S235>/Add1' incorporates:
   *  Constant: '<S235>/Constant3'
   *  Constant: '<S235>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S235>/Math Function'
   *  Sum: '<S16>/Add'
   *  Sum: '<S235>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S127>/Diff'
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
  rtb_Chain_DutyCycle = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S236>/Add1' incorporates:
   *  Constant: '<S236>/Constant3'
   *  Constant: '<S236>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S236>/Math Function'
   *  Sum: '<S16>/Add1'
   *  Sum: '<S236>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S128>/Diff'
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
  rtb_Init = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S237>/Add1' incorporates:
   *  Constant: '<S237>/Constant3'
   *  Constant: '<S237>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S237>/Math Function'
   *  Sum: '<S16>/Add2'
   *  Sum: '<S237>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product2' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S238>/Add1' incorporates:
   *  Constant: '<S238>/Constant3'
   *  Constant: '<S238>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S238>/Math Function'
   *  Sum: '<S16>/Add3'
   *  Sum: '<S238>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S12>/Product3' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_Init_g = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S12>/Product7' incorporates:
   *  Fcn: '<S131>/r->x'
   *  Fcn: '<S131>/theta->y'
   *  Fcn: '<S132>/r->x'
   *  Fcn: '<S132>/theta->y'
   *  Fcn: '<S133>/r->x'
   *  Fcn: '<S133>/theta->y'
   *  Fcn: '<S134>/r->x'
   *  Fcn: '<S134>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_Chain_DutyCycle * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Chain_DutyCycle * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_Init * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_Init * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Init_g * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Init_g * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

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
  } else {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant4'
     *  Switch: '<S7>/Switch1'
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

  /* Logic: '<S7>/OR7' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S32>/Constant'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S32>/Compare'
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
     *  ActionPort: '<S5>/Action Port'
     */
    /* SignalConversion generated from: '<S5>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S5>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtb_Switch_ar = 0.0;

    /* Merge: '<S11>/Merge1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  SignalConversion generated from: '<S5>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S11>/Merge2' incorporates:
     *  Constant: '<S5>/Constant2'
     *  SignalConversion generated from: '<S5>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S11>/Merge3' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S11>/Merge4' incorporates:
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

    /* Merge: '<S11>/Merge7' incorporates:
     *  Constant: '<S5>/Constant7'
     *  SignalConversion generated from: '<S5>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S11>/Merge9' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S11>/Merge10' incorporates:
     *  Constant: '<S5>/Constant10'
     *  SignalConversion generated from: '<S5>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S11>/Merge11' incorporates:
     *  Constant: '<S5>/Constant11'
     *  SignalConversion generated from: '<S5>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S11>/Merge12' incorporates:
     *  Constant: '<S5>/Constant12'
     *  SignalConversion generated from: '<S5>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Outport: '<Root>/Chain_DutyCycle' incorporates:
     *  Constant: '<S5>/Constant17'
     *  SignalConversion generated from: '<S5>/Chain_DutyCycle'
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
    rtb_Switch_ar = 0.0;

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

    /* Logic: '<S381>/Logical Operator2' incorporates:
     *  Inport: '<Root>/AT_Tag_5_Found'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_5_Found));

    /* RelationalOperator: '<S383>/Compare' incorporates:
     *  Constant: '<S383>/Constant'
     *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
     */
    rtb_Is_Absolute_Translation_g = (Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
      KF_Vision_Ambiguity_Thresh);

    /* Logic: '<S381>/Logical Operator3' incorporates:
     *  Inport: '<Root>/AT_Tag_6_Found'
     */
    rtb_AT_Tag_6_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.AT_Tag_6_Found));

    /* Switch: '<S381>/Switch15' incorporates:
     *  Logic: '<S381>/AND'
     *  Logic: '<S381>/AND1'
     *  Switch: '<S381>/Switch16'
     */
    if (rtb_AT_Tag_5_Active && rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S381>/Switch15' incorporates:
       *  Constant: '<S381>/Constant9'
       *  Inport: '<Root>/Photon_Est_Pose_X'
       *  Sum: '<S381>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Tag_5_Coordinate_X -
        Code_Gen_Model_U.Photon_Est_Pose_X;
    } else if (rtb_AT_Tag_6_Active && rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S381>/Switch16' incorporates:
       *  Constant: '<S381>/Constant5'
       *  Inport: '<Root>/Photon_Est_Pose_X'
       *  Sum: '<S381>/Add16'
       *  Switch: '<S381>/Switch15'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Tag_6_Coordinate_X -
        Code_Gen_Model_U.Photon_Est_Pose_X;
    } else {
      /* Switch: '<S381>/Switch15' incorporates:
       *  Constant: '<S381>/Constant1'
       *  Switch: '<S381>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;
    }

    /* End of Switch: '<S381>/Switch15' */

    /* Logic: '<S381>/Logical Operator6' incorporates:
     *  Inport: '<Root>/AT_Tag_13_Found'
     */
    rtb_AT_Tag_13_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_13_Found));

    /* Logic: '<S381>/Logical Operator7' incorporates:
     *  Inport: '<Root>/AT_Tag_14_Found'
     */
    rtb_AT_Tag_14_Active = ((Code_Gen_Model_B.Align_Trap) &&
      (Code_Gen_Model_U.AT_Tag_14_Found));

    /* Switch: '<S381>/Switch19' incorporates:
     *  Logic: '<S381>/AND2'
     *  Logic: '<S381>/AND3'
     *  Switch: '<S381>/Switch20'
     */
    if (rtb_AT_Tag_13_Active && rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S381>/Switch19' incorporates:
       *  Constant: '<S381>/Constant2'
       *  Inport: '<Root>/Photon_Est_Pose_Y'
       *  Sum: '<S381>/Add13'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Tag_13_Coordinate_Y -
        Code_Gen_Model_U.Photon_Est_Pose_Y;
    } else if (rtb_AT_Tag_14_Active && rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S381>/Switch20' incorporates:
       *  Constant: '<S381>/Constant21'
       *  Inport: '<Root>/Photon_Est_Pose_Y'
       *  Sum: '<S381>/Add12'
       *  Switch: '<S381>/Switch19'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Tag_14_Coordinate_Y -
        Code_Gen_Model_U.Photon_Est_Pose_Y;
    } else {
      /* Switch: '<S381>/Switch19' incorporates:
       *  Constant: '<S381>/Constant3'
       *  Switch: '<S381>/Switch20'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S381>/Switch19' */

    /* Lookup_n-D: '<S385>/Modulation_Drv' incorporates:
     *  Math: '<S385>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* Switch: '<S402>/Switch1' incorporates:
     *  Constant: '<S402>/Constant'
     *  Constant: '<S402>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_UnitDelay1_gi = Boost_Trigger_High_Speed;
    } else {
      rtb_UnitDelay1_gi = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S402>/Switch1' */

    /* Switch: '<S409>/Init' incorporates:
     *  UnitDelay: '<S409>/FixPt Unit Delay1'
     *  UnitDelay: '<S409>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Switch_ar = rtb_UnitDelay1_gi;
    } else {
      rtb_Switch_ar = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S409>/Init' */

    /* Sum: '<S407>/Sum1' */
    rtb_Chain_DutyCycle = rtb_UnitDelay1_gi - rtb_Switch_ar;

    /* Switch: '<S408>/Switch2' incorporates:
     *  Constant: '<S406>/Constant1'
     *  Constant: '<S406>/Constant3'
     *  RelationalOperator: '<S408>/LowerRelop1'
     *  RelationalOperator: '<S408>/UpperRelop'
     *  Switch: '<S408>/Switch'
     */
    if (rtb_Chain_DutyCycle > Boost_Trigger_Increasing_Limit) {
      rtb_Chain_DutyCycle = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Chain_DutyCycle < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S408>/Switch' incorporates:
       *  Constant: '<S406>/Constant1'
       */
      rtb_Chain_DutyCycle = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S407>/Sum' incorporates:
     *  Switch: '<S408>/Switch2'
     */
    rtb_Chain_DutyCycle += rtb_Switch_ar;

    /* RelationalOperator: '<S403>/Compare' incorporates:
     *  Constant: '<S403>/Constant'
     */
    rtb_Compare_pf = (rtb_Modulation_Drv == 0.0);

    /* Gain: '<S385>/Gain' */
    rtb_Init = Translation_Twist_Gain * Code_Gen_Model_B.Drive_Joystick_Z;

    /* Logic: '<S385>/Logical Operator' incorporates:
     *  Constant: '<S404>/Constant'
     *  RelationalOperator: '<S404>/Compare'
     */
    rtb_Relative_Translation_Flag = ((Code_Gen_Model_B.Drive_Joystick_Z != 0.0) &&
      rtb_Compare_pf);

    /* Switch: '<S385>/Switch' incorporates:
     *  Switch: '<S385>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S11>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Init;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S11>/Merge4' incorporates:
       *  Gain: '<S385>/Gain2'
       *  Sum: '<S385>/Add'
       *  Switch: '<S385>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = (Code_Gen_Model_B.AT_Error_X +
        Code_Gen_Model_B.AT_Error_Y) * AT_XY_Control_Gain;
    } else {
      /* Product: '<S402>/Product' incorporates:
       *  Switch: '<S385>/Switch2'
       */
      rtb_Switch2_m = rtb_Modulation_Drv * rtb_Chain_DutyCycle;

      /* Saturate: '<S402>/Saturation' incorporates:
       *  Switch: '<S385>/Switch2'
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

      /* End of Saturate: '<S402>/Saturation' */
    }

    /* End of Switch: '<S385>/Switch' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S385>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = Code_Gen_Model_U.Is_Absolute_Translation;
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S18>/Switch' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = ((!(TEST_Swerve_Mode_Override_Flag != 0.0)) ||
      (Code_Gen_Model_U.Is_Absolute_Steering));

    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S410>/Constant'
     *  Constant: '<S411>/Constant'
     *  Logic: '<S405>/AND'
     *  RelationalOperator: '<S410>/Compare'
     *  RelationalOperator: '<S411>/Compare'
     *  Switch: '<S405>/Switch2'
     *  UnitDelay: '<S405>/Unit Delay'
     *  UnitDelay: '<S405>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Modulation_Drv = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Modulation_Drv = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Switch: '<S385>/Switch1' incorporates:
     *  Switch: '<S385>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Signum: '<S385>/Sign' */
      if (rtIsNaN(rtb_Init)) {
        d = (rtNaN);
      } else if (rtb_Init < 0.0) {
        d = -1.0;
      } else {
        d = (rtb_Init > 0.0);
      }

      /* Merge: '<S11>/Merge3' incorporates:
       *  Gain: '<S385>/Gain1'
       *  Signum: '<S385>/Sign'
       */
      Code_Gen_Model_B.Translation_Angle = 1.5707963267948966 * d;
    } else if (rtb_Compare_pf) {
      /* Switch: '<S385>/Switch4' incorporates:
       *  Merge: '<S11>/Merge3'
       *  Trigonometry: '<S385>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X);
    } else {
      /* Merge: '<S11>/Merge3' incorporates:
       *  Switch: '<S385>/Switch4'
       *  Trigonometry: '<S385>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Modulation_Drv,
        rtb_Switch2);
    }

    /* End of Switch: '<S385>/Switch1' */

    /* Switch: '<S381>/Switch2' incorporates:
     *  Inport: '<Root>/AT_Tag_11_Found'
     *  Inport: '<Root>/AT_Tag_12_Found'
     *  Inport: '<Root>/AT_Tag_15_Found'
     *  Inport: '<Root>/AT_Tag_16_Found'
     *  Inport: '<Root>/AT_Tag_4_Found'
     *  Inport: '<Root>/AT_Tag_7_Found'
     *  Logic: '<S381>/Logical Operator'
     *  Logic: '<S381>/Logical Operator1'
     *  Logic: '<S381>/Logical Operator4'
     *  Logic: '<S381>/Logical Operator5'
     *  Logic: '<S381>/Logical Operator8'
     *  Logic: '<S381>/Logical Operator9'
     *  Switch: '<S381>/Switch10'
     *  Switch: '<S381>/Switch11'
     *  Switch: '<S381>/Switch3'
     *  Switch: '<S381>/Switch4'
     *  Switch: '<S381>/Switch5'
     *  Switch: '<S381>/Switch6'
     *  Switch: '<S381>/Switch7'
     *  Switch: '<S381>/Switch8'
     *  Switch: '<S381>/Switch9'
     */
    if ((Code_Gen_Model_B.Align_Speaker) && (Code_Gen_Model_U.AT_Tag_4_Found)) {
      /* Switch: '<S381>/Switch2' incorporates:
       *  Constant: '<S381>/Constant16'
       *  Inport: '<Root>/AT_Tag_4_Yaw'
       *  Sum: '<S381>/Add9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_4_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_4_Yaw;
    } else if ((Code_Gen_Model_B.Align_Speaker) &&
               (Code_Gen_Model_U.AT_Tag_7_Found)) {
      /* Switch: '<S381>/Switch3' incorporates:
       *  Constant: '<S381>/Constant15'
       *  Inport: '<Root>/AT_Tag_7_Yaw'
       *  Sum: '<S381>/Add8'
       *  Switch: '<S381>/Switch2'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_7_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_7_Yaw;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S381>/Switch4' incorporates:
       *  Constant: '<S381>/Constant14'
       *  Inport: '<Root>/AT_Tag_5_Yaw'
       *  Sum: '<S381>/Add7'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_5_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_5_Yaw;
    } else if (rtb_AT_Tag_6_Active) {
      /* Switch: '<S381>/Switch5' incorporates:
       *  Constant: '<S381>/Constant13'
       *  Inport: '<Root>/AT_Tag_6_Yaw'
       *  Sum: '<S381>/Add6'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_6_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_6_Yaw;
    } else if ((Code_Gen_Model_B.Align_Trap) &&
               (Code_Gen_Model_U.AT_Tag_11_Found)) {
      /* Switch: '<S381>/Switch6' incorporates:
       *  Constant: '<S381>/Constant12'
       *  Inport: '<Root>/AT_Tag_11_Yaw'
       *  Sum: '<S381>/Add5'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_11_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_11_Yaw;
    } else if ((Code_Gen_Model_B.Align_Trap) &&
               (Code_Gen_Model_U.AT_Tag_12_Found)) {
      /* Switch: '<S381>/Switch7' incorporates:
       *  Constant: '<S381>/Constant11'
       *  Inport: '<Root>/AT_Tag_12_Yaw'
       *  Sum: '<S381>/Add4'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       *  Switch: '<S381>/Switch6'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_12_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_12_Yaw;
    } else if (rtb_AT_Tag_13_Active) {
      /* Switch: '<S381>/Switch8' incorporates:
       *  Constant: '<S381>/Constant10'
       *  Inport: '<Root>/AT_Tag_13_Yaw'
       *  Sum: '<S381>/Add3'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       *  Switch: '<S381>/Switch6'
       *  Switch: '<S381>/Switch7'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_13_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_13_Yaw;
    } else if (rtb_AT_Tag_14_Active) {
      /* Switch: '<S381>/Switch9' incorporates:
       *  Constant: '<S381>/Constant8'
       *  Inport: '<Root>/AT_Tag_14_Yaw'
       *  Sum: '<S381>/Add2'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       *  Switch: '<S381>/Switch6'
       *  Switch: '<S381>/Switch7'
       *  Switch: '<S381>/Switch8'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_14_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_14_Yaw;
    } else if ((Code_Gen_Model_B.Align_Trap) &&
               (Code_Gen_Model_U.AT_Tag_15_Found)) {
      /* Switch: '<S381>/Switch10' incorporates:
       *  Constant: '<S381>/Constant7'
       *  Inport: '<Root>/AT_Tag_15_Yaw'
       *  Sum: '<S381>/Add1'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       *  Switch: '<S381>/Switch6'
       *  Switch: '<S381>/Switch7'
       *  Switch: '<S381>/Switch8'
       *  Switch: '<S381>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_15_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_15_Yaw;
    } else if ((Code_Gen_Model_B.Align_Trap) &&
               (Code_Gen_Model_U.AT_Tag_16_Found)) {
      /* Switch: '<S381>/Switch11' incorporates:
       *  Constant: '<S381>/Constant6'
       *  Inport: '<Root>/AT_Tag_16_Yaw'
       *  Sum: '<S381>/Add'
       *  Switch: '<S381>/Switch10'
       *  Switch: '<S381>/Switch2'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       *  Switch: '<S381>/Switch6'
       *  Switch: '<S381>/Switch7'
       *  Switch: '<S381>/Switch8'
       *  Switch: '<S381>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = AT_Tag_16_Yaw_Offset +
        Code_Gen_Model_U.AT_Tag_16_Yaw;
    } else {
      /* Switch: '<S381>/Switch2' incorporates:
       *  Constant: '<S381>/Constant'
       *  Switch: '<S381>/Switch10'
       *  Switch: '<S381>/Switch11'
       *  Switch: '<S381>/Switch3'
       *  Switch: '<S381>/Switch4'
       *  Switch: '<S381>/Switch5'
       *  Switch: '<S381>/Switch6'
       *  Switch: '<S381>/Switch7'
       *  Switch: '<S381>/Switch8'
       *  Switch: '<S381>/Switch9'
       */
      Code_Gen_Model_B.AT_Error_Yaw = 0.0;
    }

    /* End of Switch: '<S381>/Switch2' */

    /* Switch: '<S386>/Switch' incorporates:
     *  Constant: '<S386>/Constant'
     *  Constant: '<S386>/Constant1'
     *  Constant: '<S386>/Constant2'
     *  Math: '<S386>/Hypot'
     *  RelationalOperator: '<S386>/GreaterThan'
     *  Switch: '<S386>/Switch1'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_Switch_ar = Code_Gen_Model_B.Steer_Joystick_X;
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_Y;
    } else {
      rtb_Switch_ar = 0.0;
      rtb_UnitDelay1_gi = 0.0;
    }

    /* End of Switch: '<S386>/Switch' */

    /* Logic: '<S384>/AND' incorporates:
     *  Constant: '<S387>/Constant'
     *  Constant: '<S388>/Constant'
     *  Logic: '<S394>/AND'
     *  RelationalOperator: '<S387>/Compare'
     *  RelationalOperator: '<S388>/Compare'
     */
    rtb_AT_Tag_5_Active = ((rtb_Switch_ar == 0.0) && (rtb_UnitDelay1_gi == 0.0));

    /* Logic: '<S384>/AND2' incorporates:
     *  RelationalOperator: '<S389>/FixPt Relational Operator'
     *  RelationalOperator: '<S390>/FixPt Relational Operator'
     *  RelationalOperator: '<S391>/FixPt Relational Operator'
     *  RelationalOperator: '<S392>/FixPt Relational Operator'
     *  UnitDelay: '<S389>/Delay Input1'
     *  UnitDelay: '<S390>/Delay Input1'
     *  UnitDelay: '<S391>/Delay Input1'
     *  UnitDelay: '<S392>/Delay Input1'
     *
     * Block description for '<S389>/Delay Input1':
     *
     *  Store in Global RAM
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
     */
    rtb_AT_Tag_6_Active = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S384>/Constant1'
     *  Constant: '<S384>/Constant17'
     *  Constant: '<S384>/Constant2'
     *  Logic: '<S384>/AND'
     *  Logic: '<S384>/AND4'
     *  Logic: '<S384>/NOT1'
     *  Product: '<S384>/Product1'
     *  Product: '<S384>/Product2'
     *  Sum: '<S384>/Add'
     *  Sum: '<S384>/Sum'
     *  UnitDelay: '<S384>/Unit Delay'
     */
    if (rtb_AT_Tag_5_Active && (!rtb_AT_Tag_6_Active)) {
      rtb_Init = ((Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain) +
                  (Code_Gen_Model_B.AT_Error_Yaw * AT_Yaw_Control_Gain)) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Init = 0.0;
    }

    /* End of Switch: '<S384>/Switch1' */

    /* Switch: '<S394>/Switch1' incorporates:
     *  Switch: '<S394>/Switch2'
     *  UnitDelay: '<S394>/Unit Delay'
     *  UnitDelay: '<S394>/Unit Delay1'
     */
    if (rtb_AT_Tag_5_Active) {
      rtb_UnitDelay1_gi = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch2_e = rtb_Switch_ar;
    }

    /* End of Switch: '<S394>/Switch1' */

    /* Logic: '<S384>/AND1' incorporates:
     *  Logic: '<S384>/AND'
     *  Logic: '<S384>/AND3'
     *  UnitDelay: '<S384>/Unit Delay2'
     */
    rtb_Compare_pf = (rtb_AT_Tag_5_Active && (rtb_AT_Tag_6_Active ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Switch: '<S384>/Switch4' incorporates:
     *  Constant: '<S384>/Constant5'
     *  Switch: '<S384>/Switch5'
     *  Switch: '<S384>/Switch6'
     *  Switch: '<S384>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S384>/Switch5' incorporates:
       *  Constant: '<S384>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S384>/Switch6' incorporates:
       *  Constant: '<S384>/Constant7'
       *  Switch: '<S384>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S384>/Switch7' incorporates:
       *  Constant: '<S384>/Constant8'
       *  Switch: '<S384>/Switch5'
       *  Switch: '<S384>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S384>/Switch6' incorporates:
       *  Switch: '<S384>/Switch5'
       *  UnitDelay: '<S384>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S384>/Switch4' */

    /* Switch: '<S384>/Switch3' incorporates:
     *  Logic: '<S384>/NOT'
     *  Trigonometry: '<S384>/Atan2'
     */
    if (!rtb_Compare_pf) {
      d = rt_atan2d_snf(rtb_UnitDelay1_gi, rtb_Switch2_e);
    } else {
      d = rtb_Switch4_g;
    }

    /* Merge: '<S11>/Merge1' incorporates:
     *  Sum: '<S384>/Sum1'
     *  Switch: '<S384>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = d + rtb_Init;

    /* RelationalOperator: '<S397>/Compare' incorporates:
     *  Constant: '<S397>/Constant'
     */
    rtb_AT_Tag_5_Active = (rtb_Switch2_e < 0.0);

    /* Switch: '<S393>/Switch' incorporates:
     *  Constant: '<S393>/Constant'
     *  Constant: '<S393>/Constant1'
     *  Constant: '<S395>/Constant'
     *  Constant: '<S396>/Constant'
     *  Logic: '<S393>/Logical Operator'
     *  RelationalOperator: '<S395>/Compare'
     *  RelationalOperator: '<S396>/Compare'
     *  UnitDelay: '<S393>/Unit Delay'
     */
    if (((rtb_UnitDelay1_gi < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >=
          0.0)) && rtb_AT_Tag_5_Active) {
      d = 6.2831853071795862;
    } else {
      d = 0.0;
    }

    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S393>/Constant2'
     *  Constant: '<S393>/Constant3'
     *  Constant: '<S398>/Constant'
     *  Constant: '<S399>/Constant'
     *  Logic: '<S393>/Logical Operator1'
     *  RelationalOperator: '<S398>/Compare'
     *  RelationalOperator: '<S399>/Compare'
     *  UnitDelay: '<S393>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_UnitDelay1_gi >=
          0.0)) && rtb_AT_Tag_5_Active) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S393>/Sum1' incorporates:
     *  Switch: '<S393>/Switch'
     *  Switch: '<S393>/Switch1'
     *  UnitDelay: '<S393>/Unit Delay1'
     */
    rtb_Switch_ar = (d + rtb_Add_ik) + Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

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
     *  Constant: '<S384>/Constant'
     *  Lookup_n-D: '<S384>/Modulation_Str_Y_Rel'
     *  Product: '<S384>/Product'
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

    /* Update for UnitDelay: '<S409>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S409>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S409>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Chain_DutyCycle;

    /* Update for UnitDelay: '<S405>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Modulation_Drv;

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S384>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Init;

    /* Update for UnitDelay: '<S389>/Delay Input1'
     *
     * Block description for '<S389>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S390>/Delay Input1'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S391>/Delay Input1'
     *
     * Block description for '<S391>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S392>/Delay Input1'
     *
     * Block description for '<S392>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S394>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2_e;

    /* Update for UnitDelay: '<S384>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_Compare_pf;

    /* Update for UnitDelay: '<S384>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S393>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_Switch_ar;

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
    rtb_Switch_ar = 0.0;

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

  /* Reshape: '<S72>/Reshapey' incorporates:
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

  /* Delay: '<S72>/MemoryX' incorporates:
   *  Constant: '<S72>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_Chain_DutyCycle = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S12>/Trigonometric Function' */
  rtb_Switch2_j = cos(rtb_Chain_DutyCycle);

  /* Trigonometry: '<S12>/Trigonometric Function1' */
  rtb_Init_g = sin(rtb_Chain_DutyCycle);

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' */
  rtb_Switch4_g = rtb_Switch2_j;
  rtb_Modulation_Drv = rtb_Init_g;

  /* SignalConversion generated from: '<S12>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S12>/Unary Minus'
   */
  rtb_Init = -rtb_Init_g;
  rtb_Switch2 = rtb_Switch2_j;

  /* Sum: '<S126>/Diff' incorporates:
   *  UnitDelay: '<S126>/UD'
   *
   * Block description for '<S126>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S126>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_j = rtb_Chain_DutyCycle - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S12>/Subtract2' incorporates:
   *  Constant: '<S12>/Constant3'
   *  Gain: '<S12>/Gain7'
   *  Math: '<S12>/Square'
   */
  rtb_Init_g = 1.0 - ((rtb_Switch2_j * rtb_Switch2_j) * 0.16666666666666666);

  /* Gain: '<S12>/Gain6' */
  rtb_Switch2_j *= 0.5;

  /* Product: '<S12>/Product7' incorporates:
   *  Constant: '<S12>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    d = 0.0;
    rtb_Num_Segments = 0;
    for (s202_iter = 0; s202_iter < 8; s202_iter++) {
      d += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s202_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = d;
  }

  /* End of Product: '<S12>/Product7' */

  /* Product: '<S12>/Product6' incorporates:
   *  SignalConversion generated from: '<S12>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S12>/Unary Minus2'
   */
  rtb_UnitDelay1_gi = (rtb_Init_g * tmp[0]) + ((-rtb_Switch2_j) * tmp[1]);
  rtb_Init_g = (rtb_Switch2_j * tmp[0]) + (rtb_Init_g * tmp[1]);

  /* Product: '<S12>/Product6' incorporates:
   *  Concatenate: '<S12>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Switch4_g * rtb_UnitDelay1_gi) + (rtb_Init
    * rtb_Init_g);
  Code_Gen_Model_B.Product6[1] = (rtb_Modulation_Drv * rtb_UnitDelay1_gi) +
    (rtb_Switch2 * rtb_Init_g);

  /* Outputs for Enabled SubSystem: '<S99>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S92>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S123>/Enable'
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

    /* Product: '<S123>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S72>/C'
     *  Delay: '<S72>/MemoryX'
     *  Product: '<S125>/Product'
     */
    rtb_Switch2 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2;

    /* Sum: '<S123>/Sum' incorporates:
     *  Constant: '<S72>/D'
     *  Product: '<S123>/C[k]*xhat[k|k-1]'
     *  Product: '<S123>/D[k]*u[k]'
     *  Sum: '<S123>/Add1'
     */
    rtb_Init = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Modulation_Drv = rtb_Reshapey[0] - (rtb_Init + rtb_Switch2);

    /* Product: '<S123>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S72>/C'
     *  Delay: '<S72>/MemoryX'
     *  Product: '<S125>/Product'
     */
    rtb_Switch2 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2;

    /* Sum: '<S123>/Sum' incorporates:
     *  Constant: '<S72>/D'
     *  Product: '<S123>/C[k]*xhat[k|k-1]'
     *  Product: '<S123>/D[k]*u[k]'
     *  Sum: '<S123>/Add1'
     */
    rtb_Init = rtb_Reshapey[1] - (rtb_Init + rtb_Switch2);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S123>/Product3' incorporates:
     *  Constant: '<S73>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Modulation_Drv) + (
      -2.0601714451538746E-17 * rtb_Init);

    /* Sum: '<S125>/Add1' incorporates:
     *  Product: '<S125>/Product'
     */
    rtb_Switch2 = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S123>/Product3' incorporates:
     *  Constant: '<S73>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Modulation_Drv)
      + (0.095124921972504 * rtb_Init);

    /* Sum: '<S125>/Add1' incorporates:
     *  Product: '<S125>/Product'
     */
    rtb_Init = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S125>/Product2' incorporates:
     *  Constant: '<S73>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2) +
      (5.9896845167210271E-17 * rtb_Init);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2) +
      (0.095124921972503981 * rtb_Init);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S123>/Product3' incorporates:
       *  Outport: '<S123>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S125>/Product2' incorporates:
       *  Outport: '<S125>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S10>/AND' */
  /* End of Outputs for SubSystem: '<S92>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S99>/Enabled Subsystem' */

  /* Sum: '<S99>/Add' incorporates:
   *  Delay: '<S72>/MemoryX'
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

  /* If: '<S15>/If' incorporates:
   *  Constant: '<S227>/Constant'
   *  Logic: '<S227>/AND'
   *  MATLAB Function: '<S177>/Find closest index to curve'
   *  Product: '<S227>/Product'
   *  RelationalOperator: '<S227>/Relational Operator'
   *  RelationalOperator: '<S227>/Relational Operator1'
   *  Selector: '<S227>/Selector'
   *  Selector: '<S227>/Selector1'
   *  Selector: '<S228>/Selector'
   *  Sum: '<S227>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S180>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S183>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S185>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S180>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S15>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S175>/Action Port'
       */
      /* InitializeConditions for If: '<S15>/If' incorporates:
       *  UnitDelay: '<S175>/Unit Delay'
       *  UnitDelay: '<S176>/Unit Delay'
       *  UnitDelay: '<S178>/Unit Delay'
       *  UnitDelay: '<S178>/Unit Delay1'
       *  UnitDelay: '<S228>/Unit Delay'
       *  UnitDelay: '<S228>/Unit Delay1'
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
     *  ActionPort: '<S175>/Action Port'
     */
    /* Selector: '<S176>/Selector1' incorporates:
     *  Merge: '<S11>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S176>/Selector1' */

    /* Lookup_n-D: '<S175>/Capture Radius' incorporates:
     *  UnitDelay: '<S175>/Unit Delay'
     */
    rtb_Modulation_Drv = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled7,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S176>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S176>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S180>/If' incorporates:
     *  RelationalOperator: '<S180>/ '
     *  UnitDelay: '<S176>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S183>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S185>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S180>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S183>/Action Port'
       */
      /* InitializeConditions for If: '<S180>/If' incorporates:
       *  UnitDelay: '<S183>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S180>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S180>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S183>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S183>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S186>/Action Port'
       */
      /* If: '<S183>/If' incorporates:
       *  Selector: '<S176>/Selector1'
       *  Selector: '<S183>/Selector'
       *  Selector: '<S186>/Selector'
       */
      rtb_Switch2_j = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S183>/Increment_If_Rectangle_Check' */

      /* Sum: '<S183>/Minus' incorporates:
       *  Concatenate: '<S176>/Matrix Concatenate2'
       *  Selector: '<S183>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_j;

      /* Outputs for IfAction SubSystem: '<S183>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S186>/Action Port'
       */
      /* If: '<S183>/If' incorporates:
       *  Selector: '<S176>/Selector1'
       *  Selector: '<S183>/Selector'
       *  Selector: '<S186>/Selector'
       *  Sum: '<S183>/Minus'
       */
      rtb_Switch_ar = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S183>/Increment_If_Rectangle_Check' */

      /* Sum: '<S183>/Minus' incorporates:
       *  Concatenate: '<S176>/Matrix Concatenate2'
       *  Selector: '<S183>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch_ar;

      /* Math: '<S183>/Hypot' */
      rtb_Switch2 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S183>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S183>/Switch' incorporates:
       *  Logic: '<S183>/AND'
       *  Logic: '<S183>/OR'
       *  RelationalOperator: '<S183>/Relational Operator'
       *  UnitDelay: '<S183>/Unit Delay'
       */
      rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch2 <= rtb_Modulation_Drv) && rtb_Is_Absolute_Steering));

      /* If: '<S183>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation_g) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S185>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S183>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S185>/Action Port'
         */
        /* If: '<S185>/If' incorporates:
         *  RelationalOperator: '<S185>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S185>/Is_Last_Point' incorporates:
           *  ActionPort: '<S188>/Action Port'
           */
          /* InitializeConditions for If: '<S185>/If' incorporates:
           *  UnitDelay: '<S188>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S185>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S185>/Is_Last_Point' incorporates:
           *  ActionPort: '<S188>/Action Port'
           */
          /* Switch: '<S188>/Switch' incorporates:
           *  Constant: '<S190>/Constant'
           *  Logic: '<S188>/OR'
           *  RelationalOperator: '<S190>/Compare'
           *  UnitDelay: '<S188>/Unit Delay'
           */
          rtb_AT_Tag_5_Active = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Switch2 <= Spline_Stop_Radius));

          /* If: '<S188>/If' */
          if (rtb_AT_Tag_5_Active) {
            /* Outputs for IfAction SubSystem: '<S188>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S191>/Action Port'
             */
            /* Merge: '<S180>/Merge2' incorporates:
             *  Constant: '<S191>/Constant'
             *  SignalConversion generated from: '<S191>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S191>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S191>/Constant1'
             */
            rtb_Compare_pf = false;

            /* End of Outputs for SubSystem: '<S188>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S188>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S192>/Action Port'
             */
            /* Merge: '<S180>/Merge2' incorporates:
             *  Constant: '<S192>/Constant'
             *  SignalConversion generated from: '<S192>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S192>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S192>/Constant1'
             */
            rtb_Compare_pf = true;

            /* End of Outputs for SubSystem: '<S188>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S188>/If' */

          /* Merge: '<S180>/Merge4' incorporates:
           *  SignalConversion: '<S188>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S188>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Tag_5_Active;

          /* End of Outputs for SubSystem: '<S185>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S185>/Increment_Search' incorporates:
           *  ActionPort: '<S187>/Action Port'
           */
          /* Merge: '<S180>/Merge2' incorporates:
           *  Constant: '<S187>/Constant'
           *  SignalConversion generated from: '<S187>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S187>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S187>/Constant1'
           */
          rtb_Compare_pf = false;

          /* Merge: '<S180>/Merge4' incorporates:
           *  Constant: '<S189>/FixPt Constant'
           *  SignalConversion: '<S187>/Signal Copy'
           *  Sum: '<S189>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S185>/Increment_Search' */
        }

        /* End of If: '<S185>/If' */
        /* End of Outputs for SubSystem: '<S183>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S183>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S186>/Action Port'
         */
        /* Sum: '<S193>/FixPt Sum1' incorporates:
         *  Constant: '<S193>/FixPt Constant'
         */
        rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S186>/Selector1' incorporates:
         *  Selector: '<S176>/Selector1'
         */
        rtb_Switch2_e = rtb_Ref_Poses[((int32_T)rtb_Switch2) - 1];

        /* Sum: '<S194>/Subtract' incorporates:
         *  Selector: '<S186>/Selector1'
         *  Sum: '<S194>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_e - rtb_Switch2_j;

        /* Selector: '<S186>/Selector1' incorporates:
         *  Selector: '<S176>/Selector1'
         */
        rtb_UnitDelay1_gi = rtb_Ref_Poses[((int32_T)rtb_Switch2) + 5];

        /* Sum: '<S194>/Subtract' incorporates:
         *  Selector: '<S186>/Selector1'
         *  Sum: '<S194>/Minus1'
         */
        rtb_Minus_n[1] = rtb_UnitDelay1_gi - rtb_Switch_ar;

        /* Math: '<S194>/Hypot' */
        rtb_Init = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S194>/Divide' */
        rtb_Switch2 = rtb_Minus_n[1];

        /* UnaryMinus: '<S194>/Unary Minus' */
        rtb_Init_g = rtb_Minus_n[0];

        /* Product: '<S194>/Product' incorporates:
         *  Product: '<S194>/Divide'
         *  UnaryMinus: '<S194>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2 / rtb_Init) * rtb_Modulation_Drv;
        rtb_Minus_n[1] = ((-rtb_Init_g) / rtb_Init) * rtb_Modulation_Drv;

        /* Sum: '<S194>/Add1' incorporates:
         *  Sum: '<S194>/Add2'
         *  Sum: '<S194>/Minus'
         */
        rtb_Init_g = rtb_Switch2_e - rtb_Minus_n[0];

        /* Sum: '<S194>/Minus4' incorporates:
         *  Sum: '<S194>/Add2'
         *  Sum: '<S194>/Minus'
         */
        rtb_Switch2_e = (rtb_Switch2_e + rtb_Minus_n[0]) - rtb_Init_g;

        /* Sum: '<S194>/Minus5' incorporates:
         *  Concatenate: '<S176>/Matrix Concatenate2'
         *  Sum: '<S194>/Minus'
         */
        rtb_Switch4_g = rtb_Reshapey[0] - rtb_Init_g;

        /* Sum: '<S194>/Add' incorporates:
         *  Sum: '<S194>/Add2'
         *  Sum: '<S194>/Minus1'
         */
        rtb_Switch2 = rtb_Switch2_j - rtb_Minus_n[0];

        /* Sum: '<S194>/Minus' incorporates:
         *  Sum: '<S194>/Minus1'
         */
        rtb_Init_g -= rtb_Switch2;

        /* DotProduct: '<S194>/Dot Product' incorporates:
         *  Concatenate: '<S176>/Matrix Concatenate2'
         *  Sum: '<S194>/Minus'
         *  Sum: '<S194>/Minus1'
         *  Sum: '<S194>/Minus5'
         */
        rtb_Init = (rtb_Reshapey[0] - rtb_Switch2) * rtb_Init_g;

        /* DotProduct: '<S194>/Dot Product1' incorporates:
         *  Sum: '<S194>/Minus'
         */
        rtb_Switch2_j = rtb_Init_g * rtb_Init_g;

        /* DotProduct: '<S194>/Dot Product2' incorporates:
         *  Sum: '<S194>/Minus4'
         *  Sum: '<S194>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_e * rtb_Switch4_g;

        /* DotProduct: '<S194>/Dot Product3' incorporates:
         *  Sum: '<S194>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Switch2_e * rtb_Switch2_e;

        /* Sum: '<S194>/Add1' incorporates:
         *  Sum: '<S194>/Add2'
         *  Sum: '<S194>/Minus'
         */
        rtb_Init_g = rtb_UnitDelay1_gi - rtb_Minus_n[1];

        /* Sum: '<S194>/Minus4' incorporates:
         *  Sum: '<S194>/Add2'
         *  Sum: '<S194>/Minus'
         */
        rtb_Switch2_e = (rtb_UnitDelay1_gi + rtb_Minus_n[1]) - rtb_Init_g;

        /* Sum: '<S194>/Minus5' incorporates:
         *  Concatenate: '<S176>/Matrix Concatenate2'
         *  Sum: '<S194>/Minus'
         */
        rtb_Switch4_g = rtb_Reshapey[1] - rtb_Init_g;

        /* Sum: '<S194>/Add' incorporates:
         *  Sum: '<S194>/Add2'
         *  Sum: '<S194>/Minus1'
         */
        rtb_Switch2 = rtb_Switch_ar - rtb_Minus_n[1];

        /* Sum: '<S194>/Minus' incorporates:
         *  Sum: '<S194>/Minus1'
         */
        rtb_Init_g -= rtb_Switch2;

        /* DotProduct: '<S194>/Dot Product' incorporates:
         *  Concatenate: '<S176>/Matrix Concatenate2'
         *  Sum: '<S194>/Minus'
         *  Sum: '<S194>/Minus1'
         *  Sum: '<S194>/Minus5'
         */
        rtb_Init += (rtb_Reshapey[1] - rtb_Switch2) * rtb_Init_g;

        /* RelationalOperator: '<S195>/Compare' incorporates:
         *  Constant: '<S195>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init >= 0.0);

        /* RelationalOperator: '<S194>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S194>/Dot Product1'
         *  Sum: '<S194>/Minus'
         */
        rtb_Compare_pf = (rtb_Init <= ((rtb_Init_g * rtb_Init_g) + rtb_Switch2_j));

        /* DotProduct: '<S194>/Dot Product2' incorporates:
         *  Sum: '<S194>/Minus4'
         *  Sum: '<S194>/Minus5'
         */
        rtb_Init = (rtb_Switch2_e * rtb_Switch4_g) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S180>/Merge4' incorporates:
         *  Constant: '<S196>/Constant'
         *  DataTypeConversion: '<S186>/Data Type Conversion'
         *  DotProduct: '<S194>/Dot Product3'
         *  Logic: '<S194>/AND'
         *  RelationalOperator: '<S194>/LessThanOrEqual1'
         *  RelationalOperator: '<S196>/Compare'
         *  Sum: '<S186>/Add'
         *  Sum: '<S194>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_Compare_pf) && (rtb_Init >= 0.0)) && (rtb_Init <= ((rtb_Switch2_e *
          rtb_Switch2_e) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S180>/Merge2' incorporates:
         *  Constant: '<S186>/Constant2'
         *  SignalConversion generated from: '<S186>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S186>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S186>/Constant1'
         */
        rtb_Compare_pf = false;

        /* End of Outputs for SubSystem: '<S183>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S183>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S184>/Action Port'
         */
        /* Merge: '<S180>/Merge2' incorporates:
         *  Constant: '<S184>/Constant2'
         *  SignalConversion generated from: '<S184>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S184>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S184>/Constant1'
         */
        rtb_Compare_pf = false;

        /* Merge: '<S180>/Merge4' incorporates:
         *  SignalConversion generated from: '<S184>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S183>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S180>/Merge1' incorporates:
       *  Constant: '<S183>/Constant'
       *  SignalConversion generated from: '<S183>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S183>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation_g;

      /* End of Outputs for SubSystem: '<S180>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S180>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S182>/Action Port'
       */
      /* Merge: '<S180>/Merge1' incorporates:
       *  Constant: '<S182>/Constant'
       *  SignalConversion generated from: '<S182>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S180>/Merge2' incorporates:
       *  Constant: '<S182>/Constant1'
       *  SignalConversion generated from: '<S182>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S182>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S182>/Constant2'
       */
      rtb_Compare_pf = false;

      /* Merge: '<S180>/Merge4' incorporates:
       *  SignalConversion generated from: '<S182>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S180>/Escape_Auto_Driving' */
    }

    /* End of If: '<S180>/If' */

    /* If: '<S176>/If1' */
    if (!rtb_Compare_pf) {
      /* Outputs for IfAction SubSystem: '<S176>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S181>/Action Port'
       */
      /* Bias: '<S197>/Add Constant' incorporates:
       *  Bias: '<S197>/Bias'
       *  Sum: '<S197>/Subtract'
       */
      rtb_Switch2 = ((Code_Gen_Model_B.Spline_Num_Poses -
                      Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S197>/Selector4' incorporates:
       *  Bias: '<S197>/Bias1'
       *  Constant: '<S199>/FixPt Constant'
       *  Sum: '<S199>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S197>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S197>/Selector' incorporates:
       *  Bias: '<S197>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S197>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S197>/Matrix Concatenate' incorporates:
       *  Gain: '<S200>/Gain'
       *  Gain: '<S201>/Gain'
       *  Selector: '<S176>/Selector1'
       *  Selector: '<S197>/Selector'
       *  Selector: '<S197>/Selector1'
       *  Selector: '<S197>/Selector2'
       *  Selector: '<S197>/Selector3'
       *  Sum: '<S200>/Subtract'
       *  Sum: '<S201>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S197>/Selector4' incorporates:
         *  Selector: '<S197>/Selector'
         */
        s202_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S200>/Subtract' incorporates:
         *  Bias: '<S197>/Add Constant1'
         *  Selector: '<S197>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s202_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S197>/Selector4' incorporates:
         *  Gain: '<S200>/Gain'
         *  Selector: '<S197>/Selector'
         *  Selector: '<S197>/Selector1'
         *  Sum: '<S200>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s202_iter) - 1];
        }
      }

      /* End of Concatenate: '<S197>/Matrix Concatenate' */

      /* Assignment: '<S197>/Assignment' incorporates:
       *  Selector: '<S197>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s202_iter = 0; s202_iter < rtb_Bias1_p; s202_iter++) {
          rtb_Assignment[s202_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s202_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S197>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S198>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S202>/While Iterator'
       */
      s202_iter = 1;
      do {
        rtb_Switch_ar = rtb_Assignment[s202_iter + 1];
        rtb_Reshapey[0] = rtb_Switch_ar - rtb_Assignment[s202_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s202_iter] - rtb_Assignment[s202_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch_ar - rtb_Assignment[s202_iter];
        rtb_Switch_ar = rtb_Assignment[s202_iter + 9];
        rtb_Reshapey[1] = rtb_Switch_ar - rtb_Assignment[s202_iter + 7];
        rtb_Switch2_j = rtb_Assignment[s202_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Assignment[s202_iter + 10];
        rtb_Add2_f[1] = rtb_Switch_ar - rtb_Switch2_j;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch_ar = rt_powd_snf(rtb_Init, 2.0);
          rtb_Switch4_g = rt_powd_snf(rtb_Init, 3.0);
          rtb_UnitDelay1_gi = (rtb_Init - (2.0 * rtb_Switch_ar)) + rtb_Switch4_g;
          rtb_Switch2_e = rtb_Switch_ar - rtb_Switch4_g;
          rtb_Switch4_g = (3.0 * rtb_Switch_ar) - (2.0 * rtb_Switch4_g);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] *
            rtb_UnitDelay1_gi) + (rtb_Minus_n[0] * rtb_Switch2_e)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Switch4_g)) + rtb_Assignment[s202_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] *
            rtb_UnitDelay1_gi) + (rtb_Minus_n[1] * rtb_Switch2_e)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Switch4_g)) + rtb_Switch2_j;
          rtb_UnitDelay1_gi = ((3.0 * rtb_Switch_ar) - (4.0 * rtb_Init)) + 1.0;
          rtb_Switch2_e = (2.0 * rtb_Init) - (3.0 * rtb_Switch_ar);
          rtb_Switch_ar = (rtb_Init - rtb_Switch_ar) * 6.0;
          rtb_Switch4_g = (((rtb_Reshapey[0] * rtb_UnitDelay1_gi) +
                            (rtb_Minus_n[0] * rtb_Switch2_e)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Switch_ar);
          rtb_Init_g = (((rtb_Reshapey[1] * rtb_UnitDelay1_gi) + (rtb_Minus_n[1]
            * rtb_Switch2_e)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch_ar);
          rtb_Switch_ar = (6.0 * rtb_Init) - 4.0;
          rtb_UnitDelay1_gi = (-6.0 * rtb_Init) + 2.0;
          rtb_Init = (-12.0 * rtb_Init) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch_ar) + (rtb_Minus_n[1] * rtb_UnitDelay1_gi)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init)) * rtb_Switch4_g) - (((((rtb_Reshapey[0] *
            rtb_Switch_ar) + (rtb_Minus_n[0] * rtb_UnitDelay1_gi)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Init)) * rtb_Init_g)) / rt_powd_snf
            (rt_hypotd_snf(rtb_Switch4_g, rtb_Init_g), 3.0);
        }

        if (s202_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s202_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init = rtb_Switch2 - ((real_T)s202_iter);
        rtb_Num_Segments = s202_iter;
        s202_iter++;
      } while ((rtb_Init >= 4.0) && (s202_iter <= 3));

      /* End of Outputs for SubSystem: '<S198>/Sampling_Loop' */

      /* SignalConversion generated from: '<S181>/Position_and_Curvature' incorporates:
       *  Assignment: '<S202>/Assignment'
       *  Merge: '<S176>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S176>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S176>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S176>/If Action Subsystem' incorporates:
       *  ActionPort: '<S179>/Action Port'
       */
      /* Product: '<S179>/Product' incorporates:
       *  Selector: '<S176>/Selector'
       *  Selector: '<S176>/Selector1'
       */
      rtb_Init = rtb_Ref_Poses[i - 1];

      /* Product: '<S179>/Product1' incorporates:
       *  Selector: '<S176>/Selector'
       *  Selector: '<S176>/Selector1'
       */
      rtb_Switch_ar = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S179>/Product' incorporates:
         *  Constant: '<S179>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init;

        /* Product: '<S179>/Product1' incorporates:
         *  Constant: '<S179>/Constant2'
         *  Product: '<S179>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch_ar;
      }

      /* Assignment: '<S179>/Assignment' incorporates:
       *  Concatenate: '<S179>/Matrix Concatenate'
       *  Merge: '<S176>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S179>/Assignment' */

      /* SignalConversion generated from: '<S179>/Num_Segments' incorporates:
       *  Constant: '<S179>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S176>/If Action Subsystem' */
    }

    /* End of If: '<S176>/If1' */

    /* Concatenate: '<S177>/Matrix Concatenate' incorporates:
     *  Merge: '<S176>/Merge'
     *  Selector: '<S177>/Selector'
     *  Selector: '<S177>/Selector1'
     *  Selector: '<S177>/Selector3'
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

    /* End of Concatenate: '<S177>/Matrix Concatenate' */

    /* MATLAB Function: '<S177>/Distance Along Curve' incorporates:
     *  Concatenate: '<S177>/Matrix Concatenate'
     *  Selector: '<S177>/Selector4'
     *  Selector: '<S177>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s202_iter = 0; s202_iter < 149; s202_iter++) {
      /* Outputs for Iterator SubSystem: '<S198>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S202>/While Iterator'
       */
      rtb_Assignment_d[s202_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s202_iter + 1] -
         rtb_MatrixConcatenate_o[s202_iter], rtb_MatrixConcatenate_o[s202_iter +
         151] - rtb_MatrixConcatenate_o[s202_iter + 150]) +
        rtb_Assignment_d[s202_iter];

      /* End of Outputs for SubSystem: '<S198>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S177>/Distance Along Curve' */

    /* MATLAB Function: '<S177>/Find closest index to curve' incorporates:
     *  Concatenate: '<S177>/Matrix Concatenate'
     *  Selector: '<S177>/Selector4'
     *  Selector: '<S177>/Selector5'
     *  Selector: '<S228>/Selector'
     */
    for (s202_iter = 0; s202_iter < 150; s202_iter++) {
      /* Outputs for Iterator SubSystem: '<S198>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S202>/While Iterator'
       */
      distance_from_robot[s202_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s202_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s202_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S198>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s202_iter = 1;
    } else {
      s202_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s202_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s202_iter == 0) {
      rtb_Switch2 = distance_from_robot[0];
    } else {
      rtb_Switch2 = distance_from_robot[s202_iter - 1];
      for (rtb_Bias1_p = s202_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2 > rtb_Init) {
          rtb_Switch2 = rtb_Init;
        }
      }
    }

    s202_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s202_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S228>/Selector' incorporates:
     *  Constant: '<S228>/Constant'
     *  MATLAB Function: '<S177>/Find closest index to curve'
     *  MinMax: '<S228>/Min'
     */
    rtb_Init = rtb_Assignment_d[((int32_T)fmin(50.0, s202_iter)) - 1];

    /* If: '<S228>/If' incorporates:
     *  RelationalOperator: '<S228>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S228>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S231>/Action Port'
       */
      /* SignalConversion generated from: '<S231>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S233>/FixPt Sum1' incorporates:
       *  Constant: '<S233>/FixPt Constant'
       */
      rtb_Switch2 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S231>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S11>/Merge8'
       *  Selector: '<S231>/Selector11'
       *  Selector: '<S231>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S231>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S11>/Merge8'
       *  Selector: '<S231>/Selector1'
       *  Selector: '<S231>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S231>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S231>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2), &rtb_Minus_n[0], rtb_Init,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S231>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S231>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S231>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S228>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S228>/Latch' incorporates:
       *  ActionPort: '<S232>/Action Port'
       */
      /* SignalConversion generated from: '<S232>/In1' incorporates:
       *  UnitDelay: '<S228>/Unit Delay1'
       */
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S232>/In2' incorporates:
       *  UnitDelay: '<S228>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S228>/Latch' */
    }

    /* End of If: '<S228>/If' */

    /* MinMax: '<S175>/Min' incorporates:
     *  Lookup_n-D: '<S175>/Lookahead Distance'
     *  UnitDelay: '<S175>/Unit Delay'
     */
    rtb_Modulation_Drv = fmin(rtb_Modulation_Drv, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S177>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S227>/While Iterator'
     */
    s227_iter = 1U;
    rtb_Is_Absolute_Translation_g = true;
    while (rtb_Is_Absolute_Translation_g && (s227_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S177>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S227>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s227_iter;
      rtb_Is_Absolute_Translation_g =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s202_iter - 1] + rtb_Modulation_Drv)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s227_iter++;
    }

    /* End of Outputs for SubSystem: '<S177>/Find first index that meets distance target' */

    /* Switch: '<S230>/Switch' incorporates:
     *  Concatenate: '<S177>/Matrix Concatenate'
     *  Constant: '<S177>/Constant'
     *  Constant: '<S227>/Constant'
     *  Constant: '<S230>/Constant1'
     *  Constant: '<S230>/Constant2'
     *  Constant: '<S230>/Constant3'
     *  Logic: '<S227>/AND'
     *  MATLAB Function: '<S177>/Find closest index to curve'
     *  Math: '<S230>/Hypot'
     *  Merge: '<S11>/Merge8'
     *  MinMax: '<S230>/Min'
     *  MinMax: '<S230>/Min1'
     *  Product: '<S227>/Product'
     *  Product: '<S230>/Divide'
     *  Product: '<S230>/Product'
     *  Product: '<S230>/Product1'
     *  RelationalOperator: '<S177>/Relational Operator'
     *  RelationalOperator: '<S227>/Relational Operator'
     *  RelationalOperator: '<S227>/Relational Operator1'
     *  Selector: '<S177>/Selector10'
     *  Selector: '<S177>/Selector7'
     *  Selector: '<S177>/Selector8'
     *  Selector: '<S177>/Selector9'
     *  Selector: '<S227>/Selector'
     *  Selector: '<S227>/Selector1'
     *  Selector: '<S228>/Selector'
     *  Sqrt: '<S230>/Sqrt'
     *  Sum: '<S177>/Subtract'
     *  Sum: '<S227>/Add'
     *  Sum: '<S230>/Subtract'
     *  Sum: '<S230>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Modulation_Drv = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch2 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Modulation_Drv = fmin(rtb_Switch2 * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S230>/Switch' */

    /* Logic: '<S178>/OR' */
    rtb_Compare_pf = (rtb_Is_Absolute_Steering ||
                      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S178>/Switch1' incorporates:
     *  Switch: '<S178>/Switch'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    if (rtb_Compare_pf) {
      /* Merge: '<S15>/Merge2' incorporates:
       *  Constant: '<S178>/Constant3'
       *  SignalConversion: '<S178>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S15>/Merge2' incorporates:
       *  SignalConversion: '<S178>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Modulation_Drv;
      rtb_Init = rtb_Merge1;
    }

    /* End of Switch: '<S178>/Switch1' */

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion: '<S178>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init;

    /* Selector: '<S177>/Selector6' incorporates:
     *  Concatenate: '<S177>/Matrix Concatenate'
     *  Selector: '<S177>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S177>/Selector2' incorporates:
     *  Concatenate: '<S177>/Matrix Concatenate'
     *  Selector: '<S177>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S178>/Switch2' incorporates:
     *  Sum: '<S234>/Subtract'
     *  Sum: '<S234>/Subtract1'
     *  Trigonometry: '<S234>/Atan2'
     *  UnitDelay: '<S178>/Unit Delay1'
     */
    if (rtb_Compare_pf) {
      rtb_Switch_ar = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch_ar = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S178>/Switch2' */

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion: '<S178>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch_ar;

    /* Merge: '<S15>/Merge7' incorporates:
     *  SignalConversion: '<S175>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S178>/Constant2'
     *  SignalConversion generated from: '<S175>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S178>/Constant5'
     *  SignalConversion generated from: '<S175>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S15>/Merge5' incorporates:
     *  Constant: '<S178>/Constant6'
     *  SignalConversion generated from: '<S175>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S15>/Merge6' incorporates:
     *  Constant: '<S178>/Constant1'
     *  SignalConversion generated from: '<S175>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S176>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S175>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Modulation_Drv;

    /* Update for UnitDelay: '<S228>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2;

    /* Update for UnitDelay: '<S228>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init;

    /* Update for UnitDelay: '<S178>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch_ar;

    /* End of Outputs for SubSystem: '<S15>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S174>/Constant'
     *  SignalConversion generated from: '<S174>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S15>/Merge' incorporates:
     *  SignalConversion generated from: '<S174>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S15>/Merge1' incorporates:
     *  SignalConversion generated from: '<S174>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion generated from: '<S174>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S15>/Merge3' incorporates:
     *  SignalConversion generated from: '<S174>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S15>/Merge4' incorporates:
     *  SignalConversion generated from: '<S174>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S15>/Merge5' incorporates:
     *  SignalConversion generated from: '<S174>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S15>/Merge6' incorporates:
     *  SignalConversion generated from: '<S174>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_Switch_ar;

    /* End of Outputs for SubSystem: '<S15>/Pass Through' */
  }

  /* End of If: '<S15>/If' */

  /* Signum: '<S328>/Sign2' incorporates:
   *  UnitDelay: '<S328>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    d = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    d = -1.0;
  } else {
    d = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S328>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S328>/Product1' incorporates:
   *  Signum: '<S328>/Sign1'
   *  Signum: '<S328>/Sign2'
   */
  d *= rtb_Add_ik;
  if (rtIsNaN(d)) {
    i = 0;
  } else {
    i = (int32_T)fmod(d, 256.0);
  }

  /* Switch: '<S328>/Switch' incorporates:
   *  Constant: '<S328>/Constant'
   *  Constant: '<S333>/Constant'
   *  Constant: '<S334>/Constant'
   *  Logic: '<S328>/or'
   *  Product: '<S328>/Product1'
   *  RelationalOperator: '<S333>/Compare'
   *  RelationalOperator: '<S334>/Compare'
   *  UnitDelay: '<S328>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Init_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Init_g = 0.0;
  }

  /* End of Switch: '<S328>/Switch' */

  /* Switch: '<S339>/Init' incorporates:
   *  UnitDelay: '<S339>/FixPt Unit Delay1'
   *  UnitDelay: '<S339>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Init_g;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S339>/Init' */

  /* RelationalOperator: '<S335>/Compare' incorporates:
   *  Constant: '<S335>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Init_g == 0.0);

  /* RelationalOperator: '<S336>/Compare' incorporates:
   *  Constant: '<S336>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init_g > 0.0);

  /* Abs: '<S328>/Abs' incorporates:
   *  Sum: '<S328>/Subtract'
   *  UnitDelay: '<S328>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S328>/Switch5' incorporates:
   *  Constant: '<S328>/Constant1'
   *  Switch: '<S328>/Switch1'
   *  UnaryMinus: '<S328>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S328>/Constant4'
     *  Constant: '<S328>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S328>/Constant2'
     *  Constant: '<S328>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S328>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S328>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S328>/Constant10'
     *  Constant: '<S328>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S328>/Constant7'
     *  Constant: '<S328>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S328>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S328>/Lookup Table Dynamic1'
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

    /* Switch: '<S328>/Switch3' incorporates:
     *  Constant: '<S328>/Constant1'
     *  Constant: '<S328>/Constant3'
     *  UnaryMinus: '<S328>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      d = Translation_Speed_Rate_Limit_Inc;
    } else {
      d = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S328>/Switch3' */
  }

  /* End of Switch: '<S328>/Switch5' */

  /* Product: '<S328>/Product' incorporates:
   *  Switch: '<S328>/Switch1'
   */
  rtb_uDLookupTable_l = d * rtb_Merge1;

  /* Sum: '<S337>/Sum1' */
  rtb_Modulation_Drv = rtb_Init_g - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S338>/Switch2' incorporates:
   *  RelationalOperator: '<S338>/LowerRelop1'
   */
  if (!(rtb_Modulation_Drv > rtb_uDLookupTable_l)) {
    /* Switch: '<S328>/Switch2' incorporates:
     *  Constant: '<S328>/Constant1'
     *  Switch: '<S328>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S328>/Switch4' incorporates:
       *  Constant: '<S328>/Constant1'
       */
      rtb_Switch2 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S328>/Switch4' incorporates:
       *  Constant: '<S328>/Constant3'
       *  UnaryMinus: '<S328>/Unary Minus1'
       */
      rtb_Switch2 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S328>/Switch2' */

    /* Product: '<S328>/Product2' */
    rtb_Switch2 *= rtb_Merge1;

    /* Switch: '<S338>/Switch' incorporates:
     *  RelationalOperator: '<S338>/UpperRelop'
     */
    if (rtb_Modulation_Drv < rtb_Switch2) {
      rtb_uDLookupTable_l = rtb_Switch2;
    } else {
      rtb_uDLookupTable_l = rtb_Modulation_Drv;
    }

    /* End of Switch: '<S338>/Switch' */
  }

  /* End of Switch: '<S338>/Switch2' */

  /* Sum: '<S337>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S331>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S331>/Switch' incorporates:
     *  Constant: '<S355>/Constant3'
     *  Constant: '<S355>/Constant4'
     *  Math: '<S355>/Math Function'
     *  Sum: '<S331>/Subtract'
     *  Sum: '<S355>/Add1'
     *  Sum: '<S355>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Chain_DutyCycle) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S331>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S331>/Switch' */

  /* Sum: '<S351>/Add1' incorporates:
   *  Constant: '<S351>/Constant3'
   *  Constant: '<S351>/Constant4'
   *  Math: '<S351>/Math Function'
   *  Sum: '<S330>/Add'
   *  Sum: '<S350>/Sum'
   *  Sum: '<S351>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Chain_DutyCycle +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S353>/Sum1' incorporates:
   *  Constant: '<S350>/Constant2'
   *  Product: '<S353>/Product'
   *  Sum: '<S353>/Sum'
   *  UnitDelay: '<S353>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S350>/Product' incorporates:
   *  Constant: '<S350>/Constant3'
   */
  rtb_Modulation_Drv = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S352>/Diff' incorporates:
   *  UnitDelay: '<S352>/UD'
   *
   * Block description for '<S352>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S352>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Modulation_Drv - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S350>/Saturation' */
  if (rtb_Switch2_m > Steering_Heading_Control_D_UL) {
    rtb_Switch2_m = Steering_Heading_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Heading_Control_D_LL) {
    rtb_Switch2_m = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S350>/Add' incorporates:
   *  Gain: '<S350>/Gain1'
   *  Saturate: '<S350>/Saturation'
   */
  rtb_Init = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Switch2_m;

  /* Sum: '<S350>/Subtract' incorporates:
   *  Constant: '<S350>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init;

  /* Sum: '<S350>/Sum2' incorporates:
   *  Gain: '<S350>/Gain2'
   *  UnitDelay: '<S350>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S354>/Switch2' incorporates:
   *  RelationalOperator: '<S354>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_uDLookupTable_l)) {
    /* Sum: '<S350>/Subtract1' incorporates:
     *  Constant: '<S350>/Constant1'
     */
    rtb_Switch_ar = Steering_Heading_Control_Total_LL - rtb_Init;

    /* Switch: '<S354>/Switch' incorporates:
     *  RelationalOperator: '<S354>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Switch_ar) {
      rtb_uDLookupTable_l = rtb_Switch_ar;
    } else {
      rtb_uDLookupTable_l = rtb_Switch2;
    }

    /* End of Switch: '<S354>/Switch' */
  }

  /* End of Switch: '<S354>/Switch2' */

  /* Saturate: '<S350>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S350>/Saturation1' */

  /* Sum: '<S350>/Add1' */
  rtb_Switch2_m = rtb_Init + rtb_Switch2;

  /* Saturate: '<S350>/Saturation2' */
  if (rtb_Switch2_m > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S350>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Switch2_m < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S350>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S350>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Switch2_m;
  }

  /* End of Saturate: '<S350>/Saturation2' */

  /* Switch: '<S330>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S341>/Switch' incorporates:
     *  Abs: '<S341>/Abs'
     *  Constant: '<S341>/Constant'
     *  Constant: '<S349>/Constant'
     *  RelationalOperator: '<S349>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S341>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S330>/Switch' */

  /* Signum: '<S340>/Sign2' incorporates:
   *  UnitDelay: '<S340>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    d = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    d = -1.0;
  } else {
    d = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S340>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S340>/Product1' incorporates:
   *  Signum: '<S340>/Sign1'
   *  Signum: '<S340>/Sign2'
   */
  d *= rtb_Add_ik;
  if (rtIsNaN(d)) {
    i = 0;
  } else {
    i = (int32_T)fmod(d, 256.0);
  }

  /* Switch: '<S340>/Switch' incorporates:
   *  Constant: '<S340>/Constant'
   *  Constant: '<S342>/Constant'
   *  Constant: '<S343>/Constant'
   *  Logic: '<S340>/or'
   *  Product: '<S340>/Product1'
   *  RelationalOperator: '<S342>/Compare'
   *  RelationalOperator: '<S343>/Compare'
   *  UnitDelay: '<S340>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_UnitDelay1_gi = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_UnitDelay1_gi = 0.0;
  }

  /* End of Switch: '<S340>/Switch' */

  /* Switch: '<S348>/Init' incorporates:
   *  UnitDelay: '<S348>/FixPt Unit Delay1'
   *  UnitDelay: '<S348>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init = rtb_UnitDelay1_gi;
  } else {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S348>/Init' */

  /* RelationalOperator: '<S344>/Compare' incorporates:
   *  Constant: '<S344>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_UnitDelay1_gi == 0.0);

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_UnitDelay1_gi > 0.0);

  /* Abs: '<S340>/Abs' incorporates:
   *  Sum: '<S340>/Subtract'
   *  UnitDelay: '<S340>/Unit Delay'
   */
  rtb_Switch2_e = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S340>/Switch5' incorporates:
   *  Constant: '<S340>/Constant1'
   *  Switch: '<S340>/Switch1'
   *  UnaryMinus: '<S340>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S340>/Constant4'
     *  Constant: '<S340>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S340>/Constant2'
     *  Constant: '<S340>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S340>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S340>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch2_e, &rtb_Minus_n[0], 1U);
    rtb_Switch2_e = rtb_LookupTableDynamic;
    d = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S340>/Constant10'
     *  Constant: '<S340>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S340>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S340>/Constant7'
     *  Constant: '<S340>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S340>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S340>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch2_e, &rtb_Minus_n[0], 1U);
    rtb_Switch2_e = rtb_LookupTableDynamic1;

    /* Switch: '<S340>/Switch3' incorporates:
     *  Constant: '<S340>/Constant1'
     *  Constant: '<S340>/Constant3'
     *  UnaryMinus: '<S340>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      d = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      d = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S340>/Switch3' */
  }

  /* End of Switch: '<S340>/Switch5' */

  /* Product: '<S340>/Product' incorporates:
   *  Switch: '<S340>/Switch1'
   */
  rtb_Switch_ar = d * rtb_Switch2_e;

  /* Sum: '<S346>/Sum1' */
  rtb_UnitDelay1_gi -= rtb_Init;

  /* Switch: '<S347>/Switch2' incorporates:
   *  RelationalOperator: '<S347>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_Switch_ar)) {
    /* Switch: '<S340>/Switch2' incorporates:
     *  Constant: '<S340>/Constant1'
     *  Constant: '<S340>/Constant3'
     *  Switch: '<S340>/Switch4'
     *  UnaryMinus: '<S340>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      d = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S340>/Switch4' incorporates:
       *  Constant: '<S340>/Constant1'
       */
      d = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      d = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S340>/Product2' incorporates:
     *  Switch: '<S340>/Switch2'
     */
    rtb_Switch_ar = d * rtb_Switch2_e;

    /* Switch: '<S347>/Switch' incorporates:
     *  RelationalOperator: '<S347>/UpperRelop'
     */
    if (!(rtb_UnitDelay1_gi < rtb_Switch_ar)) {
      rtb_Switch_ar = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S347>/Switch' */
  }

  /* End of Switch: '<S347>/Switch2' */

  /* Sum: '<S346>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch_ar + rtb_Init;

  /* Outputs for Atomic SubSystem: '<S243>/Initialize Function' */
  /* Sum: '<S329>/Add' incorporates:
   *  Constant: '<S329>/Constant'
   *  Constant: '<S329>/Constant4'
   *  Constant: '<S329>/Constant5'
   *  Trigonometry: '<S329>/Atan2'
   */
  rtb_Init = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S243>/Initialize Function' */

  /* Fcn: '<S363>/r->x' incorporates:
   *  Fcn: '<S368>/r->x'
   *  Fcn: '<S373>/r->x'
   *  Fcn: '<S378>/r->x'
   */
  rtb_Switch_ar = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S357>/Add' incorporates:
   *  Fcn: '<S363>/r->x'
   *  Fcn: '<S364>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init)) +
    rtb_Switch_ar;

  /* Fcn: '<S363>/theta->y' incorporates:
   *  Fcn: '<S368>/theta->y'
   *  Fcn: '<S373>/theta->y'
   *  Fcn: '<S378>/theta->y'
   */
  rtb_Init_g = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S357>/Add' incorporates:
   *  Fcn: '<S363>/theta->y'
   *  Fcn: '<S364>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init)) +
    rtb_Init_g;

  /* Sum: '<S358>/Add' incorporates:
   *  Fcn: '<S369>/r->x'
   *  Fcn: '<S369>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch_ar;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Init_g;

  /* Sum: '<S359>/Add' incorporates:
   *  Fcn: '<S374>/r->x'
   *  Fcn: '<S374>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch_ar;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Init_g;

  /* Sum: '<S360>/Add' incorporates:
   *  Fcn: '<S379>/r->x'
   *  Fcn: '<S379>/theta->y'
   */
  rtb_Switch4_g = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch_ar;
  rtb_Init = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
              (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Init_g;

  /* Fcn: '<S377>/x->r' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Switch4_g, rtb_Init);

  /* RelationalOperator: '<S380>/Compare' incorporates:
   *  Constant: '<S380>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_j == 0.0);

  /* Switch: '<S376>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S376>/Switch1' incorporates:
     *  Constant: '<S376>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S376>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Switch2_j;
  }

  /* End of Switch: '<S376>/Switch1' */

  /* Fcn: '<S362>/x->r' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S365>/Compare' incorporates:
   *  Constant: '<S365>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j == 0.0);

  /* Switch: '<S361>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S361>/Switch1' incorporates:
     *  Constant: '<S361>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S361>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch2_j;
  }

  /* End of Switch: '<S361>/Switch1' */

  /* Fcn: '<S367>/x->r' */
  rtb_Init_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S370>/Compare' incorporates:
   *  Constant: '<S370>/Constant'
   */
  rtb_Compare_pf = (rtb_Init_g == 0.0);

  /* Switch: '<S366>/Switch1' */
  if (rtb_Compare_pf) {
    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S366>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S366>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Init_g;
  }

  /* End of Switch: '<S366>/Switch1' */

  /* Fcn: '<S372>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S375>/Compare' incorporates:
   *  Constant: '<S375>/Constant'
   */
  rtb_AT_Tag_5_Active = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S371>/Switch1' */
  if (rtb_AT_Tag_5_Active) {
    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S371>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S371>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S371>/Switch1' */

  /* Product: '<S356>/Divide' incorporates:
   *  Abs: '<S356>/Abs'
   *  Abs: '<S356>/Abs1'
   *  Abs: '<S356>/Abs2'
   *  Abs: '<S356>/Abs3'
   *  Constant: '<S356>/Constant'
   *  MinMax: '<S356>/Max'
   */
  rtb_Switch2_j = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S356>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch2_j;

  /* Switch: '<S376>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S376>/Switch' incorporates:
     *  Fcn: '<S377>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init,
      rtb_Switch4_g);
  }

  /* End of Switch: '<S376>/Switch' */

  /* Trigonometry: '<S320>/Cos4' incorporates:
   *  Switch: '<S309>/Angle_Switch'
   *  Trigonometry: '<S319>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S320>/Sin5' incorporates:
   *  UnaryMinus: '<S318>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S320>/Sin4' incorporates:
   *  Switch: '<S309>/Angle_Switch'
   *  Trigonometry: '<S319>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S320>/Cos5' incorporates:
   *  UnaryMinus: '<S318>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S320>/Subtract1' incorporates:
   *  Product: '<S320>/Product2'
   *  Product: '<S320>/Product3'
   *  Trigonometry: '<S320>/Cos4'
   *  Trigonometry: '<S320>/Sin4'
   */
  rtb_Init = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_m4 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S320>/Subtract' incorporates:
   *  Product: '<S320>/Product'
   *  Product: '<S320>/Product1'
   *  Trigonometry: '<S320>/Cos4'
   *  Trigonometry: '<S320>/Sin4'
   */
  rtb_Switch_ar = (rtb_MatrixConcatenate_b_idx_1 * rtb_MatrixConcatenate_b_idx_0)
    - (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S320>/Hypot' */
  rtb_UnitDelay1_gi = rt_hypotd_snf(rtb_Switch_ar, rtb_Init);

  /* Switch: '<S320>/Switch' incorporates:
   *  Constant: '<S320>/Constant'
   *  Constant: '<S320>/Constant1'
   *  Constant: '<S321>/Constant'
   *  Product: '<S320>/Divide'
   *  Product: '<S320>/Divide1'
   *  RelationalOperator: '<S321>/Compare'
   *  Switch: '<S320>/Switch1'
   */
  if (rtb_UnitDelay1_gi > 1.0E-6) {
    rtb_Init_g = rtb_Init / rtb_UnitDelay1_gi;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch_ar / rtb_UnitDelay1_gi;
  } else {
    rtb_Init_g = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S320>/Switch' */

  /* Switch: '<S309>/Speed_Switch' incorporates:
   *  Abs: '<S309>/Abs'
   *  Constant: '<S317>/Constant'
   *  RelationalOperator: '<S317>/Compare'
   *  Switch: '<S309>/Angle_Switch'
   *  Trigonometry: '<S319>/Atan1'
   *  Trigonometry: '<S320>/Atan1'
   *  UnaryMinus: '<S309>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_g, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S319>/Subtract1' incorporates:
     *  Product: '<S319>/Product2'
     *  Product: '<S319>/Product3'
     *  UnaryMinus: '<S309>/Unary Minus'
     */
    rtb_Init = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S319>/Subtract' incorporates:
     *  Product: '<S319>/Product'
     *  Product: '<S319>/Product1'
     */
    rtb_UnitDelay1_gi = (rtb_MatrixConcatenate_b_idx_1 *
                         Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S319>/Hypot' */
    rtb_Switch_ar = rt_hypotd_snf(rtb_UnitDelay1_gi, rtb_Init);

    /* Switch: '<S319>/Switch1' incorporates:
     *  Constant: '<S319>/Constant'
     *  Constant: '<S319>/Constant1'
     *  Constant: '<S322>/Constant'
     *  Product: '<S319>/Divide'
     *  Product: '<S319>/Divide1'
     *  RelationalOperator: '<S322>/Compare'
     *  Switch: '<S319>/Switch'
     */
    if (rtb_Switch_ar > 1.0E-6) {
      rtb_UnitDelay1_gi /= rtb_Switch_ar;
      rtb_Init /= rtb_Switch_ar;
    } else {
      rtb_UnitDelay1_gi = 1.0;
      rtb_Init = 0.0;
    }

    /* End of Switch: '<S319>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init, rtb_UnitDelay1_gi);
  } else {
    d = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S312>/Product2' incorporates:
   *  Constant: '<S312>/Constant'
   *  Switch: '<S309>/Speed_Switch'
   */
  rtb_Init_g = d * 1530.1401357649195;

  /* Signum: '<S307>/Sign' */
  if (rtIsNaN(rtb_Init_g)) {
    d = (rtNaN);
  } else if (rtb_Init_g < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Init_g > 0.0);
  }

  /* Signum: '<S307>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S310>/Add' incorporates:
   *  Sum: '<S311>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S242>/Product' incorporates:
   *  Abs: '<S307>/Abs'
   *  Abs: '<S310>/Abs'
   *  Constant: '<S313>/Constant'
   *  Constant: '<S323>/Constant3'
   *  Constant: '<S323>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S307>/OR'
   *  Lookup_n-D: '<S310>/1-D Lookup Table'
   *  Math: '<S323>/Math Function'
   *  RelationalOperator: '<S307>/Equal1'
   *  RelationalOperator: '<S313>/Compare'
   *  Signum: '<S307>/Sign'
   *  Signum: '<S307>/Sign1'
   *  Sum: '<S310>/Add'
   *  Sum: '<S323>/Add1'
   *  Sum: '<S323>/Add2'
   */
  rtb_Init_g = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S308>/Gain' */
  rtb_UnitDelay1_gi = Drive_Motor_Control_FF * rtb_Init_g;

  /* Sum: '<S308>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Init_g -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S315>/Sum1' incorporates:
   *  Constant: '<S308>/Constant2'
   *  Product: '<S315>/Product'
   *  Sum: '<S315>/Sum'
   *  UnitDelay: '<S315>/Unit Delay1'
   */
  rtb_Init = ((rtb_Init_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S308>/Product' incorporates:
   *  Constant: '<S308>/Constant3'
   */
  rtb_Switch_ar = rtb_Init * Drive_Motor_Control_D;

  /* Sum: '<S314>/Diff' incorporates:
   *  UnitDelay: '<S314>/UD'
   *
   * Block description for '<S314>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S314>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Switch_ar - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S308>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S308>/Add' incorporates:
   *  Gain: '<S308>/Gain1'
   *  Saturate: '<S308>/Saturation'
   */
  rtb_Switch2_e = ((Drive_Motor_Control_P * rtb_Init_g) + rtb_UnitDelay1_gi) +
    rtb_Switch2_m;

  /* Sum: '<S308>/Subtract' incorporates:
   *  Constant: '<S308>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch2_e;

  /* Sum: '<S308>/Sum2' incorporates:
   *  Gain: '<S308>/Gain2'
   *  UnitDelay: '<S308>/Unit Delay'
   */
  rtb_UnitDelay1_gi = (Drive_Motor_Control_I * rtb_Init_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S316>/Switch2' incorporates:
   *  Constant: '<S308>/Constant'
   *  RelationalOperator: '<S316>/LowerRelop1'
   *  Sum: '<S308>/Subtract'
   */
  if (!(rtb_UnitDelay1_gi > (1.0 - rtb_Switch2_e))) {
    /* Switch: '<S316>/Switch' incorporates:
     *  Constant: '<S308>/Constant1'
     *  RelationalOperator: '<S316>/UpperRelop'
     *  Sum: '<S308>/Subtract1'
     */
    if (rtb_UnitDelay1_gi < (-1.0 - rtb_Switch2_e)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch2_e;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S316>/Switch' */
  }

  /* End of Switch: '<S316>/Switch2' */

  /* Saturate: '<S308>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_UnitDelay1_gi = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_UnitDelay1_gi = Drive_Motor_Control_I_LL;
  } else {
    rtb_UnitDelay1_gi = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S308>/Saturation1' */

  /* Sum: '<S308>/Add1' */
  rtb_Switch2_m = rtb_Switch2_e + rtb_UnitDelay1_gi;

  /* Saturate: '<S308>/Saturation2' */
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

  /* End of Saturate: '<S308>/Saturation2' */

  /* Sum: '<S324>/Add1' incorporates:
   *  Constant: '<S324>/Constant3'
   *  Constant: '<S324>/Constant4'
   *  Math: '<S324>/Math Function'
   *  Sum: '<S324>/Add2'
   */
  rtb_Init_g = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S326>/Sum1' incorporates:
   *  Constant: '<S311>/Constant2'
   *  Product: '<S326>/Product'
   *  Sum: '<S326>/Sum'
   *  UnitDelay: '<S326>/Unit Delay1'
   */
  rtb_Switch2_e = ((rtb_Init_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S311>/Product' incorporates:
   *  Constant: '<S311>/Constant3'
   */
  rtb_Switch4_g = rtb_Switch2_e * Steering_Motor_Control_D;

  /* Sum: '<S325>/Diff' incorporates:
   *  UnitDelay: '<S325>/UD'
   *
   * Block description for '<S325>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S325>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Switch4_g - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S311>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S311>/Add' incorporates:
   *  Gain: '<S311>/Gain1'
   *  Saturate: '<S311>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Init_g) + rtb_Switch2_m;

  /* Sum: '<S311>/Subtract' incorporates:
   *  Constant: '<S311>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S311>/Sum2' incorporates:
   *  Gain: '<S311>/Gain2'
   *  UnitDelay: '<S311>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Init_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S327>/Switch2' incorporates:
   *  Constant: '<S311>/Constant'
   *  RelationalOperator: '<S327>/LowerRelop1'
   *  Sum: '<S311>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S327>/Switch' incorporates:
     *  Constant: '<S311>/Constant1'
     *  RelationalOperator: '<S327>/UpperRelop'
     *  Sum: '<S311>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S327>/Switch' */
  }

  /* End of Switch: '<S327>/Switch2' */

  /* Saturate: '<S311>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S311>/Saturation1' */

  /* Sum: '<S311>/Add1' */
  rtb_Switch2_m = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S311>/Saturation2' */
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

  /* End of Saturate: '<S311>/Saturation2' */

  /* Product: '<S356>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch2_j;

  /* Switch: '<S361>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S361>/Switch' incorporates:
     *  Fcn: '<S362>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S361>/Switch' */

  /* Trigonometry: '<S257>/Cos4' incorporates:
   *  Switch: '<S246>/Angle_Switch'
   *  Trigonometry: '<S256>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S257>/Sin5' incorporates:
   *  UnaryMinus: '<S255>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S257>/Sin4' incorporates:
   *  Switch: '<S246>/Angle_Switch'
   *  Trigonometry: '<S256>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S257>/Cos5' incorporates:
   *  UnaryMinus: '<S255>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S257>/Subtract1' incorporates:
   *  Product: '<S257>/Product2'
   *  Product: '<S257>/Product3'
   *  Trigonometry: '<S257>/Cos4'
   *  Trigonometry: '<S257>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_m4 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S257>/Subtract' incorporates:
   *  Product: '<S257>/Product'
   *  Product: '<S257>/Product1'
   *  Trigonometry: '<S257>/Cos4'
   *  Trigonometry: '<S257>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_MatrixConcatenate_b_idx_1 *
                      rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4 *
    rtb_uDLookupTable_l);

  /* Math: '<S257>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S257>/Switch' incorporates:
   *  Constant: '<S257>/Constant'
   *  Constant: '<S257>/Constant1'
   *  Constant: '<S258>/Constant'
   *  Product: '<S257>/Divide'
   *  Product: '<S257>/Divide1'
   *  RelationalOperator: '<S258>/Compare'
   *  Switch: '<S257>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Init_g = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Init_g = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S257>/Switch' */

  /* Switch: '<S246>/Speed_Switch' incorporates:
   *  Abs: '<S246>/Abs'
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S254>/Compare'
   *  Switch: '<S246>/Angle_Switch'
   *  Trigonometry: '<S256>/Atan1'
   *  Trigonometry: '<S257>/Atan1'
   *  UnaryMinus: '<S246>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_g, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S256>/Subtract1' incorporates:
     *  Product: '<S256>/Product2'
     *  Product: '<S256>/Product3'
     *  UnaryMinus: '<S246>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S256>/Subtract' incorporates:
     *  Product: '<S256>/Product'
     *  Product: '<S256>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S256>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S256>/Switch1' incorporates:
     *  Constant: '<S256>/Constant'
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S259>/Constant'
     *  Product: '<S256>/Divide'
     *  Product: '<S256>/Divide1'
     *  RelationalOperator: '<S259>/Compare'
     *  Switch: '<S256>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S256>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    d = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S249>/Product2' incorporates:
   *  Constant: '<S249>/Constant'
   *  Switch: '<S246>/Speed_Switch'
   */
  rtb_Init_g = d * 1530.1401357649195;

  /* Signum: '<S244>/Sign' */
  if (rtIsNaN(rtb_Init_g)) {
    d = (rtNaN);
  } else if (rtb_Init_g < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Init_g > 0.0);
  }

  /* Signum: '<S244>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S247>/Add' incorporates:
   *  Sum: '<S248>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S239>/Product' incorporates:
   *  Abs: '<S244>/Abs'
   *  Abs: '<S247>/Abs'
   *  Constant: '<S250>/Constant'
   *  Constant: '<S260>/Constant3'
   *  Constant: '<S260>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S244>/OR'
   *  Lookup_n-D: '<S247>/1-D Lookup Table'
   *  Math: '<S260>/Math Function'
   *  RelationalOperator: '<S244>/Equal1'
   *  RelationalOperator: '<S250>/Compare'
   *  Signum: '<S244>/Sign'
   *  Signum: '<S244>/Sign1'
   *  Sum: '<S247>/Add'
   *  Sum: '<S260>/Add1'
   *  Sum: '<S260>/Add2'
   */
  rtb_Init_g = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S245>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Init_g;

  /* Sum: '<S245>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Init_g -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S252>/Sum1' incorporates:
   *  Constant: '<S245>/Constant2'
   *  Product: '<S252>/Product'
   *  Sum: '<S252>/Sum'
   *  UnitDelay: '<S252>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Init_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S245>/Product' incorporates:
   *  Constant: '<S245>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S251>/Diff' incorporates:
   *  UnitDelay: '<S251>/UD'
   *
   * Block description for '<S251>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S251>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S245>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S245>/Add' incorporates:
   *  Gain: '<S245>/Gain1'
   *  Saturate: '<S245>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Init_g) + rtb_Hypot_g5) +
    rtb_Switch2_m;

  /* Sum: '<S245>/Subtract' incorporates:
   *  Constant: '<S245>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S245>/Sum2' incorporates:
   *  Gain: '<S245>/Gain2'
   *  UnitDelay: '<S245>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Init_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S253>/Switch2' incorporates:
   *  Constant: '<S245>/Constant'
   *  RelationalOperator: '<S253>/LowerRelop1'
   *  Sum: '<S245>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S245>/Constant1'
     *  RelationalOperator: '<S253>/UpperRelop'
     *  Sum: '<S245>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S253>/Switch' */
  }

  /* End of Switch: '<S253>/Switch2' */

  /* Saturate: '<S245>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S245>/Saturation1' */

  /* Sum: '<S245>/Add1' */
  rtb_Switch2_m = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S245>/Saturation2' */
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

  /* End of Saturate: '<S245>/Saturation2' */

  /* Sum: '<S261>/Add1' incorporates:
   *  Constant: '<S261>/Constant3'
   *  Constant: '<S261>/Constant4'
   *  Math: '<S261>/Math Function'
   *  Sum: '<S261>/Add2'
   */
  rtb_Init_g = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S263>/Sum1' incorporates:
   *  Constant: '<S248>/Constant2'
   *  Product: '<S263>/Product'
   *  Sum: '<S263>/Sum'
   *  UnitDelay: '<S263>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Init_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S248>/Product' incorporates:
   *  Constant: '<S248>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

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
  rtb_Switch2_m = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S248>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S248>/Add' incorporates:
   *  Gain: '<S248>/Gain1'
   *  Saturate: '<S248>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Init_g) +
    rtb_Switch2_m;

  /* Sum: '<S248>/Subtract' incorporates:
   *  Constant: '<S248>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S248>/Sum2' incorporates:
   *  Gain: '<S248>/Gain2'
   *  UnitDelay: '<S248>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Init_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S264>/Switch2' incorporates:
   *  Constant: '<S248>/Constant'
   *  RelationalOperator: '<S264>/LowerRelop1'
   *  Sum: '<S248>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S248>/Constant1'
     *  RelationalOperator: '<S264>/UpperRelop'
     *  Sum: '<S248>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S264>/Switch' */
  }

  /* End of Switch: '<S264>/Switch2' */

  /* Saturate: '<S248>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S248>/Saturation1' */

  /* Sum: '<S248>/Add1' */
  rtb_Switch2_m = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S248>/Saturation2' */
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

  /* End of Saturate: '<S248>/Saturation2' */

  /* Product: '<S356>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch2_j;

  /* Switch: '<S366>/Switch' */
  if (!rtb_Compare_pf) {
    /* Switch: '<S366>/Switch' incorporates:
     *  Fcn: '<S367>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S366>/Switch' */

  /* Trigonometry: '<S278>/Cos4' incorporates:
   *  Switch: '<S267>/Angle_Switch'
   *  Trigonometry: '<S277>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S278>/Sin5' incorporates:
   *  UnaryMinus: '<S276>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S278>/Sin4' incorporates:
   *  Switch: '<S267>/Angle_Switch'
   *  Trigonometry: '<S277>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S278>/Cos5' incorporates:
   *  UnaryMinus: '<S276>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S278>/Subtract1' incorporates:
   *  Product: '<S278>/Product2'
   *  Product: '<S278>/Product3'
   *  Trigonometry: '<S278>/Cos4'
   *  Trigonometry: '<S278>/Sin4'
   */
  rtb_Subtract1_dk = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_m4 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S278>/Subtract' incorporates:
   *  Product: '<S278>/Product'
   *  Product: '<S278>/Product1'
   *  Trigonometry: '<S278>/Cos4'
   *  Trigonometry: '<S278>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_MatrixConcatenate_b_idx_1 *
    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S278>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_dk);

  /* Switch: '<S278>/Switch' incorporates:
   *  Constant: '<S278>/Constant'
   *  Constant: '<S278>/Constant1'
   *  Constant: '<S279>/Constant'
   *  Product: '<S278>/Divide'
   *  Product: '<S278>/Divide1'
   *  RelationalOperator: '<S279>/Compare'
   *  Switch: '<S278>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Init_g = rtb_Subtract1_dk / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Init_g = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S278>/Switch' */

  /* Switch: '<S267>/Speed_Switch' incorporates:
   *  Abs: '<S267>/Abs'
   *  Constant: '<S275>/Constant'
   *  RelationalOperator: '<S275>/Compare'
   *  Switch: '<S267>/Angle_Switch'
   *  Trigonometry: '<S277>/Atan1'
   *  Trigonometry: '<S278>/Atan1'
   *  UnaryMinus: '<S267>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_g, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    d = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S277>/Subtract1' incorporates:
     *  Product: '<S277>/Product2'
     *  Product: '<S277>/Product3'
     *  UnaryMinus: '<S267>/Unary Minus'
     */
    rtb_Subtract1_dk = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S277>/Subtract' incorporates:
     *  Product: '<S277>/Product'
     *  Product: '<S277>/Product1'
     */
    rtb_Subtract1_m4 = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S277>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract1_m4,
      rtb_Subtract1_dk);

    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S277>/Constant'
     *  Constant: '<S277>/Constant1'
     *  Constant: '<S280>/Constant'
     *  Product: '<S277>/Divide'
     *  Product: '<S277>/Divide1'
     *  RelationalOperator: '<S280>/Compare'
     *  Switch: '<S277>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract1_m4 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_dk /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract1_m4 = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S277>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract1_m4);
  } else {
    d = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S270>/Product2' incorporates:
   *  Constant: '<S270>/Constant'
   *  Switch: '<S267>/Speed_Switch'
   */
  rtb_Init_g = d * 1530.1401357649195;

  /* Signum: '<S265>/Sign' */
  if (rtIsNaN(rtb_Init_g)) {
    d = (rtNaN);
  } else if (rtb_Init_g < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Init_g > 0.0);
  }

  /* Signum: '<S265>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S268>/Add' incorporates:
   *  Sum: '<S269>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S240>/Product' incorporates:
   *  Abs: '<S265>/Abs'
   *  Abs: '<S268>/Abs'
   *  Constant: '<S271>/Constant'
   *  Constant: '<S281>/Constant3'
   *  Constant: '<S281>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S265>/OR'
   *  Lookup_n-D: '<S268>/1-D Lookup Table'
   *  Math: '<S281>/Math Function'
   *  RelationalOperator: '<S265>/Equal1'
   *  RelationalOperator: '<S271>/Compare'
   *  Signum: '<S265>/Sign'
   *  Signum: '<S265>/Sign1'
   *  Sum: '<S268>/Add'
   *  Sum: '<S281>/Add1'
   *  Sum: '<S281>/Add2'
   */
  rtb_Init_g = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S266>/Gain' */
  rtb_Subtract1_dk = Drive_Motor_Control_FF * rtb_Init_g;

  /* Sum: '<S266>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Init_g -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S273>/Sum1' incorporates:
   *  Constant: '<S266>/Constant2'
   *  Product: '<S273>/Product'
   *  Sum: '<S273>/Sum'
   *  UnitDelay: '<S273>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Init_g -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S266>/Product' incorporates:
   *  Constant: '<S266>/Constant3'
   */
  rtb_Subtract1_m4 = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S272>/Diff' incorporates:
   *  UnitDelay: '<S272>/UD'
   *
   * Block description for '<S272>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S272>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Subtract1_m4 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S266>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S266>/Add' incorporates:
   *  Gain: '<S266>/Gain1'
   *  Saturate: '<S266>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Init_g) + rtb_Subtract1_dk) +
    rtb_Switch2_m;

  /* Sum: '<S266>/Subtract' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S266>/Sum2' incorporates:
   *  Gain: '<S266>/Gain2'
   *  UnitDelay: '<S266>/Unit Delay'
   */
  rtb_Subtract1_dk = (Drive_Motor_Control_I * rtb_Init_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S274>/Switch2' incorporates:
   *  Constant: '<S266>/Constant'
   *  RelationalOperator: '<S274>/LowerRelop1'
   *  Sum: '<S266>/Subtract'
   */
  if (!(rtb_Subtract1_dk > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S266>/Constant1'
     *  RelationalOperator: '<S274>/UpperRelop'
     *  Sum: '<S266>/Subtract1'
     */
    if (rtb_Subtract1_dk < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_dk;
    }

    /* End of Switch: '<S274>/Switch' */
  }

  /* End of Switch: '<S274>/Switch2' */

  /* Saturate: '<S266>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_dk = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S266>/Saturation1' */

  /* Sum: '<S266>/Add1' */
  rtb_Switch2_m = rtb_Hypot_b + rtb_Subtract1_dk;

  /* Saturate: '<S266>/Saturation2' */
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

  /* End of Saturate: '<S266>/Saturation2' */

  /* Sum: '<S282>/Add1' incorporates:
   *  Constant: '<S282>/Constant3'
   *  Constant: '<S282>/Constant4'
   *  Math: '<S282>/Math Function'
   *  Sum: '<S282>/Add2'
   */
  rtb_Init_g = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S284>/Sum1' incorporates:
   *  Constant: '<S269>/Constant2'
   *  Product: '<S284>/Product'
   *  Sum: '<S284>/Sum'
   *  UnitDelay: '<S284>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Init_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S269>/Product' incorporates:
   *  Constant: '<S269>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

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
  rtb_Switch2_m = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S269>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S269>/Add' incorporates:
   *  Gain: '<S269>/Gain1'
   *  Saturate: '<S269>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Init_g) + rtb_Switch2_m;

  /* Sum: '<S269>/Subtract' incorporates:
   *  Constant: '<S269>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S269>/Sum2' incorporates:
   *  Gain: '<S269>/Gain2'
   *  UnitDelay: '<S269>/Unit Delay'
   */
  rtb_Subtract1_g = (Steering_Motor_Control_I * rtb_Init_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S285>/Switch2' incorporates:
   *  Constant: '<S269>/Constant'
   *  RelationalOperator: '<S285>/LowerRelop1'
   *  Sum: '<S269>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S269>/Constant1'
     *  RelationalOperator: '<S285>/UpperRelop'
     *  Sum: '<S269>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S285>/Switch' */
  }

  /* End of Switch: '<S285>/Switch2' */

  /* Saturate: '<S269>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S269>/Saturation1' */

  /* Sum: '<S269>/Add1' */
  rtb_Switch2_m = rtb_Add_ik + rtb_Subtract1_g;

  /* Saturate: '<S269>/Saturation2' */
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

  /* End of Saturate: '<S269>/Saturation2' */

  /* Product: '<S356>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch2_j;

  /* Switch: '<S371>/Switch' */
  if (!rtb_AT_Tag_5_Active) {
    /* Switch: '<S371>/Switch' incorporates:
     *  Fcn: '<S372>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S371>/Switch' */

  /* Trigonometry: '<S299>/Cos4' incorporates:
   *  Switch: '<S288>/Angle_Switch'
   *  Trigonometry: '<S298>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S299>/Sin5' incorporates:
   *  UnaryMinus: '<S297>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S299>/Sin4' incorporates:
   *  Switch: '<S288>/Angle_Switch'
   *  Trigonometry: '<S298>/Sin4'
   */
  rtb_Subtract1_kj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S299>/Cos5' incorporates:
   *  UnaryMinus: '<S297>/Unary Minus'
   */
  rtb_Init_g = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S299>/Subtract1' incorporates:
   *  Product: '<S299>/Product2'
   *  Product: '<S299>/Product3'
   *  Trigonometry: '<S299>/Cos4'
   *  Trigonometry: '<S299>/Sin4'
   */
  rtb_Subtract1_n = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_kj * rtb_Init_g);

  /* Sum: '<S299>/Subtract' incorporates:
   *  Product: '<S299>/Product'
   *  Product: '<S299>/Product1'
   *  Trigonometry: '<S299>/Cos4'
   *  Trigonometry: '<S299>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_ik * rtb_Init_g) - (rtb_Subtract1_kj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S299>/Hypot' */
  rtb_Hypot_er = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Subtract1_n);

  /* Switch: '<S299>/Switch' incorporates:
   *  Constant: '<S299>/Constant'
   *  Constant: '<S299>/Constant1'
   *  Constant: '<S300>/Constant'
   *  Product: '<S299>/Divide'
   *  Product: '<S299>/Divide1'
   *  RelationalOperator: '<S300>/Compare'
   *  Switch: '<S299>/Switch1'
   */
  if (rtb_Hypot_er > 1.0E-6) {
    rtb_Switch2_j = rtb_Subtract1_n / rtb_Hypot_er;
    rtb_Init_g = rtb_MatrixConcatenate_b_idx_0 / rtb_Hypot_er;
  } else {
    rtb_Switch2_j = 0.0;
    rtb_Init_g = 1.0;
  }

  /* End of Switch: '<S299>/Switch' */

  /* Switch: '<S288>/Speed_Switch' incorporates:
   *  Abs: '<S288>/Abs'
   *  Constant: '<S296>/Constant'
   *  RelationalOperator: '<S296>/Compare'
   *  Switch: '<S288>/Angle_Switch'
   *  Trigonometry: '<S298>/Atan1'
   *  Trigonometry: '<S299>/Atan1'
   *  UnaryMinus: '<S288>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_j, rtb_Init_g)) > 1.5707963267948966) {
    d = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S298>/Subtract1' incorporates:
     *  Product: '<S298>/Product2'
     *  Product: '<S298>/Product3'
     *  UnaryMinus: '<S288>/Unary Minus'
     */
    rtb_Subtract1_n = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S298>/Subtract' incorporates:
     *  Product: '<S298>/Product'
     *  Product: '<S298>/Product1'
     */
    rtb_Subtract1_kj = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S298>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_kj, rtb_Subtract1_n);

    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S298>/Constant'
     *  Constant: '<S298>/Constant1'
     *  Constant: '<S301>/Constant'
     *  Product: '<S298>/Divide'
     *  Product: '<S298>/Divide1'
     *  RelationalOperator: '<S301>/Compare'
     *  Switch: '<S298>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_kj /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract1_n / rtb_Add_ik;
    } else {
      rtb_Subtract1_kj = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S298>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_kj);
  } else {
    d = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S291>/Product2' incorporates:
   *  Constant: '<S291>/Constant'
   *  Switch: '<S288>/Speed_Switch'
   */
  rtb_Switch2_j = d * 1530.1401357649195;

  /* Signum: '<S286>/Sign' */
  if (rtIsNaN(rtb_Switch2_j)) {
    d = (rtNaN);
  } else if (rtb_Switch2_j < 0.0) {
    d = -1.0;
  } else {
    d = (rtb_Switch2_j > 0.0);
  }

  /* Signum: '<S286>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S289>/Add' incorporates:
   *  Sum: '<S290>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S241>/Product' incorporates:
   *  Abs: '<S286>/Abs'
   *  Abs: '<S289>/Abs'
   *  Constant: '<S292>/Constant'
   *  Constant: '<S302>/Constant3'
   *  Constant: '<S302>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S286>/OR'
   *  Lookup_n-D: '<S289>/1-D Lookup Table'
   *  Math: '<S302>/Math Function'
   *  RelationalOperator: '<S286>/Equal1'
   *  RelationalOperator: '<S292>/Compare'
   *  Signum: '<S286>/Sign'
   *  Signum: '<S286>/Sign1'
   *  Sum: '<S289>/Add'
   *  Sum: '<S302>/Add1'
   *  Sum: '<S302>/Add2'
   */
  rtb_Switch2_j = (((real_T)((d == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_j) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S287>/Gain' */
  rtb_Subtract1_n = Drive_Motor_Control_FF * rtb_Switch2_j;

  /* Sum: '<S287>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_j -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S294>/Sum1' incorporates:
   *  Constant: '<S287>/Constant2'
   *  Product: '<S294>/Product'
   *  Sum: '<S294>/Sum'
   *  UnitDelay: '<S294>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch2_j - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S287>/Product' incorporates:
   *  Constant: '<S287>/Constant3'
   */
  rtb_Subtract1_kj = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S293>/Diff' incorporates:
   *  UnitDelay: '<S293>/UD'
   *
   * Block description for '<S293>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S293>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Subtract1_kj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S287>/Saturation' */
  if (rtb_Switch2_m > Drive_Motor_Control_D_UL) {
    rtb_Switch2_m = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Drive_Motor_Control_D_LL) {
    rtb_Switch2_m = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S287>/Add' incorporates:
   *  Gain: '<S287>/Gain1'
   *  Saturate: '<S287>/Saturation'
   */
  rtb_Hypot_er = ((Drive_Motor_Control_P * rtb_Switch2_j) + rtb_Subtract1_n) +
    rtb_Switch2_m;

  /* Sum: '<S287>/Subtract' incorporates:
   *  Constant: '<S287>/Constant'
   */
  rtb_Init_g = 1.0 - rtb_Hypot_er;

  /* Sum: '<S287>/Sum2' incorporates:
   *  Gain: '<S287>/Gain2'
   *  UnitDelay: '<S287>/Unit Delay'
   */
  rtb_Subtract1_n = (Drive_Motor_Control_I * rtb_Switch2_j) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S295>/Switch2' incorporates:
   *  Constant: '<S287>/Constant'
   *  RelationalOperator: '<S295>/LowerRelop1'
   *  Sum: '<S287>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Hypot_er))) {
    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S287>/Constant1'
     *  RelationalOperator: '<S295>/UpperRelop'
     *  Sum: '<S287>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Hypot_er)) {
      rtb_Init_g = -1.0 - rtb_Hypot_er;
    } else {
      rtb_Init_g = rtb_Subtract1_n;
    }

    /* End of Switch: '<S295>/Switch' */
  }

  /* End of Switch: '<S295>/Switch2' */

  /* Saturate: '<S287>/Saturation1' */
  if (rtb_Init_g > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Init_g < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_Init_g;
  }

  /* End of Saturate: '<S287>/Saturation1' */

  /* Sum: '<S287>/Add1' */
  rtb_Switch2_m = rtb_Hypot_er + rtb_Subtract1_n;

  /* Saturate: '<S287>/Saturation2' */
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

  /* End of Saturate: '<S287>/Saturation2' */

  /* Sum: '<S303>/Add1' incorporates:
   *  Constant: '<S303>/Constant3'
   *  Constant: '<S303>/Constant4'
   *  Math: '<S303>/Math Function'
   *  Sum: '<S303>/Add2'
   */
  rtb_Switch2_j = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S305>/Sum1' incorporates:
   *  Constant: '<S290>/Constant2'
   *  Product: '<S305>/Product'
   *  Sum: '<S305>/Sum'
   *  UnitDelay: '<S305>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_j -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S290>/Product' incorporates:
   *  Constant: '<S290>/Constant3'
   */
  rtb_Hypot_er = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S304>/Diff' incorporates:
   *  UnitDelay: '<S304>/UD'
   *
   * Block description for '<S304>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S304>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_m = rtb_Hypot_er - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S290>/Saturation' */
  if (rtb_Switch2_m > Steering_Motor_Control_D_UL) {
    rtb_Switch2_m = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch2_m < Steering_Motor_Control_D_LL) {
    rtb_Switch2_m = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S290>/Add' incorporates:
   *  Gain: '<S290>/Gain1'
   *  Saturate: '<S290>/Saturation'
   */
  rtb_Add_dl = (Steering_Motor_Control_P * rtb_Switch2_j) + rtb_Switch2_m;

  /* Sum: '<S290>/Subtract' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_Init_g = 1.0 - rtb_Add_dl;

  /* Sum: '<S290>/Sum2' incorporates:
   *  Gain: '<S290>/Gain2'
   *  UnitDelay: '<S290>/Unit Delay'
   */
  rtb_Switch2_j = (Steering_Motor_Control_I * rtb_Switch2_j) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S306>/Switch2' incorporates:
   *  Constant: '<S290>/Constant'
   *  RelationalOperator: '<S306>/LowerRelop1'
   *  Sum: '<S290>/Subtract'
   */
  if (!(rtb_Switch2_j > (1.0 - rtb_Add_dl))) {
    /* Switch: '<S306>/Switch' incorporates:
     *  Constant: '<S290>/Constant1'
     *  RelationalOperator: '<S306>/UpperRelop'
     *  Sum: '<S290>/Subtract1'
     */
    if (rtb_Switch2_j < (-1.0 - rtb_Add_dl)) {
      rtb_Init_g = -1.0 - rtb_Add_dl;
    } else {
      rtb_Init_g = rtb_Switch2_j;
    }

    /* End of Switch: '<S306>/Switch' */
  }

  /* End of Switch: '<S306>/Switch2' */

  /* Saturate: '<S290>/Saturation1' */
  if (rtb_Init_g > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (rtb_Init_g < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = rtb_Init_g;
  }

  /* End of Saturate: '<S290>/Saturation1' */

  /* Sum: '<S290>/Add1' */
  rtb_Switch2_m = rtb_Add_dl + rtb_Subtract1_f;

  /* Saturate: '<S290>/Saturation2' */
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

  /* End of Saturate: '<S290>/Saturation2' */

  /* Gain: '<S135>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S136>/Compare' incorporates:
   *  Constant: '<S135>/Constant'
   *  Constant: '<S136>/Constant'
   */
  rtb_AT_Tag_5_Active = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S135>/Switch1' incorporates:
   *  UnitDelay: '<S135>/Unit Delay1'
   */
  if (rtb_AT_Tag_5_Active) {
    rtb_Add_dl = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_dl = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S135>/Switch1' */

  /* Sum: '<S135>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_dl;

  /* Gain: '<S135>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S135>/Switch' incorporates:
   *  UnitDelay: '<S135>/Unit Delay'
   */
  if (rtb_AT_Tag_5_Active) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S135>/Switch' */

  /* Sum: '<S135>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S7>/OR5' incorporates:
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S56>/Compare'
   *  UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_5_Active = ((rtb_GameState > 2) && (Code_Gen_Model_U.Gamepad_B1_A >
    Code_Gen_Model_DW.DelayInput1_DSTATE));

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   */
  rtb_Switch2_j = Code_Gen_Model_U.Encoder_Revs_Back_Lower *
    Dist_Per_Rev_Back_Lower;

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_AT_Tag_5_Active) {
    rtb_Switch1_k = Dist_Reset_Value_Back_Lower - rtb_Switch2_j;
  } else {
    rtb_Switch1_k = Code_Gen_Model_DW.UnitDelay1_DSTATE_g;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Back_Lower_Arm_Length = rtb_Switch2_j + rtb_Switch1_k;

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   */
  rtb_Switch2_j = Code_Gen_Model_U.Encoder_Revs_Back_Upper *
    Dist_Per_Rev_Back_Upper;

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Sum: '<S21>/Sum'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  if (rtb_AT_Tag_5_Active) {
    rtb_Switch1_n4 = Dist_Reset_Value_Back_Upper - rtb_Switch2_j;
  } else {
    rtb_Switch1_n4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Back_Upper_Arm_Length = rtb_Switch2_j + rtb_Switch1_n4;

  /* Sum: '<S139>/Add' incorporates:
   *  Constant: '<S139>/Constant24'
   */
  rtb_Switch2_j = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S139>/Sqrt' incorporates:
   *  Math: '<S139>/Math Function'
   *  Sum: '<S139>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_Switch2_j * rtb_Switch2_j) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Product: '<S23>/Product' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   */
  rtb_Switch2_j = Code_Gen_Model_U.Encoder_Revs_Front * Dist_Per_Rev_Front;

  /* Switch: '<S23>/Switch1' incorporates:
   *  Constant: '<S23>/Dist_Reset_Value'
   *  Sum: '<S23>/Sum'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  if (rtb_AT_Tag_5_Active) {
    rtb_Switch1_dm = Dist_Reset_Value_Front - rtb_Switch2_j;
  } else {
    rtb_Switch1_dm = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S23>/Switch1' */

  /* Sum: '<S23>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_j + rtb_Switch1_dm;

  /* Sqrt: '<S143>/Sqrt' incorporates:
   *  Constant: '<S143>/Constant24'
   *  Math: '<S143>/Math Function'
   *  Sum: '<S143>/Add'
   *  Sum: '<S143>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Product: '<S22>/Product' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   */
  rtb_Switch2_j = Code_Gen_Model_U.Encoder_Revs_Ball_Screw *
    Dist_Per_Rev_Ball_Screw;

  /* Switch: '<S22>/Switch1' incorporates:
   *  Constant: '<S22>/Dist_Reset_Value'
   *  Sum: '<S22>/Sum'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  if (rtb_AT_Tag_5_Active) {
    rtb_Switch1_e = Dist_Reset_Value_Ball_Screw - rtb_Switch2_j;
  } else {
    rtb_Switch1_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* Sum: '<S22>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Switch2_j + rtb_Switch1_e;

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

  rtb_Switch2_j = (((((((d * 0.84366148773210747) + 177.79999999999998) - (y *
    -0.53687549219315933)) - 177.79999999999998) - 139.7) *
                    (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
                   177.79999999999998) + 139.7;
  rtb_Init_g = (((d * -0.53687549219315933) + 88.899999999999991) + (y *
    0.84366148773210747)) * (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  d = sqrt(((rtb_Init_g - 25.4) * (rtb_Init_g - 25.4)) + (rtb_Switch2_j *
            rtb_Switch2_j));
  sqrt_input = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    y = sqrt(sqrt_input);
  } else {
    y = 0.0;
  }

  sqrt_input = atan((rtb_Init_g - 25.4) / rtb_Switch2_j);
  cos_alpha = cos(sqrt_input);
  sin_alpha = sin(sqrt_input);
  sqrt_input = (d * cos_alpha) - (y * sin_alpha);
  d = ((d * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch2_j = atan((rtb_Init_g - d) / (rtb_Switch2_j - sqrt_input)) -
    -0.16186298985390718;
  y = cos(rtb_Switch2_j);
  cos_alpha = sin(rtb_Switch2_j);
  rtb_Init_g = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((sqrt_input - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Init_g - 465.697) * (rtb_Init_g - 465.697))
    + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Init_g;

  /* Gain: '<S14>/Gain2' incorporates:
   *  MATLAB Function: '<S14>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch2_j;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  d = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(d)) || (rtIsInf(d))) {
    d = 0.0;
  } else {
    d = fmod(d, 256.0);
  }

  rtb_GameState = (uint8_T)((d < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)((uint8_T)
    (-d)))))) : ((int32_T)((uint8_T)d)));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant25'
   *  Constant: '<S14>/Constant26'
   *  Lookup_n-D: '<S14>/1-D Lookup Table'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Switch2_j = TEST_Speaker_Height;
  } else {
    rtb_Switch2_j = look1_binlcpw(TEST_Speaker_Angle,
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
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_j;
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
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Switch2_j + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Switch2_j - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_j;
        Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
      Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      if (rtb_GameState == Code_Gen_Model_State_Stage) {
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
  rtb_Init_g = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S14>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S14>/Constant10'
   *  Constant: '<S14>/Constant11'
   *  Constant: '<S14>/Constant13'
   *  Constant: '<S14>/Constant14'
   *  Constant: '<S14>/Constant15'
   *  Constant: '<S14>/Constant21'
   */
  rtb_Switch2_j = cos(rtb_Init_g);
  rtb_Init_g = sin(rtb_Init_g);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    d = ((rtb_Switch2_j * 42.875) + ((-rtb_Init_g) * -76.0)) + (sqrt(sqrt_input)
      - 50.027);
  } else {
    d = ((rtb_Switch2_j * 42.875) + ((-rtb_Init_g) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = d;
  rtb_Minus_n[0] = ((rtb_Switch2_j * 155.54999999999998) + ((-rtb_Init_g) *
    -25.4)) + d;
  d = ((rtb_Init_g * 42.875) + (rtb_Switch2_j * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = d;
  rtb_Minus_n[1] = ((rtb_Init_g * 155.54999999999998) + (rtb_Switch2_j * -25.4))
    + d;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Reshapey[1] - 25.4) *
    (rtb_Reshapey[1] - 25.4)) + (rtb_Reshapey[0] * rtb_Reshapey[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Switch2_j = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                       (rtb_Minus_n[1] * rtb_Minus_n[1]));
  sqrt_input = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_Switch2_j));
  rtb_Init_g = ((288.925 / rtb_Switch2_j) * rtb_Minus_n[1]) - 88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (sqrt_input * sqrt_input) + (rtb_Init_g *
    rtb_Init_g);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Switch2_j;

  /* End of MATLAB Function: '<S14>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S14>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S14>/Constant23'
   *  Constant: '<S14>/Constant24'
   *  Constant: '<S14>/Constant28'
   *  Constant: '<S14>/Constant29'
   *  Constant: '<S14>/Constant30'
   *  Constant: '<S14>/Constant31'
   */
  rtb_Switch2_j = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                        Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_Switch2_j <= 98.425) {
    y = 79.375;
    rtb_Init_g = 19.049999999999997;
  } else if (rtb_Switch2_j <= 413.375) {
    y = 79.375;
    rtb_Init_g = rtb_Switch2_j - 79.375;
  } else {
    y = fmin(rtb_Switch2_j - 334.0, 317.0);
    rtb_Init_g = 334.0;
  }

  /* End of MATLAB Function: '<S14>/Back_AA_To_Extentions' */

  /* Switch: '<S167>/Init' incorporates:
   *  UnitDelay: '<S167>/FixPt Unit Delay1'
   *  UnitDelay: '<S167>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_j = rtb_Init_g;
  } else {
    rtb_Switch2_j = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S167>/Init' */

  /* Sum: '<S165>/Sum1' */
  rtb_Init_g -= rtb_Switch2_j;

  /* Switch: '<S166>/Switch2' incorporates:
   *  Constant: '<S151>/Constant1'
   *  Constant: '<S151>/Constant3'
   *  RelationalOperator: '<S166>/LowerRelop1'
   *  RelationalOperator: '<S166>/UpperRelop'
   *  Switch: '<S166>/Switch'
   */
  if (rtb_Init_g > AA_Position_Inc_RL) {
    rtb_Init_g = AA_Position_Inc_RL;
  } else if (rtb_Init_g < AA_Position_Dec_RL) {
    /* Switch: '<S166>/Switch' incorporates:
     *  Constant: '<S151>/Constant1'
     */
    rtb_Init_g = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S166>/Switch2' */

  /* Sum: '<S165>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Init_g + rtb_Switch2_j;

  /* Sum: '<S147>/Sum' */
  rtb_Init_g = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S147>/Gain1' */
  rtb_Switch2_j = AA_Prop_Gain * rtb_Init_g;

  /* RelationalOperator: '<S141>/Compare' incorporates:
   *  Constant: '<S141>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_GameState != 0);

  /* Switch: '<S147>/Switch' incorporates:
   *  Constant: '<S147>/Constant2'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<S147>/Constant3'
     *  UnitDelay: '<S156>/Delay Input1'
     *
     * Block description for '<S156>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S147>/Sum2' incorporates:
       *  Gain: '<S147>/Gain2'
       *  UnitDelay: '<S147>/Unit Delay'
       */
      rtb_Init_g = (AA_Integral_Gain * rtb_Init_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S147>/Subtract' incorporates:
       *  Constant: '<S147>/Constant'
       */
      sqrt_input = AA_TC_UL - rtb_Switch2_j;

      /* Switch: '<S157>/Switch2' incorporates:
       *  RelationalOperator: '<S157>/LowerRelop1'
       */
      if (!(rtb_Init_g > sqrt_input)) {
        /* Sum: '<S147>/Subtract1' incorporates:
         *  Constant: '<S147>/Constant1'
         */
        sqrt_input = AA_TC_LL - rtb_Switch2_j;

        /* Switch: '<S157>/Switch' incorporates:
         *  RelationalOperator: '<S157>/UpperRelop'
         */
        if (!(rtb_Init_g < sqrt_input)) {
          sqrt_input = rtb_Init_g;
        }

        /* End of Switch: '<S157>/Switch' */
      }

      /* End of Switch: '<S157>/Switch2' */

      /* Saturate: '<S147>/Saturation1' */
      if (sqrt_input > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (sqrt_input < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      }

      /* End of Saturate: '<S147>/Saturation1' */
    }

    /* End of Switch: '<S147>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Switch: '<S14>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S147>/Add1' */
    rtb_Switch2_m = rtb_Switch2_j + sqrt_input;

    /* Saturate: '<S147>/Saturation2' */
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

    /* End of Saturate: '<S147>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  rtb_Switch2_j = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S58>/Compare' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    1.0);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  rtb_Compare_pf = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   */
  rtb_AT_Tag_5_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  rtb_AT_Tag_6_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   */
  rtb_AT_Tag_13_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* Chart: '<S8>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S63>/FixPt Relational Operator'
   *  RelationalOperator: '<S64>/FixPt Relational Operator'
   *  RelationalOperator: '<S65>/FixPt Relational Operator'
   *  RelationalOperator: '<S66>/FixPt Relational Operator'
   *  RelationalOperator: '<S67>/FixPt Relational Operator'
   *  UnitDelay: '<S63>/Delay Input1'
   *  UnitDelay: '<S64>/Delay Input1'
   *  UnitDelay: '<S65>/Delay Input1'
   *  UnitDelay: '<S66>/Delay Input1'
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S63>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S64>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S65>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S66>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;
    Code_Gen_Model_B.Intake_Motor_DC = 0.0;

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

     case Code_Gen_Mod_IN_Extra_Run_Time4:
      Code_Gen_Model_B.Note_State_ID = 4.2;
      if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
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
      if (Code_Gen_Model_DW.timer >= Note_Time_Eject) {
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
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) {
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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Switch2_j;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Switch2_j;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
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
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
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
      Code_Gen_Model_B.Intake_Motor_DC = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      if (((int32_T)rtb_AT_Tag_6_Active) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_hw)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Intake_AND_Shooter;
        Code_Gen_Model_B.Note_State_ID = 4.1;
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      } else if (((int32_T)rtb_Compare_pf) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_nx)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
        Code_Gen_Model_B.Note_State_ID = 2.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_f)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (((int32_T)rtb_AT_Tag_5_Active) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_o)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_AT_Tag_13_Active) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_e)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Switch2_j;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Switch2_j;
      }
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

  /* Sum: '<S68>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Switch2_j = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S68>/Add' incorporates:
   *  Gain: '<S68>/Gain'
   *  Gain: '<S68>/Gain1'
   */
  rtb_Init_g = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Switch2_j);

  /* Switch: '<S68>/Switch' incorporates:
   *  Constant: '<S68>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S68>/Sum2' incorporates:
     *  Gain: '<S68>/Gain2'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    rtb_Switch2_j = (Shooter_Motor_Control_I * rtb_Switch2_j) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S68>/Subtract' incorporates:
     *  Constant: '<S68>/Constant'
     */
    d = 1.0 - rtb_Init_g;

    /* Switch: '<S70>/Switch2' incorporates:
     *  Constant: '<S68>/Constant'
     *  RelationalOperator: '<S70>/LowerRelop1'
     *  Sum: '<S68>/Subtract'
     */
    if (!(rtb_Switch2_j > (1.0 - rtb_Init_g))) {
      /* Sum: '<S68>/Subtract1' incorporates:
       *  Constant: '<S68>/Constant1'
       */
      d = -1.0 - rtb_Init_g;

      /* Switch: '<S70>/Switch' incorporates:
       *  Constant: '<S68>/Constant1'
       *  RelationalOperator: '<S70>/UpperRelop'
       *  Sum: '<S68>/Subtract1'
       */
      if (!(rtb_Switch2_j < (-1.0 - rtb_Init_g))) {
        d = rtb_Switch2_j;
      }

      /* End of Switch: '<S70>/Switch' */
    }

    /* End of Switch: '<S70>/Switch2' */

    /* Saturate: '<S68>/Saturation1' */
    if (d > Shooter_Motor_Control_I_UL) {
      d = Shooter_Motor_Control_I_UL;
    } else if (d < Shooter_Motor_Control_I_LL) {
      d = Shooter_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S68>/Saturation1' */
  } else {
    d = 0.0;
  }

  /* End of Switch: '<S68>/Switch' */

  /* Gain: '<S7>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_Switch2_j = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Switch: '<S8>/Switch4' incorporates:
   *  Switch: '<S8>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S8>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_Switch2_j;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S68>/Add1' incorporates:
     *  Switch: '<S8>/Switch'
     */
    rtb_Switch2_m = rtb_Init_g + d;

    /* Saturate: '<S68>/Saturation2' incorporates:
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

    /* End of Saturate: '<S68>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* Sum: '<S69>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  cos_alpha = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S69>/Add' incorporates:
   *  Gain: '<S69>/Gain'
   *  Gain: '<S69>/Gain1'
   */
  rtb_Init_g = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * cos_alpha);

  /* Switch: '<S69>/Switch' incorporates:
   *  Constant: '<S69>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S69>/Sum2' incorporates:
     *  Gain: '<S69>/Gain2'
     *  UnitDelay: '<S69>/Unit Delay'
     */
    cos_alpha = (Shooter_Motor_Control_I * cos_alpha) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S69>/Subtract' incorporates:
     *  Constant: '<S69>/Constant'
     */
    sin_alpha = 1.0 - rtb_Init_g;

    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S69>/Constant'
     *  RelationalOperator: '<S71>/LowerRelop1'
     *  Sum: '<S69>/Subtract'
     */
    if (!(cos_alpha > (1.0 - rtb_Init_g))) {
      /* Sum: '<S69>/Subtract1' incorporates:
       *  Constant: '<S69>/Constant1'
       */
      sin_alpha = -1.0 - rtb_Init_g;

      /* Switch: '<S71>/Switch' incorporates:
       *  Constant: '<S69>/Constant1'
       *  RelationalOperator: '<S71>/UpperRelop'
       *  Sum: '<S69>/Subtract1'
       */
      if (!(cos_alpha < (-1.0 - rtb_Init_g))) {
        sin_alpha = cos_alpha;
      }

      /* End of Switch: '<S71>/Switch' */
    }

    /* End of Switch: '<S71>/Switch2' */

    /* Saturate: '<S69>/Saturation1' */
    if (sin_alpha > Shooter_Motor_Control_I_UL) {
      cos_alpha = Shooter_Motor_Control_I_UL;
    } else if (sin_alpha < Shooter_Motor_Control_I_LL) {
      cos_alpha = Shooter_Motor_Control_I_LL;
    } else {
      cos_alpha = sin_alpha;
    }

    /* End of Saturate: '<S69>/Saturation1' */
  } else {
    cos_alpha = 0.0;
  }

  /* End of Switch: '<S69>/Switch' */

  /* Switch: '<S8>/Switch5' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Switch2_j;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S69>/Add1' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    rtb_Switch2_m = rtb_Init_g + cos_alpha;

    /* Saturate: '<S69>/Saturation2' incorporates:
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

    /* End of Saturate: '<S69>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S8>/Switch5' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' */
    Code_Gen_Model_Y.Shooter_Servo_Position = Code_Gen_Model_B.Shooter_Servo_Pos;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Switch: '<S170>/Init' incorporates:
   *  UnitDelay: '<S170>/FixPt Unit Delay1'
   *  UnitDelay: '<S170>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_j = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_Switch2_j = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S170>/Init' */

  /* Sum: '<S168>/Sum1' */
  rtb_Init_g = Code_Gen_Model_B.Desired_BS_Length - rtb_Switch2_j;

  /* Switch: '<S169>/Switch2' incorporates:
   *  Constant: '<S152>/Constant1'
   *  Constant: '<S152>/Constant3'
   *  RelationalOperator: '<S169>/LowerRelop1'
   *  RelationalOperator: '<S169>/UpperRelop'
   *  Switch: '<S169>/Switch'
   */
  if (rtb_Init_g > BS_Position_Inc_RL) {
    rtb_Init_g = BS_Position_Inc_RL;
  } else if (rtb_Init_g < BS_Position_Dec_RL) {
    /* Switch: '<S169>/Switch' incorporates:
     *  Constant: '<S152>/Constant1'
     */
    rtb_Init_g = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S169>/Switch2' */

  /* Sum: '<S168>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Init_g + rtb_Switch2_j;

  /* Sum: '<S146>/Sum' */
  rtb_Switch2_j = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S155>/Sum1' incorporates:
   *  Constant: '<S146>/Constant2'
   *  Product: '<S155>/Product'
   *  Sum: '<S155>/Sum'
   *  UnitDelay: '<S155>/Unit Delay1'
   */
  sin_alpha = ((rtb_Switch2_j - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
               BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S146>/Product' incorporates:
   *  Constant: '<S146>/Constant3'
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
    /* Sum: '<S154>/Diff' incorporates:
     *  UnitDelay: '<S154>/UD'
     *
     * Block description for '<S154>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S154>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Switch2_m = rtb_Product_fi - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S146>/Saturation' */
    if (rtb_Switch2_m > BS_Deriv_UL) {
      rtb_Switch2_m = BS_Deriv_UL;
    } else if (rtb_Switch2_m < BS_Deriv_LL) {
      rtb_Switch2_m = BS_Deriv_LL;
    }

    /* Sum: '<S146>/Add' incorporates:
     *  Gain: '<S146>/Gain1'
     *  Saturate: '<S146>/Saturation'
     */
    rtb_Switch2_m += BS_Prop_Gain * rtb_Switch2_j;

    /* Saturate: '<S146>/Saturation2' */
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

    /* End of Saturate: '<S146>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch3' */

  /* Switch: '<S164>/Init' incorporates:
   *  UnitDelay: '<S164>/FixPt Unit Delay1'
   *  UnitDelay: '<S164>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_j = y;
  } else {
    rtb_Switch2_j = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S164>/Init' */

  /* Sum: '<S162>/Sum1' */
  rtb_Init_g = y - rtb_Switch2_j;

  /* Switch: '<S163>/Switch2' incorporates:
   *  Constant: '<S150>/Constant1'
   *  Constant: '<S150>/Constant3'
   *  RelationalOperator: '<S163>/LowerRelop1'
   *  RelationalOperator: '<S163>/UpperRelop'
   *  Switch: '<S163>/Switch'
   */
  if (rtb_Init_g > AA_Position_Inc_RL) {
    rtb_Init_g = AA_Position_Inc_RL;
  } else if (rtb_Init_g < AA_Position_Dec_RL) {
    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S150>/Constant1'
     */
    rtb_Init_g = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S163>/Switch2' */

  /* Sum: '<S162>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Init_g + rtb_Switch2_j;

  /* Sum: '<S148>/Sum' */
  rtb_Init_g = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S148>/Gain1' */
  rtb_Switch2_j = AA_Prop_Gain * rtb_Init_g;

  /* Switch: '<S148>/Switch' incorporates:
   *  Constant: '<S148>/Constant2'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S148>/Switch1' incorporates:
     *  Constant: '<S148>/Constant3'
     *  UnitDelay: '<S158>/Delay Input1'
     *
     * Block description for '<S158>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      y = AA_Integral_IC;
    } else {
      /* Sum: '<S148>/Sum2' incorporates:
       *  Gain: '<S148>/Gain2'
       *  UnitDelay: '<S148>/Unit Delay'
       */
      rtb_Init_g = (AA_Integral_Gain * rtb_Init_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c2;

      /* Sum: '<S148>/Subtract' incorporates:
       *  Constant: '<S148>/Constant'
       */
      y = AA_TC_UL - rtb_Switch2_j;

      /* Switch: '<S159>/Switch2' incorporates:
       *  RelationalOperator: '<S159>/LowerRelop1'
       */
      if (!(rtb_Init_g > y)) {
        /* Sum: '<S148>/Subtract1' incorporates:
         *  Constant: '<S148>/Constant1'
         */
        y = AA_TC_LL - rtb_Switch2_j;

        /* Switch: '<S159>/Switch' incorporates:
         *  RelationalOperator: '<S159>/UpperRelop'
         */
        if (!(rtb_Init_g < y)) {
          y = rtb_Init_g;
        }

        /* End of Switch: '<S159>/Switch' */
      }

      /* End of Switch: '<S159>/Switch2' */

      /* Saturate: '<S148>/Saturation1' */
      if (y > AA_Integral_UL) {
        y = AA_Integral_UL;
      } else if (y < AA_Integral_LL) {
        y = AA_Integral_LL;
      }

      /* End of Saturate: '<S148>/Saturation1' */
    }

    /* End of Switch: '<S148>/Switch1' */
  } else {
    y = 0.0;
  }

  /* End of Switch: '<S148>/Switch' */

  /* Switch: '<S14>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S148>/Add1' */
    rtb_Switch2_m = rtb_Switch2_j + y;

    /* Saturate: '<S148>/Saturation2' */
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

    /* End of Saturate: '<S148>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch' */

  /* Sum: '<S142>/Subtract1' incorporates:
   *  Constant: '<S142>/Constant24'
   *  Math: '<S142>/Math Function'
   *  Sqrt: '<S142>/Sqrt'
   *  Sum: '<S142>/Subtract'
   */
  rtb_Switch2_j = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                        Code_Gen_Model_B.Desired_Front_AA_Length) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S142>/Saturation' */
  if (rtb_Switch2_j > Front_AA_Max_Ext) {
    rtb_Switch2_j = Front_AA_Max_Ext;
  } else if (rtb_Switch2_j < Front_AA_Min_Ext) {
    rtb_Switch2_j = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S142>/Saturation' */

  /* Switch: '<S173>/Init' incorporates:
   *  UnitDelay: '<S173>/FixPt Unit Delay1'
   *  UnitDelay: '<S173>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Init_g = rtb_Switch2_j;
  } else {
    rtb_Init_g = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S173>/Init' */

  /* Sum: '<S171>/Sum1' */
  rtb_Switch2_j -= rtb_Init_g;

  /* Switch: '<S172>/Switch2' incorporates:
   *  Constant: '<S153>/Constant1'
   *  Constant: '<S153>/Constant3'
   *  RelationalOperator: '<S172>/LowerRelop1'
   *  RelationalOperator: '<S172>/UpperRelop'
   *  Switch: '<S172>/Switch'
   */
  if (rtb_Switch2_j > AA_Position_Inc_RL) {
    rtb_Switch2_j = AA_Position_Inc_RL;
  } else if (rtb_Switch2_j < AA_Position_Dec_RL) {
    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S153>/Constant1'
     */
    rtb_Switch2_j = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S172>/Switch2' */

  /* Sum: '<S171>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_j + rtb_Init_g;

  /* Sum: '<S149>/Sum' */
  rtb_Init_g = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S149>/Gain1' */
  rtb_Switch2_j = AA_Prop_Gain * rtb_Init_g;

  /* Switch: '<S149>/Switch' incorporates:
   *  Constant: '<S149>/Constant2'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S149>/Switch1' incorporates:
     *  Constant: '<S149>/Constant3'
     *  UnitDelay: '<S160>/Delay Input1'
     *
     * Block description for '<S160>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      rtb_Init_g = AA_Integral_IC;
    } else {
      /* Sum: '<S149>/Sum2' incorporates:
       *  Gain: '<S149>/Gain2'
       *  UnitDelay: '<S149>/Unit Delay'
       */
      rtb_Init_g = (AA_Integral_Gain * rtb_Init_g) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S149>/Subtract' incorporates:
       *  Constant: '<S149>/Constant'
       */
      rtb_Switch2_m = AA_TC_UL - rtb_Switch2_j;

      /* Switch: '<S161>/Switch2' incorporates:
       *  RelationalOperator: '<S161>/LowerRelop1'
       */
      if (!(rtb_Init_g > rtb_Switch2_m)) {
        /* Sum: '<S149>/Subtract1' incorporates:
         *  Constant: '<S149>/Constant1'
         */
        rtb_Switch2_m = AA_TC_LL - rtb_Switch2_j;

        /* Switch: '<S161>/Switch' incorporates:
         *  RelationalOperator: '<S161>/UpperRelop'
         */
        if (!(rtb_Init_g < rtb_Switch2_m)) {
          rtb_Switch2_m = rtb_Init_g;
        }

        /* End of Switch: '<S161>/Switch' */
      }

      /* End of Switch: '<S161>/Switch2' */

      /* Saturate: '<S149>/Saturation1' */
      if (rtb_Switch2_m > AA_Integral_UL) {
        rtb_Init_g = AA_Integral_UL;
      } else if (rtb_Switch2_m < AA_Integral_LL) {
        rtb_Init_g = AA_Integral_LL;
      } else {
        rtb_Init_g = rtb_Switch2_m;
      }

      /* End of Saturate: '<S149>/Saturation1' */
    }

    /* End of Switch: '<S149>/Switch1' */
  } else {
    rtb_Init_g = 0.0;
  }

  /* End of Switch: '<S149>/Switch' */

  /* Switch: '<S14>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S7>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S149>/Add1' */
    rtb_Switch2_m = rtb_Switch2_j + rtb_Init_g;

    /* Saturate: '<S149>/Saturation2' */
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

    /* End of Saturate: '<S149>/Saturation2' */
  }

  /* End of Switch: '<S14>/Switch2' */

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   */
  rtb_AT_Tag_14_Active = (Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
    KF_Vision_Ambiguity_Thresh);

  /* Switch: '<S6>/Switch' incorporates:
   *  Inport: '<Root>/AT_Tag_4_Found'
   *  Inport: '<Root>/AT_Tag_7_Found'
   *  Logic: '<S6>/Logical Operator'
   *  Logic: '<S6>/Logical Operator1'
   *  Switch: '<S6>/Switch1'
   */
  if (rtb_AT_Tag_14_Active && (Code_Gen_Model_U.AT_Tag_4_Found)) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant9'
     *  Inport: '<Root>/Photon_Est_Pose_X'
     *  Inport: '<Root>/Photon_Est_Pose_Y'
     *  Math: '<S6>/Hypot'
     *  Sum: '<S6>/Subtract'
     *  Sum: '<S6>/Subtract1'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_U.Photon_Est_Pose_X - AT_Tag_4_Coordinate_X,
       Code_Gen_Model_U.Photon_Est_Pose_Y - AT_Tag_4_Coordinate_Y);
  } else if (rtb_AT_Tag_14_Active && (Code_Gen_Model_U.AT_Tag_7_Found)) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant2'
     *  Constant: '<S6>/Constant3'
     *  Inport: '<Root>/Photon_Est_Pose_X'
     *  Inport: '<Root>/Photon_Est_Pose_Y'
     *  Math: '<S6>/Hypot1'
     *  Sum: '<S6>/Subtract2'
     *  Sum: '<S6>/Subtract3'
     *  Switch: '<S6>/Switch'
     */
    Code_Gen_Model_B.Distance_Speaker = rt_hypotd_snf
      (Code_Gen_Model_U.Photon_Est_Pose_X - AT_Tag_7_Coordinate_X,
       Code_Gen_Model_U.Photon_Est_Pose_Y - AT_Tag_7_Coordinate_Y);
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    Code_Gen_Model_B.Distance_Speaker = 0.0;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Update for UnitDelay: '<S127>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S127>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S128>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S128>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S129>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S130>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

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
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' incorporates:
     *  Bias: '<S202>/Bias'
     *  Merge: '<S176>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' incorporates:
     *  Bias: '<S202>/Bias'
     *  Merge: '<S176>/Merge1'
     *  S-Function (sfix_udelay): '<S10>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S72>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S92>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S72>/A'
   *  Delay: '<S72>/MemoryX'
   */
  rtb_Switch2_j = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_m = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S72>/MemoryX' incorporates:
   *  Constant: '<S72>/B'
   *  Product: '<S92>/A[k]*xhat[k|k-1]'
   *  Product: '<S92>/B[k]*u[k]'
   *  Sum: '<S92>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch2_j) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_m) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S126>/UD'
   *
   * Block description for '<S126>/UD':
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

  /* Update for UnitDelay: '<S339>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S339>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S353>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S352>/UD'
   *
   * Block description for '<S352>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S350>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S348>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S348>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S315>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init;

  /* Update for UnitDelay: '<S314>/UD'
   *
   * Block description for '<S314>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch_ar;

  /* Update for UnitDelay: '<S308>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S326>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Switch2_e;

  /* Update for UnitDelay: '<S325>/UD'
   *
   * Block description for '<S325>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Switch4_g;

  /* Update for UnitDelay: '<S311>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S252>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S251>/UD'
   *
   * Block description for '<S251>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S245>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S263>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S262>/UD'
   *
   * Block description for '<S262>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S248>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S273>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S272>/UD'
   *
   * Block description for '<S272>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_m4;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_dk;

  /* Update for UnitDelay: '<S284>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S283>/UD'
   *
   * Block description for '<S283>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S269>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S294>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S293>/UD'
   *
   * Block description for '<S293>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_kj;

  /* Update for UnitDelay: '<S287>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S305>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S304>/UD'
   *
   * Block description for '<S304>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Hypot_er;

  /* Update for UnitDelay: '<S290>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S135>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_dl;

  /* Update for UnitDelay: '<S135>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S54>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Gamepad_B1_A;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_k;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_n4;

  /* Update for UnitDelay: '<S23>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_dm;

  /* Update for UnitDelay: '<S22>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_e;

  /* Update for UnitDelay: '<S167>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S167>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S147>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = sqrt_input;

  /* Update for UnitDelay: '<S156>/Delay Input1'
   *
   * Block description for '<S156>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S63>/Delay Input1'
   *
   * Block description for '<S63>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S64>/Delay Input1'
   *
   * Block description for '<S64>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nx = rtb_Compare_pf;

  /* Update for UnitDelay: '<S66>/Delay Input1'
   *
   * Block description for '<S66>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_AT_Tag_5_Active;

  /* Update for UnitDelay: '<S65>/Delay Input1'
   *
   * Block description for '<S65>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hw = rtb_AT_Tag_6_Active;

  /* Update for UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_AT_Tag_13_Active;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = d;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = cos_alpha;

  /* Update for UnitDelay: '<S170>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S170>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S155>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = sin_alpha;

  /* Update for UnitDelay: '<S154>/UD'
   *
   * Block description for '<S154>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Product_fi;

  /* Update for UnitDelay: '<S164>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S164>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S158>/Delay Input1'
   *
   * Block description for '<S158>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S148>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c2 = y;

  /* Update for UnitDelay: '<S173>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S173>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S160>/Delay Input1'
   *
   * Block description for '<S160>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S149>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Init_g;
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

    /* InitializeConditions for Delay: '<S72>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S339>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S348>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S20>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S167>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S170>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S164>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S173>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S409>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S180>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S176>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S180>/Robot_Index_Is_Valid' */
    /* Start for If: '<S183>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S183>/Circle_Check_Valid' */
    /* Start for If: '<S185>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S183>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S180>/Robot_Index_Is_Valid' */
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

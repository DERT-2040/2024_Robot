/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.75
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Feb 18 14:52:00 2024
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

/* Named constants for Chart: '<S6>/Chart_Intake_and_Shooter' */
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

/* Named constants for Chart: '<S11>/Chart_Shooter_Position' */
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
real_T AA_Deriv_FC = 0.2;              /* Variable: AA_Deriv_FC
                                        * Referenced by:
                                        *   '<S108>/Constant2'
                                        *   '<S109>/Constant2'
                                        *   '<S110>/Constant2'
                                        */
real_T AA_Deriv_Gain = 0.0;            /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S108>/Constant3'
                                        *   '<S109>/Constant3'
                                        *   '<S110>/Constant3'
                                        */
real_T AA_Deriv_LL = -0.5;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S108>/Saturation'
                                        *   '<S109>/Saturation'
                                        *   '<S110>/Saturation'
                                        */
real_T AA_Deriv_UL = 0.5;              /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S108>/Saturation'
                                        *   '<S109>/Saturation'
                                        *   '<S110>/Saturation'
                                        */
real_T AA_Position_Dec_RL = -0.508;    /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S112>/Constant1'
                                        *   '<S113>/Constant1'
                                        *   '<S115>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 0.508;     /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S112>/Constant3'
                                        *   '<S113>/Constant3'
                                        *   '<S115>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S108>/Gain1'
                                        *   '<S109>/Gain1'
                                        *   '<S110>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S108>/Saturation2'
                                        *   '<S109>/Saturation2'
                                        *   '<S110>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S108>/Saturation2'
                                        *   '<S109>/Saturation2'
                                        *   '<S110>/Saturation2'
                                        */
real_T Amp_Angle = -50.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 571.5;                /* Variable: Amp_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 919.48;            /* Variable: Amp_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S111>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S111>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S111>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S111>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -0.0508;   /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S114>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 0.0508;    /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S114>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S111>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S111>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S111>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S358>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S356>/Constant'
                                         *   '<S356>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S358>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S356>/Constant1'
                                        */
real_T Cal_Back_Lower_Arm_DC = 0.2;    /* Variable: Cal_Back_Lower_Arm_DC
                                        * Referenced by: '<S11>/Constant32'
                                        */
real_T Cal_Back_Upper_Arm_DC = 0.2;    /* Variable: Cal_Back_Upper_Arm_DC
                                        * Referenced by: '<S11>/Constant27'
                                        */
real_T Cal_Ball_Screw_Arm_DC = 0.2;    /* Variable: Cal_Ball_Screw_Arm_DC
                                        * Referenced by: '<S11>/Constant34'
                                        */
real_T Cal_Front_Arm_DC = 0.2;         /* Variable: Cal_Front_Arm_DC
                                        * Referenced by: '<S11>/Constant33'
                                        */
real_T Dist_Per_Rev_Back_Lower = 6.9822;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S17>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 6.9822;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S18>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.52917;/* Variable: Dist_Per_Rev_Ball_Screw
                                          * Referenced by: '<S19>/Rev_2_Dist'
                                          */
real_T Dist_Per_Rev_Front = 6.9822;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S20>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Motor_Current_Back_Lower = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Back_Lower
                                 * Referenced by: '<S17>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Back_Upper = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Back_Upper
                                 * Referenced by: '<S18>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Ball_Screw = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Ball_Screw
                                 * Referenced by: '<S19>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Front = 10.0;
                                     /* Variable: Dist_Reset_Motor_Current_Front
                                      * Referenced by: '<S20>/Dist_Reset_Motor_Current_Threshold'
                                      */
real_T Dist_Reset_Value_Back_Lower = 0.0;/* Variable: Dist_Reset_Value_Back_Lower
                                          * Referenced by: '<S17>/Dist_Reset_Value'
                                          */
real_T Dist_Reset_Value_Back_Upper = 0.0;/* Variable: Dist_Reset_Value_Back_Upper
                                          * Referenced by: '<S18>/Dist_Reset_Value'
                                          */
real_T Dist_Reset_Value_Ball_Screw = 0.0;/* Variable: Dist_Reset_Value_Ball_Screw
                                          * Referenced by: '<S19>/Dist_Reset_Value'
                                          */
real_T Dist_Reset_Value_Front = 0.0;   /* Variable: Dist_Reset_Value_Front
                                        * Referenced by: '<S20>/Dist_Reset_Value'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S291>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S207>/Constant3'
                                        *   '<S228>/Constant3'
                                        *   '<S249>/Constant3'
                                        *   '<S270>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S207>/Constant2'
                                   *   '<S228>/Constant2'
                                   *   '<S249>/Constant2'
                                   *   '<S270>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S207>/Saturation'
                                        *   '<S228>/Saturation'
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S207>/Saturation'
                                        *   '<S228>/Saturation'
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S207>/Gain'
                                            *   '<S228>/Gain'
                                            *   '<S249>/Gain'
                                            *   '<S270>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S207>/Gain2'
                                        *   '<S228>/Gain2'
                                        *   '<S249>/Gain2'
                                        *   '<S270>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S207>/Saturation1'
                                        *   '<S228>/Saturation1'
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S207>/Saturation1'
                                        *   '<S228>/Saturation1'
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S207>/Gain1'
                                        *   '<S228>/Gain1'
                                        *   '<S249>/Gain1'
                                        *   '<S270>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S212>/Constant'
                            *   '<S233>/Constant'
                            *   '<S254>/Constant'
                            *   '<S275>/Constant'
                            */
real_T KF_Enable = 0.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S8>/Constant1'
                                        *   '<S8>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S8>/Constant'
                                          */
real_T LoadShooter_Angle = 35.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 279.4;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 624.84;    /* Variable: LoadShooter_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 100.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 0.5;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 0.2;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.1;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S10>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S99>/Constant'
                                        */
real_T Servo_Position_Deploy = 1.0;    /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Position_Store = 0.0;     /* Variable: Servo_Position_Store
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S32>/Gain'
                                           *   '<S33>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S32>/Gain2'
                                         *   '<S33>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S32>/Saturation1'
                                          *   '<S33>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S32>/Saturation1'
                                         *   '<S33>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S32>/Gain1'
                                         *   '<S33>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 450.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S6>/Chart_Intake_and_Shooter'
                                      */
real_T Speaker_Gap = 279.4;            /* Variable: Speaker_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S192>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S192>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S139>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S152>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S192>/Constant3'
                                     */
real_T Stage_Angle = 26.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 215.9;              /* Variable: Stage_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 502.92;          /* Variable: Stage_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S346>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S312>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S312>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S312>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S312>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S311>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S312>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S312>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S312>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S312>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S312>/Constant1'
                                   *   '<S312>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S312>/Constant'
                                   *   '<S312>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S302>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S302>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S302>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S302>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S302>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S302>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S210>/Constant3'
                                        *   '<S231>/Constant3'
                                        *   '<S252>/Constant3'
                                        *   '<S273>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S210>/Constant2'
                                *   '<S231>/Constant2'
                                *   '<S252>/Constant2'
                                *   '<S273>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S210>/Saturation'
                                           *   '<S231>/Saturation'
                                           *   '<S252>/Saturation'
                                           *   '<S273>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S210>/Saturation'
                                          *   '<S231>/Saturation'
                                          *   '<S252>/Saturation'
                                          *   '<S273>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S210>/Gain2'
                                         *   '<S231>/Gain2'
                                         *   '<S252>/Gain2'
                                         *   '<S273>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S210>/Saturation1'
                                             *   '<S231>/Saturation1'
                                             *   '<S252>/Saturation1'
                                             *   '<S273>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S210>/Saturation1'
                                            *   '<S231>/Saturation1'
                                            *   '<S252>/Saturation1'
                                            *   '<S273>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S210>/Gain1'
                                        *   '<S231>/Gain1'
                                        *   '<S252>/Gain1'
                                        *   '<S273>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S344>/Constant'
                                        */
real_T TEST_Arm_State_Request = 0.0;   /* Variable: TEST_Arm_State_Request
                                        * Referenced by: '<S11>/Constant'
                                        */
real_T TEST_Intake_Shooter_State_Request = 0.0;
                                  /* Variable: TEST_Intake_Shooter_State_Request
                                   * Referenced by: '<S6>/Constant'
                                   */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S6>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S6>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 45.0;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by:
                                        *   '<S6>/Constant6'
                                        *   '<S11>/Constant26'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S11>/Constant25'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 3.175;                /* Variable: Tol_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S290>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S290>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S290>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S290>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S290>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S290>/Constant3'
                                    */
real_T Trap_Angle = -26.5;             /* Variable: Trap_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 693.42;              /* Variable: Trap_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 1079.5;           /* Variable: Trap_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
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
  real_T alpha;
  real_T cos_alpha;
  real_T d;
  real_T rtb_Add_c4;
  real_T rtb_Add_ih;
  real_T rtb_Add_ik;
  real_T rtb_Add_kv;
  real_T rtb_Add_l;
  real_T rtb_Add_pw;
  real_T rtb_Ball_Screw_Length;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Product_ku;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Sqrt_f;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_cj;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_jx;
  real_T rtb_Subtract1_k0;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch;
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_bu;
  real_T rtb_Switch1_cp;
  real_T rtb_Switch1_ha;
  real_T rtb_Switch1_j;
  real_T rtb_Switch1_l;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_j;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_m4;
  real_T rtb_Switch2_n;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T y;
  int32_T i;
  int32_T rtb_Assignment_tmp;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s164_iter;
  uint16_T s189_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_Compare_o;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S197>/Add1' incorporates:
   *  Constant: '<S197>/Constant3'
   *  Constant: '<S197>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S197>/Math Function'
   *  Sum: '<S13>/Add'
   *  Sum: '<S197>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S91>/Diff'
   *  UnitDelay: '<S91>/UD'
   *
   * Block description for '<S91>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S91>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S198>/Add1' incorporates:
   *  Constant: '<S198>/Constant3'
   *  Constant: '<S198>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S198>/Math Function'
   *  Sum: '<S13>/Add1'
   *  Sum: '<S198>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S92>/Diff'
   *  UnitDelay: '<S92>/UD'
   *
   * Block description for '<S92>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S199>/Add1' incorporates:
   *  Constant: '<S199>/Constant3'
   *  Constant: '<S199>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S199>/Math Function'
   *  Sum: '<S13>/Add2'
   *  Sum: '<S199>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S93>/Diff'
   *  UnitDelay: '<S93>/UD'
   *
   * Block description for '<S93>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S200>/Add1' incorporates:
   *  Constant: '<S200>/Constant3'
   *  Constant: '<S200>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S200>/Math Function'
   *  Sum: '<S13>/Add3'
   *  Sum: '<S200>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product3' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S94>/Diff'
   *  UnitDelay: '<S94>/UD'
   *
   * Block description for '<S94>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S10>/Product7' incorporates:
   *  Fcn: '<S95>/r->x'
   *  Fcn: '<S95>/theta->y'
   *  Fcn: '<S96>/r->x'
   *  Fcn: '<S96>/theta->y'
   *  Fcn: '<S97>/r->x'
   *  Fcn: '<S97>/theta->y'
   *  Fcn: '<S98>/r->x'
   *  Fcn: '<S98>/theta->y'
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

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Switch1_cp = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Switch1_cp)) || (rtIsInf(rtb_Switch1_cp))) {
    rtb_Switch1_cp = 0.0;
  } else {
    rtb_Switch1_cp = fmod(rtb_Switch1_cp, 4.294967296E+9);
  }

  switch ((rtb_Switch1_cp < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Switch1_cp)))) :
          ((int32_T)((uint32_T)rtb_Switch1_cp))) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* SignalConversion generated from: '<S5>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S9>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S5>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S9>/Merge1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  SignalConversion generated from: '<S5>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S5>/Constant2'
     *  SignalConversion generated from: '<S5>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S9>/Merge3' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S9>/Merge4' incorporates:
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

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S5>/Constant7'
     *  SignalConversion generated from: '<S5>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S5>/Constant10'
     *  SignalConversion generated from: '<S5>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active = false;

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
     *  Merge: '<S9>/Merge8'
     */
    switch ((int32_T)Spline_Ref_Poses_switch_num) {
     case 1:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant4_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S9>/Merge9' incorporates:
       *  Constant: '<S3>/Constant4'
       *  Constant: '<S3>/Constant9'
       *  Merge: '<S9>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 3.0;
      break;

     case 2:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant11_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S9>/Merge9' incorporates:
       *  Constant: '<S3>/Constant11'
       *  Constant: '<S3>/Constant14'
       *  Merge: '<S9>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 6.0;
      break;

     default:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant12_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S9>/Merge9' incorporates:
       *  Constant: '<S3>/Constant12'
       *  Constant: '<S3>/Constant15'
       *  Merge: '<S9>/Merge8'
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

    /* Merge: '<S9>/Merge1' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S9>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S9>/Merge4' incorporates:
     *  Constant: '<S3>/Constant8'
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active = false;

    /* Logic: '<S3>/NOT' incorporates:
     *  Logic: '<S3>/NOT1'
     *  UnitDelay: '<S7>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* Merge: '<S9>/Merge7' incorporates:
     *  Logic: '<S3>/NOT'
     */
    Code_Gen_Model_B.Spline_Enable = rtb_Is_Absolute_Steering;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* SignalConversion generated from: '<S15>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S9>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant'
     *  Constant: '<S346>/Constant1'
     *  Constant: '<S346>/Constant2'
     *  Inport: '<Root>/Steer_Joystick_X'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Math: '<S346>/Hypot'
     *  RelationalOperator: '<S346>/GreaterThan'
     *  Switch: '<S346>/Switch'
     */
    if (rt_hypotd_snf(Code_Gen_Model_U.Steer_Joystick_X,
                      Code_Gen_Model_U.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_U.Steer_Joystick_Y;
      rtb_thetay = Code_Gen_Model_U.Steer_Joystick_X;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_thetay = 0.0;
    }

    /* End of Switch: '<S346>/Switch1' */

    /* Switch: '<S348>/Switch1' incorporates:
     *  Constant: '<S354>/Constant'
     *  Constant: '<S355>/Constant'
     *  Logic: '<S348>/AND'
     *  RelationalOperator: '<S354>/Compare'
     *  RelationalOperator: '<S355>/Compare'
     *  Switch: '<S348>/Switch2'
     *  UnitDelay: '<S348>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay1'
     */
    if ((rtb_thetay == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_thetay;
    }

    /* End of Switch: '<S348>/Switch1' */

    /* Merge: '<S9>/Merge1' incorporates:
     *  Trigonometry: '<S344>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S351>/Compare' incorporates:
     *  Constant: '<S351>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S347>/Constant'
     *  Constant: '<S347>/Constant1'
     *  Constant: '<S349>/Constant'
     *  Constant: '<S350>/Constant'
     *  Logic: '<S347>/Logical Operator'
     *  RelationalOperator: '<S349>/Compare'
     *  RelationalOperator: '<S350>/Compare'
     *  UnitDelay: '<S347>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_cp = 6.2831853071795862;
    } else {
      rtb_Switch1_cp = 0.0;
    }

    /* Switch: '<S347>/Switch1' incorporates:
     *  Constant: '<S347>/Constant2'
     *  Constant: '<S347>/Constant3'
     *  Constant: '<S352>/Constant'
     *  Constant: '<S353>/Constant'
     *  Logic: '<S347>/Logical Operator1'
     *  RelationalOperator: '<S352>/Compare'
     *  RelationalOperator: '<S353>/Compare'
     *  UnitDelay: '<S347>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S347>/Sum1' incorporates:
     *  Switch: '<S347>/Switch'
     *  Switch: '<S347>/Switch1'
     *  UnitDelay: '<S347>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_cp + rtb_Add_ik) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S357>/Switch1' incorporates:
     *  Constant: '<S362>/Constant'
     *  Constant: '<S363>/Constant'
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Logic: '<S357>/AND'
     *  RelationalOperator: '<S362>/Compare'
     *  RelationalOperator: '<S363>/Compare'
     *  Switch: '<S357>/Switch2'
     *  UnitDelay: '<S357>/Unit Delay'
     *  UnitDelay: '<S357>/Unit Delay1'
     */
    if ((Code_Gen_Model_U.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_U.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_lw;
      rtb_Switch2_j = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_ha = Code_Gen_Model_U.Drive_Joystick_Y;
      rtb_Switch2_j = Code_Gen_Model_U.Drive_Joystick_X;
    }

    /* End of Switch: '<S357>/Switch1' */

    /* Merge: '<S9>/Merge3' incorporates:
     *  Trigonometry: '<S345>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_ha,
      rtb_Switch2_j);

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S15>/Constant3'
     *  SignalConversion generated from: '<S15>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S344>/Constant'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Lookup_n-D: '<S344>/Modulation_Str_Y_Rel'
     *  Product: '<S344>/Product'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_U.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S15>/Constant9'
     *  SignalConversion generated from: '<S15>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Constant: '<S15>/Constant1'
     *  SignalConversion generated from: '<S15>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active = false;

    /* Switch: '<S356>/Switch1' incorporates:
     *  Constant: '<S356>/Constant'
     *  Constant: '<S356>/Constant1'
     *  Inport: '<Root>/Is_Boost_Trigger_Pulled'
     */
    if (Code_Gen_Model_U.Is_Boost_Trigger_Pulled != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S356>/Switch1' */

    /* Switch: '<S361>/Init' incorporates:
     *  UnitDelay: '<S361>/FixPt Unit Delay1'
     *  UnitDelay: '<S361>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay = rtb_Product_ku;
    } else {
      rtb_thetay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S361>/Init' */

    /* Sum: '<S359>/Sum1' */
    rtb_Product_ku -= rtb_thetay;

    /* Switch: '<S360>/Switch2' incorporates:
     *  Constant: '<S358>/Constant1'
     *  Constant: '<S358>/Constant3'
     *  RelationalOperator: '<S360>/LowerRelop1'
     *  RelationalOperator: '<S360>/UpperRelop'
     *  Switch: '<S360>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S360>/Switch' incorporates:
       *  Constant: '<S358>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S360>/Switch2' */

    /* Sum: '<S359>/Sum' */
    rtb_thetay += rtb_Product_ku;

    /* Product: '<S356>/Product' incorporates:
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Lookup_n-D: '<S345>/Modulation_Drv'
     *  Math: '<S345>/Magnitude'
     */
    rtb_Add_ih = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_U.Drive_Joystick_X,
      Code_Gen_Model_U.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_thetay;

    /* Saturate: '<S356>/Saturation' */
    if (rtb_Add_ih > Boost_Trigger_High_Speed) {
      /* Merge: '<S9>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (rtb_Add_ih < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S9>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S9>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Add_ih;
    }

    /* End of Saturate: '<S356>/Saturation' */

    /* SignalConversion generated from: '<S15>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S15>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Update for UnitDelay: '<S348>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_as;

    /* Update for UnitDelay: '<S347>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S357>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_lw = rtb_Switch1_ha;

    /* Update for UnitDelay: '<S357>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_j;

    /* Update for UnitDelay: '<S361>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S361>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S361>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_thetay;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* SignalConversion generated from: '<S16>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S9>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S16>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S16>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S9>/Merge1' incorporates:
     *  Constant: '<S16>/Constant1'
     *  SignalConversion generated from: '<S16>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S16>/Constant2'
     *  SignalConversion generated from: '<S16>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S9>/Merge3' incorporates:
     *  Constant: '<S16>/Constant3'
     *  SignalConversion generated from: '<S16>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S9>/Merge4' incorporates:
     *  Constant: '<S16>/Constant4'
     *  SignalConversion generated from: '<S16>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S16>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S16>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* SignalConversion generated from: '<S16>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S16>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S16>/Constant7'
     *  SignalConversion generated from: '<S16>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge9' incorporates:
     *  Constant: '<S16>/Constant9'
     *  SignalConversion generated from: '<S16>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S9>/Merge10' incorporates:
     *  Inport: '<Root>/Arm_Distance_Calibration_Active'
     *  SignalConversion generated from: '<S16>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active =
      Code_Gen_Model_U.Arm_Distance_Calibration_Active;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S36>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S8>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S8>/Tapped Delay1'
   *  Sum: '<S8>/Add'
   *  Sum: '<S8>/Add1'
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

  /* Delay: '<S36>/MemoryX' incorporates:
   *  Constant: '<S36>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_thetay = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S10>/Trigonometric Function1' */
  rtb_Switch2_c = sin(rtb_thetay);

  /* SignalConversion generated from: '<S10>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S10>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_0 = cos(rtb_thetay);
  rtb_Init_e = rtb_Switch2_c;

  /* SignalConversion generated from: '<S10>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S10>/Unary Minus'
   */
  rtb_Switch1_as = -rtb_Switch2_c;

  /* Sum: '<S90>/Diff' incorporates:
   *  UnitDelay: '<S90>/UD'
   *
   * Block description for '<S90>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S90>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_l = rtb_thetay - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S10>/Subtract2' incorporates:
   *  Constant: '<S10>/Constant3'
   *  Gain: '<S10>/Gain7'
   *  Math: '<S10>/Square'
   */
  rtb_Switch2_c = 1.0 - ((rtb_Switch2_l * rtb_Switch2_l) * 0.16666666666666666);

  /* Gain: '<S10>/Gain6' */
  rtb_Switch2_l *= 0.5;

  /* Product: '<S10>/Product7' incorporates:
   *  Constant: '<S10>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Switch1_cp = 0.0;
    rtb_Num_Segments = 0;
    for (s164_iter = 0; s164_iter < 8; s164_iter++) {
      rtb_Switch1_cp += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s164_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Switch1_cp;
  }

  /* End of Product: '<S10>/Product7' */

  /* Product: '<S10>/Product6' incorporates:
   *  SignalConversion generated from: '<S10>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S10>/Unary Minus2'
   */
  rtb_Switch1_ha = (rtb_Switch2_c * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Switch2_c = (rtb_Switch2_l * tmp[0]) + (rtb_Switch2_c * tmp[1]);

  /* Product: '<S10>/Product6' incorporates:
   *  Concatenate: '<S10>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch1_ha) + (rtb_Switch1_as * rtb_Switch2_c);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch1_ha) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Switch2_c);

  /* Outputs for Enabled SubSystem: '<S63>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S56>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S87>/Enable'
   */
  /* Logic: '<S8>/AND' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S8>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <= KF_Vision_Ambiguity_Thresh)
      && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S87>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S36>/C'
     *  Delay: '<S36>/MemoryX'
     *  Product: '<S89>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S87>/Sum' incorporates:
     *  Constant: '<S36>/D'
     *  Product: '<S87>/C[k]*xhat[k|k-1]'
     *  Product: '<S87>/D[k]*u[k]'
     *  Sum: '<S87>/Add1'
     */
    rtb_Switch2_c = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_c + rtb_Switch1_as);

    /* Product: '<S87>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S36>/C'
     *  Delay: '<S36>/MemoryX'
     *  Product: '<S89>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S87>/Sum' incorporates:
     *  Constant: '<S36>/D'
     *  Product: '<S87>/C[k]*xhat[k|k-1]'
     *  Product: '<S87>/D[k]*u[k]'
     *  Sum: '<S87>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch2_c + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S87>/Product3' incorporates:
     *  Constant: '<S37>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S89>/Add1' incorporates:
     *  Product: '<S89>/Product'
     */
    rtb_Switch2_c = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S87>/Product3' incorporates:
     *  Constant: '<S37>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S89>/Add1' incorporates:
     *  Product: '<S89>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S89>/Product2' incorporates:
     *  Constant: '<S37>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_c) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_c) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S87>/Product3' incorporates:
       *  Outport: '<S87>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S89>/Product2' incorporates:
       *  Outport: '<S89>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S8>/AND' */
  /* End of Outputs for SubSystem: '<S56>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S63>/Enabled Subsystem' */

  /* Sum: '<S63>/Add' incorporates:
   *  Delay: '<S36>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S10>/Accumulator2' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S10>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S8>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S8>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S8>/Switch' */

  /* DiscreteIntegrator: '<S10>/Accumulator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S10>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S8>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S8>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* If: '<S12>/If' incorporates:
   *  Constant: '<S189>/Constant'
   *  Logic: '<S189>/AND'
   *  MATLAB Function: '<S139>/Find closest index to curve'
   *  Product: '<S189>/Product'
   *  RelationalOperator: '<S189>/Relational Operator'
   *  RelationalOperator: '<S189>/Relational Operator1'
   *  Selector: '<S189>/Selector'
   *  Selector: '<S189>/Selector1'
   *  Selector: '<S190>/Selector'
   *  Sum: '<S189>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S142>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S145>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S147>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S142>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S12>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S137>/Action Port'
       */
      /* InitializeConditions for If: '<S12>/If' incorporates:
       *  UnitDelay: '<S137>/Unit Delay'
       *  UnitDelay: '<S138>/Unit Delay'
       *  UnitDelay: '<S140>/Unit Delay'
       *  UnitDelay: '<S140>/Unit Delay1'
       *  UnitDelay: '<S190>/Unit Delay'
       *  UnitDelay: '<S190>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S12>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S12>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S137>/Action Port'
     */
    /* Selector: '<S138>/Selector1' incorporates:
     *  Merge: '<S9>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S138>/Selector1' */

    /* Lookup_n-D: '<S137>/Capture Radius' incorporates:
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled7,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S138>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S138>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S142>/If' incorporates:
     *  RelationalOperator: '<S142>/ '
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S145>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S147>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S142>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S145>/Action Port'
       */
      /* InitializeConditions for If: '<S142>/If' incorporates:
       *  UnitDelay: '<S145>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S142>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S142>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S145>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S145>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S148>/Action Port'
       */
      /* If: '<S145>/If' incorporates:
       *  Selector: '<S138>/Selector1'
       *  Selector: '<S145>/Selector'
       *  Selector: '<S148>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S145>/Increment_If_Rectangle_Check' */

      /* Sum: '<S145>/Minus' incorporates:
       *  Concatenate: '<S138>/Matrix Concatenate2'
       *  Selector: '<S145>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S145>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S148>/Action Port'
       */
      /* If: '<S145>/If' incorporates:
       *  Selector: '<S138>/Selector1'
       *  Selector: '<S145>/Selector'
       *  Selector: '<S148>/Selector'
       *  Sum: '<S145>/Minus'
       */
      rtb_Switch1_ha = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S145>/Increment_If_Rectangle_Check' */

      /* Sum: '<S145>/Minus' incorporates:
       *  Concatenate: '<S138>/Matrix Concatenate2'
       *  Selector: '<S145>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_ha;

      /* Math: '<S145>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S145>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S145>/Switch' incorporates:
       *  Logic: '<S145>/AND'
       *  Logic: '<S145>/OR'
       *  RelationalOperator: '<S145>/Relational Operator'
       *  UnitDelay: '<S145>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S145>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S147>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S145>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S147>/Action Port'
         */
        /* If: '<S147>/If' incorporates:
         *  RelationalOperator: '<S147>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S147>/Is_Last_Point' incorporates:
           *  ActionPort: '<S150>/Action Port'
           */
          /* InitializeConditions for If: '<S147>/If' incorporates:
           *  UnitDelay: '<S150>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S147>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S147>/Is_Last_Point' incorporates:
           *  ActionPort: '<S150>/Action Port'
           */
          /* Switch: '<S150>/Switch' incorporates:
           *  Constant: '<S152>/Constant'
           *  Logic: '<S150>/OR'
           *  RelationalOperator: '<S152>/Compare'
           *  UnitDelay: '<S150>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S150>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S150>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S153>/Action Port'
             */
            /* Merge: '<S142>/Merge2' incorporates:
             *  Constant: '<S153>/Constant'
             *  SignalConversion generated from: '<S153>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S153>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S153>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S150>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S150>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S154>/Action Port'
             */
            /* Merge: '<S142>/Merge2' incorporates:
             *  Constant: '<S154>/Constant'
             *  SignalConversion generated from: '<S154>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S154>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S154>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S150>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S150>/If' */

          /* Merge: '<S142>/Merge4' incorporates:
           *  SignalConversion: '<S150>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S150>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S147>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S147>/Increment_Search' incorporates:
           *  ActionPort: '<S149>/Action Port'
           */
          /* Merge: '<S142>/Merge2' incorporates:
           *  Constant: '<S149>/Constant'
           *  SignalConversion generated from: '<S149>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S149>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S149>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S142>/Merge4' incorporates:
           *  Constant: '<S151>/FixPt Constant'
           *  SignalConversion: '<S149>/Signal Copy'
           *  Sum: '<S151>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S147>/Increment_Search' */
        }

        /* End of If: '<S147>/If' */
        /* End of Outputs for SubSystem: '<S145>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S145>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S148>/Action Port'
         */
        /* Sum: '<S155>/FixPt Sum1' incorporates:
         *  Constant: '<S155>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S148>/Selector1' incorporates:
         *  Selector: '<S138>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S156>/Subtract' incorporates:
         *  Selector: '<S148>/Selector1'
         *  Sum: '<S156>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Switch2_l;

        /* Selector: '<S148>/Selector1' incorporates:
         *  Selector: '<S138>/Selector1'
         */
        rtb_Switch2_j = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S156>/Subtract' incorporates:
         *  Selector: '<S148>/Selector1'
         *  Sum: '<S156>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Switch1_ha;

        /* Math: '<S156>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S156>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S156>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S156>/Product' incorporates:
         *  Product: '<S156>/Divide'
         *  UnaryMinus: '<S156>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S156>/Add1' incorporates:
         *  Sum: '<S156>/Add2'
         *  Sum: '<S156>/Minus'
         */
        rtb_Switch2_c = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S156>/Minus4' incorporates:
         *  Sum: '<S156>/Add2'
         *  Sum: '<S156>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S156>/Minus5' incorporates:
         *  Concatenate: '<S138>/Matrix Concatenate2'
         *  Sum: '<S156>/Minus'
         */
        rtb_Subtract1_lg = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S156>/Add' incorporates:
         *  Sum: '<S156>/Add2'
         *  Sum: '<S156>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S156>/Minus' incorporates:
         *  Sum: '<S156>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_as;

        /* DotProduct: '<S156>/Dot Product' incorporates:
         *  Concatenate: '<S138>/Matrix Concatenate2'
         *  Sum: '<S156>/Minus'
         *  Sum: '<S156>/Minus1'
         *  Sum: '<S156>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_c;

        /* DotProduct: '<S156>/Dot Product1' incorporates:
         *  Sum: '<S156>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S156>/Dot Product2' incorporates:
         *  Sum: '<S156>/Minus4'
         *  Sum: '<S156>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku * rtb_Subtract1_lg;

        /* DotProduct: '<S156>/Dot Product3' incorporates:
         *  Sum: '<S156>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S156>/Add1' incorporates:
         *  Sum: '<S156>/Add2'
         *  Sum: '<S156>/Minus'
         */
        rtb_Switch2_c = rtb_Switch2_j - rtb_Minus_n[1];

        /* Sum: '<S156>/Minus4' incorporates:
         *  Sum: '<S156>/Add2'
         *  Sum: '<S156>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_j + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S156>/Minus5' incorporates:
         *  Concatenate: '<S138>/Matrix Concatenate2'
         *  Sum: '<S156>/Minus'
         */
        rtb_Subtract1_lg = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S156>/Add' incorporates:
         *  Sum: '<S156>/Add2'
         *  Sum: '<S156>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_ha - rtb_Minus_n[1];

        /* Sum: '<S156>/Minus' incorporates:
         *  Sum: '<S156>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_as;

        /* DotProduct: '<S156>/Dot Product' incorporates:
         *  Concatenate: '<S138>/Matrix Concatenate2'
         *  Sum: '<S156>/Minus'
         *  Sum: '<S156>/Minus1'
         *  Sum: '<S156>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_c;

        /* RelationalOperator: '<S157>/Compare' incorporates:
         *  Constant: '<S157>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S156>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S156>/Dot Product1'
         *  Sum: '<S156>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_c * rtb_Switch2_c) +
          rtb_Switch2_l));

        /* DotProduct: '<S156>/Dot Product2' incorporates:
         *  Sum: '<S156>/Minus4'
         *  Sum: '<S156>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Subtract1_lg) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S142>/Merge4' incorporates:
         *  Constant: '<S158>/Constant'
         *  DataTypeConversion: '<S148>/Data Type Conversion'
         *  DotProduct: '<S156>/Dot Product3'
         *  Logic: '<S156>/AND'
         *  RelationalOperator: '<S156>/LessThanOrEqual1'
         *  RelationalOperator: '<S158>/Compare'
         *  Sum: '<S148>/Add'
         *  Sum: '<S156>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S142>/Merge2' incorporates:
         *  Constant: '<S148>/Constant2'
         *  SignalConversion generated from: '<S148>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S148>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S148>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S145>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S145>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S146>/Action Port'
         */
        /* Merge: '<S142>/Merge2' incorporates:
         *  Constant: '<S146>/Constant2'
         *  SignalConversion generated from: '<S146>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S146>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S146>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S142>/Merge4' incorporates:
         *  SignalConversion generated from: '<S146>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S145>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S142>/Merge1' incorporates:
       *  Constant: '<S145>/Constant'
       *  SignalConversion generated from: '<S145>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S145>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S142>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S142>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S144>/Action Port'
       */
      /* Merge: '<S142>/Merge1' incorporates:
       *  Constant: '<S144>/Constant'
       *  SignalConversion generated from: '<S144>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S142>/Merge2' incorporates:
       *  Constant: '<S144>/Constant1'
       *  SignalConversion generated from: '<S144>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S144>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S144>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S142>/Merge4' incorporates:
       *  SignalConversion generated from: '<S144>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S142>/Escape_Auto_Driving' */
    }

    /* End of If: '<S142>/If' */

    /* If: '<S138>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S138>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S143>/Action Port'
       */
      /* Bias: '<S159>/Add Constant' incorporates:
       *  Bias: '<S159>/Bias'
       *  Sum: '<S159>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S159>/Selector4' incorporates:
       *  Bias: '<S159>/Bias1'
       *  Constant: '<S161>/FixPt Constant'
       *  Sum: '<S161>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S159>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S159>/Selector' incorporates:
       *  Bias: '<S159>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S159>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S159>/Matrix Concatenate' incorporates:
       *  Gain: '<S162>/Gain'
       *  Gain: '<S163>/Gain'
       *  Selector: '<S138>/Selector1'
       *  Selector: '<S159>/Selector'
       *  Selector: '<S159>/Selector1'
       *  Selector: '<S159>/Selector2'
       *  Selector: '<S159>/Selector3'
       *  Sum: '<S162>/Subtract'
       *  Sum: '<S163>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S159>/Selector4' incorporates:
         *  Selector: '<S159>/Selector'
         */
        s164_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S162>/Subtract' incorporates:
         *  Bias: '<S159>/Add Constant1'
         *  Selector: '<S159>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s164_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S159>/Selector4' incorporates:
         *  Gain: '<S162>/Gain'
         *  Selector: '<S159>/Selector'
         *  Selector: '<S159>/Selector1'
         *  Sum: '<S162>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s164_iter) - 1];
        }
      }

      /* End of Concatenate: '<S159>/Matrix Concatenate' */

      /* Assignment: '<S159>/Assignment' incorporates:
       *  Selector: '<S159>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s164_iter = 0; s164_iter < rtb_Bias1_p; s164_iter++) {
          rtb_Assignment[s164_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s164_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S159>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S160>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S164>/While Iterator'
       */
      s164_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s164_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s164_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s164_iter] - rtb_Assignment[s164_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s164_iter];
        rtb_Switch2_c = rtb_Assignment[s164_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s164_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s164_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s164_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_c - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_ha = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Subtract1_lg = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_j = (rtb_Init_e - (2.0 * rtb_Switch1_ha)) +
            rtb_Subtract1_lg;
          rtb_Product_ku = rtb_Switch1_ha - rtb_Subtract1_lg;
          rtb_Subtract1_lg = (3.0 * rtb_Switch1_ha) - (2.0 * rtb_Subtract1_lg);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_j) +
            (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Subtract1_lg)) + rtb_Assignment[s164_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_j) +
            (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Subtract1_lg)) + rtb_Switch2_l;
          rtb_Switch2_j = ((3.0 * rtb_Switch1_ha) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_ha);
          rtb_Switch1_ha = (rtb_Init_e - rtb_Switch1_ha) * 6.0;
          rtb_Switch2_c = (((rtb_Reshapey[0] * rtb_Switch2_j) + (rtb_Minus_n[0] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] * rtb_Switch1_ha);
          rtb_Subtract1_lg = rtb_Switch2_c;
          rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_c;
          rtb_Switch2_c = (((rtb_Reshapey[1] * rtb_Switch2_j) + (rtb_Minus_n[1] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_ha);
          rtb_Switch1_ha = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch2_j = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch1_ha) + (rtb_Minus_n[1] * rtb_Switch2_j)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch1_ha) + (rtb_Minus_n[0] *
            rtb_Switch2_j)) * 0.5) + (rtb_Add2_f[0] * rtb_Init_e)) *
             rtb_Switch2_c)) / rt_powd_snf(rt_hypotd_snf(rtb_Subtract1_lg,
            rtb_Switch2_c), 3.0);
        }

        if (s164_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s164_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s164_iter);
        rtb_Num_Segments = s164_iter;
        s164_iter++;
      } while ((rtb_Init_e >= 4.0) && (s164_iter <= 3));

      /* End of Outputs for SubSystem: '<S160>/Sampling_Loop' */

      /* SignalConversion generated from: '<S143>/Position_and_Curvature' incorporates:
       *  Assignment: '<S164>/Assignment'
       *  Merge: '<S138>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S138>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S138>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S138>/If Action Subsystem' incorporates:
       *  ActionPort: '<S141>/Action Port'
       */
      /* Product: '<S141>/Product' incorporates:
       *  Selector: '<S138>/Selector'
       *  Selector: '<S138>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S141>/Product1' incorporates:
       *  Selector: '<S138>/Selector'
       *  Selector: '<S138>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S141>/Product' incorporates:
         *  Constant: '<S141>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S141>/Product1' incorporates:
         *  Constant: '<S141>/Constant2'
         *  Product: '<S141>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S141>/Assignment' incorporates:
       *  Concatenate: '<S141>/Matrix Concatenate'
       *  Merge: '<S138>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S141>/Assignment' */

      /* SignalConversion generated from: '<S141>/Num_Segments' incorporates:
       *  Constant: '<S141>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S138>/If Action Subsystem' */
    }

    /* End of If: '<S138>/If1' */

    /* Concatenate: '<S139>/Matrix Concatenate' incorporates:
     *  Merge: '<S138>/Merge'
     *  Selector: '<S139>/Selector'
     *  Selector: '<S139>/Selector1'
     *  Selector: '<S139>/Selector3'
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

    /* End of Concatenate: '<S139>/Matrix Concatenate' */

    /* MATLAB Function: '<S139>/Distance Along Curve' incorporates:
     *  Concatenate: '<S139>/Matrix Concatenate'
     *  Selector: '<S139>/Selector4'
     *  Selector: '<S139>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s164_iter = 0; s164_iter < 149; s164_iter++) {
      /* Outputs for Iterator SubSystem: '<S160>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S164>/While Iterator'
       */
      rtb_Assignment_d[s164_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s164_iter + 1] -
         rtb_MatrixConcatenate_o[s164_iter], rtb_MatrixConcatenate_o[s164_iter +
         151] - rtb_MatrixConcatenate_o[s164_iter + 150]) +
        rtb_Assignment_d[s164_iter];

      /* End of Outputs for SubSystem: '<S160>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S139>/Distance Along Curve' */

    /* MATLAB Function: '<S139>/Find closest index to curve' incorporates:
     *  Concatenate: '<S139>/Matrix Concatenate'
     *  Selector: '<S139>/Selector4'
     *  Selector: '<S139>/Selector5'
     *  Selector: '<S190>/Selector'
     */
    for (s164_iter = 0; s164_iter < 150; s164_iter++) {
      /* Outputs for Iterator SubSystem: '<S160>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S164>/While Iterator'
       */
      distance_from_robot[s164_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s164_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s164_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S160>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s164_iter = 1;
    } else {
      s164_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s164_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s164_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s164_iter - 1];
      for (rtb_Bias1_p = s164_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s164_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s164_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S190>/Selector' incorporates:
     *  Constant: '<S190>/Constant'
     *  MATLAB Function: '<S139>/Find closest index to curve'
     *  MinMax: '<S190>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s164_iter)) - 1];

    /* If: '<S190>/If' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S190>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S193>/Action Port'
       */
      /* SignalConversion generated from: '<S193>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S195>/FixPt Sum1' incorporates:
       *  Constant: '<S195>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S193>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S9>/Merge8'
       *  Selector: '<S193>/Selector11'
       *  Selector: '<S193>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S193>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S9>/Merge8'
       *  Selector: '<S193>/Selector1'
       *  Selector: '<S193>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S193>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S193>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S193>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S193>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S193>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S190>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S190>/Latch' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* SignalConversion generated from: '<S194>/In1' incorporates:
       *  UnitDelay: '<S190>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S194>/In2' incorporates:
       *  UnitDelay: '<S190>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S190>/Latch' */
    }

    /* End of If: '<S190>/If' */

    /* MinMax: '<S137>/Min' incorporates:
     *  Lookup_n-D: '<S137>/Lookahead Distance'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S139>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S189>/While Iterator'
     */
    s189_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s189_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S139>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S189>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s189_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s164_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s189_iter++;
    }

    /* End of Outputs for SubSystem: '<S139>/Find first index that meets distance target' */

    /* Switch: '<S192>/Switch' incorporates:
     *  Concatenate: '<S139>/Matrix Concatenate'
     *  Constant: '<S139>/Constant'
     *  Constant: '<S189>/Constant'
     *  Constant: '<S192>/Constant1'
     *  Constant: '<S192>/Constant2'
     *  Constant: '<S192>/Constant3'
     *  Logic: '<S189>/AND'
     *  MATLAB Function: '<S139>/Find closest index to curve'
     *  Math: '<S192>/Hypot'
     *  Merge: '<S9>/Merge8'
     *  MinMax: '<S192>/Min'
     *  MinMax: '<S192>/Min1'
     *  Product: '<S189>/Product'
     *  Product: '<S192>/Divide'
     *  Product: '<S192>/Product'
     *  Product: '<S192>/Product1'
     *  RelationalOperator: '<S139>/Relational Operator'
     *  RelationalOperator: '<S189>/Relational Operator'
     *  RelationalOperator: '<S189>/Relational Operator1'
     *  Selector: '<S139>/Selector10'
     *  Selector: '<S139>/Selector7'
     *  Selector: '<S139>/Selector8'
     *  Selector: '<S139>/Selector9'
     *  Selector: '<S189>/Selector'
     *  Selector: '<S189>/Selector1'
     *  Selector: '<S190>/Selector'
     *  Sqrt: '<S192>/Sqrt'
     *  Sum: '<S139>/Subtract'
     *  Sum: '<S189>/Add'
     *  Sum: '<S192>/Subtract'
     *  Sum: '<S192>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_UnitDelay1_gi = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch1_as *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_UnitDelay1_gi = fmin(rtb_Switch1_as * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S192>/Switch' */

    /* Logic: '<S140>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S140>/Switch1' incorporates:
     *  Switch: '<S140>/Switch'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S12>/Merge2' incorporates:
       *  Constant: '<S140>/Constant3'
       *  SignalConversion: '<S140>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S12>/Merge2' incorporates:
       *  SignalConversion: '<S140>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S140>/Switch1' */

    /* Merge: '<S12>/Merge' incorporates:
     *  SignalConversion: '<S140>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S139>/Selector6' incorporates:
     *  Concatenate: '<S139>/Matrix Concatenate'
     *  Selector: '<S139>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S139>/Selector2' incorporates:
     *  Concatenate: '<S139>/Matrix Concatenate'
     *  Selector: '<S139>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S140>/Switch2' incorporates:
     *  Sum: '<S196>/Subtract'
     *  Sum: '<S196>/Subtract1'
     *  Trigonometry: '<S196>/Atan2'
     *  UnitDelay: '<S140>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_ha = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_ha = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S140>/Switch2' */

    /* Merge: '<S12>/Merge3' incorporates:
     *  SignalConversion: '<S140>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_ha;

    /* Merge: '<S12>/Merge7' incorporates:
     *  SignalConversion: '<S137>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S140>/Constant2'
     *  SignalConversion generated from: '<S137>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S140>/Constant5'
     *  SignalConversion generated from: '<S137>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S12>/Merge5' incorporates:
     *  Constant: '<S140>/Constant6'
     *  SignalConversion generated from: '<S137>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S12>/Merge6' incorporates:
     *  Constant: '<S140>/Constant1'
     *  SignalConversion generated from: '<S137>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S190>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S140>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S140>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_ha;

    /* End of Outputs for SubSystem: '<S12>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S12>/Pass Through' incorporates:
     *  ActionPort: '<S136>/Action Port'
     */
    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S136>/Constant'
     *  SignalConversion generated from: '<S136>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S12>/Merge' incorporates:
     *  SignalConversion generated from: '<S136>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S12>/Merge1' incorporates:
     *  SignalConversion generated from: '<S136>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S12>/Merge2' incorporates:
     *  SignalConversion generated from: '<S136>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S12>/Merge3' incorporates:
     *  SignalConversion generated from: '<S136>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S12>/Merge4' incorporates:
     *  SignalConversion generated from: '<S136>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S12>/Merge5' incorporates:
     *  SignalConversion generated from: '<S136>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S12>/Merge6' incorporates:
     *  SignalConversion generated from: '<S136>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S12>/Pass Through' */
  }

  /* End of If: '<S12>/If' */

  /* Signum: '<S290>/Sign2' incorporates:
   *  UnitDelay: '<S290>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S290>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S290>/Product1' incorporates:
   *  Signum: '<S290>/Sign1'
   *  Signum: '<S290>/Sign2'
   */
  rtb_Switch1_cp *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch1_cp)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_cp, 256.0);
  }

  /* Switch: '<S290>/Switch' incorporates:
   *  Constant: '<S290>/Constant'
   *  Constant: '<S295>/Constant'
   *  Constant: '<S296>/Constant'
   *  Logic: '<S290>/or'
   *  Product: '<S290>/Product1'
   *  RelationalOperator: '<S295>/Compare'
   *  RelationalOperator: '<S296>/Compare'
   *  UnitDelay: '<S290>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S290>/Switch' */

  /* Switch: '<S301>/Init' incorporates:
   *  UnitDelay: '<S301>/FixPt Unit Delay1'
   *  UnitDelay: '<S301>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S301>/Init' */

  /* RelationalOperator: '<S297>/Compare' incorporates:
   *  Constant: '<S297>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S298>/Compare' incorporates:
   *  Constant: '<S298>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c > 0.0);

  /* Abs: '<S290>/Abs' incorporates:
   *  Sum: '<S290>/Subtract'
   *  UnitDelay: '<S290>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S290>/Switch5' incorporates:
   *  Constant: '<S290>/Constant1'
   *  Switch: '<S290>/Switch1'
   *  UnaryMinus: '<S290>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S290>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S290>/Constant4'
     *  Constant: '<S290>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S290>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S290>/Constant2'
     *  Constant: '<S290>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S290>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S290>/Lookup Table Dynamic'
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
    rtb_Switch1_cp = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S290>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S290>/Constant10'
     *  Constant: '<S290>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S290>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S290>/Constant7'
     *  Constant: '<S290>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S290>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S290>/Lookup Table Dynamic1'
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

    /* Switch: '<S290>/Switch3' incorporates:
     *  Constant: '<S290>/Constant1'
     *  Constant: '<S290>/Constant3'
     *  UnaryMinus: '<S290>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch1_cp = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_cp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S290>/Switch3' */
  }

  /* End of Switch: '<S290>/Switch5' */

  /* Product: '<S290>/Product' incorporates:
   *  Switch: '<S290>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_cp * rtb_Merge1;

  /* Sum: '<S299>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S300>/Switch2' incorporates:
   *  RelationalOperator: '<S300>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S290>/Switch2' incorporates:
     *  Constant: '<S290>/Constant1'
     *  Switch: '<S290>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S290>/Switch4' incorporates:
       *  Constant: '<S290>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S290>/Switch4' incorporates:
       *  Constant: '<S290>/Constant3'
       *  UnaryMinus: '<S290>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S290>/Switch2' */

    /* Product: '<S290>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S300>/Switch' incorporates:
     *  RelationalOperator: '<S300>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S300>/Switch' */
  }

  /* End of Switch: '<S300>/Switch2' */

  /* Sum: '<S299>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S293>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S317>/Constant3'
     *  Constant: '<S317>/Constant4'
     *  Math: '<S317>/Math Function'
     *  Sum: '<S293>/Subtract'
     *  Sum: '<S317>/Add1'
     *  Sum: '<S317>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_thetay) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S293>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S293>/Switch' */

  /* Sum: '<S313>/Add1' incorporates:
   *  Constant: '<S313>/Constant3'
   *  Constant: '<S313>/Constant4'
   *  Math: '<S313>/Math Function'
   *  Sum: '<S292>/Add'
   *  Sum: '<S312>/Sum'
   *  Sum: '<S313>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_thetay +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S315>/Sum1' incorporates:
   *  Constant: '<S312>/Constant2'
   *  Product: '<S315>/Product'
   *  Sum: '<S315>/Sum'
   *  UnitDelay: '<S315>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S312>/Product' incorporates:
   *  Constant: '<S312>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

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
  rtb_Add_ih = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S312>/Saturation' */
  if (rtb_Add_ih > Steering_Heading_Control_D_UL) {
    rtb_Add_ih = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_D_LL) {
    rtb_Add_ih = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S312>/Add' incorporates:
   *  Gain: '<S312>/Gain1'
   *  Saturate: '<S312>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_ih;

  /* Sum: '<S312>/Subtract' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S312>/Sum2' incorporates:
   *  Gain: '<S312>/Gain2'
   *  UnitDelay: '<S312>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S316>/Switch2' incorporates:
   *  RelationalOperator: '<S316>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S312>/Subtract1' incorporates:
     *  Constant: '<S312>/Constant1'
     */
    rtb_Switch1_ha = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S316>/Switch' incorporates:
     *  RelationalOperator: '<S316>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_ha) {
      rtb_uDLookupTable_l = rtb_Switch1_ha;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S316>/Switch' */
  }

  /* End of Switch: '<S316>/Switch2' */

  /* Saturate: '<S312>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S312>/Saturation1' */

  /* Sum: '<S312>/Add1' */
  rtb_Add_ih = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S312>/Saturation2' */
  if (rtb_Add_ih > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S312>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S312>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S312>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ih;
  }

  /* End of Saturate: '<S312>/Saturation2' */

  /* Switch: '<S292>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S303>/Switch' incorporates:
     *  Abs: '<S303>/Abs'
     *  Constant: '<S303>/Constant'
     *  Constant: '<S311>/Constant'
     *  RelationalOperator: '<S311>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S303>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S292>/Switch' */

  /* Signum: '<S302>/Sign2' incorporates:
   *  UnitDelay: '<S302>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S302>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S302>/Product1' incorporates:
   *  Signum: '<S302>/Sign1'
   *  Signum: '<S302>/Sign2'
   */
  rtb_Switch1_cp *= rtb_Add_ik;
  if (rtIsNaN(rtb_Switch1_cp)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_cp, 256.0);
  }

  /* Switch: '<S302>/Switch' incorporates:
   *  Constant: '<S302>/Constant'
   *  Constant: '<S304>/Constant'
   *  Constant: '<S305>/Constant'
   *  Logic: '<S302>/or'
   *  Product: '<S302>/Product1'
   *  RelationalOperator: '<S304>/Compare'
   *  RelationalOperator: '<S305>/Compare'
   *  UnitDelay: '<S302>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_j = 0.0;
  }

  /* End of Switch: '<S302>/Switch' */

  /* Switch: '<S310>/Init' incorporates:
   *  UnitDelay: '<S310>/FixPt Unit Delay1'
   *  UnitDelay: '<S310>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_j;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S310>/Init' */

  /* RelationalOperator: '<S306>/Compare' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_j == 0.0);

  /* RelationalOperator: '<S307>/Compare' incorporates:
   *  Constant: '<S307>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j > 0.0);

  /* Abs: '<S302>/Abs' incorporates:
   *  Sum: '<S302>/Subtract'
   *  UnitDelay: '<S302>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S302>/Switch5' incorporates:
   *  Constant: '<S302>/Constant1'
   *  Switch: '<S302>/Switch1'
   *  UnaryMinus: '<S302>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S302>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S302>/Constant4'
     *  Constant: '<S302>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S302>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S302>/Constant2'
     *  Constant: '<S302>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S302>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S302>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Product_ku, &rtb_Minus_n[0], 1U);
    rtb_Product_ku = rtb_LookupTableDynamic;
    rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S302>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S302>/Constant10'
     *  Constant: '<S302>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S302>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S302>/Constant7'
     *  Constant: '<S302>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S302>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S302>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Product_ku, &rtb_Minus_n[0], 1U);
    rtb_Product_ku = rtb_LookupTableDynamic1;

    /* Switch: '<S302>/Switch3' incorporates:
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S302>/Constant3'
     *  UnaryMinus: '<S302>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S302>/Switch3' */
  }

  /* End of Switch: '<S302>/Switch5' */

  /* Product: '<S302>/Product' incorporates:
   *  Switch: '<S302>/Switch1'
   */
  rtb_Switch1_ha = rtb_Switch1_cp * rtb_Product_ku;

  /* Sum: '<S308>/Sum1' */
  rtb_Switch2_j -= rtb_Init_e;

  /* Switch: '<S309>/Switch2' incorporates:
   *  RelationalOperator: '<S309>/LowerRelop1'
   */
  if (!(rtb_Switch2_j > rtb_Switch1_ha)) {
    /* Switch: '<S302>/Switch2' incorporates:
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S302>/Constant3'
     *  Switch: '<S302>/Switch4'
     *  UnaryMinus: '<S302>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S302>/Switch4' incorporates:
       *  Constant: '<S302>/Constant1'
       */
      rtb_Switch1_cp = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_cp = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S302>/Product2' incorporates:
     *  Switch: '<S302>/Switch2'
     */
    rtb_Switch1_ha = rtb_Switch1_cp * rtb_Product_ku;

    /* Switch: '<S309>/Switch' incorporates:
     *  RelationalOperator: '<S309>/UpperRelop'
     */
    if (!(rtb_Switch2_j < rtb_Switch1_ha)) {
      rtb_Switch1_ha = rtb_Switch2_j;
    }

    /* End of Switch: '<S309>/Switch' */
  }

  /* End of Switch: '<S309>/Switch2' */

  /* Sum: '<S308>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_ha + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S205>/Initialize Function' */
  /* Sum: '<S291>/Add' incorporates:
   *  Constant: '<S291>/Constant'
   *  Constant: '<S291>/Constant4'
   *  Constant: '<S291>/Constant5'
   *  Trigonometry: '<S291>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S205>/Initialize Function' */

  /* Fcn: '<S325>/r->x' incorporates:
   *  Fcn: '<S330>/r->x'
   *  Fcn: '<S335>/r->x'
   *  Fcn: '<S340>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S319>/Add' incorporates:
   *  Fcn: '<S325>/r->x'
   *  Fcn: '<S326>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S325>/theta->y' incorporates:
   *  Fcn: '<S330>/theta->y'
   *  Fcn: '<S335>/theta->y'
   *  Fcn: '<S340>/theta->y'
   */
  rtb_Switch1_ha = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S319>/Add' incorporates:
   *  Fcn: '<S325>/theta->y'
   *  Fcn: '<S326>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch1_ha;

  /* Sum: '<S320>/Add' incorporates:
   *  Fcn: '<S331>/r->x'
   *  Fcn: '<S331>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_ha;

  /* Sum: '<S321>/Add' incorporates:
   *  Fcn: '<S336>/r->x'
   *  Fcn: '<S336>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_ha;

  /* Sum: '<S322>/Add' incorporates:
   *  Fcn: '<S341>/r->x'
   *  Fcn: '<S341>/theta->y'
   */
  rtb_Subtract1_lg = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_ha;

  /* Fcn: '<S339>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Subtract1_lg, rtb_Init_e);

  /* RelationalOperator: '<S342>/Compare' incorporates:
   *  Constant: '<S342>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S338>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S338>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S338>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S338>/Switch1' */

  /* Fcn: '<S324>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S327>/Compare' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_l == 0.0);

  /* Switch: '<S323>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S323>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S323>/Switch1' */

  /* Fcn: '<S329>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S332>/Compare' incorporates:
   *  Constant: '<S332>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_c == 0.0);

  /* Switch: '<S328>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S328>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S328>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S328>/Switch1' */

  /* Fcn: '<S334>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S337>/Compare' incorporates:
   *  Constant: '<S337>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S333>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S333>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S333>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S333>/Switch1' */

  /* Product: '<S318>/Divide' incorporates:
   *  Abs: '<S318>/Abs'
   *  Abs: '<S318>/Abs1'
   *  Abs: '<S318>/Abs2'
   *  Abs: '<S318>/Abs3'
   *  Constant: '<S318>/Constant'
   *  MinMax: '<S318>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S318>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S338>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S338>/Switch' incorporates:
     *  Fcn: '<S339>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Subtract1_lg);
  }

  /* End of Switch: '<S338>/Switch' */

  /* Trigonometry: '<S282>/Cos4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Sin5' incorporates:
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S282>/Sin4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Cos5' incorporates:
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S282>/Subtract1' incorporates:
   *  Product: '<S282>/Product2'
   *  Product: '<S282>/Product3'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S282>/Subtract' incorporates:
   *  Product: '<S282>/Product'
   *  Product: '<S282>/Product1'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Switch1_ha = (rtb_MatrixConcatenate_b_idx_1 *
                    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S282>/Hypot' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Switch1_ha, rtb_Init_e);

  /* Switch: '<S282>/Switch' incorporates:
   *  Constant: '<S282>/Constant'
   *  Constant: '<S282>/Constant1'
   *  Constant: '<S283>/Constant'
   *  Product: '<S282>/Divide'
   *  Product: '<S282>/Divide1'
   *  RelationalOperator: '<S283>/Compare'
   *  Switch: '<S282>/Switch1'
   */
  if (rtb_Switch2_j > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch2_j;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_ha / rtb_Switch2_j;
  } else {
    rtb_Switch2_c = 0.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S281>/Subtract1' incorporates:
     *  Product: '<S281>/Product2'
     *  Product: '<S281>/Product3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S281>/Subtract' incorporates:
     *  Product: '<S281>/Product'
     *  Product: '<S281>/Product1'
     */
    rtb_Switch2_j = (rtb_MatrixConcatenate_b_idx_1 *
                     Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S281>/Hypot' */
    rtb_Switch1_ha = rt_hypotd_snf(rtb_Switch2_j, rtb_Init_e);

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Constant'
     *  Constant: '<S281>/Constant1'
     *  Constant: '<S284>/Constant'
     *  Product: '<S281>/Divide'
     *  Product: '<S281>/Divide1'
     *  RelationalOperator: '<S284>/Compare'
     *  Switch: '<S281>/Switch'
     */
    if (rtb_Switch1_ha > 1.0E-6) {
      rtb_Switch2_j /= rtb_Switch1_ha;
      rtb_Init_e /= rtb_Switch1_ha;
    } else {
      rtb_Switch2_j = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S281>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2_j);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S274>/Product2' incorporates:
   *  Constant: '<S274>/Constant'
   *  Switch: '<S271>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S269>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S269>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Sum: '<S273>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S204>/Product' incorporates:
   *  Abs: '<S269>/Abs'
   *  Abs: '<S272>/Abs'
   *  Constant: '<S275>/Constant'
   *  Constant: '<S285>/Constant3'
   *  Constant: '<S285>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
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
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled37, Code_Gen_Model_ConstP.pooled36, 1U);

  /* Gain: '<S270>/Gain' */
  rtb_Switch2_j = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S270>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S277>/Sum1' incorporates:
   *  Constant: '<S270>/Constant2'
   *  Product: '<S277>/Product'
   *  Sum: '<S277>/Sum'
   *  UnitDelay: '<S277>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S270>/Product' incorporates:
   *  Constant: '<S270>/Constant3'
   */
  rtb_Switch1_ha = rtb_Init_e * Drive_Motor_Control_D;

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
  rtb_Add_ih = rtb_Switch1_ha - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S270>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S270>/Add' incorporates:
   *  Gain: '<S270>/Gain1'
   *  Saturate: '<S270>/Saturation'
   */
  rtb_Product_ku = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch2_j) +
    rtb_Add_ih;

  /* Sum: '<S270>/Subtract' incorporates:
   *  Constant: '<S270>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Product_ku;

  /* Sum: '<S270>/Sum2' incorporates:
   *  Gain: '<S270>/Gain2'
   *  UnitDelay: '<S270>/Unit Delay'
   */
  rtb_Switch2_j = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S278>/Switch2' incorporates:
   *  Constant: '<S270>/Constant'
   *  RelationalOperator: '<S278>/LowerRelop1'
   *  Sum: '<S270>/Subtract'
   */
  if (!(rtb_Switch2_j > (1.0 - rtb_Product_ku))) {
    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S270>/Constant1'
     *  RelationalOperator: '<S278>/UpperRelop'
     *  Sum: '<S270>/Subtract1'
     */
    if (rtb_Switch2_j < (-1.0 - rtb_Product_ku)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Product_ku;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_j;
    }

    /* End of Switch: '<S278>/Switch' */
  }

  /* End of Switch: '<S278>/Switch2' */

  /* Saturate: '<S270>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch2_j = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch2_j = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S270>/Saturation1' */

  /* Sum: '<S270>/Add1' */
  rtb_Add_ih = rtb_Product_ku + rtb_Switch2_j;

  /* Saturate: '<S270>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S270>/Saturation2' */

  /* Sum: '<S286>/Add1' incorporates:
   *  Constant: '<S286>/Constant3'
   *  Constant: '<S286>/Constant4'
   *  Math: '<S286>/Math Function'
   *  Sum: '<S286>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S288>/Sum1' incorporates:
   *  Constant: '<S273>/Constant2'
   *  Product: '<S288>/Product'
   *  Sum: '<S288>/Sum'
   *  UnitDelay: '<S288>/Unit Delay1'
   */
  rtb_Product_ku = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S273>/Product' incorporates:
   *  Constant: '<S273>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Product_ku * Steering_Motor_Control_D;

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
  rtb_Add_ih = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S273>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S273>/Add' incorporates:
   *  Gain: '<S273>/Gain1'
   *  Saturate: '<S273>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_ih;

  /* Sum: '<S273>/Subtract' incorporates:
   *  Constant: '<S273>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S273>/Sum2' incorporates:
   *  Gain: '<S273>/Gain2'
   *  UnitDelay: '<S273>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S289>/Switch2' incorporates:
   *  Constant: '<S273>/Constant'
   *  RelationalOperator: '<S289>/LowerRelop1'
   *  Sum: '<S273>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S289>/Switch' incorporates:
     *  Constant: '<S273>/Constant1'
     *  RelationalOperator: '<S289>/UpperRelop'
     *  Sum: '<S273>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S289>/Switch' */
  }

  /* End of Switch: '<S289>/Switch2' */

  /* Saturate: '<S273>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S273>/Saturation1' */

  /* Sum: '<S273>/Add1' */
  rtb_Add_ih = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S273>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S273>/Saturation2' */

  /* Product: '<S318>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S323>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S323>/Switch' incorporates:
     *  Fcn: '<S324>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S323>/Switch' */

  /* Trigonometry: '<S219>/Cos4' incorporates:
   *  Switch: '<S208>/Angle_Switch'
   *  Trigonometry: '<S218>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S219>/Sin5' incorporates:
   *  UnaryMinus: '<S217>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S219>/Sin4' incorporates:
   *  Switch: '<S208>/Angle_Switch'
   *  Trigonometry: '<S218>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S219>/Cos5' incorporates:
   *  UnaryMinus: '<S217>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S219>/Subtract1' incorporates:
   *  Product: '<S219>/Product2'
   *  Product: '<S219>/Product3'
   *  Trigonometry: '<S219>/Cos4'
   *  Trigonometry: '<S219>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S219>/Subtract' incorporates:
   *  Product: '<S219>/Product'
   *  Product: '<S219>/Product1'
   *  Trigonometry: '<S219>/Cos4'
   *  Trigonometry: '<S219>/Sin4'
   */
  rtb_Subtract1_b = (rtb_MatrixConcatenate_b_idx_1 *
                     rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S219>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_b, rtb_Add_pw);

  /* Switch: '<S219>/Switch' incorporates:
   *  Constant: '<S219>/Constant'
   *  Constant: '<S219>/Constant1'
   *  Constant: '<S220>/Constant'
   *  Product: '<S219>/Divide'
   *  Product: '<S219>/Divide1'
   *  RelationalOperator: '<S220>/Compare'
   *  Switch: '<S219>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_b / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S219>/Switch' */

  /* Switch: '<S208>/Speed_Switch' incorporates:
   *  Abs: '<S208>/Abs'
   *  Constant: '<S216>/Constant'
   *  RelationalOperator: '<S216>/Compare'
   *  Switch: '<S208>/Angle_Switch'
   *  Trigonometry: '<S218>/Atan1'
   *  Trigonometry: '<S219>/Atan1'
   *  UnaryMinus: '<S208>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S218>/Subtract1' incorporates:
     *  Product: '<S218>/Product2'
     *  Product: '<S218>/Product3'
     *  UnaryMinus: '<S208>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S218>/Subtract' incorporates:
     *  Product: '<S218>/Product'
     *  Product: '<S218>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S218>/Hypot' */
    rtb_Subtract1_b = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S218>/Constant'
     *  Constant: '<S218>/Constant1'
     *  Constant: '<S221>/Constant'
     *  Product: '<S218>/Divide'
     *  Product: '<S218>/Divide1'
     *  RelationalOperator: '<S221>/Compare'
     *  Switch: '<S218>/Switch'
     */
    if (rtb_Subtract1_b > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_b;
      rtb_Add_pw /= rtb_Subtract1_b;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S218>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S211>/Product2' incorporates:
   *  Constant: '<S211>/Constant'
   *  Switch: '<S208>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S206>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S206>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S209>/Add' incorporates:
   *  Sum: '<S210>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S201>/Product' incorporates:
   *  Abs: '<S206>/Abs'
   *  Abs: '<S209>/Abs'
   *  Constant: '<S212>/Constant'
   *  Constant: '<S222>/Constant3'
   *  Constant: '<S222>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S206>/OR'
   *  Lookup_n-D: '<S209>/1-D Lookup Table'
   *  Math: '<S222>/Math Function'
   *  RelationalOperator: '<S206>/Equal1'
   *  RelationalOperator: '<S212>/Compare'
   *  Signum: '<S206>/Sign'
   *  Signum: '<S206>/Sign1'
   *  Sum: '<S209>/Add'
   *  Sum: '<S222>/Add1'
   *  Sum: '<S222>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled37, Code_Gen_Model_ConstP.pooled36, 1U);

  /* Gain: '<S207>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S207>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S214>/Sum1' incorporates:
   *  Constant: '<S207>/Constant2'
   *  Product: '<S214>/Product'
   *  Sum: '<S214>/Sum'
   *  UnitDelay: '<S214>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S207>/Product' incorporates:
   *  Constant: '<S207>/Constant3'
   */
  rtb_Subtract1_b = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S213>/Diff' incorporates:
   *  UnitDelay: '<S213>/UD'
   *
   * Block description for '<S213>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S213>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_b - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S207>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S207>/Add' incorporates:
   *  Gain: '<S207>/Gain1'
   *  Saturate: '<S207>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    rtb_Add_ih;

  /* Sum: '<S207>/Subtract' incorporates:
   *  Constant: '<S207>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S207>/Sum2' incorporates:
   *  Gain: '<S207>/Gain2'
   *  UnitDelay: '<S207>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S215>/Switch2' incorporates:
   *  Constant: '<S207>/Constant'
   *  RelationalOperator: '<S215>/LowerRelop1'
   *  Sum: '<S207>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S215>/Switch' incorporates:
     *  Constant: '<S207>/Constant1'
     *  RelationalOperator: '<S215>/UpperRelop'
     *  Sum: '<S207>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S215>/Switch' */
  }

  /* End of Switch: '<S215>/Switch2' */

  /* Saturate: '<S207>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S207>/Saturation1' */

  /* Sum: '<S207>/Add1' */
  rtb_Add_ih = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S207>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S207>/Saturation2' */

  /* Sum: '<S223>/Add1' incorporates:
   *  Constant: '<S223>/Constant3'
   *  Constant: '<S223>/Constant4'
   *  Math: '<S223>/Math Function'
   *  Sum: '<S223>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S225>/Sum1' incorporates:
   *  Constant: '<S210>/Constant2'
   *  Product: '<S225>/Product'
   *  Sum: '<S225>/Sum'
   *  UnitDelay: '<S225>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S210>/Product' incorporates:
   *  Constant: '<S210>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S224>/Diff' incorporates:
   *  UnitDelay: '<S224>/UD'
   *
   * Block description for '<S224>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S224>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S210>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S210>/Add' incorporates:
   *  Gain: '<S210>/Gain1'
   *  Saturate: '<S210>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Switch2_c) +
    rtb_Add_ih;

  /* Sum: '<S210>/Subtract' incorporates:
   *  Constant: '<S210>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S210>/Sum2' incorporates:
   *  Gain: '<S210>/Gain2'
   *  UnitDelay: '<S210>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S226>/Switch2' incorporates:
   *  Constant: '<S210>/Constant'
   *  RelationalOperator: '<S226>/LowerRelop1'
   *  Sum: '<S210>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S210>/Constant1'
     *  RelationalOperator: '<S226>/UpperRelop'
     *  Sum: '<S210>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S226>/Switch' */
  }

  /* End of Switch: '<S226>/Switch2' */

  /* Saturate: '<S210>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S210>/Saturation1' */

  /* Sum: '<S210>/Add1' */
  rtb_Add_ih = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S210>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S210>/Saturation2' */

  /* Product: '<S318>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S328>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S328>/Switch' incorporates:
     *  Fcn: '<S329>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S328>/Switch' */

  /* Trigonometry: '<S240>/Cos4' incorporates:
   *  Switch: '<S229>/Angle_Switch'
   *  Trigonometry: '<S239>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S240>/Sin5' incorporates:
   *  UnaryMinus: '<S238>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S240>/Sin4' incorporates:
   *  Switch: '<S229>/Angle_Switch'
   *  Trigonometry: '<S239>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S240>/Cos5' incorporates:
   *  UnaryMinus: '<S238>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S240>/Subtract1' incorporates:
   *  Product: '<S240>/Product2'
   *  Product: '<S240>/Product3'
   *  Trigonometry: '<S240>/Cos4'
   *  Trigonometry: '<S240>/Sin4'
   */
  rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S240>/Subtract' incorporates:
   *  Product: '<S240>/Product'
   *  Product: '<S240>/Product1'
   *  Trigonometry: '<S240>/Cos4'
   *  Trigonometry: '<S240>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_MatrixConcatenate_b_idx_1 *
    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 * rtb_uDLookupTable_l);

  /* Math: '<S240>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_g);

  /* Switch: '<S240>/Switch' incorporates:
   *  Constant: '<S240>/Constant'
   *  Constant: '<S240>/Constant1'
   *  Constant: '<S241>/Constant'
   *  Product: '<S240>/Divide'
   *  Product: '<S240>/Divide1'
   *  RelationalOperator: '<S241>/Compare'
   *  Switch: '<S240>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_g / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S240>/Switch' */

  /* Switch: '<S229>/Speed_Switch' incorporates:
   *  Abs: '<S229>/Abs'
   *  Constant: '<S237>/Constant'
   *  RelationalOperator: '<S237>/Compare'
   *  Switch: '<S229>/Angle_Switch'
   *  Trigonometry: '<S239>/Atan1'
   *  Trigonometry: '<S240>/Atan1'
   *  UnaryMinus: '<S229>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S239>/Subtract1' incorporates:
     *  Product: '<S239>/Product2'
     *  Product: '<S239>/Product3'
     *  UnaryMinus: '<S229>/Unary Minus'
     */
    rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S239>/Subtract' incorporates:
     *  Product: '<S239>/Product'
     *  Product: '<S239>/Product1'
     */
    rtb_Subtract1_k0 = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S239>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract1_k0,
      rtb_Subtract1_g);

    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S239>/Constant'
     *  Constant: '<S239>/Constant1'
     *  Constant: '<S242>/Constant'
     *  Product: '<S239>/Divide'
     *  Product: '<S239>/Divide1'
     *  RelationalOperator: '<S242>/Compare'
     *  Switch: '<S239>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract1_k0 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_g /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract1_k0 = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S239>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract1_k0);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S232>/Product2' incorporates:
   *  Constant: '<S232>/Constant'
   *  Switch: '<S229>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S227>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S227>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S230>/Add' incorporates:
   *  Sum: '<S231>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S202>/Product' incorporates:
   *  Abs: '<S227>/Abs'
   *  Abs: '<S230>/Abs'
   *  Constant: '<S233>/Constant'
   *  Constant: '<S243>/Constant3'
   *  Constant: '<S243>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S227>/OR'
   *  Lookup_n-D: '<S230>/1-D Lookup Table'
   *  Math: '<S243>/Math Function'
   *  RelationalOperator: '<S227>/Equal1'
   *  RelationalOperator: '<S233>/Compare'
   *  Signum: '<S227>/Sign'
   *  Signum: '<S227>/Sign1'
   *  Sum: '<S230>/Add'
   *  Sum: '<S243>/Add1'
   *  Sum: '<S243>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled37, Code_Gen_Model_ConstP.pooled36, 1U);

  /* Gain: '<S228>/Gain' */
  rtb_Subtract1_g = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S228>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S235>/Sum1' incorporates:
   *  Constant: '<S228>/Constant2'
   *  Product: '<S235>/Product'
   *  Sum: '<S235>/Sum'
   *  UnitDelay: '<S235>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Switch2_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S228>/Product' incorporates:
   *  Constant: '<S228>/Constant3'
   */
  rtb_Subtract1_k0 = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S234>/Diff' incorporates:
   *  UnitDelay: '<S234>/UD'
   *
   * Block description for '<S234>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S234>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_k0 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S228>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S228>/Add' incorporates:
   *  Gain: '<S228>/Gain1'
   *  Saturate: '<S228>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_g) +
    rtb_Add_ih;

  /* Sum: '<S228>/Subtract' incorporates:
   *  Constant: '<S228>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S228>/Sum2' incorporates:
   *  Gain: '<S228>/Gain2'
   *  UnitDelay: '<S228>/Unit Delay'
   */
  rtb_Subtract1_g = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S236>/Switch2' incorporates:
   *  Constant: '<S228>/Constant'
   *  RelationalOperator: '<S236>/LowerRelop1'
   *  Sum: '<S228>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S236>/Switch' incorporates:
     *  Constant: '<S228>/Constant1'
     *  RelationalOperator: '<S236>/UpperRelop'
     *  Sum: '<S228>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S236>/Switch' */
  }

  /* End of Switch: '<S236>/Switch2' */

  /* Saturate: '<S228>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S228>/Saturation1' */

  /* Sum: '<S228>/Add1' */
  rtb_Add_ih = rtb_Hypot_b + rtb_Subtract1_g;

  /* Saturate: '<S228>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S228>/Saturation2' */

  /* Sum: '<S244>/Add1' incorporates:
   *  Constant: '<S244>/Constant3'
   *  Constant: '<S244>/Constant4'
   *  Math: '<S244>/Math Function'
   *  Sum: '<S244>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S246>/Sum1' incorporates:
   *  Constant: '<S231>/Constant2'
   *  Product: '<S246>/Product'
   *  Sum: '<S246>/Sum'
   *  UnitDelay: '<S246>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S231>/Product' incorporates:
   *  Constant: '<S231>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S245>/Diff' incorporates:
   *  UnitDelay: '<S245>/UD'
   *
   * Block description for '<S245>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S245>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S231>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S231>/Add' incorporates:
   *  Gain: '<S231>/Gain1'
   *  Saturate: '<S231>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_ih;

  /* Sum: '<S231>/Subtract' incorporates:
   *  Constant: '<S231>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S231>/Sum2' incorporates:
   *  Gain: '<S231>/Gain2'
   *  UnitDelay: '<S231>/Unit Delay'
   */
  rtb_Subtract1_jx = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S247>/Switch2' incorporates:
   *  Constant: '<S231>/Constant'
   *  RelationalOperator: '<S247>/LowerRelop1'
   *  Sum: '<S231>/Subtract'
   */
  if (!(rtb_Subtract1_jx > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S247>/Switch' incorporates:
     *  Constant: '<S231>/Constant1'
     *  RelationalOperator: '<S247>/UpperRelop'
     *  Sum: '<S231>/Subtract1'
     */
    if (rtb_Subtract1_jx < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_jx;
    }

    /* End of Switch: '<S247>/Switch' */
  }

  /* End of Switch: '<S247>/Switch2' */

  /* Saturate: '<S231>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_jx = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S231>/Saturation1' */

  /* Sum: '<S231>/Add1' */
  rtb_Add_ih = rtb_Add_ik + rtb_Subtract1_jx;

  /* Saturate: '<S231>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S231>/Saturation2' */

  /* Product: '<S318>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S333>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S333>/Switch' incorporates:
     *  Fcn: '<S334>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S333>/Switch' */

  /* Trigonometry: '<S261>/Cos4' incorporates:
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S261>/Sin5' incorporates:
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S261>/Sin4' incorporates:
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Sin4'
   */
  rtb_Subtract1_cj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S261>/Cos5' incorporates:
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S261>/Subtract1' incorporates:
   *  Product: '<S261>/Product2'
   *  Product: '<S261>/Product3'
   *  Trigonometry: '<S261>/Cos4'
   *  Trigonometry: '<S261>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_cj * rtb_Switch2_c);

  /* Sum: '<S261>/Subtract' incorporates:
   *  Product: '<S261>/Product'
   *  Product: '<S261>/Product1'
   *  Trigonometry: '<S261>/Cos4'
   *  Trigonometry: '<S261>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ik * rtb_Switch2_c) - (rtb_Subtract1_cj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S261>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch2_l);

  /* Switch: '<S261>/Switch' incorporates:
   *  Constant: '<S261>/Constant'
   *  Constant: '<S261>/Constant1'
   *  Constant: '<S262>/Constant'
   *  Product: '<S261>/Divide'
   *  Product: '<S261>/Divide1'
   *  RelationalOperator: '<S262>/Compare'
   *  Switch: '<S261>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_l /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_c = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_cp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S260>/Subtract1' incorporates:
     *  Product: '<S260>/Product2'
     *  Product: '<S260>/Product3'
     *  UnaryMinus: '<S250>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S260>/Subtract' incorporates:
     *  Product: '<S260>/Product'
     *  Product: '<S260>/Product1'
     */
    rtb_Subtract1_cj = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S260>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_cj, rtb_Subtract_n);

    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S260>/Constant'
     *  Constant: '<S260>/Constant1'
     *  Constant: '<S263>/Constant'
     *  Product: '<S260>/Divide'
     *  Product: '<S260>/Divide1'
     *  RelationalOperator: '<S263>/Compare'
     *  Switch: '<S260>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_cj /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract_n / rtb_Add_ik;
    } else {
      rtb_Subtract1_cj = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S260>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_cj);
  } else {
    rtb_Switch1_cp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S253>/Product2' incorporates:
   *  Constant: '<S253>/Constant'
   *  Switch: '<S250>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_cp * 1530.1401357649195;

  /* Signum: '<S248>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_cp = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_cp = -1.0;
  } else {
    rtb_Switch1_cp = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S248>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S251>/Add' incorporates:
   *  Sum: '<S252>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S203>/Product' incorporates:
   *  Abs: '<S248>/Abs'
   *  Abs: '<S251>/Abs'
   *  Constant: '<S254>/Constant'
   *  Constant: '<S264>/Constant3'
   *  Constant: '<S264>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
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
  rtb_Switch2_l = (((real_T)((rtb_Switch1_cp == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled37, Code_Gen_Model_ConstP.pooled36, 1U);

  /* Gain: '<S249>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S249>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S256>/Sum1' incorporates:
   *  Constant: '<S249>/Constant2'
   *  Product: '<S256>/Product'
   *  Sum: '<S256>/Sum'
   *  UnitDelay: '<S256>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S249>/Product' incorporates:
   *  Constant: '<S249>/Constant3'
   */
  rtb_Subtract1_cj = rtb_Add_ik * Drive_Motor_Control_D;

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
  rtb_Add_ih = rtb_Subtract1_cj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S249>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S249>/Add' incorporates:
   *  Gain: '<S249>/Gain1'
   *  Saturate: '<S249>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_n) +
    rtb_Add_ih;

  /* Sum: '<S249>/Subtract' incorporates:
   *  Constant: '<S249>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_kv;

  /* Sum: '<S249>/Sum2' incorporates:
   *  Gain: '<S249>/Gain2'
   *  UnitDelay: '<S249>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S257>/Switch2' incorporates:
   *  Constant: '<S249>/Constant'
   *  RelationalOperator: '<S257>/LowerRelop1'
   *  Sum: '<S249>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S249>/Constant1'
     *  RelationalOperator: '<S257>/UpperRelop'
     *  Sum: '<S249>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_kv)) {
      rtb_Switch2_c = -1.0 - rtb_Add_kv;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S257>/Switch' */
  }

  /* End of Switch: '<S257>/Switch2' */

  /* Saturate: '<S249>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S249>/Saturation1' */

  /* Sum: '<S249>/Add1' */
  rtb_Add_ih = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S249>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S249>/Saturation2' */

  /* Sum: '<S265>/Add1' incorporates:
   *  Constant: '<S265>/Constant3'
   *  Constant: '<S265>/Constant4'
   *  Math: '<S265>/Math Function'
   *  Sum: '<S265>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S267>/Sum1' incorporates:
   *  Constant: '<S252>/Constant2'
   *  Product: '<S267>/Product'
   *  Sum: '<S267>/Sum'
   *  UnitDelay: '<S267>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S252>/Product' incorporates:
   *  Constant: '<S252>/Constant3'
   */
  rtb_Add_kv = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

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
  rtb_Add_ih = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S252>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S252>/Add' incorporates:
   *  Gain: '<S252>/Gain1'
   *  Saturate: '<S252>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Add_ih;

  /* Sum: '<S252>/Subtract' incorporates:
   *  Constant: '<S252>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_l;

  /* Sum: '<S252>/Sum2' incorporates:
   *  Gain: '<S252>/Gain2'
   *  UnitDelay: '<S252>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S268>/Switch2' incorporates:
   *  Constant: '<S252>/Constant'
   *  RelationalOperator: '<S268>/LowerRelop1'
   *  Sum: '<S252>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S252>/Constant1'
     *  RelationalOperator: '<S268>/UpperRelop'
     *  Sum: '<S252>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Switch2_c = -1.0 - rtb_Add_l;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S268>/Switch' */
  }

  /* End of Switch: '<S268>/Switch2' */

  /* Saturate: '<S252>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = rtb_Switch2_c;
  }

  /* End of Saturate: '<S252>/Saturation1' */

  /* Sum: '<S252>/Add1' */
  rtb_Add_ih = rtb_Add_l + rtb_Subtract1_f;

  /* Saturate: '<S252>/Saturation2' */
  if (rtb_Add_ih > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ih < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_ih;
  }

  /* End of Saturate: '<S252>/Saturation2' */

  /* Gain: '<S99>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S100>/Compare' incorporates:
   *  Constant: '<S100>/Constant'
   *  Constant: '<S99>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S99>/Switch1' incorporates:
   *  UnitDelay: '<S99>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S99>/Switch1' */

  /* Sum: '<S99>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

  /* Gain: '<S99>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S99>/Switch' incorporates:
   *  UnitDelay: '<S99>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S99>/Switch' */

  /* Sum: '<S99>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S17>/AND' incorporates:
   *  Constant: '<S17>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   *  Inport: '<Root>/Motor_Current_Back_Lower'
   *  RelationalOperator: '<S17>/Relational Operator'
   */
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_U.Arm_Distance_Calibration_Active)
    && (Code_Gen_Model_U.Motor_Current_Back_Lower >
        Dist_Reset_Motor_Current_Back_Lower));

  /* Switch: '<S17>/Switch2' incorporates:
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   */
  if (Code_Gen_Model_U.Arm_Distance_Calibration_Active) {
    /* Switch: '<S17>/Switch2' incorporates:
     *  Switch: '<S17>/Switch3'
     *  UnitDelay: '<S17>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Back_Lower_Arm_Cal_Success));
  } else {
    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S17>/Constant'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S17>/Switch2' */

  /* Product: '<S18>/Product' incorporates:
   *  Constant: '<S18>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Back_Upper *
    Dist_Per_Rev_Back_Upper;

  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   *  Inport: '<Root>/Motor_Current_Back_Upper'
   *  RelationalOperator: '<S18>/Relational Operator'
   */
  rtb_Is_Absolute_Translation =
    ((Code_Gen_Model_U.Arm_Distance_Calibration_Active) &&
     (Code_Gen_Model_U.Motor_Current_Back_Upper >
      Dist_Reset_Motor_Current_Back_Upper));

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S18>/Dist_Reset_Value'
   *  Sum: '<S18>/Sum'
   *  UnitDelay: '<S18>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Switch1_j = rtb_Switch2_l - Dist_Reset_Value_Back_Upper;
  } else {
    rtb_Switch1_j = Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Sum: '<S18>/Subtract1' */
  Code_Gen_Model_B.Back_Upper_Arm_Length = rtb_Switch2_l - rtb_Switch1_j;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Constant: '<S11>/Constant'
   */
  rtb_Switch1_cp = floor(TEST_Arm_State_Request);
  if ((rtIsNaN(rtb_Switch1_cp)) || (rtIsInf(rtb_Switch1_cp))) {
    rtb_Switch1_cp = 0.0;
  } else {
    rtb_Switch1_cp = fmod(rtb_Switch1_cp, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_Switch1_cp < 0.0) ? ((int32_T)
    ((uint8_T)(-((int8_T)((uint8_T)(-rtb_Switch1_cp)))))) : ((int32_T)((uint8_T)
    rtb_Switch1_cp)));

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* Switch: '<S11>/Switch4' incorporates:
   *  Constant: '<S11>/Constant25'
   *  Constant: '<S11>/Constant26'
   *  Lookup_n-D: '<S11>/1-D Lookup Table'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Switch2_c = TEST_Speaker_Height;
  } else {
    rtb_Switch2_c = look1_binlcpw(TEST_Speaker_Angle,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 6U);
  }

  /* End of Switch: '<S11>/Switch4' */

  /* Product: '<S17>/Product' incorporates:
   *  Constant: '<S17>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Back_Lower *
    Dist_Per_Rev_Back_Lower;

  /* Switch: '<S17>/Switch1' incorporates:
   *  Constant: '<S17>/Dist_Reset_Value'
   *  Sum: '<S17>/Sum'
   *  UnitDelay: '<S17>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_cp = rtb_Switch2_l - Dist_Reset_Value_Back_Lower;
  } else {
    rtb_Switch1_cp = Code_Gen_Model_DW.UnitDelay1_DSTATE_g;
  }

  /* End of Switch: '<S17>/Switch1' */

  /* Sum: '<S17>/Subtract1' */
  Code_Gen_Model_B.Back_Lower_Arm_Length = rtb_Switch2_l - rtb_Switch1_cp;

  /* Sum: '<S102>/Add' incorporates:
   *  Constant: '<S102>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 428.625;

  /* Sqrt: '<S102>/Sqrt' incorporates:
   *  Math: '<S102>/Math Function'
   *  Sum: '<S102>/Subtract'
   */
  rtb_Rotationmatrixfromlocalto_0 = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Front * Dist_Per_Rev_Front;

  /* Logic: '<S20>/AND' incorporates:
   *  Constant: '<S20>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   *  Inport: '<Root>/Motor_Current_Front'
   *  RelationalOperator: '<S20>/Relational Operator'
   */
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_U.Arm_Distance_Calibration_Active)
    && (Code_Gen_Model_U.Motor_Current_Front > Dist_Reset_Motor_Current_Front));

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_l = rtb_Switch2_l - Dist_Reset_Value_Front;
  } else {
    rtb_Switch1_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_l - rtb_Switch1_l;

  /* Sqrt: '<S105>/Sqrt' incorporates:
   *  Constant: '<S105>/Constant24'
   *  Math: '<S105>/Math Function'
   *  Sum: '<S105>/Add'
   *  Sum: '<S105>/Subtract'
   */
  rtb_Sqrt_f = sqrt(((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
                     (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
                    Code_Gen_Model_ConstB.MathFunction1_m);

  /* Product: '<S19>/Product' incorporates:
   *  Constant: '<S19>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Ball_Screw *
    Dist_Per_Rev_Ball_Screw;

  /* Logic: '<S19>/AND' incorporates:
   *  Constant: '<S19>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   *  Inport: '<Root>/Motor_Current_Ball_Screw'
   *  RelationalOperator: '<S19>/Relational Operator'
   */
  rtb_OR_ao = ((Code_Gen_Model_U.Arm_Distance_Calibration_Active) &&
               (Code_Gen_Model_U.Motor_Current_Ball_Screw >
                Dist_Reset_Motor_Current_Ball_Screw));

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S19>/Dist_Reset_Value'
   *  Sum: '<S19>/Sum'
   *  UnitDelay: '<S19>/Unit Delay1'
   */
  if (rtb_OR_ao) {
    rtb_Switch1_bu = rtb_Switch2_l - Dist_Reset_Value_Ball_Screw;
  } else {
    rtb_Switch1_bu = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* Sum: '<S19>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Switch2_l - rtb_Switch1_bu;

  /* MATLAB Function: '<S11>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant12'
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant22'
   *  Constant: '<S11>/Constant3'
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S11>/Constant5'
   *  Constant: '<S11>/Constant6'
   *  Constant: '<S11>/Constant7'
   *  Constant: '<S11>/Constant8'
   *  Constant: '<S11>/Constant9'
   */
  y = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (y - 64637.1475) / 318.51437958120511;
  y = sqrt(y - (d * d));
  rtb_Switch2_l = (((((((d * 0.996815278536125) + 158.75) - (y *
    -0.079745222282890008)) - 158.75) - 158.75) * (rtb_Sqrt_f / 300.0)) + 158.75)
    + 158.75;
  rtb_Sqrt_f = (((d * -0.079745222282890008) + 12.7) + (y * 0.996815278536125)) *
    (rtb_Sqrt_f / 300.0);
  d = sqrt(((rtb_Sqrt_f - 25.4) * (rtb_Sqrt_f - 25.4)) + (rtb_Switch2_l *
            rtb_Switch2_l));
  y = rtb_Rotationmatrixfromlocalto_0 * rtb_Rotationmatrixfromlocalto_0;
  d = (((d * d) - 24840.962499999998) + y) / (2.0 * d);
  y = sqrt(y - (d * d));
  alpha = atan((rtb_Sqrt_f - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(alpha);
  alpha = sin(alpha);
  rtb_Rotationmatrixfromlocalto_0 = (d * cos_alpha) - (y * alpha);
  d = ((d * alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((rtb_Sqrt_f - d) / (rtb_Switch2_l -
    rtb_Rotationmatrixfromlocalto_0)) - -0.16186298985390718;
  y = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  rtb_Sqrt_f = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  d = ((rtb_Rotationmatrixfromlocalto_0 - -50.027) - (42.875 * y)) + (-76.0 *
    cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Sqrt_f - 465.697) * (rtb_Sqrt_f - 465.697))
    + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Sqrt_f;

  /* Gain: '<S11>/Gain2' incorporates:
   *  MATLAB Function: '<S11>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch2_l;

  /* Chart: '<S11>/Chart_Shooter_Position' incorporates:
   *  Constant: '<S11>/Constant26'
   */
  if (Code_Gen_Model_DW.is_active_c5_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 1U;
    Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
    Code_Gen_Model_B.Desired_Angle = Stage_Angle;
    Code_Gen_Model_B.Desired_Height = Stage_Height;
    Code_Gen_Model_B.Desired_Gap = Stage_Gap;
  } else {
    switch (Code_Gen_Model_DW.is_c5_Code_Gen_Model) {
     case Code_Gen_Model_IN_Amp:
      Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_LoadShooter:
      Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_Speaker:
      Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Speaker_to_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Speaker_to_Stage:
      Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      if ((((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
            (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) &&
           (Code_Gen_Model_B.Meas_Gap < (Stage_Gap + Tol_Gap))) &&
          (Code_Gen_Model_B.Meas_Gap > (Stage_Gap - Tol_Gap))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
      }
      break;

     case Code_Gen_Model_IN_Stage:
      Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Speaker) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Stage_to_Speaker;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      } else if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Trap) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap;
        Code_Gen_Model_B.Desired_Angle = Trap_Angle;
        Code_Gen_Model_B.Desired_Height = Trap_Height;
        Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Stage_to_Speaker:
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Switch2_c + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Switch2_c - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_c;
        Code_Gen_Model_B.Desired_Gap = Speaker_Gap;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      if (rtb_DataTypeConversion_l == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;
    }
  }

  /* End of Chart: '<S11>/Chart_Shooter_Position' */

  /* Gain: '<S11>/Gain3' */
  rtb_Switch2_c = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S11>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S11>/Constant10'
   *  Constant: '<S11>/Constant11'
   *  Constant: '<S11>/Constant13'
   *  Constant: '<S11>/Constant14'
   *  Constant: '<S11>/Constant15'
   *  Constant: '<S11>/Constant21'
   */
  rtb_Switch2_l = cos(rtb_Switch2_c);
  rtb_Switch2_c = sin(rtb_Switch2_c);
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_l;
  rtb_Reshapey[0] = (sqrt((Code_Gen_Model_B.Desired_Gap *
    Code_Gen_Model_B.Desired_Gap) - ((Code_Gen_Model_B.Desired_Height - 465.697)
    * (Code_Gen_Model_B.Desired_Height - 465.697))) - 50.027) + ((rtb_Switch2_l *
    42.875) + ((-rtb_Switch2_c) * -76.0));
  rtb_Reshapey[1] = ((rtb_Switch2_c * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Switch2_l = sqrt(((rtb_Reshapey[1] - 25.4) * (rtb_Reshapey[1] - 25.4)) +
                       (rtb_Reshapey[0] * rtb_Reshapey[0]));
  rtb_Minus_n[0] = ((rtb_Rotationmatrixfromlocalto_0 * 155.54999999999998) +
                    ((-rtb_Switch2_c) * -25.4)) + rtb_Reshapey[0];
  rtb_Minus_n[1] = ((rtb_Switch2_c * 155.54999999999998) +
                    (rtb_Rotationmatrixfromlocalto_0 * -25.4)) + rtb_Reshapey[1];
  cos_alpha = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                   (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Rotationmatrixfromlocalto_0 = 158.75 - ((317.5 - rtb_Minus_n[0]) * (300.0 /
    cos_alpha));
  rtb_Switch2_c = ((300.0 / cos_alpha) * rtb_Minus_n[1]) - 12.7;
  rtb_Ball_Screw_Length = sqrt((rtb_Rotationmatrixfromlocalto_0 *
    rtb_Rotationmatrixfromlocalto_0) + (rtb_Switch2_c * rtb_Switch2_c));

  /* MATLAB Function: '<S11>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S11>/Constant23'
   *  Constant: '<S11>/Constant24'
   *  Constant: '<S11>/Constant28'
   *  Constant: '<S11>/Constant29'
   *  Constant: '<S11>/Constant30'
   *  Constant: '<S11>/Constant31'
   */
  rtb_Switch2_l = fmax((sqrt((rtb_Switch2_l * rtb_Switch2_l) - 645.16) - 428.625)
                       - 9.5, 9.5);
  rtb_Switch2_c = fmin(fmax(42.585, rtb_Switch2_l), 307.975);
  rtb_Switch2_l -= rtb_Switch2_c;
  if (rtb_Switch2_l >= 9.5) {
    d = fmin(rtb_Switch2_l, 455.61249999999995);
  } else {
    d = 9.5;
  }

  /* Switch: '<S129>/Init' incorporates:
   *  MATLAB Function: '<S11>/Back_AA_To_Extentions'
   *  UnitDelay: '<S129>/FixPt Unit Delay1'
   *  UnitDelay: '<S129>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S129>/Init' */

  /* Sum: '<S127>/Sum1' incorporates:
   *  MATLAB Function: '<S11>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S128>/Switch2' incorporates:
   *  Constant: '<S113>/Constant1'
   *  Constant: '<S113>/Constant3'
   *  RelationalOperator: '<S128>/LowerRelop1'
   *  RelationalOperator: '<S128>/UpperRelop'
   *  Switch: '<S128>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S113>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S128>/Switch2' */

  /* Sum: '<S127>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S108>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Sum: '<S117>/Sum1' incorporates:
   *  Constant: '<S108>/Constant2'
   *  Product: '<S117>/Product'
   *  Sum: '<S117>/Sum'
   *  UnitDelay: '<S117>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bm) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bm;

  /* Product: '<S108>/Product' incorporates:
   *  Constant: '<S108>/Constant3'
   */
  rtb_Sqrt_f = rtb_Rotationmatrixfromlocalto_0 * AA_Deriv_Gain;

  /* Switch: '<S11>/Switch1' incorporates:
   *  Logic: '<S11>/AND3'
   *  Logic: '<S11>/NOT'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
      (!Code_Gen_Model_B.Back_Lower_Arm_Cal_Success)) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant27'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Cal_Back_Upper_Arm_DC;
  } else {
    /* Sum: '<S116>/Diff' incorporates:
     *  UnitDelay: '<S116>/UD'
     *
     * Block description for '<S116>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S116>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = rtb_Sqrt_f - Code_Gen_Model_DW.UD_DSTATE_n;

    /* Saturate: '<S108>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S108>/Add' incorporates:
     *  Gain: '<S108>/Gain1'
     *  Saturate: '<S108>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S108>/Saturation2' */
    if (rtb_Add_ih > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S108>/Saturation2' */
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Switch: '<S126>/Init' incorporates:
   *  UnitDelay: '<S126>/FixPt Unit Delay1'
   *  UnitDelay: '<S126>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = d;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S126>/Init' */

  /* Sum: '<S124>/Sum1' */
  rtb_Switch2_c = d - rtb_Switch2_l;

  /* Switch: '<S125>/Switch2' incorporates:
   *  Constant: '<S112>/Constant1'
   *  Constant: '<S112>/Constant3'
   *  RelationalOperator: '<S125>/LowerRelop1'
   *  RelationalOperator: '<S125>/UpperRelop'
   *  Switch: '<S125>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S112>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S125>/Switch2' */

  /* Sum: '<S124>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S109>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Sum: '<S119>/Sum1' incorporates:
   *  Constant: '<S109>/Constant2'
   *  Product: '<S119>/Product'
   *  Sum: '<S119>/Sum'
   *  UnitDelay: '<S119>/Unit Delay1'
   */
  d = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_l) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l;

  /* Product: '<S109>/Product' incorporates:
   *  Constant: '<S109>/Constant3'
   */
  y = d * AA_Deriv_Gain;

  /* Switch: '<S18>/Switch2' incorporates:
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   */
  if (Code_Gen_Model_U.Arm_Distance_Calibration_Active) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Switch: '<S18>/Switch3'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = (rtb_Is_Absolute_Translation ||
      (Code_Gen_Model_B.Back_Upper_Arm_Cal_Success));
  } else {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S18>/Constant'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S18>/Switch2' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Logic: '<S11>/AND2'
   *  Logic: '<S11>/NOT1'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
      (!Code_Gen_Model_B.Back_Upper_Arm_Cal_Success)) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant32'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Cal_Back_Lower_Arm_DC;
  } else {
    /* Sum: '<S118>/Diff' incorporates:
     *  UnitDelay: '<S118>/UD'
     *
     * Block description for '<S118>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S118>/UD':
     *
     *  Store in Global RAM
     */
    rtb_Add_ih = y - Code_Gen_Model_DW.UD_DSTATE_bi;

    /* Saturate: '<S109>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S109>/Add' incorporates:
     *  Gain: '<S109>/Gain1'
     *  Saturate: '<S109>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S109>/Saturation2' */
    if (rtb_Add_ih > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S109>/Saturation2' */
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S104>/Subtract1' incorporates:
   *  Constant: '<S104>/Constant24'
   *  MATLAB Function: '<S11>/Get_Arm_Lengths'
   *  Math: '<S104>/Math Function'
   *  Sqrt: '<S104>/Sqrt'
   *  Sum: '<S104>/Subtract'
   */
  rtb_Switch2_l = sqrt((cos_alpha * cos_alpha) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S104>/Saturation' */
  if (rtb_Switch2_l > 455.61249999999995) {
    rtb_Switch2_l = 455.61249999999995;
  } else if (rtb_Switch2_l < 9.5) {
    rtb_Switch2_l = 9.5;
  }

  /* End of Saturate: '<S104>/Saturation' */

  /* Switch: '<S135>/Init' incorporates:
   *  UnitDelay: '<S135>/FixPt Unit Delay1'
   *  UnitDelay: '<S135>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S135>/Init' */

  /* Sum: '<S133>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S134>/Switch2' incorporates:
   *  Constant: '<S115>/Constant1'
   *  Constant: '<S115>/Constant3'
   *  RelationalOperator: '<S134>/LowerRelop1'
   *  RelationalOperator: '<S134>/UpperRelop'
   *  Switch: '<S134>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S134>/Switch' incorporates:
     *  Constant: '<S115>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S134>/Switch2' */

  /* Sum: '<S133>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S110>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Sum: '<S121>/Sum1' incorporates:
   *  Constant: '<S110>/Constant2'
   *  Product: '<S121>/Product'
   *  Sum: '<S121>/Sum'
   *  UnitDelay: '<S121>/Unit Delay1'
   */
  cos_alpha = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bg) *
               AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bg;

  /* Product: '<S110>/Product' incorporates:
   *  Constant: '<S110>/Constant3'
   */
  alpha = cos_alpha * AA_Deriv_Gain;

  /* Switch: '<S20>/Switch2' incorporates:
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   */
  if (Code_Gen_Model_U.Arm_Distance_Calibration_Active) {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Switch: '<S20>/Switch3'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Front_Arm_Cal_Success));
  } else {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Switch: '<S11>/Switch2' incorporates:
   *  Logic: '<S11>/AND1'
   *  Logic: '<S11>/NOT2'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
      (!Code_Gen_Model_B.Front_Arm_Cal_Success)) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant33'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Cal_Front_Arm_DC;
  } else {
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
    rtb_Add_ih = alpha - Code_Gen_Model_DW.UD_DSTATE_g;

    /* Saturate: '<S110>/Saturation' */
    if (rtb_Add_ih > AA_Deriv_UL) {
      rtb_Add_ih = AA_Deriv_UL;
    } else if (rtb_Add_ih < AA_Deriv_LL) {
      rtb_Add_ih = AA_Deriv_LL;
    }

    /* Sum: '<S110>/Add' incorporates:
     *  Gain: '<S110>/Gain1'
     *  Saturate: '<S110>/Saturation'
     */
    rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S110>/Saturation2' */
    if (rtb_Add_ih > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_ih < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S110>/Saturation2' */
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Switch: '<S132>/Init' incorporates:
   *  UnitDelay: '<S132>/FixPt Unit Delay1'
   *  UnitDelay: '<S132>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = rtb_Ball_Screw_Length;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S132>/Init' */

  /* Sum: '<S130>/Sum1' */
  rtb_Switch2_c = rtb_Ball_Screw_Length - rtb_Switch2_l;

  /* Switch: '<S131>/Switch2' incorporates:
   *  Constant: '<S114>/Constant1'
   *  Constant: '<S114>/Constant3'
   *  RelationalOperator: '<S131>/LowerRelop1'
   *  RelationalOperator: '<S131>/UpperRelop'
   *  Switch: '<S131>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S114>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S131>/Switch2' */

  /* Sum: '<S130>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S111>/Sum' */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S123>/Sum1' incorporates:
   *  Constant: '<S111>/Constant2'
   *  Product: '<S123>/Product'
   *  Sum: '<S123>/Sum'
   *  UnitDelay: '<S123>/Unit Delay1'
   */
  rtb_Switch2_l = ((rtb_Ball_Screw_Length -
                    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S111>/Product' incorporates:
   *  Constant: '<S111>/Constant3'
   */
  rtb_Switch2_c = rtb_Switch2_l * BS_Deriv_Gain;

  /* Switch: '<S19>/Switch2' incorporates:
   *  Inport: '<Root>/Arm_Distance_Calibration_Active'
   */
  if (Code_Gen_Model_U.Arm_Distance_Calibration_Active) {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Switch: '<S19>/Switch3'
     *  UnitDelay: '<S19>/Unit Delay2'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = (rtb_OR_ao ||
      (Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success));
  } else {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Switch: '<S11>/Switch3' incorporates:
   *  Logic: '<S11>/AND'
   *  Logic: '<S11>/NOT3'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
      (!Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success)) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant34'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Cal_Ball_Screw_Arm_DC;
  } else {
    /* Sum: '<S122>/Diff' incorporates:
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
    rtb_Add_ih = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S111>/Saturation' */
    if (rtb_Add_ih > BS_Deriv_UL) {
      rtb_Add_ih = BS_Deriv_UL;
    } else if (rtb_Add_ih < BS_Deriv_LL) {
      rtb_Add_ih = BS_Deriv_LL;
    }

    /* Sum: '<S111>/Add' incorporates:
     *  Gain: '<S111>/Gain1'
     *  Saturate: '<S111>/Saturation'
     */
    rtb_Add_ih += BS_Prop_Gain * rtb_Ball_Screw_Length;

    /* Saturate: '<S111>/Saturation2' */
    if (rtb_Add_ih > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (rtb_Add_ih < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S111>/Saturation2' */
  }

  /* End of Switch: '<S11>/Switch3' */

  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S6>/Constant'
   */
  rtb_Is_Absolute_Translation = (TEST_Intake_Shooter_State_Request == 1.0);

  /* Lookup_n-D: '<S6>/1-D Lookup Table' incorporates:
   *  Constant: '<S6>/Constant6'
   */
  rtb_Ball_Screw_Length = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S6>/Constant'
   */
  rtb_Is_Absolute_Steering = (TEST_Intake_Shooter_State_Request == 2.0);

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S6>/Constant'
   */
  rtb_OR_ao = (TEST_Intake_Shooter_State_Request == 4.0);

  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S6>/Constant'
   */
  rtb_Switch_b1 = (TEST_Intake_Shooter_State_Request == 3.0);

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S6>/Constant'
   */
  rtb_Compare_o = (TEST_Intake_Shooter_State_Request == 5.0);

  /* Chart: '<S6>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S27>/FixPt Relational Operator'
   *  RelationalOperator: '<S28>/FixPt Relational Operator'
   *  RelationalOperator: '<S29>/FixPt Relational Operator'
   *  RelationalOperator: '<S30>/FixPt Relational Operator'
   *  RelationalOperator: '<S31>/FixPt Relational Operator'
   *  UnitDelay: '<S27>/Delay Input1'
   *  UnitDelay: '<S28>/Delay Input1'
   *  UnitDelay: '<S29>/Delay Input1'
   *  UnitDelay: '<S30>/Delay Input1'
   *  UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S31>/Delay Input1':
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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Ball_Screw_Length;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Ball_Screw_Length;
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
      if (((int32_T)rtb_Switch_b1) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_h)) {
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
      } else if (((int32_T)rtb_Is_Absolute_Translation) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (((int32_T)rtb_OR_ao) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_o)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_Compare_o) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_e)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Ball_Screw_Length;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Ball_Screw_Length;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/Chart_Intake_and_Shooter' */

  /* Sum: '<S32>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S32>/Add' incorporates:
   *  Gain: '<S32>/Gain'
   *  Gain: '<S32>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Ball_Screw_Length);

  /* Switch: '<S32>/Switch' incorporates:
   *  Constant: '<S32>/Constant2'
   *  Switch: '<S6>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S32>/Sum2' incorporates:
     *  Gain: '<S32>/Gain2'
     *  UnitDelay: '<S32>/Unit Delay'
     */
    rtb_Ball_Screw_Length = (Shooter_Motor_Control_I * rtb_Ball_Screw_Length) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S32>/Subtract' incorporates:
     *  Constant: '<S32>/Constant'
     */
    rtb_Switch2_n = 1.0 - rtb_Add_ih;

    /* Switch: '<S34>/Switch2' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S34>/LowerRelop1'
     *  Sum: '<S32>/Subtract'
     */
    if (!(rtb_Ball_Screw_Length > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S32>/Subtract1' incorporates:
       *  Constant: '<S32>/Constant1'
       */
      rtb_Switch2_n = -1.0 - rtb_Add_ih;

      /* Switch: '<S34>/Switch' incorporates:
       *  Constant: '<S32>/Constant1'
       *  RelationalOperator: '<S34>/UpperRelop'
       *  Sum: '<S32>/Subtract1'
       */
      if (!(rtb_Ball_Screw_Length < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_n = rtb_Ball_Screw_Length;
      }

      /* End of Switch: '<S34>/Switch' */
    }

    /* End of Switch: '<S34>/Switch2' */

    /* Saturate: '<S32>/Saturation1' */
    if (rtb_Switch2_n > Shooter_Motor_Control_I_UL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_n < Shooter_Motor_Control_I_LL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Ball_Screw_Length = rtb_Switch2_n;
    }

    /* End of Saturate: '<S32>/Saturation1' */

    /* Sum: '<S32>/Add1' */
    rtb_Add_ih += rtb_Ball_Screw_Length;

    /* Saturate: '<S32>/Saturation2' */
    if (rtb_Add_ih > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_ih < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S32>/Saturation2' */
  } else {
    rtb_Ball_Screw_Length = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S32>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S32>/Switch' */

  /* Sum: '<S33>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_n = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S33>/Add' incorporates:
   *  Gain: '<S33>/Gain'
   *  Gain: '<S33>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_n);

  /* Switch: '<S33>/Switch' incorporates:
   *  Constant: '<S33>/Constant2'
   *  Switch: '<S6>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S33>/Sum2' incorporates:
     *  Gain: '<S33>/Gain2'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_Switch2_n = (Shooter_Motor_Control_I * rtb_Switch2_n) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S33>/Subtract' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_Switch2_m4 = 1.0 - rtb_Add_ih;

    /* Switch: '<S35>/Switch2' incorporates:
     *  Constant: '<S33>/Constant'
     *  RelationalOperator: '<S35>/LowerRelop1'
     *  Sum: '<S33>/Subtract'
     */
    if (!(rtb_Switch2_n > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S33>/Subtract1' incorporates:
       *  Constant: '<S33>/Constant1'
       */
      rtb_Switch2_m4 = -1.0 - rtb_Add_ih;

      /* Switch: '<S35>/Switch' incorporates:
       *  Constant: '<S33>/Constant1'
       *  RelationalOperator: '<S35>/UpperRelop'
       *  Sum: '<S33>/Subtract1'
       */
      if (!(rtb_Switch2_n < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_m4 = rtb_Switch2_n;
      }

      /* End of Switch: '<S35>/Switch' */
    }

    /* End of Switch: '<S35>/Switch2' */

    /* Saturate: '<S33>/Saturation1' */
    if (rtb_Switch2_m4 > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_m4 < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_n = rtb_Switch2_m4;
    }

    /* End of Saturate: '<S33>/Saturation1' */

    /* Sum: '<S33>/Add1' */
    rtb_Add_ih += rtb_Switch2_n;

    /* Saturate: '<S33>/Saturation2' */
    if (rtb_Add_ih > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_ih < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Add_ih;
    }

    /* End of Saturate: '<S33>/Saturation2' */
  } else {
    rtb_Switch2_n = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S33>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S33>/Switch' */

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant4'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' */
    Code_Gen_Model_Y.Shooter_Servo_Position = Code_Gen_Model_B.Shooter_Servo_Pos;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Update for UnitDelay: '<S91>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S91>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S92>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S93>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S94>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' incorporates:
     *  Bias: '<S164>/Bias'
     *  Merge: '<S138>/Merge1'
     *  S-Function (sfix_udelay): '<S8>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' incorporates:
     *  Bias: '<S164>/Bias'
     *  Merge: '<S138>/Merge1'
     *  S-Function (sfix_udelay): '<S8>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S36>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S56>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S36>/A'
   *  Delay: '<S36>/MemoryX'
   */
  rtb_Add_ih = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_m4 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S36>/MemoryX' incorporates:
   *  Constant: '<S36>/B'
   *  Product: '<S56>/A[k]*xhat[k|k-1]'
   *  Product: '<S56>/B[k]*u[k]'
   *  Sum: '<S56>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Add_ih) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_m4) + Code_Gen_Model_B.Product3
    [1];

  /* Update for UnitDelay: '<S90>/UD'
   *
   * Block description for '<S90>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_thetay;

  /* Update for DiscreteIntegrator: '<S10>/Accumulator2' incorporates:
   *  Constant: '<S10>/Constant'
   *  DiscreteIntegrator: '<S10>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S10>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S10>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S301>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S301>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S315>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S314>/UD'
   *
   * Block description for '<S314>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S312>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S310>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S310>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S277>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch1_ha;

  /* Update for UnitDelay: '<S270>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2_j;

  /* Update for UnitDelay: '<S288>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Product_ku;

  /* Update for UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S273>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S214>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S213>/UD'
   *
   * Block description for '<S213>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S207>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S225>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S224>/UD'
   *
   * Block description for '<S224>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S210>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S235>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S234>/UD'
   *
   * Block description for '<S234>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_k0;

  /* Update for UnitDelay: '<S228>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S246>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S245>/UD'
   *
   * Block description for '<S245>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S231>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_jx;

  /* Update for UnitDelay: '<S256>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_cj;

  /* Update for UnitDelay: '<S249>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S267>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S252>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S99>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

  /* Update for UnitDelay: '<S99>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S18>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_j;

  /* Update for UnitDelay: '<S17>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_cp;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_l;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_bu;

  /* Update for UnitDelay: '<S129>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S129>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S117>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bm = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S116>/UD'
   *
   * Block description for '<S116>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_n = rtb_Sqrt_f;

  /* Update for UnitDelay: '<S126>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S126>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S119>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_l = d;

  /* Update for UnitDelay: '<S118>/UD'
   *
   * Block description for '<S118>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_bi = y;

  /* Update for UnitDelay: '<S135>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S135>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S121>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bg = cos_alpha;

  /* Update for UnitDelay: '<S120>/UD'
   *
   * Block description for '<S120>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_g = alpha;

  /* Update for UnitDelay: '<S132>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S132>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S123>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S122>/UD'
   *
   * Block description for '<S122>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S28>/Delay Input1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S30>/Delay Input1'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_OR_ao;

  /* Update for UnitDelay: '<S29>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Switch_b1;

  /* Update for UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Compare_o;

  /* Update for UnitDelay: '<S32>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Ball_Screw_Length;

  /* Update for UnitDelay: '<S33>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch2_n;
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

    /* Start for If: '<S12>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S36>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S301>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S310>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S129>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S126>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S135>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S132>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S361>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S12>/Spline Path Following Enabled' */
    /* Start for If: '<S142>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S138>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S142>/Robot_Index_Is_Valid' */
    /* Start for If: '<S145>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S145>/Circle_Check_Valid' */
    /* Start for If: '<S147>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S145>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S142>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S12>/Spline Path Following Enabled' */
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

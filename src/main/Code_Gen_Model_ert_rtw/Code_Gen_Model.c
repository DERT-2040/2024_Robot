/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.70
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Feb 17 21:34:04 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include "Code_Gen_Model_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
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
                                        *   '<S109>/Constant2'
                                        *   '<S110>/Constant2'
                                        *   '<S111>/Constant2'
                                        */
real_T AA_Deriv_Gain = 0.0;            /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S109>/Constant3'
                                        *   '<S110>/Constant3'
                                        *   '<S111>/Constant3'
                                        */
real_T AA_Deriv_LL = -0.5;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S109>/Saturation'
                                        *   '<S110>/Saturation'
                                        *   '<S111>/Saturation'
                                        */
real_T AA_Deriv_UL = 0.5;              /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S109>/Saturation'
                                        *   '<S110>/Saturation'
                                        *   '<S111>/Saturation'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S109>/Gain1'
                                        *   '<S110>/Gain1'
                                        *   '<S111>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S109>/Saturation2'
                                        *   '<S110>/Saturation2'
                                        *   '<S111>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S109>/Saturation2'
                                        *   '<S110>/Saturation2'
                                        *   '<S111>/Saturation2'
                                        */
real_T Amp_Angle = -45.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 279.4;                /* Variable: Amp_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 762.0;             /* Variable: Amp_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S112>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S112>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S112>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S112>/Saturation'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S112>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S112>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S112>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S343>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S341>/Constant'
                                         *   '<S341>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S343>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S341>/Constant1'
                                        */
real_T Dist_Per_Rev_Back_Lower = 6.9822;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S17>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 6.9822;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S18>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.52917;/* Variable: Dist_Per_Rev_Ball_Screw
                                          * Referenced by: '<S20>/Rev_2_Dist'
                                          */
real_T Dist_Per_Rev_Front = 6.9822;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S19>/Rev_2_Dist'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S276>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S192>/Constant3'
                                        *   '<S213>/Constant3'
                                        *   '<S234>/Constant3'
                                        *   '<S255>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S192>/Constant2'
                                   *   '<S213>/Constant2'
                                   *   '<S234>/Constant2'
                                   *   '<S255>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S192>/Saturation'
                                        *   '<S213>/Saturation'
                                        *   '<S234>/Saturation'
                                        *   '<S255>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S192>/Saturation'
                                        *   '<S213>/Saturation'
                                        *   '<S234>/Saturation'
                                        *   '<S255>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S192>/Gain'
                                            *   '<S213>/Gain'
                                            *   '<S234>/Gain'
                                            *   '<S255>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S192>/Gain2'
                                        *   '<S213>/Gain2'
                                        *   '<S234>/Gain2'
                                        *   '<S255>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S192>/Saturation1'
                                        *   '<S213>/Saturation1'
                                        *   '<S234>/Saturation1'
                                        *   '<S255>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S192>/Saturation1'
                                        *   '<S213>/Saturation1'
                                        *   '<S234>/Saturation1'
                                        *   '<S255>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S192>/Gain1'
                                        *   '<S213>/Gain1'
                                        *   '<S234>/Gain1'
                                        *   '<S255>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S197>/Constant'
                            *   '<S218>/Constant'
                            *   '<S239>/Constant'
                            *   '<S260>/Constant'
                            */
real_T HC_Dist_Reset_Value_Back_Lower = 0.0;
                                     /* Variable: HC_Dist_Reset_Value_Back_Lower
                                      * Referenced by: '<S17>/Filter_Coefficient2'
                                      */
real_T HC_Dist_Reset_Value_Back_Upper = 0.0;
                                     /* Variable: HC_Dist_Reset_Value_Back_Upper
                                      * Referenced by: '<S18>/Filter_Coefficient2'
                                      */
real_T HC_Dist_Reset_Value_Ball_Screw = 0.0;
                                     /* Variable: HC_Dist_Reset_Value_Ball_Screw
                                      * Referenced by: '<S20>/Filter_Coefficient2'
                                      */
real_T HC_Dist_Reset_Value_Front = 0.0;/* Variable: HC_Dist_Reset_Value_Front
                                        * Referenced by: '<S19>/Filter_Coefficient2'
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
real_T LoadShooter_Height = 508.0;     /* Variable: LoadShooter_Height
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
                                        * Referenced by: '<S100>/Constant'
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
                                           *   '<S33>/Gain'
                                           *   '<S34>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S33>/Gain2'
                                         *   '<S34>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S33>/Saturation1'
                                          *   '<S34>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S33>/Saturation1'
                                         *   '<S34>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S33>/Gain1'
                                         *   '<S34>/Gain1'
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
                          * Referenced by: '<S177>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S177>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S124>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S137>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S177>/Constant3'
                                     */
real_T Stage_Angle = 25.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 228.6;              /* Variable: Stage_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 508.0;           /* Variable: Stage_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S331>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S297>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S297>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S297>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S297>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S296>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S297>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S297>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S297>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S297>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S297>/Constant1'
                                   *   '<S297>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S297>/Constant'
                                   *   '<S297>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S287>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S287>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S287>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S287>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S287>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S287>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S195>/Constant3'
                                        *   '<S216>/Constant3'
                                        *   '<S237>/Constant3'
                                        *   '<S258>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S195>/Constant2'
                                *   '<S216>/Constant2'
                                *   '<S237>/Constant2'
                                *   '<S258>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S195>/Saturation'
                                           *   '<S216>/Saturation'
                                           *   '<S237>/Saturation'
                                           *   '<S258>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S195>/Saturation'
                                          *   '<S216>/Saturation'
                                          *   '<S237>/Saturation'
                                          *   '<S258>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S195>/Gain2'
                                         *   '<S216>/Gain2'
                                         *   '<S237>/Gain2'
                                         *   '<S258>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S195>/Saturation1'
                                             *   '<S216>/Saturation1'
                                             *   '<S237>/Saturation1'
                                             *   '<S258>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S195>/Saturation1'
                                            *   '<S216>/Saturation1'
                                            *   '<S237>/Saturation1'
                                            *   '<S258>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S195>/Gain1'
                                        *   '<S216>/Gain1'
                                        *   '<S237>/Gain1'
                                        *   '<S258>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S329>/Constant'
                                        */
real_T TEST_Arm_Dist_Reset_Hard_Coded = 0.0;
                                     /* Variable: TEST_Arm_Dist_Reset_Hard_Coded
                                      * Referenced by: '<S2>/Constant3'
                                      */
real_T TEST_Arm_Dist_Reset_TOF = 0.0;  /* Variable: TEST_Arm_Dist_Reset_TOF
                                        * Referenced by: '<S2>/Constant2'
                                        */
real_T TEST_Ball_Screw_Motor_DC = 0.0; /* Variable: TEST_Ball_Screw_Motor_DC
                                        * Referenced by: '<Root>/Constant'
                                        */
real_T TEST_Request_Note_Eject = 0.0;  /* Variable: TEST_Request_Note_Eject
                                        * Referenced by: '<S6>/Constant2'
                                        */
real_T TEST_Request_Note_Pickup = 0.0; /* Variable: TEST_Request_Note_Pickup
                                        * Referenced by: '<S6>/Constant'
                                        */
real_T TEST_Request_Note_Pickup_AND_Transfer = 0.0;
                              /* Variable: TEST_Request_Note_Pickup_AND_Transfer
                               * Referenced by: '<S6>/Constant3'
                               */
real_T TEST_Request_Note_Speaker = 0.0;/* Variable: TEST_Request_Note_Speaker
                                        * Referenced by: '<S6>/Constant7'
                                        */
real_T TEST_Request_Note_Transfer = 0.0;/* Variable: TEST_Request_Note_Transfer
                                         * Referenced by: '<S6>/Constant1'
                                         */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S6>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S6>/Constant5'
                                        */
real_T TEST_Shooter_Angle = 35.0;      /* Variable: TEST_Shooter_Angle
                                        * Referenced by: '<S6>/Constant6'
                                        */
real_T TEST_Speaker_Angle = 40.0;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S11>/Constant26'
                                        */
real_T TEST_Speaker_Height = 23.0;     /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S11>/Constant25'
                                        */
real_T TEST_State_Request = 0.0;       /* Variable: TEST_State_Request
                                        * Referenced by: '<S11>/Constant'
                                        */
real_T TOF_Dist_Reset_Enable = 0.0;    /* Variable: TOF_Dist_Reset_Enable
                                        * Referenced by:
                                        *   '<S17>/Filter_Coefficient1'
                                        *   '<S18>/Filter_Coefficient1'
                                        *   '<S19>/Filter_Coefficient1'
                                        *   '<S20>/Filter_Coefficient1'
                                        */
real_T TOF_Low_Pass_Coeff = 0.1;       /* Variable: TOF_Low_Pass_Coeff
                                        * Referenced by:
                                        *   '<S17>/Filter_Coefficient'
                                        *   '<S18>/Filter_Coefficient'
                                        *   '<S19>/Filter_Coefficient'
                                        *   '<S20>/Filter_Coefficient'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 6.35;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S275>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S275>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S275>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S275>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S275>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S275>/Constant3'
                                    */
real_T Trap_Angle = -45.0;             /* Variable: Trap_Angle
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 279.4;               /* Variable: Trap_Gap
                                        * Referenced by: '<S11>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 762.0;            /* Variable: Trap_Height
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

real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
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
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

/*
 * Output and update for action system:
 *    '<S1>/Disabled'
 *    '<S1>/Test'
 */
void Code_Gen_Model_Disabled(real_T *rty_Gyro_Angle_Adjustment, real_T
  *rty_Steering_Abs_Cmd, real_T *rty_Steering_Rel_Cmd, real_T
  *rty_Translation_Angle, real_T *rty_Translation_Speed, boolean_T
  *rty_Is_Absolute_Translation, boolean_T *rty_Is_Absolute_Steering, boolean_T
  *rty_Spline_Enable, real_T rty_Spline_Ref_Poses[24], real_T
  *rty_Spline_Num_Poses)
{
  /* SignalConversion generated from: '<S5>/Spline_Ref_Poses' */
  memset(&rty_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

  /* SignalConversion generated from: '<S5>/Gyro_Angle_Adjustment' incorporates:
   *  Constant: '<S5>/Constant'
   */
  *rty_Gyro_Angle_Adjustment = 0.0;

  /* SignalConversion generated from: '<S5>/Steering_Abs_Cmd' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  *rty_Steering_Abs_Cmd = 0.0;

  /* SignalConversion generated from: '<S5>/Steering_Rel_Cmd' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  *rty_Steering_Rel_Cmd = 0.0;

  /* SignalConversion generated from: '<S5>/Translation_Angle' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  *rty_Translation_Angle = 0.0;

  /* SignalConversion generated from: '<S5>/Translation_Speed' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  *rty_Translation_Speed = 0.0;

  /* SignalConversion generated from: '<S5>/Is_Absolute_Translation' incorporates:
   *  Constant: '<S5>/Constant5'
   */
  *rty_Is_Absolute_Translation = true;

  /* SignalConversion generated from: '<S5>/Is_Absolute_Steering' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  *rty_Is_Absolute_Steering = true;

  /* SignalConversion generated from: '<S5>/Spline_Enable' incorporates:
   *  Constant: '<S5>/Constant7'
   */
  *rty_Spline_Enable = false;

  /* SignalConversion generated from: '<S5>/Spline_Num_Poses' incorporates:
   *  Constant: '<S5>/Constant9'
   */
  *rty_Spline_Num_Poses = 6.0;
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
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Product_hqg;
  real_T rtb_Product_ku;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Sqrt;
  real_T rtb_Store_dist1;
  real_T rtb_Store_dist1_d;
  real_T rtb_Store_dist1_k;
  real_T rtb_Store_dist1_m;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_cj;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_jx;
  real_T rtb_Subtract1_k0;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_n;
  real_T rtb_Sum1_bs;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch;
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_h;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_j;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_n;
  real_T rtb_Switch2_p;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T y;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s149_iter;
  uint16_T s174_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S182>/Add1' incorporates:
   *  Constant: '<S182>/Constant3'
   *  Constant: '<S182>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S182>/Math Function'
   *  Sum: '<S13>/Add'
   *  Sum: '<S182>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S183>/Add1' incorporates:
   *  Constant: '<S183>/Constant3'
   *  Constant: '<S183>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S183>/Math Function'
   *  Sum: '<S13>/Add1'
   *  Sum: '<S183>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S184>/Add1' incorporates:
   *  Constant: '<S184>/Constant3'
   *  Constant: '<S184>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S184>/Math Function'
   *  Sum: '<S13>/Add2'
   *  Sum: '<S184>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S185>/Add1' incorporates:
   *  Constant: '<S185>/Constant3'
   *  Constant: '<S185>/Constant4'
   *  Gain: '<S13>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S185>/Math Function'
   *  Sum: '<S13>/Add3'
   *  Sum: '<S185>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S10>/Product3' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S95>/Diff'
   *  UnitDelay: '<S95>/UD'
   *
   * Block description for '<S95>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S95>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_p = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S10>/Product7' incorporates:
   *  Fcn: '<S96>/r->x'
   *  Fcn: '<S96>/theta->y'
   *  Fcn: '<S97>/r->x'
   *  Fcn: '<S97>/theta->y'
   *  Fcn: '<S98>/r->x'
   *  Fcn: '<S98>/theta->y'
   *  Fcn: '<S99>/r->x'
   *  Fcn: '<S99>/theta->y'
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
  rtb_TmpSignalConversionAtProduc[6] = rtb_Switch2_p * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Switch2_p * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Sqrt = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Sqrt)) || (rtIsInf(rtb_Sqrt))) {
    rtb_Sqrt = 0.0;
  } else {
    rtb_Sqrt = fmod(rtb_Sqrt, 4.294967296E+9);
  }

  switch ((rtb_Sqrt < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Sqrt)))) : ((int32_T)
           ((uint32_T)rtb_Sqrt))) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    Code_Gen_Model_Disabled(&rtb_UnitDelay1_gi,
      &Code_Gen_Model_B.Steering_Abs_Cmd, &Code_Gen_Model_B.Steering_Rel_Cmd,
      &Code_Gen_Model_B.Translation_Angle, &Code_Gen_Model_B.Translation_Speed,
      &rtb_Is_Absolute_Translation, &rtb_Is_Absolute_Steering,
      &Code_Gen_Model_B.Spline_Enable, rtb_Spline_Ref_Poses,
      &Code_Gen_Model_B.Spline_Num_Poses);

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

    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S331>/Constant'
     *  Constant: '<S331>/Constant1'
     *  Constant: '<S331>/Constant2'
     *  Inport: '<Root>/Steer_Joystick_X'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Math: '<S331>/Hypot'
     *  RelationalOperator: '<S331>/GreaterThan'
     *  Switch: '<S331>/Switch'
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

    /* End of Switch: '<S331>/Switch1' */

    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S339>/Constant'
     *  Constant: '<S340>/Constant'
     *  Logic: '<S333>/AND'
     *  RelationalOperator: '<S339>/Compare'
     *  RelationalOperator: '<S340>/Compare'
     *  Switch: '<S333>/Switch2'
     *  UnitDelay: '<S333>/Unit Delay'
     *  UnitDelay: '<S333>/Unit Delay1'
     */
    if ((rtb_thetay == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_thetay;
    }

    /* End of Switch: '<S333>/Switch1' */

    /* Merge: '<S9>/Merge1' incorporates:
     *  Trigonometry: '<S329>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S336>/Compare' incorporates:
     *  Constant: '<S336>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S332>/Constant'
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S334>/Constant'
     *  Constant: '<S335>/Constant'
     *  Logic: '<S332>/Logical Operator'
     *  RelationalOperator: '<S334>/Compare'
     *  RelationalOperator: '<S335>/Compare'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Sqrt = 6.2831853071795862;
    } else {
      rtb_Sqrt = 0.0;
    }

    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S332>/Constant2'
     *  Constant: '<S332>/Constant3'
     *  Constant: '<S337>/Constant'
     *  Constant: '<S338>/Constant'
     *  Logic: '<S332>/Logical Operator1'
     *  RelationalOperator: '<S337>/Compare'
     *  RelationalOperator: '<S338>/Compare'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ik = -6.2831853071795862;
    } else {
      rtb_Add_ik = 0.0;
    }

    /* Sum: '<S332>/Sum1' incorporates:
     *  Switch: '<S332>/Switch'
     *  Switch: '<S332>/Switch1'
     *  UnitDelay: '<S332>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Sqrt + rtb_Add_ik) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S347>/Constant'
     *  Constant: '<S348>/Constant'
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Logic: '<S342>/AND'
     *  RelationalOperator: '<S347>/Compare'
     *  RelationalOperator: '<S348>/Compare'
     *  Switch: '<S342>/Switch2'
     *  UnitDelay: '<S342>/Unit Delay'
     *  UnitDelay: '<S342>/Unit Delay1'
     */
    if ((Code_Gen_Model_U.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_U.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_lw;
      rtb_Switch2_j = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_h = Code_Gen_Model_U.Drive_Joystick_Y;
      rtb_Switch2_j = Code_Gen_Model_U.Drive_Joystick_X;
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Merge: '<S9>/Merge3' incorporates:
     *  Trigonometry: '<S330>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_h,
      rtb_Switch2_j);

    /* Merge: '<S9>/Merge7' incorporates:
     *  Constant: '<S15>/Constant3'
     *  SignalConversion generated from: '<S15>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S9>/Merge2' incorporates:
     *  Constant: '<S329>/Constant'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Lookup_n-D: '<S329>/Modulation_Str_Y_Rel'
     *  Product: '<S329>/Product'
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

    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S341>/Constant'
     *  Constant: '<S341>/Constant1'
     *  Inport: '<Root>/Is_Boost_Trigger_Pulled'
     */
    if (Code_Gen_Model_U.Is_Boost_Trigger_Pulled != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Switch: '<S346>/Init' incorporates:
     *  UnitDelay: '<S346>/FixPt Unit Delay1'
     *  UnitDelay: '<S346>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay = rtb_Product_ku;
    } else {
      rtb_thetay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S346>/Init' */

    /* Sum: '<S344>/Sum1' */
    rtb_Product_ku -= rtb_thetay;

    /* Switch: '<S345>/Switch2' incorporates:
     *  Constant: '<S343>/Constant1'
     *  Constant: '<S343>/Constant3'
     *  RelationalOperator: '<S345>/LowerRelop1'
     *  RelationalOperator: '<S345>/UpperRelop'
     *  Switch: '<S345>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S345>/Switch' incorporates:
       *  Constant: '<S343>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S345>/Switch2' */

    /* Sum: '<S344>/Sum' */
    rtb_thetay += rtb_Product_ku;

    /* Product: '<S341>/Product' incorporates:
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Lookup_n-D: '<S330>/Modulation_Drv'
     *  Math: '<S330>/Magnitude'
     */
    rtb_Add_ih = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_U.Drive_Joystick_X,
      Code_Gen_Model_U.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_thetay;

    /* Saturate: '<S341>/Saturation' */
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

    /* End of Saturate: '<S341>/Saturation' */

    /* SignalConversion generated from: '<S15>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S15>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Update for UnitDelay: '<S333>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_as;

    /* Update for UnitDelay: '<S332>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S342>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_lw = rtb_Switch1_h;

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_j;

    /* Update for UnitDelay: '<S346>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S346>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S346>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_thetay;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    Code_Gen_Model_Disabled(&rtb_UnitDelay1_gi,
      &Code_Gen_Model_B.Steering_Abs_Cmd, &Code_Gen_Model_B.Steering_Rel_Cmd,
      &Code_Gen_Model_B.Translation_Angle, &Code_Gen_Model_B.Translation_Speed,
      &rtb_Is_Absolute_Translation, &rtb_Is_Absolute_Steering,
      &Code_Gen_Model_B.Spline_Enable, rtb_Spline_Ref_Poses,
      &Code_Gen_Model_B.Spline_Num_Poses);

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S37>/Reshapey' incorporates:
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

  /* Delay: '<S37>/MemoryX' incorporates:
   *  Constant: '<S37>/X0'
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
  rtb_Switch2_p = sin(rtb_thetay);

  /* SignalConversion generated from: '<S10>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S10>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_0 = cos(rtb_thetay);
  rtb_Init_e = rtb_Switch2_p;

  /* SignalConversion generated from: '<S10>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S10>/Unary Minus'
   */
  rtb_Switch1_as = -rtb_Switch2_p;

  /* Sum: '<S91>/Diff' incorporates:
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
  rtb_Switch2_l = rtb_thetay - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S10>/Subtract2' incorporates:
   *  Constant: '<S10>/Constant3'
   *  Gain: '<S10>/Gain7'
   *  Math: '<S10>/Square'
   */
  rtb_Switch2_p = 1.0 - ((rtb_Switch2_l * rtb_Switch2_l) * 0.16666666666666666);

  /* Gain: '<S10>/Gain6' */
  rtb_Switch2_l *= 0.5;

  /* Product: '<S10>/Product7' incorporates:
   *  Constant: '<S10>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Sqrt = 0.0;
    rtb_Num_Segments = 0;
    for (s149_iter = 0; s149_iter < 8; s149_iter++) {
      rtb_Sqrt += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s149_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Sqrt;
  }

  /* End of Product: '<S10>/Product7' */

  /* Product: '<S10>/Product6' incorporates:
   *  SignalConversion generated from: '<S10>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S10>/Unary Minus2'
   */
  rtb_Switch1_h = (rtb_Switch2_p * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Switch2_p = (rtb_Switch2_l * tmp[0]) + (rtb_Switch2_p * tmp[1]);

  /* Product: '<S10>/Product6' incorporates:
   *  Concatenate: '<S10>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch1_h) + (rtb_Switch1_as * rtb_Switch2_p);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch1_h) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Switch2_p);

  /* Outputs for Enabled SubSystem: '<S64>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S57>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S88>/Enable'
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

    /* Product: '<S88>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S37>/C'
     *  Delay: '<S37>/MemoryX'
     *  Product: '<S90>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S88>/Sum' incorporates:
     *  Constant: '<S37>/D'
     *  Product: '<S88>/C[k]*xhat[k|k-1]'
     *  Product: '<S88>/D[k]*u[k]'
     *  Sum: '<S88>/Add1'
     */
    rtb_Switch2_p = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_p + rtb_Switch1_as);

    /* Product: '<S88>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S37>/C'
     *  Delay: '<S37>/MemoryX'
     *  Product: '<S90>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S88>/Sum' incorporates:
     *  Constant: '<S37>/D'
     *  Product: '<S88>/C[k]*xhat[k|k-1]'
     *  Product: '<S88>/D[k]*u[k]'
     *  Sum: '<S88>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch2_p + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S88>/Product3' incorporates:
     *  Constant: '<S38>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S90>/Add1' incorporates:
     *  Product: '<S90>/Product'
     */
    rtb_Switch2_p = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S88>/Product3' incorporates:
     *  Constant: '<S38>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S90>/Add1' incorporates:
     *  Product: '<S90>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S90>/Product2' incorporates:
     *  Constant: '<S38>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_p) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_p) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S88>/Product3' incorporates:
       *  Outport: '<S88>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S90>/Product2' incorporates:
       *  Outport: '<S90>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S8>/AND' */
  /* End of Outputs for SubSystem: '<S57>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S64>/Enabled Subsystem' */

  /* Sum: '<S64>/Add' incorporates:
   *  Delay: '<S37>/MemoryX'
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
   *  Constant: '<S174>/Constant'
   *  Logic: '<S174>/AND'
   *  MATLAB Function: '<S124>/Find closest index to curve'
   *  Product: '<S174>/Product'
   *  RelationalOperator: '<S174>/Relational Operator'
   *  RelationalOperator: '<S174>/Relational Operator1'
   *  Selector: '<S174>/Selector'
   *  Selector: '<S174>/Selector1'
   *  Selector: '<S175>/Selector'
   *  Sum: '<S174>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S127>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S130>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S132>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S127>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S12>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S122>/Action Port'
       */
      /* InitializeConditions for If: '<S12>/If' incorporates:
       *  UnitDelay: '<S122>/Unit Delay'
       *  UnitDelay: '<S123>/Unit Delay'
       *  UnitDelay: '<S125>/Unit Delay'
       *  UnitDelay: '<S125>/Unit Delay1'
       *  UnitDelay: '<S175>/Unit Delay'
       *  UnitDelay: '<S175>/Unit Delay1'
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
     *  ActionPort: '<S122>/Action Port'
     */
    /* Selector: '<S123>/Selector1' incorporates:
     *  Merge: '<S9>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S123>/Selector1' */

    /* Lookup_n-D: '<S122>/Capture Radius' incorporates:
     *  UnitDelay: '<S122>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S123>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S123>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S127>/If' incorporates:
     *  RelationalOperator: '<S127>/ '
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S130>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S132>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S127>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S130>/Action Port'
       */
      /* InitializeConditions for If: '<S127>/If' incorporates:
       *  UnitDelay: '<S130>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S127>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S127>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S130>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S130>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      /* If: '<S130>/If' incorporates:
       *  Selector: '<S123>/Selector1'
       *  Selector: '<S130>/Selector'
       *  Selector: '<S133>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S130>/Increment_If_Rectangle_Check' */

      /* Sum: '<S130>/Minus' incorporates:
       *  Concatenate: '<S123>/Matrix Concatenate2'
       *  Selector: '<S130>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S130>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      /* If: '<S130>/If' incorporates:
       *  Selector: '<S123>/Selector1'
       *  Selector: '<S130>/Selector'
       *  Selector: '<S133>/Selector'
       *  Sum: '<S130>/Minus'
       */
      rtb_Switch1_h = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S130>/Increment_If_Rectangle_Check' */

      /* Sum: '<S130>/Minus' incorporates:
       *  Concatenate: '<S123>/Matrix Concatenate2'
       *  Selector: '<S130>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_h;

      /* Math: '<S130>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S130>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S130>/Switch' incorporates:
       *  Logic: '<S130>/AND'
       *  Logic: '<S130>/OR'
       *  RelationalOperator: '<S130>/Relational Operator'
       *  UnitDelay: '<S130>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S130>/If' */
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
        /* Disable for If: '<S132>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S130>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        /* If: '<S132>/If' incorporates:
         *  RelationalOperator: '<S132>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S132>/Is_Last_Point' incorporates:
           *  ActionPort: '<S135>/Action Port'
           */
          /* InitializeConditions for If: '<S132>/If' incorporates:
           *  UnitDelay: '<S135>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S132>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S132>/Is_Last_Point' incorporates:
           *  ActionPort: '<S135>/Action Port'
           */
          /* Switch: '<S135>/Switch' incorporates:
           *  Constant: '<S137>/Constant'
           *  Logic: '<S135>/OR'
           *  RelationalOperator: '<S137>/Compare'
           *  UnitDelay: '<S135>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S135>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S135>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S138>/Action Port'
             */
            /* Merge: '<S127>/Merge2' incorporates:
             *  Constant: '<S138>/Constant'
             *  SignalConversion generated from: '<S138>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S138>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S138>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S135>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S135>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S139>/Action Port'
             */
            /* Merge: '<S127>/Merge2' incorporates:
             *  Constant: '<S139>/Constant'
             *  SignalConversion generated from: '<S139>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S139>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S139>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S135>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S135>/If' */

          /* Merge: '<S127>/Merge4' incorporates:
           *  SignalConversion: '<S135>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S135>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S132>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S132>/Increment_Search' incorporates:
           *  ActionPort: '<S134>/Action Port'
           */
          /* Merge: '<S127>/Merge2' incorporates:
           *  Constant: '<S134>/Constant'
           *  SignalConversion generated from: '<S134>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S134>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S134>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S127>/Merge4' incorporates:
           *  Constant: '<S136>/FixPt Constant'
           *  SignalConversion: '<S134>/Signal Copy'
           *  Sum: '<S136>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S132>/Increment_Search' */
        }

        /* End of If: '<S132>/If' */
        /* End of Outputs for SubSystem: '<S130>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S130>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        /* Sum: '<S140>/FixPt Sum1' incorporates:
         *  Constant: '<S140>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S133>/Selector1' incorporates:
         *  Selector: '<S123>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S141>/Subtract' incorporates:
         *  Selector: '<S133>/Selector1'
         *  Sum: '<S141>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Switch2_l;

        /* Selector: '<S133>/Selector1' incorporates:
         *  Selector: '<S123>/Selector1'
         */
        rtb_Switch2_j = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S141>/Subtract' incorporates:
         *  Selector: '<S133>/Selector1'
         *  Sum: '<S141>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Switch1_h;

        /* Math: '<S141>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S141>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S141>/Unary Minus' */
        rtb_Switch2_p = rtb_Minus_n[0];

        /* Product: '<S141>/Product' incorporates:
         *  Product: '<S141>/Divide'
         *  UnaryMinus: '<S141>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_p) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S141>/Add1' incorporates:
         *  Sum: '<S141>/Add2'
         *  Sum: '<S141>/Minus'
         */
        rtb_Switch2_p = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S141>/Minus4' incorporates:
         *  Sum: '<S141>/Add2'
         *  Sum: '<S141>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_p;

        /* Sum: '<S141>/Minus5' incorporates:
         *  Concatenate: '<S123>/Matrix Concatenate2'
         *  Sum: '<S141>/Minus'
         */
        rtb_Subtract1_lg = rtb_Reshapey[0] - rtb_Switch2_p;

        /* Sum: '<S141>/Add' incorporates:
         *  Sum: '<S141>/Add2'
         *  Sum: '<S141>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S141>/Minus' incorporates:
         *  Sum: '<S141>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_as;

        /* DotProduct: '<S141>/Dot Product' incorporates:
         *  Concatenate: '<S123>/Matrix Concatenate2'
         *  Sum: '<S141>/Minus'
         *  Sum: '<S141>/Minus1'
         *  Sum: '<S141>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_p;

        /* DotProduct: '<S141>/Dot Product1' incorporates:
         *  Sum: '<S141>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_p * rtb_Switch2_p;

        /* DotProduct: '<S141>/Dot Product2' incorporates:
         *  Sum: '<S141>/Minus4'
         *  Sum: '<S141>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku * rtb_Subtract1_lg;

        /* DotProduct: '<S141>/Dot Product3' incorporates:
         *  Sum: '<S141>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S141>/Add1' incorporates:
         *  Sum: '<S141>/Add2'
         *  Sum: '<S141>/Minus'
         */
        rtb_Switch2_p = rtb_Switch2_j - rtb_Minus_n[1];

        /* Sum: '<S141>/Minus4' incorporates:
         *  Sum: '<S141>/Add2'
         *  Sum: '<S141>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_j + rtb_Minus_n[1]) - rtb_Switch2_p;

        /* Sum: '<S141>/Minus5' incorporates:
         *  Concatenate: '<S123>/Matrix Concatenate2'
         *  Sum: '<S141>/Minus'
         */
        rtb_Subtract1_lg = rtb_Reshapey[1] - rtb_Switch2_p;

        /* Sum: '<S141>/Add' incorporates:
         *  Sum: '<S141>/Add2'
         *  Sum: '<S141>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_h - rtb_Minus_n[1];

        /* Sum: '<S141>/Minus' incorporates:
         *  Sum: '<S141>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_as;

        /* DotProduct: '<S141>/Dot Product' incorporates:
         *  Concatenate: '<S123>/Matrix Concatenate2'
         *  Sum: '<S141>/Minus'
         *  Sum: '<S141>/Minus1'
         *  Sum: '<S141>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_p;

        /* RelationalOperator: '<S142>/Compare' incorporates:
         *  Constant: '<S142>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S141>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S141>/Dot Product1'
         *  Sum: '<S141>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_p * rtb_Switch2_p) +
          rtb_Switch2_l));

        /* DotProduct: '<S141>/Dot Product2' incorporates:
         *  Sum: '<S141>/Minus4'
         *  Sum: '<S141>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Subtract1_lg) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S127>/Merge4' incorporates:
         *  Constant: '<S143>/Constant'
         *  DataTypeConversion: '<S133>/Data Type Conversion'
         *  DotProduct: '<S141>/Dot Product3'
         *  Logic: '<S141>/AND'
         *  RelationalOperator: '<S141>/LessThanOrEqual1'
         *  RelationalOperator: '<S143>/Compare'
         *  Sum: '<S133>/Add'
         *  Sum: '<S141>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S127>/Merge2' incorporates:
         *  Constant: '<S133>/Constant2'
         *  SignalConversion generated from: '<S133>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S133>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S133>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S130>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S130>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        /* Merge: '<S127>/Merge2' incorporates:
         *  Constant: '<S131>/Constant2'
         *  SignalConversion generated from: '<S131>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S131>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S131>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S127>/Merge4' incorporates:
         *  SignalConversion generated from: '<S131>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S130>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S127>/Merge1' incorporates:
       *  Constant: '<S130>/Constant'
       *  SignalConversion generated from: '<S130>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S130>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S127>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S127>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S129>/Action Port'
       */
      /* Merge: '<S127>/Merge1' incorporates:
       *  Constant: '<S129>/Constant'
       *  SignalConversion generated from: '<S129>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S127>/Merge2' incorporates:
       *  Constant: '<S129>/Constant1'
       *  SignalConversion generated from: '<S129>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S129>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S129>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S127>/Merge4' incorporates:
       *  SignalConversion generated from: '<S129>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S127>/Escape_Auto_Driving' */
    }

    /* End of If: '<S127>/If' */

    /* If: '<S123>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S123>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S128>/Action Port'
       */
      /* Bias: '<S144>/Add Constant' incorporates:
       *  Bias: '<S144>/Bias'
       *  Sum: '<S144>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S144>/Selector4' incorporates:
       *  Bias: '<S144>/Bias1'
       *  Constant: '<S146>/FixPt Constant'
       *  Sum: '<S146>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S144>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S144>/Matrix Concatenate' incorporates:
       *  Bias: '<S144>/Add Constant1'
       *  Gain: '<S147>/Gain'
       *  Gain: '<S148>/Gain'
       *  Selector: '<S123>/Selector1'
       *  Selector: '<S144>/Selector'
       *  Selector: '<S144>/Selector1'
       *  Selector: '<S144>/Selector2'
       *  Selector: '<S144>/Selector3'
       *  Sum: '<S147>/Subtract'
       *  Sum: '<S148>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (i = 0; i < 6; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 9] = rtb_Ref_Poses[i + 6];
      }

      for (i = 0; i < 2; i++) {
        /* Selector: '<S144>/Selector4' incorporates:
         *  Selector: '<S144>/Selector'
         */
        rtb_Num_Segments = (i << 3);
        rtb_Assignment[rtb_Num_Segments + 7] = (rtb_Ref_Poses[((6 * i) +
          ((int32_T)Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) -
          rtb_Ref_Poses[(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) +
                         (6 * i)) - 1];

        /* Selector: '<S144>/Selector4' incorporates:
         *  Bias: '<S144>/Add Constant1'
         *  Gain: '<S147>/Gain'
         *  Selector: '<S144>/Selector'
         *  Selector: '<S144>/Selector1'
         *  Sum: '<S147>/Subtract'
         */
        for (s149_iter = 0; s149_iter <= rtb_Bias1_p; s149_iter++) {
          rtb_Selector4[s149_iter + (Code_Gen_Model_DW.Selector4_DIMS1[0] * i)] =
            rtb_Assignment[((s149_iter + rtb_Reshapey_0) + rtb_Num_Segments) - 1];
        }
      }

      /* End of Concatenate: '<S144>/Matrix Concatenate' */

      /* Assignment: '<S144>/Assignment' incorporates:
       *  Selector: '<S144>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s149_iter = 0; s149_iter < rtb_Bias1_p; s149_iter++) {
          rtb_Assignment[s149_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s149_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S144>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S145>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S149>/While Iterator'
       */
      s149_iter = 1;
      do {
        rtb_Switch2_p = rtb_Assignment[s149_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_p - rtb_Assignment[s149_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s149_iter] - rtb_Assignment[s149_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_p - rtb_Assignment[s149_iter];
        rtb_Switch2_p = rtb_Assignment[s149_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_p - rtb_Assignment[s149_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s149_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s149_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_p - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_h = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Subtract1_lg = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_j = (rtb_Init_e - (2.0 * rtb_Switch1_h)) +
            rtb_Subtract1_lg;
          rtb_Product_ku = rtb_Switch1_h - rtb_Subtract1_lg;
          rtb_Subtract1_lg = (3.0 * rtb_Switch1_h) - (2.0 * rtb_Subtract1_lg);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_j) +
            (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Subtract1_lg)) + rtb_Assignment[s149_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_j) +
            (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Subtract1_lg)) + rtb_Switch2_l;
          rtb_Switch2_j = ((3.0 * rtb_Switch1_h) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_h);
          rtb_Switch1_h = (rtb_Init_e - rtb_Switch1_h) * 6.0;
          rtb_Switch2_p = (((rtb_Reshapey[0] * rtb_Switch2_j) + (rtb_Minus_n[0] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] * rtb_Switch1_h);
          rtb_Subtract1_lg = rtb_Switch2_p;
          rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_p;
          rtb_Switch2_p = (((rtb_Reshapey[1] * rtb_Switch2_j) + (rtb_Minus_n[1] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_h);
          rtb_Switch1_h = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch2_j = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch1_h) + (rtb_Minus_n[1] * rtb_Switch2_j)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch1_h) + (rtb_Minus_n[0] *
            rtb_Switch2_j)) * 0.5) + (rtb_Add2_f[0] * rtb_Init_e)) *
             rtb_Switch2_p)) / rt_powd_snf(rt_hypotd_snf(rtb_Subtract1_lg,
            rtb_Switch2_p), 3.0);
        }

        if (s149_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s149_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s149_iter);
        rtb_Num_Segments = s149_iter;
        s149_iter++;
      } while ((rtb_Init_e >= 4.0) && (s149_iter <= 3));

      /* End of Outputs for SubSystem: '<S145>/Sampling_Loop' */

      /* SignalConversion generated from: '<S128>/Position_and_Curvature' incorporates:
       *  Assignment: '<S149>/Assignment'
       *  Merge: '<S123>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S123>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S123>/If Action Subsystem' incorporates:
       *  ActionPort: '<S126>/Action Port'
       */
      /* Product: '<S126>/Product' incorporates:
       *  Selector: '<S123>/Selector'
       *  Selector: '<S123>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S126>/Product1' incorporates:
       *  Selector: '<S123>/Selector'
       *  Selector: '<S123>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S126>/Product' incorporates:
         *  Constant: '<S126>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S126>/Product1' incorporates:
         *  Constant: '<S126>/Constant2'
         *  Product: '<S126>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S126>/Assignment' incorporates:
       *  Concatenate: '<S126>/Matrix Concatenate'
       *  Merge: '<S123>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S126>/Assignment' */

      /* SignalConversion generated from: '<S126>/Num_Segments' incorporates:
       *  Constant: '<S126>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S123>/If Action Subsystem' */
    }

    /* End of If: '<S123>/If1' */

    /* Concatenate: '<S124>/Matrix Concatenate' incorporates:
     *  Merge: '<S123>/Merge'
     *  Selector: '<S124>/Selector'
     *  Selector: '<S124>/Selector1'
     *  Selector: '<S124>/Selector3'
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

    /* End of Concatenate: '<S124>/Matrix Concatenate' */

    /* MATLAB Function: '<S124>/Distance Along Curve' incorporates:
     *  Concatenate: '<S124>/Matrix Concatenate'
     *  Selector: '<S124>/Selector4'
     *  Selector: '<S124>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s149_iter = 0; s149_iter < 149; s149_iter++) {
      /* Outputs for Iterator SubSystem: '<S145>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S149>/While Iterator'
       */
      rtb_Assignment_d[s149_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s149_iter + 1] -
         rtb_MatrixConcatenate_o[s149_iter], rtb_MatrixConcatenate_o[s149_iter +
         151] - rtb_MatrixConcatenate_o[s149_iter + 150]) +
        rtb_Assignment_d[s149_iter];

      /* End of Outputs for SubSystem: '<S145>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S124>/Distance Along Curve' */

    /* MATLAB Function: '<S124>/Find closest index to curve' incorporates:
     *  Concatenate: '<S124>/Matrix Concatenate'
     *  Selector: '<S124>/Selector4'
     *  Selector: '<S124>/Selector5'
     *  Selector: '<S175>/Selector'
     */
    for (s149_iter = 0; s149_iter < 150; s149_iter++) {
      /* Outputs for Iterator SubSystem: '<S145>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S149>/While Iterator'
       */
      distance_from_robot[s149_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s149_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s149_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S145>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s149_iter = 1;
    } else {
      s149_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s149_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s149_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s149_iter - 1];
      for (rtb_Bias1_p = s149_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s149_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s149_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S175>/Selector' incorporates:
     *  Constant: '<S175>/Constant'
     *  MATLAB Function: '<S124>/Find closest index to curve'
     *  MinMax: '<S175>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s149_iter)) - 1];

    /* If: '<S175>/If' incorporates:
     *  RelationalOperator: '<S175>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S175>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S178>/Action Port'
       */
      /* SignalConversion generated from: '<S178>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S180>/FixPt Sum1' incorporates:
       *  Constant: '<S180>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S178>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S9>/Merge8'
       *  Selector: '<S178>/Selector11'
       *  Selector: '<S178>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S178>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S9>/Merge8'
       *  Selector: '<S178>/Selector1'
       *  Selector: '<S178>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S178>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S178>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S178>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S178>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S178>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S175>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S175>/Latch' incorporates:
       *  ActionPort: '<S179>/Action Port'
       */
      /* SignalConversion generated from: '<S179>/In1' incorporates:
       *  UnitDelay: '<S175>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S179>/In2' incorporates:
       *  UnitDelay: '<S175>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S175>/Latch' */
    }

    /* End of If: '<S175>/If' */

    /* MinMax: '<S122>/Min' incorporates:
     *  Lookup_n-D: '<S122>/Lookahead Distance'
     *  UnitDelay: '<S122>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S124>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S174>/While Iterator'
     */
    s174_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s174_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S124>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S174>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s174_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s149_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s174_iter++;
    }

    /* End of Outputs for SubSystem: '<S124>/Find first index that meets distance target' */

    /* Switch: '<S177>/Switch' incorporates:
     *  Concatenate: '<S124>/Matrix Concatenate'
     *  Constant: '<S124>/Constant'
     *  Constant: '<S174>/Constant'
     *  Constant: '<S177>/Constant1'
     *  Constant: '<S177>/Constant2'
     *  Constant: '<S177>/Constant3'
     *  Logic: '<S174>/AND'
     *  MATLAB Function: '<S124>/Find closest index to curve'
     *  Math: '<S177>/Hypot'
     *  Merge: '<S9>/Merge8'
     *  MinMax: '<S177>/Min'
     *  MinMax: '<S177>/Min1'
     *  Product: '<S174>/Product'
     *  Product: '<S177>/Divide'
     *  Product: '<S177>/Product'
     *  Product: '<S177>/Product1'
     *  RelationalOperator: '<S124>/Relational Operator'
     *  RelationalOperator: '<S174>/Relational Operator'
     *  RelationalOperator: '<S174>/Relational Operator1'
     *  Selector: '<S124>/Selector10'
     *  Selector: '<S124>/Selector7'
     *  Selector: '<S124>/Selector8'
     *  Selector: '<S124>/Selector9'
     *  Selector: '<S174>/Selector'
     *  Selector: '<S174>/Selector1'
     *  Selector: '<S175>/Selector'
     *  Sqrt: '<S177>/Sqrt'
     *  Sum: '<S124>/Subtract'
     *  Sum: '<S174>/Add'
     *  Sum: '<S177>/Subtract'
     *  Sum: '<S177>/Subtract1'
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

    /* End of Switch: '<S177>/Switch' */

    /* Logic: '<S125>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S125>/Switch1' incorporates:
     *  Switch: '<S125>/Switch'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S12>/Merge2' incorporates:
       *  Constant: '<S125>/Constant3'
       *  SignalConversion: '<S125>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S12>/Merge2' incorporates:
       *  SignalConversion: '<S125>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S125>/Switch1' */

    /* Merge: '<S12>/Merge' incorporates:
     *  SignalConversion: '<S125>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S124>/Selector6' incorporates:
     *  Concatenate: '<S124>/Matrix Concatenate'
     *  Selector: '<S124>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S124>/Selector2' incorporates:
     *  Concatenate: '<S124>/Matrix Concatenate'
     *  Selector: '<S124>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S125>/Switch2' incorporates:
     *  Sum: '<S181>/Subtract'
     *  Sum: '<S181>/Subtract1'
     *  Trigonometry: '<S181>/Atan2'
     *  UnitDelay: '<S125>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_h = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S125>/Switch2' */

    /* Merge: '<S12>/Merge3' incorporates:
     *  SignalConversion: '<S125>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_h;

    /* Merge: '<S12>/Merge7' incorporates:
     *  SignalConversion: '<S122>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S125>/Constant2'
     *  SignalConversion generated from: '<S122>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S125>/Constant5'
     *  SignalConversion generated from: '<S122>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S12>/Merge5' incorporates:
     *  Constant: '<S125>/Constant6'
     *  SignalConversion generated from: '<S122>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S12>/Merge6' incorporates:
     *  Constant: '<S125>/Constant1'
     *  SignalConversion generated from: '<S122>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S123>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S122>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S175>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S175>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S125>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S125>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_h;

    /* End of Outputs for SubSystem: '<S12>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S12>/Pass Through' incorporates:
     *  ActionPort: '<S121>/Action Port'
     */
    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S121>/Constant'
     *  SignalConversion generated from: '<S121>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S12>/Merge' incorporates:
     *  SignalConversion generated from: '<S121>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S12>/Merge1' incorporates:
     *  SignalConversion generated from: '<S121>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S12>/Merge2' incorporates:
     *  SignalConversion generated from: '<S121>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S12>/Merge3' incorporates:
     *  SignalConversion generated from: '<S121>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S12>/Merge4' incorporates:
     *  SignalConversion generated from: '<S121>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S12>/Merge5' incorporates:
     *  SignalConversion generated from: '<S121>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S12>/Merge6' incorporates:
     *  SignalConversion generated from: '<S121>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S12>/Pass Through' */
  }

  /* End of If: '<S12>/If' */

  /* Signum: '<S275>/Sign2' incorporates:
   *  UnitDelay: '<S275>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Sqrt = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Sqrt = -1.0;
  } else {
    rtb_Sqrt = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S275>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S275>/Product1' incorporates:
   *  Signum: '<S275>/Sign1'
   *  Signum: '<S275>/Sign2'
   */
  rtb_Sqrt *= rtb_Add_ik;
  if (rtIsNaN(rtb_Sqrt)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Sqrt, 256.0);
  }

  /* Switch: '<S275>/Switch' incorporates:
   *  Constant: '<S275>/Constant'
   *  Constant: '<S280>/Constant'
   *  Constant: '<S281>/Constant'
   *  Logic: '<S275>/or'
   *  Product: '<S275>/Product1'
   *  RelationalOperator: '<S280>/Compare'
   *  RelationalOperator: '<S281>/Compare'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_p = 0.0;
  }

  /* End of Switch: '<S275>/Switch' */

  /* Switch: '<S286>/Init' incorporates:
   *  UnitDelay: '<S286>/FixPt Unit Delay1'
   *  UnitDelay: '<S286>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S286>/Init' */

  /* RelationalOperator: '<S282>/Compare' incorporates:
   *  Constant: '<S282>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_p == 0.0);

  /* RelationalOperator: '<S283>/Compare' incorporates:
   *  Constant: '<S283>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_p > 0.0);

  /* Abs: '<S275>/Abs' incorporates:
   *  Sum: '<S275>/Subtract'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S275>/Switch5' incorporates:
   *  Constant: '<S275>/Constant1'
   *  Switch: '<S275>/Switch1'
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S275>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S275>/Constant4'
     *  Constant: '<S275>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S275>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S275>/Constant2'
     *  Constant: '<S275>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S275>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S275>/Lookup Table Dynamic'
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
    rtb_Sqrt = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S275>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S275>/Constant10'
     *  Constant: '<S275>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S275>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S275>/Constant7'
     *  Constant: '<S275>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S275>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S275>/Lookup Table Dynamic1'
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

    /* Switch: '<S275>/Switch3' incorporates:
     *  Constant: '<S275>/Constant1'
     *  Constant: '<S275>/Constant3'
     *  UnaryMinus: '<S275>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Sqrt = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Sqrt = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S275>/Switch3' */
  }

  /* End of Switch: '<S275>/Switch5' */

  /* Product: '<S275>/Product' incorporates:
   *  Switch: '<S275>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Sqrt * rtb_Merge1;

  /* Sum: '<S284>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_p - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S285>/Switch2' incorporates:
   *  RelationalOperator: '<S285>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S275>/Switch2' incorporates:
     *  Constant: '<S275>/Constant1'
     *  Switch: '<S275>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S275>/Switch4' incorporates:
       *  Constant: '<S275>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S275>/Switch4' incorporates:
       *  Constant: '<S275>/Constant3'
       *  UnaryMinus: '<S275>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S275>/Switch2' */

    /* Product: '<S275>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S285>/Switch' incorporates:
     *  RelationalOperator: '<S285>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S285>/Switch' */
  }

  /* End of Switch: '<S285>/Switch2' */

  /* Sum: '<S284>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S278>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S302>/Constant3'
     *  Constant: '<S302>/Constant4'
     *  Math: '<S302>/Math Function'
     *  Sum: '<S278>/Subtract'
     *  Sum: '<S302>/Add1'
     *  Sum: '<S302>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_thetay) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S278>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S278>/Switch' */

  /* Sum: '<S298>/Add1' incorporates:
   *  Constant: '<S298>/Constant3'
   *  Constant: '<S298>/Constant4'
   *  Math: '<S298>/Math Function'
   *  Sum: '<S277>/Add'
   *  Sum: '<S297>/Sum'
   *  Sum: '<S298>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_thetay +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S300>/Sum1' incorporates:
   *  Constant: '<S297>/Constant2'
   *  Product: '<S300>/Product'
   *  Sum: '<S300>/Sum'
   *  UnitDelay: '<S300>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S297>/Product' incorporates:
   *  Constant: '<S297>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

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
  rtb_Add_ih = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S297>/Saturation' */
  if (rtb_Add_ih > Steering_Heading_Control_D_UL) {
    rtb_Add_ih = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_D_LL) {
    rtb_Add_ih = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S297>/Add' incorporates:
   *  Gain: '<S297>/Gain1'
   *  Saturate: '<S297>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_ih;

  /* Sum: '<S297>/Subtract' incorporates:
   *  Constant: '<S297>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S297>/Sum2' incorporates:
   *  Gain: '<S297>/Gain2'
   *  UnitDelay: '<S297>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S301>/Switch2' incorporates:
   *  RelationalOperator: '<S301>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S297>/Subtract1' incorporates:
     *  Constant: '<S297>/Constant1'
     */
    rtb_Switch1_h = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S301>/Switch' incorporates:
     *  RelationalOperator: '<S301>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_h) {
      rtb_uDLookupTable_l = rtb_Switch1_h;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S301>/Switch' */
  }

  /* End of Switch: '<S301>/Switch2' */

  /* Saturate: '<S297>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S297>/Saturation1' */

  /* Sum: '<S297>/Add1' */
  rtb_Add_ih = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S297>/Saturation2' */
  if (rtb_Add_ih > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S297>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ih < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S297>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S297>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ih;
  }

  /* End of Saturate: '<S297>/Saturation2' */

  /* Switch: '<S277>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S288>/Switch' incorporates:
     *  Abs: '<S288>/Abs'
     *  Constant: '<S288>/Constant'
     *  Constant: '<S296>/Constant'
     *  RelationalOperator: '<S296>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S288>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S277>/Switch' */

  /* Signum: '<S287>/Sign2' incorporates:
   *  UnitDelay: '<S287>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Sqrt = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Sqrt = -1.0;
  } else {
    rtb_Sqrt = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S287>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ik = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S287>/Product1' incorporates:
   *  Signum: '<S287>/Sign1'
   *  Signum: '<S287>/Sign2'
   */
  rtb_Sqrt *= rtb_Add_ik;
  if (rtIsNaN(rtb_Sqrt)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Sqrt, 256.0);
  }

  /* Switch: '<S287>/Switch' incorporates:
   *  Constant: '<S287>/Constant'
   *  Constant: '<S289>/Constant'
   *  Constant: '<S290>/Constant'
   *  Logic: '<S287>/or'
   *  Product: '<S287>/Product1'
   *  RelationalOperator: '<S289>/Compare'
   *  RelationalOperator: '<S290>/Compare'
   *  UnitDelay: '<S287>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_j = 0.0;
  }

  /* End of Switch: '<S287>/Switch' */

  /* Switch: '<S295>/Init' incorporates:
   *  UnitDelay: '<S295>/FixPt Unit Delay1'
   *  UnitDelay: '<S295>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_j;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S295>/Init' */

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_j == 0.0);

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j > 0.0);

  /* Abs: '<S287>/Abs' incorporates:
   *  Sum: '<S287>/Subtract'
   *  UnitDelay: '<S287>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S287>/Switch5' incorporates:
   *  Constant: '<S287>/Constant1'
   *  Switch: '<S287>/Switch1'
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S287>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S287>/Constant4'
     *  Constant: '<S287>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S287>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S287>/Constant2'
     *  Constant: '<S287>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S287>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S287>/Lookup Table Dynamic'
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
    rtb_Sqrt = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S287>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S287>/Constant10'
     *  Constant: '<S287>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S287>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S287>/Constant7'
     *  Constant: '<S287>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S287>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S287>/Lookup Table Dynamic1'
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

    /* Switch: '<S287>/Switch3' incorporates:
     *  Constant: '<S287>/Constant1'
     *  Constant: '<S287>/Constant3'
     *  UnaryMinus: '<S287>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Sqrt = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Sqrt = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S287>/Switch3' */
  }

  /* End of Switch: '<S287>/Switch5' */

  /* Product: '<S287>/Product' incorporates:
   *  Switch: '<S287>/Switch1'
   */
  rtb_Switch1_h = rtb_Sqrt * rtb_Product_ku;

  /* Sum: '<S293>/Sum1' */
  rtb_Switch2_j -= rtb_Init_e;

  /* Switch: '<S294>/Switch2' incorporates:
   *  RelationalOperator: '<S294>/LowerRelop1'
   */
  if (!(rtb_Switch2_j > rtb_Switch1_h)) {
    /* Switch: '<S287>/Switch2' incorporates:
     *  Constant: '<S287>/Constant1'
     *  Constant: '<S287>/Constant3'
     *  Switch: '<S287>/Switch4'
     *  UnaryMinus: '<S287>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Sqrt = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S287>/Switch4' incorporates:
       *  Constant: '<S287>/Constant1'
       */
      rtb_Sqrt = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Sqrt = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S287>/Product2' incorporates:
     *  Switch: '<S287>/Switch2'
     */
    rtb_Switch1_h = rtb_Sqrt * rtb_Product_ku;

    /* Switch: '<S294>/Switch' incorporates:
     *  RelationalOperator: '<S294>/UpperRelop'
     */
    if (!(rtb_Switch2_j < rtb_Switch1_h)) {
      rtb_Switch1_h = rtb_Switch2_j;
    }

    /* End of Switch: '<S294>/Switch' */
  }

  /* End of Switch: '<S294>/Switch2' */

  /* Sum: '<S293>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_h + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S190>/Initialize Function' */
  /* Sum: '<S276>/Add' incorporates:
   *  Constant: '<S276>/Constant'
   *  Constant: '<S276>/Constant4'
   *  Constant: '<S276>/Constant5'
   *  Trigonometry: '<S276>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S190>/Initialize Function' */

  /* Fcn: '<S310>/r->x' incorporates:
   *  Fcn: '<S315>/r->x'
   *  Fcn: '<S320>/r->x'
   *  Fcn: '<S325>/r->x'
   */
  rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S304>/Add' incorporates:
   *  Fcn: '<S310>/r->x'
   *  Fcn: '<S311>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_p;

  /* Fcn: '<S310>/theta->y' incorporates:
   *  Fcn: '<S315>/theta->y'
   *  Fcn: '<S320>/theta->y'
   *  Fcn: '<S325>/theta->y'
   */
  rtb_Switch1_h = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S304>/Add' incorporates:
   *  Fcn: '<S310>/theta->y'
   *  Fcn: '<S311>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch1_h;

  /* Sum: '<S305>/Add' incorporates:
   *  Fcn: '<S316>/r->x'
   *  Fcn: '<S316>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_h;

  /* Sum: '<S306>/Add' incorporates:
   *  Fcn: '<S321>/r->x'
   *  Fcn: '<S321>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_h;

  /* Sum: '<S307>/Add' incorporates:
   *  Fcn: '<S326>/r->x'
   *  Fcn: '<S326>/theta->y'
   */
  rtb_Subtract1_lg = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_h;

  /* Fcn: '<S324>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Subtract1_lg, rtb_Init_e);

  /* RelationalOperator: '<S327>/Compare' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_l == 0.0);

  /* Switch: '<S323>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S323>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S323>/Switch1' */

  /* Fcn: '<S309>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_l == 0.0);

  /* Switch: '<S308>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S308>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S308>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S308>/Switch1' */

  /* Fcn: '<S314>/x->r' */
  rtb_Switch2_p = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S317>/Compare' incorporates:
   *  Constant: '<S317>/Constant'
   */
  rtb_Switch_b1 = (rtb_Switch2_p == 0.0);

  /* Switch: '<S313>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S313>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S313>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_p;
  }

  /* End of Switch: '<S313>/Switch1' */

  /* Fcn: '<S319>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S322>/Compare' incorporates:
   *  Constant: '<S322>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S318>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S318>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S318>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S318>/Switch1' */

  /* Product: '<S303>/Divide' incorporates:
   *  Abs: '<S303>/Abs'
   *  Abs: '<S303>/Abs1'
   *  Abs: '<S303>/Abs2'
   *  Abs: '<S303>/Abs3'
   *  Constant: '<S303>/Constant'
   *  MinMax: '<S303>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S303>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S323>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S323>/Switch' incorporates:
     *  Fcn: '<S324>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Subtract1_lg);
  }

  /* End of Switch: '<S323>/Switch' */

  /* Trigonometry: '<S267>/Cos4' incorporates:
   *  Switch: '<S256>/Angle_Switch'
   *  Trigonometry: '<S266>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S267>/Sin5' incorporates:
   *  UnaryMinus: '<S265>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S267>/Sin4' incorporates:
   *  Switch: '<S256>/Angle_Switch'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S267>/Cos5' incorporates:
   *  UnaryMinus: '<S265>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S267>/Subtract1' incorporates:
   *  Product: '<S267>/Product2'
   *  Product: '<S267>/Product3'
   *  Trigonometry: '<S267>/Cos4'
   *  Trigonometry: '<S267>/Sin4'
   */
  rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S267>/Subtract' incorporates:
   *  Product: '<S267>/Product'
   *  Product: '<S267>/Product1'
   *  Trigonometry: '<S267>/Cos4'
   *  Trigonometry: '<S267>/Sin4'
   */
  rtb_Switch1_h = (rtb_MatrixConcatenate_b_idx_1 * rtb_MatrixConcatenate_b_idx_0)
    - (rtb_Subtract1_k0 * rtb_uDLookupTable_l);

  /* Math: '<S267>/Hypot' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Switch1_h, rtb_Init_e);

  /* Switch: '<S267>/Switch' incorporates:
   *  Constant: '<S267>/Constant'
   *  Constant: '<S267>/Constant1'
   *  Constant: '<S268>/Constant'
   *  Product: '<S267>/Divide'
   *  Product: '<S267>/Divide1'
   *  RelationalOperator: '<S268>/Compare'
   *  Switch: '<S267>/Switch1'
   */
  if (rtb_Switch2_j > 1.0E-6) {
    rtb_Switch2_p = rtb_Init_e / rtb_Switch2_j;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_h / rtb_Switch2_j;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S267>/Switch' */

  /* Switch: '<S256>/Speed_Switch' incorporates:
   *  Abs: '<S256>/Abs'
   *  Constant: '<S264>/Constant'
   *  RelationalOperator: '<S264>/Compare'
   *  Switch: '<S256>/Angle_Switch'
   *  Trigonometry: '<S266>/Atan1'
   *  Trigonometry: '<S267>/Atan1'
   *  UnaryMinus: '<S256>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Sqrt = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S266>/Subtract1' incorporates:
     *  Product: '<S266>/Product2'
     *  Product: '<S266>/Product3'
     *  UnaryMinus: '<S256>/Unary Minus'
     */
    rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S266>/Subtract' incorporates:
     *  Product: '<S266>/Product'
     *  Product: '<S266>/Product1'
     */
    rtb_Switch2_j = (rtb_MatrixConcatenate_b_idx_1 *
                     Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S266>/Hypot' */
    rtb_Switch1_h = rt_hypotd_snf(rtb_Switch2_j, rtb_Init_e);

    /* Switch: '<S266>/Switch1' incorporates:
     *  Constant: '<S266>/Constant'
     *  Constant: '<S266>/Constant1'
     *  Constant: '<S269>/Constant'
     *  Product: '<S266>/Divide'
     *  Product: '<S266>/Divide1'
     *  RelationalOperator: '<S269>/Compare'
     *  Switch: '<S266>/Switch'
     */
    if (rtb_Switch1_h > 1.0E-6) {
      rtb_Switch2_j /= rtb_Switch1_h;
      rtb_Init_e /= rtb_Switch1_h;
    } else {
      rtb_Switch2_j = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S266>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2_j);
  } else {
    rtb_Sqrt = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S259>/Product2' incorporates:
   *  Constant: '<S259>/Constant'
   *  Switch: '<S256>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Sqrt * 1530.1401357649195;

  /* Signum: '<S254>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Sqrt = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Sqrt = -1.0;
  } else {
    rtb_Sqrt = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S254>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Sum: '<S258>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S189>/Product' incorporates:
   *  Abs: '<S254>/Abs'
   *  Abs: '<S257>/Abs'
   *  Constant: '<S260>/Constant'
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S254>/OR'
   *  Lookup_n-D: '<S257>/1-D Lookup Table'
   *  Math: '<S270>/Math Function'
   *  RelationalOperator: '<S254>/Equal1'
   *  RelationalOperator: '<S260>/Compare'
   *  Signum: '<S254>/Sign'
   *  Signum: '<S254>/Sign1'
   *  Sum: '<S257>/Add'
   *  Sum: '<S270>/Add1'
   *  Sum: '<S270>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Sqrt == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S255>/Gain' */
  rtb_Switch2_j = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S255>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S262>/Sum1' incorporates:
   *  Constant: '<S255>/Constant2'
   *  Product: '<S262>/Product'
   *  Sum: '<S262>/Sum'
   *  UnitDelay: '<S262>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S255>/Product' incorporates:
   *  Constant: '<S255>/Constant3'
   */
  rtb_Switch1_h = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S261>/Diff' incorporates:
   *  UnitDelay: '<S261>/UD'
   *
   * Block description for '<S261>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S261>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Switch1_h - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S255>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S255>/Add' incorporates:
   *  Gain: '<S255>/Gain1'
   *  Saturate: '<S255>/Saturation'
   */
  rtb_Product_ku = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Switch2_j) +
    rtb_Add_ih;

  /* Sum: '<S255>/Subtract' incorporates:
   *  Constant: '<S255>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Product_ku;

  /* Sum: '<S255>/Sum2' incorporates:
   *  Gain: '<S255>/Gain2'
   *  UnitDelay: '<S255>/Unit Delay'
   */
  rtb_Switch2_j = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S263>/Switch2' incorporates:
   *  Constant: '<S255>/Constant'
   *  RelationalOperator: '<S263>/LowerRelop1'
   *  Sum: '<S255>/Subtract'
   */
  if (!(rtb_Switch2_j > (1.0 - rtb_Product_ku))) {
    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S255>/Constant1'
     *  RelationalOperator: '<S263>/UpperRelop'
     *  Sum: '<S255>/Subtract1'
     */
    if (rtb_Switch2_j < (-1.0 - rtb_Product_ku)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Product_ku;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_j;
    }

    /* End of Switch: '<S263>/Switch' */
  }

  /* End of Switch: '<S263>/Switch2' */

  /* Saturate: '<S255>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch2_j = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch2_j = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S255>/Saturation1' */

  /* Sum: '<S255>/Add1' */
  rtb_Add_ih = rtb_Product_ku + rtb_Switch2_j;

  /* Saturate: '<S255>/Saturation2' */
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

  /* End of Saturate: '<S255>/Saturation2' */

  /* Sum: '<S271>/Add1' incorporates:
   *  Constant: '<S271>/Constant3'
   *  Constant: '<S271>/Constant4'
   *  Math: '<S271>/Math Function'
   *  Sum: '<S271>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S273>/Sum1' incorporates:
   *  Constant: '<S258>/Constant2'
   *  Product: '<S273>/Product'
   *  Sum: '<S273>/Sum'
   *  UnitDelay: '<S273>/Unit Delay1'
   */
  rtb_Product_ku = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S258>/Product' incorporates:
   *  Constant: '<S258>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Product_ku * Steering_Motor_Control_D;

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
  rtb_Add_ih = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S258>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S258>/Add' incorporates:
   *  Gain: '<S258>/Gain1'
   *  Saturate: '<S258>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_ih;

  /* Sum: '<S258>/Subtract' incorporates:
   *  Constant: '<S258>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S258>/Sum2' incorporates:
   *  Gain: '<S258>/Gain2'
   *  UnitDelay: '<S258>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S274>/Switch2' incorporates:
   *  Constant: '<S258>/Constant'
   *  RelationalOperator: '<S274>/LowerRelop1'
   *  Sum: '<S258>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S258>/Constant1'
     *  RelationalOperator: '<S274>/UpperRelop'
     *  Sum: '<S258>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S274>/Switch' */
  }

  /* End of Switch: '<S274>/Switch2' */

  /* Saturate: '<S258>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S258>/Saturation1' */

  /* Sum: '<S258>/Add1' */
  rtb_Add_ih = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S258>/Saturation2' */
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

  /* End of Saturate: '<S258>/Saturation2' */

  /* Product: '<S303>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S308>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S308>/Switch' incorporates:
     *  Fcn: '<S309>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S308>/Switch' */

  /* Trigonometry: '<S204>/Cos4' incorporates:
   *  Switch: '<S193>/Angle_Switch'
   *  Trigonometry: '<S203>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S204>/Sin5' incorporates:
   *  UnaryMinus: '<S202>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S204>/Sin4' incorporates:
   *  Switch: '<S193>/Angle_Switch'
   *  Trigonometry: '<S203>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S204>/Cos5' incorporates:
   *  UnaryMinus: '<S202>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S204>/Subtract1' incorporates:
   *  Product: '<S204>/Product2'
   *  Product: '<S204>/Product3'
   *  Trigonometry: '<S204>/Cos4'
   *  Trigonometry: '<S204>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S204>/Subtract' incorporates:
   *  Product: '<S204>/Product'
   *  Product: '<S204>/Product1'
   *  Trigonometry: '<S204>/Cos4'
   *  Trigonometry: '<S204>/Sin4'
   */
  rtb_Subtract1_b = (rtb_MatrixConcatenate_b_idx_1 *
                     rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 *
    rtb_uDLookupTable_l);

  /* Math: '<S204>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_b, rtb_Add_pw);

  /* Switch: '<S204>/Switch' incorporates:
   *  Constant: '<S204>/Constant'
   *  Constant: '<S204>/Constant1'
   *  Constant: '<S205>/Constant'
   *  Product: '<S204>/Divide'
   *  Product: '<S204>/Divide1'
   *  RelationalOperator: '<S205>/Compare'
   *  Switch: '<S204>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_p = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_b / rtb_Hypot_g5;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S204>/Switch' */

  /* Switch: '<S193>/Speed_Switch' incorporates:
   *  Abs: '<S193>/Abs'
   *  Constant: '<S201>/Constant'
   *  RelationalOperator: '<S201>/Compare'
   *  Switch: '<S193>/Angle_Switch'
   *  Trigonometry: '<S203>/Atan1'
   *  Trigonometry: '<S204>/Atan1'
   *  UnaryMinus: '<S193>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Sqrt = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S203>/Subtract1' incorporates:
     *  Product: '<S203>/Product2'
     *  Product: '<S203>/Product3'
     *  UnaryMinus: '<S193>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S203>/Subtract' incorporates:
     *  Product: '<S203>/Product'
     *  Product: '<S203>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract1_k0 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S203>/Hypot' */
    rtb_Subtract1_b = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S203>/Constant'
     *  Constant: '<S203>/Constant1'
     *  Constant: '<S206>/Constant'
     *  Product: '<S203>/Divide'
     *  Product: '<S203>/Divide1'
     *  RelationalOperator: '<S206>/Compare'
     *  Switch: '<S203>/Switch'
     */
    if (rtb_Subtract1_b > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_b;
      rtb_Add_pw /= rtb_Subtract1_b;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S203>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Sqrt = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S196>/Product2' incorporates:
   *  Constant: '<S196>/Constant'
   *  Switch: '<S193>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Sqrt * 1530.1401357649195;

  /* Signum: '<S191>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Sqrt = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Sqrt = -1.0;
  } else {
    rtb_Sqrt = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S191>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S194>/Add' incorporates:
   *  Sum: '<S195>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S186>/Product' incorporates:
   *  Abs: '<S191>/Abs'
   *  Abs: '<S194>/Abs'
   *  Constant: '<S197>/Constant'
   *  Constant: '<S207>/Constant3'
   *  Constant: '<S207>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S191>/OR'
   *  Lookup_n-D: '<S194>/1-D Lookup Table'
   *  Math: '<S207>/Math Function'
   *  RelationalOperator: '<S191>/Equal1'
   *  RelationalOperator: '<S197>/Compare'
   *  Signum: '<S191>/Sign'
   *  Signum: '<S191>/Sign1'
   *  Sum: '<S194>/Add'
   *  Sum: '<S207>/Add1'
   *  Sum: '<S207>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Sqrt == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S192>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S192>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S199>/Sum1' incorporates:
   *  Constant: '<S192>/Constant2'
   *  Product: '<S199>/Product'
   *  Sum: '<S199>/Sum'
   *  UnitDelay: '<S199>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S192>/Product' incorporates:
   *  Constant: '<S192>/Constant3'
   */
  rtb_Subtract1_b = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S198>/Diff' incorporates:
   *  UnitDelay: '<S198>/UD'
   *
   * Block description for '<S198>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S198>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_b - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S192>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S192>/Add' incorporates:
   *  Gain: '<S192>/Gain1'
   *  Saturate: '<S192>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Hypot_g5) +
    rtb_Add_ih;

  /* Sum: '<S192>/Subtract' incorporates:
   *  Constant: '<S192>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S192>/Sum2' incorporates:
   *  Gain: '<S192>/Gain2'
   *  UnitDelay: '<S192>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S200>/Switch2' incorporates:
   *  Constant: '<S192>/Constant'
   *  RelationalOperator: '<S200>/LowerRelop1'
   *  Sum: '<S192>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S200>/Switch' incorporates:
     *  Constant: '<S192>/Constant1'
     *  RelationalOperator: '<S200>/UpperRelop'
     *  Sum: '<S192>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S200>/Switch' */
  }

  /* End of Switch: '<S200>/Switch2' */

  /* Saturate: '<S192>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S192>/Saturation1' */

  /* Sum: '<S192>/Add1' */
  rtb_Add_ih = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S192>/Saturation2' */
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

  /* End of Saturate: '<S192>/Saturation2' */

  /* Sum: '<S208>/Add1' incorporates:
   *  Constant: '<S208>/Constant3'
   *  Constant: '<S208>/Constant4'
   *  Math: '<S208>/Math Function'
   *  Sum: '<S208>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S210>/Sum1' incorporates:
   *  Constant: '<S195>/Constant2'
   *  Product: '<S210>/Product'
   *  Sum: '<S210>/Sum'
   *  UnitDelay: '<S210>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S195>/Product' incorporates:
   *  Constant: '<S195>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S209>/Diff' incorporates:
   *  UnitDelay: '<S209>/UD'
   *
   * Block description for '<S209>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S209>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S195>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S195>/Add' incorporates:
   *  Gain: '<S195>/Gain1'
   *  Saturate: '<S195>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Switch2_p) +
    rtb_Add_ih;

  /* Sum: '<S195>/Subtract' incorporates:
   *  Constant: '<S195>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S195>/Sum2' incorporates:
   *  Gain: '<S195>/Gain2'
   *  UnitDelay: '<S195>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S211>/Switch2' incorporates:
   *  Constant: '<S195>/Constant'
   *  RelationalOperator: '<S211>/LowerRelop1'
   *  Sum: '<S195>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S211>/Switch' incorporates:
     *  Constant: '<S195>/Constant1'
     *  RelationalOperator: '<S211>/UpperRelop'
     *  Sum: '<S195>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S211>/Switch' */
  }

  /* End of Switch: '<S211>/Switch2' */

  /* Saturate: '<S195>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S195>/Saturation1' */

  /* Sum: '<S195>/Add1' */
  rtb_Add_ih = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S195>/Saturation2' */
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

  /* End of Saturate: '<S195>/Saturation2' */

  /* Product: '<S303>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S313>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S313>/Switch' incorporates:
     *  Fcn: '<S314>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S313>/Switch' */

  /* Trigonometry: '<S225>/Cos4' incorporates:
   *  Switch: '<S214>/Angle_Switch'
   *  Trigonometry: '<S224>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S225>/Sin5' incorporates:
   *  UnaryMinus: '<S223>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S225>/Sin4' incorporates:
   *  Switch: '<S214>/Angle_Switch'
   *  Trigonometry: '<S224>/Sin4'
   */
  rtb_Subtract1_k0 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S225>/Cos5' incorporates:
   *  UnaryMinus: '<S223>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S225>/Subtract1' incorporates:
   *  Product: '<S225>/Product2'
   *  Product: '<S225>/Product3'
   *  Trigonometry: '<S225>/Cos4'
   *  Trigonometry: '<S225>/Sin4'
   */
  rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract1_k0 * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S225>/Subtract' incorporates:
   *  Product: '<S225>/Product'
   *  Product: '<S225>/Product1'
   *  Trigonometry: '<S225>/Cos4'
   *  Trigonometry: '<S225>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_MatrixConcatenate_b_idx_1 *
    rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_k0 * rtb_uDLookupTable_l);

  /* Math: '<S225>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_g);

  /* Switch: '<S225>/Switch' incorporates:
   *  Constant: '<S225>/Constant'
   *  Constant: '<S225>/Constant1'
   *  Constant: '<S226>/Constant'
   *  Product: '<S225>/Divide'
   *  Product: '<S225>/Divide1'
   *  RelationalOperator: '<S226>/Compare'
   *  Switch: '<S225>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_p = rtb_Subtract1_g / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S225>/Switch' */

  /* Switch: '<S214>/Speed_Switch' incorporates:
   *  Abs: '<S214>/Abs'
   *  Constant: '<S222>/Constant'
   *  RelationalOperator: '<S222>/Compare'
   *  Switch: '<S214>/Angle_Switch'
   *  Trigonometry: '<S224>/Atan1'
   *  Trigonometry: '<S225>/Atan1'
   *  UnaryMinus: '<S214>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Sqrt = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S224>/Subtract1' incorporates:
     *  Product: '<S224>/Product2'
     *  Product: '<S224>/Product3'
     *  UnaryMinus: '<S214>/Unary Minus'
     */
    rtb_Subtract1_g = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S224>/Subtract' incorporates:
     *  Product: '<S224>/Product'
     *  Product: '<S224>/Product1'
     */
    rtb_Subtract1_k0 = (rtb_MatrixConcatenate_b_idx_1 *
                        Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract1_k0 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S224>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract1_k0,
      rtb_Subtract1_g);

    /* Switch: '<S224>/Switch1' incorporates:
     *  Constant: '<S224>/Constant'
     *  Constant: '<S224>/Constant1'
     *  Constant: '<S227>/Constant'
     *  Product: '<S224>/Divide'
     *  Product: '<S224>/Divide1'
     *  RelationalOperator: '<S227>/Compare'
     *  Switch: '<S224>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract1_k0 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract1_g /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract1_k0 = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S224>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract1_k0);
  } else {
    rtb_Sqrt = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S217>/Product2' incorporates:
   *  Constant: '<S217>/Constant'
   *  Switch: '<S214>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Sqrt * 1530.1401357649195;

  /* Signum: '<S212>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Sqrt = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Sqrt = -1.0;
  } else {
    rtb_Sqrt = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S212>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S215>/Add' incorporates:
   *  Sum: '<S216>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S187>/Product' incorporates:
   *  Abs: '<S212>/Abs'
   *  Abs: '<S215>/Abs'
   *  Constant: '<S218>/Constant'
   *  Constant: '<S228>/Constant3'
   *  Constant: '<S228>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S212>/OR'
   *  Lookup_n-D: '<S215>/1-D Lookup Table'
   *  Math: '<S228>/Math Function'
   *  RelationalOperator: '<S212>/Equal1'
   *  RelationalOperator: '<S218>/Compare'
   *  Signum: '<S212>/Sign'
   *  Signum: '<S212>/Sign1'
   *  Sum: '<S215>/Add'
   *  Sum: '<S228>/Add1'
   *  Sum: '<S228>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Sqrt == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S213>/Gain' */
  rtb_Subtract1_g = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S213>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S220>/Sum1' incorporates:
   *  Constant: '<S213>/Constant2'
   *  Product: '<S220>/Product'
   *  Sum: '<S220>/Sum'
   *  UnitDelay: '<S220>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Switch2_p -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S213>/Product' incorporates:
   *  Constant: '<S213>/Constant3'
   */
  rtb_Subtract1_k0 = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S219>/Diff' incorporates:
   *  UnitDelay: '<S219>/UD'
   *
   * Block description for '<S219>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S219>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_k0 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S213>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S213>/Add' incorporates:
   *  Gain: '<S213>/Gain1'
   *  Saturate: '<S213>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Subtract1_g) +
    rtb_Add_ih;

  /* Sum: '<S213>/Subtract' incorporates:
   *  Constant: '<S213>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S213>/Sum2' incorporates:
   *  Gain: '<S213>/Gain2'
   *  UnitDelay: '<S213>/Unit Delay'
   */
  rtb_Subtract1_g = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S221>/Switch2' incorporates:
   *  Constant: '<S213>/Constant'
   *  RelationalOperator: '<S221>/LowerRelop1'
   *  Sum: '<S213>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S221>/Switch' incorporates:
     *  Constant: '<S213>/Constant1'
     *  RelationalOperator: '<S221>/UpperRelop'
     *  Sum: '<S213>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S221>/Switch' */
  }

  /* End of Switch: '<S221>/Switch2' */

  /* Saturate: '<S213>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S213>/Saturation1' */

  /* Sum: '<S213>/Add1' */
  rtb_Add_ih = rtb_Hypot_b + rtb_Subtract1_g;

  /* Saturate: '<S213>/Saturation2' */
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

  /* End of Saturate: '<S213>/Saturation2' */

  /* Sum: '<S229>/Add1' incorporates:
   *  Constant: '<S229>/Constant3'
   *  Constant: '<S229>/Constant4'
   *  Math: '<S229>/Math Function'
   *  Sum: '<S229>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S231>/Sum1' incorporates:
   *  Constant: '<S216>/Constant2'
   *  Product: '<S231>/Product'
   *  Sum: '<S231>/Sum'
   *  UnitDelay: '<S231>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S216>/Product' incorporates:
   *  Constant: '<S216>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S230>/Diff' incorporates:
   *  UnitDelay: '<S230>/UD'
   *
   * Block description for '<S230>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S230>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S216>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S216>/Add' incorporates:
   *  Gain: '<S216>/Gain1'
   *  Saturate: '<S216>/Saturation'
   */
  rtb_Add_ik = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_ih;

  /* Sum: '<S216>/Subtract' incorporates:
   *  Constant: '<S216>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ik;

  /* Sum: '<S216>/Sum2' incorporates:
   *  Gain: '<S216>/Gain2'
   *  UnitDelay: '<S216>/Unit Delay'
   */
  rtb_Subtract1_jx = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S232>/Switch2' incorporates:
   *  Constant: '<S216>/Constant'
   *  RelationalOperator: '<S232>/LowerRelop1'
   *  Sum: '<S216>/Subtract'
   */
  if (!(rtb_Subtract1_jx > (1.0 - rtb_Add_ik))) {
    /* Switch: '<S232>/Switch' incorporates:
     *  Constant: '<S216>/Constant1'
     *  RelationalOperator: '<S232>/UpperRelop'
     *  Sum: '<S216>/Subtract1'
     */
    if (rtb_Subtract1_jx < (-1.0 - rtb_Add_ik)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ik;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_jx;
    }

    /* End of Switch: '<S232>/Switch' */
  }

  /* End of Switch: '<S232>/Switch2' */

  /* Saturate: '<S216>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_jx = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_jx = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S216>/Saturation1' */

  /* Sum: '<S216>/Add1' */
  rtb_Add_ih = rtb_Add_ik + rtb_Subtract1_jx;

  /* Saturate: '<S216>/Saturation2' */
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

  /* End of Saturate: '<S216>/Saturation2' */

  /* Product: '<S303>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S318>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S318>/Switch' incorporates:
     *  Fcn: '<S319>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S318>/Switch' */

  /* Trigonometry: '<S246>/Cos4' incorporates:
   *  Switch: '<S235>/Angle_Switch'
   *  Trigonometry: '<S245>/Cos4'
   */
  rtb_Add_ik = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S246>/Sin5' incorporates:
   *  UnaryMinus: '<S244>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S246>/Sin4' incorporates:
   *  Switch: '<S235>/Angle_Switch'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Subtract1_cj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S246>/Cos5' incorporates:
   *  UnaryMinus: '<S244>/Unary Minus'
   */
  rtb_Switch2_p = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S246>/Subtract1' incorporates:
   *  Product: '<S246>/Product2'
   *  Product: '<S246>/Product3'
   *  Trigonometry: '<S246>/Cos4'
   *  Trigonometry: '<S246>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_ik * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_cj * rtb_Switch2_p);

  /* Sum: '<S246>/Subtract' incorporates:
   *  Product: '<S246>/Product'
   *  Product: '<S246>/Product1'
   *  Trigonometry: '<S246>/Cos4'
   *  Trigonometry: '<S246>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ik * rtb_Switch2_p) - (rtb_Subtract1_cj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S246>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch2_l);

  /* Switch: '<S246>/Switch' incorporates:
   *  Constant: '<S246>/Constant'
   *  Constant: '<S246>/Constant1'
   *  Constant: '<S247>/Constant'
   *  Product: '<S246>/Divide'
   *  Product: '<S246>/Divide1'
   *  RelationalOperator: '<S247>/Compare'
   *  Switch: '<S246>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_l /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_p = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_p = 1.0;
  }

  /* End of Switch: '<S246>/Switch' */

  /* Switch: '<S235>/Speed_Switch' incorporates:
   *  Abs: '<S235>/Abs'
   *  Constant: '<S243>/Constant'
   *  RelationalOperator: '<S243>/Compare'
   *  Switch: '<S235>/Angle_Switch'
   *  Trigonometry: '<S245>/Atan1'
   *  Trigonometry: '<S246>/Atan1'
   *  UnaryMinus: '<S235>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_p)) > 1.5707963267948966) {
    rtb_Sqrt = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S245>/Subtract1' incorporates:
     *  Product: '<S245>/Product2'
     *  Product: '<S245>/Product3'
     *  UnaryMinus: '<S235>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ik * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S245>/Subtract' incorporates:
     *  Product: '<S245>/Product'
     *  Product: '<S245>/Product1'
     */
    rtb_Subtract1_cj = (rtb_Add_ik * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_cj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S245>/Hypot' */
    rtb_Add_ik = rt_hypotd_snf(rtb_Subtract1_cj, rtb_Subtract_n);

    /* Switch: '<S245>/Switch1' incorporates:
     *  Constant: '<S245>/Constant'
     *  Constant: '<S245>/Constant1'
     *  Constant: '<S248>/Constant'
     *  Product: '<S245>/Divide'
     *  Product: '<S245>/Divide1'
     *  RelationalOperator: '<S248>/Compare'
     *  Switch: '<S245>/Switch'
     */
    if (rtb_Add_ik > 1.0E-6) {
      rtb_Subtract1_cj /= rtb_Add_ik;
      rtb_Add_ik = rtb_Subtract_n / rtb_Add_ik;
    } else {
      rtb_Subtract1_cj = 1.0;
      rtb_Add_ik = 0.0;
    }

    /* End of Switch: '<S245>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ik, rtb_Subtract1_cj);
  } else {
    rtb_Sqrt = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S238>/Product2' incorporates:
   *  Constant: '<S238>/Constant'
   *  Switch: '<S235>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Sqrt * 1530.1401357649195;

  /* Signum: '<S233>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Sqrt = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Sqrt = -1.0;
  } else {
    rtb_Sqrt = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S233>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ik = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ik = -1.0;
  } else {
    rtb_Add_ik = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Sum: '<S237>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S188>/Product' incorporates:
   *  Abs: '<S233>/Abs'
   *  Abs: '<S236>/Abs'
   *  Constant: '<S239>/Constant'
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S233>/OR'
   *  Lookup_n-D: '<S236>/1-D Lookup Table'
   *  Math: '<S249>/Math Function'
   *  RelationalOperator: '<S233>/Equal1'
   *  RelationalOperator: '<S239>/Compare'
   *  Signum: '<S233>/Sign'
   *  Signum: '<S233>/Sign1'
   *  Sum: '<S236>/Add'
   *  Sum: '<S249>/Add1'
   *  Sum: '<S249>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Sqrt == rtb_Add_ik) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled38, Code_Gen_Model_ConstP.pooled37, 1U);

  /* Gain: '<S234>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S234>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S241>/Sum1' incorporates:
   *  Constant: '<S234>/Constant2'
   *  Product: '<S241>/Product'
   *  Sum: '<S241>/Sum'
   *  UnitDelay: '<S241>/Unit Delay1'
   */
  rtb_Add_ik = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S234>/Product' incorporates:
   *  Constant: '<S234>/Constant3'
   */
  rtb_Subtract1_cj = rtb_Add_ik * Drive_Motor_Control_D;

  /* Sum: '<S240>/Diff' incorporates:
   *  UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Subtract1_cj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S234>/Saturation' */
  if (rtb_Add_ih > Drive_Motor_Control_D_UL) {
    rtb_Add_ih = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Drive_Motor_Control_D_LL) {
    rtb_Add_ih = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S234>/Add' incorporates:
   *  Gain: '<S234>/Gain1'
   *  Saturate: '<S234>/Saturation'
   */
  rtb_Add_kv = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_n) +
    rtb_Add_ih;

  /* Sum: '<S234>/Subtract' incorporates:
   *  Constant: '<S234>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_kv;

  /* Sum: '<S234>/Sum2' incorporates:
   *  Gain: '<S234>/Gain2'
   *  UnitDelay: '<S234>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S242>/Switch2' incorporates:
   *  Constant: '<S234>/Constant'
   *  RelationalOperator: '<S242>/LowerRelop1'
   *  Sum: '<S234>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_kv))) {
    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S234>/Constant1'
     *  RelationalOperator: '<S242>/UpperRelop'
     *  Sum: '<S234>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_kv)) {
      rtb_Switch2_p = -1.0 - rtb_Add_kv;
    } else {
      rtb_Switch2_p = rtb_Switch2_l;
    }

    /* End of Switch: '<S242>/Switch' */
  }

  /* End of Switch: '<S242>/Switch2' */

  /* Saturate: '<S234>/Saturation1' */
  if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_Switch2_p;
  }

  /* End of Saturate: '<S234>/Saturation1' */

  /* Sum: '<S234>/Add1' */
  rtb_Add_ih = rtb_Add_kv + rtb_Subtract_n;

  /* Saturate: '<S234>/Saturation2' */
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

  /* End of Saturate: '<S234>/Saturation2' */

  /* Sum: '<S250>/Add1' incorporates:
   *  Constant: '<S250>/Constant3'
   *  Constant: '<S250>/Constant4'
   *  Math: '<S250>/Math Function'
   *  Sum: '<S250>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S252>/Sum1' incorporates:
   *  Constant: '<S237>/Constant2'
   *  Product: '<S252>/Product'
   *  Sum: '<S252>/Sum'
   *  UnitDelay: '<S252>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S237>/Product' incorporates:
   *  Constant: '<S237>/Constant3'
   */
  rtb_Add_kv = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

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
  rtb_Add_ih = rtb_Add_kv - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S237>/Saturation' */
  if (rtb_Add_ih > Steering_Motor_Control_D_UL) {
    rtb_Add_ih = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ih < Steering_Motor_Control_D_LL) {
    rtb_Add_ih = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S237>/Add' incorporates:
   *  Gain: '<S237>/Gain1'
   *  Saturate: '<S237>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Add_ih;

  /* Sum: '<S237>/Subtract' incorporates:
   *  Constant: '<S237>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_l;

  /* Sum: '<S237>/Sum2' incorporates:
   *  Gain: '<S237>/Gain2'
   *  UnitDelay: '<S237>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S253>/Switch2' incorporates:
   *  Constant: '<S237>/Constant'
   *  RelationalOperator: '<S253>/LowerRelop1'
   *  Sum: '<S237>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Sum: '<S237>/Subtract1' incorporates:
     *  Constant: '<S237>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_l;

    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S237>/Constant1'
     *  RelationalOperator: '<S253>/UpperRelop'
     *  Sum: '<S237>/Subtract1'
     */
    if (!(rtb_Switch2_l < (-1.0 - rtb_Add_l))) {
      rtb_Switch2_p = rtb_Switch2_l;
    }

    /* End of Switch: '<S253>/Switch' */
  }

  /* End of Switch: '<S253>/Switch2' */

  /* Saturate: '<S237>/Saturation1' */
  if (rtb_Switch2_p > Steering_Motor_Control_I_UL) {
    rtb_Switch2_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Steering_Motor_Control_I_LL) {
    rtb_Switch2_p = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S237>/Saturation1' */

  /* Sum: '<S237>/Add1' */
  rtb_Add_ih = rtb_Add_l + rtb_Switch2_p;

  /* Saturate: '<S237>/Saturation2' */
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

  /* End of Saturate: '<S237>/Saturation2' */

  /* Gain: '<S100>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S101>/Compare' incorporates:
   *  Constant: '<S100>/Constant'
   *  Constant: '<S101>/Constant'
   */
  rtb_Is_Absolute_Translation = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S100>/Switch1' incorporates:
   *  UnitDelay: '<S100>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S100>/Switch1' */

  /* Sum: '<S100>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

  /* Gain: '<S100>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S100>/Switch' incorporates:
   *  UnitDelay: '<S100>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S100>/Switch' */

  /* Sum: '<S100>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S2>/OR' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant2'
   *  RelationalOperator: '<S21>/FixPt Relational Operator'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  Sum: '<S2>/Sum'
   *  UnitDelay: '<S21>/Delay Input1'
   *  UnitDelay: '<S2>/Unit Delay'
   *
   * Block description for '<S21>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Is_Absolute_Steering = (((Code_Gen_Model_DW.UnitDelay_DSTATE_ef + 0.02) >=
    5.0) || (TEST_Arm_Dist_Reset_TOF > Code_Gen_Model_DW.DelayInput1_DSTATE));

  /* Sum: '<S23>/Sum1' incorporates:
   *  Constant: '<S17>/Filter_Coefficient'
   *  Inport: '<Root>/TOF_Dist_Back_Lower'
   *  Lookup_n-D: '<S17>/TOF_Linearization'
   *  Product: '<S23>/Product'
   *  Sum: '<S23>/Sum'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Lower_TOF_Lin_Filt += (look1_binlxpw
    (Code_Gen_Model_U.TOF_Dist_Back_Lower, Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled40, 1U) -
    Code_Gen_Model_B.Back_Lower_TOF_Lin_Filt) * TOF_Low_Pass_Coeff;

  /* RelationalOperator: '<S22>/FixPt Relational Operator' incorporates:
   *  Constant: '<S2>/Constant3'
   *  UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Is_Absolute_Translation = (TEST_Arm_Dist_Reset_Hard_Coded >
    Code_Gen_Model_DW.DelayInput1_DSTATE_d);

  /* Switch: '<S17>/Store_dist1' incorporates:
   *  Constant: '<S17>/Filter_Coefficient1'
   *  Constant: '<S17>/Filter_Coefficient2'
   *  DataTypeConversion: '<S17>/Data Type Conversion'
   *  Logic: '<S17>/AND'
   *  Switch: '<S17>/Store_dist'
   *  UnitDelay: '<S17>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Store_dist1 = HC_Dist_Reset_Value_Back_Lower;
  } else if (rtb_Is_Absolute_Steering && (TOF_Dist_Reset_Enable != 0.0)) {
    /* Switch: '<S17>/Store_dist' */
    rtb_Store_dist1 = Code_Gen_Model_B.Back_Lower_TOF_Lin_Filt;
  } else {
    rtb_Store_dist1 = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
  }

  /* End of Switch: '<S17>/Store_dist1' */

  /* Sum: '<S17>/Add' incorporates:
   *  Constant: '<S17>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   *  Product: '<S17>/Product'
   */
  Code_Gen_Model_B.Back_Lower_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Lower * Dist_Per_Rev_Back_Lower) +
    rtb_Store_dist1;

  /* Sum: '<S24>/Sum1' incorporates:
   *  Constant: '<S18>/Filter_Coefficient'
   *  Inport: '<Root>/TOF_Dist_Back_Upper'
   *  Lookup_n-D: '<S18>/TOF_Linearization'
   *  Product: '<S24>/Product'
   *  Sum: '<S24>/Sum'
   *  UnitDelay: '<S24>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Upper_TOF_Lin_Filt += (look1_binlxpw
    (Code_Gen_Model_U.TOF_Dist_Back_Upper, Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled40, 1U) -
    Code_Gen_Model_B.Back_Upper_TOF_Lin_Filt) * TOF_Low_Pass_Coeff;

  /* Switch: '<S18>/Store_dist1' incorporates:
   *  Constant: '<S18>/Filter_Coefficient1'
   *  Constant: '<S18>/Filter_Coefficient2'
   *  DataTypeConversion: '<S18>/Data Type Conversion'
   *  Logic: '<S18>/AND'
   *  Switch: '<S18>/Store_dist'
   *  UnitDelay: '<S18>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Store_dist1_m = HC_Dist_Reset_Value_Back_Upper;
  } else if (rtb_Is_Absolute_Steering && (TOF_Dist_Reset_Enable != 0.0)) {
    /* Switch: '<S18>/Store_dist' */
    rtb_Store_dist1_m = Code_Gen_Model_B.Back_Upper_TOF_Lin_Filt;
  } else {
    rtb_Store_dist1_m = Code_Gen_Model_DW.UnitDelay_DSTATE_ob;
  }

  /* End of Switch: '<S18>/Store_dist1' */

  /* Sum: '<S18>/Add' incorporates:
   *  Constant: '<S18>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   *  Product: '<S18>/Product'
   */
  Code_Gen_Model_B.Back_Upper_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Upper * Dist_Per_Rev_Back_Upper) +
    rtb_Store_dist1_m;

  /* Sum: '<S103>/Add' incorporates:
   *  Constant: '<S103>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 428.625;

  /* Sqrt: '<S103>/Sqrt' incorporates:
   *  Math: '<S103>/Math Function'
   *  Sum: '<S103>/Subtract'
   */
  rtb_Sqrt = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
                  Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S25>/Sum1' incorporates:
   *  Constant: '<S19>/Filter_Coefficient'
   *  Inport: '<Root>/TOF_Dist_Front'
   *  Lookup_n-D: '<S19>/TOF_Linearization'
   *  Product: '<S25>/Product'
   *  Sum: '<S25>/Sum'
   *  UnitDelay: '<S25>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_TOF_Lin_Filt += (look1_binlxpw
    (Code_Gen_Model_U.TOF_Dist_Front, Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled40, 1U) -
    Code_Gen_Model_B.Front_Arm_TOF_Lin_Filt) * TOF_Low_Pass_Coeff;

  /* Switch: '<S19>/Store_dist1' incorporates:
   *  Constant: '<S19>/Filter_Coefficient1'
   *  Constant: '<S19>/Filter_Coefficient2'
   *  DataTypeConversion: '<S19>/Data Type Conversion'
   *  Logic: '<S19>/AND'
   *  Switch: '<S19>/Store_dist'
   *  UnitDelay: '<S19>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Store_dist1_d = HC_Dist_Reset_Value_Front;
  } else if (rtb_Is_Absolute_Steering && (TOF_Dist_Reset_Enable != 0.0)) {
    /* Switch: '<S19>/Store_dist' */
    rtb_Store_dist1_d = Code_Gen_Model_B.Front_Arm_TOF_Lin_Filt;
  } else {
    rtb_Store_dist1_d = Code_Gen_Model_DW.UnitDelay_DSTATE_ab;
  }

  /* End of Switch: '<S19>/Store_dist1' */

  /* Sum: '<S19>/Add' incorporates:
   *  Constant: '<S19>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S19>/Product'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + rtb_Store_dist1_d;

  /* Sqrt: '<S106>/Sqrt' incorporates:
   *  Constant: '<S106>/Constant24'
   *  Math: '<S106>/Math Function'
   *  Sum: '<S106>/Add'
   *  Sum: '<S106>/Subtract'
   */
  rtb_Rotationmatrixfromlocalto_0 = sqrt(((Code_Gen_Model_B.Front_Arm_Length +
    506.41249999999997) * (Code_Gen_Model_B.Front_Arm_Length +
    506.41249999999997)) + Code_Gen_Model_ConstB.MathFunction1_m);

  /* Sum: '<S26>/Sum1' incorporates:
   *  Constant: '<S20>/Filter_Coefficient'
   *  Inport: '<Root>/TOF_Dist_Ball_Screw'
   *  Lookup_n-D: '<S20>/TOF_Linearization'
   *  Product: '<S26>/Product'
   *  Sum: '<S26>/Sum'
   *  UnitDelay: '<S26>/Unit Delay1'
   */
  Code_Gen_Model_B.Ball_Screw_TOF_Lin_Filt += (look1_binlxpw
    (Code_Gen_Model_U.TOF_Dist_Ball_Screw, Code_Gen_Model_ConstP.pooled40,
     Code_Gen_Model_ConstP.pooled40, 1U) -
    Code_Gen_Model_B.Ball_Screw_TOF_Lin_Filt) * TOF_Low_Pass_Coeff;

  /* Switch: '<S20>/Store_dist1' incorporates:
   *  Constant: '<S20>/Filter_Coefficient1'
   *  Constant: '<S20>/Filter_Coefficient2'
   *  DataTypeConversion: '<S20>/Data Type Conversion'
   *  Logic: '<S20>/AND'
   *  Switch: '<S20>/Store_dist'
   *  UnitDelay: '<S20>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Store_dist1_k = HC_Dist_Reset_Value_Ball_Screw;
  } else if (rtb_Is_Absolute_Steering && (TOF_Dist_Reset_Enable != 0.0)) {
    /* Switch: '<S20>/Store_dist' */
    rtb_Store_dist1_k = Code_Gen_Model_B.Ball_Screw_TOF_Lin_Filt;
  } else {
    rtb_Store_dist1_k = Code_Gen_Model_DW.UnitDelay_DSTATE_l0;
  }

  /* End of Switch: '<S20>/Store_dist1' */

  /* Sum: '<S20>/Add' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   *  Product: '<S20>/Product'
   */
  Code_Gen_Model_B.Ball_Screw_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw) +
    rtb_Store_dist1_k;

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
    -0.079745222282890008)) - 158.75) - 158.75) *
                    (rtb_Rotationmatrixfromlocalto_0 / 300.0)) + 158.75) +
    158.75;
  rtb_Rotationmatrixfromlocalto_0 = (((d * -0.079745222282890008) + 12.7) + (y *
    0.996815278536125)) * (rtb_Rotationmatrixfromlocalto_0 / 300.0);
  d = sqrt(((rtb_Rotationmatrixfromlocalto_0 - 25.4) *
            (rtb_Rotationmatrixfromlocalto_0 - 25.4)) + (rtb_Switch2_l *
            rtb_Switch2_l));
  y = rtb_Sqrt * rtb_Sqrt;
  d = (((d * d) - 24840.962499999998) + y) / (2.0 * d);
  y = sqrt(y - (d * d));
  alpha = atan((rtb_Rotationmatrixfromlocalto_0 - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(alpha);
  alpha = sin(alpha);
  rtb_Sqrt = (d * cos_alpha) - (y * alpha);
  d = ((d * alpha) + (y * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((rtb_Rotationmatrixfromlocalto_0 - d) / (rtb_Switch2_l -
    rtb_Sqrt)) - -0.16186298985390718;
  y = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  rtb_Rotationmatrixfromlocalto_0 = (d - (42.875 * cos_alpha)) - (-76.0 * y);
  rtb_Sqrt = ((rtb_Sqrt - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Rotationmatrixfromlocalto_0 - 465.697) *
    (rtb_Rotationmatrixfromlocalto_0 - 465.697)) + (rtb_Sqrt * rtb_Sqrt);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Rotationmatrixfromlocalto_0;

  /* Gain: '<S11>/Gain2' incorporates:
   *  MATLAB Function: '<S11>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch2_l;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Constant: '<S11>/Constant'
   */
  rtb_Sqrt = floor(TEST_State_Request);
  if ((rtIsNaN(rtb_Sqrt)) || (rtIsInf(rtb_Sqrt))) {
    rtb_Sqrt = 0.0;
  } else {
    rtb_Sqrt = fmod(rtb_Sqrt, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_Sqrt < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Sqrt)))))) : ((int32_T)((uint8_T)rtb_Sqrt)));

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* Gain: '<S11>/Gain1' incorporates:
   *  Constant: '<S11>/Constant25'
   */
  rtb_Switch2_l = 0.03937007874015748 * TEST_Speaker_Height;

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
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_l;
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
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Switch2_l + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Switch2_l - Tol_Height))) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Desired_Angle = TEST_Speaker_Angle;
        Code_Gen_Model_B.Desired_Height = rtb_Switch2_l;
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
  rtb_Sqrt = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S11>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S11>/Constant10'
   *  Constant: '<S11>/Constant11'
   *  Constant: '<S11>/Constant13'
   *  Constant: '<S11>/Constant14'
   *  Constant: '<S11>/Constant15'
   *  Constant: '<S11>/Constant21'
   */
  rtb_Switch2_l = cos(rtb_Sqrt);
  rtb_Sqrt = sin(rtb_Sqrt);
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_l;
  rtb_Reshapey[0] = (sqrt((Code_Gen_Model_B.Desired_Gap *
    Code_Gen_Model_B.Desired_Gap) - ((Code_Gen_Model_B.Desired_Height - 465.697)
    * (Code_Gen_Model_B.Desired_Height - 465.697))) - 50.027) + ((rtb_Switch2_l *
    42.875) + ((-rtb_Sqrt) * -76.0));
  rtb_Reshapey[1] = ((rtb_Sqrt * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Switch2_l = sqrt(((rtb_Reshapey[1] - 25.4) * (rtb_Reshapey[1] - 25.4)) +
                       (rtb_Reshapey[0] * rtb_Reshapey[0]));
  rtb_Minus_n[0] = ((rtb_Rotationmatrixfromlocalto_0 * 155.54999999999998) +
                    ((-rtb_Sqrt) * -25.4)) + rtb_Reshapey[0];
  rtb_Minus_n[1] = ((rtb_Sqrt * 155.54999999999998) +
                    (rtb_Rotationmatrixfromlocalto_0 * -25.4)) + rtb_Reshapey[1];
  cos_alpha = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                   (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Sum1_bs = 158.75 - ((317.5 - rtb_Minus_n[0]) * (300.0 / cos_alpha));
  rtb_Product_hqg = ((300.0 / cos_alpha) * rtb_Minus_n[1]) - 12.7;

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
  rtb_Sqrt = fmin(fmax(42.585, rtb_Switch2_l), 307.975);
  rtb_Switch2_l -= rtb_Sqrt;
  if (rtb_Switch2_l >= 9.5) {
    Code_Gen_Model_B.Desired_Back_Lower_Dist = fmin(rtb_Switch2_l,
      455.61249999999995);
  } else {
    Code_Gen_Model_B.Desired_Back_Lower_Dist = 9.5;
  }

  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Sqrt;

  /* End of MATLAB Function: '<S11>/Back_AA_To_Extentions' */

  /* Sum: '<S109>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Sum: '<S114>/Sum1' incorporates:
   *  Constant: '<S109>/Constant2'
   *  Product: '<S114>/Product'
   *  Sum: '<S114>/Sum'
   *  UnitDelay: '<S114>/Unit Delay1'
   */
  rtb_Sqrt = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bm) *
              AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bm;

  /* Product: '<S109>/Product' incorporates:
   *  Constant: '<S109>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Sqrt * AA_Deriv_Gain;

  /* Sum: '<S113>/Diff' incorporates:
   *  UnitDelay: '<S113>/UD'
   *
   * Block description for '<S113>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S113>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Rotationmatrixfromlocalto_0 - Code_Gen_Model_DW.UD_DSTATE_n;

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
    /* Outport: '<Root>/Back_Upper_Arm_DC' */
    Code_Gen_Model_Y.Back_Upper_Arm_DC = AA_TC_UL;
  } else if (rtb_Add_ih < AA_TC_LL) {
    /* Outport: '<Root>/Back_Upper_Arm_DC' */
    Code_Gen_Model_Y.Back_Upper_Arm_DC = AA_TC_LL;
  } else {
    /* Outport: '<Root>/Back_Upper_Arm_DC' */
    Code_Gen_Model_Y.Back_Upper_Arm_DC = rtb_Add_ih;
  }

  /* End of Saturate: '<S109>/Saturation2' */

  /* Sum: '<S110>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Sum: '<S116>/Sum1' incorporates:
   *  Constant: '<S110>/Constant2'
   *  Product: '<S116>/Product'
   *  Sum: '<S116>/Sum'
   *  UnitDelay: '<S116>/Unit Delay1'
   */
  d = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_l) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l;

  /* Product: '<S110>/Product' incorporates:
   *  Constant: '<S110>/Constant3'
   */
  y = d * AA_Deriv_Gain;

  /* Sum: '<S115>/Diff' incorporates:
   *  UnitDelay: '<S115>/UD'
   *
   * Block description for '<S115>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S115>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = y - Code_Gen_Model_DW.UD_DSTATE_bi;

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
    /* Outport: '<Root>/Back_Lower_Arm_DC' */
    Code_Gen_Model_Y.Back_Lower_Arm_DC = AA_TC_UL;
  } else if (rtb_Add_ih < AA_TC_LL) {
    /* Outport: '<Root>/Back_Lower_Arm_DC' */
    Code_Gen_Model_Y.Back_Lower_Arm_DC = AA_TC_LL;
  } else {
    /* Outport: '<Root>/Back_Lower_Arm_DC' */
    Code_Gen_Model_Y.Back_Lower_Arm_DC = rtb_Add_ih;
  }

  /* End of Saturate: '<S110>/Saturation2' */

  /* Sum: '<S105>/Subtract1' incorporates:
   *  Constant: '<S105>/Constant24'
   *  MATLAB Function: '<S11>/Get_Arm_Lengths'
   *  Math: '<S105>/Math Function'
   *  Sqrt: '<S105>/Sqrt'
   *  Sum: '<S105>/Subtract'
   */
  rtb_Add_ih = sqrt((cos_alpha * cos_alpha) -
                    Code_Gen_Model_ConstB.MathFunction1_d) - 506.41249999999997;

  /* Saturate: '<S105>/Saturation' */
  if (rtb_Add_ih > 455.61249999999995) {
    /* Saturate: '<S105>/Saturation' */
    Code_Gen_Model_B.Desired_Front_Dist = 455.61249999999995;
  } else if (rtb_Add_ih < 9.5) {
    /* Saturate: '<S105>/Saturation' */
    Code_Gen_Model_B.Desired_Front_Dist = 9.5;
  } else {
    /* Saturate: '<S105>/Saturation' */
    Code_Gen_Model_B.Desired_Front_Dist = rtb_Add_ih;
  }

  /* End of Saturate: '<S105>/Saturation' */

  /* Sum: '<S111>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Sum: '<S118>/Sum1' incorporates:
   *  Constant: '<S111>/Constant2'
   *  Product: '<S118>/Product'
   *  Sum: '<S118>/Sum'
   *  UnitDelay: '<S118>/Unit Delay1'
   */
  cos_alpha = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bg) *
               AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bg;

  /* Product: '<S111>/Product' incorporates:
   *  Constant: '<S111>/Constant3'
   */
  alpha = cos_alpha * AA_Deriv_Gain;

  /* Sum: '<S117>/Diff' incorporates:
   *  UnitDelay: '<S117>/UD'
   *
   * Block description for '<S117>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S117>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = alpha - Code_Gen_Model_DW.UD_DSTATE_g;

  /* Saturate: '<S111>/Saturation' */
  if (rtb_Add_ih > AA_Deriv_UL) {
    rtb_Add_ih = AA_Deriv_UL;
  } else if (rtb_Add_ih < AA_Deriv_LL) {
    rtb_Add_ih = AA_Deriv_LL;
  }

  /* Sum: '<S111>/Add' incorporates:
   *  Gain: '<S111>/Gain1'
   *  Saturate: '<S111>/Saturation'
   */
  rtb_Add_ih += AA_Prop_Gain * rtb_Switch2_l;

  /* Saturate: '<S111>/Saturation2' */
  if (rtb_Add_ih > AA_TC_UL) {
    /* Outport: '<Root>/Front_Arm_DC' */
    Code_Gen_Model_Y.Front_Arm_DC = AA_TC_UL;
  } else if (rtb_Add_ih < AA_TC_LL) {
    /* Outport: '<Root>/Front_Arm_DC' */
    Code_Gen_Model_Y.Front_Arm_DC = AA_TC_LL;
  } else {
    /* Outport: '<Root>/Front_Arm_DC' */
    Code_Gen_Model_Y.Front_Arm_DC = rtb_Add_ih;
  }

  /* End of Saturate: '<S111>/Saturation2' */

  /* Sum: '<S112>/Sum' incorporates:
   *  MATLAB Function: '<S11>/Get_Arm_Lengths'
   */
  rtb_Switch2_l = sqrt((rtb_Sum1_bs * rtb_Sum1_bs) + (rtb_Product_hqg *
    rtb_Product_hqg)) - Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S120>/Sum1' incorporates:
   *  Constant: '<S112>/Constant2'
   *  Product: '<S120>/Product'
   *  Sum: '<S120>/Sum'
   *  UnitDelay: '<S120>/Unit Delay1'
   */
  rtb_Sum1_bs = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                 BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S112>/Product' incorporates:
   *  Constant: '<S112>/Constant3'
   */
  rtb_Product_hqg = rtb_Sum1_bs * BS_Deriv_Gain;

  /* Sum: '<S119>/Diff' incorporates:
   *  UnitDelay: '<S119>/UD'
   *
   * Block description for '<S119>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S119>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ih = rtb_Product_hqg - Code_Gen_Model_DW.UD_DSTATE_ii;

  /* Saturate: '<S112>/Saturation' */
  if (rtb_Add_ih > BS_Deriv_UL) {
    rtb_Add_ih = BS_Deriv_UL;
  } else if (rtb_Add_ih < BS_Deriv_LL) {
    rtb_Add_ih = BS_Deriv_LL;
  }

  /* Sum: '<S112>/Add' incorporates:
   *  Gain: '<S112>/Gain1'
   *  Saturate: '<S112>/Saturation'
   */
  rtb_Add_ih += BS_Prop_Gain * rtb_Switch2_l;

  /* Saturate: '<S112>/Saturation2' */
  if (rtb_Add_ih > BS_TC_UL) {
    /* Outport: '<Root>/Ball_Skrew_Arm_DC' */
    Code_Gen_Model_Y.Ball_Skrew_Arm_DC = BS_TC_UL;
  } else if (rtb_Add_ih < BS_TC_LL) {
    /* Outport: '<Root>/Ball_Skrew_Arm_DC' */
    Code_Gen_Model_Y.Ball_Skrew_Arm_DC = BS_TC_LL;
  } else {
    /* Outport: '<Root>/Ball_Skrew_Arm_DC' */
    Code_Gen_Model_Y.Ball_Skrew_Arm_DC = rtb_Add_ih;
  }

  /* End of Saturate: '<S112>/Saturation2' */

  /* Lookup_n-D: '<S6>/1-D Lookup Table' incorporates:
   *  Constant: '<S6>/Constant6'
   */
  rtb_Switch2_l = look1_binlcpw(TEST_Shooter_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 3U);

  /* Chart: '<S6>/Chart_Intake_and_Shooter' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant7'
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S28>/FixPt Relational Operator'
   *  RelationalOperator: '<S29>/FixPt Relational Operator'
   *  RelationalOperator: '<S30>/FixPt Relational Operator'
   *  RelationalOperator: '<S31>/FixPt Relational Operator'
   *  RelationalOperator: '<S32>/FixPt Relational Operator'
   *  UnitDelay: '<S28>/Delay Input1'
   *  UnitDelay: '<S29>/Delay Input1'
   *  UnitDelay: '<S30>/Delay Input1'
   *  UnitDelay: '<S31>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
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
   *
   * Block description for '<S32>/Delay Input1':
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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Switch2_l;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Switch2_l;
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
      if (TEST_Request_Note_Pickup_AND_Transfer >
          Code_Gen_Model_DW.DelayInput1_DSTATE_o) {
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
      } else if (TEST_Request_Note_Transfer >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_n) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
        Code_Gen_Model_B.Note_State_ID = 2.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (TEST_Request_Note_Pickup >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_f) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (TEST_Request_Note_Eject >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (TEST_Request_Note_Speaker >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_e) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_Switch2_l;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_Switch2_l;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/Chart_Intake_and_Shooter' */

  /* Sum: '<S33>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S33>/Add' incorporates:
   *  Gain: '<S33>/Gain'
   *  Gain: '<S33>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Switch2_l);

  /* Switch: '<S33>/Switch' incorporates:
   *  Constant: '<S33>/Constant2'
   *  Switch: '<S6>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S33>/Sum2' incorporates:
     *  Gain: '<S33>/Gain2'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_Switch2_l = (Shooter_Motor_Control_I * rtb_Switch2_l) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S33>/Subtract' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_Switch2_n = 1.0 - rtb_Add_ih;

    /* Switch: '<S35>/Switch2' incorporates:
     *  Constant: '<S33>/Constant'
     *  RelationalOperator: '<S35>/LowerRelop1'
     *  Sum: '<S33>/Subtract'
     */
    if (!(rtb_Switch2_l > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S33>/Subtract1' incorporates:
       *  Constant: '<S33>/Constant1'
       */
      rtb_Switch2_n = -1.0 - rtb_Add_ih;

      /* Switch: '<S35>/Switch' incorporates:
       *  Constant: '<S33>/Constant1'
       *  RelationalOperator: '<S35>/UpperRelop'
       *  Sum: '<S33>/Subtract1'
       */
      if (!(rtb_Switch2_l < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_n = rtb_Switch2_l;
      }

      /* End of Switch: '<S35>/Switch' */
    }

    /* End of Switch: '<S35>/Switch2' */

    /* Saturate: '<S33>/Saturation1' */
    if (rtb_Switch2_n > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_l = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_n < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_l = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_l = rtb_Switch2_n;
    }

    /* End of Saturate: '<S33>/Saturation1' */

    /* Sum: '<S33>/Add1' */
    rtb_Add_ih += rtb_Switch2_l;

    /* Saturate: '<S33>/Saturation2' */
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

    /* End of Saturate: '<S33>/Saturation2' */
  } else {
    rtb_Switch2_l = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S33>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S33>/Switch' */

  /* Sum: '<S34>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_n = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S34>/Add' incorporates:
   *  Gain: '<S34>/Gain'
   *  Gain: '<S34>/Gain1'
   */
  rtb_Add_ih = (Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_n);

  /* Switch: '<S34>/Switch' incorporates:
   *  Constant: '<S34>/Constant2'
   *  Switch: '<S6>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S34>/Sum2' incorporates:
     *  Gain: '<S34>/Gain2'
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_Switch2_n = (Shooter_Motor_Control_I * rtb_Switch2_n) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S34>/Subtract' incorporates:
     *  Constant: '<S34>/Constant'
     */
    rtb_Switch2_c = 1.0 - rtb_Add_ih;

    /* Switch: '<S36>/Switch2' incorporates:
     *  Constant: '<S34>/Constant'
     *  RelationalOperator: '<S36>/LowerRelop1'
     *  Sum: '<S34>/Subtract'
     */
    if (!(rtb_Switch2_n > (1.0 - rtb_Add_ih))) {
      /* Sum: '<S34>/Subtract1' incorporates:
       *  Constant: '<S34>/Constant1'
       */
      rtb_Switch2_c = -1.0 - rtb_Add_ih;

      /* Switch: '<S36>/Switch' incorporates:
       *  Constant: '<S34>/Constant1'
       *  RelationalOperator: '<S36>/UpperRelop'
       *  Sum: '<S34>/Subtract1'
       */
      if (!(rtb_Switch2_n < (-1.0 - rtb_Add_ih))) {
        rtb_Switch2_c = rtb_Switch2_n;
      }

      /* End of Switch: '<S36>/Switch' */
    }

    /* End of Switch: '<S36>/Switch2' */

    /* Saturate: '<S34>/Saturation1' */
    if (rtb_Switch2_c > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_c < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_n = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_n = rtb_Switch2_c;
    }

    /* End of Saturate: '<S34>/Saturation1' */

    /* Sum: '<S34>/Add1' */
    rtb_Add_ih += rtb_Switch2_n;

    /* Saturate: '<S34>/Saturation2' */
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

    /* End of Saturate: '<S34>/Saturation2' */
  } else {
    rtb_Switch2_n = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S34>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S34>/Switch' */

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

  /* Outport: '<Root>/Ball_Screw_Motor_DutyCycle' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Code_Gen_Model_Y.Ball_Screw_Motor_DutyCycle = TEST_Ball_Screw_Motor_DC;

  /* Update for UnitDelay: '<S92>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S93>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S94>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S95>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S95>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' incorporates:
     *  Bias: '<S149>/Bias'
     *  Merge: '<S123>/Merge1'
     *  S-Function (sfix_udelay): '<S8>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' incorporates:
     *  Bias: '<S149>/Bias'
     *  Merge: '<S123>/Merge1'
     *  S-Function (sfix_udelay): '<S8>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S37>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S57>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S37>/A'
   *  Delay: '<S37>/MemoryX'
   */
  rtb_Add_ih = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_c = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S37>/MemoryX' incorporates:
   *  Constant: '<S37>/B'
   *  Product: '<S57>/A[k]*xhat[k|k-1]'
   *  Product: '<S57>/B[k]*u[k]'
   *  Sum: '<S57>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Add_ih) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_c) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S91>/UD'
   *
   * Block description for '<S91>/UD':
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

  /* Update for UnitDelay: '<S286>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S286>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S300>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S297>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S295>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S295>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S262>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S261>/UD'
   *
   * Block description for '<S261>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch1_h;

  /* Update for UnitDelay: '<S255>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2_j;

  /* Update for UnitDelay: '<S273>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Product_ku;

  /* Update for UnitDelay: '<S272>/UD'
   *
   * Block description for '<S272>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S258>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S199>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S198>/UD'
   *
   * Block description for '<S198>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S192>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S210>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S209>/UD'
   *
   * Block description for '<S209>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S195>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S220>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S219>/UD'
   *
   * Block description for '<S219>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_k0;

  /* Update for UnitDelay: '<S213>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S231>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S230>/UD'
   *
   * Block description for '<S230>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S216>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_jx;

  /* Update for UnitDelay: '<S241>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ik;

  /* Update for UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_cj;

  /* Update for UnitDelay: '<S234>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S252>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S251>/UD'
   *
   * Block description for '<S251>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_kv;

  /* Update for UnitDelay: '<S237>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Switch2_p;

  /* Update for UnitDelay: '<S100>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

  /* Update for UnitDelay: '<S100>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sum: '<S2>/Sum'
   */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ef += 0.02;

  /* Update for UnitDelay: '<S21>/Delay Input1' incorporates:
   *  Constant: '<S2>/Constant2'
   *
   * Block description for '<S21>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = TEST_Arm_Dist_Reset_TOF;

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_Store_dist1;

  /* Update for UnitDelay: '<S22>/Delay Input1' incorporates:
   *  Constant: '<S2>/Constant3'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_d = TEST_Arm_Dist_Reset_Hard_Coded;

  /* Update for UnitDelay: '<S18>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ob = rtb_Store_dist1_m;

  /* Update for UnitDelay: '<S19>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ab = rtb_Store_dist1_d;

  /* Update for UnitDelay: '<S20>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l0 = rtb_Store_dist1_k;

  /* Update for UnitDelay: '<S114>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bm = rtb_Sqrt;

  /* Update for UnitDelay: '<S113>/UD'
   *
   * Block description for '<S113>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_n = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S116>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_l = d;

  /* Update for UnitDelay: '<S115>/UD'
   *
   * Block description for '<S115>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_bi = y;

  /* Update for UnitDelay: '<S118>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bg = cos_alpha;

  /* Update for UnitDelay: '<S117>/UD'
   *
   * Block description for '<S117>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_g = alpha;

  /* Update for UnitDelay: '<S120>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Sum1_bs;

  /* Update for UnitDelay: '<S119>/UD'
   *
   * Block description for '<S119>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Product_hqg;

  /* Update for UnitDelay: '<S28>/Delay Input1' incorporates:
   *  Constant: '<S6>/Constant'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = TEST_Request_Note_Pickup;

  /* Update for UnitDelay: '<S29>/Delay Input1' incorporates:
   *  Constant: '<S6>/Constant1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = TEST_Request_Note_Transfer;

  /* Update for UnitDelay: '<S30>/Delay Input1' incorporates:
   *  Constant: '<S6>/Constant2'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = TEST_Request_Note_Eject;

  /* Update for UnitDelay: '<S31>/Delay Input1' incorporates:
   *  Constant: '<S6>/Constant3'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = TEST_Request_Note_Pickup_AND_Transfer;

  /* Update for UnitDelay: '<S32>/Delay Input1' incorporates:
   *  Constant: '<S6>/Constant7'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = TEST_Request_Note_Speaker;

  /* Update for UnitDelay: '<S33>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Switch2_l;

  /* Update for UnitDelay: '<S34>/Unit Delay' */
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

    /* InitializeConditions for Delay: '<S37>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S286>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S295>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S346>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S12>/Spline Path Following Enabled' */
    /* Start for If: '<S127>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S123>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S127>/Robot_Index_Is_Valid' */
    /* Start for If: '<S130>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S130>/Circle_Check_Valid' */
    /* Start for If: '<S132>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S130>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S127>/Robot_Index_Is_Valid' */
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

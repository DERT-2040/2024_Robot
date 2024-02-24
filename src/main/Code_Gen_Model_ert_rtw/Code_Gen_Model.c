/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.88
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Feb 23 21:58:57 2024
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

/* Named constants for Chart: '<S7>/Chart_Intake_and_Shooter' */
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

/* Named constants for Chart: '<S12>/Chart_Shooter_Position' */
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
                                        *   '<S133>/Constant2'
                                        *   '<S134>/Constant2'
                                        *   '<S135>/Constant2'
                                        */
real_T AA_Deriv_Gain = 0.0;            /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S133>/Constant3'
                                        *   '<S134>/Constant3'
                                        *   '<S135>/Constant3'
                                        */
real_T AA_Deriv_LL = -0.5;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S133>/Saturation'
                                        *   '<S134>/Saturation'
                                        *   '<S135>/Saturation'
                                        */
real_T AA_Deriv_UL = 0.5;              /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S133>/Saturation'
                                        *   '<S134>/Saturation'
                                        *   '<S135>/Saturation'
                                        */
real_T AA_Position_Dec_RL = -0.508;    /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S137>/Constant1'
                                        *   '<S138>/Constant1'
                                        *   '<S140>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 0.508;     /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S137>/Constant3'
                                        *   '<S138>/Constant3'
                                        *   '<S140>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S133>/Gain1'
                                        *   '<S134>/Gain1'
                                        *   '<S135>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S133>/Saturation2'
                                        *   '<S134>/Saturation2'
                                        *   '<S135>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S133>/Saturation2'
                                        *   '<S134>/Saturation2'
                                        *   '<S135>/Saturation2'
                                        */
real_T Amp_Angle = -50.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 571.5;                /* Variable: Amp_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 919.48;            /* Variable: Amp_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Arm_Calibration_Timeout = 5.0;  /* Variable: Arm_Calibration_Timeout
                                        * Referenced by:
                                        *   '<S6>/Unit Delay1'
                                        *   '<S26>/Constant'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S136>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S136>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S136>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S136>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -0.0508;   /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S139>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 0.0508;    /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S139>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S136>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S136>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S136>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S389>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S387>/Constant'
                                         *   '<S387>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S389>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S387>/Constant1'
                                        */
real_T Cal_Back_Lower_Arm_DC = 0.2;    /* Variable: Cal_Back_Lower_Arm_DC
                                        * Referenced by: '<S12>/Constant32'
                                        */
real_T Cal_Back_Upper_Arm_DC = 0.2;    /* Variable: Cal_Back_Upper_Arm_DC
                                        * Referenced by: '<S12>/Constant27'
                                        */
real_T Cal_Ball_Screw_Arm_DC = 0.2;    /* Variable: Cal_Ball_Screw_Arm_DC
                                        * Referenced by: '<S12>/Constant34'
                                        */
real_T Cal_Front_Arm_DC = 0.2;         /* Variable: Cal_Front_Arm_DC
                                        * Referenced by: '<S12>/Constant33'
                                        */
real_T Dist_Per_Rev_Back_Lower = 6.9822;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S18>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 6.9822;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S19>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.3175;/* Variable: Dist_Per_Rev_Ball_Screw
                                         * Referenced by: '<S20>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Front = 6.9822;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S21>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Motor_Current_Back_Lower = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Back_Lower
                                 * Referenced by: '<S18>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Back_Upper = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Back_Upper
                                 * Referenced by: '<S19>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Ball_Screw = 10.0;
                                /* Variable: Dist_Reset_Motor_Current_Ball_Screw
                                 * Referenced by: '<S20>/Dist_Reset_Motor_Current_Threshold'
                                 */
real_T Dist_Reset_Motor_Current_Front = 10.0;
                                     /* Variable: Dist_Reset_Motor_Current_Front
                                      * Referenced by: '<S21>/Dist_Reset_Motor_Current_Threshold'
                                      */
real_T Dist_Reset_Value_Back_Lower = 11.69;/* Variable: Dist_Reset_Value_Back_Lower
                                            * Referenced by: '<S18>/Dist_Reset_Value'
                                            */
real_T Dist_Reset_Value_Back_Upper = 271.145;/* Variable: Dist_Reset_Value_Back_Upper
                                              * Referenced by: '<S19>/Dist_Reset_Value'
                                              */
real_T Dist_Reset_Value_Ball_Screw = 241.3;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by: '<S20>/Dist_Reset_Value'
                                            */
real_T Dist_Reset_Value_Front = 9.5;   /* Variable: Dist_Reset_Value_Front
                                        * Referenced by: '<S21>/Dist_Reset_Value'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S316>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S232>/Constant3'
                                        *   '<S253>/Constant3'
                                        *   '<S274>/Constant3'
                                        *   '<S295>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S232>/Constant2'
                                   *   '<S253>/Constant2'
                                   *   '<S274>/Constant2'
                                   *   '<S295>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        *   '<S295>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        *   '<S295>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S232>/Gain'
                                            *   '<S253>/Gain'
                                            *   '<S274>/Gain'
                                            *   '<S295>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S232>/Gain2'
                                        *   '<S253>/Gain2'
                                        *   '<S274>/Gain2'
                                        *   '<S295>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        *   '<S295>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        *   '<S295>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S232>/Gain1'
                                        *   '<S253>/Gain1'
                                        *   '<S274>/Gain1'
                                        *   '<S295>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S237>/Constant'
                            *   '<S258>/Constant'
                            *   '<S279>/Constant'
                            *   '<S300>/Constant'
                            */
real_T Front_AA_Bot_Max_Ext = 455.6125;/* Variable: Front_AA_Bot_Max_Ext
                                        * Referenced by: '<S129>/Saturation'
                                        */
real_T Front_AA_Bot_Min_Ext = 9.5;     /* Variable: Front_AA_Bot_Min_Ext
                                        * Referenced by: '<S129>/Saturation'
                                        */
real_T Gamepad_Stick_Down_Threshold = -0.5;/* Variable: Gamepad_Stick_Down_Threshold
                                            * Referenced by:
                                            *   '<S22>/Constant'
                                            *   '<S24>/Constant'
                                            */
real_T Gamepad_Stick_Up_Threshold = 0.5;/* Variable: Gamepad_Stick_Up_Threshold
                                         * Referenced by:
                                         *   '<S23>/Constant'
                                         *   '<S25>/Constant'
                                         */
real_T KF_Enable = 0.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S9>/Constant1'
                                        *   '<S9>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S9>/Constant'
                                          */
real_T LoadShooter_Angle = 35.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 279.4;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 624.84;    /* Variable: LoadShooter_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 100.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 0.5;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 0.2;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.1;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S11>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S124>/Constant'
                                        */
real_T Servo_Position_Deploy = 1.0;    /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Position_Store = 0.0;     /* Variable: Servo_Position_Store
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S57>/Gain'
                                           *   '<S58>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S57>/Gain2'
                                         *   '<S58>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S57>/Saturation1'
                                          *   '<S58>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S57>/Saturation1'
                                         *   '<S58>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S57>/Gain1'
                                         *   '<S58>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 450.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                      */
real_T Speaker_Gap = 279.4;            /* Variable: Speaker_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S217>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S217>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S164>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S177>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S217>/Constant3'
                                     */
real_T Stage_Angle = 26.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 215.9;              /* Variable: Stage_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 502.92;          /* Variable: Stage_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S371>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S337>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S337>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S337>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S337>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S336>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S337>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S337>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S337>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S337>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S337>/Constant1'
                                   *   '<S337>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S337>/Constant'
                                   *   '<S337>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S327>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S327>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S327>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S327>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S327>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S327>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S235>/Constant3'
                                        *   '<S256>/Constant3'
                                        *   '<S277>/Constant3'
                                        *   '<S298>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S235>/Constant2'
                                *   '<S256>/Constant2'
                                *   '<S277>/Constant2'
                                *   '<S298>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S235>/Saturation'
                                           *   '<S256>/Saturation'
                                           *   '<S277>/Saturation'
                                           *   '<S298>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S235>/Saturation'
                                          *   '<S256>/Saturation'
                                          *   '<S277>/Saturation'
                                          *   '<S298>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S235>/Gain2'
                                         *   '<S256>/Gain2'
                                         *   '<S277>/Gain2'
                                         *   '<S298>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S235>/Saturation1'
                                             *   '<S256>/Saturation1'
                                             *   '<S277>/Saturation1'
                                             *   '<S298>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S235>/Saturation1'
                                            *   '<S256>/Saturation1'
                                            *   '<S277>/Saturation1'
                                            *   '<S298>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S235>/Gain1'
                                        *   '<S256>/Gain1'
                                        *   '<S277>/Gain1'
                                        *   '<S298>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S369>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S369>/Constant1'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S7>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S7>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 45.0;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by:
                                        *   '<S7>/Constant6'
                                        *   '<S12>/Constant26'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S12>/Constant25'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 3.175;                /* Variable: Tol_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S315>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S315>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S315>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S315>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S315>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S315>/Constant3'
                                    */
real_T Trap_Angle = -26.5;             /* Variable: Trap_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 693.42;              /* Variable: Trap_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 1079.5;           /* Variable: Trap_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
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
  real_T rtb_Add_ie;
  real_T rtb_Add_kl;
  real_T rtb_Add_l;
  real_T rtb_Add_ls;
  real_T rtb_Add_nh;
  real_T rtb_Add_pw;
  real_T rtb_Ball_Screw_Length;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_Merge1;
  real_T rtb_Product_ku;
  real_T rtb_Sqrt;
  real_T rtb_Sqrt_f;
  real_T rtb_Subtract1_bm;
  real_T rtb_Subtract1_dk;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_hq;
  real_T rtb_Subtract1_kj;
  real_T rtb_Subtract1_m;
  real_T rtb_Subtract1_m4;
  real_T rtb_Subtract_n;
  real_T rtb_Sum2_e;
  real_T rtb_Switch;
  real_T rtb_Switch1_b4;
  real_T rtb_Switch1_f;
  real_T rtb_Switch1_g;
  real_T rtb_Switch1_m5;
  real_T rtb_Switch1_n;
  real_T rtb_Switch1_nj;
  real_T rtb_Switch1_p;
  real_T rtb_Switch2;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_h;
  real_T rtb_Switch2_id;
  real_T rtb_Switch2_l;
  real_T rtb_Switch2_o;
  real_T rtb_Switch4_g;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T sqrt_input;
  int32_T i;
  int32_T rtb_Assignment_tmp;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s189_iter;
  uint16_T s214_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_AND_g;
  boolean_T rtb_Compare_o;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S222>/Add1' incorporates:
   *  Constant: '<S222>/Constant3'
   *  Constant: '<S222>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S222>/Math Function'
   *  Sum: '<S14>/Add'
   *  Sum: '<S222>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S116>/Diff'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S223>/Add1' incorporates:
   *  Constant: '<S223>/Constant3'
   *  Constant: '<S223>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S223>/Math Function'
   *  Sum: '<S14>/Add1'
   *  Sum: '<S223>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S117>/Diff'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S224>/Add1' incorporates:
   *  Constant: '<S224>/Constant3'
   *  Constant: '<S224>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S224>/Math Function'
   *  Sum: '<S14>/Add2'
   *  Sum: '<S224>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S118>/Diff'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S225>/Add1' incorporates:
   *  Constant: '<S225>/Constant3'
   *  Constant: '<S225>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S225>/Math Function'
   *  Sum: '<S14>/Add3'
   *  Sum: '<S225>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product3' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S119>/Diff'
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
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S11>/Product7' incorporates:
   *  Fcn: '<S120>/r->x'
   *  Fcn: '<S120>/theta->y'
   *  Fcn: '<S121>/r->x'
   *  Fcn: '<S121>/theta->y'
   *  Fcn: '<S122>/r->x'
   *  Fcn: '<S122>/theta->y'
   *  Fcn: '<S123>/r->x'
   *  Fcn: '<S123>/theta->y'
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

  /* Switch: '<S6>/Switch9' incorporates:
   *  Constant: '<S6>/Constant10'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  RelationalOperator: '<S45>/FixPt Relational Operator'
   *  Sum: '<S6>/Sum'
   *  UnitDelay: '<S45>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay1'
   *
   * Block description for '<S45>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_thetay = 0.02;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE + 0.02;
  }

  /* End of Switch: '<S6>/Switch9' */

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   */
  Code_Gen_Model_B.Arm_Dist_Cal_Active = (rtb_thetay <= Arm_Calibration_Timeout);

  /* SignalConversion: '<S6>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S6>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S6>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* SignalConversion: '<S6>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S6>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* SignalConversion: '<S6>/Signal Copy7' incorporates:
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   *  RelationalOperator: '<S36>/Compare'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy17' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   *  RelationalOperator: '<S32>/Compare'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* SignalConversion: '<S6>/Signal Copy19' incorporates:
   *  Constant: '<S30>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   *  RelationalOperator: '<S30>/Compare'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* SignalConversion: '<S6>/Signal Copy18' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   *  RelationalOperator: '<S31>/Compare'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy10' incorporates:
   *  Constant: '<S27>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   *  RelationalOperator: '<S27>/Compare'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S29>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/Gamepad_B3_X'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S6>/OR1'
   *  Logic: '<S6>/OR2'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  Switch: '<S6>/Switch1'
   *  Switch: '<S6>/Switch2'
   *  Switch: '<S6>/Switch3'
   */
  if (Code_Gen_Model_U.Joystick_Right_B1 != 0.0) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_B3_X != 0.0) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Switch: '<S6>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant2'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant3'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant4'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     *  Switch: '<S6>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 0.0;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S6>/Switch4' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Inport: '<Root>/Joystick_Left_B10'
   *  Inport: '<Root>/Joystick_Right_B10'
   *  Logic: '<S6>/OR3'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  Switch: '<S6>/Switch5'
   *  Switch: '<S6>/Switch6'
   *  Switch: '<S6>/Switch7'
   *  Switch: '<S6>/Switch8'
   */
  if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <= Gamepad_Stick_Down_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Up_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Switch: '<S6>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y <=
             Gamepad_Stick_Down_Threshold) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant7'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= Gamepad_Stick_Up_Threshold)
  {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant8'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  } else if ((Code_Gen_Model_U.Joystick_Left_B10 != 0.0) ||
             (Code_Gen_Model_U.Joystick_Right_B10 != 0.0)) {
    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S6>/Constant9'
     *  Switch: '<S6>/Switch4'
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 4.0;
  }

  /* End of Switch: '<S6>/Switch4' */

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Switch1_b4 = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Switch1_b4)) || (rtIsInf(rtb_Switch1_b4))) {
    rtb_Switch1_b4 = 0.0;
  } else {
    rtb_Switch1_b4 = fmod(rtb_Switch1_b4, 4.294967296E+9);
  }

  switch ((rtb_Switch1_b4 < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Switch1_b4)))) :
          ((int32_T)((uint32_T)rtb_Switch1_b4))) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* SignalConversion generated from: '<S5>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S5>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  SignalConversion generated from: '<S5>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S5>/Constant2'
     *  SignalConversion generated from: '<S5>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S10>/Merge3' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
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

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S5>/Constant7'
     *  SignalConversion generated from: '<S5>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge9' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S10>/Merge10' incorporates:
     *  Constant: '<S5>/Constant10'
     *  SignalConversion generated from: '<S5>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p = false;

    /* Merge: '<S10>/Merge11' incorporates:
     *  Constant: '<S5>/Constant11'
     *  SignalConversion generated from: '<S5>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S10>/Merge12' incorporates:
     *  Constant: '<S5>/Constant12'
     *  SignalConversion generated from: '<S5>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

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
     *  Merge: '<S10>/Merge8'
     */
    switch ((int32_T)Spline_Ref_Poses_switch_num) {
     case 1:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant4_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S10>/Merge9' incorporates:
       *  Constant: '<S3>/Constant4'
       *  Constant: '<S3>/Constant9'
       *  Merge: '<S10>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 3.0;
      break;

     case 2:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant11_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S10>/Merge9' incorporates:
       *  Constant: '<S3>/Constant11'
       *  Constant: '<S3>/Constant14'
       *  Merge: '<S10>/Merge8'
       *  MultiPortSwitch: '<S3>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 6.0;
      break;

     default:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant12_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S10>/Merge9' incorporates:
       *  Constant: '<S3>/Constant12'
       *  Constant: '<S3>/Constant15'
       *  Merge: '<S10>/Merge8'
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

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S10>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S3>/Constant8'
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* Merge: '<S10>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p = false;

    /* Merge: '<S10>/Merge11' incorporates:
     *  Constant: '<S3>/Constant6'
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S10>/Merge12' incorporates:
     *  Constant: '<S3>/Constant13'
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Logic: '<S3>/NOT' incorporates:
     *  Logic: '<S3>/NOT1'
     *  UnitDelay: '<S8>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* Merge: '<S10>/Merge7' incorporates:
     *  Logic: '<S3>/NOT'
     */
    Code_Gen_Model_B.Spline_Enable = rtb_Is_Absolute_Steering;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* SignalConversion generated from: '<S16>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* Switch: '<S371>/Switch' incorporates:
     *  Constant: '<S371>/Constant'
     *  Constant: '<S371>/Constant1'
     *  Constant: '<S371>/Constant2'
     *  Math: '<S371>/Hypot'
     *  RelationalOperator: '<S371>/GreaterThan'
     *  Switch: '<S371>/Switch1'
     */
    if (rt_hypotd_snf(Code_Gen_Model_B.Steer_Joystick_X,
                      Code_Gen_Model_B.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_B.Steer_Joystick_X;
      rtb_Init_e = Code_Gen_Model_B.Steer_Joystick_Y;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S371>/Switch' */

    /* Logic: '<S369>/AND' incorporates:
     *  Constant: '<S372>/Constant'
     *  Constant: '<S373>/Constant'
     *  Logic: '<S379>/AND'
     *  RelationalOperator: '<S372>/Compare'
     *  RelationalOperator: '<S373>/Compare'
     */
    rtb_Is_Absolute_Translation = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Init_e ==
      0.0));

    /* Logic: '<S369>/AND2' incorporates:
     *  RelationalOperator: '<S374>/FixPt Relational Operator'
     *  RelationalOperator: '<S375>/FixPt Relational Operator'
     *  RelationalOperator: '<S376>/FixPt Relational Operator'
     *  RelationalOperator: '<S377>/FixPt Relational Operator'
     *  UnitDelay: '<S374>/Delay Input1'
     *  UnitDelay: '<S375>/Delay Input1'
     *  UnitDelay: '<S376>/Delay Input1'
     *  UnitDelay: '<S377>/Delay Input1'
     *
     * Block description for '<S374>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S375>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S376>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S377>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Steering = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S369>/Constant1'
     *  Constant: '<S369>/Constant2'
     *  Logic: '<S369>/AND'
     *  Logic: '<S369>/AND4'
     *  Logic: '<S369>/NOT1'
     *  Product: '<S369>/Product1'
     *  Sum: '<S369>/Sum'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    if (rtb_Is_Absolute_Translation && (!rtb_Is_Absolute_Steering)) {
      rtb_Switch1_nj = (Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain)
        + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S369>/Switch1' */

    /* Switch: '<S379>/Switch1' incorporates:
     *  Switch: '<S379>/Switch2'
     *  UnitDelay: '<S379>/Unit Delay'
     *  UnitDelay: '<S379>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = rtb_Init_e;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S379>/Switch1' */

    /* Logic: '<S369>/AND1' incorporates:
     *  Logic: '<S369>/AND'
     *  Logic: '<S369>/AND3'
     *  UnitDelay: '<S369>/Unit Delay2'
     */
    rtb_AND_g = (rtb_Is_Absolute_Translation && (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Switch: '<S369>/Switch4' incorporates:
     *  Constant: '<S369>/Constant5'
     *  Switch: '<S369>/Switch5'
     *  Switch: '<S369>/Switch6'
     *  Switch: '<S369>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S369>/Switch5' incorporates:
       *  Constant: '<S369>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S369>/Switch6' incorporates:
       *  Constant: '<S369>/Constant7'
       *  Switch: '<S369>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S369>/Switch7' incorporates:
       *  Constant: '<S369>/Constant8'
       *  Switch: '<S369>/Switch5'
       *  Switch: '<S369>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S369>/Switch6' incorporates:
       *  Switch: '<S369>/Switch5'
       *  UnitDelay: '<S369>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S369>/Switch4' */

    /* Switch: '<S369>/Switch3' incorporates:
     *  Logic: '<S369>/NOT'
     *  Trigonometry: '<S369>/Atan2'
     */
    if (!rtb_AND_g) {
      rtb_Switch1_b4 = rt_atan2d_snf(rtb_Switch1_m5, rtb_Switch2);
    } else {
      rtb_Switch1_b4 = rtb_Switch4_g;
    }

    /* Merge: '<S10>/Merge1' incorporates:
     *  Sum: '<S369>/Sum1'
     *  Switch: '<S369>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_Switch1_b4 + rtb_Switch1_nj;

    /* RelationalOperator: '<S382>/Compare' incorporates:
     *  Constant: '<S382>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Switch2 < 0.0);

    /* Switch: '<S378>/Switch' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S378>/Constant1'
     *  Constant: '<S380>/Constant'
     *  Constant: '<S381>/Constant'
     *  Logic: '<S378>/Logical Operator'
     *  RelationalOperator: '<S380>/Compare'
     *  RelationalOperator: '<S381>/Compare'
     *  UnitDelay: '<S378>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = 6.2831853071795862;
    } else {
      rtb_Switch1_b4 = 0.0;
    }

    /* Switch: '<S378>/Switch1' incorporates:
     *  Constant: '<S378>/Constant2'
     *  Constant: '<S378>/Constant3'
     *  Constant: '<S383>/Constant'
     *  Constant: '<S384>/Constant'
     *  Logic: '<S378>/Logical Operator1'
     *  RelationalOperator: '<S383>/Compare'
     *  RelationalOperator: '<S384>/Compare'
     *  UnitDelay: '<S378>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = -6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Sum: '<S378>/Sum1' incorporates:
     *  Switch: '<S378>/Switch'
     *  Switch: '<S378>/Switch1'
     *  UnitDelay: '<S378>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_b4 + rtb_Add_ie) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S393>/Constant'
     *  Constant: '<S394>/Constant'
     *  Logic: '<S388>/AND'
     *  RelationalOperator: '<S393>/Compare'
     *  RelationalOperator: '<S394>/Compare'
     *  Switch: '<S388>/Switch2'
     *  UnitDelay: '<S388>/Unit Delay'
     *  UnitDelay: '<S388>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_lw;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S388>/Switch1' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  Trigonometry: '<S370>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p,
      rtb_Switch2_o);

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S16>/Constant3'
     *  SignalConversion generated from: '<S16>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge9' incorporates:
     *  Constant: '<S16>/Constant9'
     *  SignalConversion generated from: '<S16>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S10>/Merge10' incorporates:
     *  Constant: '<S16>/Constant1'
     *  SignalConversion generated from: '<S16>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p = false;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S369>/Constant'
     *  Lookup_n-D: '<S369>/Modulation_Str_Y_Rel'
     *  Product: '<S369>/Product'
     *  SignalConversion: '<S6>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S387>/Constant'
     *  Constant: '<S387>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* Switch: '<S392>/Init' incorporates:
     *  UnitDelay: '<S392>/FixPt Unit Delay1'
     *  UnitDelay: '<S392>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init_e = rtb_Product_ku;
    } else {
      rtb_Init_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S392>/Init' */

    /* Sum: '<S390>/Sum1' */
    rtb_Product_ku -= rtb_Init_e;

    /* Switch: '<S391>/Switch2' incorporates:
     *  Constant: '<S389>/Constant1'
     *  Constant: '<S389>/Constant3'
     *  RelationalOperator: '<S391>/LowerRelop1'
     *  RelationalOperator: '<S391>/UpperRelop'
     *  Switch: '<S391>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S391>/Switch' incorporates:
       *  Constant: '<S389>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S391>/Switch2' */

    /* Sum: '<S390>/Sum' */
    rtb_Init_e += rtb_Product_ku;

    /* Product: '<S387>/Product' incorporates:
     *  Lookup_n-D: '<S370>/Modulation_Drv'
     *  Math: '<S370>/Magnitude'
     */
    rtb_Add_l = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_Init_e;

    /* Saturate: '<S387>/Saturation' */
    if (rtb_Add_l > Boost_Trigger_High_Speed) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (rtb_Add_l < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Add_l;
    }

    /* End of Saturate: '<S387>/Saturation' */

    /* SignalConversion generated from: '<S16>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S16>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Merge: '<S10>/Merge11' incorporates:
     *  SignalConversion generated from: '<S16>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.State_Request_Intake_Shooter;

    /* Merge: '<S10>/Merge12' incorporates:
     *  SignalConversion generated from: '<S16>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* Update for UnitDelay: '<S374>/Delay Input1'
     *
     * Block description for '<S374>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S375>/Delay Input1'
     *
     * Block description for '<S375>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S376>/Delay Input1'
     *
     * Block description for '<S376>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S377>/Delay Input1'
     *
     * Block description for '<S377>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S369>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S379>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S379>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S369>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND_g;

    /* Update for UnitDelay: '<S369>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S378>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S378>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S388>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_lw = rtb_Switch1_p;

    /* Update for UnitDelay: '<S388>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S392>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S392>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S392>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Init_e;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* SignalConversion generated from: '<S17>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* SignalConversion generated from: '<S17>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S17>/Constant'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S17>/Constant1'
     *  SignalConversion generated from: '<S17>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S10>/Merge2' incorporates:
     *  Constant: '<S17>/Constant2'
     *  SignalConversion generated from: '<S17>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S10>/Merge3' incorporates:
     *  Constant: '<S17>/Constant3'
     *  SignalConversion generated from: '<S17>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S17>/Constant4'
     *  SignalConversion generated from: '<S17>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S17>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S17>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* SignalConversion generated from: '<S17>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S17>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S17>/Constant7'
     *  SignalConversion generated from: '<S17>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S10>/Merge9' incorporates:
     *  Constant: '<S17>/Constant9'
     *  SignalConversion generated from: '<S17>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Merge: '<S10>/Merge11' incorporates:
     *  Constant: '<S17>/Constant10'
     *  SignalConversion generated from: '<S17>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S10>/Merge12' incorporates:
     *  Constant: '<S17>/Constant11'
     *  SignalConversion generated from: '<S17>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* Merge: '<S10>/Merge10' incorporates:
     *  SignalConversion generated from: '<S17>/Arm_Dist_Cal_Active'
     */
    Code_Gen_Model_B.Arm_Dist_Cal_Active_p =
      Code_Gen_Model_B.Arm_Dist_Cal_Active;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S61>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
   *  Sum: '<S9>/Add'
   *  Sum: '<S9>/Add1'
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

  /* Delay: '<S61>/MemoryX' incorporates:
   *  Constant: '<S61>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S4>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_Switch1_nj = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S11>/Trigonometric Function' */
  rtb_Switch2_l = cos(rtb_Switch1_nj);

  /* Trigonometry: '<S11>/Trigonometric Function1' */
  rtb_Switch2_c = sin(rtb_Switch1_nj);

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' */
  rtb_Switch2_o = rtb_Switch2_l;
  rtb_Init_e = rtb_Switch2_c;

  /* SignalConversion generated from: '<S11>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S11>/Unary Minus'
   */
  rtb_Switch1_m5 = -rtb_Switch2_c;
  rtb_Switch2 = rtb_Switch2_l;

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
  rtb_Switch2_l = rtb_Switch1_nj - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S11>/Subtract2' incorporates:
   *  Constant: '<S11>/Constant3'
   *  Gain: '<S11>/Gain7'
   *  Math: '<S11>/Square'
   */
  rtb_Switch2_c = 1.0 - ((rtb_Switch2_l * rtb_Switch2_l) * 0.16666666666666666);

  /* Gain: '<S11>/Gain6' */
  rtb_Switch2_l *= 0.5;

  /* Product: '<S11>/Product7' incorporates:
   *  Constant: '<S11>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Switch1_b4 = 0.0;
    rtb_Num_Segments = 0;
    for (s189_iter = 0; s189_iter < 8; s189_iter++) {
      rtb_Switch1_b4 += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s189_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Switch1_b4;
  }

  /* End of Product: '<S11>/Product7' */

  /* Product: '<S11>/Product6' incorporates:
   *  SignalConversion generated from: '<S11>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S11>/Unary Minus2'
   */
  rtb_Switch4_g = (rtb_Switch2_c * tmp[0]) + ((-rtb_Switch2_l) * tmp[1]);
  rtb_Switch2_c = (rtb_Switch2_l * tmp[0]) + (rtb_Switch2_c * tmp[1]);

  /* Product: '<S11>/Product6' incorporates:
   *  Concatenate: '<S11>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Switch2_o * rtb_Switch4_g) +
    (rtb_Switch1_m5 * rtb_Switch2_c);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch4_g) + (rtb_Switch2 *
    rtb_Switch2_c);

  /* Outputs for Enabled SubSystem: '<S88>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S114>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S81>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S112>/Enable'
   */
  /* Logic: '<S9>/AND' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S9>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <= KF_Vision_Ambiguity_Thresh)
      && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S112>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S61>/C'
     *  Delay: '<S61>/MemoryX'
     *  Product: '<S114>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_m5;

    /* Sum: '<S112>/Sum' incorporates:
     *  Constant: '<S61>/D'
     *  Product: '<S112>/C[k]*xhat[k|k-1]'
     *  Product: '<S112>/D[k]*u[k]'
     *  Sum: '<S112>/Add1'
     */
    rtb_Switch2_c = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_c + rtb_Switch1_m5);

    /* Product: '<S112>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S61>/C'
     *  Delay: '<S61>/MemoryX'
     *  Product: '<S114>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_m5;

    /* Sum: '<S112>/Sum' incorporates:
     *  Constant: '<S61>/D'
     *  Product: '<S112>/C[k]*xhat[k|k-1]'
     *  Product: '<S112>/D[k]*u[k]'
     *  Sum: '<S112>/Add1'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - (rtb_Switch2_c + rtb_Switch1_m5);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S112>/Product3' incorporates:
     *  Constant: '<S62>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_m5);

    /* Sum: '<S114>/Add1' incorporates:
     *  Product: '<S114>/Product'
     */
    rtb_Switch2_c = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S112>/Product3' incorporates:
     *  Constant: '<S62>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_m5);

    /* Sum: '<S114>/Add1' incorporates:
     *  Product: '<S114>/Product'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S114>/Product2' incorporates:
     *  Constant: '<S62>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_c) +
      (5.9896845167210271E-17 * rtb_Switch1_m5);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_c) +
      (0.095124921972503981 * rtb_Switch1_m5);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S112>/Product3' incorporates:
       *  Outport: '<S112>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S114>/Product2' incorporates:
       *  Outport: '<S114>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S9>/AND' */
  /* End of Outputs for SubSystem: '<S81>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S88>/Enabled Subsystem' */

  /* Sum: '<S88>/Add' incorporates:
   *  Delay: '<S61>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S11>/Accumulator2' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S11>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S9>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S9>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S9>/Switch' */

  /* DiscreteIntegrator: '<S11>/Accumulator' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S11>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S9>/Switch1' incorporates:
   *  Constant: '<S9>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S9>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S9>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S9>/Switch1' */

  /* If: '<S13>/If' incorporates:
   *  Constant: '<S214>/Constant'
   *  Logic: '<S214>/AND'
   *  MATLAB Function: '<S164>/Find closest index to curve'
   *  Product: '<S214>/Product'
   *  RelationalOperator: '<S214>/Relational Operator'
   *  RelationalOperator: '<S214>/Relational Operator1'
   *  Selector: '<S214>/Selector'
   *  Selector: '<S214>/Selector1'
   *  Selector: '<S215>/Selector'
   *  Sum: '<S214>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S167>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S170>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S172>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S167>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S162>/Action Port'
       */
      /* InitializeConditions for If: '<S13>/If' incorporates:
       *  UnitDelay: '<S162>/Unit Delay'
       *  UnitDelay: '<S163>/Unit Delay'
       *  UnitDelay: '<S165>/Unit Delay'
       *  UnitDelay: '<S165>/Unit Delay1'
       *  UnitDelay: '<S215>/Unit Delay'
       *  UnitDelay: '<S215>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S13>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S162>/Action Port'
     */
    /* Selector: '<S163>/Selector1' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S163>/Selector1' */

    /* Lookup_n-D: '<S162>/Capture Radius' incorporates:
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S163>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S163>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S167>/If' incorporates:
     *  RelationalOperator: '<S167>/ '
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S170>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S172>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S167>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S170>/Action Port'
       */
      /* InitializeConditions for If: '<S167>/If' incorporates:
       *  UnitDelay: '<S170>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S167>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S167>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S170>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S170>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S173>/Action Port'
       */
      /* If: '<S170>/If' incorporates:
       *  Selector: '<S163>/Selector1'
       *  Selector: '<S170>/Selector'
       *  Selector: '<S173>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S170>/Increment_If_Rectangle_Check' */

      /* Sum: '<S170>/Minus' incorporates:
       *  Concatenate: '<S163>/Matrix Concatenate2'
       *  Selector: '<S170>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S170>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S173>/Action Port'
       */
      /* If: '<S170>/If' incorporates:
       *  Selector: '<S163>/Selector1'
       *  Selector: '<S170>/Selector'
       *  Selector: '<S173>/Selector'
       *  Sum: '<S170>/Minus'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S170>/Increment_If_Rectangle_Check' */

      /* Sum: '<S170>/Minus' incorporates:
       *  Concatenate: '<S163>/Matrix Concatenate2'
       *  Selector: '<S170>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2;

      /* Math: '<S170>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S170>/Equal' */
      rtb_AND_g = (Code_Gen_Model_B.Spline_Num_Poses ==
                   Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S170>/Switch' incorporates:
       *  Logic: '<S170>/AND'
       *  Logic: '<S170>/OR'
       *  RelationalOperator: '<S170>/Relational Operator'
       *  UnitDelay: '<S170>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_m5 <= rtb_UnitDelay1_gi) && rtb_AND_g));

      /* If: '<S170>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation) {
        if (!rtb_AND_g) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S172>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S170>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S172>/Action Port'
         */
        /* If: '<S172>/If' incorporates:
         *  RelationalOperator: '<S172>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S172>/Is_Last_Point' incorporates:
           *  ActionPort: '<S175>/Action Port'
           */
          /* InitializeConditions for If: '<S172>/If' incorporates:
           *  UnitDelay: '<S175>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S172>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S172>/Is_Last_Point' incorporates:
           *  ActionPort: '<S175>/Action Port'
           */
          /* Switch: '<S175>/Switch' incorporates:
           *  Constant: '<S177>/Constant'
           *  Logic: '<S175>/OR'
           *  RelationalOperator: '<S177>/Compare'
           *  UnitDelay: '<S175>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S175>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S175>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S178>/Action Port'
             */
            /* Merge: '<S167>/Merge2' incorporates:
             *  Constant: '<S178>/Constant'
             *  SignalConversion generated from: '<S178>/Robot_Reached_Destination'
             */
            rtb_AND_g = true;

            /* SignalConversion generated from: '<S178>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S178>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S175>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S175>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S179>/Action Port'
             */
            /* Merge: '<S167>/Merge2' incorporates:
             *  Constant: '<S179>/Constant'
             *  SignalConversion generated from: '<S179>/Robot_Reached_Destination'
             */
            rtb_AND_g = false;

            /* SignalConversion generated from: '<S179>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S179>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S175>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S175>/If' */

          /* Merge: '<S167>/Merge4' incorporates:
           *  SignalConversion: '<S175>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S175>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S172>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S172>/Increment_Search' incorporates:
           *  ActionPort: '<S174>/Action Port'
           */
          /* Merge: '<S167>/Merge2' incorporates:
           *  Constant: '<S174>/Constant'
           *  SignalConversion generated from: '<S174>/Robot_Reached_Destination'
           */
          rtb_AND_g = false;

          /* SignalConversion generated from: '<S174>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S174>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S167>/Merge4' incorporates:
           *  Constant: '<S176>/FixPt Constant'
           *  SignalConversion: '<S174>/Signal Copy'
           *  Sum: '<S176>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S172>/Increment_Search' */
        }

        /* End of If: '<S172>/If' */
        /* End of Outputs for SubSystem: '<S170>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S170>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S173>/Action Port'
         */
        /* Sum: '<S180>/FixPt Sum1' incorporates:
         *  Constant: '<S180>/FixPt Constant'
         */
        rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S173>/Selector1' incorporates:
         *  Selector: '<S163>/Selector1'
         */
        rtb_Switch1_p = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) - 1];

        /* Sum: '<S181>/Subtract' incorporates:
         *  Selector: '<S173>/Selector1'
         *  Sum: '<S181>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch1_p - rtb_Switch2_l;

        /* Selector: '<S173>/Selector1' incorporates:
         *  Selector: '<S163>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) + 5];

        /* Sum: '<S181>/Subtract' incorporates:
         *  Selector: '<S173>/Selector1'
         *  Sum: '<S181>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch4_g - rtb_Switch2;

        /* Math: '<S181>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S181>/Divide' */
        rtb_Switch1_m5 = rtb_Minus_n[1];

        /* UnaryMinus: '<S181>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S181>/Product' incorporates:
         *  Product: '<S181>/Divide'
         *  UnaryMinus: '<S181>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_m5 / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S181>/Add1' incorporates:
         *  Sum: '<S181>/Add2'
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch2_c = rtb_Switch1_p - rtb_Minus_n[0];

        /* Sum: '<S181>/Minus4' incorporates:
         *  Sum: '<S181>/Add2'
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch1_p + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S181>/Minus5' incorporates:
         *  Concatenate: '<S163>/Matrix Concatenate2'
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S181>/Add' incorporates:
         *  Sum: '<S181>/Add2'
         *  Sum: '<S181>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S181>/Minus' incorporates:
         *  Sum: '<S181>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S181>/Dot Product' incorporates:
         *  Concatenate: '<S163>/Matrix Concatenate2'
         *  Sum: '<S181>/Minus'
         *  Sum: '<S181>/Minus1'
         *  Sum: '<S181>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* DotProduct: '<S181>/Dot Product1' incorporates:
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S181>/Dot Product2' incorporates:
         *  Sum: '<S181>/Minus4'
         *  Sum: '<S181>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_p * rtb_Switch2_o;

        /* DotProduct: '<S181>/Dot Product3' incorporates:
         *  Sum: '<S181>/Minus4'
         */
        rtb_Product_ku = rtb_Switch1_p * rtb_Switch1_p;

        /* Sum: '<S181>/Add1' incorporates:
         *  Sum: '<S181>/Add2'
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch2_c = rtb_Switch4_g - rtb_Minus_n[1];

        /* Sum: '<S181>/Minus4' incorporates:
         *  Sum: '<S181>/Add2'
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch4_g + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S181>/Minus5' incorporates:
         *  Concatenate: '<S163>/Matrix Concatenate2'
         *  Sum: '<S181>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S181>/Add' incorporates:
         *  Sum: '<S181>/Add2'
         *  Sum: '<S181>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2 - rtb_Minus_n[1];

        /* Sum: '<S181>/Minus' incorporates:
         *  Sum: '<S181>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S181>/Dot Product' incorporates:
         *  Concatenate: '<S163>/Matrix Concatenate2'
         *  Sum: '<S181>/Minus'
         *  Sum: '<S181>/Minus1'
         *  Sum: '<S181>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* RelationalOperator: '<S182>/Compare' incorporates:
         *  Constant: '<S182>/Constant'
         */
        rtb_AND_g = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S181>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S181>/Dot Product1'
         *  Sum: '<S181>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e <= ((rtb_Switch2_c *
          rtb_Switch2_c) + rtb_Switch2_l));

        /* DotProduct: '<S181>/Dot Product2' incorporates:
         *  Sum: '<S181>/Minus4'
         *  Sum: '<S181>/Minus5'
         */
        rtb_Init_e = (rtb_Switch1_p * rtb_Switch2_o) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S167>/Merge4' incorporates:
         *  Constant: '<S183>/Constant'
         *  DataTypeConversion: '<S173>/Data Type Conversion'
         *  DotProduct: '<S181>/Dot Product3'
         *  Logic: '<S181>/AND'
         *  RelationalOperator: '<S181>/LessThanOrEqual1'
         *  RelationalOperator: '<S183>/Compare'
         *  Sum: '<S173>/Add'
         *  Sum: '<S181>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_AND_g &&
          rtb_Is_Absolute_Steering) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <=
          ((rtb_Switch1_p * rtb_Switch1_p) + rtb_Product_ku)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S167>/Merge2' incorporates:
         *  Constant: '<S173>/Constant2'
         *  SignalConversion generated from: '<S173>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S173>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S173>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S170>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S170>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S171>/Action Port'
         */
        /* Merge: '<S167>/Merge2' incorporates:
         *  Constant: '<S171>/Constant2'
         *  SignalConversion generated from: '<S171>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S171>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S171>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S167>/Merge4' incorporates:
         *  SignalConversion generated from: '<S171>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S170>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S167>/Merge1' incorporates:
       *  Constant: '<S170>/Constant'
       *  SignalConversion generated from: '<S170>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S170>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S167>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S167>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S169>/Action Port'
       */
      /* Merge: '<S167>/Merge1' incorporates:
       *  Constant: '<S169>/Constant'
       *  SignalConversion generated from: '<S169>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S167>/Merge2' incorporates:
       *  Constant: '<S169>/Constant1'
       *  SignalConversion generated from: '<S169>/Robot_Reached_Destination'
       */
      rtb_AND_g = false;

      /* SignalConversion generated from: '<S169>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S169>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S167>/Merge4' incorporates:
       *  SignalConversion generated from: '<S169>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S167>/Escape_Auto_Driving' */
    }

    /* End of If: '<S167>/If' */

    /* If: '<S163>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S163>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S168>/Action Port'
       */
      /* Bias: '<S184>/Add Constant' incorporates:
       *  Bias: '<S184>/Bias'
       *  Sum: '<S184>/Subtract'
       */
      rtb_Switch1_m5 = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S184>/Selector4' incorporates:
       *  Bias: '<S184>/Bias1'
       *  Constant: '<S186>/FixPt Constant'
       *  Sum: '<S186>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S184>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S184>/Selector' incorporates:
       *  Bias: '<S184>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S184>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S184>/Matrix Concatenate' incorporates:
       *  Gain: '<S187>/Gain'
       *  Gain: '<S188>/Gain'
       *  Selector: '<S163>/Selector1'
       *  Selector: '<S184>/Selector'
       *  Selector: '<S184>/Selector1'
       *  Selector: '<S184>/Selector2'
       *  Selector: '<S184>/Selector3'
       *  Sum: '<S187>/Subtract'
       *  Sum: '<S188>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S184>/Selector4' incorporates:
         *  Selector: '<S184>/Selector'
         */
        s189_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S187>/Subtract' incorporates:
         *  Bias: '<S184>/Add Constant1'
         *  Selector: '<S184>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s189_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S184>/Selector4' incorporates:
         *  Gain: '<S187>/Gain'
         *  Selector: '<S184>/Selector'
         *  Selector: '<S184>/Selector1'
         *  Sum: '<S187>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s189_iter) - 1];
        }
      }

      /* End of Concatenate: '<S184>/Matrix Concatenate' */

      /* Assignment: '<S184>/Assignment' incorporates:
       *  Selector: '<S184>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s189_iter = 0; s189_iter < rtb_Bias1_p; s189_iter++) {
          rtb_Assignment[s189_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s189_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S184>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S185>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S189>/While Iterator'
       */
      s189_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s189_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s189_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s189_iter] - rtb_Assignment[s189_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s189_iter];
        rtb_Switch2_c = rtb_Assignment[s189_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s189_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s189_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s189_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_c - rtb_Switch2_l;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2 = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Switch2_o = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch4_g = (rtb_Init_e - (2.0 * rtb_Switch2)) + rtb_Switch2_o;
          rtb_Switch1_p = rtb_Switch2 - rtb_Switch2_o;
          rtb_Switch2_o = (3.0 * rtb_Switch2) - (2.0 * rtb_Switch2_o);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch4_g) +
            (rtb_Minus_n[0] * rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch2_o)) + rtb_Assignment[s189_iter];
          rtb_Product_ku = ((((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1]
            * rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch2_o)) +
            rtb_Switch2_l;
          rtb_Switch4_g = ((3.0 * rtb_Switch2) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Switch1_p = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch2);
          rtb_Switch2 = (rtb_Init_e - rtb_Switch2) * 6.0;
          rtb_Switch2_o = (((rtb_Reshapey[0] * rtb_Switch4_g) + (rtb_Minus_n[0] *
            rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[0] * rtb_Switch2);
          rtb_Switch2_c = (((rtb_Reshapey[1] * rtb_Switch4_g) + (rtb_Minus_n[1] *
            rtb_Switch1_p)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch2);
          rtb_Switch2 = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch4_g = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Product_ku;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch2) + (rtb_Minus_n[1] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Switch2_o) - (((((rtb_Reshapey[0]
            * rtb_Switch2) + (rtb_Minus_n[0] * rtb_Switch4_g)) * 0.5) +
            (rtb_Add2_f[0] * rtb_Init_e)) * rtb_Switch2_c)) / rt_powd_snf
            (rt_hypotd_snf(rtb_Switch2_o, rtb_Switch2_c), 3.0);
        }

        if (s189_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s189_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_m5 - ((real_T)s189_iter);
        rtb_Num_Segments = s189_iter;
        s189_iter++;
      } while ((rtb_Init_e >= 4.0) && (s189_iter <= 3));

      /* End of Outputs for SubSystem: '<S185>/Sampling_Loop' */

      /* SignalConversion generated from: '<S168>/Position_and_Curvature' incorporates:
       *  Assignment: '<S189>/Assignment'
       *  Merge: '<S163>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S163>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S163>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S163>/If Action Subsystem' incorporates:
       *  ActionPort: '<S166>/Action Port'
       */
      /* Product: '<S166>/Product' incorporates:
       *  Selector: '<S163>/Selector'
       *  Selector: '<S163>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S166>/Product1' incorporates:
       *  Selector: '<S163>/Selector'
       *  Selector: '<S163>/Selector1'
       */
      rtb_Switch1_m5 = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S166>/Product' incorporates:
         *  Constant: '<S166>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S166>/Product1' incorporates:
         *  Constant: '<S166>/Constant2'
         *  Product: '<S166>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_m5;
      }

      /* Assignment: '<S166>/Assignment' incorporates:
       *  Concatenate: '<S166>/Matrix Concatenate'
       *  Merge: '<S163>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S166>/Assignment' */

      /* SignalConversion generated from: '<S166>/Num_Segments' incorporates:
       *  Constant: '<S166>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S163>/If Action Subsystem' */
    }

    /* End of If: '<S163>/If1' */

    /* Concatenate: '<S164>/Matrix Concatenate' incorporates:
     *  Merge: '<S163>/Merge'
     *  Selector: '<S164>/Selector'
     *  Selector: '<S164>/Selector1'
     *  Selector: '<S164>/Selector3'
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

    /* End of Concatenate: '<S164>/Matrix Concatenate' */

    /* MATLAB Function: '<S164>/Distance Along Curve' incorporates:
     *  Concatenate: '<S164>/Matrix Concatenate'
     *  Selector: '<S164>/Selector4'
     *  Selector: '<S164>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s189_iter = 0; s189_iter < 149; s189_iter++) {
      /* Outputs for Iterator SubSystem: '<S185>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S189>/While Iterator'
       */
      rtb_Assignment_d[s189_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s189_iter + 1] -
         rtb_MatrixConcatenate_o[s189_iter], rtb_MatrixConcatenate_o[s189_iter +
         151] - rtb_MatrixConcatenate_o[s189_iter + 150]) +
        rtb_Assignment_d[s189_iter];

      /* End of Outputs for SubSystem: '<S185>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S164>/Distance Along Curve' */

    /* MATLAB Function: '<S164>/Find closest index to curve' incorporates:
     *  Concatenate: '<S164>/Matrix Concatenate'
     *  Selector: '<S164>/Selector4'
     *  Selector: '<S164>/Selector5'
     *  Selector: '<S215>/Selector'
     */
    for (s189_iter = 0; s189_iter < 150; s189_iter++) {
      /* Outputs for Iterator SubSystem: '<S185>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S189>/While Iterator'
       */
      distance_from_robot[s189_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s189_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s189_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S185>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s189_iter = 1;
    } else {
      s189_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s189_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s189_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s189_iter - 1];
      for (rtb_Bias1_p = s189_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_m5 > rtb_Init_e) {
          rtb_Switch1_m5 = rtb_Init_e;
        }
      }
    }

    s189_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s189_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S215>/Selector' incorporates:
     *  Constant: '<S215>/Constant'
     *  MATLAB Function: '<S164>/Find closest index to curve'
     *  MinMax: '<S215>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s189_iter)) - 1];

    /* If: '<S215>/If' incorporates:
     *  RelationalOperator: '<S215>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S215>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S218>/Action Port'
       */
      /* SignalConversion generated from: '<S218>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S220>/FixPt Sum1' incorporates:
       *  Constant: '<S220>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S218>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S218>/Selector11'
       *  Selector: '<S218>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S218>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S218>/Selector1'
       *  Selector: '<S218>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S218>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S218>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S218>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S218>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S218>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S215>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S215>/Latch' incorporates:
       *  ActionPort: '<S219>/Action Port'
       */
      /* SignalConversion generated from: '<S219>/In1' incorporates:
       *  UnitDelay: '<S215>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S219>/In2' incorporates:
       *  UnitDelay: '<S215>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S215>/Latch' */
    }

    /* End of If: '<S215>/If' */

    /* MinMax: '<S162>/Min' incorporates:
     *  Lookup_n-D: '<S162>/Lookahead Distance'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S164>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S214>/While Iterator'
     */
    s214_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s214_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S164>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S214>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s214_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s189_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s214_iter++;
    }

    /* End of Outputs for SubSystem: '<S164>/Find first index that meets distance target' */

    /* Switch: '<S217>/Switch' incorporates:
     *  Concatenate: '<S164>/Matrix Concatenate'
     *  Constant: '<S164>/Constant'
     *  Constant: '<S214>/Constant'
     *  Constant: '<S217>/Constant1'
     *  Constant: '<S217>/Constant2'
     *  Constant: '<S217>/Constant3'
     *  Logic: '<S214>/AND'
     *  MATLAB Function: '<S164>/Find closest index to curve'
     *  Math: '<S217>/Hypot'
     *  Merge: '<S10>/Merge8'
     *  MinMax: '<S217>/Min'
     *  MinMax: '<S217>/Min1'
     *  Product: '<S214>/Product'
     *  Product: '<S217>/Divide'
     *  Product: '<S217>/Product'
     *  Product: '<S217>/Product1'
     *  RelationalOperator: '<S164>/Relational Operator'
     *  RelationalOperator: '<S214>/Relational Operator'
     *  RelationalOperator: '<S214>/Relational Operator1'
     *  Selector: '<S164>/Selector10'
     *  Selector: '<S164>/Selector7'
     *  Selector: '<S164>/Selector8'
     *  Selector: '<S164>/Selector9'
     *  Selector: '<S214>/Selector'
     *  Selector: '<S214>/Selector1'
     *  Selector: '<S215>/Selector'
     *  Sqrt: '<S217>/Sqrt'
     *  Sum: '<S164>/Subtract'
     *  Sum: '<S214>/Add'
     *  Sum: '<S217>/Subtract'
     *  Sum: '<S217>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_UnitDelay1_gi = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch1_m5 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_UnitDelay1_gi = fmin(rtb_Switch1_m5 * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S217>/Switch' */

    /* Logic: '<S165>/OR' */
    rtb_Is_Absolute_Steering = (rtb_AND_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S165>/Switch1' incorporates:
     *  Switch: '<S165>/Switch'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S13>/Merge2' incorporates:
       *  Constant: '<S165>/Constant3'
       *  SignalConversion: '<S165>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S13>/Merge2' incorporates:
       *  SignalConversion: '<S165>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion: '<S165>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S164>/Selector6' incorporates:
     *  Concatenate: '<S164>/Matrix Concatenate'
     *  Selector: '<S164>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S164>/Selector2' incorporates:
     *  Concatenate: '<S164>/Matrix Concatenate'
     *  Selector: '<S164>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S165>/Switch2' incorporates:
     *  Sum: '<S221>/Subtract'
     *  Sum: '<S221>/Subtract1'
     *  Trigonometry: '<S221>/Atan2'
     *  UnitDelay: '<S165>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S165>/Switch2' */

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion: '<S165>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S13>/Merge7' incorporates:
     *  SignalConversion: '<S162>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_AND_g;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S165>/Constant2'
     *  SignalConversion generated from: '<S162>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S165>/Constant5'
     *  SignalConversion generated from: '<S162>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S13>/Merge5' incorporates:
     *  Constant: '<S165>/Constant6'
     *  SignalConversion generated from: '<S162>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S13>/Merge6' incorporates:
     *  Constant: '<S165>/Constant1'
     *  SignalConversion generated from: '<S162>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S215>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S165>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S165>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S13>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/Pass Through' incorporates:
     *  ActionPort: '<S161>/Action Port'
     */
    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S161>/Constant'
     *  SignalConversion generated from: '<S161>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion generated from: '<S161>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion generated from: '<S161>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion generated from: '<S161>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion generated from: '<S161>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S161>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S13>/Merge5' incorporates:
     *  SignalConversion generated from: '<S161>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge6' incorporates:
     *  SignalConversion generated from: '<S161>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S13>/Pass Through' */
  }

  /* End of If: '<S13>/If' */

  /* Signum: '<S315>/Sign2' incorporates:
   *  UnitDelay: '<S315>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S315>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S315>/Product1' incorporates:
   *  Signum: '<S315>/Sign1'
   *  Signum: '<S315>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S315>/Switch' incorporates:
   *  Constant: '<S315>/Constant'
   *  Constant: '<S320>/Constant'
   *  Constant: '<S321>/Constant'
   *  Logic: '<S315>/or'
   *  Product: '<S315>/Product1'
   *  RelationalOperator: '<S320>/Compare'
   *  RelationalOperator: '<S321>/Compare'
   *  UnitDelay: '<S315>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S315>/Switch' */

  /* Switch: '<S326>/Init' incorporates:
   *  UnitDelay: '<S326>/FixPt Unit Delay1'
   *  UnitDelay: '<S326>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S326>/Init' */

  /* RelationalOperator: '<S322>/Compare' incorporates:
   *  Constant: '<S322>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S323>/Compare' incorporates:
   *  Constant: '<S323>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_c > 0.0);

  /* Abs: '<S315>/Abs' incorporates:
   *  Sum: '<S315>/Subtract'
   *  UnitDelay: '<S315>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S315>/Switch5' incorporates:
   *  Constant: '<S315>/Constant1'
   *  Switch: '<S315>/Switch1'
   *  UnaryMinus: '<S315>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S315>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S315>/Constant4'
     *  Constant: '<S315>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S315>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S315>/Constant2'
     *  Constant: '<S315>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S315>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S315>/Lookup Table Dynamic'
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
    rtb_Switch1_b4 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S315>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S315>/Constant10'
     *  Constant: '<S315>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S315>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S315>/Constant7'
     *  Constant: '<S315>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S315>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S315>/Lookup Table Dynamic1'
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

    /* Switch: '<S315>/Switch3' incorporates:
     *  Constant: '<S315>/Constant1'
     *  Constant: '<S315>/Constant3'
     *  UnaryMinus: '<S315>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S315>/Switch3' */
  }

  /* End of Switch: '<S315>/Switch5' */

  /* Product: '<S315>/Product' incorporates:
   *  Switch: '<S315>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_b4 * rtb_Merge1;

  /* Sum: '<S324>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S325>/Switch2' incorporates:
   *  RelationalOperator: '<S325>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S315>/Switch2' incorporates:
     *  Constant: '<S315>/Constant1'
     *  Switch: '<S315>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S315>/Switch4' incorporates:
       *  Constant: '<S315>/Constant1'
       */
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S315>/Switch4' incorporates:
       *  Constant: '<S315>/Constant3'
       *  UnaryMinus: '<S315>/Unary Minus1'
       */
      rtb_Switch1_m5 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S315>/Switch2' */

    /* Product: '<S315>/Product2' */
    rtb_Switch1_m5 *= rtb_Merge1;

    /* Switch: '<S325>/Switch' incorporates:
     *  RelationalOperator: '<S325>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_m5) {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S325>/Switch' */
  }

  /* End of Switch: '<S325>/Switch2' */

  /* Sum: '<S324>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S318>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S342>/Constant3'
     *  Constant: '<S342>/Constant4'
     *  Math: '<S342>/Math Function'
     *  Sum: '<S318>/Subtract'
     *  Sum: '<S342>/Add1'
     *  Sum: '<S342>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Switch1_nj) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S318>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S318>/Switch' */

  /* Sum: '<S338>/Add1' incorporates:
   *  Constant: '<S338>/Constant3'
   *  Constant: '<S338>/Constant4'
   *  Math: '<S338>/Math Function'
   *  Sum: '<S317>/Add'
   *  Sum: '<S337>/Sum'
   *  Sum: '<S338>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Switch1_nj +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S340>/Sum1' incorporates:
   *  Constant: '<S337>/Constant2'
   *  Product: '<S340>/Product'
   *  Sum: '<S340>/Sum'
   *  UnitDelay: '<S340>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S337>/Product' incorporates:
   *  Constant: '<S337>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S339>/Diff' incorporates:
   *  UnitDelay: '<S339>/UD'
   *
   * Block description for '<S339>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S339>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_l = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S337>/Saturation' */
  if (rtb_Add_l > Steering_Heading_Control_D_UL) {
    rtb_Add_l = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_l < Steering_Heading_Control_D_LL) {
    rtb_Add_l = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S337>/Add' incorporates:
   *  Gain: '<S337>/Gain1'
   *  Saturate: '<S337>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_l;

  /* Sum: '<S337>/Subtract' incorporates:
   *  Constant: '<S337>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S337>/Sum2' incorporates:
   *  Gain: '<S337>/Gain2'
   *  UnitDelay: '<S337>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S341>/Switch2' incorporates:
   *  RelationalOperator: '<S341>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_uDLookupTable_l)) {
    /* Sum: '<S337>/Subtract1' incorporates:
     *  Constant: '<S337>/Constant1'
     */
    rtb_Switch2 = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S341>/Switch' incorporates:
     *  RelationalOperator: '<S341>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch2) {
      rtb_uDLookupTable_l = rtb_Switch2;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    }

    /* End of Switch: '<S341>/Switch' */
  }

  /* End of Switch: '<S341>/Switch2' */

  /* Saturate: '<S337>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S337>/Saturation1' */

  /* Sum: '<S337>/Add1' */
  rtb_Add_l = rtb_Init_e + rtb_Switch1_m5;

  /* Saturate: '<S337>/Saturation2' */
  if (rtb_Add_l > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S337>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_l < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S337>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S337>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_l;
  }

  /* End of Saturate: '<S337>/Saturation2' */

  /* Switch: '<S317>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S328>/Switch' incorporates:
     *  Abs: '<S328>/Abs'
     *  Constant: '<S328>/Constant'
     *  Constant: '<S336>/Constant'
     *  RelationalOperator: '<S336>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S328>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S317>/Switch' */

  /* Signum: '<S327>/Sign2' incorporates:
   *  UnitDelay: '<S327>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S327>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S327>/Product1' incorporates:
   *  Signum: '<S327>/Sign1'
   *  Signum: '<S327>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S327>/Switch' incorporates:
   *  Constant: '<S327>/Constant'
   *  Constant: '<S329>/Constant'
   *  Constant: '<S330>/Constant'
   *  Logic: '<S327>/or'
   *  Product: '<S327>/Product1'
   *  RelationalOperator: '<S329>/Compare'
   *  RelationalOperator: '<S330>/Compare'
   *  UnitDelay: '<S327>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch4_g = 0.0;
  }

  /* End of Switch: '<S327>/Switch' */

  /* Switch: '<S335>/Init' incorporates:
   *  UnitDelay: '<S335>/FixPt Unit Delay1'
   *  UnitDelay: '<S335>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch4_g;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S335>/Init' */

  /* RelationalOperator: '<S331>/Compare' incorporates:
   *  Constant: '<S331>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch4_g == 0.0);

  /* RelationalOperator: '<S332>/Compare' incorporates:
   *  Constant: '<S332>/Constant'
   */
  rtb_AND_g = (rtb_Switch4_g > 0.0);

  /* Abs: '<S327>/Abs' incorporates:
   *  Sum: '<S327>/Subtract'
   *  UnitDelay: '<S327>/Unit Delay'
   */
  rtb_Switch1_p = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S327>/Switch5' incorporates:
   *  Constant: '<S327>/Constant1'
   *  Switch: '<S327>/Switch1'
   *  UnaryMinus: '<S327>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S327>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S327>/Constant4'
     *  Constant: '<S327>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S327>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S327>/Constant2'
     *  Constant: '<S327>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S327>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S327>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch1_p, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p = rtb_LookupTableDynamic;
    rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S327>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S327>/Constant10'
     *  Constant: '<S327>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S327>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S327>/Constant7'
     *  Constant: '<S327>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S327>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S327>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch1_p, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p = rtb_LookupTableDynamic1;

    /* Switch: '<S327>/Switch3' incorporates:
     *  Constant: '<S327>/Constant1'
     *  Constant: '<S327>/Constant3'
     *  UnaryMinus: '<S327>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S327>/Switch3' */
  }

  /* End of Switch: '<S327>/Switch5' */

  /* Product: '<S327>/Product' incorporates:
   *  Switch: '<S327>/Switch1'
   */
  rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

  /* Sum: '<S333>/Sum1' */
  rtb_Switch4_g -= rtb_Init_e;

  /* Switch: '<S334>/Switch2' incorporates:
   *  RelationalOperator: '<S334>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_Switch2)) {
    /* Switch: '<S327>/Switch2' incorporates:
     *  Constant: '<S327>/Constant1'
     *  Constant: '<S327>/Constant3'
     *  Switch: '<S327>/Switch4'
     *  UnaryMinus: '<S327>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S327>/Switch4' incorporates:
       *  Constant: '<S327>/Constant1'
       */
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S327>/Product2' incorporates:
     *  Switch: '<S327>/Switch2'
     */
    rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

    /* Switch: '<S334>/Switch' incorporates:
     *  RelationalOperator: '<S334>/UpperRelop'
     */
    if (!(rtb_Switch4_g < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4_g;
    }

    /* End of Switch: '<S334>/Switch' */
  }

  /* End of Switch: '<S334>/Switch2' */

  /* Sum: '<S333>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2 + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S230>/Initialize Function' */
  /* Sum: '<S316>/Add' incorporates:
   *  Constant: '<S316>/Constant'
   *  Constant: '<S316>/Constant4'
   *  Constant: '<S316>/Constant5'
   *  Trigonometry: '<S316>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S230>/Initialize Function' */

  /* Fcn: '<S350>/r->x' incorporates:
   *  Fcn: '<S355>/r->x'
   *  Fcn: '<S360>/r->x'
   *  Fcn: '<S365>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S344>/Add' incorporates:
   *  Fcn: '<S350>/r->x'
   *  Fcn: '<S351>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S350>/theta->y' incorporates:
   *  Fcn: '<S355>/theta->y'
   *  Fcn: '<S360>/theta->y'
   *  Fcn: '<S365>/theta->y'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S344>/Add' incorporates:
   *  Fcn: '<S350>/theta->y'
   *  Fcn: '<S351>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_l;

  /* Sum: '<S345>/Add' incorporates:
   *  Fcn: '<S356>/r->x'
   *  Fcn: '<S356>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S346>/Add' incorporates:
   *  Fcn: '<S361>/r->x'
   *  Fcn: '<S361>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S347>/Add' incorporates:
   *  Fcn: '<S366>/r->x'
   *  Fcn: '<S366>/theta->y'
   */
  rtb_Switch2_o = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_l;

  /* Fcn: '<S364>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Switch2_o, rtb_Init_e);

  /* RelationalOperator: '<S367>/Compare' incorporates:
   *  Constant: '<S367>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S363>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S363>/Switch1' incorporates:
     *  Constant: '<S363>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S363>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S363>/Switch1' */

  /* Fcn: '<S349>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S352>/Compare' incorporates:
   *  Constant: '<S352>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_l == 0.0);

  /* Switch: '<S348>/Switch1' */
  if (rtb_AND_g) {
    /* Switch: '<S348>/Switch1' incorporates:
     *  Constant: '<S348>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S348>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S348>/Switch1' */

  /* Fcn: '<S354>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c == 0.0);

  /* Switch: '<S353>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S353>/Switch1' incorporates:
     *  Constant: '<S353>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S353>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S353>/Switch1' */

  /* Fcn: '<S359>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S362>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S358>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S358>/Switch1' incorporates:
     *  Constant: '<S358>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S358>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S358>/Switch1' */

  /* Product: '<S343>/Divide' incorporates:
   *  Abs: '<S343>/Abs'
   *  Abs: '<S343>/Abs1'
   *  Abs: '<S343>/Abs2'
   *  Abs: '<S343>/Abs3'
   *  Constant: '<S343>/Constant'
   *  MinMax: '<S343>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S343>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S363>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S363>/Switch' incorporates:
     *  Fcn: '<S364>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Switch2_o);
  }

  /* End of Switch: '<S363>/Switch' */

  /* Trigonometry: '<S307>/Cos4' incorporates:
   *  Switch: '<S296>/Angle_Switch'
   *  Trigonometry: '<S306>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S307>/Sin5' incorporates:
   *  UnaryMinus: '<S305>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S307>/Sin4' incorporates:
   *  Switch: '<S296>/Angle_Switch'
   *  Trigonometry: '<S306>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S307>/Cos5' incorporates:
   *  UnaryMinus: '<S305>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S307>/Subtract1' incorporates:
   *  Product: '<S307>/Product2'
   *  Product: '<S307>/Product3'
   *  Trigonometry: '<S307>/Cos4'
   *  Trigonometry: '<S307>/Sin4'
   */
  rtb_Init_e = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S307>/Subtract' incorporates:
   *  Product: '<S307>/Product'
   *  Product: '<S307>/Product1'
   *  Trigonometry: '<S307>/Cos4'
   *  Trigonometry: '<S307>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4
    * rtb_uDLookupTable_l);

  /* Math: '<S307>/Hypot' */
  rtb_Switch4_g = rt_hypotd_snf(rtb_Switch2, rtb_Init_e);

  /* Switch: '<S307>/Switch' incorporates:
   *  Constant: '<S307>/Constant'
   *  Constant: '<S307>/Constant1'
   *  Constant: '<S308>/Constant'
   *  Product: '<S307>/Divide'
   *  Product: '<S307>/Divide1'
   *  RelationalOperator: '<S308>/Compare'
   *  Switch: '<S307>/Switch1'
   */
  if (rtb_Switch4_g > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch4_g;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2 / rtb_Switch4_g;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S307>/Switch' */

  /* Switch: '<S296>/Speed_Switch' incorporates:
   *  Abs: '<S296>/Abs'
   *  Constant: '<S304>/Constant'
   *  RelationalOperator: '<S304>/Compare'
   *  Switch: '<S296>/Angle_Switch'
   *  Trigonometry: '<S306>/Atan1'
   *  Trigonometry: '<S307>/Atan1'
   *  UnaryMinus: '<S296>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S306>/Subtract1' incorporates:
     *  Product: '<S306>/Product2'
     *  Product: '<S306>/Product3'
     *  UnaryMinus: '<S296>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S306>/Subtract' incorporates:
     *  Product: '<S306>/Product'
     *  Product: '<S306>/Product1'
     */
    rtb_Switch4_g = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S306>/Hypot' */
    rtb_Switch2 = rt_hypotd_snf(rtb_Switch4_g, rtb_Init_e);

    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S306>/Constant'
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S309>/Constant'
     *  Product: '<S306>/Divide'
     *  Product: '<S306>/Divide1'
     *  RelationalOperator: '<S309>/Compare'
     *  Switch: '<S306>/Switch'
     */
    if (rtb_Switch2 > 1.0E-6) {
      rtb_Switch4_g /= rtb_Switch2;
      rtb_Init_e /= rtb_Switch2;
    } else {
      rtb_Switch4_g = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S306>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch4_g);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S299>/Product2' incorporates:
   *  Constant: '<S299>/Constant'
   *  Switch: '<S296>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S294>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S294>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S297>/Add' incorporates:
   *  Sum: '<S298>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S229>/Product' incorporates:
   *  Abs: '<S294>/Abs'
   *  Abs: '<S297>/Abs'
   *  Constant: '<S300>/Constant'
   *  Constant: '<S310>/Constant3'
   *  Constant: '<S310>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S294>/OR'
   *  Lookup_n-D: '<S297>/1-D Lookup Table'
   *  Math: '<S310>/Math Function'
   *  RelationalOperator: '<S294>/Equal1'
   *  RelationalOperator: '<S300>/Compare'
   *  Signum: '<S294>/Sign'
   *  Signum: '<S294>/Sign1'
   *  Sum: '<S297>/Add'
   *  Sum: '<S310>/Add1'
   *  Sum: '<S310>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S295>/Gain' */
  rtb_Switch4_g = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S295>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S302>/Sum1' incorporates:
   *  Constant: '<S295>/Constant2'
   *  Product: '<S302>/Product'
   *  Sum: '<S302>/Sum'
   *  UnitDelay: '<S302>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S295>/Product' incorporates:
   *  Constant: '<S295>/Constant3'
   */
  rtb_Switch2 = rtb_Init_e * Drive_Motor_Control_D;

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
  rtb_Add_l = rtb_Switch2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S295>/Saturation' */
  if (rtb_Add_l > Drive_Motor_Control_D_UL) {
    rtb_Add_l = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_l < Drive_Motor_Control_D_LL) {
    rtb_Add_l = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S295>/Add' incorporates:
   *  Gain: '<S295>/Gain1'
   *  Saturate: '<S295>/Saturation'
   */
  rtb_Switch1_p = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch4_g) +
    rtb_Add_l;

  /* Sum: '<S295>/Subtract' incorporates:
   *  Constant: '<S295>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch1_p;

  /* Sum: '<S295>/Sum2' incorporates:
   *  Gain: '<S295>/Gain2'
   *  UnitDelay: '<S295>/Unit Delay'
   */
  rtb_Switch4_g = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S303>/Switch2' incorporates:
   *  Constant: '<S295>/Constant'
   *  RelationalOperator: '<S303>/LowerRelop1'
   *  Sum: '<S295>/Subtract'
   */
  if (!(rtb_Switch4_g > (1.0 - rtb_Switch1_p))) {
    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S295>/Constant1'
     *  RelationalOperator: '<S303>/UpperRelop'
     *  Sum: '<S295>/Subtract1'
     */
    if (rtb_Switch4_g < (-1.0 - rtb_Switch1_p)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch1_p;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch4_g;
    }

    /* End of Switch: '<S303>/Switch' */
  }

  /* End of Switch: '<S303>/Switch2' */

  /* Saturate: '<S295>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch4_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch4_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S295>/Saturation1' */

  /* Sum: '<S295>/Add1' */
  rtb_Add_l = rtb_Switch1_p + rtb_Switch4_g;

  /* Saturate: '<S295>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S295>/Saturation2' */

  /* Sum: '<S311>/Add1' incorporates:
   *  Constant: '<S311>/Constant3'
   *  Constant: '<S311>/Constant4'
   *  Math: '<S311>/Math Function'
   *  Sum: '<S311>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S313>/Sum1' incorporates:
   *  Constant: '<S298>/Constant2'
   *  Product: '<S313>/Product'
   *  Sum: '<S313>/Sum'
   *  UnitDelay: '<S313>/Unit Delay1'
   */
  rtb_Switch1_p = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S298>/Product' incorporates:
   *  Constant: '<S298>/Constant3'
   */
  rtb_Switch2_o = rtb_Switch1_p * Steering_Motor_Control_D;

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
  rtb_Add_l = rtb_Switch2_o - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S298>/Saturation' */
  if (rtb_Add_l > Steering_Motor_Control_D_UL) {
    rtb_Add_l = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_l < Steering_Motor_Control_D_LL) {
    rtb_Add_l = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S298>/Add' incorporates:
   *  Gain: '<S298>/Gain1'
   *  Saturate: '<S298>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_l;

  /* Sum: '<S298>/Subtract' incorporates:
   *  Constant: '<S298>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S298>/Sum2' incorporates:
   *  Gain: '<S298>/Gain2'
   *  UnitDelay: '<S298>/Unit Delay'
   */
  rtb_Product_ku = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S314>/Switch2' incorporates:
   *  Constant: '<S298>/Constant'
   *  RelationalOperator: '<S314>/LowerRelop1'
   *  Sum: '<S298>/Subtract'
   */
  if (!(rtb_Product_ku > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S314>/Switch' incorporates:
     *  Constant: '<S298>/Constant1'
     *  RelationalOperator: '<S314>/UpperRelop'
     *  Sum: '<S298>/Subtract1'
     */
    if (rtb_Product_ku < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku;
    }

    /* End of Switch: '<S314>/Switch' */
  }

  /* End of Switch: '<S314>/Switch2' */

  /* Saturate: '<S298>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Product_ku = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Product_ku = Steering_Motor_Control_I_LL;
  } else {
    rtb_Product_ku = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S298>/Saturation1' */

  /* Sum: '<S298>/Add1' */
  rtb_Add_l = rtb_Add_pw + rtb_Product_ku;

  /* Saturate: '<S298>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S298>/Saturation2' */

  /* Product: '<S343>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S348>/Switch' */
  if (!rtb_AND_g) {
    /* Switch: '<S348>/Switch' incorporates:
     *  Fcn: '<S349>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S348>/Switch' */

  /* Trigonometry: '<S244>/Cos4' incorporates:
   *  Switch: '<S233>/Angle_Switch'
   *  Trigonometry: '<S243>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S244>/Sin5' incorporates:
   *  UnaryMinus: '<S242>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S244>/Sin4' incorporates:
   *  Switch: '<S233>/Angle_Switch'
   *  Trigonometry: '<S243>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S244>/Cos5' incorporates:
   *  UnaryMinus: '<S242>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S244>/Subtract1' incorporates:
   *  Product: '<S244>/Product2'
   *  Product: '<S244>/Product3'
   *  Trigonometry: '<S244>/Cos4'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Add_pw = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S244>/Subtract' incorporates:
   *  Product: '<S244>/Product'
   *  Product: '<S244>/Product1'
   *  Trigonometry: '<S244>/Cos4'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S244>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S244>/Switch' incorporates:
   *  Constant: '<S244>/Constant'
   *  Constant: '<S244>/Constant1'
   *  Constant: '<S245>/Constant'
   *  Product: '<S244>/Divide'
   *  Product: '<S244>/Divide1'
   *  RelationalOperator: '<S245>/Compare'
   *  Switch: '<S244>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S244>/Switch' */

  /* Switch: '<S233>/Speed_Switch' incorporates:
   *  Abs: '<S233>/Abs'
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S241>/Compare'
   *  Switch: '<S233>/Angle_Switch'
   *  Trigonometry: '<S243>/Atan1'
   *  Trigonometry: '<S244>/Atan1'
   *  UnaryMinus: '<S233>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S243>/Subtract1' incorporates:
     *  Product: '<S243>/Product2'
     *  Product: '<S243>/Product3'
     *  UnaryMinus: '<S233>/Unary Minus'
     */
    rtb_Add_pw = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5) + (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S243>/Subtract' incorporates:
     *  Product: '<S243>/Product'
     *  Product: '<S243>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S243>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S243>/Switch1' incorporates:
     *  Constant: '<S243>/Constant'
     *  Constant: '<S243>/Constant1'
     *  Constant: '<S246>/Constant'
     *  Product: '<S243>/Divide'
     *  Product: '<S243>/Divide1'
     *  RelationalOperator: '<S246>/Compare'
     *  Switch: '<S243>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S243>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S236>/Product2' incorporates:
   *  Constant: '<S236>/Constant'
   *  Switch: '<S233>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S231>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S231>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S234>/Add' incorporates:
   *  Sum: '<S235>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S226>/Product' incorporates:
   *  Abs: '<S231>/Abs'
   *  Abs: '<S234>/Abs'
   *  Constant: '<S237>/Constant'
   *  Constant: '<S247>/Constant3'
   *  Constant: '<S247>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S231>/OR'
   *  Lookup_n-D: '<S234>/1-D Lookup Table'
   *  Math: '<S247>/Math Function'
   *  RelationalOperator: '<S231>/Equal1'
   *  RelationalOperator: '<S237>/Compare'
   *  Signum: '<S231>/Sign'
   *  Signum: '<S231>/Sign1'
   *  Sum: '<S234>/Add'
   *  Sum: '<S247>/Add1'
   *  Sum: '<S247>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S232>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S232>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S239>/Sum1' incorporates:
   *  Constant: '<S232>/Constant2'
   *  Product: '<S239>/Product'
   *  Sum: '<S239>/Sum'
   *  UnitDelay: '<S239>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S232>/Product' incorporates:
   *  Constant: '<S232>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S238>/Diff' incorporates:
   *  UnitDelay: '<S238>/UD'
   *
   * Block description for '<S238>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S238>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_l = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S232>/Saturation' */
  if (rtb_Add_l > Drive_Motor_Control_D_UL) {
    rtb_Add_l = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_l < Drive_Motor_Control_D_LL) {
    rtb_Add_l = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S232>/Add' incorporates:
   *  Gain: '<S232>/Gain1'
   *  Saturate: '<S232>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    rtb_Add_l;

  /* Sum: '<S232>/Subtract' incorporates:
   *  Constant: '<S232>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S232>/Sum2' incorporates:
   *  Gain: '<S232>/Gain2'
   *  UnitDelay: '<S232>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S240>/Switch2' incorporates:
   *  Constant: '<S232>/Constant'
   *  RelationalOperator: '<S240>/LowerRelop1'
   *  Sum: '<S232>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S232>/Constant1'
     *  RelationalOperator: '<S240>/UpperRelop'
     *  Sum: '<S232>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S240>/Switch' */
  }

  /* End of Switch: '<S240>/Switch2' */

  /* Saturate: '<S232>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S232>/Saturation1' */

  /* Sum: '<S232>/Add1' */
  rtb_Add_l = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S232>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S232>/Saturation2' */

  /* Sum: '<S248>/Add1' incorporates:
   *  Constant: '<S248>/Constant3'
   *  Constant: '<S248>/Constant4'
   *  Math: '<S248>/Math Function'
   *  Sum: '<S248>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S250>/Sum1' incorporates:
   *  Constant: '<S235>/Constant2'
   *  Product: '<S250>/Product'
   *  Sum: '<S250>/Sum'
   *  UnitDelay: '<S250>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S235>/Product' incorporates:
   *  Constant: '<S235>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S249>/Diff' incorporates:
   *  UnitDelay: '<S249>/UD'
   *
   * Block description for '<S249>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S249>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_l = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S235>/Saturation' */
  if (rtb_Add_l > Steering_Motor_Control_D_UL) {
    rtb_Add_l = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_l < Steering_Motor_Control_D_LL) {
    rtb_Add_l = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S235>/Add' incorporates:
   *  Gain: '<S235>/Gain1'
   *  Saturate: '<S235>/Saturation'
   */
  rtb_Add_kl = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_l;

  /* Sum: '<S235>/Subtract' incorporates:
   *  Constant: '<S235>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_kl;

  /* Sum: '<S235>/Sum2' incorporates:
   *  Gain: '<S235>/Gain2'
   *  UnitDelay: '<S235>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S251>/Switch2' incorporates:
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S251>/LowerRelop1'
   *  Sum: '<S235>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_kl))) {
    /* Switch: '<S251>/Switch' incorporates:
     *  Constant: '<S235>/Constant1'
     *  RelationalOperator: '<S251>/UpperRelop'
     *  Sum: '<S235>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_kl)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_kl;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_e;
    }

    /* End of Switch: '<S251>/Switch' */
  }

  /* End of Switch: '<S251>/Switch2' */

  /* Saturate: '<S235>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S235>/Saturation1' */

  /* Sum: '<S235>/Add1' */
  rtb_Add_l = rtb_Add_kl + rtb_Sum2_e;

  /* Saturate: '<S235>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S235>/Saturation2' */

  /* Product: '<S343>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S353>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S353>/Switch' incorporates:
     *  Fcn: '<S354>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S353>/Switch' */

  /* Trigonometry: '<S265>/Cos4' incorporates:
   *  Switch: '<S254>/Angle_Switch'
   *  Trigonometry: '<S264>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S265>/Sin5' incorporates:
   *  UnaryMinus: '<S263>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S265>/Sin4' incorporates:
   *  Switch: '<S254>/Angle_Switch'
   *  Trigonometry: '<S264>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S265>/Cos5' incorporates:
   *  UnaryMinus: '<S263>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S265>/Subtract1' incorporates:
   *  Product: '<S265>/Product2'
   *  Product: '<S265>/Product3'
   *  Trigonometry: '<S265>/Cos4'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Subtract1_dk = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S265>/Subtract' incorporates:
   *  Product: '<S265>/Product'
   *  Product: '<S265>/Product1'
   *  Trigonometry: '<S265>/Cos4'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S265>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_dk);

  /* Switch: '<S265>/Switch' incorporates:
   *  Constant: '<S265>/Constant'
   *  Constant: '<S265>/Constant1'
   *  Constant: '<S266>/Constant'
   *  Product: '<S265>/Divide'
   *  Product: '<S265>/Divide1'
   *  RelationalOperator: '<S266>/Compare'
   *  Switch: '<S265>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_dk / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S265>/Switch' */

  /* Switch: '<S254>/Speed_Switch' incorporates:
   *  Abs: '<S254>/Abs'
   *  Constant: '<S262>/Constant'
   *  RelationalOperator: '<S262>/Compare'
   *  Switch: '<S254>/Angle_Switch'
   *  Trigonometry: '<S264>/Atan1'
   *  Trigonometry: '<S265>/Atan1'
   *  UnaryMinus: '<S254>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S264>/Subtract1' incorporates:
     *  Product: '<S264>/Product2'
     *  Product: '<S264>/Product3'
     *  UnaryMinus: '<S254>/Unary Minus'
     */
    rtb_Subtract1_dk = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S264>/Subtract' incorporates:
     *  Product: '<S264>/Product'
     *  Product: '<S264>/Product1'
     */
    rtb_Subtract1_m4 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S264>/Hypot' */
    rtb_Add_kl = rt_hypotd_snf(rtb_Subtract1_m4, rtb_Subtract1_dk);

    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S264>/Constant'
     *  Constant: '<S264>/Constant1'
     *  Constant: '<S267>/Constant'
     *  Product: '<S264>/Divide'
     *  Product: '<S264>/Divide1'
     *  RelationalOperator: '<S267>/Compare'
     *  Switch: '<S264>/Switch'
     */
    if (rtb_Add_kl > 1.0E-6) {
      rtb_Subtract1_m4 /= rtb_Add_kl;
      rtb_Add_kl = rtb_Subtract1_dk / rtb_Add_kl;
    } else {
      rtb_Subtract1_m4 = 1.0;
      rtb_Add_kl = 0.0;
    }

    /* End of Switch: '<S264>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_kl, rtb_Subtract1_m4);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S257>/Product2' incorporates:
   *  Constant: '<S257>/Constant'
   *  Switch: '<S254>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S252>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S252>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S255>/Add' incorporates:
   *  Sum: '<S256>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S227>/Product' incorporates:
   *  Abs: '<S252>/Abs'
   *  Abs: '<S255>/Abs'
   *  Constant: '<S258>/Constant'
   *  Constant: '<S268>/Constant3'
   *  Constant: '<S268>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S252>/OR'
   *  Lookup_n-D: '<S255>/1-D Lookup Table'
   *  Math: '<S268>/Math Function'
   *  RelationalOperator: '<S252>/Equal1'
   *  RelationalOperator: '<S258>/Compare'
   *  Signum: '<S252>/Sign'
   *  Signum: '<S252>/Sign1'
   *  Sum: '<S255>/Add'
   *  Sum: '<S268>/Add1'
   *  Sum: '<S268>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S253>/Gain' */
  rtb_Subtract1_dk = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S253>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S260>/Sum1' incorporates:
   *  Constant: '<S253>/Constant2'
   *  Product: '<S260>/Product'
   *  Sum: '<S260>/Sum'
   *  UnitDelay: '<S260>/Unit Delay1'
   */
  rtb_Add_kl = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S253>/Product' incorporates:
   *  Constant: '<S253>/Constant3'
   */
  rtb_Subtract1_m4 = rtb_Add_kl * Drive_Motor_Control_D;

  /* Sum: '<S259>/Diff' incorporates:
   *  UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_l = rtb_Subtract1_m4 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S253>/Saturation' */
  if (rtb_Add_l > Drive_Motor_Control_D_UL) {
    rtb_Add_l = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_l < Drive_Motor_Control_D_LL) {
    rtb_Add_l = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S253>/Add' incorporates:
   *  Gain: '<S253>/Gain1'
   *  Saturate: '<S253>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_dk) +
    rtb_Add_l;

  /* Sum: '<S253>/Subtract' incorporates:
   *  Constant: '<S253>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S253>/Sum2' incorporates:
   *  Gain: '<S253>/Gain2'
   *  UnitDelay: '<S253>/Unit Delay'
   */
  rtb_Subtract1_dk = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S261>/Switch2' incorporates:
   *  Constant: '<S253>/Constant'
   *  RelationalOperator: '<S261>/LowerRelop1'
   *  Sum: '<S253>/Subtract'
   */
  if (!(rtb_Subtract1_dk > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S253>/Constant1'
     *  RelationalOperator: '<S261>/UpperRelop'
     *  Sum: '<S253>/Subtract1'
     */
    if (rtb_Subtract1_dk < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_dk;
    }

    /* End of Switch: '<S261>/Switch' */
  }

  /* End of Switch: '<S261>/Switch2' */

  /* Saturate: '<S253>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_dk = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S253>/Saturation1' */

  /* Sum: '<S253>/Add1' */
  rtb_Add_l = rtb_Hypot_b + rtb_Subtract1_dk;

  /* Saturate: '<S253>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S253>/Saturation2' */

  /* Sum: '<S269>/Add1' incorporates:
   *  Constant: '<S269>/Constant3'
   *  Constant: '<S269>/Constant4'
   *  Math: '<S269>/Math Function'
   *  Sum: '<S269>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S271>/Sum1' incorporates:
   *  Constant: '<S256>/Constant2'
   *  Product: '<S271>/Product'
   *  Sum: '<S271>/Sum'
   *  UnitDelay: '<S271>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S256>/Product' incorporates:
   *  Constant: '<S256>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

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
  rtb_Add_l = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S256>/Saturation' */
  if (rtb_Add_l > Steering_Motor_Control_D_UL) {
    rtb_Add_l = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_l < Steering_Motor_Control_D_LL) {
    rtb_Add_l = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S256>/Add' incorporates:
   *  Gain: '<S256>/Gain1'
   *  Saturate: '<S256>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_l;

  /* Sum: '<S256>/Subtract' incorporates:
   *  Constant: '<S256>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S256>/Sum2' incorporates:
   *  Gain: '<S256>/Gain2'
   *  UnitDelay: '<S256>/Unit Delay'
   */
  rtb_Subtract1_g = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S272>/Switch2' incorporates:
   *  Constant: '<S256>/Constant'
   *  RelationalOperator: '<S272>/LowerRelop1'
   *  Sum: '<S256>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S256>/Constant1'
     *  RelationalOperator: '<S272>/UpperRelop'
     *  Sum: '<S256>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S272>/Switch' */
  }

  /* End of Switch: '<S272>/Switch2' */

  /* Saturate: '<S256>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S256>/Saturation1' */

  /* Sum: '<S256>/Add1' */
  rtb_Add_l = rtb_Add_ie + rtb_Subtract1_g;

  /* Saturate: '<S256>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S256>/Saturation2' */

  /* Product: '<S343>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S358>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S358>/Switch' incorporates:
     *  Fcn: '<S359>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S358>/Switch' */

  /* Trigonometry: '<S286>/Cos4' incorporates:
   *  Switch: '<S275>/Angle_Switch'
   *  Trigonometry: '<S285>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S286>/Sin5' incorporates:
   *  UnaryMinus: '<S284>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S286>/Sin4' incorporates:
   *  Switch: '<S275>/Angle_Switch'
   *  Trigonometry: '<S285>/Sin4'
   */
  rtb_Subtract1_kj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S286>/Cos5' incorporates:
   *  UnaryMinus: '<S284>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S286>/Subtract1' incorporates:
   *  Product: '<S286>/Product2'
   *  Product: '<S286>/Product3'
   *  Trigonometry: '<S286>/Cos4'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_kj * rtb_Switch2_c);

  /* Sum: '<S286>/Subtract' incorporates:
   *  Product: '<S286>/Product'
   *  Product: '<S286>/Product1'
   *  Trigonometry: '<S286>/Cos4'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Subtract_n = (rtb_Add_ie * rtb_Switch2_c) - (rtb_Subtract1_kj *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S286>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Subtract_n, rtb_Switch2_l);

  /* Switch: '<S286>/Switch' incorporates:
   *  Constant: '<S286>/Constant'
   *  Constant: '<S286>/Constant1'
   *  Constant: '<S287>/Constant'
   *  Product: '<S286>/Divide'
   *  Product: '<S286>/Divide1'
   *  RelationalOperator: '<S287>/Compare'
   *  Switch: '<S286>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_l /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_c = rtb_Subtract_n / rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
  }

  /* End of Switch: '<S286>/Switch' */

  /* Switch: '<S275>/Speed_Switch' incorporates:
   *  Abs: '<S275>/Abs'
   *  Constant: '<S283>/Constant'
   *  RelationalOperator: '<S283>/Compare'
   *  Switch: '<S275>/Angle_Switch'
   *  Trigonometry: '<S285>/Atan1'
   *  Trigonometry: '<S286>/Atan1'
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S285>/Subtract1' incorporates:
     *  Product: '<S285>/Product2'
     *  Product: '<S285>/Product3'
     *  UnaryMinus: '<S275>/Unary Minus'
     */
    rtb_Subtract_n = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S285>/Subtract' incorporates:
     *  Product: '<S285>/Product'
     *  Product: '<S285>/Product1'
     */
    rtb_Subtract1_kj = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S285>/Hypot' */
    rtb_Add_ie = rt_hypotd_snf(rtb_Subtract1_kj, rtb_Subtract_n);

    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S285>/Constant'
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S288>/Constant'
     *  Product: '<S285>/Divide'
     *  Product: '<S285>/Divide1'
     *  RelationalOperator: '<S288>/Compare'
     *  Switch: '<S285>/Switch'
     */
    if (rtb_Add_ie > 1.0E-6) {
      rtb_Subtract1_kj /= rtb_Add_ie;
      rtb_Add_ie = rtb_Subtract_n / rtb_Add_ie;
    } else {
      rtb_Subtract1_kj = 1.0;
      rtb_Add_ie = 0.0;
    }

    /* End of Switch: '<S285>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ie, rtb_Subtract1_kj);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S278>/Product2' incorporates:
   *  Constant: '<S278>/Constant'
   *  Switch: '<S275>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S273>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S273>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S276>/Add' incorporates:
   *  Sum: '<S277>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S228>/Product' incorporates:
   *  Abs: '<S273>/Abs'
   *  Abs: '<S276>/Abs'
   *  Constant: '<S279>/Constant'
   *  Constant: '<S289>/Constant3'
   *  Constant: '<S289>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S273>/OR'
   *  Lookup_n-D: '<S276>/1-D Lookup Table'
   *  Math: '<S289>/Math Function'
   *  RelationalOperator: '<S273>/Equal1'
   *  RelationalOperator: '<S279>/Compare'
   *  Signum: '<S273>/Sign'
   *  Signum: '<S273>/Sign1'
   *  Sum: '<S276>/Add'
   *  Sum: '<S289>/Add1'
   *  Sum: '<S289>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S274>/Gain' */
  rtb_Subtract_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S274>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S281>/Sum1' incorporates:
   *  Constant: '<S274>/Constant2'
   *  Product: '<S281>/Product'
   *  Sum: '<S281>/Sum'
   *  UnitDelay: '<S281>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S274>/Product' incorporates:
   *  Constant: '<S274>/Constant3'
   */
  rtb_Subtract1_kj = rtb_Add_ie * Drive_Motor_Control_D;

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
  rtb_Add_l = rtb_Subtract1_kj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S274>/Saturation' */
  if (rtb_Add_l > Drive_Motor_Control_D_UL) {
    rtb_Add_l = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_l < Drive_Motor_Control_D_LL) {
    rtb_Add_l = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S274>/Add' incorporates:
   *  Gain: '<S274>/Gain1'
   *  Saturate: '<S274>/Saturation'
   */
  rtb_Add_nh = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_n) +
    rtb_Add_l;

  /* Sum: '<S274>/Subtract' incorporates:
   *  Constant: '<S274>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_nh;

  /* Sum: '<S274>/Sum2' incorporates:
   *  Gain: '<S274>/Gain2'
   *  UnitDelay: '<S274>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S282>/Switch2' incorporates:
   *  Constant: '<S274>/Constant'
   *  RelationalOperator: '<S282>/LowerRelop1'
   *  Sum: '<S274>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_nh))) {
    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S274>/Constant1'
     *  RelationalOperator: '<S282>/UpperRelop'
     *  Sum: '<S274>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_nh)) {
      rtb_Switch2_c = -1.0 - rtb_Add_nh;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S282>/Switch' */
  }

  /* End of Switch: '<S282>/Switch2' */

  /* Saturate: '<S274>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S274>/Saturation1' */

  /* Sum: '<S274>/Add1' */
  rtb_Add_l = rtb_Add_nh + rtb_Subtract_n;

  /* Saturate: '<S274>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S274>/Saturation2' */

  /* Sum: '<S290>/Add1' incorporates:
   *  Constant: '<S290>/Constant3'
   *  Constant: '<S290>/Constant4'
   *  Math: '<S290>/Math Function'
   *  Sum: '<S290>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S292>/Sum1' incorporates:
   *  Constant: '<S277>/Constant2'
   *  Product: '<S292>/Product'
   *  Sum: '<S292>/Sum'
   *  UnitDelay: '<S292>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S277>/Product' incorporates:
   *  Constant: '<S277>/Constant3'
   */
  rtb_Add_nh = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

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
  rtb_Add_l = rtb_Add_nh - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S277>/Saturation' */
  if (rtb_Add_l > Steering_Motor_Control_D_UL) {
    rtb_Add_l = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_l < Steering_Motor_Control_D_LL) {
    rtb_Add_l = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Gain: '<S277>/Gain1'
   *  Saturate: '<S277>/Saturation'
   */
  rtb_Add_ls = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Add_l;

  /* Sum: '<S277>/Subtract' incorporates:
   *  Constant: '<S277>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_ls;

  /* Sum: '<S277>/Sum2' incorporates:
   *  Gain: '<S277>/Gain2'
   *  UnitDelay: '<S277>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S293>/Switch2' incorporates:
   *  Constant: '<S277>/Constant'
   *  RelationalOperator: '<S293>/LowerRelop1'
   *  Sum: '<S277>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_ls))) {
    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S277>/Constant1'
     *  RelationalOperator: '<S293>/UpperRelop'
     *  Sum: '<S277>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_ls)) {
      rtb_Switch2_c = -1.0 - rtb_Add_ls;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S293>/Switch' */
  }

  /* End of Switch: '<S293>/Switch2' */

  /* Saturate: '<S277>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_m = rtb_Switch2_c;
  }

  /* End of Saturate: '<S277>/Saturation1' */

  /* Sum: '<S277>/Add1' */
  rtb_Add_l = rtb_Add_ls + rtb_Subtract1_m;

  /* Saturate: '<S277>/Saturation2' */
  if (rtb_Add_l > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_l < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_l;
  }

  /* End of Saturate: '<S277>/Saturation2' */

  /* Gain: '<S124>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   *  Constant: '<S125>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S124>/Switch1' incorporates:
   *  UnitDelay: '<S124>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_ls = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_ls = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S124>/Switch1' */

  /* Sum: '<S124>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_ls;

  /* Gain: '<S124>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S124>/Switch' incorporates:
   *  UnitDelay: '<S124>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S124>/Switch' */

  /* Sum: '<S124>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Back_Lower'
   *  RelationalOperator: '<S18>/Relational Operator'
   */
  rtb_AND_g = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
               (Code_Gen_Model_U.Motor_Current_Back_Lower >
                Dist_Reset_Motor_Current_Back_Lower));

  /* Switch: '<S18>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Switch: '<S18>/Switch3'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = (rtb_AND_g ||
      (Code_Gen_Model_B.Back_Lower_Arm_Cal_Success));
  } else {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S18>/Constant'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S18>/Switch2' */

  /* Product: '<S19>/Product' incorporates:
   *  Constant: '<S19>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Back_Upper *
    Dist_Per_Rev_Back_Upper;

  /* Logic: '<S19>/AND' incorporates:
   *  Constant: '<S19>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Back_Upper'
   *  RelationalOperator: '<S19>/Relational Operator'
   */
  rtb_Is_Absolute_Translation = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Back_Upper >
     Dist_Reset_Motor_Current_Back_Upper));

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S19>/Dist_Reset_Value'
   *  Sum: '<S19>/Sum'
   *  UnitDelay: '<S19>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation) {
    rtb_Switch1_g = rtb_Switch2_l - Dist_Reset_Value_Back_Upper;
  } else {
    rtb_Switch1_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* Sum: '<S19>/Subtract1' */
  Code_Gen_Model_B.Back_Upper_Arm_Length = rtb_Switch2_l - rtb_Switch1_g;

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  rtb_Switch1_b4 = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(rtb_Switch1_b4)) || (rtIsInf(rtb_Switch1_b4))) {
    rtb_Switch1_b4 = 0.0;
  } else {
    rtb_Switch1_b4 = fmod(rtb_Switch1_b4, 256.0);
  }

  rtb_DataTypeConversion_l = (uint8_T)((rtb_Switch1_b4 < 0.0) ? ((int32_T)
    ((uint8_T)(-((int8_T)((uint8_T)(-rtb_Switch1_b4)))))) : ((int32_T)((uint8_T)
    rtb_Switch1_b4)));

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* Switch: '<S12>/Switch4' incorporates:
   *  Constant: '<S12>/Constant25'
   *  Constant: '<S12>/Constant26'
   *  Lookup_n-D: '<S12>/1-D Lookup Table'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Switch2_c = TEST_Speaker_Height;
  } else {
    rtb_Switch2_c = look1_binlcpw(TEST_Speaker_Angle,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 6U);
  }

  /* End of Switch: '<S12>/Switch4' */

  /* Product: '<S18>/Product' incorporates:
   *  Constant: '<S18>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Back_Lower *
    Dist_Per_Rev_Back_Lower;

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S18>/Dist_Reset_Value'
   *  Sum: '<S18>/Sum'
   *  UnitDelay: '<S18>/Unit Delay1'
   */
  if (rtb_AND_g) {
    rtb_Switch1_b4 = rtb_Switch2_l - Dist_Reset_Value_Back_Lower;
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_g;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Sum: '<S18>/Subtract1' */
  Code_Gen_Model_B.Back_Lower_Arm_Length = rtb_Switch2_l - rtb_Switch1_b4;

  /* Sum: '<S127>/Add' incorporates:
   *  Constant: '<S127>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 428.625;

  /* Sqrt: '<S127>/Sqrt' incorporates:
   *  Math: '<S127>/Math Function'
   *  Sum: '<S127>/Subtract'
   */
  rtb_Sqrt = sqrt((rtb_Switch2_l * rtb_Switch2_l) +
                  Code_Gen_Model_ConstB.MathFunction1);

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Front * Dist_Per_Rev_Front;

  /* Logic: '<S21>/AND' incorporates:
   *  Constant: '<S21>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Front'
   *  RelationalOperator: '<S21>/Relational Operator'
   */
  rtb_AND_g = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
               (Code_Gen_Model_U.Motor_Current_Front >
                Dist_Reset_Motor_Current_Front));

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Sum: '<S21>/Sum'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  if (rtb_AND_g) {
    rtb_Switch1_n = rtb_Switch2_l - Dist_Reset_Value_Front;
  } else {
    rtb_Switch1_n = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_l - rtb_Switch1_n;

  /* Sqrt: '<S130>/Sqrt' incorporates:
   *  Constant: '<S130>/Constant24'
   *  Math: '<S130>/Math Function'
   *  Sum: '<S130>/Add'
   *  Sum: '<S130>/Subtract'
   */
  rtb_Sqrt_f = sqrt(((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
                     (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
                    Code_Gen_Model_ConstB.MathFunction1_m);

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   */
  rtb_Switch2_l = Code_Gen_Model_U.Encoder_Revs_Ball_Screw *
    Dist_Per_Rev_Ball_Screw;

  /* Logic: '<S20>/AND' incorporates:
   *  Constant: '<S20>/Dist_Reset_Motor_Current_Threshold'
   *  Inport: '<Root>/Motor_Current_Ball_Screw'
   *  RelationalOperator: '<S20>/Relational Operator'
   */
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Ball_Screw >
     Dist_Reset_Motor_Current_Ball_Screw));

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_f = rtb_Switch2_l - Dist_Reset_Value_Ball_Screw;
  } else {
    rtb_Switch1_f = Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Sum: '<S20>/Subtract1' */
  Code_Gen_Model_B.Ball_Screw_Arm_Length = rtb_Switch2_l - rtb_Switch1_f;

  /* MATLAB Function: '<S12>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S12>/Constant12'
   *  Constant: '<S12>/Constant2'
   *  Constant: '<S12>/Constant22'
   *  Constant: '<S12>/Constant3'
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S12>/Constant5'
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S12>/Constant7'
   *  Constant: '<S12>/Constant8'
   *  Constant: '<S12>/Constant9'
   */
  sqrt_input = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  d = (sqrt_input - 35175.736099999987) / 331.17548218429454;
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    sqrt_input = sqrt(sqrt_input);
  } else {
    sqrt_input = 0.0;
  }

  rtb_Switch2_l = (((((((d * 0.84366148773210747) + 177.79999999999998) -
                       (sqrt_input * -0.53687549219315933)) - 177.79999999999998)
                     - 139.7) * (rtb_Sqrt_f / 250.18999999999997)) +
                   177.79999999999998) + 139.7;
  rtb_Sqrt_f = (((d * -0.53687549219315933) + 88.899999999999991) + (sqrt_input *
    0.84366148773210747)) * (rtb_Sqrt_f / 250.18999999999997);
  d = sqrt(((rtb_Sqrt_f - 25.4) * (rtb_Sqrt_f - 25.4)) + (rtb_Switch2_l *
            rtb_Switch2_l));
  sqrt_input = rtb_Sqrt * rtb_Sqrt;
  d = (((d * d) - 24840.962499999998) + sqrt_input) / (2.0 * d);
  sqrt_input -= d * d;
  if (sqrt_input >= 0.0) {
    sqrt_input = sqrt(sqrt_input);
  } else {
    sqrt_input = 0.0;
  }

  alpha = atan((rtb_Sqrt_f - 25.4) / rtb_Switch2_l);
  cos_alpha = cos(alpha);
  alpha = sin(alpha);
  rtb_Sqrt = (d * cos_alpha) - (sqrt_input * alpha);
  d = ((d * alpha) + (sqrt_input * cos_alpha)) + 25.4;
  rtb_Switch2_l = atan((rtb_Sqrt_f - d) / (rtb_Switch2_l - rtb_Sqrt)) -
    -0.16186298985390718;
  sqrt_input = cos(rtb_Switch2_l);
  cos_alpha = sin(rtb_Switch2_l);
  rtb_Sqrt_f = (d - (42.875 * cos_alpha)) - (-76.0 * sqrt_input);
  d = ((rtb_Sqrt - -50.027) - (42.875 * sqrt_input)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Sqrt_f - 465.697) * (rtb_Sqrt_f - 465.697))
    + (d * d);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Sqrt_f;

  /* Gain: '<S12>/Gain2' incorporates:
   *  MATLAB Function: '<S12>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Switch2_l;

  /* Chart: '<S12>/Chart_Shooter_Position' incorporates:
   *  Constant: '<S12>/Constant26'
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

  /* End of Chart: '<S12>/Chart_Shooter_Position' */

  /* Gain: '<S12>/Gain3' */
  rtb_Switch2_c = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S12>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S12>/Constant10'
   *  Constant: '<S12>/Constant11'
   *  Constant: '<S12>/Constant13'
   *  Constant: '<S12>/Constant14'
   *  Constant: '<S12>/Constant15'
   *  Constant: '<S12>/Constant21'
   */
  rtb_Switch2_l = cos(rtb_Switch2_c);
  rtb_Switch2_c = sin(rtb_Switch2_c);
  sqrt_input = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (sqrt_input >= 0.0) {
    rtb_Sqrt = ((rtb_Switch2_l * 42.875) + ((-rtb_Switch2_c) * -76.0)) + (sqrt
      (sqrt_input) - 50.027);
  } else {
    rtb_Sqrt = ((rtb_Switch2_l * 42.875) + ((-rtb_Switch2_c) * -76.0)) - 50.027;
  }

  rtb_Reshapey[0] = rtb_Sqrt;
  rtb_Minus_n[0] = ((rtb_Switch2_l * 155.54999999999998) + ((-rtb_Switch2_c) *
    -25.4)) + rtb_Sqrt;
  rtb_Sqrt = ((rtb_Switch2_c * 42.875) + (rtb_Switch2_l * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Reshapey[1] = rtb_Sqrt;
  rtb_Minus_n[1] = ((rtb_Switch2_c * 155.54999999999998) + (rtb_Switch2_l *
    -25.4)) + rtb_Sqrt;
  rtb_Switch2_l = sqrt(((rtb_Reshapey[1] - 25.4) * (rtb_Reshapey[1] - 25.4)) +
                       (rtb_Reshapey[0] * rtb_Reshapey[0]));
  cos_alpha = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                   (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Sqrt = 139.7 - ((317.5 - rtb_Minus_n[0]) * (250.18999999999997 / cos_alpha));
  rtb_Switch2_c = ((250.18999999999997 / cos_alpha) * rtb_Minus_n[1]) -
    88.899999999999991;
  rtb_Ball_Screw_Length = sqrt((rtb_Sqrt * rtb_Sqrt) + (rtb_Switch2_c *
    rtb_Switch2_c));

  /* MATLAB Function: '<S12>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S12>/Constant23'
   *  Constant: '<S12>/Constant24'
   *  Constant: '<S12>/Constant28'
   *  Constant: '<S12>/Constant29'
   *  Constant: '<S12>/Constant30'
   *  Constant: '<S12>/Constant31'
   */
  rtb_Switch2_l = fmax((sqrt((rtb_Switch2_l * rtb_Switch2_l) - 645.16) - 428.625)
                       - 11.690000000000001, 11.690000000000001);
  rtb_Switch2_c = fmin(fmax(42.585, rtb_Switch2_l), 307.975);
  rtb_Switch2_l -= rtb_Switch2_c;
  if (rtb_Switch2_l >= 11.690000000000001) {
    d = fmin(rtb_Switch2_l, 271.14500000000004);
  } else {
    d = 11.690000000000001;
  }

  /* Switch: '<S154>/Init' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   *  UnitDelay: '<S154>/FixPt Unit Delay1'
   *  UnitDelay: '<S154>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S154>/Init' */

  /* Sum: '<S152>/Sum1' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S153>/Switch2' incorporates:
   *  Constant: '<S138>/Constant1'
   *  Constant: '<S138>/Constant3'
   *  RelationalOperator: '<S153>/LowerRelop1'
   *  RelationalOperator: '<S153>/UpperRelop'
   *  Switch: '<S153>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S153>/Switch' incorporates:
     *  Constant: '<S138>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S153>/Switch2' */

  /* Sum: '<S152>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S133>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Sum: '<S142>/Sum1' incorporates:
   *  Constant: '<S133>/Constant2'
   *  Product: '<S142>/Product'
   *  Sum: '<S142>/Sum'
   *  UnitDelay: '<S142>/Unit Delay1'
   */
  rtb_Sqrt = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bm) *
              AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bm;

  /* Product: '<S133>/Product' incorporates:
   *  Constant: '<S133>/Constant3'
   */
  rtb_Sqrt_f = rtb_Sqrt * AA_Deriv_Gain;

  /* Switch: '<S12>/Switch1' incorporates:
   *  Logic: '<S12>/AND3'
   *  Logic: '<S12>/NOT'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Back_Lower_Arm_Cal_Success)) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant27'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Cal_Back_Upper_Arm_DC;
  } else {
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
    rtb_Add_l = rtb_Sqrt_f - Code_Gen_Model_DW.UD_DSTATE_n;

    /* Saturate: '<S133>/Saturation' */
    if (rtb_Add_l > AA_Deriv_UL) {
      rtb_Add_l = AA_Deriv_UL;
    } else if (rtb_Add_l < AA_Deriv_LL) {
      rtb_Add_l = AA_Deriv_LL;
    }

    /* Sum: '<S133>/Add' incorporates:
     *  Gain: '<S133>/Gain1'
     *  Saturate: '<S133>/Saturation'
     */
    rtb_Add_l += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S133>/Saturation2' */
    if (rtb_Add_l > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_l < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = rtb_Add_l;
    }

    /* End of Saturate: '<S133>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S151>/Init' incorporates:
   *  UnitDelay: '<S151>/FixPt Unit Delay1'
   *  UnitDelay: '<S151>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = d;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S151>/Init' */

  /* Sum: '<S149>/Sum1' */
  rtb_Switch2_c = d - rtb_Switch2_l;

  /* Switch: '<S150>/Switch2' incorporates:
   *  Constant: '<S137>/Constant1'
   *  Constant: '<S137>/Constant3'
   *  RelationalOperator: '<S150>/LowerRelop1'
   *  RelationalOperator: '<S150>/UpperRelop'
   *  Switch: '<S150>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S150>/Switch' incorporates:
     *  Constant: '<S137>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S150>/Switch2' */

  /* Sum: '<S149>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S134>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Sum: '<S144>/Sum1' incorporates:
   *  Constant: '<S134>/Constant2'
   *  Product: '<S144>/Product'
   *  Sum: '<S144>/Sum'
   *  UnitDelay: '<S144>/Unit Delay1'
   */
  d = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_l) * AA_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l;

  /* Product: '<S134>/Product' incorporates:
   *  Constant: '<S134>/Constant3'
   */
  sqrt_input = d * AA_Deriv_Gain;

  /* Switch: '<S19>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Switch: '<S19>/Switch3'
     *  UnitDelay: '<S19>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = (rtb_Is_Absolute_Translation ||
      (Code_Gen_Model_B.Back_Upper_Arm_Cal_Success));
  } else {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Switch: '<S12>/Switch' incorporates:
   *  Logic: '<S12>/AND2'
   *  Logic: '<S12>/NOT1'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Back_Upper_Arm_Cal_Success)) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant32'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Cal_Back_Lower_Arm_DC;
  } else {
    /* Sum: '<S143>/Diff' incorporates:
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
    rtb_Add_l = sqrt_input - Code_Gen_Model_DW.UD_DSTATE_bi;

    /* Saturate: '<S134>/Saturation' */
    if (rtb_Add_l > AA_Deriv_UL) {
      rtb_Add_l = AA_Deriv_UL;
    } else if (rtb_Add_l < AA_Deriv_LL) {
      rtb_Add_l = AA_Deriv_LL;
    }

    /* Sum: '<S134>/Add' incorporates:
     *  Gain: '<S134>/Gain1'
     *  Saturate: '<S134>/Saturation'
     */
    rtb_Add_l += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S134>/Saturation2' */
    if (rtb_Add_l > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_l < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = rtb_Add_l;
    }

    /* End of Saturate: '<S134>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S129>/Subtract1' incorporates:
   *  Constant: '<S129>/Constant24'
   *  MATLAB Function: '<S12>/Get_Arm_Lengths'
   *  Math: '<S129>/Math Function'
   *  Sqrt: '<S129>/Sqrt'
   *  Sum: '<S129>/Subtract'
   */
  rtb_Switch2_l = sqrt((cos_alpha * cos_alpha) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S129>/Saturation' */
  if (rtb_Switch2_l > Front_AA_Bot_Max_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Max_Ext;
  } else if (rtb_Switch2_l < Front_AA_Bot_Min_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Min_Ext;
  }

  /* End of Saturate: '<S129>/Saturation' */

  /* Switch: '<S160>/Init' incorporates:
   *  UnitDelay: '<S160>/FixPt Unit Delay1'
   *  UnitDelay: '<S160>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S160>/Init' */

  /* Sum: '<S158>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S159>/Switch2' incorporates:
   *  Constant: '<S140>/Constant1'
   *  Constant: '<S140>/Constant3'
   *  RelationalOperator: '<S159>/LowerRelop1'
   *  RelationalOperator: '<S159>/UpperRelop'
   *  Switch: '<S159>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S159>/Switch' incorporates:
     *  Constant: '<S140>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S159>/Switch2' */

  /* Sum: '<S158>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S135>/Sum' */
  rtb_Switch2_l = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Sum: '<S146>/Sum1' incorporates:
   *  Constant: '<S135>/Constant2'
   *  Product: '<S146>/Product'
   *  Sum: '<S146>/Sum'
   *  UnitDelay: '<S146>/Unit Delay1'
   */
  cos_alpha = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_bg) *
               AA_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bg;

  /* Product: '<S135>/Product' incorporates:
   *  Constant: '<S135>/Constant3'
   */
  alpha = cos_alpha * AA_Deriv_Gain;

  /* Switch: '<S21>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S21>/Switch2' incorporates:
     *  Switch: '<S21>/Switch3'
     *  UnitDelay: '<S21>/Unit Delay2'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = (rtb_AND_g ||
      (Code_Gen_Model_B.Front_Arm_Cal_Success));
  } else {
    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S21>/Constant'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Switch: '<S12>/Switch2' incorporates:
   *  Logic: '<S12>/AND1'
   *  Logic: '<S12>/NOT2'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Front_Arm_Cal_Success)) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant33'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Cal_Front_Arm_DC;
  } else {
    /* Sum: '<S145>/Diff' incorporates:
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
    rtb_Add_l = alpha - Code_Gen_Model_DW.UD_DSTATE_g;

    /* Saturate: '<S135>/Saturation' */
    if (rtb_Add_l > AA_Deriv_UL) {
      rtb_Add_l = AA_Deriv_UL;
    } else if (rtb_Add_l < AA_Deriv_LL) {
      rtb_Add_l = AA_Deriv_LL;
    }

    /* Sum: '<S135>/Add' incorporates:
     *  Gain: '<S135>/Gain1'
     *  Saturate: '<S135>/Saturation'
     */
    rtb_Add_l += AA_Prop_Gain * rtb_Switch2_l;

    /* Saturate: '<S135>/Saturation2' */
    if (rtb_Add_l > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (rtb_Add_l < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = rtb_Add_l;
    }

    /* End of Saturate: '<S135>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S157>/Init' incorporates:
   *  UnitDelay: '<S157>/FixPt Unit Delay1'
   *  UnitDelay: '<S157>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = rtb_Ball_Screw_Length;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S157>/Init' */

  /* Sum: '<S155>/Sum1' */
  rtb_Switch2_c = rtb_Ball_Screw_Length - rtb_Switch2_l;

  /* Switch: '<S156>/Switch2' incorporates:
   *  Constant: '<S139>/Constant1'
   *  Constant: '<S139>/Constant3'
   *  RelationalOperator: '<S156>/LowerRelop1'
   *  RelationalOperator: '<S156>/UpperRelop'
   *  Switch: '<S156>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S156>/Switch' incorporates:
     *  Constant: '<S139>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S156>/Switch2' */

  /* Sum: '<S155>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S136>/Sum' */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S148>/Sum1' incorporates:
   *  Constant: '<S136>/Constant2'
   *  Product: '<S148>/Product'
   *  Sum: '<S148>/Sum'
   *  UnitDelay: '<S148>/Unit Delay1'
   */
  rtb_Switch2_l = ((rtb_Ball_Screw_Length -
                    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S136>/Product' incorporates:
   *  Constant: '<S136>/Constant3'
   */
  rtb_Switch2_c = rtb_Switch2_l * BS_Deriv_Gain;

  /* Switch: '<S20>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Switch: '<S20>/Switch3'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success));
  } else {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Switch: '<S12>/Switch3' incorporates:
   *  Logic: '<S12>/AND'
   *  Logic: '<S12>/NOT3'
   */
  if ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
      (!Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success)) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant34'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Cal_Ball_Screw_Arm_DC;
  } else {
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
    rtb_Add_l = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S136>/Saturation' */
    if (rtb_Add_l > BS_Deriv_UL) {
      rtb_Add_l = BS_Deriv_UL;
    } else if (rtb_Add_l < BS_Deriv_LL) {
      rtb_Add_l = BS_Deriv_LL;
    }

    /* Sum: '<S136>/Add' incorporates:
     *  Gain: '<S136>/Gain1'
     *  Saturate: '<S136>/Saturation'
     */
    rtb_Add_l += BS_Prop_Gain * rtb_Ball_Screw_Length;

    /* Saturate: '<S136>/Saturation2' */
    if (rtb_Add_l > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (rtb_Add_l < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = rtb_Add_l;
    }

    /* End of Saturate: '<S136>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch3' */

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  rtb_Is_Absolute_Translation = (Code_Gen_Model_B.State_Request_Intake_Shooter_h
    == 1.0);

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  rtb_Ball_Screw_Length = look1_binlcpw(TEST_Speaker_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  rtb_AND_g = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 2.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    4.0);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_Switch_b1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  rtb_Compare_o = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* Chart: '<S7>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S52>/FixPt Relational Operator'
   *  RelationalOperator: '<S53>/FixPt Relational Operator'
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  RelationalOperator: '<S56>/FixPt Relational Operator'
   *  UnitDelay: '<S52>/Delay Input1'
   *  UnitDelay: '<S53>/Delay Input1'
   *  UnitDelay: '<S54>/Delay Input1'
   *  UnitDelay: '<S55>/Delay Input1'
   *  UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S52>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S56>/Delay Input1':
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
      } else if (((int32_T)rtb_AND_g) > ((int32_T)
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
                  Code_Gen_Model_DW.DelayInput1_DSTATE_f)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
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

  /* End of Chart: '<S7>/Chart_Intake_and_Shooter' */

  /* Sum: '<S57>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Ball_Screw_Length = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S57>/Add' incorporates:
   *  Gain: '<S57>/Gain'
   *  Gain: '<S57>/Gain1'
   */
  rtb_Add_l = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Ball_Screw_Length);

  /* Switch: '<S57>/Switch' incorporates:
   *  Constant: '<S57>/Constant2'
   *  Switch: '<S7>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S57>/Sum2' incorporates:
     *  Gain: '<S57>/Gain2'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    rtb_Ball_Screw_Length = (Shooter_Motor_Control_I * rtb_Ball_Screw_Length) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S57>/Subtract' incorporates:
     *  Constant: '<S57>/Constant'
     */
    rtb_Switch2_id = 1.0 - rtb_Add_l;

    /* Switch: '<S59>/Switch2' incorporates:
     *  Constant: '<S57>/Constant'
     *  RelationalOperator: '<S59>/LowerRelop1'
     *  Sum: '<S57>/Subtract'
     */
    if (!(rtb_Ball_Screw_Length > (1.0 - rtb_Add_l))) {
      /* Sum: '<S57>/Subtract1' incorporates:
       *  Constant: '<S57>/Constant1'
       */
      rtb_Switch2_id = -1.0 - rtb_Add_l;

      /* Switch: '<S59>/Switch' incorporates:
       *  Constant: '<S57>/Constant1'
       *  RelationalOperator: '<S59>/UpperRelop'
       *  Sum: '<S57>/Subtract1'
       */
      if (!(rtb_Ball_Screw_Length < (-1.0 - rtb_Add_l))) {
        rtb_Switch2_id = rtb_Ball_Screw_Length;
      }

      /* End of Switch: '<S59>/Switch' */
    }

    /* End of Switch: '<S59>/Switch2' */

    /* Saturate: '<S57>/Saturation1' */
    if (rtb_Switch2_id > Shooter_Motor_Control_I_UL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_id < Shooter_Motor_Control_I_LL) {
      rtb_Ball_Screw_Length = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Ball_Screw_Length = rtb_Switch2_id;
    }

    /* End of Saturate: '<S57>/Saturation1' */

    /* Sum: '<S57>/Add1' */
    rtb_Add_l += rtb_Ball_Screw_Length;

    /* Saturate: '<S57>/Saturation2' */
    if (rtb_Add_l > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_l < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Add_l;
    }

    /* End of Saturate: '<S57>/Saturation2' */
  } else {
    rtb_Ball_Screw_Length = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S57>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S57>/Switch' */

  /* Sum: '<S58>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_id = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S58>/Add' incorporates:
   *  Gain: '<S58>/Gain'
   *  Gain: '<S58>/Gain1'
   */
  rtb_Add_l = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_id);

  /* Switch: '<S58>/Switch' incorporates:
   *  Constant: '<S58>/Constant2'
   *  Switch: '<S7>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S58>/Sum2' incorporates:
     *  Gain: '<S58>/Gain2'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    rtb_Switch2_id = (Shooter_Motor_Control_I * rtb_Switch2_id) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S58>/Subtract' incorporates:
     *  Constant: '<S58>/Constant'
     */
    rtb_Switch2_h = 1.0 - rtb_Add_l;

    /* Switch: '<S60>/Switch2' incorporates:
     *  Constant: '<S58>/Constant'
     *  RelationalOperator: '<S60>/LowerRelop1'
     *  Sum: '<S58>/Subtract'
     */
    if (!(rtb_Switch2_id > (1.0 - rtb_Add_l))) {
      /* Sum: '<S58>/Subtract1' incorporates:
       *  Constant: '<S58>/Constant1'
       */
      rtb_Switch2_h = -1.0 - rtb_Add_l;

      /* Switch: '<S60>/Switch' incorporates:
       *  Constant: '<S58>/Constant1'
       *  RelationalOperator: '<S60>/UpperRelop'
       *  Sum: '<S58>/Subtract1'
       */
      if (!(rtb_Switch2_id < (-1.0 - rtb_Add_l))) {
        rtb_Switch2_h = rtb_Switch2_id;
      }

      /* End of Switch: '<S60>/Switch' */
    }

    /* End of Switch: '<S60>/Switch2' */

    /* Saturate: '<S58>/Saturation1' */
    if (rtb_Switch2_h > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_id = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_h < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_id = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_id = rtb_Switch2_h;
    }

    /* End of Saturate: '<S58>/Saturation1' */

    /* Sum: '<S58>/Add1' */
    rtb_Add_l += rtb_Switch2_id;

    /* Saturate: '<S58>/Saturation2' */
    if (rtb_Add_l > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_l < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Add_l;
    }

    /* End of Saturate: '<S58>/Saturation2' */
  } else {
    rtb_Switch2_id = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S58>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S58>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' */
    Code_Gen_Model_Y.Shooter_Servo_Position = Code_Gen_Model_B.Shooter_Servo_Pos;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* SignalConversion: '<S6>/Signal Copy16' incorporates:
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   *  RelationalOperator: '<S33>/Compare'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy9' incorporates:
   *  Constant: '<S34>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   *  RelationalOperator: '<S34>/Compare'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy8' incorporates:
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   *  RelationalOperator: '<S35>/Compare'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* Logic: '<S6>/OR4' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   */
  Code_Gen_Model_B.Chain_Button = ((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
    (Code_Gen_Model_U.Joystick_Right_B8 != 0.0));

  /* SignalConversion: '<S6>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* Update for UnitDelay: '<S116>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S116>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S117>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S117>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S118>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S118>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S119>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S119>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S45>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S45>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Gamepad_B1_A;

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_thetay;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' incorporates:
     *  Bias: '<S189>/Bias'
     *  Merge: '<S163>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' incorporates:
     *  Bias: '<S189>/Bias'
     *  Merge: '<S163>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S61>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S81>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S61>/A'
   *  Delay: '<S61>/MemoryX'
   */
  rtb_thetay = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Add_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S61>/MemoryX' incorporates:
   *  Constant: '<S61>/B'
   *  Product: '<S81>/A[k]*xhat[k|k-1]'
   *  Product: '<S81>/B[k]*u[k]'
   *  Sum: '<S81>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_thetay) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Add_l) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S115>/UD'
   *
   * Block description for '<S115>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_Switch1_nj;

  /* Update for DiscreteIntegrator: '<S11>/Accumulator2' incorporates:
   *  Constant: '<S11>/Constant'
   *  DiscreteIntegrator: '<S11>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S11>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S11>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S326>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S326>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S340>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S339>/UD'
   *
   * Block description for '<S339>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S337>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S335>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S335>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S302>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S301>/UD'
   *
   * Block description for '<S301>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2;

  /* Update for UnitDelay: '<S295>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch4_g;

  /* Update for UnitDelay: '<S313>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch1_p;

  /* Update for UnitDelay: '<S312>/UD'
   *
   * Block description for '<S312>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Switch2_o;

  /* Update for UnitDelay: '<S298>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Product_ku;

  /* Update for UnitDelay: '<S239>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S238>/UD'
   *
   * Block description for '<S238>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S232>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S250>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S249>/UD'
   *
   * Block description for '<S249>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S235>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S260>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_kl;

  /* Update for UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_m4;

  /* Update for UnitDelay: '<S253>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_dk;

  /* Update for UnitDelay: '<S271>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S270>/UD'
   *
   * Block description for '<S270>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S256>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S281>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S280>/UD'
   *
   * Block description for '<S280>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_kj;

  /* Update for UnitDelay: '<S274>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract_n;

  /* Update for UnitDelay: '<S292>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_nh;

  /* Update for UnitDelay: '<S277>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_m;

  /* Update for UnitDelay: '<S124>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_ls;

  /* Update for UnitDelay: '<S124>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_g;

  /* Update for UnitDelay: '<S18>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_b4;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_n;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_f;

  /* Update for UnitDelay: '<S154>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S154>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S142>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bm = rtb_Sqrt;

  /* Update for UnitDelay: '<S141>/UD'
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_n = rtb_Sqrt_f;

  /* Update for UnitDelay: '<S151>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S151>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S144>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_l = d;

  /* Update for UnitDelay: '<S143>/UD'
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_bi = sqrt_input;

  /* Update for UnitDelay: '<S160>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S160>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S146>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bg = cos_alpha;

  /* Update for UnitDelay: '<S145>/UD'
   *
   * Block description for '<S145>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_g = alpha;

  /* Update for UnitDelay: '<S157>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S157>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S148>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S147>/UD'
   *
   * Block description for '<S147>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S52>/Delay Input1'
   *
   * Block description for '<S52>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S53>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_AND_g;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Switch_b1;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Compare_o;

  /* Update for UnitDelay: '<S57>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Ball_Screw_Length;

  /* Update for UnitDelay: '<S58>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch2_id;
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

    /* Start for If: '<S13>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Arm_Calibration_Timeout;

    /* InitializeConditions for Delay: '<S61>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S326>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S335>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S154>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S151>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S160>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S157>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S392>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S13>/Spline Path Following Enabled' */
    /* Start for If: '<S167>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S163>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S167>/Robot_Index_Is_Valid' */
    /* Start for If: '<S170>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S170>/Circle_Check_Valid' */
    /* Start for If: '<S172>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S170>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S167>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S13>/Spline Path Following Enabled' */
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

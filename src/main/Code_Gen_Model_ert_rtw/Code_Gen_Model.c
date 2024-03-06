/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.90
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Mar  5 23:15:51 2024
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
real_T AA_Integral_Gain = 0.0;         /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S135>/Gain2'
                                        *   '<S136>/Gain2'
                                        *   '<S137>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S135>/Constant3'
                                        *   '<S136>/Constant3'
                                        *   '<S137>/Constant3'
                                        */
real_T AA_Integral_LL = 0.0;           /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S135>/Saturation1'
                                        *   '<S136>/Saturation1'
                                        *   '<S137>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S135>/Saturation1'
                                        *   '<S136>/Saturation1'
                                        *   '<S137>/Saturation1'
                                        */
real_T AA_Position_Dec_RL = -0.508;    /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S138>/Constant1'
                                        *   '<S139>/Constant1'
                                        *   '<S141>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 0.508;     /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S138>/Constant3'
                                        *   '<S139>/Constant3'
                                        *   '<S141>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S135>/Gain1'
                                        *   '<S136>/Gain1'
                                        *   '<S137>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S135>/Constant1'
                                        *   '<S135>/Saturation2'
                                        *   '<S136>/Constant1'
                                        *   '<S136>/Saturation2'
                                        *   '<S137>/Constant1'
                                        *   '<S137>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S135>/Constant'
                                        *   '<S135>/Saturation2'
                                        *   '<S136>/Constant'
                                        *   '<S136>/Saturation2'
                                        *   '<S137>/Constant'
                                        *   '<S137>/Saturation2'
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
                                        * Referenced by: '<S134>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S134>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S134>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S134>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -0.0508;   /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S140>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 0.0508;    /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S140>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S134>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S134>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S134>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S390>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S388>/Constant'
                                         *   '<S388>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S390>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S388>/Constant1'
                                        */
real_T Cal_Back_Lower_Arm_DC = 0.0;    /* Variable: Cal_Back_Lower_Arm_DC
                                        * Referenced by: '<S12>/Constant32'
                                        */
real_T Cal_Back_Upper_Arm_DC = 0.0;    /* Variable: Cal_Back_Upper_Arm_DC
                                        * Referenced by: '<S12>/Constant27'
                                        */
real_T Cal_Ball_Screw_Arm_DC = 0.0;    /* Variable: Cal_Ball_Screw_Arm_DC
                                        * Referenced by: '<S12>/Constant34'
                                        */
real_T Cal_Front_Arm_DC = 0.0;         /* Variable: Cal_Front_Arm_DC
                                        * Referenced by: '<S12>/Constant33'
                                        */
real_T Dist_Per_Rev_Back_Lower = 3.9898;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S18>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 3.9898;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S19>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.3175;/* Variable: Dist_Per_Rev_Ball_Screw
                                         * Referenced by: '<S20>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Front = 3.9898;    /* Variable: Dist_Per_Rev_Front
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
                                        * Referenced by: '<S317>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S233>/Constant3'
                                        *   '<S254>/Constant3'
                                        *   '<S275>/Constant3'
                                        *   '<S296>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S233>/Constant2'
                                   *   '<S254>/Constant2'
                                   *   '<S275>/Constant2'
                                   *   '<S296>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S233>/Saturation'
                                        *   '<S254>/Saturation'
                                        *   '<S275>/Saturation'
                                        *   '<S296>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S233>/Saturation'
                                        *   '<S254>/Saturation'
                                        *   '<S275>/Saturation'
                                        *   '<S296>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S233>/Gain'
                                            *   '<S254>/Gain'
                                            *   '<S275>/Gain'
                                            *   '<S296>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S233>/Gain2'
                                        *   '<S254>/Gain2'
                                        *   '<S275>/Gain2'
                                        *   '<S296>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S233>/Saturation1'
                                        *   '<S254>/Saturation1'
                                        *   '<S275>/Saturation1'
                                        *   '<S296>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S233>/Saturation1'
                                        *   '<S254>/Saturation1'
                                        *   '<S275>/Saturation1'
                                        *   '<S296>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S233>/Gain1'
                                        *   '<S254>/Gain1'
                                        *   '<S275>/Gain1'
                                        *   '<S296>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S238>/Constant'
                            *   '<S259>/Constant'
                            *   '<S280>/Constant'
                            *   '<S301>/Constant'
                            */
real_T Front_AA_Bot_Max_Ext = 455.6125;/* Variable: Front_AA_Bot_Max_Ext
                                        * Referenced by: '<S130>/Saturation'
                                        */
real_T Front_AA_Bot_Min_Ext = 9.5;     /* Variable: Front_AA_Bot_Min_Ext
                                        * Referenced by: '<S130>/Saturation'
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
                          * Referenced by: '<S218>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S218>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S165>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S178>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S218>/Constant3'
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
                                          * Referenced by: '<S372>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S338>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S338>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S338>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S338>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S337>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S338>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S338>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S338>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S338>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S338>/Constant1'
                                   *   '<S338>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S338>/Constant'
                                   *   '<S338>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S328>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S328>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S328>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S328>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S328>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S328>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S236>/Constant3'
                                        *   '<S257>/Constant3'
                                        *   '<S278>/Constant3'
                                        *   '<S299>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S236>/Constant2'
                                *   '<S257>/Constant2'
                                *   '<S278>/Constant2'
                                *   '<S299>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S236>/Saturation'
                                           *   '<S257>/Saturation'
                                           *   '<S278>/Saturation'
                                           *   '<S299>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S236>/Saturation'
                                          *   '<S257>/Saturation'
                                          *   '<S278>/Saturation'
                                          *   '<S299>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S236>/Gain2'
                                         *   '<S257>/Gain2'
                                         *   '<S278>/Gain2'
                                         *   '<S299>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S236>/Saturation1'
                                             *   '<S257>/Saturation1'
                                             *   '<S278>/Saturation1'
                                             *   '<S299>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S236>/Saturation1'
                                            *   '<S257>/Saturation1'
                                            *   '<S278>/Saturation1'
                                            *   '<S299>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S236>/Gain1'
                                        *   '<S257>/Gain1'
                                        *   '<S278>/Gain1'
                                        *   '<S299>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S370>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S370>/Constant1'
                                        */
real_T TEST_Cal_DC_Flag = 0.0;         /* Variable: TEST_Cal_DC_Flag
                                        * Referenced by: '<S12>/Constant35'
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
                        * Referenced by: '<S316>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S316>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S316>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S316>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S316>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S316>/Constant3'
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
  real_T rtb_Add_pw;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Hypot_i;
  real_T rtb_Init_e;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_Merge1;
  real_T rtb_Product_ku;
  real_T rtb_Sqrt;
  real_T rtb_Sqrt_f;
  real_T rtb_Subtract1_bm;
  real_T rtb_Subtract1_dk;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_g;
  real_T rtb_Subtract1_hq;
  real_T rtb_Subtract1_kj;
  real_T rtb_Subtract1_m4;
  real_T rtb_Subtract1_n;
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
  real_T rtb_Switch2_hk;
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
  int32_T s190_iter;
  uint16_T s215_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_DataTypeConversion_l;
  boolean_T exitg1;
  boolean_T rtb_AND_g;
  boolean_T rtb_Compare_as;
  boolean_T rtb_Compare_fm;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S223>/Add1' incorporates:
   *  Constant: '<S223>/Constant3'
   *  Constant: '<S223>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S223>/Math Function'
   *  Sum: '<S14>/Add'
   *  Sum: '<S223>/Add2'
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

  /* Sum: '<S224>/Add1' incorporates:
   *  Constant: '<S224>/Constant3'
   *  Constant: '<S224>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S224>/Math Function'
   *  Sum: '<S14>/Add1'
   *  Sum: '<S224>/Add2'
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

  /* Sum: '<S225>/Add1' incorporates:
   *  Constant: '<S225>/Constant3'
   *  Constant: '<S225>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S225>/Math Function'
   *  Sum: '<S14>/Add2'
   *  Sum: '<S225>/Add2'
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

  /* Sum: '<S226>/Add1' incorporates:
   *  Constant: '<S226>/Constant3'
   *  Constant: '<S226>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S226>/Math Function'
   *  Sum: '<S14>/Add3'
   *  Sum: '<S226>/Add2'
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

    /* Switch: '<S372>/Switch' incorporates:
     *  Constant: '<S372>/Constant'
     *  Constant: '<S372>/Constant1'
     *  Constant: '<S372>/Constant2'
     *  Math: '<S372>/Hypot'
     *  RelationalOperator: '<S372>/GreaterThan'
     *  Switch: '<S372>/Switch1'
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

    /* End of Switch: '<S372>/Switch' */

    /* Logic: '<S370>/AND' incorporates:
     *  Constant: '<S373>/Constant'
     *  Constant: '<S374>/Constant'
     *  Logic: '<S380>/AND'
     *  RelationalOperator: '<S373>/Compare'
     *  RelationalOperator: '<S374>/Compare'
     */
    rtb_AND_g = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Init_e == 0.0));

    /* Logic: '<S370>/AND2' incorporates:
     *  RelationalOperator: '<S375>/FixPt Relational Operator'
     *  RelationalOperator: '<S376>/FixPt Relational Operator'
     *  RelationalOperator: '<S377>/FixPt Relational Operator'
     *  RelationalOperator: '<S378>/FixPt Relational Operator'
     *  UnitDelay: '<S375>/Delay Input1'
     *  UnitDelay: '<S376>/Delay Input1'
     *  UnitDelay: '<S377>/Delay Input1'
     *  UnitDelay: '<S378>/Delay Input1'
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
     *
     * Block description for '<S378>/Delay Input1':
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

    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S370>/Constant1'
     *  Constant: '<S370>/Constant2'
     *  Logic: '<S370>/AND'
     *  Logic: '<S370>/AND4'
     *  Logic: '<S370>/NOT1'
     *  Product: '<S370>/Product1'
     *  Sum: '<S370>/Sum'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    if (rtb_AND_g && (!rtb_Is_Absolute_Steering)) {
      rtb_Switch1_nj = (Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain)
        + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S370>/Switch1' */

    /* Switch: '<S380>/Switch1' incorporates:
     *  Switch: '<S380>/Switch2'
     *  UnitDelay: '<S380>/Unit Delay'
     *  UnitDelay: '<S380>/Unit Delay1'
     */
    if (rtb_AND_g) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = rtb_Init_e;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S380>/Switch1' */

    /* Logic: '<S370>/AND1' incorporates:
     *  Logic: '<S370>/AND'
     *  Logic: '<S370>/AND3'
     *  UnitDelay: '<S370>/Unit Delay2'
     */
    rtb_AND_g = (rtb_AND_g && (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Switch: '<S370>/Switch4' incorporates:
     *  Constant: '<S370>/Constant5'
     *  Switch: '<S370>/Switch5'
     *  Switch: '<S370>/Switch6'
     *  Switch: '<S370>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S370>/Switch5' incorporates:
       *  Constant: '<S370>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S370>/Switch6' incorporates:
       *  Constant: '<S370>/Constant7'
       *  Switch: '<S370>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S370>/Switch7' incorporates:
       *  Constant: '<S370>/Constant8'
       *  Switch: '<S370>/Switch5'
       *  Switch: '<S370>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S370>/Switch6' incorporates:
       *  Switch: '<S370>/Switch5'
       *  UnitDelay: '<S370>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S370>/Switch4' */

    /* Switch: '<S370>/Switch3' incorporates:
     *  Logic: '<S370>/NOT'
     *  Trigonometry: '<S370>/Atan2'
     */
    if (!rtb_AND_g) {
      rtb_Switch1_b4 = rt_atan2d_snf(rtb_Switch1_m5, rtb_Switch2);
    } else {
      rtb_Switch1_b4 = rtb_Switch4_g;
    }

    /* Merge: '<S10>/Merge1' incorporates:
     *  Sum: '<S370>/Sum1'
     *  Switch: '<S370>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_Switch1_b4 + rtb_Switch1_nj;

    /* RelationalOperator: '<S383>/Compare' incorporates:
     *  Constant: '<S383>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Switch2 < 0.0);

    /* Switch: '<S379>/Switch' incorporates:
     *  Constant: '<S379>/Constant'
     *  Constant: '<S379>/Constant1'
     *  Constant: '<S381>/Constant'
     *  Constant: '<S382>/Constant'
     *  Logic: '<S379>/Logical Operator'
     *  RelationalOperator: '<S381>/Compare'
     *  RelationalOperator: '<S382>/Compare'
     *  UnitDelay: '<S379>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = 6.2831853071795862;
    } else {
      rtb_Switch1_b4 = 0.0;
    }

    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S379>/Constant2'
     *  Constant: '<S379>/Constant3'
     *  Constant: '<S384>/Constant'
     *  Constant: '<S385>/Constant'
     *  Logic: '<S379>/Logical Operator1'
     *  RelationalOperator: '<S384>/Compare'
     *  RelationalOperator: '<S385>/Compare'
     *  UnitDelay: '<S379>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = -6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Sum: '<S379>/Sum1' incorporates:
     *  Switch: '<S379>/Switch'
     *  Switch: '<S379>/Switch1'
     *  UnitDelay: '<S379>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_b4 + rtb_Add_ie) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S394>/Constant'
     *  Constant: '<S395>/Constant'
     *  Logic: '<S389>/AND'
     *  RelationalOperator: '<S394>/Compare'
     *  RelationalOperator: '<S395>/Compare'
     *  Switch: '<S389>/Switch2'
     *  UnitDelay: '<S389>/Unit Delay'
     *  UnitDelay: '<S389>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S389>/Switch1' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  Trigonometry: '<S371>/Atan2'
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
     *  Constant: '<S370>/Constant'
     *  Lookup_n-D: '<S370>/Modulation_Str_Y_Rel'
     *  Product: '<S370>/Product'
     *  SignalConversion: '<S6>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant'
     *  Constant: '<S388>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S388>/Switch1' */

    /* Switch: '<S393>/Init' incorporates:
     *  UnitDelay: '<S393>/FixPt Unit Delay1'
     *  UnitDelay: '<S393>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init_e = rtb_Product_ku;
    } else {
      rtb_Init_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S393>/Init' */

    /* Sum: '<S391>/Sum1' */
    rtb_Product_ku -= rtb_Init_e;

    /* Switch: '<S392>/Switch2' incorporates:
     *  Constant: '<S390>/Constant1'
     *  Constant: '<S390>/Constant3'
     *  RelationalOperator: '<S392>/LowerRelop1'
     *  RelationalOperator: '<S392>/UpperRelop'
     *  Switch: '<S392>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S392>/Switch' incorporates:
       *  Constant: '<S390>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S392>/Switch2' */

    /* Sum: '<S391>/Sum' */
    rtb_Init_e += rtb_Product_ku;

    /* Product: '<S388>/Product' incorporates:
     *  Lookup_n-D: '<S371>/Modulation_Drv'
     *  Math: '<S371>/Magnitude'
     */
    cos_alpha = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_Init_e;

    /* Saturate: '<S388>/Saturation' */
    if (cos_alpha > Boost_Trigger_High_Speed) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (cos_alpha < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S10>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = cos_alpha;
    }

    /* End of Saturate: '<S388>/Saturation' */

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

    /* Update for UnitDelay: '<S375>/Delay Input1'
     *
     * Block description for '<S375>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S376>/Delay Input1'
     *
     * Block description for '<S376>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S377>/Delay Input1'
     *
     * Block description for '<S377>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S378>/Delay Input1'
     *
     * Block description for '<S378>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S370>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S380>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S380>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S370>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND_g;

    /* Update for UnitDelay: '<S370>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S379>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S379>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S389>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p;

    /* Update for UnitDelay: '<S389>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S393>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S393>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S393>/FixPt Unit Delay1' */
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
    for (s190_iter = 0; s190_iter < 8; s190_iter++) {
      rtb_Switch1_b4 += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s190_iter];
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
   *  Constant: '<S215>/Constant'
   *  Logic: '<S215>/AND'
   *  MATLAB Function: '<S165>/Find closest index to curve'
   *  Product: '<S215>/Product'
   *  RelationalOperator: '<S215>/Relational Operator'
   *  RelationalOperator: '<S215>/Relational Operator1'
   *  Selector: '<S215>/Selector'
   *  Selector: '<S215>/Selector1'
   *  Selector: '<S216>/Selector'
   *  Sum: '<S215>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S168>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S171>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S173>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S168>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S163>/Action Port'
       */
      /* InitializeConditions for If: '<S13>/If' incorporates:
       *  UnitDelay: '<S163>/Unit Delay'
       *  UnitDelay: '<S164>/Unit Delay'
       *  UnitDelay: '<S166>/Unit Delay'
       *  UnitDelay: '<S166>/Unit Delay1'
       *  UnitDelay: '<S216>/Unit Delay'
       *  UnitDelay: '<S216>/Unit Delay1'
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
     *  ActionPort: '<S163>/Action Port'
     */
    /* Selector: '<S164>/Selector1' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S164>/Selector1' */

    /* Lookup_n-D: '<S163>/Capture Radius' incorporates:
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S164>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S164>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S168>/If' incorporates:
     *  RelationalOperator: '<S168>/ '
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S171>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S173>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S168>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S171>/Action Port'
       */
      /* InitializeConditions for If: '<S168>/If' incorporates:
       *  UnitDelay: '<S171>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S168>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S168>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S171>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S171>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S174>/Action Port'
       */
      /* If: '<S171>/If' incorporates:
       *  Selector: '<S164>/Selector1'
       *  Selector: '<S171>/Selector'
       *  Selector: '<S174>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S171>/Increment_If_Rectangle_Check' */

      /* Sum: '<S171>/Minus' incorporates:
       *  Concatenate: '<S164>/Matrix Concatenate2'
       *  Selector: '<S171>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S171>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S174>/Action Port'
       */
      /* If: '<S171>/If' incorporates:
       *  Selector: '<S164>/Selector1'
       *  Selector: '<S171>/Selector'
       *  Selector: '<S174>/Selector'
       *  Sum: '<S171>/Minus'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S171>/Increment_If_Rectangle_Check' */

      /* Sum: '<S171>/Minus' incorporates:
       *  Concatenate: '<S164>/Matrix Concatenate2'
       *  Selector: '<S171>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2;

      /* Math: '<S171>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S171>/Equal' */
      rtb_AND_g = (Code_Gen_Model_B.Spline_Num_Poses ==
                   Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S171>/Switch' incorporates:
       *  Logic: '<S171>/AND'
       *  Logic: '<S171>/OR'
       *  RelationalOperator: '<S171>/Relational Operator'
       *  UnitDelay: '<S171>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_m5 <= rtb_UnitDelay1_gi) && rtb_AND_g));

      /* If: '<S171>/If' */
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
        /* Disable for If: '<S173>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S171>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S173>/Action Port'
         */
        /* If: '<S173>/If' incorporates:
         *  RelationalOperator: '<S173>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S173>/Is_Last_Point' incorporates:
           *  ActionPort: '<S176>/Action Port'
           */
          /* InitializeConditions for If: '<S173>/If' incorporates:
           *  UnitDelay: '<S176>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S173>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S173>/Is_Last_Point' incorporates:
           *  ActionPort: '<S176>/Action Port'
           */
          /* Switch: '<S176>/Switch' incorporates:
           *  Constant: '<S178>/Constant'
           *  Logic: '<S176>/OR'
           *  RelationalOperator: '<S178>/Compare'
           *  UnitDelay: '<S176>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S176>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S176>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S179>/Action Port'
             */
            /* Merge: '<S168>/Merge2' incorporates:
             *  Constant: '<S179>/Constant'
             *  SignalConversion generated from: '<S179>/Robot_Reached_Destination'
             */
            rtb_AND_g = true;

            /* SignalConversion generated from: '<S179>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S179>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S176>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S176>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S180>/Action Port'
             */
            /* Merge: '<S168>/Merge2' incorporates:
             *  Constant: '<S180>/Constant'
             *  SignalConversion generated from: '<S180>/Robot_Reached_Destination'
             */
            rtb_AND_g = false;

            /* SignalConversion generated from: '<S180>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S180>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S176>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S176>/If' */

          /* Merge: '<S168>/Merge4' incorporates:
           *  SignalConversion: '<S176>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S176>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S173>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S173>/Increment_Search' incorporates:
           *  ActionPort: '<S175>/Action Port'
           */
          /* Merge: '<S168>/Merge2' incorporates:
           *  Constant: '<S175>/Constant'
           *  SignalConversion generated from: '<S175>/Robot_Reached_Destination'
           */
          rtb_AND_g = false;

          /* SignalConversion generated from: '<S175>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S175>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S168>/Merge4' incorporates:
           *  Constant: '<S177>/FixPt Constant'
           *  SignalConversion: '<S175>/Signal Copy'
           *  Sum: '<S177>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S173>/Increment_Search' */
        }

        /* End of If: '<S173>/If' */
        /* End of Outputs for SubSystem: '<S171>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S171>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S174>/Action Port'
         */
        /* Sum: '<S181>/FixPt Sum1' incorporates:
         *  Constant: '<S181>/FixPt Constant'
         */
        rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S174>/Selector1' incorporates:
         *  Selector: '<S164>/Selector1'
         */
        rtb_Switch1_p = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) - 1];

        /* Sum: '<S182>/Subtract' incorporates:
         *  Selector: '<S174>/Selector1'
         *  Sum: '<S182>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch1_p - rtb_Switch2_l;

        /* Selector: '<S174>/Selector1' incorporates:
         *  Selector: '<S164>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) + 5];

        /* Sum: '<S182>/Subtract' incorporates:
         *  Selector: '<S174>/Selector1'
         *  Sum: '<S182>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch4_g - rtb_Switch2;

        /* Math: '<S182>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S182>/Divide' */
        rtb_Switch1_m5 = rtb_Minus_n[1];

        /* UnaryMinus: '<S182>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S182>/Product' incorporates:
         *  Product: '<S182>/Divide'
         *  UnaryMinus: '<S182>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_m5 / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S182>/Add1' incorporates:
         *  Sum: '<S182>/Add2'
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch2_c = rtb_Switch1_p - rtb_Minus_n[0];

        /* Sum: '<S182>/Minus4' incorporates:
         *  Sum: '<S182>/Add2'
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch1_p + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S182>/Minus5' incorporates:
         *  Concatenate: '<S164>/Matrix Concatenate2'
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S182>/Add' incorporates:
         *  Sum: '<S182>/Add2'
         *  Sum: '<S182>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S182>/Minus' incorporates:
         *  Sum: '<S182>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S182>/Dot Product' incorporates:
         *  Concatenate: '<S164>/Matrix Concatenate2'
         *  Sum: '<S182>/Minus'
         *  Sum: '<S182>/Minus1'
         *  Sum: '<S182>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* DotProduct: '<S182>/Dot Product1' incorporates:
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S182>/Dot Product2' incorporates:
         *  Sum: '<S182>/Minus4'
         *  Sum: '<S182>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_p * rtb_Switch2_o;

        /* DotProduct: '<S182>/Dot Product3' incorporates:
         *  Sum: '<S182>/Minus4'
         */
        rtb_Product_ku = rtb_Switch1_p * rtb_Switch1_p;

        /* Sum: '<S182>/Add1' incorporates:
         *  Sum: '<S182>/Add2'
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch2_c = rtb_Switch4_g - rtb_Minus_n[1];

        /* Sum: '<S182>/Minus4' incorporates:
         *  Sum: '<S182>/Add2'
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch4_g + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S182>/Minus5' incorporates:
         *  Concatenate: '<S164>/Matrix Concatenate2'
         *  Sum: '<S182>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S182>/Add' incorporates:
         *  Sum: '<S182>/Add2'
         *  Sum: '<S182>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2 - rtb_Minus_n[1];

        /* Sum: '<S182>/Minus' incorporates:
         *  Sum: '<S182>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S182>/Dot Product' incorporates:
         *  Concatenate: '<S164>/Matrix Concatenate2'
         *  Sum: '<S182>/Minus'
         *  Sum: '<S182>/Minus1'
         *  Sum: '<S182>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* RelationalOperator: '<S183>/Compare' incorporates:
         *  Constant: '<S183>/Constant'
         */
        rtb_AND_g = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S182>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S182>/Dot Product1'
         *  Sum: '<S182>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e <= ((rtb_Switch2_c *
          rtb_Switch2_c) + rtb_Switch2_l));

        /* DotProduct: '<S182>/Dot Product2' incorporates:
         *  Sum: '<S182>/Minus4'
         *  Sum: '<S182>/Minus5'
         */
        rtb_Init_e = (rtb_Switch1_p * rtb_Switch2_o) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S168>/Merge4' incorporates:
         *  Constant: '<S184>/Constant'
         *  DataTypeConversion: '<S174>/Data Type Conversion'
         *  DotProduct: '<S182>/Dot Product3'
         *  Logic: '<S182>/AND'
         *  RelationalOperator: '<S182>/LessThanOrEqual1'
         *  RelationalOperator: '<S184>/Compare'
         *  Sum: '<S174>/Add'
         *  Sum: '<S182>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_AND_g &&
          rtb_Is_Absolute_Steering) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <=
          ((rtb_Switch1_p * rtb_Switch1_p) + rtb_Product_ku)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S168>/Merge2' incorporates:
         *  Constant: '<S174>/Constant2'
         *  SignalConversion generated from: '<S174>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S174>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S174>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S171>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S171>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S172>/Action Port'
         */
        /* Merge: '<S168>/Merge2' incorporates:
         *  Constant: '<S172>/Constant2'
         *  SignalConversion generated from: '<S172>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S172>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S172>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S168>/Merge4' incorporates:
         *  SignalConversion generated from: '<S172>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S171>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S168>/Merge1' incorporates:
       *  Constant: '<S171>/Constant'
       *  SignalConversion generated from: '<S171>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S171>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S168>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S168>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S170>/Action Port'
       */
      /* Merge: '<S168>/Merge1' incorporates:
       *  Constant: '<S170>/Constant'
       *  SignalConversion generated from: '<S170>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S168>/Merge2' incorporates:
       *  Constant: '<S170>/Constant1'
       *  SignalConversion generated from: '<S170>/Robot_Reached_Destination'
       */
      rtb_AND_g = false;

      /* SignalConversion generated from: '<S170>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S170>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S168>/Merge4' incorporates:
       *  SignalConversion generated from: '<S170>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S168>/Escape_Auto_Driving' */
    }

    /* End of If: '<S168>/If' */

    /* If: '<S164>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S164>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S169>/Action Port'
       */
      /* Bias: '<S185>/Add Constant' incorporates:
       *  Bias: '<S185>/Bias'
       *  Sum: '<S185>/Subtract'
       */
      rtb_Switch1_m5 = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S185>/Selector4' incorporates:
       *  Bias: '<S185>/Bias1'
       *  Constant: '<S187>/FixPt Constant'
       *  Sum: '<S187>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S185>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S185>/Selector' incorporates:
       *  Bias: '<S185>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S185>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S185>/Matrix Concatenate' incorporates:
       *  Gain: '<S188>/Gain'
       *  Gain: '<S189>/Gain'
       *  Selector: '<S164>/Selector1'
       *  Selector: '<S185>/Selector'
       *  Selector: '<S185>/Selector1'
       *  Selector: '<S185>/Selector2'
       *  Selector: '<S185>/Selector3'
       *  Sum: '<S188>/Subtract'
       *  Sum: '<S189>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S185>/Selector4' incorporates:
         *  Selector: '<S185>/Selector'
         */
        s190_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S188>/Subtract' incorporates:
         *  Bias: '<S185>/Add Constant1'
         *  Selector: '<S185>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s190_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S185>/Selector4' incorporates:
         *  Gain: '<S188>/Gain'
         *  Selector: '<S185>/Selector'
         *  Selector: '<S185>/Selector1'
         *  Sum: '<S188>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s190_iter) - 1];
        }
      }

      /* End of Concatenate: '<S185>/Matrix Concatenate' */

      /* Assignment: '<S185>/Assignment' incorporates:
       *  Selector: '<S185>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s190_iter = 0; s190_iter < rtb_Bias1_p; s190_iter++) {
          rtb_Assignment[s190_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s190_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S185>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S186>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S190>/While Iterator'
       */
      s190_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s190_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s190_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s190_iter] - rtb_Assignment[s190_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s190_iter];
        rtb_Switch2_c = rtb_Assignment[s190_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s190_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s190_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s190_iter + 10];
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
            rtb_Switch2_o)) + rtb_Assignment[s190_iter];
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

        if (s190_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s190_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_m5 - ((real_T)s190_iter);
        rtb_Num_Segments = s190_iter;
        s190_iter++;
      } while ((rtb_Init_e >= 4.0) && (s190_iter <= 3));

      /* End of Outputs for SubSystem: '<S186>/Sampling_Loop' */

      /* SignalConversion generated from: '<S169>/Position_and_Curvature' incorporates:
       *  Assignment: '<S190>/Assignment'
       *  Merge: '<S164>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S164>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S164>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S164>/If Action Subsystem' incorporates:
       *  ActionPort: '<S167>/Action Port'
       */
      /* Product: '<S167>/Product' incorporates:
       *  Selector: '<S164>/Selector'
       *  Selector: '<S164>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S167>/Product1' incorporates:
       *  Selector: '<S164>/Selector'
       *  Selector: '<S164>/Selector1'
       */
      rtb_Switch1_m5 = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S167>/Product' incorporates:
         *  Constant: '<S167>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S167>/Product1' incorporates:
         *  Constant: '<S167>/Constant2'
         *  Product: '<S167>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_m5;
      }

      /* Assignment: '<S167>/Assignment' incorporates:
       *  Concatenate: '<S167>/Matrix Concatenate'
       *  Merge: '<S164>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S167>/Assignment' */

      /* SignalConversion generated from: '<S167>/Num_Segments' incorporates:
       *  Constant: '<S167>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S164>/If Action Subsystem' */
    }

    /* End of If: '<S164>/If1' */

    /* Concatenate: '<S165>/Matrix Concatenate' incorporates:
     *  Merge: '<S164>/Merge'
     *  Selector: '<S165>/Selector'
     *  Selector: '<S165>/Selector1'
     *  Selector: '<S165>/Selector3'
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

    /* End of Concatenate: '<S165>/Matrix Concatenate' */

    /* MATLAB Function: '<S165>/Distance Along Curve' incorporates:
     *  Concatenate: '<S165>/Matrix Concatenate'
     *  Selector: '<S165>/Selector4'
     *  Selector: '<S165>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s190_iter = 0; s190_iter < 149; s190_iter++) {
      /* Outputs for Iterator SubSystem: '<S186>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S190>/While Iterator'
       */
      rtb_Assignment_d[s190_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s190_iter + 1] -
         rtb_MatrixConcatenate_o[s190_iter], rtb_MatrixConcatenate_o[s190_iter +
         151] - rtb_MatrixConcatenate_o[s190_iter + 150]) +
        rtb_Assignment_d[s190_iter];

      /* End of Outputs for SubSystem: '<S186>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S165>/Distance Along Curve' */

    /* MATLAB Function: '<S165>/Find closest index to curve' incorporates:
     *  Concatenate: '<S165>/Matrix Concatenate'
     *  Selector: '<S165>/Selector4'
     *  Selector: '<S165>/Selector5'
     *  Selector: '<S216>/Selector'
     */
    for (s190_iter = 0; s190_iter < 150; s190_iter++) {
      /* Outputs for Iterator SubSystem: '<S186>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S190>/While Iterator'
       */
      distance_from_robot[s190_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s190_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s190_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S186>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s190_iter = 1;
    } else {
      s190_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s190_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s190_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s190_iter - 1];
      for (rtb_Bias1_p = s190_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_m5 > rtb_Init_e) {
          rtb_Switch1_m5 = rtb_Init_e;
        }
      }
    }

    s190_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s190_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S216>/Selector' incorporates:
     *  Constant: '<S216>/Constant'
     *  MATLAB Function: '<S165>/Find closest index to curve'
     *  MinMax: '<S216>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s190_iter)) - 1];

    /* If: '<S216>/If' incorporates:
     *  RelationalOperator: '<S216>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S216>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S219>/Action Port'
       */
      /* SignalConversion generated from: '<S219>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S221>/FixPt Sum1' incorporates:
       *  Constant: '<S221>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S219>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S219>/Selector11'
       *  Selector: '<S219>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S219>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S219>/Selector1'
       *  Selector: '<S219>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S219>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S219>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S219>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S219>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S219>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S216>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S216>/Latch' incorporates:
       *  ActionPort: '<S220>/Action Port'
       */
      /* SignalConversion generated from: '<S220>/In1' incorporates:
       *  UnitDelay: '<S216>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S220>/In2' incorporates:
       *  UnitDelay: '<S216>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S216>/Latch' */
    }

    /* End of If: '<S216>/If' */

    /* MinMax: '<S163>/Min' incorporates:
     *  Lookup_n-D: '<S163>/Lookahead Distance'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S165>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S215>/While Iterator'
     */
    s215_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s215_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S165>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S215>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s215_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s190_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s215_iter++;
    }

    /* End of Outputs for SubSystem: '<S165>/Find first index that meets distance target' */

    /* Switch: '<S218>/Switch' incorporates:
     *  Concatenate: '<S165>/Matrix Concatenate'
     *  Constant: '<S165>/Constant'
     *  Constant: '<S215>/Constant'
     *  Constant: '<S218>/Constant1'
     *  Constant: '<S218>/Constant2'
     *  Constant: '<S218>/Constant3'
     *  Logic: '<S215>/AND'
     *  MATLAB Function: '<S165>/Find closest index to curve'
     *  Math: '<S218>/Hypot'
     *  Merge: '<S10>/Merge8'
     *  MinMax: '<S218>/Min'
     *  MinMax: '<S218>/Min1'
     *  Product: '<S215>/Product'
     *  Product: '<S218>/Divide'
     *  Product: '<S218>/Product'
     *  Product: '<S218>/Product1'
     *  RelationalOperator: '<S165>/Relational Operator'
     *  RelationalOperator: '<S215>/Relational Operator'
     *  RelationalOperator: '<S215>/Relational Operator1'
     *  Selector: '<S165>/Selector10'
     *  Selector: '<S165>/Selector7'
     *  Selector: '<S165>/Selector8'
     *  Selector: '<S165>/Selector9'
     *  Selector: '<S215>/Selector'
     *  Selector: '<S215>/Selector1'
     *  Selector: '<S216>/Selector'
     *  Sqrt: '<S218>/Sqrt'
     *  Sum: '<S165>/Subtract'
     *  Sum: '<S215>/Add'
     *  Sum: '<S218>/Subtract'
     *  Sum: '<S218>/Subtract1'
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

    /* End of Switch: '<S218>/Switch' */

    /* Logic: '<S166>/OR' */
    rtb_Is_Absolute_Steering = (rtb_AND_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S166>/Switch1' incorporates:
     *  Switch: '<S166>/Switch'
     *  UnitDelay: '<S166>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S13>/Merge2' incorporates:
       *  Constant: '<S166>/Constant3'
       *  SignalConversion: '<S166>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S13>/Merge2' incorporates:
       *  SignalConversion: '<S166>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion: '<S166>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S165>/Selector6' incorporates:
     *  Concatenate: '<S165>/Matrix Concatenate'
     *  Selector: '<S165>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S165>/Selector2' incorporates:
     *  Concatenate: '<S165>/Matrix Concatenate'
     *  Selector: '<S165>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S166>/Switch2' incorporates:
     *  Sum: '<S222>/Subtract'
     *  Sum: '<S222>/Subtract1'
     *  Trigonometry: '<S222>/Atan2'
     *  UnitDelay: '<S166>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S166>/Switch2' */

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion: '<S166>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S13>/Merge7' incorporates:
     *  SignalConversion: '<S163>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_AND_g;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S166>/Constant2'
     *  SignalConversion generated from: '<S163>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S166>/Constant5'
     *  SignalConversion generated from: '<S163>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S13>/Merge5' incorporates:
     *  Constant: '<S166>/Constant6'
     *  SignalConversion generated from: '<S163>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S13>/Merge6' incorporates:
     *  Constant: '<S166>/Constant1'
     *  SignalConversion generated from: '<S163>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S216>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S216>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S166>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S13>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/Pass Through' incorporates:
     *  ActionPort: '<S162>/Action Port'
     */
    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S162>/Constant'
     *  SignalConversion generated from: '<S162>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion generated from: '<S162>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion generated from: '<S162>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion generated from: '<S162>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion generated from: '<S162>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S162>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S13>/Merge5' incorporates:
     *  SignalConversion generated from: '<S162>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge6' incorporates:
     *  SignalConversion generated from: '<S162>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S13>/Pass Through' */
  }

  /* End of If: '<S13>/If' */

  /* Signum: '<S316>/Sign2' incorporates:
   *  UnitDelay: '<S316>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S316>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S316>/Product1' incorporates:
   *  Signum: '<S316>/Sign1'
   *  Signum: '<S316>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S316>/Switch' incorporates:
   *  Constant: '<S316>/Constant'
   *  Constant: '<S321>/Constant'
   *  Constant: '<S322>/Constant'
   *  Logic: '<S316>/or'
   *  Product: '<S316>/Product1'
   *  RelationalOperator: '<S321>/Compare'
   *  RelationalOperator: '<S322>/Compare'
   *  UnitDelay: '<S316>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S316>/Switch' */

  /* Switch: '<S327>/Init' incorporates:
   *  UnitDelay: '<S327>/FixPt Unit Delay1'
   *  UnitDelay: '<S327>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S327>/Init' */

  /* RelationalOperator: '<S323>/Compare' incorporates:
   *  Constant: '<S323>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S324>/Compare' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_c > 0.0);

  /* Abs: '<S316>/Abs' incorporates:
   *  Sum: '<S316>/Subtract'
   *  UnitDelay: '<S316>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S316>/Switch5' incorporates:
   *  Constant: '<S316>/Constant1'
   *  Switch: '<S316>/Switch1'
   *  UnaryMinus: '<S316>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S316>/Constant4'
     *  Constant: '<S316>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S316>/Constant2'
     *  Constant: '<S316>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S316>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S316>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S316>/Constant10'
     *  Constant: '<S316>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S316>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S316>/Constant7'
     *  Constant: '<S316>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S316>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S316>/Lookup Table Dynamic1'
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

    /* Switch: '<S316>/Switch3' incorporates:
     *  Constant: '<S316>/Constant1'
     *  Constant: '<S316>/Constant3'
     *  UnaryMinus: '<S316>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S316>/Switch3' */
  }

  /* End of Switch: '<S316>/Switch5' */

  /* Product: '<S316>/Product' incorporates:
   *  Switch: '<S316>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_b4 * rtb_Merge1;

  /* Sum: '<S325>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S326>/Switch2' incorporates:
   *  RelationalOperator: '<S326>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S316>/Switch2' incorporates:
     *  Constant: '<S316>/Constant1'
     *  Switch: '<S316>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S316>/Switch4' incorporates:
       *  Constant: '<S316>/Constant1'
       */
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S316>/Switch4' incorporates:
       *  Constant: '<S316>/Constant3'
       *  UnaryMinus: '<S316>/Unary Minus1'
       */
      rtb_Switch1_m5 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S316>/Switch2' */

    /* Product: '<S316>/Product2' */
    rtb_Switch1_m5 *= rtb_Merge1;

    /* Switch: '<S326>/Switch' incorporates:
     *  RelationalOperator: '<S326>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_m5) {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S326>/Switch' */
  }

  /* End of Switch: '<S326>/Switch2' */

  /* Sum: '<S325>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S319>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S319>/Switch' incorporates:
     *  Constant: '<S343>/Constant3'
     *  Constant: '<S343>/Constant4'
     *  Math: '<S343>/Math Function'
     *  Sum: '<S319>/Subtract'
     *  Sum: '<S343>/Add1'
     *  Sum: '<S343>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Switch1_nj) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S319>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S319>/Switch' */

  /* Sum: '<S339>/Add1' incorporates:
   *  Constant: '<S339>/Constant3'
   *  Constant: '<S339>/Constant4'
   *  Math: '<S339>/Math Function'
   *  Sum: '<S318>/Add'
   *  Sum: '<S338>/Sum'
   *  Sum: '<S339>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Switch1_nj +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S341>/Sum1' incorporates:
   *  Constant: '<S338>/Constant2'
   *  Product: '<S341>/Product'
   *  Sum: '<S341>/Sum'
   *  UnitDelay: '<S341>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S338>/Product' incorporates:
   *  Constant: '<S338>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S340>/Diff' incorporates:
   *  UnitDelay: '<S340>/UD'
   *
   * Block description for '<S340>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S340>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S338>/Saturation' */
  if (cos_alpha > Steering_Heading_Control_D_UL) {
    cos_alpha = Steering_Heading_Control_D_UL;
  } else if (cos_alpha < Steering_Heading_Control_D_LL) {
    cos_alpha = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S338>/Add' incorporates:
   *  Gain: '<S338>/Gain1'
   *  Saturate: '<S338>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    cos_alpha;

  /* Sum: '<S338>/Subtract' incorporates:
   *  Constant: '<S338>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S338>/Sum2' incorporates:
   *  Gain: '<S338>/Gain2'
   *  UnitDelay: '<S338>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S342>/Switch2' incorporates:
   *  RelationalOperator: '<S342>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_uDLookupTable_l)) {
    /* Sum: '<S338>/Subtract1' incorporates:
     *  Constant: '<S338>/Constant1'
     */
    rtb_Switch2 = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S342>/Switch' incorporates:
     *  RelationalOperator: '<S342>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch2) {
      rtb_uDLookupTable_l = rtb_Switch2;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    }

    /* End of Switch: '<S342>/Switch' */
  }

  /* End of Switch: '<S342>/Switch2' */

  /* Saturate: '<S338>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S338>/Saturation1' */

  /* Sum: '<S338>/Add1' */
  cos_alpha = rtb_Init_e + rtb_Switch1_m5;

  /* Saturate: '<S338>/Saturation2' */
  if (cos_alpha > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S338>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (cos_alpha < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S338>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S338>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = cos_alpha;
  }

  /* End of Saturate: '<S338>/Saturation2' */

  /* Switch: '<S318>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S329>/Switch' incorporates:
     *  Abs: '<S329>/Abs'
     *  Constant: '<S329>/Constant'
     *  Constant: '<S337>/Constant'
     *  RelationalOperator: '<S337>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S329>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S318>/Switch' */

  /* Signum: '<S328>/Sign2' incorporates:
   *  UnitDelay: '<S328>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S328>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S328>/Product1' incorporates:
   *  Signum: '<S328>/Sign1'
   *  Signum: '<S328>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S328>/Switch' incorporates:
   *  Constant: '<S328>/Constant'
   *  Constant: '<S330>/Constant'
   *  Constant: '<S331>/Constant'
   *  Logic: '<S328>/or'
   *  Product: '<S328>/Product1'
   *  RelationalOperator: '<S330>/Compare'
   *  RelationalOperator: '<S331>/Compare'
   *  UnitDelay: '<S328>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch4_g = 0.0;
  }

  /* End of Switch: '<S328>/Switch' */

  /* Switch: '<S336>/Init' incorporates:
   *  UnitDelay: '<S336>/FixPt Unit Delay1'
   *  UnitDelay: '<S336>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch4_g;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S336>/Init' */

  /* RelationalOperator: '<S332>/Compare' incorporates:
   *  Constant: '<S332>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch4_g == 0.0);

  /* RelationalOperator: '<S333>/Compare' incorporates:
   *  Constant: '<S333>/Constant'
   */
  rtb_AND_g = (rtb_Switch4_g > 0.0);

  /* Abs: '<S328>/Abs' incorporates:
   *  Sum: '<S328>/Subtract'
   *  UnitDelay: '<S328>/Unit Delay'
   */
  rtb_Switch1_p = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S328>/Switch5' incorporates:
   *  Constant: '<S328>/Constant1'
   *  Switch: '<S328>/Switch1'
   *  UnaryMinus: '<S328>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S328>/Constant4'
     *  Constant: '<S328>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S328>/Constant2'
     *  Constant: '<S328>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S328>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S328>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S328>/Constant10'
     *  Constant: '<S328>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S328>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S328>/Constant7'
     *  Constant: '<S328>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S328>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S328>/Lookup Table Dynamic1'
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

    /* Switch: '<S328>/Switch3' incorporates:
     *  Constant: '<S328>/Constant1'
     *  Constant: '<S328>/Constant3'
     *  UnaryMinus: '<S328>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S328>/Switch3' */
  }

  /* End of Switch: '<S328>/Switch5' */

  /* Product: '<S328>/Product' incorporates:
   *  Switch: '<S328>/Switch1'
   */
  rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

  /* Sum: '<S334>/Sum1' */
  rtb_Switch4_g -= rtb_Init_e;

  /* Switch: '<S335>/Switch2' incorporates:
   *  RelationalOperator: '<S335>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_Switch2)) {
    /* Switch: '<S328>/Switch2' incorporates:
     *  Constant: '<S328>/Constant1'
     *  Constant: '<S328>/Constant3'
     *  Switch: '<S328>/Switch4'
     *  UnaryMinus: '<S328>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S328>/Switch4' incorporates:
       *  Constant: '<S328>/Constant1'
       */
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S328>/Product2' incorporates:
     *  Switch: '<S328>/Switch2'
     */
    rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

    /* Switch: '<S335>/Switch' incorporates:
     *  RelationalOperator: '<S335>/UpperRelop'
     */
    if (!(rtb_Switch4_g < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4_g;
    }

    /* End of Switch: '<S335>/Switch' */
  }

  /* End of Switch: '<S335>/Switch2' */

  /* Sum: '<S334>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2 + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S231>/Initialize Function' */
  /* Sum: '<S317>/Add' incorporates:
   *  Constant: '<S317>/Constant'
   *  Constant: '<S317>/Constant4'
   *  Constant: '<S317>/Constant5'
   *  Trigonometry: '<S317>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S231>/Initialize Function' */

  /* Fcn: '<S351>/r->x' incorporates:
   *  Fcn: '<S356>/r->x'
   *  Fcn: '<S361>/r->x'
   *  Fcn: '<S366>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S345>/Add' incorporates:
   *  Fcn: '<S351>/r->x'
   *  Fcn: '<S352>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S351>/theta->y' incorporates:
   *  Fcn: '<S356>/theta->y'
   *  Fcn: '<S361>/theta->y'
   *  Fcn: '<S366>/theta->y'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S345>/Add' incorporates:
   *  Fcn: '<S351>/theta->y'
   *  Fcn: '<S352>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_l;

  /* Sum: '<S346>/Add' incorporates:
   *  Fcn: '<S357>/r->x'
   *  Fcn: '<S357>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S347>/Add' incorporates:
   *  Fcn: '<S362>/r->x'
   *  Fcn: '<S362>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S348>/Add' incorporates:
   *  Fcn: '<S367>/r->x'
   *  Fcn: '<S367>/theta->y'
   */
  rtb_Switch2_o = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_l;

  /* Fcn: '<S365>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Switch2_o, rtb_Init_e);

  /* RelationalOperator: '<S368>/Compare' incorporates:
   *  Constant: '<S368>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S364>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S364>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S364>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S364>/Switch1' */

  /* Fcn: '<S350>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S353>/Compare' incorporates:
   *  Constant: '<S353>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_l == 0.0);

  /* Switch: '<S349>/Switch1' */
  if (rtb_AND_g) {
    /* Switch: '<S349>/Switch1' incorporates:
     *  Constant: '<S349>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S349>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S349>/Switch1' */

  /* Fcn: '<S355>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c == 0.0);

  /* Switch: '<S354>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S354>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S354>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S354>/Switch1' */

  /* Fcn: '<S360>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S359>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S359>/Switch1' incorporates:
     *  Constant: '<S359>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S359>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S359>/Switch1' */

  /* Product: '<S344>/Divide' incorporates:
   *  Abs: '<S344>/Abs'
   *  Abs: '<S344>/Abs1'
   *  Abs: '<S344>/Abs2'
   *  Abs: '<S344>/Abs3'
   *  Constant: '<S344>/Constant'
   *  MinMax: '<S344>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S344>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S364>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S364>/Switch' incorporates:
     *  Fcn: '<S365>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Switch2_o);
  }

  /* End of Switch: '<S364>/Switch' */

  /* Trigonometry: '<S308>/Cos4' incorporates:
   *  Switch: '<S297>/Angle_Switch'
   *  Trigonometry: '<S307>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S308>/Sin5' incorporates:
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S308>/Sin4' incorporates:
   *  Switch: '<S297>/Angle_Switch'
   *  Trigonometry: '<S307>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S308>/Cos5' incorporates:
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S308>/Subtract1' incorporates:
   *  Product: '<S308>/Product2'
   *  Product: '<S308>/Product3'
   *  Trigonometry: '<S308>/Cos4'
   *  Trigonometry: '<S308>/Sin4'
   */
  rtb_Init_e = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S308>/Subtract' incorporates:
   *  Product: '<S308>/Product'
   *  Product: '<S308>/Product1'
   *  Trigonometry: '<S308>/Cos4'
   *  Trigonometry: '<S308>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4
    * rtb_uDLookupTable_l);

  /* Math: '<S308>/Hypot' */
  rtb_Switch4_g = rt_hypotd_snf(rtb_Switch2, rtb_Init_e);

  /* Switch: '<S308>/Switch' incorporates:
   *  Constant: '<S308>/Constant'
   *  Constant: '<S308>/Constant1'
   *  Constant: '<S309>/Constant'
   *  Product: '<S308>/Divide'
   *  Product: '<S308>/Divide1'
   *  RelationalOperator: '<S309>/Compare'
   *  Switch: '<S308>/Switch1'
   */
  if (rtb_Switch4_g > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch4_g;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2 / rtb_Switch4_g;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S307>/Subtract1' incorporates:
     *  Product: '<S307>/Product2'
     *  Product: '<S307>/Product3'
     *  UnaryMinus: '<S297>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S307>/Subtract' incorporates:
     *  Product: '<S307>/Product'
     *  Product: '<S307>/Product1'
     */
    rtb_Switch4_g = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S307>/Hypot' */
    rtb_Switch2 = rt_hypotd_snf(rtb_Switch4_g, rtb_Init_e);

    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S307>/Constant'
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S310>/Constant'
     *  Product: '<S307>/Divide'
     *  Product: '<S307>/Divide1'
     *  RelationalOperator: '<S310>/Compare'
     *  Switch: '<S307>/Switch'
     */
    if (rtb_Switch2 > 1.0E-6) {
      rtb_Switch4_g /= rtb_Switch2;
      rtb_Init_e /= rtb_Switch2;
    } else {
      rtb_Switch4_g = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S307>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch4_g);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S300>/Product2' incorporates:
   *  Constant: '<S300>/Constant'
   *  Switch: '<S297>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S295>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S295>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S298>/Add' incorporates:
   *  Sum: '<S299>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S230>/Product' incorporates:
   *  Abs: '<S295>/Abs'
   *  Abs: '<S298>/Abs'
   *  Constant: '<S301>/Constant'
   *  Constant: '<S311>/Constant3'
   *  Constant: '<S311>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
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
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S296>/Gain' */
  rtb_Switch4_g = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S296>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S303>/Sum1' incorporates:
   *  Constant: '<S296>/Constant2'
   *  Product: '<S303>/Product'
   *  Sum: '<S303>/Sum'
   *  UnitDelay: '<S303>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S296>/Product' incorporates:
   *  Constant: '<S296>/Constant3'
   */
  rtb_Switch2 = rtb_Init_e * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Switch2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S296>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S296>/Add' incorporates:
   *  Gain: '<S296>/Gain1'
   *  Saturate: '<S296>/Saturation'
   */
  rtb_Switch1_p = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch4_g) +
    cos_alpha;

  /* Sum: '<S296>/Subtract' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch1_p;

  /* Sum: '<S296>/Sum2' incorporates:
   *  Gain: '<S296>/Gain2'
   *  UnitDelay: '<S296>/Unit Delay'
   */
  rtb_Switch4_g = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S304>/Switch2' incorporates:
   *  Constant: '<S296>/Constant'
   *  RelationalOperator: '<S304>/LowerRelop1'
   *  Sum: '<S296>/Subtract'
   */
  if (!(rtb_Switch4_g > (1.0 - rtb_Switch1_p))) {
    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S296>/Constant1'
     *  RelationalOperator: '<S304>/UpperRelop'
     *  Sum: '<S296>/Subtract1'
     */
    if (rtb_Switch4_g < (-1.0 - rtb_Switch1_p)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch1_p;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch4_g;
    }

    /* End of Switch: '<S304>/Switch' */
  }

  /* End of Switch: '<S304>/Switch2' */

  /* Saturate: '<S296>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch4_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch4_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S296>/Saturation1' */

  /* Sum: '<S296>/Add1' */
  cos_alpha = rtb_Switch1_p + rtb_Switch4_g;

  /* Saturate: '<S296>/Saturation2' */
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

  /* End of Saturate: '<S296>/Saturation2' */

  /* Sum: '<S312>/Add1' incorporates:
   *  Constant: '<S312>/Constant3'
   *  Constant: '<S312>/Constant4'
   *  Math: '<S312>/Math Function'
   *  Sum: '<S312>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S314>/Sum1' incorporates:
   *  Constant: '<S299>/Constant2'
   *  Product: '<S314>/Product'
   *  Sum: '<S314>/Sum'
   *  UnitDelay: '<S314>/Unit Delay1'
   */
  rtb_Switch1_p = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S299>/Product' incorporates:
   *  Constant: '<S299>/Constant3'
   */
  rtb_Switch2_o = rtb_Switch1_p * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Switch2_o - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S299>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S299>/Add' incorporates:
   *  Gain: '<S299>/Gain1'
   *  Saturate: '<S299>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S299>/Subtract' incorporates:
   *  Constant: '<S299>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S299>/Sum2' incorporates:
   *  Gain: '<S299>/Gain2'
   *  UnitDelay: '<S299>/Unit Delay'
   */
  rtb_Product_ku = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S315>/Switch2' incorporates:
   *  Constant: '<S299>/Constant'
   *  RelationalOperator: '<S315>/LowerRelop1'
   *  Sum: '<S299>/Subtract'
   */
  if (!(rtb_Product_ku > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S315>/Switch' incorporates:
     *  Constant: '<S299>/Constant1'
     *  RelationalOperator: '<S315>/UpperRelop'
     *  Sum: '<S299>/Subtract1'
     */
    if (rtb_Product_ku < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku;
    }

    /* End of Switch: '<S315>/Switch' */
  }

  /* End of Switch: '<S315>/Switch2' */

  /* Saturate: '<S299>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Product_ku = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Product_ku = Steering_Motor_Control_I_LL;
  } else {
    rtb_Product_ku = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S299>/Saturation1' */

  /* Sum: '<S299>/Add1' */
  cos_alpha = rtb_Add_pw + rtb_Product_ku;

  /* Saturate: '<S299>/Saturation2' */
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

  /* End of Saturate: '<S299>/Saturation2' */

  /* Product: '<S344>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S349>/Switch' */
  if (!rtb_AND_g) {
    /* Switch: '<S349>/Switch' incorporates:
     *  Fcn: '<S350>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S349>/Switch' */

  /* Trigonometry: '<S245>/Cos4' incorporates:
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S245>/Sin5' incorporates:
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S245>/Sin4' incorporates:
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S245>/Cos5' incorporates:
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S245>/Subtract1' incorporates:
   *  Product: '<S245>/Product2'
   *  Product: '<S245>/Product3'
   *  Trigonometry: '<S245>/Cos4'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Add_pw = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S245>/Subtract' incorporates:
   *  Product: '<S245>/Product'
   *  Product: '<S245>/Product1'
   *  Trigonometry: '<S245>/Cos4'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S245>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S245>/Switch' incorporates:
   *  Constant: '<S245>/Constant'
   *  Constant: '<S245>/Constant1'
   *  Constant: '<S246>/Constant'
   *  Product: '<S245>/Divide'
   *  Product: '<S245>/Divide1'
   *  RelationalOperator: '<S246>/Compare'
   *  Switch: '<S245>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S245>/Switch' */

  /* Switch: '<S234>/Speed_Switch' incorporates:
   *  Abs: '<S234>/Abs'
   *  Constant: '<S242>/Constant'
   *  RelationalOperator: '<S242>/Compare'
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Atan1'
   *  Trigonometry: '<S245>/Atan1'
   *  UnaryMinus: '<S234>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S244>/Subtract1' incorporates:
     *  Product: '<S244>/Product2'
     *  Product: '<S244>/Product3'
     *  UnaryMinus: '<S234>/Unary Minus'
     */
    rtb_Add_pw = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5) + (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S244>/Subtract' incorporates:
     *  Product: '<S244>/Product'
     *  Product: '<S244>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S244>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S244>/Switch1' incorporates:
     *  Constant: '<S244>/Constant'
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S247>/Constant'
     *  Product: '<S244>/Divide'
     *  Product: '<S244>/Divide1'
     *  RelationalOperator: '<S247>/Compare'
     *  Switch: '<S244>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S244>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S237>/Product2' incorporates:
   *  Constant: '<S237>/Constant'
   *  Switch: '<S234>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S232>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S232>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S235>/Add' incorporates:
   *  Sum: '<S236>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S227>/Product' incorporates:
   *  Abs: '<S232>/Abs'
   *  Abs: '<S235>/Abs'
   *  Constant: '<S238>/Constant'
   *  Constant: '<S248>/Constant3'
   *  Constant: '<S248>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S232>/OR'
   *  Lookup_n-D: '<S235>/1-D Lookup Table'
   *  Math: '<S248>/Math Function'
   *  RelationalOperator: '<S232>/Equal1'
   *  RelationalOperator: '<S238>/Compare'
   *  Signum: '<S232>/Sign'
   *  Signum: '<S232>/Sign1'
   *  Sum: '<S235>/Add'
   *  Sum: '<S248>/Add1'
   *  Sum: '<S248>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S233>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S233>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S240>/Sum1' incorporates:
   *  Constant: '<S233>/Constant2'
   *  Product: '<S240>/Product'
   *  Sum: '<S240>/Sum'
   *  UnitDelay: '<S240>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S233>/Product' incorporates:
   *  Constant: '<S233>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S239>/Diff' incorporates:
   *  UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S233>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S233>/Add' incorporates:
   *  Gain: '<S233>/Gain1'
   *  Saturate: '<S233>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    cos_alpha;

  /* Sum: '<S233>/Subtract' incorporates:
   *  Constant: '<S233>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S233>/Sum2' incorporates:
   *  Gain: '<S233>/Gain2'
   *  UnitDelay: '<S233>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S241>/Switch2' incorporates:
   *  Constant: '<S233>/Constant'
   *  RelationalOperator: '<S241>/LowerRelop1'
   *  Sum: '<S233>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S241>/Switch' incorporates:
     *  Constant: '<S233>/Constant1'
     *  RelationalOperator: '<S241>/UpperRelop'
     *  Sum: '<S233>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S241>/Switch' */
  }

  /* End of Switch: '<S241>/Switch2' */

  /* Saturate: '<S233>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S233>/Saturation1' */

  /* Sum: '<S233>/Add1' */
  cos_alpha = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S233>/Saturation2' */
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

  /* End of Saturate: '<S233>/Saturation2' */

  /* Sum: '<S249>/Add1' incorporates:
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Math: '<S249>/Math Function'
   *  Sum: '<S249>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S251>/Sum1' incorporates:
   *  Constant: '<S236>/Constant2'
   *  Product: '<S251>/Product'
   *  Sum: '<S251>/Sum'
   *  UnitDelay: '<S251>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S236>/Product' incorporates:
   *  Constant: '<S236>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S250>/Diff' incorporates:
   *  UnitDelay: '<S250>/UD'
   *
   * Block description for '<S250>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S250>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S236>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Gain: '<S236>/Gain1'
   *  Saturate: '<S236>/Saturation'
   */
  rtb_Add_kl = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S236>/Subtract' incorporates:
   *  Constant: '<S236>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_kl;

  /* Sum: '<S236>/Sum2' incorporates:
   *  Gain: '<S236>/Gain2'
   *  UnitDelay: '<S236>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S252>/Switch2' incorporates:
   *  Constant: '<S236>/Constant'
   *  RelationalOperator: '<S252>/LowerRelop1'
   *  Sum: '<S236>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_kl))) {
    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S236>/Constant1'
     *  RelationalOperator: '<S252>/UpperRelop'
     *  Sum: '<S236>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_kl)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_kl;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_e;
    }

    /* End of Switch: '<S252>/Switch' */
  }

  /* End of Switch: '<S252>/Switch2' */

  /* Saturate: '<S236>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S236>/Saturation1' */

  /* Sum: '<S236>/Add1' */
  cos_alpha = rtb_Add_kl + rtb_Sum2_e;

  /* Saturate: '<S236>/Saturation2' */
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

  /* End of Saturate: '<S236>/Saturation2' */

  /* Product: '<S344>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S354>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S354>/Switch' incorporates:
     *  Fcn: '<S355>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S354>/Switch' */

  /* Trigonometry: '<S266>/Cos4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Sin5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S266>/Sin4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Cos5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S266>/Subtract1' incorporates:
   *  Product: '<S266>/Product2'
   *  Product: '<S266>/Product3'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Subtract1_dk = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S266>/Subtract' incorporates:
   *  Product: '<S266>/Product'
   *  Product: '<S266>/Product1'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S266>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_dk);

  /* Switch: '<S266>/Switch' incorporates:
   *  Constant: '<S266>/Constant'
   *  Constant: '<S266>/Constant1'
   *  Constant: '<S267>/Constant'
   *  Product: '<S266>/Divide'
   *  Product: '<S266>/Divide1'
   *  RelationalOperator: '<S267>/Compare'
   *  Switch: '<S266>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_dk / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S265>/Subtract1' incorporates:
     *  Product: '<S265>/Product2'
     *  Product: '<S265>/Product3'
     *  UnaryMinus: '<S255>/Unary Minus'
     */
    rtb_Subtract1_dk = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S265>/Subtract' incorporates:
     *  Product: '<S265>/Product'
     *  Product: '<S265>/Product1'
     */
    rtb_Subtract1_m4 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S265>/Hypot' */
    rtb_Add_kl = rt_hypotd_snf(rtb_Subtract1_m4, rtb_Subtract1_dk);

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S265>/Constant'
     *  Constant: '<S265>/Constant1'
     *  Constant: '<S268>/Constant'
     *  Product: '<S265>/Divide'
     *  Product: '<S265>/Divide1'
     *  RelationalOperator: '<S268>/Compare'
     *  Switch: '<S265>/Switch'
     */
    if (rtb_Add_kl > 1.0E-6) {
      rtb_Subtract1_m4 /= rtb_Add_kl;
      rtb_Add_kl = rtb_Subtract1_dk / rtb_Add_kl;
    } else {
      rtb_Subtract1_m4 = 1.0;
      rtb_Add_kl = 0.0;
    }

    /* End of Switch: '<S265>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_kl, rtb_Subtract1_m4);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S258>/Product2' incorporates:
   *  Constant: '<S258>/Constant'
   *  Switch: '<S255>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S253>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S253>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S256>/Add' incorporates:
   *  Sum: '<S257>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S228>/Product' incorporates:
   *  Abs: '<S253>/Abs'
   *  Abs: '<S256>/Abs'
   *  Constant: '<S259>/Constant'
   *  Constant: '<S269>/Constant3'
   *  Constant: '<S269>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
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
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S254>/Gain' */
  rtb_Subtract1_dk = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S254>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S261>/Sum1' incorporates:
   *  Constant: '<S254>/Constant2'
   *  Product: '<S261>/Product'
   *  Sum: '<S261>/Sum'
   *  UnitDelay: '<S261>/Unit Delay1'
   */
  rtb_Add_kl = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S254>/Product' incorporates:
   *  Constant: '<S254>/Constant3'
   */
  rtb_Subtract1_m4 = rtb_Add_kl * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_m4 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S254>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S254>/Add' incorporates:
   *  Gain: '<S254>/Gain1'
   *  Saturate: '<S254>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_dk) +
    cos_alpha;

  /* Sum: '<S254>/Subtract' incorporates:
   *  Constant: '<S254>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S254>/Sum2' incorporates:
   *  Gain: '<S254>/Gain2'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  rtb_Subtract1_dk = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S262>/Switch2' incorporates:
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S262>/LowerRelop1'
   *  Sum: '<S254>/Subtract'
   */
  if (!(rtb_Subtract1_dk > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S254>/Constant1'
     *  RelationalOperator: '<S262>/UpperRelop'
     *  Sum: '<S254>/Subtract1'
     */
    if (rtb_Subtract1_dk < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_dk;
    }

    /* End of Switch: '<S262>/Switch' */
  }

  /* End of Switch: '<S262>/Switch2' */

  /* Saturate: '<S254>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_dk = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S254>/Saturation1' */

  /* Sum: '<S254>/Add1' */
  cos_alpha = rtb_Hypot_b + rtb_Subtract1_dk;

  /* Saturate: '<S254>/Saturation2' */
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
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S257>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Subtract1_g = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S273>/Switch2' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S273>/LowerRelop1'
   *  Sum: '<S257>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S257>/Constant1'
     *  RelationalOperator: '<S273>/UpperRelop'
     *  Sum: '<S257>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S273>/Switch' */
  }

  /* End of Switch: '<S273>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  cos_alpha = rtb_Add_ie + rtb_Subtract1_g;

  /* Saturate: '<S257>/Saturation2' */
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

  /* End of Saturate: '<S257>/Saturation2' */

  /* Product: '<S344>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S359>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S359>/Switch' incorporates:
     *  Fcn: '<S360>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S359>/Switch' */

  /* Trigonometry: '<S287>/Cos4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Sin5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S287>/Sin4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Subtract1_kj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Cos5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S287>/Subtract1' incorporates:
   *  Product: '<S287>/Product2'
   *  Product: '<S287>/Product3'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_Subtract1_n = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_kj * rtb_Switch2_c);

  /* Sum: '<S287>/Subtract' incorporates:
   *  Product: '<S287>/Product'
   *  Product: '<S287>/Product1'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_ie * rtb_Switch2_c) -
    (rtb_Subtract1_kj * rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S287>/Hypot' */
  rtb_Hypot_i = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Subtract1_n);

  /* Switch: '<S287>/Switch' incorporates:
   *  Constant: '<S287>/Constant'
   *  Constant: '<S287>/Constant1'
   *  Constant: '<S288>/Constant'
   *  Product: '<S287>/Divide'
   *  Product: '<S287>/Divide1'
   *  RelationalOperator: '<S288>/Compare'
   *  Switch: '<S287>/Switch1'
   */
  if (rtb_Hypot_i > 1.0E-6) {
    rtb_Switch2_l = rtb_Subtract1_n / rtb_Hypot_i;
    rtb_Switch2_c = rtb_MatrixConcatenate_b_idx_0 / rtb_Hypot_i;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S286>/Subtract1' incorporates:
     *  Product: '<S286>/Product2'
     *  Product: '<S286>/Product3'
     *  UnaryMinus: '<S276>/Unary Minus'
     */
    rtb_Subtract1_n = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S286>/Subtract' incorporates:
     *  Product: '<S286>/Product'
     *  Product: '<S286>/Product1'
     */
    rtb_Subtract1_kj = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S286>/Hypot' */
    rtb_Add_ie = rt_hypotd_snf(rtb_Subtract1_kj, rtb_Subtract1_n);

    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S286>/Constant'
     *  Constant: '<S286>/Constant1'
     *  Constant: '<S289>/Constant'
     *  Product: '<S286>/Divide'
     *  Product: '<S286>/Divide1'
     *  RelationalOperator: '<S289>/Compare'
     *  Switch: '<S286>/Switch'
     */
    if (rtb_Add_ie > 1.0E-6) {
      rtb_Subtract1_kj /= rtb_Add_ie;
      rtb_Add_ie = rtb_Subtract1_n / rtb_Add_ie;
    } else {
      rtb_Subtract1_kj = 1.0;
      rtb_Add_ie = 0.0;
    }

    /* End of Switch: '<S286>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ie, rtb_Subtract1_kj);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S279>/Product2' incorporates:
   *  Constant: '<S279>/Constant'
   *  Switch: '<S276>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S274>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S274>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Sum: '<S278>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S229>/Product' incorporates:
   *  Abs: '<S274>/Abs'
   *  Abs: '<S277>/Abs'
   *  Constant: '<S280>/Constant'
   *  Constant: '<S290>/Constant3'
   *  Constant: '<S290>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
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
  rtb_Switch2_l = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S275>/Gain' */
  rtb_Subtract1_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S275>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S282>/Sum1' incorporates:
   *  Constant: '<S275>/Constant2'
   *  Product: '<S282>/Product'
   *  Sum: '<S282>/Sum'
   *  UnitDelay: '<S282>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S275>/Product' incorporates:
   *  Constant: '<S275>/Constant3'
   */
  rtb_Subtract1_kj = rtb_Add_ie * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_kj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S275>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S275>/Add' incorporates:
   *  Gain: '<S275>/Gain1'
   *  Saturate: '<S275>/Saturation'
   */
  rtb_Hypot_i = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract1_n) +
    cos_alpha;

  /* Sum: '<S275>/Subtract' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Hypot_i;

  /* Sum: '<S275>/Sum2' incorporates:
   *  Gain: '<S275>/Gain2'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  rtb_Subtract1_n = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S283>/Switch2' incorporates:
   *  Constant: '<S275>/Constant'
   *  RelationalOperator: '<S283>/LowerRelop1'
   *  Sum: '<S275>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Hypot_i))) {
    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S275>/Constant1'
     *  RelationalOperator: '<S283>/UpperRelop'
     *  Sum: '<S275>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Hypot_i)) {
      rtb_Switch2_c = -1.0 - rtb_Hypot_i;
    } else {
      rtb_Switch2_c = rtb_Subtract1_n;
    }

    /* End of Switch: '<S283>/Switch' */
  }

  /* End of Switch: '<S283>/Switch2' */

  /* Saturate: '<S275>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S275>/Saturation1' */

  /* Sum: '<S275>/Add1' */
  cos_alpha = rtb_Hypot_i + rtb_Subtract1_n;

  /* Saturate: '<S275>/Saturation2' */
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

  /* End of Saturate: '<S275>/Saturation2' */

  /* Sum: '<S291>/Add1' incorporates:
   *  Constant: '<S291>/Constant3'
   *  Constant: '<S291>/Constant4'
   *  Math: '<S291>/Math Function'
   *  Sum: '<S291>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S293>/Sum1' incorporates:
   *  Constant: '<S278>/Constant2'
   *  Product: '<S293>/Product'
   *  Sum: '<S293>/Sum'
   *  UnitDelay: '<S293>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S278>/Product' incorporates:
   *  Constant: '<S278>/Constant3'
   */
  rtb_Hypot_i = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Hypot_i - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S278>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Gain: '<S278>/Gain1'
   *  Saturate: '<S278>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + cos_alpha;

  /* Sum: '<S278>/Subtract' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_l;

  /* Sum: '<S278>/Sum2' incorporates:
   *  Gain: '<S278>/Gain2'
   *  UnitDelay: '<S278>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S294>/Switch2' incorporates:
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S294>/LowerRelop1'
   *  Sum: '<S278>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S278>/Constant1'
     *  RelationalOperator: '<S294>/UpperRelop'
     *  Sum: '<S278>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Switch2_c = -1.0 - rtb_Add_l;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S294>/Switch' */
  }

  /* End of Switch: '<S294>/Switch2' */

  /* Saturate: '<S278>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = rtb_Switch2_c;
  }

  /* End of Saturate: '<S278>/Saturation1' */

  /* Sum: '<S278>/Add1' */
  cos_alpha = rtb_Add_l + rtb_Subtract1_f;

  /* Saturate: '<S278>/Saturation2' */
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

  /* End of Saturate: '<S278>/Saturation2' */

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
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S124>/Switch1' */

  /* Sum: '<S124>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

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
  rtb_Is_Absolute_Translation = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Back_Lower >
     Dist_Reset_Motor_Current_Back_Lower));

  /* Switch: '<S18>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Switch: '<S18>/Switch3'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Lower_Arm_Cal_Success = (rtb_Is_Absolute_Translation ||
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
  rtb_AND_g = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
               (Code_Gen_Model_U.Motor_Current_Back_Upper >
                Dist_Reset_Motor_Current_Back_Upper));

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S19>/Dist_Reset_Value'
   *  Sum: '<S19>/Sum'
   *  UnitDelay: '<S19>/Unit Delay1'
   */
  if (rtb_AND_g) {
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
  if (rtb_Is_Absolute_Translation) {
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
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
    (Code_Gen_Model_U.Motor_Current_Front > Dist_Reset_Motor_Current_Front));

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Dist_Reset_Value'
   *  Sum: '<S21>/Sum'
   *  UnitDelay: '<S21>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch1_n = rtb_Switch2_l - Dist_Reset_Value_Front;
  } else {
    rtb_Switch1_n = Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Sum: '<S21>/Subtract1' */
  Code_Gen_Model_B.Front_Arm_Length = rtb_Switch2_l - rtb_Switch1_n;

  /* Sqrt: '<S131>/Sqrt' incorporates:
   *  Constant: '<S131>/Constant24'
   *  Math: '<S131>/Math Function'
   *  Sum: '<S131>/Add'
   *  Sum: '<S131>/Subtract'
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
  rtb_Switch_b1 = ((Code_Gen_Model_B.Arm_Dist_Cal_Active) &&
                   (Code_Gen_Model_U.Motor_Current_Ball_Screw >
                    Dist_Reset_Motor_Current_Ball_Screw));

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Dist_Reset_Value'
   *  Sum: '<S20>/Sum'
   *  UnitDelay: '<S20>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
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
  sqrt_input = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                    (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_Sqrt = 139.7 - ((317.5 - rtb_Minus_n[0]) * (250.18999999999997 /
    sqrt_input));
  rtb_Switch2_c = ((250.18999999999997 / sqrt_input) * rtb_Minus_n[1]) -
    88.899999999999991;
  d = sqrt((rtb_Sqrt * rtb_Sqrt) + (rtb_Switch2_c * rtb_Switch2_c));

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
    rtb_Sqrt_f = fmin(rtb_Switch2_l, 271.14500000000004);
  } else {
    rtb_Sqrt_f = 11.690000000000001;
  }

  /* Switch: '<S155>/Init' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   *  UnitDelay: '<S155>/FixPt Unit Delay1'
   *  UnitDelay: '<S155>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S155>/Init' */

  /* Sum: '<S153>/Sum1' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S154>/Switch2' incorporates:
   *  Constant: '<S139>/Constant1'
   *  Constant: '<S139>/Constant3'
   *  RelationalOperator: '<S154>/LowerRelop1'
   *  RelationalOperator: '<S154>/UpperRelop'
   *  Switch: '<S154>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S154>/Switch' incorporates:
     *  Constant: '<S139>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S154>/Switch2' */

  /* Sum: '<S153>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S135>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S135>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* RelationalOperator: '<S129>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S135>/Switch' incorporates:
   *  Constant: '<S135>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S135>/Constant3'
     *  UnitDelay: '<S144>/Delay Input1'
     *
     * Block description for '<S144>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
      rtb_Sqrt = AA_Integral_IC;
    } else {
      /* Sum: '<S135>/Sum2' incorporates:
       *  Gain: '<S135>/Gain2'
       *  UnitDelay: '<S135>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S135>/Subtract' incorporates:
       *  Constant: '<S135>/Constant'
       */
      rtb_Sqrt = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S145>/Switch2' incorporates:
       *  RelationalOperator: '<S145>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > rtb_Sqrt)) {
        /* Sum: '<S135>/Subtract1' incorporates:
         *  Constant: '<S135>/Constant1'
         */
        rtb_Sqrt = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S145>/Switch' incorporates:
         *  RelationalOperator: '<S145>/UpperRelop'
         */
        if (!(rtb_Switch2_c < rtb_Sqrt)) {
          rtb_Sqrt = rtb_Switch2_c;
        }

        /* End of Switch: '<S145>/Switch' */
      }

      /* End of Switch: '<S145>/Switch2' */

      /* Saturate: '<S135>/Saturation1' */
      if (rtb_Sqrt > AA_Integral_UL) {
        rtb_Sqrt = AA_Integral_UL;
      } else if (rtb_Sqrt < AA_Integral_LL) {
        rtb_Sqrt = AA_Integral_LL;
      }

      /* End of Saturate: '<S135>/Saturation1' */
    }

    /* End of Switch: '<S135>/Switch1' */
  } else {
    rtb_Sqrt = 0.0;
  }

  /* End of Switch: '<S135>/Switch' */

  /* Switch: '<S12>/Switch1' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND3'
   *  Logic: '<S12>/AND4'
   *  Logic: '<S12>/NOT'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Back_Lower_Arm_Cal_Success))) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant27'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Cal_Back_Upper_Arm_DC;
  } else {
    /* Sum: '<S135>/Add1' */
    cos_alpha = rtb_Switch2_l + rtb_Sqrt;

    /* Saturate: '<S135>/Saturation2' */
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

    /* End of Saturate: '<S135>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S152>/Init' incorporates:
   *  UnitDelay: '<S152>/FixPt Unit Delay1'
   *  UnitDelay: '<S152>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = rtb_Sqrt_f;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S152>/Init' */

  /* Sum: '<S150>/Sum1' */
  rtb_Switch2_c = rtb_Sqrt_f - rtb_Switch2_l;

  /* Switch: '<S151>/Switch2' incorporates:
   *  Constant: '<S138>/Constant1'
   *  Constant: '<S138>/Constant3'
   *  RelationalOperator: '<S151>/LowerRelop1'
   *  RelationalOperator: '<S151>/UpperRelop'
   *  Switch: '<S151>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S151>/Switch' incorporates:
     *  Constant: '<S138>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S151>/Switch2' */

  /* Sum: '<S150>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S136>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S136>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S136>/Switch' incorporates:
   *  Constant: '<S136>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S136>/Constant3'
     *  UnitDelay: '<S146>/Delay Input1'
     *
     * Block description for '<S146>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      rtb_Sqrt_f = AA_Integral_IC;
    } else {
      /* Sum: '<S136>/Sum2' incorporates:
       *  Gain: '<S136>/Gain2'
       *  UnitDelay: '<S136>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c2;

      /* Sum: '<S136>/Subtract' incorporates:
       *  Constant: '<S136>/Constant'
       */
      rtb_Sqrt_f = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S147>/Switch2' incorporates:
       *  RelationalOperator: '<S147>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > rtb_Sqrt_f)) {
        /* Sum: '<S136>/Subtract1' incorporates:
         *  Constant: '<S136>/Constant1'
         */
        rtb_Sqrt_f = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S147>/Switch' incorporates:
         *  RelationalOperator: '<S147>/UpperRelop'
         */
        if (!(rtb_Switch2_c < rtb_Sqrt_f)) {
          rtb_Sqrt_f = rtb_Switch2_c;
        }

        /* End of Switch: '<S147>/Switch' */
      }

      /* End of Switch: '<S147>/Switch2' */

      /* Saturate: '<S136>/Saturation1' */
      if (rtb_Sqrt_f > AA_Integral_UL) {
        rtb_Sqrt_f = AA_Integral_UL;
      } else if (rtb_Sqrt_f < AA_Integral_LL) {
        rtb_Sqrt_f = AA_Integral_LL;
      }

      /* End of Saturate: '<S136>/Saturation1' */
    }

    /* End of Switch: '<S136>/Switch1' */
  } else {
    rtb_Sqrt_f = 0.0;
  }

  /* End of Switch: '<S136>/Switch' */

  /* Switch: '<S19>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Switch: '<S19>/Switch3'
     *  UnitDelay: '<S19>/Unit Delay2'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = (rtb_AND_g ||
      (Code_Gen_Model_B.Back_Upper_Arm_Cal_Success));
  } else {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Code_Gen_Model_B.Back_Upper_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND2'
   *  Logic: '<S12>/AND5'
   *  Logic: '<S12>/NOT1'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Back_Upper_Arm_Cal_Success))) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant32'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Cal_Back_Lower_Arm_DC;
  } else {
    /* Sum: '<S136>/Add1' */
    cos_alpha = rtb_Switch2_l + rtb_Sqrt_f;

    /* Saturate: '<S136>/Saturation2' */
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

    /* End of Saturate: '<S136>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S130>/Subtract1' incorporates:
   *  Constant: '<S130>/Constant24'
   *  MATLAB Function: '<S12>/Get_Arm_Lengths'
   *  Math: '<S130>/Math Function'
   *  Sqrt: '<S130>/Sqrt'
   *  Sum: '<S130>/Subtract'
   */
  rtb_Switch2_l = sqrt((sqrt_input * sqrt_input) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S130>/Saturation' */
  if (rtb_Switch2_l > Front_AA_Bot_Max_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Max_Ext;
  } else if (rtb_Switch2_l < Front_AA_Bot_Min_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Min_Ext;
  }

  /* End of Saturate: '<S130>/Saturation' */

  /* Switch: '<S161>/Init' incorporates:
   *  UnitDelay: '<S161>/FixPt Unit Delay1'
   *  UnitDelay: '<S161>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S161>/Init' */

  /* Sum: '<S159>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S160>/Switch2' incorporates:
   *  Constant: '<S141>/Constant1'
   *  Constant: '<S141>/Constant3'
   *  RelationalOperator: '<S160>/LowerRelop1'
   *  RelationalOperator: '<S160>/UpperRelop'
   *  Switch: '<S160>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S160>/Switch' incorporates:
     *  Constant: '<S141>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S160>/Switch2' */

  /* Sum: '<S159>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S137>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S137>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S137>/Switch' incorporates:
   *  Constant: '<S137>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<S137>/Constant3'
     *  UnitDelay: '<S148>/Delay Input1'
     *
     * Block description for '<S148>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S137>/Sum2' incorporates:
       *  Gain: '<S137>/Gain2'
       *  UnitDelay: '<S137>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S137>/Subtract' incorporates:
       *  Constant: '<S137>/Constant'
       */
      sqrt_input = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S149>/Switch2' incorporates:
       *  RelationalOperator: '<S149>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > sqrt_input)) {
        /* Sum: '<S137>/Subtract1' incorporates:
         *  Constant: '<S137>/Constant1'
         */
        sqrt_input = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S149>/Switch' incorporates:
         *  RelationalOperator: '<S149>/UpperRelop'
         */
        if (!(rtb_Switch2_c < sqrt_input)) {
          sqrt_input = rtb_Switch2_c;
        }

        /* End of Switch: '<S149>/Switch' */
      }

      /* End of Switch: '<S149>/Switch2' */

      /* Saturate: '<S137>/Saturation1' */
      if (sqrt_input > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (sqrt_input < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      }

      /* End of Saturate: '<S137>/Saturation1' */
    }

    /* End of Switch: '<S137>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S137>/Switch' */

  /* Switch: '<S21>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S21>/Switch2' incorporates:
     *  Switch: '<S21>/Switch3'
     *  UnitDelay: '<S21>/Unit Delay2'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Front_Arm_Cal_Success));
  } else {
    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S21>/Constant'
     */
    Code_Gen_Model_B.Front_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Switch: '<S12>/Switch2' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND1'
   *  Logic: '<S12>/AND6'
   *  Logic: '<S12>/NOT2'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Front_Arm_Cal_Success))) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant33'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Cal_Front_Arm_DC;
  } else {
    /* Sum: '<S137>/Add1' */
    cos_alpha = rtb_Switch2_l + sqrt_input;

    /* Saturate: '<S137>/Saturation2' */
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

    /* End of Saturate: '<S137>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S158>/Init' incorporates:
   *  UnitDelay: '<S158>/FixPt Unit Delay1'
   *  UnitDelay: '<S158>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = d;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S158>/Init' */

  /* Sum: '<S156>/Sum1' */
  rtb_Switch2_c = d - rtb_Switch2_l;

  /* Switch: '<S157>/Switch2' incorporates:
   *  Constant: '<S140>/Constant1'
   *  Constant: '<S140>/Constant3'
   *  RelationalOperator: '<S157>/LowerRelop1'
   *  RelationalOperator: '<S157>/UpperRelop'
   *  Switch: '<S157>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S157>/Switch' incorporates:
     *  Constant: '<S140>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S157>/Switch2' */

  /* Sum: '<S156>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S134>/Sum' */
  d = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S143>/Sum1' incorporates:
   *  Constant: '<S134>/Constant2'
   *  Product: '<S143>/Product'
   *  Sum: '<S143>/Sum'
   *  UnitDelay: '<S143>/Unit Delay1'
   */
  rtb_Switch2_l = ((d - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S134>/Product' incorporates:
   *  Constant: '<S134>/Constant3'
   */
  rtb_Switch2_c = rtb_Switch2_l * BS_Deriv_Gain;

  /* Switch: '<S20>/Switch2' */
  if (Code_Gen_Model_B.Arm_Dist_Cal_Active) {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Switch: '<S20>/Switch3'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = (rtb_Switch_b1 ||
      (Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success));
  } else {
    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success = false;
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Switch: '<S12>/Switch3' incorporates:
   *  Constant: '<S12>/Constant35'
   *  DataTypeConversion: '<S12>/Data Type Conversion1'
   *  Logic: '<S12>/AND'
   *  Logic: '<S12>/AND7'
   *  Logic: '<S12>/NOT3'
   */
  if ((TEST_Cal_DC_Flag != 0.0) || ((Code_Gen_Model_B.Arm_Dist_Cal_Active_p) &&
       (!Code_Gen_Model_B.Ball_Screw_Arm_Cal_Success))) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant34'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Cal_Ball_Screw_Arm_DC;
  } else {
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
    cos_alpha = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S134>/Saturation' */
    if (cos_alpha > BS_Deriv_UL) {
      cos_alpha = BS_Deriv_UL;
    } else if (cos_alpha < BS_Deriv_LL) {
      cos_alpha = BS_Deriv_LL;
    }

    /* Sum: '<S134>/Add' incorporates:
     *  Gain: '<S134>/Gain1'
     *  Saturate: '<S134>/Saturation'
     */
    cos_alpha += BS_Prop_Gain * d;

    /* Saturate: '<S134>/Saturation2' */
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

    /* End of Saturate: '<S134>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch3' */

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  rtb_AND_g = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  d = look1_binlcpw(TEST_Speaker_Angle,
                    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
                    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  rtb_Switch_b1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_Compare_fm = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  rtb_Compare_as = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

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
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -d;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = d;
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
      if (((int32_T)rtb_Compare_fm) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_hw)) {
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
      } else if (((int32_T)rtb_AND_g) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_f)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (((int32_T)rtb_Switch_b1) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_oy)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (((int32_T)rtb_Compare_as) > ((int32_T)
                  Code_Gen_Model_DW.DelayInput1_DSTATE_e)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -d;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = d;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/Chart_Intake_and_Shooter' */

  /* Sum: '<S57>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  d = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S57>/Add' incorporates:
   *  Gain: '<S57>/Gain'
   *  Gain: '<S57>/Gain1'
   */
  cos_alpha = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * d);

  /* Switch: '<S57>/Switch' incorporates:
   *  Constant: '<S57>/Constant2'
   *  Switch: '<S7>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S57>/Sum2' incorporates:
     *  Gain: '<S57>/Gain2'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    d = (Shooter_Motor_Control_I * d) + Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S57>/Subtract' incorporates:
     *  Constant: '<S57>/Constant'
     */
    alpha = 1.0 - cos_alpha;

    /* Switch: '<S59>/Switch2' incorporates:
     *  Constant: '<S57>/Constant'
     *  RelationalOperator: '<S59>/LowerRelop1'
     *  Sum: '<S57>/Subtract'
     */
    if (!(d > (1.0 - cos_alpha))) {
      /* Sum: '<S57>/Subtract1' incorporates:
       *  Constant: '<S57>/Constant1'
       */
      alpha = -1.0 - cos_alpha;

      /* Switch: '<S59>/Switch' incorporates:
       *  Constant: '<S57>/Constant1'
       *  RelationalOperator: '<S59>/UpperRelop'
       *  Sum: '<S57>/Subtract1'
       */
      if (!(d < (-1.0 - cos_alpha))) {
        alpha = d;
      }

      /* End of Switch: '<S59>/Switch' */
    }

    /* End of Switch: '<S59>/Switch2' */

    /* Saturate: '<S57>/Saturation1' */
    if (alpha > Shooter_Motor_Control_I_UL) {
      d = Shooter_Motor_Control_I_UL;
    } else if (alpha < Shooter_Motor_Control_I_LL) {
      d = Shooter_Motor_Control_I_LL;
    } else {
      d = alpha;
    }

    /* End of Saturate: '<S57>/Saturation1' */

    /* Sum: '<S57>/Add1' */
    cos_alpha += d;

    /* Saturate: '<S57>/Saturation2' */
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

    /* End of Saturate: '<S57>/Saturation2' */
  } else {
    d = 0.0;

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
  alpha = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S58>/Add' incorporates:
   *  Gain: '<S58>/Gain'
   *  Gain: '<S58>/Gain1'
   */
  cos_alpha = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * alpha);

  /* Switch: '<S58>/Switch' incorporates:
   *  Constant: '<S58>/Constant2'
   *  Switch: '<S7>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S58>/Sum2' incorporates:
     *  Gain: '<S58>/Gain2'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    alpha = (Shooter_Motor_Control_I * alpha) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S58>/Subtract' incorporates:
     *  Constant: '<S58>/Constant'
     */
    rtb_Switch2_hk = 1.0 - cos_alpha;

    /* Switch: '<S60>/Switch2' incorporates:
     *  Constant: '<S58>/Constant'
     *  RelationalOperator: '<S60>/LowerRelop1'
     *  Sum: '<S58>/Subtract'
     */
    if (!(alpha > (1.0 - cos_alpha))) {
      /* Sum: '<S58>/Subtract1' incorporates:
       *  Constant: '<S58>/Constant1'
       */
      rtb_Switch2_hk = -1.0 - cos_alpha;

      /* Switch: '<S60>/Switch' incorporates:
       *  Constant: '<S58>/Constant1'
       *  RelationalOperator: '<S60>/UpperRelop'
       *  Sum: '<S58>/Subtract1'
       */
      if (!(alpha < (-1.0 - cos_alpha))) {
        rtb_Switch2_hk = alpha;
      }

      /* End of Switch: '<S60>/Switch' */
    }

    /* End of Switch: '<S60>/Switch2' */

    /* Saturate: '<S58>/Saturation1' */
    if (rtb_Switch2_hk > Shooter_Motor_Control_I_UL) {
      alpha = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_hk < Shooter_Motor_Control_I_LL) {
      alpha = Shooter_Motor_Control_I_LL;
    } else {
      alpha = rtb_Switch2_hk;
    }

    /* End of Saturate: '<S58>/Saturation1' */

    /* Sum: '<S58>/Add1' */
    cos_alpha += alpha;

    /* Saturate: '<S58>/Saturation2' */
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

    /* End of Saturate: '<S58>/Saturation2' */
  } else {
    alpha = 0.0;

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
     *  Bias: '<S190>/Bias'
     *  Merge: '<S164>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' incorporates:
     *  Bias: '<S190>/Bias'
     *  Merge: '<S164>/Merge1'
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
  cos_alpha = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
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
    Code_Gen_Model_B.Product6[1]) + cos_alpha) + Code_Gen_Model_B.Product3[1];

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

  /* Update for UnitDelay: '<S327>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S327>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S341>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S340>/UD'
   *
   * Block description for '<S340>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S338>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S336>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S336>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S303>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S302>/UD'
   *
   * Block description for '<S302>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2;

  /* Update for UnitDelay: '<S296>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch4_g;

  /* Update for UnitDelay: '<S314>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch1_p;

  /* Update for UnitDelay: '<S313>/UD'
   *
   * Block description for '<S313>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Switch2_o;

  /* Update for UnitDelay: '<S299>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Product_ku;

  /* Update for UnitDelay: '<S240>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S233>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S251>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S250>/UD'
   *
   * Block description for '<S250>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S236>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S261>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_kl;

  /* Update for UnitDelay: '<S260>/UD'
   *
   * Block description for '<S260>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_m4;

  /* Update for UnitDelay: '<S254>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_dk;

  /* Update for UnitDelay: '<S272>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S282>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_kj;

  /* Update for UnitDelay: '<S275>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S293>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Hypot_i;

  /* Update for UnitDelay: '<S278>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S124>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

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

  /* Update for UnitDelay: '<S155>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S155>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S144>/Delay Input1'
   *
   * Block description for '<S144>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S135>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Sqrt;

  /* Update for UnitDelay: '<S146>/Delay Input1'
   *
   * Block description for '<S146>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S152>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S152>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S136>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c2 = rtb_Sqrt_f;

  /* Update for UnitDelay: '<S148>/Delay Input1'
   *
   * Block description for '<S148>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S161>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S161>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S137>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = sqrt_input;

  /* Update for UnitDelay: '<S158>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S158>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S143>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S142>/UD'
   *
   * Block description for '<S142>/UD':
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
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_AND_g;

  /* Update for UnitDelay: '<S53>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_oy = rtb_Switch_b1;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hw = rtb_Compare_fm;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Compare_as;

  /* Update for UnitDelay: '<S57>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = d;

  /* Update for UnitDelay: '<S58>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = alpha;
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

    /* InitializeConditions for UnitDelay: '<S327>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S336>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S155>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S152>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S161>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S158>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S393>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S13>/Spline Path Following Enabled' */
    /* Start for If: '<S168>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S168>/Robot_Index_Is_Valid' */
    /* Start for If: '<S171>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S171>/Circle_Check_Valid' */
    /* Start for If: '<S173>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S171>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S168>/Robot_Index_Is_Valid' */
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

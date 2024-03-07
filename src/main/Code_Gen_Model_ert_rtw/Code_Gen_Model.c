/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.94
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Mar  6 20:27:26 2024
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
                                        *   '<S136>/Gain2'
                                        *   '<S137>/Gain2'
                                        *   '<S138>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S136>/Constant3'
                                        *   '<S137>/Constant3'
                                        *   '<S138>/Constant3'
                                        */
real_T AA_Integral_LL = 0.0;           /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S136>/Saturation1'
                                        *   '<S137>/Saturation1'
                                        *   '<S138>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S136>/Saturation1'
                                        *   '<S137>/Saturation1'
                                        *   '<S138>/Saturation1'
                                        */
real_T AA_Position_Dec_RL = -0.508;    /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S139>/Constant1'
                                        *   '<S140>/Constant1'
                                        *   '<S142>/Constant1'
                                        */
real_T AA_Position_Inc_RL = 0.508;     /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S139>/Constant3'
                                        *   '<S140>/Constant3'
                                        *   '<S142>/Constant3'
                                        */
real_T AA_Prop_Gain = 0.0;             /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S136>/Gain1'
                                        *   '<S137>/Gain1'
                                        *   '<S138>/Gain1'
                                        */
real_T AA_TC_LL = 0.0;                 /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S136>/Constant1'
                                        *   '<S136>/Saturation2'
                                        *   '<S137>/Constant1'
                                        *   '<S137>/Saturation2'
                                        *   '<S138>/Constant1'
                                        *   '<S138>/Saturation2'
                                        */
real_T AA_TC_UL = 1.0;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S136>/Constant'
                                        *   '<S136>/Saturation2'
                                        *   '<S137>/Constant'
                                        *   '<S137>/Saturation2'
                                        *   '<S138>/Constant'
                                        *   '<S138>/Saturation2'
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
                                        *   '<S27>/Constant'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S135>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S135>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S135>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S135>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -0.0508;   /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S141>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 0.0508;    /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S141>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.0;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S135>/Gain1'
                                        */
real_T BS_TC_LL = 0.0;                 /* Variable: BS_TC_LL
                                        * Referenced by: '<S135>/Saturation2'
                                        */
real_T BS_TC_UL = 1.0;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S135>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S391>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S389>/Constant'
                                         *   '<S389>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S391>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S389>/Constant1'
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
                                        * Referenced by: '<S318>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S234>/Constant3'
                                        *   '<S255>/Constant3'
                                        *   '<S276>/Constant3'
                                        *   '<S297>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S234>/Constant2'
                                   *   '<S255>/Constant2'
                                   *   '<S276>/Constant2'
                                   *   '<S297>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S234>/Saturation'
                                        *   '<S255>/Saturation'
                                        *   '<S276>/Saturation'
                                        *   '<S297>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S234>/Saturation'
                                        *   '<S255>/Saturation'
                                        *   '<S276>/Saturation'
                                        *   '<S297>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S234>/Gain'
                                            *   '<S255>/Gain'
                                            *   '<S276>/Gain'
                                            *   '<S297>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S234>/Gain2'
                                        *   '<S255>/Gain2'
                                        *   '<S276>/Gain2'
                                        *   '<S297>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S234>/Saturation1'
                                        *   '<S255>/Saturation1'
                                        *   '<S276>/Saturation1'
                                        *   '<S297>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S234>/Saturation1'
                                        *   '<S255>/Saturation1'
                                        *   '<S276>/Saturation1'
                                        *   '<S297>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S234>/Gain1'
                                        *   '<S255>/Gain1'
                                        *   '<S276>/Gain1'
                                        *   '<S297>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S239>/Constant'
                            *   '<S260>/Constant'
                            *   '<S281>/Constant'
                            *   '<S302>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S22>/Constant'
                                        */
real_T Front_AA_Bot_Max_Ext = 455.6125;/* Variable: Front_AA_Bot_Max_Ext
                                        * Referenced by: '<S131>/Saturation'
                                        */
real_T Front_AA_Bot_Min_Ext = 9.5;     /* Variable: Front_AA_Bot_Min_Ext
                                        * Referenced by: '<S131>/Saturation'
                                        */
real_T Gamepad_Stick_Down_Threshold = -0.5;/* Variable: Gamepad_Stick_Down_Threshold
                                            * Referenced by:
                                            *   '<S23>/Constant'
                                            *   '<S25>/Constant'
                                            */
real_T Gamepad_Stick_Up_Threshold = 0.5;/* Variable: Gamepad_Stick_Up_Threshold
                                         * Referenced by:
                                         *   '<S24>/Constant'
                                         *   '<S26>/Constant'
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
                                        * Referenced by: '<S125>/Constant'
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
                                           *   '<S58>/Gain'
                                           *   '<S59>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S58>/Gain2'
                                         *   '<S59>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S58>/Saturation1'
                                          *   '<S59>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S58>/Saturation1'
                                         *   '<S59>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S58>/Gain1'
                                         *   '<S59>/Gain1'
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
                          * Referenced by: '<S219>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S219>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S166>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S3>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S179>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S219>/Constant3'
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
                                          * Referenced by: '<S373>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S339>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S339>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S339>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S339>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S338>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S339>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S339>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S339>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 3.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S339>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S339>/Constant1'
                                   *   '<S339>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S339>/Constant'
                                   *   '<S339>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S329>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S329>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S329>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S329>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S329>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S329>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S237>/Constant3'
                                        *   '<S258>/Constant3'
                                        *   '<S279>/Constant3'
                                        *   '<S300>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S237>/Constant2'
                                *   '<S258>/Constant2'
                                *   '<S279>/Constant2'
                                *   '<S300>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S237>/Saturation'
                                           *   '<S258>/Saturation'
                                           *   '<S279>/Saturation'
                                           *   '<S300>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S237>/Saturation'
                                          *   '<S258>/Saturation'
                                          *   '<S279>/Saturation'
                                          *   '<S300>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S237>/Gain2'
                                         *   '<S258>/Gain2'
                                         *   '<S279>/Gain2'
                                         *   '<S300>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S237>/Saturation1'
                                             *   '<S258>/Saturation1'
                                             *   '<S279>/Saturation1'
                                             *   '<S300>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S237>/Saturation1'
                                            *   '<S258>/Saturation1'
                                            *   '<S279>/Saturation1'
                                            *   '<S300>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S237>/Gain1'
                                        *   '<S258>/Gain1'
                                        *   '<S279>/Gain1'
                                        *   '<S300>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S371>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.015;   /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S371>/Constant1'
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
                        * Referenced by: '<S317>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S317>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S317>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S317>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S317>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S317>/Constant3'
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
  int32_T s191_iter;
  uint16_T s216_iter;
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

  /* Sum: '<S224>/Add1' incorporates:
   *  Constant: '<S224>/Constant3'
   *  Constant: '<S224>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S224>/Math Function'
   *  Sum: '<S14>/Add'
   *  Sum: '<S224>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S225>/Add1' incorporates:
   *  Constant: '<S225>/Constant3'
   *  Constant: '<S225>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S225>/Math Function'
   *  Sum: '<S14>/Add1'
   *  Sum: '<S225>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S226>/Add1' incorporates:
   *  Constant: '<S226>/Constant3'
   *  Constant: '<S226>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S226>/Math Function'
   *  Sum: '<S14>/Add2'
   *  Sum: '<S226>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S227>/Add1' incorporates:
   *  Constant: '<S227>/Constant3'
   *  Constant: '<S227>/Constant4'
   *  Gain: '<S14>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S227>/Math Function'
   *  Sum: '<S14>/Add3'
   *  Sum: '<S227>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S11>/Product3' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S120>/Diff'
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
  rtb_Switch2_c = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S11>/Product7' incorporates:
   *  Fcn: '<S121>/r->x'
   *  Fcn: '<S121>/theta->y'
   *  Fcn: '<S122>/r->x'
   *  Fcn: '<S122>/theta->y'
   *  Fcn: '<S123>/r->x'
   *  Fcn: '<S123>/theta->y'
   *  Fcn: '<S124>/r->x'
   *  Fcn: '<S124>/theta->y'
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
   *  RelationalOperator: '<S46>/FixPt Relational Operator'
   *  Sum: '<S6>/Sum'
   *  UnitDelay: '<S46>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay1'
   *
   * Block description for '<S46>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_thetay = 0.02;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE + 0.02;
  }

  /* End of Switch: '<S6>/Switch9' */

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
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
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   *  RelationalOperator: '<S37>/Compare'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy17' incorporates:
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   *  RelationalOperator: '<S33>/Compare'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* SignalConversion: '<S6>/Signal Copy19' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   *  RelationalOperator: '<S31>/Compare'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* SignalConversion: '<S6>/Signal Copy18' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   *  RelationalOperator: '<S32>/Compare'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy10' incorporates:
   *  Constant: '<S28>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   *  RelationalOperator: '<S28>/Compare'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Gamepad_B3_X'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S6>/OR1'
   *  Logic: '<S6>/OR2'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
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
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Inport: '<Root>/Joystick_Left_B10'
   *  Inport: '<Root>/Joystick_Right_B10'
   *  Logic: '<S6>/OR3'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S38>/Compare'
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

    /* DataTypeConversion: '<S3>/Cast To Double' incorporates:
     *  Constant: '<S22>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     *  RelationalOperator: '<S22>/Compare'
     */
    Code_Gen_Model_B.DistanceSensorBoolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range < FloorDistance);

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

    /* Switch: '<S373>/Switch' incorporates:
     *  Constant: '<S373>/Constant'
     *  Constant: '<S373>/Constant1'
     *  Constant: '<S373>/Constant2'
     *  Math: '<S373>/Hypot'
     *  RelationalOperator: '<S373>/GreaterThan'
     *  Switch: '<S373>/Switch1'
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

    /* End of Switch: '<S373>/Switch' */

    /* Logic: '<S371>/AND' incorporates:
     *  Constant: '<S374>/Constant'
     *  Constant: '<S375>/Constant'
     *  Logic: '<S381>/AND'
     *  RelationalOperator: '<S374>/Compare'
     *  RelationalOperator: '<S375>/Compare'
     */
    rtb_AND_g = ((rtb_UnitDelay1_gi == 0.0) && (rtb_Init_e == 0.0));

    /* Logic: '<S371>/AND2' incorporates:
     *  RelationalOperator: '<S376>/FixPt Relational Operator'
     *  RelationalOperator: '<S377>/FixPt Relational Operator'
     *  RelationalOperator: '<S378>/FixPt Relational Operator'
     *  RelationalOperator: '<S379>/FixPt Relational Operator'
     *  UnitDelay: '<S376>/Delay Input1'
     *  UnitDelay: '<S377>/Delay Input1'
     *  UnitDelay: '<S378>/Delay Input1'
     *  UnitDelay: '<S379>/Delay Input1'
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
     *
     * Block description for '<S379>/Delay Input1':
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

    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S371>/Constant1'
     *  Constant: '<S371>/Constant2'
     *  Logic: '<S371>/AND'
     *  Logic: '<S371>/AND4'
     *  Logic: '<S371>/NOT1'
     *  Product: '<S371>/Product1'
     *  Sum: '<S371>/Sum'
     *  UnitDelay: '<S371>/Unit Delay'
     */
    if (rtb_AND_g && (!rtb_Is_Absolute_Steering)) {
      rtb_Switch1_nj = (Code_Gen_Model_B.Steer_Joystick_Z * Steering_Twist_Gain)
        + Code_Gen_Model_DW.UnitDelay_DSTATE_gj;
    } else {
      rtb_Switch1_nj = 0.0;
    }

    /* End of Switch: '<S371>/Switch1' */

    /* Switch: '<S381>/Switch1' incorporates:
     *  Switch: '<S381>/Switch2'
     *  UnitDelay: '<S381>/Unit Delay'
     *  UnitDelay: '<S381>/Unit Delay1'
     */
    if (rtb_AND_g) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = rtb_Init_e;
      rtb_Switch2 = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S381>/Switch1' */

    /* Logic: '<S371>/AND1' incorporates:
     *  Logic: '<S371>/AND'
     *  Logic: '<S371>/AND3'
     *  UnitDelay: '<S371>/Unit Delay2'
     */
    rtb_AND_g = (rtb_AND_g && (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Switch: '<S371>/Switch4' incorporates:
     *  Constant: '<S371>/Constant5'
     *  Switch: '<S371>/Switch5'
     *  Switch: '<S371>/Switch6'
     *  Switch: '<S371>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S371>/Switch5' incorporates:
       *  Constant: '<S371>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S371>/Switch6' incorporates:
       *  Constant: '<S371>/Constant7'
       *  Switch: '<S371>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S371>/Switch7' incorporates:
       *  Constant: '<S371>/Constant8'
       *  Switch: '<S371>/Switch5'
       *  Switch: '<S371>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else {
      /* Switch: '<S371>/Switch6' incorporates:
       *  Switch: '<S371>/Switch5'
       *  UnitDelay: '<S371>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S371>/Switch4' */

    /* Switch: '<S371>/Switch3' incorporates:
     *  Logic: '<S371>/NOT'
     *  Trigonometry: '<S371>/Atan2'
     */
    if (!rtb_AND_g) {
      rtb_Switch1_b4 = rt_atan2d_snf(rtb_Switch1_m5, rtb_Switch2);
    } else {
      rtb_Switch1_b4 = rtb_Switch4_g;
    }

    /* Merge: '<S10>/Merge1' incorporates:
     *  Sum: '<S371>/Sum1'
     *  Switch: '<S371>/Switch3'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rtb_Switch1_b4 + rtb_Switch1_nj;

    /* RelationalOperator: '<S384>/Compare' incorporates:
     *  Constant: '<S384>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Switch2 < 0.0);

    /* Switch: '<S380>/Switch' incorporates:
     *  Constant: '<S380>/Constant'
     *  Constant: '<S380>/Constant1'
     *  Constant: '<S382>/Constant'
     *  Constant: '<S383>/Constant'
     *  Logic: '<S380>/Logical Operator'
     *  RelationalOperator: '<S382>/Compare'
     *  RelationalOperator: '<S383>/Compare'
     *  UnitDelay: '<S380>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_hh >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = 6.2831853071795862;
    } else {
      rtb_Switch1_b4 = 0.0;
    }

    /* Switch: '<S380>/Switch1' incorporates:
     *  Constant: '<S380>/Constant2'
     *  Constant: '<S380>/Constant3'
     *  Constant: '<S385>/Constant'
     *  Constant: '<S386>/Constant'
     *  Logic: '<S380>/Logical Operator1'
     *  RelationalOperator: '<S385>/Compare'
     *  RelationalOperator: '<S386>/Compare'
     *  UnitDelay: '<S380>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_hh < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = -6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Sum: '<S380>/Sum1' incorporates:
     *  Switch: '<S380>/Switch'
     *  Switch: '<S380>/Switch1'
     *  UnitDelay: '<S380>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Switch1_b4 + rtb_Add_ie) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S390>/Switch1' incorporates:
     *  Constant: '<S395>/Constant'
     *  Constant: '<S396>/Constant'
     *  Logic: '<S390>/AND'
     *  RelationalOperator: '<S395>/Compare'
     *  RelationalOperator: '<S396>/Compare'
     *  Switch: '<S390>/Switch2'
     *  UnitDelay: '<S390>/Unit Delay'
     *  UnitDelay: '<S390>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_o = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_o = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S390>/Switch1' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  Trigonometry: '<S372>/Atan2'
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
     *  Constant: '<S371>/Constant'
     *  Lookup_n-D: '<S371>/Modulation_Str_Y_Rel'
     *  Product: '<S371>/Product'
     *  SignalConversion: '<S6>/Signal Copy5'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S389>/Constant'
     *  Constant: '<S389>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S389>/Switch1' */

    /* Switch: '<S394>/Init' incorporates:
     *  UnitDelay: '<S394>/FixPt Unit Delay1'
     *  UnitDelay: '<S394>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Init_e = rtb_Product_ku;
    } else {
      rtb_Init_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S394>/Init' */

    /* Sum: '<S392>/Sum1' */
    rtb_Product_ku -= rtb_Init_e;

    /* Switch: '<S393>/Switch2' incorporates:
     *  Constant: '<S391>/Constant1'
     *  Constant: '<S391>/Constant3'
     *  RelationalOperator: '<S393>/LowerRelop1'
     *  RelationalOperator: '<S393>/UpperRelop'
     *  Switch: '<S393>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S393>/Switch' incorporates:
       *  Constant: '<S391>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S393>/Switch2' */

    /* Sum: '<S392>/Sum' */
    rtb_Init_e += rtb_Product_ku;

    /* Product: '<S389>/Product' incorporates:
     *  Lookup_n-D: '<S372>/Modulation_Drv'
     *  Math: '<S372>/Magnitude'
     */
    cos_alpha = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_Init_e;

    /* Saturate: '<S389>/Saturation' */
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

    /* End of Saturate: '<S389>/Saturation' */

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

    /* Update for UnitDelay: '<S376>/Delay Input1'
     *
     * Block description for '<S376>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S377>/Delay Input1'
     *
     * Block description for '<S377>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S378>/Delay Input1'
     *
     * Block description for '<S378>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S379>/Delay Input1'
     *
     * Block description for '<S379>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S371>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gj = rtb_Switch1_nj;

    /* Update for UnitDelay: '<S381>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S381>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Switch2;

    /* Update for UnitDelay: '<S371>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = rtb_AND_g;

    /* Update for UnitDelay: '<S371>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S380>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hh = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S380>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S390>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p;

    /* Update for UnitDelay: '<S390>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_o;

    /* Update for UnitDelay: '<S394>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S394>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S394>/FixPt Unit Delay1' */
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

  /* Reshape: '<S62>/Reshapey' incorporates:
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

  /* Delay: '<S62>/MemoryX' incorporates:
   *  Constant: '<S62>/X0'
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
    for (s191_iter = 0; s191_iter < 8; s191_iter++) {
      rtb_Switch1_b4 += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments
        + i] * rtb_TmpSignalConversionAtProduc[s191_iter];
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

  /* Outputs for Enabled SubSystem: '<S89>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S115>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S82>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S113>/Enable'
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

    /* Product: '<S113>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S62>/C'
     *  Delay: '<S62>/MemoryX'
     *  Product: '<S115>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_m5;

    /* Sum: '<S113>/Sum' incorporates:
     *  Constant: '<S62>/D'
     *  Product: '<S113>/C[k]*xhat[k|k-1]'
     *  Product: '<S113>/D[k]*u[k]'
     *  Sum: '<S113>/Add1'
     */
    rtb_Switch2_c = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_c + rtb_Switch1_m5);

    /* Product: '<S113>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S62>/C'
     *  Delay: '<S62>/MemoryX'
     *  Product: '<S115>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_m5;

    /* Sum: '<S113>/Sum' incorporates:
     *  Constant: '<S62>/D'
     *  Product: '<S113>/C[k]*xhat[k|k-1]'
     *  Product: '<S113>/D[k]*u[k]'
     *  Sum: '<S113>/Add1'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - (rtb_Switch2_c + rtb_Switch1_m5);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S113>/Product3' incorporates:
     *  Constant: '<S63>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_m5);

    /* Sum: '<S115>/Add1' incorporates:
     *  Product: '<S115>/Product'
     */
    rtb_Switch2_c = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S113>/Product3' incorporates:
     *  Constant: '<S63>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_m5);

    /* Sum: '<S115>/Add1' incorporates:
     *  Product: '<S115>/Product'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S115>/Product2' incorporates:
     *  Constant: '<S63>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_c) +
      (5.9896845167210271E-17 * rtb_Switch1_m5);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_c) +
      (0.095124921972503981 * rtb_Switch1_m5);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S113>/Product3' incorporates:
       *  Outport: '<S113>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S115>/Product2' incorporates:
       *  Outport: '<S115>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S9>/AND' */
  /* End of Outputs for SubSystem: '<S82>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S89>/Enabled Subsystem' */

  /* Sum: '<S89>/Add' incorporates:
   *  Delay: '<S62>/MemoryX'
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
   *  Constant: '<S216>/Constant'
   *  Logic: '<S216>/AND'
   *  MATLAB Function: '<S166>/Find closest index to curve'
   *  Product: '<S216>/Product'
   *  RelationalOperator: '<S216>/Relational Operator'
   *  RelationalOperator: '<S216>/Relational Operator1'
   *  Selector: '<S216>/Selector'
   *  Selector: '<S216>/Selector1'
   *  Selector: '<S217>/Selector'
   *  Sum: '<S216>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S169>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S172>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S174>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S169>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S13>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S164>/Action Port'
       */
      /* InitializeConditions for If: '<S13>/If' incorporates:
       *  UnitDelay: '<S164>/Unit Delay'
       *  UnitDelay: '<S165>/Unit Delay'
       *  UnitDelay: '<S167>/Unit Delay'
       *  UnitDelay: '<S167>/Unit Delay1'
       *  UnitDelay: '<S217>/Unit Delay'
       *  UnitDelay: '<S217>/Unit Delay1'
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
     *  ActionPort: '<S164>/Action Port'
     */
    /* Selector: '<S165>/Selector1' incorporates:
     *  Merge: '<S10>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S165>/Selector1' */

    /* Lookup_n-D: '<S164>/Capture Radius' incorporates:
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled8,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S165>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S165>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S169>/If' incorporates:
     *  RelationalOperator: '<S169>/ '
     *  UnitDelay: '<S165>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S172>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S174>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S169>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S172>/Action Port'
       */
      /* InitializeConditions for If: '<S169>/If' incorporates:
       *  UnitDelay: '<S172>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S169>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S169>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S172>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S172>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S175>/Action Port'
       */
      /* If: '<S172>/If' incorporates:
       *  Selector: '<S165>/Selector1'
       *  Selector: '<S172>/Selector'
       *  Selector: '<S175>/Selector'
       */
      rtb_Switch2_l = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S172>/Increment_If_Rectangle_Check' */

      /* Sum: '<S172>/Minus' incorporates:
       *  Concatenate: '<S165>/Matrix Concatenate2'
       *  Selector: '<S172>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_l;

      /* Outputs for IfAction SubSystem: '<S172>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S175>/Action Port'
       */
      /* If: '<S172>/If' incorporates:
       *  Selector: '<S165>/Selector1'
       *  Selector: '<S172>/Selector'
       *  Selector: '<S175>/Selector'
       *  Sum: '<S172>/Minus'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S172>/Increment_If_Rectangle_Check' */

      /* Sum: '<S172>/Minus' incorporates:
       *  Concatenate: '<S165>/Matrix Concatenate2'
       *  Selector: '<S172>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2;

      /* Math: '<S172>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S172>/Equal' */
      rtb_AND_g = (Code_Gen_Model_B.Spline_Num_Poses ==
                   Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S172>/Switch' incorporates:
       *  Logic: '<S172>/AND'
       *  Logic: '<S172>/OR'
       *  RelationalOperator: '<S172>/Relational Operator'
       *  UnitDelay: '<S172>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_m5 <= rtb_UnitDelay1_gi) && rtb_AND_g));

      /* If: '<S172>/If' */
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
        /* Disable for If: '<S174>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S172>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S174>/Action Port'
         */
        /* If: '<S174>/If' incorporates:
         *  RelationalOperator: '<S174>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S174>/Is_Last_Point' incorporates:
           *  ActionPort: '<S177>/Action Port'
           */
          /* InitializeConditions for If: '<S174>/If' incorporates:
           *  UnitDelay: '<S177>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S174>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S174>/Is_Last_Point' incorporates:
           *  ActionPort: '<S177>/Action Port'
           */
          /* Switch: '<S177>/Switch' incorporates:
           *  Constant: '<S179>/Constant'
           *  Logic: '<S177>/OR'
           *  RelationalOperator: '<S179>/Compare'
           *  UnitDelay: '<S177>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S177>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S177>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S180>/Action Port'
             */
            /* Merge: '<S169>/Merge2' incorporates:
             *  Constant: '<S180>/Constant'
             *  SignalConversion generated from: '<S180>/Robot_Reached_Destination'
             */
            rtb_AND_g = true;

            /* SignalConversion generated from: '<S180>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S180>/Constant1'
             */
            rtb_Is_Absolute_Steering = false;

            /* End of Outputs for SubSystem: '<S177>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S177>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S181>/Action Port'
             */
            /* Merge: '<S169>/Merge2' incorporates:
             *  Constant: '<S181>/Constant'
             *  SignalConversion generated from: '<S181>/Robot_Reached_Destination'
             */
            rtb_AND_g = false;

            /* SignalConversion generated from: '<S181>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S181>/Constant1'
             */
            rtb_Is_Absolute_Steering = true;

            /* End of Outputs for SubSystem: '<S177>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S177>/If' */

          /* Merge: '<S169>/Merge4' incorporates:
           *  SignalConversion: '<S177>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S177>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S174>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S174>/Increment_Search' incorporates:
           *  ActionPort: '<S176>/Action Port'
           */
          /* Merge: '<S169>/Merge2' incorporates:
           *  Constant: '<S176>/Constant'
           *  SignalConversion generated from: '<S176>/Robot_Reached_Destination'
           */
          rtb_AND_g = false;

          /* SignalConversion generated from: '<S176>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S176>/Constant1'
           */
          rtb_Is_Absolute_Steering = false;

          /* Merge: '<S169>/Merge4' incorporates:
           *  Constant: '<S178>/FixPt Constant'
           *  SignalConversion: '<S176>/Signal Copy'
           *  Sum: '<S178>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S174>/Increment_Search' */
        }

        /* End of If: '<S174>/If' */
        /* End of Outputs for SubSystem: '<S172>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S172>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S175>/Action Port'
         */
        /* Sum: '<S182>/FixPt Sum1' incorporates:
         *  Constant: '<S182>/FixPt Constant'
         */
        rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S175>/Selector1' incorporates:
         *  Selector: '<S165>/Selector1'
         */
        rtb_Switch1_p = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) - 1];

        /* Sum: '<S183>/Subtract' incorporates:
         *  Selector: '<S175>/Selector1'
         *  Sum: '<S183>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch1_p - rtb_Switch2_l;

        /* Selector: '<S175>/Selector1' incorporates:
         *  Selector: '<S165>/Selector1'
         */
        rtb_Switch4_g = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) + 5];

        /* Sum: '<S183>/Subtract' incorporates:
         *  Selector: '<S175>/Selector1'
         *  Sum: '<S183>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch4_g - rtb_Switch2;

        /* Math: '<S183>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S183>/Divide' */
        rtb_Switch1_m5 = rtb_Minus_n[1];

        /* UnaryMinus: '<S183>/Unary Minus' */
        rtb_Switch2_c = rtb_Minus_n[0];

        /* Product: '<S183>/Product' incorporates:
         *  Product: '<S183>/Divide'
         *  UnaryMinus: '<S183>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_m5 / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_c) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S183>/Add1' incorporates:
         *  Sum: '<S183>/Add2'
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch2_c = rtb_Switch1_p - rtb_Minus_n[0];

        /* Sum: '<S183>/Minus4' incorporates:
         *  Sum: '<S183>/Add2'
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch1_p + rtb_Minus_n[0]) - rtb_Switch2_c;

        /* Sum: '<S183>/Minus5' incorporates:
         *  Concatenate: '<S165>/Matrix Concatenate2'
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[0] - rtb_Switch2_c;

        /* Sum: '<S183>/Add' incorporates:
         *  Sum: '<S183>/Add2'
         *  Sum: '<S183>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2_l - rtb_Minus_n[0];

        /* Sum: '<S183>/Minus' incorporates:
         *  Sum: '<S183>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S183>/Dot Product' incorporates:
         *  Concatenate: '<S165>/Matrix Concatenate2'
         *  Sum: '<S183>/Minus'
         *  Sum: '<S183>/Minus1'
         *  Sum: '<S183>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* DotProduct: '<S183>/Dot Product1' incorporates:
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch2_l = rtb_Switch2_c * rtb_Switch2_c;

        /* DotProduct: '<S183>/Dot Product2' incorporates:
         *  Sum: '<S183>/Minus4'
         *  Sum: '<S183>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_p * rtb_Switch2_o;

        /* DotProduct: '<S183>/Dot Product3' incorporates:
         *  Sum: '<S183>/Minus4'
         */
        rtb_Product_ku = rtb_Switch1_p * rtb_Switch1_p;

        /* Sum: '<S183>/Add1' incorporates:
         *  Sum: '<S183>/Add2'
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch2_c = rtb_Switch4_g - rtb_Minus_n[1];

        /* Sum: '<S183>/Minus4' incorporates:
         *  Sum: '<S183>/Add2'
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch1_p = (rtb_Switch4_g + rtb_Minus_n[1]) - rtb_Switch2_c;

        /* Sum: '<S183>/Minus5' incorporates:
         *  Concatenate: '<S165>/Matrix Concatenate2'
         *  Sum: '<S183>/Minus'
         */
        rtb_Switch2_o = rtb_Reshapey[1] - rtb_Switch2_c;

        /* Sum: '<S183>/Add' incorporates:
         *  Sum: '<S183>/Add2'
         *  Sum: '<S183>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch2 - rtb_Minus_n[1];

        /* Sum: '<S183>/Minus' incorporates:
         *  Sum: '<S183>/Minus1'
         */
        rtb_Switch2_c -= rtb_Switch1_m5;

        /* DotProduct: '<S183>/Dot Product' incorporates:
         *  Concatenate: '<S165>/Matrix Concatenate2'
         *  Sum: '<S183>/Minus'
         *  Sum: '<S183>/Minus1'
         *  Sum: '<S183>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_m5) * rtb_Switch2_c;

        /* RelationalOperator: '<S184>/Compare' incorporates:
         *  Constant: '<S184>/Constant'
         */
        rtb_AND_g = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S183>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S183>/Dot Product1'
         *  Sum: '<S183>/Minus'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e <= ((rtb_Switch2_c *
          rtb_Switch2_c) + rtb_Switch2_l));

        /* DotProduct: '<S183>/Dot Product2' incorporates:
         *  Sum: '<S183>/Minus4'
         *  Sum: '<S183>/Minus5'
         */
        rtb_Init_e = (rtb_Switch1_p * rtb_Switch2_o) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S169>/Merge4' incorporates:
         *  Constant: '<S185>/Constant'
         *  DataTypeConversion: '<S175>/Data Type Conversion'
         *  DotProduct: '<S183>/Dot Product3'
         *  Logic: '<S183>/AND'
         *  RelationalOperator: '<S183>/LessThanOrEqual1'
         *  RelationalOperator: '<S185>/Compare'
         *  Sum: '<S175>/Add'
         *  Sum: '<S183>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_AND_g &&
          rtb_Is_Absolute_Steering) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <=
          ((rtb_Switch1_p * rtb_Switch1_p) + rtb_Product_ku)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S169>/Merge2' incorporates:
         *  Constant: '<S175>/Constant2'
         *  SignalConversion generated from: '<S175>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S175>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S175>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* End of Outputs for SubSystem: '<S172>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S172>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S173>/Action Port'
         */
        /* Merge: '<S169>/Merge2' incorporates:
         *  Constant: '<S173>/Constant2'
         *  SignalConversion generated from: '<S173>/Robot_Reached_Destination'
         */
        rtb_AND_g = false;

        /* SignalConversion generated from: '<S173>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S173>/Constant1'
         */
        rtb_Is_Absolute_Steering = false;

        /* Merge: '<S169>/Merge4' incorporates:
         *  SignalConversion generated from: '<S173>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S172>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S169>/Merge1' incorporates:
       *  Constant: '<S172>/Constant'
       *  SignalConversion generated from: '<S172>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S172>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S169>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S169>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S171>/Action Port'
       */
      /* Merge: '<S169>/Merge1' incorporates:
       *  Constant: '<S171>/Constant'
       *  SignalConversion generated from: '<S171>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S169>/Merge2' incorporates:
       *  Constant: '<S171>/Constant1'
       *  SignalConversion generated from: '<S171>/Robot_Reached_Destination'
       */
      rtb_AND_g = false;

      /* SignalConversion generated from: '<S171>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S171>/Constant2'
       */
      rtb_Is_Absolute_Steering = false;

      /* Merge: '<S169>/Merge4' incorporates:
       *  SignalConversion generated from: '<S171>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S169>/Escape_Auto_Driving' */
    }

    /* End of If: '<S169>/If' */

    /* If: '<S165>/If1' */
    if (!rtb_Is_Absolute_Steering) {
      /* Outputs for IfAction SubSystem: '<S165>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S170>/Action Port'
       */
      /* Bias: '<S186>/Add Constant' incorporates:
       *  Bias: '<S186>/Bias'
       *  Sum: '<S186>/Subtract'
       */
      rtb_Switch1_m5 = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S186>/Selector4' incorporates:
       *  Bias: '<S186>/Bias1'
       *  Constant: '<S188>/FixPt Constant'
       *  Sum: '<S188>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S186>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Selector: '<S186>/Selector' incorporates:
       *  Bias: '<S186>/Add Constant1'
       */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S186>/Selector4' */
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S186>/Matrix Concatenate' incorporates:
       *  Gain: '<S189>/Gain'
       *  Gain: '<S190>/Gain'
       *  Selector: '<S165>/Selector1'
       *  Selector: '<S186>/Selector'
       *  Selector: '<S186>/Selector1'
       *  Selector: '<S186>/Selector2'
       *  Selector: '<S186>/Selector3'
       *  Sum: '<S189>/Subtract'
       *  Sum: '<S190>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 6; rtb_Num_Segments++) {
        rtb_Assignment[rtb_Num_Segments + 1] = rtb_Ref_Poses[rtb_Num_Segments];
        rtb_Assignment[rtb_Num_Segments + 9] = rtb_Ref_Poses[rtb_Num_Segments +
          6];
      }

      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        /* Selector: '<S186>/Selector4' incorporates:
         *  Selector: '<S186>/Selector'
         */
        s191_iter = (rtb_Num_Segments << 3);

        /* Sum: '<S189>/Subtract' incorporates:
         *  Bias: '<S186>/Add Constant1'
         *  Selector: '<S186>/Selector'
         */
        rtb_Assignment_tmp = (6 * rtb_Num_Segments) + i;
        rtb_Assignment[s191_iter + 7] = (rtb_Ref_Poses[rtb_Assignment_tmp - 1] *
          2.0) - rtb_Ref_Poses[rtb_Assignment_tmp - 2];

        /* Selector: '<S186>/Selector4' incorporates:
         *  Gain: '<S189>/Gain'
         *  Selector: '<S186>/Selector'
         *  Selector: '<S186>/Selector1'
         *  Sum: '<S189>/Subtract'
         */
        for (rtb_Assignment_tmp = 0; rtb_Assignment_tmp <= rtb_Bias1_p;
             rtb_Assignment_tmp++) {
          rtb_Selector4[rtb_Assignment_tmp + (Code_Gen_Model_DW.Selector4_DIMS1
            [0] * rtb_Num_Segments)] = rtb_Assignment[((rtb_Assignment_tmp +
            rtb_Reshapey_0) + s191_iter) - 1];
        }
      }

      /* End of Concatenate: '<S186>/Matrix Concatenate' */

      /* Assignment: '<S186>/Assignment' incorporates:
       *  Selector: '<S186>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s191_iter = 0; s191_iter < rtb_Bias1_p; s191_iter++) {
          rtb_Assignment[s191_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s191_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S186>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S187>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S191>/While Iterator'
       */
      s191_iter = 1;
      do {
        rtb_Switch2_c = rtb_Assignment[s191_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_c - rtb_Assignment[s191_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s191_iter] - rtb_Assignment[s191_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_c - rtb_Assignment[s191_iter];
        rtb_Switch2_c = rtb_Assignment[s191_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_c - rtb_Assignment[s191_iter + 7];
        rtb_Switch2_l = rtb_Assignment[s191_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_l - rtb_Assignment[s191_iter + 10];
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
            rtb_Switch2_o)) + rtb_Assignment[s191_iter];
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

        if (s191_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s191_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_m5 - ((real_T)s191_iter);
        rtb_Num_Segments = s191_iter;
        s191_iter++;
      } while ((rtb_Init_e >= 4.0) && (s191_iter <= 3));

      /* End of Outputs for SubSystem: '<S187>/Sampling_Loop' */

      /* SignalConversion generated from: '<S170>/Position_and_Curvature' incorporates:
       *  Assignment: '<S191>/Assignment'
       *  Merge: '<S165>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S165>/Make_Knots_and_Path_Planning' */
    } else {
      /* Selector: '<S165>/Selector' */
      i = (int32_T)Code_Gen_Model_B.Spline_Num_Poses;

      /* Outputs for IfAction SubSystem: '<S165>/If Action Subsystem' incorporates:
       *  ActionPort: '<S168>/Action Port'
       */
      /* Product: '<S168>/Product' incorporates:
       *  Selector: '<S165>/Selector'
       *  Selector: '<S165>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[i - 1];

      /* Product: '<S168>/Product1' incorporates:
       *  Selector: '<S165>/Selector'
       *  Selector: '<S165>/Selector1'
       */
      rtb_Switch1_m5 = rtb_Ref_Poses[i + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S168>/Product' incorporates:
         *  Constant: '<S168>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S168>/Product1' incorporates:
         *  Constant: '<S168>/Constant2'
         *  Product: '<S168>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_m5;
      }

      /* Assignment: '<S168>/Assignment' incorporates:
       *  Concatenate: '<S168>/Matrix Concatenate'
       *  Merge: '<S165>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S168>/Assignment' */

      /* SignalConversion generated from: '<S168>/Num_Segments' incorporates:
       *  Constant: '<S168>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S165>/If Action Subsystem' */
    }

    /* End of If: '<S165>/If1' */

    /* Concatenate: '<S166>/Matrix Concatenate' incorporates:
     *  Merge: '<S165>/Merge'
     *  Selector: '<S166>/Selector'
     *  Selector: '<S166>/Selector1'
     *  Selector: '<S166>/Selector3'
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

    /* End of Concatenate: '<S166>/Matrix Concatenate' */

    /* MATLAB Function: '<S166>/Distance Along Curve' incorporates:
     *  Concatenate: '<S166>/Matrix Concatenate'
     *  Selector: '<S166>/Selector4'
     *  Selector: '<S166>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s191_iter = 0; s191_iter < 149; s191_iter++) {
      /* Outputs for Iterator SubSystem: '<S187>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S191>/While Iterator'
       */
      rtb_Assignment_d[s191_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s191_iter + 1] -
         rtb_MatrixConcatenate_o[s191_iter], rtb_MatrixConcatenate_o[s191_iter +
         151] - rtb_MatrixConcatenate_o[s191_iter + 150]) +
        rtb_Assignment_d[s191_iter];

      /* End of Outputs for SubSystem: '<S187>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S166>/Distance Along Curve' */

    /* MATLAB Function: '<S166>/Find closest index to curve' incorporates:
     *  Concatenate: '<S166>/Matrix Concatenate'
     *  Selector: '<S166>/Selector4'
     *  Selector: '<S166>/Selector5'
     *  Selector: '<S217>/Selector'
     */
    for (s191_iter = 0; s191_iter < 150; s191_iter++) {
      /* Outputs for Iterator SubSystem: '<S187>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S191>/While Iterator'
       */
      distance_from_robot[s191_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s191_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s191_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S187>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s191_iter = 1;
    } else {
      s191_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s191_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s191_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s191_iter - 1];
      for (rtb_Bias1_p = s191_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_m5 > rtb_Init_e) {
          rtb_Switch1_m5 = rtb_Init_e;
        }
      }
    }

    s191_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s191_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S217>/Selector' incorporates:
     *  Constant: '<S217>/Constant'
     *  MATLAB Function: '<S166>/Find closest index to curve'
     *  MinMax: '<S217>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s191_iter)) - 1];

    /* If: '<S217>/If' incorporates:
     *  RelationalOperator: '<S217>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S217>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S220>/Action Port'
       */
      /* SignalConversion generated from: '<S220>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S222>/FixPt Sum1' incorporates:
       *  Constant: '<S222>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S220>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S220>/Selector11'
       *  Selector: '<S220>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S220>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S10>/Merge8'
       *  Selector: '<S220>/Selector1'
       *  Selector: '<S220>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S220>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S220>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S220>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S220>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S220>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S217>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S217>/Latch' incorporates:
       *  ActionPort: '<S221>/Action Port'
       */
      /* SignalConversion generated from: '<S221>/In1' incorporates:
       *  UnitDelay: '<S217>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S221>/In2' incorporates:
       *  UnitDelay: '<S217>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S217>/Latch' */
    }

    /* End of If: '<S217>/If' */

    /* MinMax: '<S164>/Min' incorporates:
     *  Lookup_n-D: '<S164>/Lookahead Distance'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S166>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S216>/While Iterator'
     */
    s216_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s216_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S166>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S216>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s216_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s191_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s216_iter++;
    }

    /* End of Outputs for SubSystem: '<S166>/Find first index that meets distance target' */

    /* Switch: '<S219>/Switch' incorporates:
     *  Concatenate: '<S166>/Matrix Concatenate'
     *  Constant: '<S166>/Constant'
     *  Constant: '<S216>/Constant'
     *  Constant: '<S219>/Constant1'
     *  Constant: '<S219>/Constant2'
     *  Constant: '<S219>/Constant3'
     *  Logic: '<S216>/AND'
     *  MATLAB Function: '<S166>/Find closest index to curve'
     *  Math: '<S219>/Hypot'
     *  Merge: '<S10>/Merge8'
     *  MinMax: '<S219>/Min'
     *  MinMax: '<S219>/Min1'
     *  Product: '<S216>/Product'
     *  Product: '<S219>/Divide'
     *  Product: '<S219>/Product'
     *  Product: '<S219>/Product1'
     *  RelationalOperator: '<S166>/Relational Operator'
     *  RelationalOperator: '<S216>/Relational Operator'
     *  RelationalOperator: '<S216>/Relational Operator1'
     *  Selector: '<S166>/Selector10'
     *  Selector: '<S166>/Selector7'
     *  Selector: '<S166>/Selector8'
     *  Selector: '<S166>/Selector9'
     *  Selector: '<S216>/Selector'
     *  Selector: '<S216>/Selector1'
     *  Selector: '<S217>/Selector'
     *  Sqrt: '<S219>/Sqrt'
     *  Sum: '<S166>/Subtract'
     *  Sum: '<S216>/Add'
     *  Sum: '<S219>/Subtract'
     *  Sum: '<S219>/Subtract1'
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

    /* End of Switch: '<S219>/Switch' */

    /* Logic: '<S167>/OR' */
    rtb_Is_Absolute_Steering = (rtb_AND_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S167>/Switch1' incorporates:
     *  Switch: '<S167>/Switch'
     *  UnitDelay: '<S167>/Unit Delay'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Merge: '<S13>/Merge2' incorporates:
       *  Constant: '<S167>/Constant3'
       *  SignalConversion: '<S167>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S13>/Merge2' incorporates:
       *  SignalConversion: '<S167>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S167>/Switch1' */

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion: '<S167>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S166>/Selector6' incorporates:
     *  Concatenate: '<S166>/Matrix Concatenate'
     *  Selector: '<S166>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S166>/Selector2' incorporates:
     *  Concatenate: '<S166>/Matrix Concatenate'
     *  Selector: '<S166>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S167>/Switch2' incorporates:
     *  Sum: '<S223>/Subtract'
     *  Sum: '<S223>/Subtract1'
     *  Trigonometry: '<S223>/Atan2'
     *  UnitDelay: '<S167>/Unit Delay1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2 = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S167>/Switch2' */

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion: '<S167>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2;

    /* Merge: '<S13>/Merge7' incorporates:
     *  SignalConversion: '<S164>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_AND_g;

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S167>/Constant2'
     *  SignalConversion generated from: '<S164>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S167>/Constant5'
     *  SignalConversion generated from: '<S164>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S13>/Merge5' incorporates:
     *  Constant: '<S167>/Constant6'
     *  SignalConversion generated from: '<S164>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S13>/Merge6' incorporates:
     *  Constant: '<S167>/Constant1'
     *  SignalConversion generated from: '<S164>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S165>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S217>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S167>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S167>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S13>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/Pass Through' incorporates:
     *  ActionPort: '<S163>/Action Port'
     */
    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S163>/Constant'
     *  SignalConversion generated from: '<S163>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S13>/Merge' incorporates:
     *  SignalConversion generated from: '<S163>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion generated from: '<S163>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion generated from: '<S163>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S13>/Merge3' incorporates:
     *  SignalConversion generated from: '<S163>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S163>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S13>/Merge5' incorporates:
     *  SignalConversion generated from: '<S163>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S13>/Merge6' incorporates:
     *  SignalConversion generated from: '<S163>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S13>/Pass Through' */
  }

  /* End of If: '<S13>/If' */

  /* Signum: '<S317>/Sign2' incorporates:
   *  UnitDelay: '<S317>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S317>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S317>/Product1' incorporates:
   *  Signum: '<S317>/Sign1'
   *  Signum: '<S317>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S317>/Switch' incorporates:
   *  Constant: '<S317>/Constant'
   *  Constant: '<S322>/Constant'
   *  Constant: '<S323>/Constant'
   *  Logic: '<S317>/or'
   *  Product: '<S317>/Product1'
   *  RelationalOperator: '<S322>/Compare'
   *  RelationalOperator: '<S323>/Compare'
   *  UnitDelay: '<S317>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_c = 0.0;
  }

  /* End of Switch: '<S317>/Switch' */

  /* Switch: '<S328>/Init' incorporates:
   *  UnitDelay: '<S328>/FixPt Unit Delay1'
   *  UnitDelay: '<S328>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_c;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S328>/Init' */

  /* RelationalOperator: '<S324>/Compare' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* RelationalOperator: '<S325>/Compare' incorporates:
   *  Constant: '<S325>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_c > 0.0);

  /* Abs: '<S317>/Abs' incorporates:
   *  Sum: '<S317>/Subtract'
   *  UnitDelay: '<S317>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S317>/Switch5' incorporates:
   *  Constant: '<S317>/Constant1'
   *  Switch: '<S317>/Switch1'
   *  UnaryMinus: '<S317>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S317>/Constant4'
     *  Constant: '<S317>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S317>/Constant2'
     *  Constant: '<S317>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S317>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S317>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S317>/Constant10'
     *  Constant: '<S317>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S317>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S317>/Constant7'
     *  Constant: '<S317>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S317>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S317>/Lookup Table Dynamic1'
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

    /* Switch: '<S317>/Switch3' incorporates:
     *  Constant: '<S317>/Constant1'
     *  Constant: '<S317>/Constant3'
     *  UnaryMinus: '<S317>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S317>/Switch3' */
  }

  /* End of Switch: '<S317>/Switch5' */

  /* Product: '<S317>/Product' incorporates:
   *  Switch: '<S317>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Switch1_b4 * rtb_Merge1;

  /* Sum: '<S326>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_c - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S327>/Switch2' incorporates:
   *  RelationalOperator: '<S327>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S317>/Switch2' incorporates:
     *  Constant: '<S317>/Constant1'
     *  Switch: '<S317>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S317>/Switch4' incorporates:
       *  Constant: '<S317>/Constant1'
       */
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S317>/Switch4' incorporates:
       *  Constant: '<S317>/Constant3'
       *  UnaryMinus: '<S317>/Unary Minus1'
       */
      rtb_Switch1_m5 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S317>/Switch2' */

    /* Product: '<S317>/Product2' */
    rtb_Switch1_m5 *= rtb_Merge1;

    /* Switch: '<S327>/Switch' incorporates:
     *  RelationalOperator: '<S327>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_m5) {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S327>/Switch' */
  }

  /* End of Switch: '<S327>/Switch2' */

  /* Sum: '<S326>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S320>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S344>/Constant3'
     *  Constant: '<S344>/Constant4'
     *  Math: '<S344>/Math Function'
     *  Sum: '<S320>/Subtract'
     *  Sum: '<S344>/Add1'
     *  Sum: '<S344>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_Switch1_nj) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S320>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S320>/Switch' */

  /* Sum: '<S340>/Add1' incorporates:
   *  Constant: '<S340>/Constant3'
   *  Constant: '<S340>/Constant4'
   *  Math: '<S340>/Math Function'
   *  Sum: '<S319>/Add'
   *  Sum: '<S339>/Sum'
   *  Sum: '<S340>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_Switch1_nj +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S342>/Sum1' incorporates:
   *  Constant: '<S339>/Constant2'
   *  Product: '<S342>/Product'
   *  Sum: '<S342>/Sum'
   *  UnitDelay: '<S342>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S339>/Product' incorporates:
   *  Constant: '<S339>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

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
  cos_alpha = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S339>/Saturation' */
  if (cos_alpha > Steering_Heading_Control_D_UL) {
    cos_alpha = Steering_Heading_Control_D_UL;
  } else if (cos_alpha < Steering_Heading_Control_D_LL) {
    cos_alpha = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S339>/Add' incorporates:
   *  Gain: '<S339>/Gain1'
   *  Saturate: '<S339>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    cos_alpha;

  /* Sum: '<S339>/Subtract' incorporates:
   *  Constant: '<S339>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S339>/Sum2' incorporates:
   *  Gain: '<S339>/Gain2'
   *  UnitDelay: '<S339>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S343>/Switch2' incorporates:
   *  RelationalOperator: '<S343>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_uDLookupTable_l)) {
    /* Sum: '<S339>/Subtract1' incorporates:
     *  Constant: '<S339>/Constant1'
     */
    rtb_Switch2 = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S343>/Switch' incorporates:
     *  RelationalOperator: '<S343>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch2) {
      rtb_uDLookupTable_l = rtb_Switch2;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    }

    /* End of Switch: '<S343>/Switch' */
  }

  /* End of Switch: '<S343>/Switch2' */

  /* Saturate: '<S339>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S339>/Saturation1' */

  /* Sum: '<S339>/Add1' */
  cos_alpha = rtb_Init_e + rtb_Switch1_m5;

  /* Saturate: '<S339>/Saturation2' */
  if (cos_alpha > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S339>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (cos_alpha < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S339>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S339>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = cos_alpha;
  }

  /* End of Saturate: '<S339>/Saturation2' */

  /* Switch: '<S319>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S330>/Switch' incorporates:
     *  Abs: '<S330>/Abs'
     *  Constant: '<S330>/Constant'
     *  Constant: '<S338>/Constant'
     *  RelationalOperator: '<S338>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S330>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S319>/Switch' */

  /* Signum: '<S329>/Sign2' incorporates:
   *  UnitDelay: '<S329>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S329>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S329>/Product1' incorporates:
   *  Signum: '<S329>/Sign1'
   *  Signum: '<S329>/Sign2'
   */
  rtb_Switch1_b4 *= rtb_Add_ie;
  if (rtIsNaN(rtb_Switch1_b4)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Switch1_b4, 256.0);
  }

  /* Switch: '<S329>/Switch' incorporates:
   *  Constant: '<S329>/Constant'
   *  Constant: '<S331>/Constant'
   *  Constant: '<S332>/Constant'
   *  Logic: '<S329>/or'
   *  Product: '<S329>/Product1'
   *  RelationalOperator: '<S331>/Compare'
   *  RelationalOperator: '<S332>/Compare'
   *  UnitDelay: '<S329>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch4_g = 0.0;
  }

  /* End of Switch: '<S329>/Switch' */

  /* Switch: '<S337>/Init' incorporates:
   *  UnitDelay: '<S337>/FixPt Unit Delay1'
   *  UnitDelay: '<S337>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch4_g;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S337>/Init' */

  /* RelationalOperator: '<S333>/Compare' incorporates:
   *  Constant: '<S333>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch4_g == 0.0);

  /* RelationalOperator: '<S334>/Compare' incorporates:
   *  Constant: '<S334>/Constant'
   */
  rtb_AND_g = (rtb_Switch4_g > 0.0);

  /* Abs: '<S329>/Abs' incorporates:
   *  Sum: '<S329>/Subtract'
   *  UnitDelay: '<S329>/Unit Delay'
   */
  rtb_Switch1_p = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                       rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S329>/Switch5' incorporates:
   *  Constant: '<S329>/Constant1'
   *  Switch: '<S329>/Switch1'
   *  UnaryMinus: '<S329>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S329>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S329>/Constant4'
     *  Constant: '<S329>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S329>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S329>/Constant2'
     *  Constant: '<S329>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S329>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S329>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S329>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S329>/Constant10'
     *  Constant: '<S329>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S329>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S329>/Constant7'
     *  Constant: '<S329>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S329>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S329>/Lookup Table Dynamic1'
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

    /* Switch: '<S329>/Switch3' incorporates:
     *  Constant: '<S329>/Constant1'
     *  Constant: '<S329>/Constant3'
     *  UnaryMinus: '<S329>/Unary Minus'
     */
    if (rtb_AND_g) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S329>/Switch3' */
  }

  /* End of Switch: '<S329>/Switch5' */

  /* Product: '<S329>/Product' incorporates:
   *  Switch: '<S329>/Switch1'
   */
  rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

  /* Sum: '<S335>/Sum1' */
  rtb_Switch4_g -= rtb_Init_e;

  /* Switch: '<S336>/Switch2' incorporates:
   *  RelationalOperator: '<S336>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_Switch2)) {
    /* Switch: '<S329>/Switch2' incorporates:
     *  Constant: '<S329>/Constant1'
     *  Constant: '<S329>/Constant3'
     *  Switch: '<S329>/Switch4'
     *  UnaryMinus: '<S329>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_AND_g) {
      /* Switch: '<S329>/Switch4' incorporates:
       *  Constant: '<S329>/Constant1'
       */
      rtb_Switch1_b4 = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Switch1_b4 = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S329>/Product2' incorporates:
     *  Switch: '<S329>/Switch2'
     */
    rtb_Switch2 = rtb_Switch1_b4 * rtb_Switch1_p;

    /* Switch: '<S336>/Switch' incorporates:
     *  RelationalOperator: '<S336>/UpperRelop'
     */
    if (!(rtb_Switch4_g < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4_g;
    }

    /* End of Switch: '<S336>/Switch' */
  }

  /* End of Switch: '<S336>/Switch2' */

  /* Sum: '<S335>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2 + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S232>/Initialize Function' */
  /* Sum: '<S318>/Add' incorporates:
   *  Constant: '<S318>/Constant'
   *  Constant: '<S318>/Constant4'
   *  Constant: '<S318>/Constant5'
   *  Trigonometry: '<S318>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S232>/Initialize Function' */

  /* Fcn: '<S352>/r->x' incorporates:
   *  Fcn: '<S357>/r->x'
   *  Fcn: '<S362>/r->x'
   *  Fcn: '<S367>/r->x'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S346>/Add' incorporates:
   *  Fcn: '<S352>/r->x'
   *  Fcn: '<S353>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_c;

  /* Fcn: '<S352>/theta->y' incorporates:
   *  Fcn: '<S357>/theta->y'
   *  Fcn: '<S362>/theta->y'
   *  Fcn: '<S367>/theta->y'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S346>/Add' incorporates:
   *  Fcn: '<S352>/theta->y'
   *  Fcn: '<S353>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_l;

  /* Sum: '<S347>/Add' incorporates:
   *  Fcn: '<S358>/r->x'
   *  Fcn: '<S358>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S348>/Add' incorporates:
   *  Fcn: '<S363>/r->x'
   *  Fcn: '<S363>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_l;

  /* Sum: '<S349>/Add' incorporates:
   *  Fcn: '<S368>/r->x'
   *  Fcn: '<S368>/theta->y'
   */
  rtb_Switch2_o = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_l;

  /* Fcn: '<S366>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Switch2_o, rtb_Init_e);

  /* RelationalOperator: '<S369>/Compare' incorporates:
   *  Constant: '<S369>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_l == 0.0);

  /* Switch: '<S365>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S365>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S365>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_l;
  }

  /* End of Switch: '<S365>/Switch1' */

  /* Fcn: '<S351>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  rtb_AND_g = (rtb_Switch2_l == 0.0);

  /* Switch: '<S350>/Switch1' */
  if (rtb_AND_g) {
    /* Switch: '<S350>/Switch1' incorporates:
     *  Constant: '<S350>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S350>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_l;
  }

  /* End of Switch: '<S350>/Switch1' */

  /* Fcn: '<S356>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c == 0.0);

  /* Switch: '<S355>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S355>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S355>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_c;
  }

  /* End of Switch: '<S355>/Switch1' */

  /* Fcn: '<S361>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S360>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S360>/Switch1' incorporates:
     *  Constant: '<S360>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S360>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S360>/Switch1' */

  /* Product: '<S345>/Divide' incorporates:
   *  Abs: '<S345>/Abs'
   *  Abs: '<S345>/Abs1'
   *  Abs: '<S345>/Abs2'
   *  Abs: '<S345>/Abs3'
   *  Constant: '<S345>/Constant'
   *  MinMax: '<S345>/Max'
   */
  rtb_Switch2_l = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S345>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_l;

  /* Switch: '<S365>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S365>/Switch' incorporates:
     *  Fcn: '<S366>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Switch2_o);
  }

  /* End of Switch: '<S365>/Switch' */

  /* Trigonometry: '<S309>/Cos4' incorporates:
   *  Switch: '<S298>/Angle_Switch'
   *  Trigonometry: '<S308>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S309>/Sin5' incorporates:
   *  UnaryMinus: '<S307>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S309>/Sin4' incorporates:
   *  Switch: '<S298>/Angle_Switch'
   *  Trigonometry: '<S308>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S309>/Cos5' incorporates:
   *  UnaryMinus: '<S307>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S309>/Subtract1' incorporates:
   *  Product: '<S309>/Product2'
   *  Product: '<S309>/Product3'
   *  Trigonometry: '<S309>/Cos4'
   *  Trigonometry: '<S309>/Sin4'
   */
  rtb_Init_e = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S309>/Subtract' incorporates:
   *  Product: '<S309>/Product'
   *  Product: '<S309>/Product1'
   *  Trigonometry: '<S309>/Cos4'
   *  Trigonometry: '<S309>/Sin4'
   */
  rtb_Switch2 = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract1_m4
    * rtb_uDLookupTable_l);

  /* Math: '<S309>/Hypot' */
  rtb_Switch4_g = rt_hypotd_snf(rtb_Switch2, rtb_Init_e);

  /* Switch: '<S309>/Switch' incorporates:
   *  Constant: '<S309>/Constant'
   *  Constant: '<S309>/Constant1'
   *  Constant: '<S310>/Constant'
   *  Product: '<S309>/Divide'
   *  Product: '<S309>/Divide1'
   *  RelationalOperator: '<S310>/Compare'
   *  Switch: '<S309>/Switch1'
   */
  if (rtb_Switch4_g > 1.0E-6) {
    rtb_Switch2_c = rtb_Init_e / rtb_Switch4_g;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2 / rtb_Switch4_g;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S309>/Switch' */

  /* Switch: '<S298>/Speed_Switch' incorporates:
   *  Abs: '<S298>/Abs'
   *  Constant: '<S306>/Constant'
   *  RelationalOperator: '<S306>/Compare'
   *  Switch: '<S298>/Angle_Switch'
   *  Trigonometry: '<S308>/Atan1'
   *  Trigonometry: '<S309>/Atan1'
   *  UnaryMinus: '<S298>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S308>/Subtract1' incorporates:
     *  Product: '<S308>/Product2'
     *  Product: '<S308>/Product3'
     *  UnaryMinus: '<S298>/Unary Minus'
     */
    rtb_Init_e = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S308>/Subtract' incorporates:
     *  Product: '<S308>/Product'
     *  Product: '<S308>/Product1'
     */
    rtb_Switch4_g = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S308>/Hypot' */
    rtb_Switch2 = rt_hypotd_snf(rtb_Switch4_g, rtb_Init_e);

    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S308>/Constant'
     *  Constant: '<S308>/Constant1'
     *  Constant: '<S311>/Constant'
     *  Product: '<S308>/Divide'
     *  Product: '<S308>/Divide1'
     *  RelationalOperator: '<S311>/Compare'
     *  Switch: '<S308>/Switch'
     */
    if (rtb_Switch2 > 1.0E-6) {
      rtb_Switch4_g /= rtb_Switch2;
      rtb_Init_e /= rtb_Switch2;
    } else {
      rtb_Switch4_g = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S308>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch4_g);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S301>/Product2' incorporates:
   *  Constant: '<S301>/Constant'
   *  Switch: '<S298>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S296>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S296>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S299>/Add' incorporates:
   *  Sum: '<S300>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S231>/Product' incorporates:
   *  Abs: '<S296>/Abs'
   *  Abs: '<S299>/Abs'
   *  Constant: '<S302>/Constant'
   *  Constant: '<S312>/Constant3'
   *  Constant: '<S312>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S296>/OR'
   *  Lookup_n-D: '<S299>/1-D Lookup Table'
   *  Math: '<S312>/Math Function'
   *  RelationalOperator: '<S296>/Equal1'
   *  RelationalOperator: '<S302>/Compare'
   *  Signum: '<S296>/Sign'
   *  Signum: '<S296>/Sign1'
   *  Sum: '<S299>/Add'
   *  Sum: '<S312>/Add1'
   *  Sum: '<S312>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S297>/Gain' */
  rtb_Switch4_g = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S297>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S304>/Sum1' incorporates:
   *  Constant: '<S297>/Constant2'
   *  Product: '<S304>/Product'
   *  Sum: '<S304>/Sum'
   *  UnitDelay: '<S304>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S297>/Product' incorporates:
   *  Constant: '<S297>/Constant3'
   */
  rtb_Switch2 = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S303>/Diff' incorporates:
   *  UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Switch2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S297>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S297>/Add' incorporates:
   *  Gain: '<S297>/Gain1'
   *  Saturate: '<S297>/Saturation'
   */
  rtb_Switch1_p = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch4_g) +
    cos_alpha;

  /* Sum: '<S297>/Subtract' incorporates:
   *  Constant: '<S297>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Switch1_p;

  /* Sum: '<S297>/Sum2' incorporates:
   *  Gain: '<S297>/Gain2'
   *  UnitDelay: '<S297>/Unit Delay'
   */
  rtb_Switch4_g = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S305>/Switch2' incorporates:
   *  Constant: '<S297>/Constant'
   *  RelationalOperator: '<S305>/LowerRelop1'
   *  Sum: '<S297>/Subtract'
   */
  if (!(rtb_Switch4_g > (1.0 - rtb_Switch1_p))) {
    /* Switch: '<S305>/Switch' incorporates:
     *  Constant: '<S297>/Constant1'
     *  RelationalOperator: '<S305>/UpperRelop'
     *  Sum: '<S297>/Subtract1'
     */
    if (rtb_Switch4_g < (-1.0 - rtb_Switch1_p)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Switch1_p;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch4_g;
    }

    /* End of Switch: '<S305>/Switch' */
  }

  /* End of Switch: '<S305>/Switch2' */

  /* Saturate: '<S297>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch4_g = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch4_g = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch4_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S297>/Saturation1' */

  /* Sum: '<S297>/Add1' */
  cos_alpha = rtb_Switch1_p + rtb_Switch4_g;

  /* Saturate: '<S297>/Saturation2' */
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

  /* End of Saturate: '<S297>/Saturation2' */

  /* Sum: '<S313>/Add1' incorporates:
   *  Constant: '<S313>/Constant3'
   *  Constant: '<S313>/Constant4'
   *  Math: '<S313>/Math Function'
   *  Sum: '<S313>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S315>/Sum1' incorporates:
   *  Constant: '<S300>/Constant2'
   *  Product: '<S315>/Product'
   *  Sum: '<S315>/Sum'
   *  UnitDelay: '<S315>/Unit Delay1'
   */
  rtb_Switch1_p = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S300>/Product' incorporates:
   *  Constant: '<S300>/Constant3'
   */
  rtb_Switch2_o = rtb_Switch1_p * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Switch2_o - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S300>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S300>/Add' incorporates:
   *  Gain: '<S300>/Gain1'
   *  Saturate: '<S300>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S300>/Subtract' incorporates:
   *  Constant: '<S300>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S300>/Sum2' incorporates:
   *  Gain: '<S300>/Gain2'
   *  UnitDelay: '<S300>/Unit Delay'
   */
  rtb_Product_ku = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S316>/Switch2' incorporates:
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S316>/LowerRelop1'
   *  Sum: '<S300>/Subtract'
   */
  if (!(rtb_Product_ku > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S316>/Switch' incorporates:
     *  Constant: '<S300>/Constant1'
     *  RelationalOperator: '<S316>/UpperRelop'
     *  Sum: '<S300>/Subtract1'
     */
    if (rtb_Product_ku < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku;
    }

    /* End of Switch: '<S316>/Switch' */
  }

  /* End of Switch: '<S316>/Switch2' */

  /* Saturate: '<S300>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Product_ku = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Product_ku = Steering_Motor_Control_I_LL;
  } else {
    rtb_Product_ku = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S300>/Saturation1' */

  /* Sum: '<S300>/Add1' */
  cos_alpha = rtb_Add_pw + rtb_Product_ku;

  /* Saturate: '<S300>/Saturation2' */
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

  /* End of Saturate: '<S300>/Saturation2' */

  /* Product: '<S345>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_l;

  /* Switch: '<S350>/Switch' */
  if (!rtb_AND_g) {
    /* Switch: '<S350>/Switch' incorporates:
     *  Fcn: '<S351>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S350>/Switch' */

  /* Trigonometry: '<S246>/Cos4' incorporates:
   *  Switch: '<S235>/Angle_Switch'
   *  Trigonometry: '<S245>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S246>/Sin5' incorporates:
   *  UnaryMinus: '<S244>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S246>/Sin4' incorporates:
   *  Switch: '<S235>/Angle_Switch'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S246>/Cos5' incorporates:
   *  UnaryMinus: '<S244>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S246>/Subtract1' incorporates:
   *  Product: '<S246>/Product2'
   *  Product: '<S246>/Product3'
   *  Trigonometry: '<S246>/Cos4'
   *  Trigonometry: '<S246>/Sin4'
   */
  rtb_Add_pw = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S246>/Subtract' incorporates:
   *  Product: '<S246>/Product'
   *  Product: '<S246>/Product1'
   *  Trigonometry: '<S246>/Cos4'
   *  Trigonometry: '<S246>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S246>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S246>/Switch' incorporates:
   *  Constant: '<S246>/Constant'
   *  Constant: '<S246>/Constant1'
   *  Constant: '<S247>/Constant'
   *  Product: '<S246>/Divide'
   *  Product: '<S246>/Divide1'
   *  RelationalOperator: '<S247>/Compare'
   *  Switch: '<S246>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_c = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S245>/Subtract1' incorporates:
     *  Product: '<S245>/Product2'
     *  Product: '<S245>/Product3'
     *  UnaryMinus: '<S235>/Unary Minus'
     */
    rtb_Add_pw = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5) + (rtb_Subtract1_m4 *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S245>/Subtract' incorporates:
     *  Product: '<S245>/Product'
     *  Product: '<S245>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract1_m4
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S245>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S245>/Switch1' incorporates:
     *  Constant: '<S245>/Constant'
     *  Constant: '<S245>/Constant1'
     *  Constant: '<S248>/Constant'
     *  Product: '<S245>/Divide'
     *  Product: '<S245>/Divide1'
     *  RelationalOperator: '<S248>/Compare'
     *  Switch: '<S245>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S245>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S238>/Product2' incorporates:
   *  Constant: '<S238>/Constant'
   *  Switch: '<S235>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S233>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S233>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Sum: '<S237>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S228>/Product' incorporates:
   *  Abs: '<S233>/Abs'
   *  Abs: '<S236>/Abs'
   *  Constant: '<S239>/Constant'
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
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
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S234>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S234>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S241>/Sum1' incorporates:
   *  Constant: '<S234>/Constant2'
   *  Product: '<S241>/Product'
   *  Sum: '<S241>/Sum'
   *  UnitDelay: '<S241>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S234>/Product' incorporates:
   *  Constant: '<S234>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S234>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S234>/Add' incorporates:
   *  Gain: '<S234>/Gain1'
   *  Saturate: '<S234>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Hypot_g5) +
    cos_alpha;

  /* Sum: '<S234>/Subtract' incorporates:
   *  Constant: '<S234>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S234>/Sum2' incorporates:
   *  Gain: '<S234>/Gain2'
   *  UnitDelay: '<S234>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S242>/Switch2' incorporates:
   *  Constant: '<S234>/Constant'
   *  RelationalOperator: '<S242>/LowerRelop1'
   *  Sum: '<S234>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S234>/Constant1'
     *  RelationalOperator: '<S242>/UpperRelop'
     *  Sum: '<S234>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S242>/Switch' */
  }

  /* End of Switch: '<S242>/Switch2' */

  /* Saturate: '<S234>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S234>/Saturation1' */

  /* Sum: '<S234>/Add1' */
  cos_alpha = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S234>/Saturation2' */
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

  /* End of Saturate: '<S234>/Saturation2' */

  /* Sum: '<S250>/Add1' incorporates:
   *  Constant: '<S250>/Constant3'
   *  Constant: '<S250>/Constant4'
   *  Math: '<S250>/Math Function'
   *  Sum: '<S250>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S252>/Sum1' incorporates:
   *  Constant: '<S237>/Constant2'
   *  Product: '<S252>/Product'
   *  Sum: '<S252>/Sum'
   *  UnitDelay: '<S252>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S237>/Product' incorporates:
   *  Constant: '<S237>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S237>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S237>/Add' incorporates:
   *  Gain: '<S237>/Gain1'
   *  Saturate: '<S237>/Saturation'
   */
  rtb_Add_kl = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S237>/Subtract' incorporates:
   *  Constant: '<S237>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_kl;

  /* Sum: '<S237>/Sum2' incorporates:
   *  Gain: '<S237>/Gain2'
   *  UnitDelay: '<S237>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S253>/Switch2' incorporates:
   *  Constant: '<S237>/Constant'
   *  RelationalOperator: '<S253>/LowerRelop1'
   *  Sum: '<S237>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Add_kl))) {
    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S237>/Constant1'
     *  RelationalOperator: '<S253>/UpperRelop'
     *  Sum: '<S237>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_kl)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_kl;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_e;
    }

    /* End of Switch: '<S253>/Switch' */
  }

  /* End of Switch: '<S253>/Switch2' */

  /* Saturate: '<S237>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S237>/Saturation1' */

  /* Sum: '<S237>/Add1' */
  cos_alpha = rtb_Add_kl + rtb_Sum2_e;

  /* Saturate: '<S237>/Saturation2' */
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

  /* End of Saturate: '<S237>/Saturation2' */

  /* Product: '<S345>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_l;

  /* Switch: '<S355>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S355>/Switch' incorporates:
     *  Fcn: '<S356>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S355>/Switch' */

  /* Trigonometry: '<S267>/Cos4' incorporates:
   *  Switch: '<S256>/Angle_Switch'
   *  Trigonometry: '<S266>/Cos4'
   */
  rtb_Add_kl = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S267>/Sin5' incorporates:
   *  UnaryMinus: '<S265>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S267>/Sin4' incorporates:
   *  Switch: '<S256>/Angle_Switch'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Subtract1_m4 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S267>/Cos5' incorporates:
   *  UnaryMinus: '<S265>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S267>/Subtract1' incorporates:
   *  Product: '<S267>/Product2'
   *  Product: '<S267>/Product3'
   *  Trigonometry: '<S267>/Cos4'
   *  Trigonometry: '<S267>/Sin4'
   */
  rtb_Subtract1_dk = (rtb_Add_kl * rtb_uDLookupTable_l) + (rtb_Subtract1_m4 *
    rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S267>/Subtract' incorporates:
   *  Product: '<S267>/Product'
   *  Product: '<S267>/Product1'
   *  Trigonometry: '<S267>/Cos4'
   *  Trigonometry: '<S267>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Add_kl * rtb_MatrixConcatenate_b_idx_0) -
    (rtb_Subtract1_m4 * rtb_uDLookupTable_l);

  /* Math: '<S267>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract1_dk);

  /* Switch: '<S267>/Switch' incorporates:
   *  Constant: '<S267>/Constant'
   *  Constant: '<S267>/Constant1'
   *  Constant: '<S268>/Constant'
   *  Product: '<S267>/Divide'
   *  Product: '<S267>/Divide1'
   *  RelationalOperator: '<S268>/Compare'
   *  Switch: '<S267>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_c = rtb_Subtract1_dk / rtb_Hypot_b;
    rtb_MatrixConcatenate_b_idx_0 = rtb_uDLookupTable_l / rtb_Hypot_b;
  } else {
    rtb_Switch2_c = 0.0;
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
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S266>/Subtract1' incorporates:
     *  Product: '<S266>/Product2'
     *  Product: '<S266>/Product3'
     *  UnaryMinus: '<S256>/Unary Minus'
     */
    rtb_Subtract1_dk = (rtb_Add_kl * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S266>/Subtract' incorporates:
     *  Product: '<S266>/Product'
     *  Product: '<S266>/Product1'
     */
    rtb_Subtract1_m4 = (rtb_Add_kl * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_m4 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S266>/Hypot' */
    rtb_Add_kl = rt_hypotd_snf(rtb_Subtract1_m4, rtb_Subtract1_dk);

    /* Switch: '<S266>/Switch1' incorporates:
     *  Constant: '<S266>/Constant'
     *  Constant: '<S266>/Constant1'
     *  Constant: '<S269>/Constant'
     *  Product: '<S266>/Divide'
     *  Product: '<S266>/Divide1'
     *  RelationalOperator: '<S269>/Compare'
     *  Switch: '<S266>/Switch'
     */
    if (rtb_Add_kl > 1.0E-6) {
      rtb_Subtract1_m4 /= rtb_Add_kl;
      rtb_Add_kl = rtb_Subtract1_dk / rtb_Add_kl;
    } else {
      rtb_Subtract1_m4 = 1.0;
      rtb_Add_kl = 0.0;
    }

    /* End of Switch: '<S266>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_kl, rtb_Subtract1_m4);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S259>/Product2' incorporates:
   *  Constant: '<S259>/Constant'
   *  Switch: '<S256>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S254>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S254>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Sum: '<S258>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S229>/Product' incorporates:
   *  Abs: '<S254>/Abs'
   *  Abs: '<S257>/Abs'
   *  Constant: '<S260>/Constant'
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
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
  rtb_Switch2_c = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S255>/Gain' */
  rtb_Subtract1_dk = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S255>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S262>/Sum1' incorporates:
   *  Constant: '<S255>/Constant2'
   *  Product: '<S262>/Product'
   *  Sum: '<S262>/Sum'
   *  UnitDelay: '<S262>/Unit Delay1'
   */
  rtb_Add_kl = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S255>/Product' incorporates:
   *  Constant: '<S255>/Constant3'
   */
  rtb_Subtract1_m4 = rtb_Add_kl * Drive_Motor_Control_D;

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
  cos_alpha = rtb_Subtract1_m4 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S255>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S255>/Add' incorporates:
   *  Gain: '<S255>/Gain1'
   *  Saturate: '<S255>/Saturation'
   */
  rtb_Hypot_b = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Subtract1_dk) +
    cos_alpha;

  /* Sum: '<S255>/Subtract' incorporates:
   *  Constant: '<S255>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Hypot_b;

  /* Sum: '<S255>/Sum2' incorporates:
   *  Gain: '<S255>/Gain2'
   *  UnitDelay: '<S255>/Unit Delay'
   */
  rtb_Subtract1_dk = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S263>/Switch2' incorporates:
   *  Constant: '<S255>/Constant'
   *  RelationalOperator: '<S263>/LowerRelop1'
   *  Sum: '<S255>/Subtract'
   */
  if (!(rtb_Subtract1_dk > (1.0 - rtb_Hypot_b))) {
    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S255>/Constant1'
     *  RelationalOperator: '<S263>/UpperRelop'
     *  Sum: '<S255>/Subtract1'
     */
    if (rtb_Subtract1_dk < (-1.0 - rtb_Hypot_b)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Hypot_b;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_dk;
    }

    /* End of Switch: '<S263>/Switch' */
  }

  /* End of Switch: '<S263>/Switch2' */

  /* Saturate: '<S255>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_dk = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_dk = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S255>/Saturation1' */

  /* Sum: '<S255>/Add1' */
  cos_alpha = rtb_Hypot_b + rtb_Subtract1_dk;

  /* Saturate: '<S255>/Saturation2' */
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

  /* End of Saturate: '<S255>/Saturation2' */

  /* Sum: '<S271>/Add1' incorporates:
   *  Constant: '<S271>/Constant3'
   *  Constant: '<S271>/Constant4'
   *  Math: '<S271>/Math Function'
   *  Sum: '<S271>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S273>/Sum1' incorporates:
   *  Constant: '<S258>/Constant2'
   *  Product: '<S273>/Product'
   *  Sum: '<S273>/Sum'
   *  UnitDelay: '<S273>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S258>/Product' incorporates:
   *  Constant: '<S258>/Constant3'
   */
  rtb_Hypot_b = rtb_uDLookupTable_l * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Hypot_b - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S258>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S258>/Add' incorporates:
   *  Gain: '<S258>/Gain1'
   *  Saturate: '<S258>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_c) + cos_alpha;

  /* Sum: '<S258>/Subtract' incorporates:
   *  Constant: '<S258>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S258>/Sum2' incorporates:
   *  Gain: '<S258>/Gain2'
   *  UnitDelay: '<S258>/Unit Delay'
   */
  rtb_Subtract1_g = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S274>/Switch2' incorporates:
   *  Constant: '<S258>/Constant'
   *  RelationalOperator: '<S274>/LowerRelop1'
   *  Sum: '<S258>/Subtract'
   */
  if (!(rtb_Subtract1_g > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S258>/Constant1'
     *  RelationalOperator: '<S274>/UpperRelop'
     *  Sum: '<S258>/Subtract1'
     */
    if (rtb_Subtract1_g < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_g;
    }

    /* End of Switch: '<S274>/Switch' */
  }

  /* End of Switch: '<S274>/Switch2' */

  /* Saturate: '<S258>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_g = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_g = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S258>/Saturation1' */

  /* Sum: '<S258>/Add1' */
  cos_alpha = rtb_Add_ie + rtb_Subtract1_g;

  /* Saturate: '<S258>/Saturation2' */
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

  /* End of Saturate: '<S258>/Saturation2' */

  /* Product: '<S345>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_l;

  /* Switch: '<S360>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S360>/Switch' incorporates:
     *  Fcn: '<S361>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S360>/Switch' */

  /* Trigonometry: '<S288>/Cos4' incorporates:
   *  Switch: '<S277>/Angle_Switch'
   *  Trigonometry: '<S287>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S288>/Sin5' incorporates:
   *  UnaryMinus: '<S286>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S288>/Sin4' incorporates:
   *  Switch: '<S277>/Angle_Switch'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_Subtract1_kj = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S288>/Cos5' incorporates:
   *  UnaryMinus: '<S286>/Unary Minus'
   */
  rtb_Switch2_c = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S288>/Subtract1' incorporates:
   *  Product: '<S288>/Product2'
   *  Product: '<S288>/Product3'
   *  Trigonometry: '<S288>/Cos4'
   *  Trigonometry: '<S288>/Sin4'
   */
  rtb_Subtract1_n = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Subtract1_kj * rtb_Switch2_c);

  /* Sum: '<S288>/Subtract' incorporates:
   *  Product: '<S288>/Product'
   *  Product: '<S288>/Product1'
   *  Trigonometry: '<S288>/Cos4'
   *  Trigonometry: '<S288>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Add_ie * rtb_Switch2_c) -
    (rtb_Subtract1_kj * rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S288>/Hypot' */
  rtb_Hypot_i = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Subtract1_n);

  /* Switch: '<S288>/Switch' incorporates:
   *  Constant: '<S288>/Constant'
   *  Constant: '<S288>/Constant1'
   *  Constant: '<S289>/Constant'
   *  Product: '<S288>/Divide'
   *  Product: '<S288>/Divide1'
   *  RelationalOperator: '<S289>/Compare'
   *  Switch: '<S288>/Switch1'
   */
  if (rtb_Hypot_i > 1.0E-6) {
    rtb_Switch2_l = rtb_Subtract1_n / rtb_Hypot_i;
    rtb_Switch2_c = rtb_MatrixConcatenate_b_idx_0 / rtb_Hypot_i;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Switch2_c = 1.0;
  }

  /* End of Switch: '<S288>/Switch' */

  /* Switch: '<S277>/Speed_Switch' incorporates:
   *  Abs: '<S277>/Abs'
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S285>/Compare'
   *  Switch: '<S277>/Angle_Switch'
   *  Trigonometry: '<S287>/Atan1'
   *  Trigonometry: '<S288>/Atan1'
   *  UnaryMinus: '<S277>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Switch2_c)) > 1.5707963267948966) {
    rtb_Switch1_b4 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S287>/Subtract1' incorporates:
     *  Product: '<S287>/Product2'
     *  Product: '<S287>/Product3'
     *  UnaryMinus: '<S277>/Unary Minus'
     */
    rtb_Subtract1_n = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S287>/Subtract' incorporates:
     *  Product: '<S287>/Product'
     *  Product: '<S287>/Product1'
     */
    rtb_Subtract1_kj = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_kj * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S287>/Hypot' */
    rtb_Add_ie = rt_hypotd_snf(rtb_Subtract1_kj, rtb_Subtract1_n);

    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S287>/Constant'
     *  Constant: '<S287>/Constant1'
     *  Constant: '<S290>/Constant'
     *  Product: '<S287>/Divide'
     *  Product: '<S287>/Divide1'
     *  RelationalOperator: '<S290>/Compare'
     *  Switch: '<S287>/Switch'
     */
    if (rtb_Add_ie > 1.0E-6) {
      rtb_Subtract1_kj /= rtb_Add_ie;
      rtb_Add_ie = rtb_Subtract1_n / rtb_Add_ie;
    } else {
      rtb_Subtract1_kj = 1.0;
      rtb_Add_ie = 0.0;
    }

    /* End of Switch: '<S287>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Add_ie, rtb_Subtract1_kj);
  } else {
    rtb_Switch1_b4 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S280>/Product2' incorporates:
   *  Constant: '<S280>/Constant'
   *  Switch: '<S277>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Switch1_b4 * 1530.1401357649195;

  /* Signum: '<S275>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Switch1_b4 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Switch1_b4 = -1.0;
  } else {
    rtb_Switch1_b4 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S275>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Sum: '<S279>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S230>/Product' incorporates:
   *  Abs: '<S275>/Abs'
   *  Abs: '<S278>/Abs'
   *  Constant: '<S281>/Constant'
   *  Constant: '<S291>/Constant3'
   *  Constant: '<S291>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S275>/OR'
   *  Lookup_n-D: '<S278>/1-D Lookup Table'
   *  Math: '<S291>/Math Function'
   *  RelationalOperator: '<S275>/Equal1'
   *  RelationalOperator: '<S281>/Compare'
   *  Signum: '<S275>/Sign'
   *  Signum: '<S275>/Sign1'
   *  Sum: '<S278>/Add'
   *  Sum: '<S291>/Add1'
   *  Sum: '<S291>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Switch1_b4 == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled40, Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S276>/Gain' */
  rtb_Subtract1_n = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S276>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S283>/Sum1' incorporates:
   *  Constant: '<S276>/Constant2'
   *  Product: '<S283>/Product'
   *  Sum: '<S283>/Sum'
   *  UnitDelay: '<S283>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S276>/Product' incorporates:
   *  Constant: '<S276>/Constant3'
   */
  rtb_Subtract1_kj = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S282>/Diff' incorporates:
   *  UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  cos_alpha = rtb_Subtract1_kj - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S276>/Saturation' */
  if (cos_alpha > Drive_Motor_Control_D_UL) {
    cos_alpha = Drive_Motor_Control_D_UL;
  } else if (cos_alpha < Drive_Motor_Control_D_LL) {
    cos_alpha = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S276>/Add' incorporates:
   *  Gain: '<S276>/Gain1'
   *  Saturate: '<S276>/Saturation'
   */
  rtb_Hypot_i = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract1_n) +
    cos_alpha;

  /* Sum: '<S276>/Subtract' incorporates:
   *  Constant: '<S276>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Hypot_i;

  /* Sum: '<S276>/Sum2' incorporates:
   *  Gain: '<S276>/Gain2'
   *  UnitDelay: '<S276>/Unit Delay'
   */
  rtb_Subtract1_n = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S284>/Switch2' incorporates:
   *  Constant: '<S276>/Constant'
   *  RelationalOperator: '<S284>/LowerRelop1'
   *  Sum: '<S276>/Subtract'
   */
  if (!(rtb_Subtract1_n > (1.0 - rtb_Hypot_i))) {
    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S276>/Constant1'
     *  RelationalOperator: '<S284>/UpperRelop'
     *  Sum: '<S276>/Subtract1'
     */
    if (rtb_Subtract1_n < (-1.0 - rtb_Hypot_i)) {
      rtb_Switch2_c = -1.0 - rtb_Hypot_i;
    } else {
      rtb_Switch2_c = rtb_Subtract1_n;
    }

    /* End of Switch: '<S284>/Switch' */
  }

  /* End of Switch: '<S284>/Switch2' */

  /* Saturate: '<S276>/Saturation1' */
  if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
    rtb_Subtract1_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_n = rtb_Switch2_c;
  }

  /* End of Saturate: '<S276>/Saturation1' */

  /* Sum: '<S276>/Add1' */
  cos_alpha = rtb_Hypot_i + rtb_Subtract1_n;

  /* Saturate: '<S276>/Saturation2' */
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

  /* End of Saturate: '<S276>/Saturation2' */

  /* Sum: '<S292>/Add1' incorporates:
   *  Constant: '<S292>/Constant3'
   *  Constant: '<S292>/Constant4'
   *  Math: '<S292>/Math Function'
   *  Sum: '<S292>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S294>/Sum1' incorporates:
   *  Constant: '<S279>/Constant2'
   *  Product: '<S294>/Product'
   *  Sum: '<S294>/Sum'
   *  UnitDelay: '<S294>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_l -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S279>/Product' incorporates:
   *  Constant: '<S279>/Constant3'
   */
  rtb_Hypot_i = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

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
  cos_alpha = rtb_Hypot_i - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S279>/Saturation' */
  if (cos_alpha > Steering_Motor_Control_D_UL) {
    cos_alpha = Steering_Motor_Control_D_UL;
  } else if (cos_alpha < Steering_Motor_Control_D_LL) {
    cos_alpha = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S279>/Add' incorporates:
   *  Gain: '<S279>/Gain1'
   *  Saturate: '<S279>/Saturation'
   */
  rtb_Add_l = (Steering_Motor_Control_P * rtb_Switch2_l) + cos_alpha;

  /* Sum: '<S279>/Subtract' incorporates:
   *  Constant: '<S279>/Constant'
   */
  rtb_Switch2_c = 1.0 - rtb_Add_l;

  /* Sum: '<S279>/Sum2' incorporates:
   *  Gain: '<S279>/Gain2'
   *  UnitDelay: '<S279>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S295>/Switch2' incorporates:
   *  Constant: '<S279>/Constant'
   *  RelationalOperator: '<S295>/LowerRelop1'
   *  Sum: '<S279>/Subtract'
   */
  if (!(rtb_Switch2_l > (1.0 - rtb_Add_l))) {
    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S279>/Constant1'
     *  RelationalOperator: '<S295>/UpperRelop'
     *  Sum: '<S279>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Switch2_c = -1.0 - rtb_Add_l;
    } else {
      rtb_Switch2_c = rtb_Switch2_l;
    }

    /* End of Switch: '<S295>/Switch' */
  }

  /* End of Switch: '<S295>/Switch2' */

  /* Saturate: '<S279>/Saturation1' */
  if (rtb_Switch2_c > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_c < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_f = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_f = rtb_Switch2_c;
  }

  /* End of Saturate: '<S279>/Saturation1' */

  /* Sum: '<S279>/Add1' */
  cos_alpha = rtb_Add_l + rtb_Subtract1_f;

  /* Saturate: '<S279>/Saturation2' */
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

  /* End of Saturate: '<S279>/Saturation2' */

  /* Gain: '<S125>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Constant: '<S126>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S125>/Switch1' incorporates:
   *  UnitDelay: '<S125>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S125>/Switch1' */

  /* Sum: '<S125>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_l;

  /* Gain: '<S125>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S125>/Switch' incorporates:
   *  UnitDelay: '<S125>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S125>/Switch' */

  /* Sum: '<S125>/Subtract' */
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

  /* Sum: '<S128>/Add' incorporates:
   *  Constant: '<S128>/Constant24'
   */
  rtb_Switch2_l = (Code_Gen_Model_B.Back_Lower_Arm_Length +
                   Code_Gen_Model_B.Back_Upper_Arm_Length) + 428.625;

  /* Sqrt: '<S128>/Sqrt' incorporates:
   *  Math: '<S128>/Math Function'
   *  Sum: '<S128>/Subtract'
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

  /* Sqrt: '<S132>/Sqrt' incorporates:
   *  Constant: '<S132>/Constant24'
   *  Math: '<S132>/Math Function'
   *  Sum: '<S132>/Add'
   *  Sum: '<S132>/Subtract'
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

  /* Switch: '<S156>/Init' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   *  UnitDelay: '<S156>/FixPt Unit Delay1'
   *  UnitDelay: '<S156>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l != 0) {
    rtb_Switch2_l = rtb_Switch2_c;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S156>/Init' */

  /* Sum: '<S154>/Sum1' incorporates:
   *  MATLAB Function: '<S12>/Back_AA_To_Extentions'
   */
  rtb_Switch2_c -= rtb_Switch2_l;

  /* Switch: '<S155>/Switch2' incorporates:
   *  Constant: '<S140>/Constant1'
   *  Constant: '<S140>/Constant3'
   *  RelationalOperator: '<S155>/LowerRelop1'
   *  RelationalOperator: '<S155>/UpperRelop'
   *  Switch: '<S155>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S140>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S155>/Switch2' */

  /* Sum: '<S154>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S136>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S136>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S130>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_DataTypeConversion_l != 0);

  /* Switch: '<S136>/Switch' incorporates:
   *  Constant: '<S136>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S136>/Constant3'
     *  UnitDelay: '<S145>/Delay Input1'
     *
     * Block description for '<S145>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_h) {
      rtb_Sqrt = AA_Integral_IC;
    } else {
      /* Sum: '<S136>/Sum2' incorporates:
       *  Gain: '<S136>/Gain2'
       *  UnitDelay: '<S136>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S136>/Subtract' incorporates:
       *  Constant: '<S136>/Constant'
       */
      rtb_Sqrt = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S146>/Switch2' incorporates:
       *  RelationalOperator: '<S146>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > rtb_Sqrt)) {
        /* Sum: '<S136>/Subtract1' incorporates:
         *  Constant: '<S136>/Constant1'
         */
        rtb_Sqrt = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S146>/Switch' incorporates:
         *  RelationalOperator: '<S146>/UpperRelop'
         */
        if (!(rtb_Switch2_c < rtb_Sqrt)) {
          rtb_Sqrt = rtb_Switch2_c;
        }

        /* End of Switch: '<S146>/Switch' */
      }

      /* End of Switch: '<S146>/Switch2' */

      /* Saturate: '<S136>/Saturation1' */
      if (rtb_Sqrt > AA_Integral_UL) {
        rtb_Sqrt = AA_Integral_UL;
      } else if (rtb_Sqrt < AA_Integral_LL) {
        rtb_Sqrt = AA_Integral_LL;
      }

      /* End of Saturate: '<S136>/Saturation1' */
    }

    /* End of Switch: '<S136>/Switch1' */
  } else {
    rtb_Sqrt = 0.0;
  }

  /* End of Switch: '<S136>/Switch' */

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
    /* Sum: '<S136>/Add1' */
    cos_alpha = rtb_Switch2_l + rtb_Sqrt;

    /* Saturate: '<S136>/Saturation2' */
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

    /* End of Saturate: '<S136>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Switch: '<S153>/Init' incorporates:
   *  UnitDelay: '<S153>/FixPt Unit Delay1'
   *  UnitDelay: '<S153>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
    rtb_Switch2_l = rtb_Sqrt_f;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S153>/Init' */

  /* Sum: '<S151>/Sum1' */
  rtb_Switch2_c = rtb_Sqrt_f - rtb_Switch2_l;

  /* Switch: '<S152>/Switch2' incorporates:
   *  Constant: '<S139>/Constant1'
   *  Constant: '<S139>/Constant3'
   *  RelationalOperator: '<S152>/LowerRelop1'
   *  RelationalOperator: '<S152>/UpperRelop'
   *  Switch: '<S152>/Switch'
   */
  if (rtb_Switch2_c > AA_Position_Inc_RL) {
    rtb_Switch2_c = AA_Position_Inc_RL;
  } else if (rtb_Switch2_c < AA_Position_Dec_RL) {
    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S139>/Constant1'
     */
    rtb_Switch2_c = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S152>/Switch2' */

  /* Sum: '<S151>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S137>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S137>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S137>/Switch' incorporates:
   *  Constant: '<S137>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<S137>/Constant3'
     *  UnitDelay: '<S147>/Delay Input1'
     *
     * Block description for '<S147>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      rtb_Sqrt_f = AA_Integral_IC;
    } else {
      /* Sum: '<S137>/Sum2' incorporates:
       *  Gain: '<S137>/Gain2'
       *  UnitDelay: '<S137>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c2;

      /* Sum: '<S137>/Subtract' incorporates:
       *  Constant: '<S137>/Constant'
       */
      rtb_Sqrt_f = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S148>/Switch2' incorporates:
       *  RelationalOperator: '<S148>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > rtb_Sqrt_f)) {
        /* Sum: '<S137>/Subtract1' incorporates:
         *  Constant: '<S137>/Constant1'
         */
        rtb_Sqrt_f = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S148>/Switch' incorporates:
         *  RelationalOperator: '<S148>/UpperRelop'
         */
        if (!(rtb_Switch2_c < rtb_Sqrt_f)) {
          rtb_Sqrt_f = rtb_Switch2_c;
        }

        /* End of Switch: '<S148>/Switch' */
      }

      /* End of Switch: '<S148>/Switch2' */

      /* Saturate: '<S137>/Saturation1' */
      if (rtb_Sqrt_f > AA_Integral_UL) {
        rtb_Sqrt_f = AA_Integral_UL;
      } else if (rtb_Sqrt_f < AA_Integral_LL) {
        rtb_Sqrt_f = AA_Integral_LL;
      }

      /* End of Saturate: '<S137>/Saturation1' */
    }

    /* End of Switch: '<S137>/Switch1' */
  } else {
    rtb_Sqrt_f = 0.0;
  }

  /* End of Switch: '<S137>/Switch' */

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
    /* Sum: '<S137>/Add1' */
    cos_alpha = rtb_Switch2_l + rtb_Sqrt_f;

    /* Saturate: '<S137>/Saturation2' */
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

    /* End of Saturate: '<S137>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S131>/Subtract1' incorporates:
   *  Constant: '<S131>/Constant24'
   *  MATLAB Function: '<S12>/Get_Arm_Lengths'
   *  Math: '<S131>/Math Function'
   *  Sqrt: '<S131>/Sqrt'
   *  Sum: '<S131>/Subtract'
   */
  rtb_Switch2_l = sqrt((sqrt_input * sqrt_input) -
                       Code_Gen_Model_ConstB.MathFunction1_d) -
    506.41249999999997;

  /* Saturate: '<S131>/Saturation' */
  if (rtb_Switch2_l > Front_AA_Bot_Max_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Max_Ext;
  } else if (rtb_Switch2_l < Front_AA_Bot_Min_Ext) {
    rtb_Switch2_l = Front_AA_Bot_Min_Ext;
  }

  /* End of Saturate: '<S131>/Saturation' */

  /* Switch: '<S162>/Init' incorporates:
   *  UnitDelay: '<S162>/FixPt Unit Delay1'
   *  UnitDelay: '<S162>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g != 0) {
    rtb_Switch2_c = rtb_Switch2_l;
  } else {
    rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S162>/Init' */

  /* Sum: '<S160>/Sum1' */
  rtb_Switch2_l -= rtb_Switch2_c;

  /* Switch: '<S161>/Switch2' incorporates:
   *  Constant: '<S142>/Constant1'
   *  Constant: '<S142>/Constant3'
   *  RelationalOperator: '<S161>/LowerRelop1'
   *  RelationalOperator: '<S161>/UpperRelop'
   *  Switch: '<S161>/Switch'
   */
  if (rtb_Switch2_l > AA_Position_Inc_RL) {
    rtb_Switch2_l = AA_Position_Inc_RL;
  } else if (rtb_Switch2_l < AA_Position_Dec_RL) {
    /* Switch: '<S161>/Switch' incorporates:
     *  Constant: '<S142>/Constant1'
     */
    rtb_Switch2_l = AA_Position_Dec_RL;
  }

  /* End of Switch: '<S161>/Switch2' */

  /* Sum: '<S160>/Sum' */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Switch2_l + rtb_Switch2_c;

  /* Sum: '<S138>/Sum' */
  rtb_Switch2_c = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S138>/Gain1' */
  rtb_Switch2_l = AA_Prop_Gain * rtb_Switch2_c;

  /* Switch: '<S138>/Switch' incorporates:
   *  Constant: '<S138>/Constant2'
   */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S138>/Constant3'
     *  UnitDelay: '<S149>/Delay Input1'
     *
     * Block description for '<S149>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o) {
      sqrt_input = AA_Integral_IC;
    } else {
      /* Sum: '<S138>/Sum2' incorporates:
       *  Gain: '<S138>/Gain2'
       *  UnitDelay: '<S138>/Unit Delay'
       */
      rtb_Switch2_c = (AA_Integral_Gain * rtb_Switch2_c) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S138>/Subtract' incorporates:
       *  Constant: '<S138>/Constant'
       */
      sqrt_input = AA_TC_UL - rtb_Switch2_l;

      /* Switch: '<S150>/Switch2' incorporates:
       *  RelationalOperator: '<S150>/LowerRelop1'
       */
      if (!(rtb_Switch2_c > sqrt_input)) {
        /* Sum: '<S138>/Subtract1' incorporates:
         *  Constant: '<S138>/Constant1'
         */
        sqrt_input = AA_TC_LL - rtb_Switch2_l;

        /* Switch: '<S150>/Switch' incorporates:
         *  RelationalOperator: '<S150>/UpperRelop'
         */
        if (!(rtb_Switch2_c < sqrt_input)) {
          sqrt_input = rtb_Switch2_c;
        }

        /* End of Switch: '<S150>/Switch' */
      }

      /* End of Switch: '<S150>/Switch2' */

      /* Saturate: '<S138>/Saturation1' */
      if (sqrt_input > AA_Integral_UL) {
        sqrt_input = AA_Integral_UL;
      } else if (sqrt_input < AA_Integral_LL) {
        sqrt_input = AA_Integral_LL;
      }

      /* End of Saturate: '<S138>/Saturation1' */
    }

    /* End of Switch: '<S138>/Switch1' */
  } else {
    sqrt_input = 0.0;
  }

  /* End of Switch: '<S138>/Switch' */

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
    /* Sum: '<S138>/Add1' */
    cos_alpha = rtb_Switch2_l + sqrt_input;

    /* Saturate: '<S138>/Saturation2' */
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

    /* End of Saturate: '<S138>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S159>/Init' incorporates:
   *  UnitDelay: '<S159>/FixPt Unit Delay1'
   *  UnitDelay: '<S159>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Switch2_l = d;
  } else {
    rtb_Switch2_l = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S159>/Init' */

  /* Sum: '<S157>/Sum1' */
  rtb_Switch2_c = d - rtb_Switch2_l;

  /* Switch: '<S158>/Switch2' incorporates:
   *  Constant: '<S141>/Constant1'
   *  Constant: '<S141>/Constant3'
   *  RelationalOperator: '<S158>/LowerRelop1'
   *  RelationalOperator: '<S158>/UpperRelop'
   *  Switch: '<S158>/Switch'
   */
  if (rtb_Switch2_c > BS_Position_Inc_RL) {
    rtb_Switch2_c = BS_Position_Inc_RL;
  } else if (rtb_Switch2_c < BS_Position_Dec_RL) {
    /* Switch: '<S158>/Switch' incorporates:
     *  Constant: '<S141>/Constant1'
     */
    rtb_Switch2_c = BS_Position_Dec_RL;
  }

  /* End of Switch: '<S158>/Switch2' */

  /* Sum: '<S157>/Sum' */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Switch2_c + rtb_Switch2_l;

  /* Sum: '<S135>/Sum' */
  d = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S144>/Sum1' incorporates:
   *  Constant: '<S135>/Constant2'
   *  Product: '<S144>/Product'
   *  Sum: '<S144>/Sum'
   *  UnitDelay: '<S144>/Unit Delay1'
   */
  rtb_Switch2_l = ((d - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * BS_Deriv_FC) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S135>/Product' incorporates:
   *  Constant: '<S135>/Constant3'
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
    cos_alpha = rtb_Switch2_c - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S135>/Saturation' */
    if (cos_alpha > BS_Deriv_UL) {
      cos_alpha = BS_Deriv_UL;
    } else if (cos_alpha < BS_Deriv_LL) {
      cos_alpha = BS_Deriv_LL;
    }

    /* Sum: '<S135>/Add' incorporates:
     *  Gain: '<S135>/Gain1'
     *  Saturate: '<S135>/Saturation'
     */
    cos_alpha += BS_Prop_Gain * d;

    /* Saturate: '<S135>/Saturation2' */
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

    /* End of Saturate: '<S135>/Saturation2' */
  }

  /* End of Switch: '<S12>/Switch3' */

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  rtb_AND_g = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  d = look1_binlcpw(TEST_Speaker_Angle,
                    Code_Gen_Model_ConstP.uDLookupTable_bp01Data_b,
                    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 3U);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  rtb_Switch_b1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  rtb_Compare_fm = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   */
  rtb_Compare_as = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* Chart: '<S7>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S53>/FixPt Relational Operator'
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  RelationalOperator: '<S56>/FixPt Relational Operator'
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  UnitDelay: '<S53>/Delay Input1'
   *  UnitDelay: '<S54>/Delay Input1'
   *  UnitDelay: '<S55>/Delay Input1'
   *  UnitDelay: '<S56>/Delay Input1'
   *  UnitDelay: '<S57>/Delay Input1'
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
   *
   * Block description for '<S57>/Delay Input1':
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

  /* Sum: '<S58>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  d = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S58>/Add' incorporates:
   *  Gain: '<S58>/Gain'
   *  Gain: '<S58>/Gain1'
   */
  cos_alpha = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * d);

  /* Switch: '<S58>/Switch' incorporates:
   *  Constant: '<S58>/Constant2'
   *  Switch: '<S7>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S58>/Sum2' incorporates:
     *  Gain: '<S58>/Gain2'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    d = (Shooter_Motor_Control_I * d) + Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S58>/Subtract' incorporates:
     *  Constant: '<S58>/Constant'
     */
    alpha = 1.0 - cos_alpha;

    /* Switch: '<S60>/Switch2' incorporates:
     *  Constant: '<S58>/Constant'
     *  RelationalOperator: '<S60>/LowerRelop1'
     *  Sum: '<S58>/Subtract'
     */
    if (!(d > (1.0 - cos_alpha))) {
      /* Sum: '<S58>/Subtract1' incorporates:
       *  Constant: '<S58>/Constant1'
       */
      alpha = -1.0 - cos_alpha;

      /* Switch: '<S60>/Switch' incorporates:
       *  Constant: '<S58>/Constant1'
       *  RelationalOperator: '<S60>/UpperRelop'
       *  Sum: '<S58>/Subtract1'
       */
      if (!(d < (-1.0 - cos_alpha))) {
        alpha = d;
      }

      /* End of Switch: '<S60>/Switch' */
    }

    /* End of Switch: '<S60>/Switch2' */

    /* Saturate: '<S58>/Saturation1' */
    if (alpha > Shooter_Motor_Control_I_UL) {
      d = Shooter_Motor_Control_I_UL;
    } else if (alpha < Shooter_Motor_Control_I_LL) {
      d = Shooter_Motor_Control_I_LL;
    } else {
      d = alpha;
    }

    /* End of Saturate: '<S58>/Saturation1' */

    /* Sum: '<S58>/Add1' */
    cos_alpha += d;

    /* Saturate: '<S58>/Saturation2' */
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

    /* End of Saturate: '<S58>/Saturation2' */
  } else {
    d = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S58>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S58>/Switch' */

  /* Sum: '<S59>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  alpha = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S59>/Add' incorporates:
   *  Gain: '<S59>/Gain'
   *  Gain: '<S59>/Gain1'
   */
  cos_alpha = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * alpha);

  /* Switch: '<S59>/Switch' incorporates:
   *  Constant: '<S59>/Constant2'
   *  Switch: '<S7>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S59>/Sum2' incorporates:
     *  Gain: '<S59>/Gain2'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    alpha = (Shooter_Motor_Control_I * alpha) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S59>/Subtract' incorporates:
     *  Constant: '<S59>/Constant'
     */
    rtb_Switch2_hk = 1.0 - cos_alpha;

    /* Switch: '<S61>/Switch2' incorporates:
     *  Constant: '<S59>/Constant'
     *  RelationalOperator: '<S61>/LowerRelop1'
     *  Sum: '<S59>/Subtract'
     */
    if (!(alpha > (1.0 - cos_alpha))) {
      /* Sum: '<S59>/Subtract1' incorporates:
       *  Constant: '<S59>/Constant1'
       */
      rtb_Switch2_hk = -1.0 - cos_alpha;

      /* Switch: '<S61>/Switch' incorporates:
       *  Constant: '<S59>/Constant1'
       *  RelationalOperator: '<S61>/UpperRelop'
       *  Sum: '<S59>/Subtract1'
       */
      if (!(alpha < (-1.0 - cos_alpha))) {
        rtb_Switch2_hk = alpha;
      }

      /* End of Switch: '<S61>/Switch' */
    }

    /* End of Switch: '<S61>/Switch2' */

    /* Saturate: '<S59>/Saturation1' */
    if (rtb_Switch2_hk > Shooter_Motor_Control_I_UL) {
      alpha = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_hk < Shooter_Motor_Control_I_LL) {
      alpha = Shooter_Motor_Control_I_LL;
    } else {
      alpha = rtb_Switch2_hk;
    }

    /* End of Saturate: '<S59>/Saturation1' */

    /* Sum: '<S59>/Add1' */
    cos_alpha += alpha;

    /* Saturate: '<S59>/Saturation2' */
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

    /* End of Saturate: '<S59>/Saturation2' */
  } else {
    alpha = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S59>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S59>/Switch' */

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
   *  Constant: '<S34>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   *  RelationalOperator: '<S34>/Compare'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy9' incorporates:
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   *  RelationalOperator: '<S35>/Compare'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* SignalConversion: '<S6>/Signal Copy8' incorporates:
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   *  RelationalOperator: '<S36>/Compare'
   */
  Code_Gen_Model_B.Align_Trap = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* Logic: '<S6>/OR4' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   */
  Code_Gen_Model_B.Chain_Button = ((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
    (Code_Gen_Model_U.Joystick_Right_B8 != 0.0));

  /* SignalConversion: '<S6>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* Update for UnitDelay: '<S117>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S117>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S118>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S118>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S119>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S119>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S120>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S120>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S46>/Delay Input1' incorporates:
   *  Inport: '<Root>/Gamepad_B1_A'
   *
   * Block description for '<S46>/Delay Input1':
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
     *  Bias: '<S191>/Bias'
     *  Merge: '<S165>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' incorporates:
     *  Bias: '<S191>/Bias'
     *  Merge: '<S165>/Merge1'
     *  S-Function (sfix_udelay): '<S9>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S62>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S82>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S62>/A'
   *  Delay: '<S62>/MemoryX'
   */
  rtb_thetay = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  cos_alpha = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S62>/MemoryX' incorporates:
   *  Constant: '<S62>/B'
   *  Product: '<S82>/A[k]*xhat[k|k-1]'
   *  Product: '<S82>/B[k]*u[k]'
   *  Sum: '<S82>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_thetay) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + cos_alpha) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S116>/UD'
   *
   * Block description for '<S116>/UD':
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

  /* Update for UnitDelay: '<S328>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S328>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S342>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S339>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S337>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S337>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S304>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2;

  /* Update for UnitDelay: '<S297>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch4_g;

  /* Update for UnitDelay: '<S315>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Switch1_p;

  /* Update for UnitDelay: '<S314>/UD'
   *
   * Block description for '<S314>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Switch2_o;

  /* Update for UnitDelay: '<S300>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Product_ku;

  /* Update for UnitDelay: '<S241>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S234>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S252>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S251>/UD'
   *
   * Block description for '<S251>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S237>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S262>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_kl;

  /* Update for UnitDelay: '<S261>/UD'
   *
   * Block description for '<S261>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_m4;

  /* Update for UnitDelay: '<S255>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract1_dk;

  /* Update for UnitDelay: '<S273>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S272>/UD'
   *
   * Block description for '<S272>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Hypot_b;

  /* Update for UnitDelay: '<S258>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_g;

  /* Update for UnitDelay: '<S283>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Subtract1_kj;

  /* Update for UnitDelay: '<S276>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S294>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S293>/UD'
   *
   * Block description for '<S293>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Hypot_i;

  /* Update for UnitDelay: '<S279>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S125>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_l;

  /* Update for UnitDelay: '<S125>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = rtb_Switch1_g;

  /* Update for UnitDelay: '<S18>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_g = rtb_Switch1_b4;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = rtb_Switch1_n;

  /* Update for UnitDelay: '<S20>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = rtb_Switch1_f;

  /* Update for UnitDelay: '<S156>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S156>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 0U;

  /* Update for UnitDelay: '<S145>/Delay Input1'
   *
   * Block description for '<S145>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S136>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Sqrt;

  /* Update for UnitDelay: '<S147>/Delay Input1'
   *
   * Block description for '<S147>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S153>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S153>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

  /* Update for UnitDelay: '<S137>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c2 = rtb_Sqrt_f;

  /* Update for UnitDelay: '<S149>/Delay Input1'
   *
   * Block description for '<S149>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Is_Absolute_Translation;

  /* Update for UnitDelay: '<S162>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S162>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 0U;

  /* Update for UnitDelay: '<S138>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = sqrt_input;

  /* Update for UnitDelay: '<S159>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S159>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S144>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch2_l;

  /* Update for UnitDelay: '<S143>/UD'
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_Switch2_c;

  /* Update for UnitDelay: '<S53>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_AND_g;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_oy = rtb_Switch_b1;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hw = rtb_Compare_fm;

  /* Update for UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = rtb_Compare_as;

  /* Update for UnitDelay: '<S58>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = d;

  /* Update for UnitDelay: '<S59>/Unit Delay' */
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

    /* InitializeConditions for Delay: '<S62>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S328>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S337>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S156>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_l = 1U;

    /* InitializeConditions for UnitDelay: '<S153>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* InitializeConditions for UnitDelay: '<S162>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_g = 1U;

    /* InitializeConditions for UnitDelay: '<S159>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S394>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S13>/Spline Path Following Enabled' */
    /* Start for If: '<S169>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S169>/Robot_Index_Is_Valid' */
    /* Start for If: '<S172>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S172>/Circle_Check_Valid' */
    /* Start for If: '<S174>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S172>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S169>/Robot_Index_Is_Valid' */
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

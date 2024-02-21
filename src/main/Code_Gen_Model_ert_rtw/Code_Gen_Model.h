/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.84
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Feb 20 23:37:36 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Code_Gen_Model_h_
#define RTW_HEADER_Code_Gen_Model_h_
#ifndef Code_Gen_Model_COMMON_INCLUDES_
#define Code_Gen_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Code_Gen_Model_COMMON_INCLUDES_ */

#include "Code_Gen_Model_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T FL_Steer_Module_Angle;        /* '<S204>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S205>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S206>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S207>/Add1' */
  real_T Drive_Joystick_X;             /* '<S6>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S6>/Signal Copy2' */
  real_T Steer_Joystick_X;             /* '<S6>/Signal Copy4' */
  real_T Steer_Joystick_Y;             /* '<S6>/Signal Copy5' */
  real_T Is_Boosting;                  /* '<S6>/Signal Copy7' */
  real_T State_Request_Intake_Shooter; /* '<S6>/Switch' */
  real_T State_Request_Arm;            /* '<S6>/Switch4' */
  real_T Product6[2];                  /* '<S11>/Product6' */
  real_T Odom_Position_X;              /* '<S11>/Accumulator2' */
  real_T KF_Position_X;                /* '<S9>/Switch' */
  real_T Odom_Position_Y;              /* '<S11>/Accumulator' */
  real_T KF_Position_Y;                /* '<S9>/Switch1' */
  real_T Spline_Num_Poses;             /* '<S10>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S10>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S10>/Merge2' */
  real_T Translation_Speed;            /* '<S10>/Merge4' */
  real_T Translation_Angle;            /* '<S10>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S13>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S306>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S13>/Merge3' */
  real_T Translation_Steering_Cmd;     /* '<S300>/Switch' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S13>/Merge1' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S13>/Merge' */
  real_T Gyro_Angle_Adjustment_SPF;    /* '<S13>/Merge6' */
  real_T Steering_Localized_PID;       /* '<S319>/Saturation2' */
  real_T Steering_Localized_Cmd;       /* '<S315>/Sum' */
  real_T Switch1;                      /* '<S345>/Switch1' */
  real_T Switch1_m;                    /* '<S330>/Switch1' */
  real_T Switch1_o;                    /* '<S335>/Switch1' */
  real_T Switch1_p;                    /* '<S340>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S325>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S345>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S325>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S330>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S325>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S335>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S325>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S340>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S106>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S106>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S106>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S106>/Subtract' */
  real_T Back_Upper_Arm_Length;        /* '<S19>/Subtract1' */
  real_T State_Request_Arm_d;          /* '<S10>/Merge12' */
  real_T Back_Lower_Arm_Length;        /* '<S18>/Subtract1' */
  real_T Front_Arm_Length;             /* '<S21>/Subtract1' */
  real_T Ball_Screw_Arm_Length;        /* '<S20>/Subtract1' */
  real_T Meas_Angle;                   /* '<S12>/Gain2' */
  real_T Desired_Back_Upper_Dist;      /* '<S134>/Sum' */
  real_T Desired_Back_Lower_Dist;      /* '<S131>/Sum' */
  real_T Desired_Front_Dist;           /* '<S140>/Sum' */
  real_T Desired_Ball_Screw_Dist;      /* '<S137>/Sum' */
  real_T State_Request_Intake_Shooter_h;/* '<S10>/Merge11' */
  real_T Face_Away_Driver;             /* '<S6>/Signal Copy10' */
  real_T Align_Speaker;                /* '<S6>/Signal Copy16' */
  real_T Face_Toward_Driver;           /* '<S6>/Signal Copy17' */
  real_T Face_Right_Driver;            /* '<S6>/Signal Copy18' */
  real_T Face_Left_Driver;             /* '<S6>/Signal Copy19' */
  real_T Drive_Joystick_Z;             /* '<S6>/Signal Copy3' */
  real_T Steer_Joystick_Z;             /* '<S6>/Signal Copy6' */
  real_T Align_Trap;                   /* '<S6>/Signal Copy8' */
  real_T Align_Amp;                    /* '<S6>/Signal Copy9' */
  real_T Spline_Index;                 /* '<S149>/Merge4' */
  real_T Spline_Target_Y;              /* '<S146>/Selector6' */
  real_T Spline_Target_X;              /* '<S146>/Selector2' */
  real_T Assignment[450];              /* '<S171>/Assignment' */
  real_T Meas_Gap;                     /* '<S12>/Get_Angle_Gap_Height' */
  real_T Meas_Height;                  /* '<S12>/Get_Angle_Gap_Height' */
  real_T Desired_Angle;                /* '<S12>/Chart_Shooter_Position' */
  real_T Desired_Height;               /* '<S12>/Chart_Shooter_Position' */
  real_T Desired_Gap;                  /* '<S12>/Chart_Shooter_Position' */
  real_T Product2[2];                  /* '<S96>/Product2' */
  real_T Product3[2];                  /* '<S94>/Product3' */
  real_T Shooter_Motor_Speed_Left;     /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Left;        /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Right;    /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Right;       /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Note_State_ID;                /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Servo_Pos;            /* '<S7>/Chart_Intake_and_Shooter' */
  uint16_T WhileIterator;              /* '<S196>/While Iterator' */
  boolean_T Arm_Dist_Cal_Active;       /* '<S26>/Compare' */
  boolean_T Spline_Enable;             /* '<S10>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S13>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S13>/Merge5' */
  boolean_T Back_Lower_Arm_Cal_Success;/* '<S18>/Switch2' */
  boolean_T Arm_Dist_Cal_Active_p;     /* '<S10>/Merge10' */
  boolean_T Back_Upper_Arm_Cal_Success;/* '<S19>/Switch2' */
  boolean_T Front_Arm_Cal_Success;     /* '<S21>/Switch2' */
  boolean_T Ball_Screw_Arm_Cal_Success;/* '<S20>/Switch2' */
  boolean_T Robot_Reached_Destination; /* '<S13>/Merge7' */
  boolean_T Chain_Button;              /* '<S6>/OR4' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S149>/Merge1' */
  boolean_T Shooter_Motor_Speed_Control_Ena;/* '<S7>/Chart_Intake_and_Shooter' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S98>/UD' */
  real_T UD_DSTATE_m;                  /* '<S99>/UD' */
  real_T UD_DSTATE_i;                  /* '<S100>/UD' */
  real_T UD_DSTATE_c;                  /* '<S101>/UD' */
  real_T DelayInput1_DSTATE;           /* '<S27>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S6>/Unit Delay1' */
  real_T TappedDelay_X[6];             /* '<S9>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S9>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S43>/MemoryX' */
  real_T UD_DSTATE_d;                  /* '<S97>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S11>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S11>/Accumulator' */
  real_T UnitDelay1_DSTATE_i;          /* '<S322>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S321>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S319>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S284>/Unit Delay1' */
  real_T UD_DSTATE_cs;                 /* '<S283>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S277>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S295>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S294>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S280>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S221>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S220>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S214>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S232>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S231>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S217>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S242>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S241>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S235>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S253>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S252>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S238>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S263>/Unit Delay1' */
  real_T UD_DSTATE_lh;                 /* '<S262>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S256>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S274>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S273>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S259>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S106>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S106>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nc;         /* '<S19>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_g;          /* '<S18>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bc;         /* '<S21>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_fp;         /* '<S20>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bm;         /* '<S124>/Unit Delay1' */
  real_T UD_DSTATE_n;                  /* '<S123>/UD' */
  real_T UnitDelay1_DSTATE_l;          /* '<S126>/Unit Delay1' */
  real_T UD_DSTATE_bi;                 /* '<S125>/UD' */
  real_T UnitDelay1_DSTATE_bg;         /* '<S128>/Unit Delay1' */
  real_T UD_DSTATE_g;                  /* '<S127>/UD' */
  real_T UnitDelay1_DSTATE_j;          /* '<S130>/Unit Delay1' */
  real_T UD_DSTATE_ii;                 /* '<S129>/UD' */
  real_T UnitDelay_DSTATE_mw;          /* '<S39>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S40>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d2;         /* '<S355>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S355>/Unit Delay' */
  real_T UnitDelay_DSTATE_hh;          /* '<S354>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kr;         /* '<S354>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_lw;         /* '<S364>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S364>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S368>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S145>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S144>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S197>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4g;         /* '<S197>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S147>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S147>/Unit Delay1' */
  real_T timer;                        /* '<S7>/Chart_Intake_and_Shooter' */
  int32_T Selector4_DIMS1[2];          /* '<S166>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S308>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S317>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S136>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_h;    /* '<S133>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S142>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S139>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S368>/FixPt Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S8>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S34>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S35>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S37>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S36>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S38>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S152>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S157>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S11>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S11>/Accumulator' */
  int8_T If_ActiveSubsystem;           /* '<S13>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S149>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S152>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S154>/If' */
  uint8_T is_active_c5_Code_Gen_Model; /* '<S12>/Chart_Shooter_Position' */
  uint8_T is_c5_Code_Gen_Model;        /* '<S12>/Chart_Shooter_Position' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S7>/Chart_Intake_and_Shooter' */
  uint8_T is_c4_Code_Gen_Model;        /* '<S7>/Chart_Intake_and_Shooter' */
  boolean_T icLoad;                    /* '<S43>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S70>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S63>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T MathFunction1;          /* '<S109>/Math Function1' */
  const real_T MathFunction1_d;        /* '<S111>/Math Function1' */
  const real_T MathFunction1_m;        /* '<S112>/Math Function1' */
  const real_T Cos5;                   /* '<S225>/Cos5' */
  const real_T Sin5;                   /* '<S225>/Sin5' */
  const real_T Cos5_g;                 /* '<S246>/Cos5' */
  const real_T Sin5_m;                 /* '<S246>/Sin5' */
  const real_T Cos5_i;                 /* '<S267>/Cos5' */
  const real_T Sin5_e;                 /* '<S267>/Sin5' */
  const real_T Cos5_b;                 /* '<S288>/Cos5' */
  const real_T Sin5_c;                 /* '<S288>/Sin5' */
  const real_T Atan1;                  /* '<S298>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S298>/Add1' */
  const real_T Atan3;                  /* '<S298>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S298>/Add2' */
  const real_T Atan4;                  /* '<S298>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S298>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Spearker_Height_out
   * Referenced by: '<S12>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[7];

  /* Expression: Speaker_Angle_in
   * Referenced by: '<S12>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[7];

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S144>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S144>/Capture Radius'
   *   '<S144>/Lookahead Distance'
   */
  real_T pooled8[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S144>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: Spline_Ref_Poses_auto2
   * Referenced by: '<S3>/Constant11'
   */
  real_T Constant11_Value[24];

  /* Expression: Spline_Ref_Poses_auto3
   * Referenced by: '<S3>/Constant12'
   */
  real_T Constant12_Value[24];

  /* Expression: Spline_Ref_Poses_auto1
   * Referenced by: '<S3>/Constant4'
   */
  real_T Constant4_Value[24];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S351>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S351>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S352>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S352>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S11>/Constant4'
   */
  real_T Constant4_Value_d[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S216>/1-D Lookup Table'
   *   '<S237>/1-D Lookup Table'
   *   '<S258>/1-D Lookup Table'
   *   '<S279>/1-D Lookup Table'
   */
  real_T pooled38[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S216>/1-D Lookup Table'
   *   '<S237>/1-D Lookup Table'
   *   '<S258>/1-D Lookup Table'
   *   '<S279>/1-D Lookup Table'
   */
  real_T pooled39[2];

  /* Expression: Shooter_Speed_Output
   * Referenced by: '<S7>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData_l[4];

  /* Expression: Shooter_Angle_Input
   * Referenced by: '<S7>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_b[4];
} ConstP_Code_Gen_Model_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T GameState;                    /* '<Root>/GameState' */
  real_T Joystick_Left_X;              /* '<Root>/Joystick_Left_X' */
  real_T Joystick_Left_Y;              /* '<Root>/Joystick_Left_Y' */
  real_T Joystick_Left_Z;              /* '<Root>/Joystick_Left_Z' */
  real_T Joystick_Right_X;             /* '<Root>/Joystick_Right_X' */
  real_T Joystick_Right_Y;             /* '<Root>/Joystick_Right_Y' */
  real_T Joystick_Right_Z;             /* '<Root>/Joystick_Right_Z' */
  real_T Joystick_Left_B1;             /* '<Root>/Joystick_Left_B1' */
  real_T Joystick_Left_B2;             /* '<Root>/Joystick_Left_B2' */
  real_T Joystick_Left_B3;             /* '<Root>/Joystick_Left_B3' */
  real_T Joystick_Left_B4;             /* '<Root>/Joystick_Left_B4' */
  boolean_T Joystick_Left_B8;          /* '<Root>/Joystick_Left_B8' */
  boolean_T Joystick_Left_B10;         /* '<Root>/Joystick_Left_B10' */
  real_T Joystick_Right_B1;            /* '<Root>/Joystick_Right_B1' */
  real_T Joystick_Right_B2;            /* '<Root>/Joystick_Right_B2' */
  real_T Joystick_Right_B3;            /* '<Root>/Joystick_Right_B3' */
  real_T Joystick_Right_B4;            /* '<Root>/Joystick_Right_B4' */
  real_T Joystick_Right_POV;           /* '<Root>/Joystick_Right_POV' */
  boolean_T Joystick_Right_B8;         /* '<Root>/Joystick_Right_B8' */
  boolean_T Joystick_Right_B10;        /* '<Root>/Joystick_Right_B10' */
  real_T Gamepad_Stick_Left_Y;         /* '<Root>/Gamepad_Stick_Left_Y' */
  real_T Gamepad_Stick_Right_Y;        /* '<Root>/Gamepad_Stick_Right_Y' */
  real_T Gamepad_B1_A;                 /* '<Root>/Gamepad_B1_A' */
  boolean_T Gamepad_LB;                /* '<Root>/Gamepad_LB' */
  boolean_T Gamepad_LT;                /* '<Root>/Gamepad_LT' */
  boolean_T Gamepad_RB;                /* '<Root>/Gamepad_RB' */
  boolean_T Gamepad_RT;                /* '<Root>/Gamepad_RT' */
  real_T Gyro_Angle;                   /* '<Root>/Gyro_Angle' */
  real_T FrontLeft_Drive_Motor_Speed; /* '<Root>/FrontLeft_Drive_Motor_Speed' */
  real_T FrontRight_Drive_Motor_Speed;
                                     /* '<Root>/FrontRight_Drive_Motor_Speed' */
  real_T BackLeft_Drive_Motor_Speed;   /* '<Root>/BackLeft_Drive_Motor_Speed' */
  real_T BackRight_Drive_Motor_Speed; /* '<Root>/BackRight_Drive_Motor_Speed' */
  real_T FrontLeft_Drive_Motor_Rev;    /* '<Root>/FrontLeft_Drive_Motor_Rev' */
  real_T FrontRight_Drive_Motor_Rev;   /* '<Root>/FrontRight_Drive_Motor_Rev' */
  real_T BackLeft_Drive_Motor_Rev;     /* '<Root>/BackLeft_Drive_Motor_Rev' */
  real_T BackRight_Drive_Motor_Rev;    /* '<Root>/BackRight_Drive_Motor_Rev' */
  real_T FrontLeft_Steer_Rev;          /* '<Root>/FrontLeft_Steer_Rev' */
  real_T FrontRight_Steer_Rev;         /* '<Root>/FrontRight_Steer_Rev' */
  real_T BackLeft_Steer_Rev;           /* '<Root>/BackLeft_Steer_Rev' */
  real_T BackRight_Steer_Rev;          /* '<Root>/BackRight_Steer_Rev' */
  real_T FrontLeft_Turn_Offset;        /* '<Root>/FrontLeft_Turn_Offset' */
  real_T FrontRight_Turn_Offset;       /* '<Root>/FrontRight_Turn_Offset' */
  real_T BackLeft_Turn_Offset;         /* '<Root>/BackLeft_Turn_Offset' */
  real_T BackRight_Turn_Offset;        /* '<Root>/BackRight_Turn_Offset' */
  boolean_T Is_Absolute_Steering;      /* '<Root>/Is_Absolute_Steering' */
  boolean_T Is_Absolute_Translation;   /* '<Root>/Is_Absolute_Translation' */
  real_T Photon_Est_Pose_X;            /* '<Root>/Photon_Est_Pose_X' */
  real_T Photon_Est_Pose_Y;            /* '<Root>/Photon_Est_Pose_Y' */
  real_T Photon_Est_Pose_Ambiguity;    /* '<Root>/Photon_Est_Pose_Ambiguity' */
  real_T Intake_TOF_Dist;              /* '<Root>/Intake_TOF_Dist' */
  real_T Shooter_TOF_Dist;             /* '<Root>/Shooter_TOF_Dist' */
  real_T Shooter_Left_Motor_RPM;       /* '<Root>/Shooter_Left_Motor_RPM' */
  real_T Shooter_Right_Motor_RPM;      /* '<Root>/Shooter_Right_Motor_RPM' */
  real_T Motor_Current_Back_Lower;     /* '<Root>/Motor_Current_Back_Lower' */
  real_T Motor_Current_Back_Upper;     /* '<Root>/Motor_Current_Back_Upper' */
  real_T Motor_Current_Front;          /* '<Root>/Motor_Current_Front' */
  real_T Motor_Current_Ball_Screw;     /* '<Root>/Motor_Current_Ball_Screw' */
  real_T Encoder_Revs_Back_Lower;      /* '<Root>/Encoder_Revs_Back_Lower' */
  real_T Encoder_Revs_Back_Upper;      /* '<Root>/Encoder_Revs_Back_Upper' */
  real_T Encoder_Revs_Front;           /* '<Root>/Encoder_Revs_Front' */
  real_T Encoder_Revs_Ball_Screw;      /* '<Root>/Encoder_Revs_Ball_Screw' */
  real_T Gamepad_B3_X;                 /* '<Root>/Gamepad_B3_X' */
} ExtU_Code_Gen_Model_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T FrontLeft_Drive_DutyCycle;    /* '<Root>/FrontLeft_Drive_DutyCycle' */
  real_T FrontLeft_Steer_DutyCycle;    /* '<Root>/FrontLeft_Steer_DutyCycle' */
  real_T FrontRight_Drive_DutyCycle;   /* '<Root>/FrontRight_Drive_DutyCycle' */
  real_T FrontRight_Steer_DutyCycle;   /* '<Root>/FrontRight_Steer_DutyCycle' */
  real_T BackLeft_Drive_DutyCycle;     /* '<Root>/BackLeft_Drive_DutyCycle' */
  real_T BackLeft_Steer_DutyCycle;     /* '<Root>/BackLeft_Steer_DutyCycle' */
  real_T BackRight_Drive_DutyCycle;    /* '<Root>/BackRight_Drive_DutyCycle' */
  real_T BackRight_Steer_DutyCycle;    /* '<Root>/BackRight_Steer_DutyCycle' */
  real_T Intake_Motor_DutyCycle;       /* '<Root>/Intake_Motor_DutyCycle' */
  real_T Shooter_Left_Motor_DutyCycle;
                                     /* '<Root>/Shooter_Left_Motor_DutyCycle' */
  real_T Shooter_Right_Motor_DutyCycle;
                                    /* '<Root>/Shooter_Right_Motor_DutyCycle' */
  boolean_T Shooter_Brake_Enable;      /* '<Root>/Shooter_Brake_Enable' */
  real_T Shooter_Servo_Position;       /* '<Root>/Shooter_Servo_Position' */
  real_T Back_Upper_Arm_DutyCycle;     /* '<Root>/Back_Upper_Arm_DutyCycle' */
  real_T Back_Lower_Arm_DutyCycle;     /* '<Root>/Back_Lower_Arm_DutyCycle' */
  real_T Front_Arm_DutyCycle;          /* '<Root>/Front_Arm_DutyCycle' */
  real_T Ball_Screw_Arm_DutyCycle;     /* '<Root>/Ball_Screw_Arm_DutyCycle' */
} ExtY_Code_Gen_Model_T;

/* Real-time Model Data Structure */
struct tag_RTM_Code_Gen_Model_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
extern DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Code_Gen_Model_T Code_Gen_Model_Y;
extern const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T AA_Deriv_FC;             /* Variable: AA_Deriv_FC
                                        * Referenced by:
                                        *   '<S115>/Constant2'
                                        *   '<S116>/Constant2'
                                        *   '<S117>/Constant2'
                                        */
extern real_T AA_Deriv_Gain;           /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S115>/Constant3'
                                        *   '<S116>/Constant3'
                                        *   '<S117>/Constant3'
                                        */
extern real_T AA_Deriv_LL;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S115>/Saturation'
                                        *   '<S116>/Saturation'
                                        *   '<S117>/Saturation'
                                        */
extern real_T AA_Deriv_UL;             /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S115>/Saturation'
                                        *   '<S116>/Saturation'
                                        *   '<S117>/Saturation'
                                        */
extern real_T AA_Position_Dec_RL;      /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S119>/Constant1'
                                        *   '<S120>/Constant1'
                                        *   '<S122>/Constant1'
                                        */
extern real_T AA_Position_Inc_RL;      /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S119>/Constant3'
                                        *   '<S120>/Constant3'
                                        *   '<S122>/Constant3'
                                        */
extern real_T AA_Prop_Gain;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S115>/Gain1'
                                        *   '<S116>/Gain1'
                                        *   '<S117>/Gain1'
                                        */
extern real_T AA_TC_LL;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S115>/Saturation2'
                                        *   '<S116>/Saturation2'
                                        *   '<S117>/Saturation2'
                                        */
extern real_T AA_TC_UL;                /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S115>/Saturation2'
                                        *   '<S116>/Saturation2'
                                        *   '<S117>/Saturation2'
                                        */
extern real_T Amp_Angle;               /* Variable: Amp_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Amp_Gap;                 /* Variable: Amp_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Amp_Height;              /* Variable: Amp_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Arm_Calibration_Timeout; /* Variable: Arm_Calibration_Timeout
                                        * Referenced by: '<S26>/Constant'
                                        */
extern real_T BS_Deriv_FC;             /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S118>/Constant2'
                                        */
extern real_T BS_Deriv_Gain;           /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S118>/Constant3'
                                        */
extern real_T BS_Deriv_LL;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S118>/Saturation'
                                        */
extern real_T BS_Deriv_UL;             /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S118>/Saturation'
                                        */
extern real_T BS_Position_Dec_RL;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S121>/Constant1'
                                        */
extern real_T BS_Position_Inc_RL;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S121>/Constant3'
                                        */
extern real_T BS_Prop_Gain;            /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S118>/Gain1'
                                        */
extern real_T BS_TC_LL;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S118>/Saturation2'
                                        */
extern real_T BS_TC_UL;                /* Variable: BS_TC_UL
                                        * Referenced by: '<S118>/Saturation2'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S365>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S363>/Constant'
                                        *   '<S363>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S365>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S363>/Constant1'
                                        */
extern real_T Cal_Back_Lower_Arm_DC;   /* Variable: Cal_Back_Lower_Arm_DC
                                        * Referenced by: '<S12>/Constant32'
                                        */
extern real_T Cal_Back_Upper_Arm_DC;   /* Variable: Cal_Back_Upper_Arm_DC
                                        * Referenced by: '<S12>/Constant27'
                                        */
extern real_T Cal_Ball_Screw_Arm_DC;   /* Variable: Cal_Ball_Screw_Arm_DC
                                        * Referenced by: '<S12>/Constant34'
                                        */
extern real_T Cal_Front_Arm_DC;        /* Variable: Cal_Front_Arm_DC
                                        * Referenced by: '<S12>/Constant33'
                                        */
extern real_T Dist_Per_Rev_Back_Lower; /* Variable: Dist_Per_Rev_Back_Lower
                                        * Referenced by: '<S18>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Back_Upper; /* Variable: Dist_Per_Rev_Back_Upper
                                        * Referenced by: '<S19>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Ball_Screw; /* Variable: Dist_Per_Rev_Ball_Screw
                                        * Referenced by: '<S20>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Front;      /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S21>/Rev_2_Dist'
                                        */
extern real_T Dist_Reset_Motor_Current_Back_Lower;
                                /* Variable: Dist_Reset_Motor_Current_Back_Lower
                                 * Referenced by: '<S18>/Dist_Reset_Motor_Current_Threshold'
                                 */
extern real_T Dist_Reset_Motor_Current_Back_Upper;
                                /* Variable: Dist_Reset_Motor_Current_Back_Upper
                                 * Referenced by: '<S19>/Dist_Reset_Motor_Current_Threshold'
                                 */
extern real_T Dist_Reset_Motor_Current_Ball_Screw;
                                /* Variable: Dist_Reset_Motor_Current_Ball_Screw
                                 * Referenced by: '<S20>/Dist_Reset_Motor_Current_Threshold'
                                 */
extern real_T Dist_Reset_Motor_Current_Front;
                                     /* Variable: Dist_Reset_Motor_Current_Front
                                      * Referenced by: '<S21>/Dist_Reset_Motor_Current_Threshold'
                                      */
extern real_T Dist_Reset_Value_Back_Lower;/* Variable: Dist_Reset_Value_Back_Lower
                                           * Referenced by: '<S18>/Dist_Reset_Value'
                                           */
extern real_T Dist_Reset_Value_Back_Upper;/* Variable: Dist_Reset_Value_Back_Upper
                                           * Referenced by: '<S19>/Dist_Reset_Value'
                                           */
extern real_T Dist_Reset_Value_Ball_Screw;/* Variable: Dist_Reset_Value_Ball_Screw
                                           * Referenced by: '<S20>/Dist_Reset_Value'
                                           */
extern real_T Dist_Reset_Value_Front;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by: '<S21>/Dist_Reset_Value'
                                        */
extern real_T Distance_FL_y;           /* Variable: Distance_FL_y
                                        * Referenced by: '<S298>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S214>/Constant3'
                                        *   '<S235>/Constant3'
                                        *   '<S256>/Constant3'
                                        *   '<S277>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S214>/Constant2'
                                   *   '<S235>/Constant2'
                                   *   '<S256>/Constant2'
                                   *   '<S277>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S214>/Saturation'
                                        *   '<S235>/Saturation'
                                        *   '<S256>/Saturation'
                                        *   '<S277>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S214>/Saturation'
                                        *   '<S235>/Saturation'
                                        *   '<S256>/Saturation'
                                        *   '<S277>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S214>/Gain'
                                        *   '<S235>/Gain'
                                        *   '<S256>/Gain'
                                        *   '<S277>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S214>/Gain2'
                                        *   '<S235>/Gain2'
                                        *   '<S256>/Gain2'
                                        *   '<S277>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S214>/Saturation1'
                                        *   '<S235>/Saturation1'
                                        *   '<S256>/Saturation1'
                                        *   '<S277>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S214>/Saturation1'
                                        *   '<S235>/Saturation1'
                                        *   '<S256>/Saturation1'
                                        *   '<S277>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S214>/Gain1'
                                        *   '<S235>/Gain1'
                                        *   '<S256>/Gain1'
                                        *   '<S277>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S219>/Constant'
                            *   '<S240>/Constant'
                            *   '<S261>/Constant'
                            *   '<S282>/Constant'
                            */
extern real_T Gamepad_Stick_Down_Threshold;/* Variable: Gamepad_Stick_Down_Threshold
                                            * Referenced by:
                                            *   '<S22>/Constant'
                                            *   '<S24>/Constant'
                                            */
extern real_T Gamepad_Stick_Up_Threshold;/* Variable: Gamepad_Stick_Up_Threshold
                                          * Referenced by:
                                          *   '<S23>/Constant'
                                          *   '<S25>/Constant'
                                          */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S9>/Constant1'
                                        *   '<S9>/Constant2'
                                        */
extern real_T KF_Vision_Ambiguity_Thresh;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S9>/Constant'
                                          */
extern real_T LoadShooter_Angle;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T LoadShooter_Gap;         /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T LoadShooter_Height;      /* Variable: LoadShooter_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Note_Detect_Dist_Intake; /* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Detect_Dist_Shooter;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Eject;         /* Variable: Note_Time_Eject
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Speaker_Spin_Up;/* Variable: Note_Time_Speaker_Spin_Up
                                         * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                         */
extern real_T Note_Time_Transfer;      /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Transfer_Spin_Up;/* Variable: Note_Time_Transfer_Spin_Up
                                          * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                          */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S11>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S106>/Constant'
                                        */
extern real_T Servo_Position_Deploy;   /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Servo_Position_Store;    /* Variable: Servo_Position_Store
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Servo_Time_Deploy;       /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Servo_Time_Store;        /* Variable: Servo_Time_Store
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Shooter_DC_Eject;        /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                        */
extern real_T Shooter_Motor_Control_FF;/* Variable: Shooter_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S39>/Gain'
                                        *   '<S40>/Gain'
                                        */
extern real_T Shooter_Motor_Control_I; /* Variable: Shooter_Motor_Control_I
                                        * Referenced by:
                                        *   '<S39>/Gain2'
                                        *   '<S40>/Gain2'
                                        */
extern real_T Shooter_Motor_Control_I_LL;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S39>/Saturation1'
                                          *   '<S40>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_I_UL;/* Variable: Shooter_Motor_Control_I_UL
                                          * Referenced by:
                                          *   '<S39>/Saturation1'
                                          *   '<S40>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_P; /* Variable: Shooter_Motor_Control_P
                                        * Referenced by:
                                        *   '<S39>/Gain1'
                                        *   '<S40>/Gain1'
                                        */
extern real_T Shooter_Motor_DesSpd_Store;/* Variable: Shooter_Motor_DesSpd_Store
                                          * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                          */
extern real_T Shooter_Motor_Speed_Transition;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S7>/Chart_Intake_and_Shooter'
                                      */
extern real_T Speaker_Gap;             /* Variable: Speaker_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S199>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S199>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S146>/Constant'
                             */
extern real_T Spline_Ref_Poses_switch_num;/* Variable: Spline_Ref_Poses_switch_num
                                           * Referenced by: '<S3>/Constant16'
                                           */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S159>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S199>/Constant3'
                                     */
extern real_T Stage_Angle;             /* Variable: Stage_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Stage_Gap;               /* Variable: Stage_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Stage_Height;            /* Variable: Stage_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Steering_Abs_Deadband_Range;/* Variable: Steering_Abs_Deadband_Range
                                           * Referenced by: '<S353>/Constant2'
                                           */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S319>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S319>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S319>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S319>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S318>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S319>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S319>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S319>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S319>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S319>/Constant1'
                                   *   '<S319>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S319>/Constant'
                                   *   '<S319>/Saturation2'
                                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S309>/Constant5'
                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S309>/Constant6'
                   */
extern real_T Steering_Localized_Cmd_NonZero_Error_Thresh;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S309>/Constant9'
                         */
extern real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S309>/Constant10'
                   */
extern real_T Steering_Localized_Cmd_Rate_Limit_Dec;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S309>/Constant1'
                               */
extern real_T Steering_Localized_Cmd_Rate_Limit_Inc;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S309>/Constant3'
                               */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S217>/Constant3'
                                        *   '<S238>/Constant3'
                                        *   '<S259>/Constant3'
                                        *   '<S280>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S217>/Constant2'
                                *   '<S238>/Constant2'
                                *   '<S259>/Constant2'
                                *   '<S280>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S217>/Saturation'
                                           *   '<S238>/Saturation'
                                           *   '<S259>/Saturation'
                                           *   '<S280>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S217>/Saturation'
                                           *   '<S238>/Saturation'
                                           *   '<S259>/Saturation'
                                           *   '<S280>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S217>/Gain2'
                                        *   '<S238>/Gain2'
                                        *   '<S259>/Gain2'
                                        *   '<S280>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S217>/Saturation1'
                                           *   '<S238>/Saturation1'
                                           *   '<S259>/Saturation1'
                                           *   '<S280>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S217>/Saturation1'
                                           *   '<S238>/Saturation1'
                                           *   '<S259>/Saturation1'
                                           *   '<S280>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S217>/Gain1'
                                        *   '<S238>/Gain1'
                                        *   '<S259>/Gain1'
                                        *   '<S280>/Gain1'
                                        */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S351>/Constant'
                                        */
extern real_T TEST_Servo_Override_Flag;/* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S7>/Constant4'
                                        */
extern real_T TEST_Servo_Override_Value;/* Variable: TEST_Servo_Override_Value
                                         * Referenced by: '<S7>/Constant5'
                                         */
extern real_T TEST_Speaker_Angle;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by:
                                        *   '<S7>/Constant6'
                                        *   '<S12>/Constant26'
                                        */
extern real_T TEST_Speaker_Height;     /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S12>/Constant25'
                                        */
extern real_T Tol_Angle;               /* Variable: Tol_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Tol_Gap;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Tol_Height;              /* Variable: Tol_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S297>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S297>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S297>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S297>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S297>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S297>/Constant3'
                                    */
extern real_T Trap_Angle;              /* Variable: Trap_Angle
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Trap_Gap;                /* Variable: Trap_Gap
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */
extern real_T Trap_Height;             /* Variable: Trap_Height
                                        * Referenced by: '<S12>/Chart_Shooter_Position'
                                        */

/* Model entry point functions */
extern void Code_Gen_Model_initialize(void);
extern void Code_Gen_Model_step(void);
extern void Code_Gen_Model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S41>/Data Type Duplicate' : Unused code path elimination
 * Block '<S41>/Data Type Propagation' : Unused code path elimination
 * Block '<S39>/Scope' : Unused code path elimination
 * Block '<S42>/Data Type Duplicate' : Unused code path elimination
 * Block '<S42>/Data Type Propagation' : Unused code path elimination
 * Block '<S40>/Scope' : Unused code path elimination
 * Block '<S86>/Data Type Duplicate' : Unused code path elimination
 * Block '<S87>/Data Type Duplicate' : Unused code path elimination
 * Block '<S88>/Conversion' : Unused code path elimination
 * Block '<S88>/Data Type Duplicate' : Unused code path elimination
 * Block '<S89>/Data Type Duplicate' : Unused code path elimination
 * Block '<S47>/Data Type Duplicate' : Unused code path elimination
 * Block '<S48>/Data Type Duplicate' : Unused code path elimination
 * Block '<S49>/Data Type Duplicate' : Unused code path elimination
 * Block '<S50>/Data Type Duplicate' : Unused code path elimination
 * Block '<S51>/Data Type Duplicate' : Unused code path elimination
 * Block '<S52>/Data Type Duplicate' : Unused code path elimination
 * Block '<S53>/Data Type Duplicate' : Unused code path elimination
 * Block '<S54>/Conversion' : Unused code path elimination
 * Block '<S54>/Data Type Duplicate' : Unused code path elimination
 * Block '<S55>/Data Type Duplicate' : Unused code path elimination
 * Block '<S56>/Data Type Duplicate' : Unused code path elimination
 * Block '<S57>/Data Type Duplicate' : Unused code path elimination
 * Block '<S59>/Data Type Duplicate' : Unused code path elimination
 * Block '<S60>/Data Type Duplicate' : Unused code path elimination
 * Block '<S43>/G' : Unused code path elimination
 * Block '<S43>/H' : Unused code path elimination
 * Block '<S43>/N' : Unused code path elimination
 * Block '<S43>/P0' : Unused code path elimination
 * Block '<S43>/Q' : Unused code path elimination
 * Block '<S43>/R' : Unused code path elimination
 * Block '<S75>/CheckSignalProperties' : Unused code path elimination
 * Block '<S84>/CheckSignalProperties' : Unused code path elimination
 * Block '<S85>/CheckSignalProperties' : Unused code path elimination
 * Block '<S115>/Scope' : Unused code path elimination
 * Block '<S116>/Scope' : Unused code path elimination
 * Block '<S117>/Scope' : Unused code path elimination
 * Block '<S118>/Scope' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Data Type Propagation' : Unused code path elimination
 * Block '<S133>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S135>/Data Type Duplicate' : Unused code path elimination
 * Block '<S135>/Data Type Propagation' : Unused code path elimination
 * Block '<S136>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S138>/Data Type Duplicate' : Unused code path elimination
 * Block '<S138>/Data Type Propagation' : Unused code path elimination
 * Block '<S139>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S141>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/Data Type Propagation' : Unused code path elimination
 * Block '<S142>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S13>/Gain' : Unused code path elimination
 * Block '<S13>/Gain1' : Unused code path elimination
 * Block '<S13>/Scope' : Unused code path elimination
 * Block '<S158>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S162>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S168>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S202>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S146>/To Workspace' : Unused code path elimination
 * Block '<S146>/To Workspace1' : Unused code path elimination
 * Block '<S222>/Data Type Duplicate' : Unused code path elimination
 * Block '<S222>/Data Type Propagation' : Unused code path elimination
 * Block '<S214>/Scope' : Unused code path elimination
 * Block '<S216>/Scope' : Unused code path elimination
 * Block '<S233>/Data Type Duplicate' : Unused code path elimination
 * Block '<S233>/Data Type Propagation' : Unused code path elimination
 * Block '<S217>/Scope' : Unused code path elimination
 * Block '<S243>/Data Type Duplicate' : Unused code path elimination
 * Block '<S243>/Data Type Propagation' : Unused code path elimination
 * Block '<S235>/Scope' : Unused code path elimination
 * Block '<S237>/Scope' : Unused code path elimination
 * Block '<S254>/Data Type Duplicate' : Unused code path elimination
 * Block '<S254>/Data Type Propagation' : Unused code path elimination
 * Block '<S238>/Scope' : Unused code path elimination
 * Block '<S264>/Data Type Duplicate' : Unused code path elimination
 * Block '<S264>/Data Type Propagation' : Unused code path elimination
 * Block '<S256>/Scope' : Unused code path elimination
 * Block '<S258>/Scope' : Unused code path elimination
 * Block '<S275>/Data Type Duplicate' : Unused code path elimination
 * Block '<S275>/Data Type Propagation' : Unused code path elimination
 * Block '<S259>/Scope' : Unused code path elimination
 * Block '<S285>/Data Type Duplicate' : Unused code path elimination
 * Block '<S285>/Data Type Propagation' : Unused code path elimination
 * Block '<S277>/Scope' : Unused code path elimination
 * Block '<S279>/Scope' : Unused code path elimination
 * Block '<S296>/Data Type Duplicate' : Unused code path elimination
 * Block '<S296>/Data Type Propagation' : Unused code path elimination
 * Block '<S280>/Scope' : Unused code path elimination
 * Block '<S307>/Data Type Duplicate' : Unused code path elimination
 * Block '<S307>/Data Type Propagation' : Unused code path elimination
 * Block '<S308>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S316>/Data Type Duplicate' : Unused code path elimination
 * Block '<S316>/Data Type Propagation' : Unused code path elimination
 * Block '<S317>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S323>/Data Type Duplicate' : Unused code path elimination
 * Block '<S323>/Data Type Propagation' : Unused code path elimination
 * Block '<S319>/Scope' : Unused code path elimination
 * Block '<S367>/Data Type Duplicate' : Unused code path elimination
 * Block '<S367>/Data Type Propagation' : Unused code path elimination
 * Block '<S368>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S86>/Conversion' : Eliminate redundant data type conversion
 * Block '<S87>/Conversion' : Eliminate redundant data type conversion
 * Block '<S89>/Conversion' : Eliminate redundant data type conversion
 * Block '<S43>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S59>/Conversion' : Eliminate redundant data type conversion
 * Block '<S63>/Reshape' : Reshape block reduction
 * Block '<S43>/ReshapeX0' : Reshape block reduction
 * Block '<S43>/Reshapeu' : Reshape block reduction
 * Block '<S43>/Reshapexhat' : Reshape block reduction
 * Block '<S9>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S9>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S198>/Signal Copy' : Eliminate redundant signal conversion block
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Code_Gen_Model'
 * '<S1>'   : 'Code_Gen_Model/RoboRio Controls'
 * '<S2>'   : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation'
 * '<S3>'   : 'Code_Gen_Model/RoboRio Controls/Autonomous'
 * '<S4>'   : 'Code_Gen_Model/RoboRio Controls/Degrees to Radians'
 * '<S5>'   : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Back_Lower'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Back_Upper'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Ball_Screw'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Front'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Chart_Intake_and_Shooter'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant1'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant2'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant3'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant4'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase1'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase2'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase3'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase4'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left/Saturation Dynamic'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right/Saturation Dynamic'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_AA_To_Extentions'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_Extentions_to_AA'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Chart_Shooter_Position'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_AA_To_Extentions'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_Extentions_to_AA'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Angle_Gap_Height'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Arm_Lengths'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD1'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD2'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD/Difference'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD/Low_Pass_Filter'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD1/Difference'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD1/Low_Pass_Filter'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD2/Difference'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD2/Low_Pass_Filter'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Difference'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Low_Pass_Filter'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Saturation Dynamic'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Unit Delay External IC'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Saturation Dynamic'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Unit Delay External IC'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Saturation Dynamic'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Unit Delay External IC'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Saturation Dynamic'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Unit Delay External IC'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Circular Deadband'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero1'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero2'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero3'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero4'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

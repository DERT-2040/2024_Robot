/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.90
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Feb 25 18:59:29 2024
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
  real_T FL_Steer_Module_Angle;        /* '<S222>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S223>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S224>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S225>/Add1' */
  real_T Drive_Joystick_X;             /* '<S6>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S6>/Signal Copy2' */
  real_T Steer_Joystick_X;             /* '<S6>/Signal Copy4' */
  real_T Steer_Joystick_Y;             /* '<S6>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S6>/Signal Copy6' */
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
  real_T Translation_Speed_RL;         /* '<S324>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S13>/Merge3' */
  real_T Translation_Steering_Cmd;     /* '<S318>/Switch' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S13>/Merge1' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S13>/Merge' */
  real_T Gyro_Angle_Adjustment_SPF;    /* '<S13>/Merge6' */
  real_T Steering_Localized_PID;       /* '<S337>/Saturation2' */
  real_T Steering_Localized_Cmd;       /* '<S333>/Sum' */
  real_T Switch1;                      /* '<S363>/Switch1' */
  real_T Switch1_m;                    /* '<S348>/Switch1' */
  real_T Switch1_o;                    /* '<S353>/Switch1' */
  real_T Switch1_p;                    /* '<S358>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S343>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S363>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S343>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S348>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S343>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S353>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S343>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S358>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S124>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S124>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S124>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S124>/Subtract' */
  real_T Back_Upper_Arm_Length;        /* '<S19>/Subtract1' */
  real_T State_Request_Arm_d;          /* '<S10>/Merge12' */
  real_T Back_Lower_Arm_Length;        /* '<S18>/Subtract1' */
  real_T Front_Arm_Length;             /* '<S21>/Subtract1' */
  real_T Ball_Screw_Arm_Length;        /* '<S20>/Subtract1' */
  real_T Meas_Angle;                   /* '<S12>/Gain2' */
  real_T Desired_Back_Upper_Dist;      /* '<S152>/Sum' */
  real_T Desired_Back_Lower_Dist;      /* '<S149>/Sum' */
  real_T Desired_Front_Dist;           /* '<S158>/Sum' */
  real_T Desired_Ball_Screw_Dist;      /* '<S155>/Sum' */
  real_T State_Request_Intake_Shooter_h;/* '<S10>/Merge11' */
  real_T Drive_Joystick_Z;             /* '<S6>/Signal Copy3' */
  real_T Spline_Index;                 /* '<S167>/Merge4' */
  real_T Spline_Target_Y;              /* '<S164>/Selector6' */
  real_T Spline_Target_X;              /* '<S164>/Selector2' */
  real_T Assignment[450];              /* '<S189>/Assignment' */
  real_T Meas_Height;                  /* '<S12>/Get_Angle_Gap_Height' */
  real_T Meas_Gap;                     /* '<S12>/Get_Angle_Gap_Height' */
  real_T Desired_Angle;                /* '<S12>/Chart_Shooter_Position' */
  real_T Desired_Height;               /* '<S12>/Chart_Shooter_Position' */
  real_T Desired_Gap;                  /* '<S12>/Chart_Shooter_Position' */
  real_T Product2[2];                  /* '<S114>/Product2' */
  real_T Product3[2];                  /* '<S112>/Product3' */
  real_T Shooter_Motor_Speed_Left;     /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Left;        /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Right;    /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Right;       /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Note_State_ID;                /* '<S7>/Chart_Intake_and_Shooter' */
  real_T Shooter_Servo_Pos;            /* '<S7>/Chart_Intake_and_Shooter' */
  uint16_T WhileIterator;              /* '<S214>/While Iterator' */
  boolean_T Arm_Dist_Cal_Active;       /* '<S26>/Compare' */
  boolean_T Is_Boosting;               /* '<S6>/Signal Copy7' */
  boolean_T Face_Toward_Driver;        /* '<S6>/Signal Copy17' */
  boolean_T Face_Right_Driver;         /* '<S6>/Signal Copy19' */
  boolean_T Face_Left_Driver;          /* '<S6>/Signal Copy18' */
  boolean_T Face_Away_Driver;          /* '<S6>/Signal Copy10' */
  boolean_T Spline_Enable;             /* '<S10>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S13>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S13>/Merge5' */
  boolean_T Back_Lower_Arm_Cal_Success;/* '<S18>/Switch2' */
  boolean_T Arm_Dist_Cal_Active_p;     /* '<S10>/Merge10' */
  boolean_T Back_Upper_Arm_Cal_Success;/* '<S19>/Switch2' */
  boolean_T Front_Arm_Cal_Success;     /* '<S21>/Switch2' */
  boolean_T Ball_Screw_Arm_Cal_Success;/* '<S20>/Switch2' */
  boolean_T Robot_Reached_Destination; /* '<S13>/Merge7' */
  boolean_T Align_Speaker;             /* '<S6>/Signal Copy16' */
  boolean_T Align_Amp;                 /* '<S6>/Signal Copy9' */
  boolean_T Align_Trap;                /* '<S6>/Signal Copy8' */
  boolean_T Chain_Button;              /* '<S6>/OR4' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S167>/Merge1' */
  boolean_T Shooter_Motor_Speed_Control_Ena;/* '<S7>/Chart_Intake_and_Shooter' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S116>/UD' */
  real_T UD_DSTATE_m;                  /* '<S117>/UD' */
  real_T UD_DSTATE_i;                  /* '<S118>/UD' */
  real_T UD_DSTATE_c;                  /* '<S119>/UD' */
  real_T DelayInput1_DSTATE;           /* '<S45>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S6>/Unit Delay1' */
  real_T TappedDelay_X[6];             /* '<S9>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S9>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S61>/MemoryX' */
  real_T UD_DSTATE_d;                  /* '<S115>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S11>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S11>/Accumulator' */
  real_T UnitDelay1_DSTATE_i;          /* '<S340>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S339>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S337>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S302>/Unit Delay1' */
  real_T UD_DSTATE_cs;                 /* '<S301>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S295>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S313>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S312>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S298>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S239>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S238>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S232>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S250>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S249>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S235>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S260>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S259>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S253>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S271>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S270>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S256>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S281>/Unit Delay1' */
  real_T UD_DSTATE_lh;                 /* '<S280>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S274>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S292>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S291>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S277>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S124>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S124>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nc;         /* '<S19>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_g;          /* '<S18>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bc;         /* '<S21>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_fp;         /* '<S20>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bm;         /* '<S142>/Unit Delay1' */
  real_T UD_DSTATE_n;                  /* '<S141>/UD' */
  real_T UnitDelay1_DSTATE_l;          /* '<S144>/Unit Delay1' */
  real_T UD_DSTATE_bi;                 /* '<S143>/UD' */
  real_T UnitDelay1_DSTATE_bg;         /* '<S146>/Unit Delay1' */
  real_T UD_DSTATE_g;                  /* '<S145>/UD' */
  real_T UnitDelay1_DSTATE_j;          /* '<S148>/Unit Delay1' */
  real_T UD_DSTATE_ii;                 /* '<S147>/UD' */
  real_T UnitDelay_DSTATE_mw;          /* '<S57>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S58>/Unit Delay' */
  real_T UnitDelay_DSTATE_gj;          /* '<S369>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d2;         /* '<S379>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S379>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S369>/Unit Delay1' */
  real_T UnitDelay_DSTATE_hh;          /* '<S378>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kr;         /* '<S378>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_lw;         /* '<S388>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S388>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S392>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S163>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S162>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S215>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4g;         /* '<S215>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S165>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S165>/Unit Delay1' */
  real_T timer;                        /* '<S7>/Chart_Intake_and_Shooter' */
  int32_T Selector4_DIMS1[2];          /* '<S184>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S326>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S335>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S154>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_h;    /* '<S151>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S160>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S157>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S392>/FixPt Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S8>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S52>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S53>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S55>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S54>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S56>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S374>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S375>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S376>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S377>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S369>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S170>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S175>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S11>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S11>/Accumulator' */
  int8_T If_ActiveSubsystem;           /* '<S13>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S167>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S170>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S172>/If' */
  uint8_T is_active_c5_Code_Gen_Model; /* '<S12>/Chart_Shooter_Position' */
  uint8_T is_c5_Code_Gen_Model;        /* '<S12>/Chart_Shooter_Position' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S7>/Chart_Intake_and_Shooter' */
  uint8_T is_c4_Code_Gen_Model;        /* '<S7>/Chart_Intake_and_Shooter' */
  boolean_T icLoad;                    /* '<S61>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S88>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S81>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T MathFunction1;          /* '<S127>/Math Function1' */
  const real_T MathFunction1_d;        /* '<S129>/Math Function1' */
  const real_T MathFunction1_m;        /* '<S130>/Math Function1' */
  const real_T Cos5;                   /* '<S243>/Cos5' */
  const real_T Sin5;                   /* '<S243>/Sin5' */
  const real_T Cos5_g;                 /* '<S264>/Cos5' */
  const real_T Sin5_m;                 /* '<S264>/Sin5' */
  const real_T Cos5_i;                 /* '<S285>/Cos5' */
  const real_T Sin5_e;                 /* '<S285>/Sin5' */
  const real_T Cos5_b;                 /* '<S306>/Cos5' */
  const real_T Sin5_c;                 /* '<S306>/Sin5' */
  const real_T Atan1;                  /* '<S316>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S316>/Add1' */
  const real_T Atan3;                  /* '<S316>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S316>/Add2' */
  const real_T Atan4;                  /* '<S316>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S316>/Add3' */
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
   * Referenced by: '<S162>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S162>/Capture Radius'
   *   '<S162>/Lookahead Distance'
   */
  real_T pooled8[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S162>/Lookahead Distance'
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
   * Referenced by: '<S369>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S369>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S370>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S370>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S11>/Constant4'
   */
  real_T Constant4_Value_d[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S234>/1-D Lookup Table'
   *   '<S255>/1-D Lookup Table'
   *   '<S276>/1-D Lookup Table'
   *   '<S297>/1-D Lookup Table'
   */
  real_T pooled39[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S234>/1-D Lookup Table'
   *   '<S255>/1-D Lookup Table'
   *   '<S276>/1-D Lookup Table'
   *   '<S297>/1-D Lookup Table'
   */
  real_T pooled40[2];

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
  real_T Joystick_Left_B8;             /* '<Root>/Joystick_Left_B8' */
  real_T Joystick_Left_B10;            /* '<Root>/Joystick_Left_B10' */
  real_T Joystick_Right_B1;            /* '<Root>/Joystick_Right_B1' */
  real_T Joystick_Right_B2;            /* '<Root>/Joystick_Right_B2' */
  real_T Joystick_Right_B3;            /* '<Root>/Joystick_Right_B3' */
  real_T Joystick_Right_B4;            /* '<Root>/Joystick_Right_B4' */
  real_T Joystick_Right_POV;           /* '<Root>/Joystick_Right_POV' */
  real_T Joystick_Right_B8;            /* '<Root>/Joystick_Right_B8' */
  real_T Joystick_Right_B10;           /* '<Root>/Joystick_Right_B10' */
  real_T Gamepad_Stick_Left_Y;         /* '<Root>/Gamepad_Stick_Left_Y' */
  real_T Gamepad_Stick_Right_Y;        /* '<Root>/Gamepad_Stick_Right_Y' */
  real_T Gamepad_B1_A;                 /* '<Root>/Gamepad_B1_A' */
  real_T Gamepad_LB;                   /* '<Root>/Gamepad_LB' */
  real_T Gamepad_LT;                   /* '<Root>/Gamepad_LT' */
  real_T Gamepad_RB;                   /* '<Root>/Gamepad_RB' */
  real_T Gamepad_RT;                   /* '<Root>/Gamepad_RT' */
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
  real_T AT_Tag_4_Yaw;                 /* '<Root>/AT_Tag_4_Yaw' */
  real_T AT_Tag_5_Yaw;                 /* '<Root>/AT_Tag_5_Yaw' */
  real_T AT_Tag_6_Yaw;                 /* '<Root>/AT_Tag_6_Yaw' */
  real_T AT_Tag_7_Yaw;                 /* '<Root>/AT_Tag_7_Yaw' */
  real_T AT_Tag_4_Found;               /* '<Root>/AT_Tag_4_Found' */
  real_T AT_Tag_5_Found;               /* '<Root>/AT_Tag_5_Found' */
  real_T AT_Tag_6_Found;               /* '<Root>/AT_Tag_6_Found' */
  real_T AT_Tag_7_Found;               /* '<Root>/AT_Tag_7_Found' */
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
                                        *   '<S133>/Constant2'
                                        *   '<S134>/Constant2'
                                        *   '<S135>/Constant2'
                                        */
extern real_T AA_Deriv_Gain;           /* Variable: AA_Deriv_Gain
                                        * Referenced by:
                                        *   '<S133>/Constant3'
                                        *   '<S134>/Constant3'
                                        *   '<S135>/Constant3'
                                        */
extern real_T AA_Deriv_LL;             /* Variable: AA_Deriv_LL
                                        * Referenced by:
                                        *   '<S133>/Saturation'
                                        *   '<S134>/Saturation'
                                        *   '<S135>/Saturation'
                                        */
extern real_T AA_Deriv_UL;             /* Variable: AA_Deriv_UL
                                        * Referenced by:
                                        *   '<S133>/Saturation'
                                        *   '<S134>/Saturation'
                                        *   '<S135>/Saturation'
                                        */
extern real_T AA_Position_Dec_RL;      /* Variable: AA_Position_Dec_RL
                                        * Referenced by:
                                        *   '<S137>/Constant1'
                                        *   '<S138>/Constant1'
                                        *   '<S140>/Constant1'
                                        */
extern real_T AA_Position_Inc_RL;      /* Variable: AA_Position_Inc_RL
                                        * Referenced by:
                                        *   '<S137>/Constant3'
                                        *   '<S138>/Constant3'
                                        *   '<S140>/Constant3'
                                        */
extern real_T AA_Prop_Gain;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S133>/Gain1'
                                        *   '<S134>/Gain1'
                                        *   '<S135>/Gain1'
                                        */
extern real_T AA_TC_LL;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S133>/Saturation2'
                                        *   '<S134>/Saturation2'
                                        *   '<S135>/Saturation2'
                                        */
extern real_T AA_TC_UL;                /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S133>/Saturation2'
                                        *   '<S134>/Saturation2'
                                        *   '<S135>/Saturation2'
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
                                        * Referenced by:
                                        *   '<S6>/Unit Delay1'
                                        *   '<S26>/Constant'
                                        */
extern real_T BS_Deriv_FC;             /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S136>/Constant2'
                                        */
extern real_T BS_Deriv_Gain;           /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S136>/Constant3'
                                        */
extern real_T BS_Deriv_LL;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S136>/Saturation'
                                        */
extern real_T BS_Deriv_UL;             /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S136>/Saturation'
                                        */
extern real_T BS_Position_Dec_RL;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S139>/Constant1'
                                        */
extern real_T BS_Position_Inc_RL;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S139>/Constant3'
                                        */
extern real_T BS_Prop_Gain;            /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S136>/Gain1'
                                        */
extern real_T BS_TC_LL;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S136>/Saturation2'
                                        */
extern real_T BS_TC_UL;                /* Variable: BS_TC_UL
                                        * Referenced by: '<S136>/Saturation2'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S389>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S387>/Constant'
                                        *   '<S387>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S389>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S387>/Constant1'
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
                                        * Referenced by: '<S316>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S232>/Constant3'
                                        *   '<S253>/Constant3'
                                        *   '<S274>/Constant3'
                                        *   '<S295>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S232>/Constant2'
                                   *   '<S253>/Constant2'
                                   *   '<S274>/Constant2'
                                   *   '<S295>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        *   '<S295>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        *   '<S295>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S232>/Gain'
                                        *   '<S253>/Gain'
                                        *   '<S274>/Gain'
                                        *   '<S295>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S232>/Gain2'
                                        *   '<S253>/Gain2'
                                        *   '<S274>/Gain2'
                                        *   '<S295>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        *   '<S295>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        *   '<S295>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S232>/Gain1'
                                        *   '<S253>/Gain1'
                                        *   '<S274>/Gain1'
                                        *   '<S295>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S237>/Constant'
                            *   '<S258>/Constant'
                            *   '<S279>/Constant'
                            *   '<S300>/Constant'
                            */
extern real_T Front_AA_Bot_Max_Ext;    /* Variable: Front_AA_Bot_Max_Ext
                                        * Referenced by: '<S129>/Saturation'
                                        */
extern real_T Front_AA_Bot_Min_Ext;    /* Variable: Front_AA_Bot_Min_Ext
                                        * Referenced by: '<S129>/Saturation'
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
                                        * Referenced by: '<S124>/Constant'
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
                                        *   '<S57>/Gain'
                                        *   '<S58>/Gain'
                                        */
extern real_T Shooter_Motor_Control_I; /* Variable: Shooter_Motor_Control_I
                                        * Referenced by:
                                        *   '<S57>/Gain2'
                                        *   '<S58>/Gain2'
                                        */
extern real_T Shooter_Motor_Control_I_LL;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S57>/Saturation1'
                                          *   '<S58>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_I_UL;/* Variable: Shooter_Motor_Control_I_UL
                                          * Referenced by:
                                          *   '<S57>/Saturation1'
                                          *   '<S58>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_P; /* Variable: Shooter_Motor_Control_P
                                        * Referenced by:
                                        *   '<S57>/Gain1'
                                        *   '<S58>/Gain1'
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
                          * Referenced by: '<S217>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S217>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S164>/Constant'
                             */
extern real_T Spline_Ref_Poses_switch_num;/* Variable: Spline_Ref_Poses_switch_num
                                           * Referenced by: '<S3>/Constant16'
                                           */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S177>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S217>/Constant3'
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
                                           * Referenced by: '<S371>/Constant2'
                                           */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S337>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S337>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S337>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S337>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S336>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S337>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S337>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S337>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S337>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S337>/Constant1'
                                   *   '<S337>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S337>/Constant'
                                   *   '<S337>/Saturation2'
                                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S327>/Constant5'
                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S327>/Constant6'
                   */
extern real_T Steering_Localized_Cmd_NonZero_Error_Thresh;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S327>/Constant9'
                         */
extern real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S327>/Constant10'
                   */
extern real_T Steering_Localized_Cmd_Rate_Limit_Dec;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S327>/Constant1'
                               */
extern real_T Steering_Localized_Cmd_Rate_Limit_Inc;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S327>/Constant3'
                               */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S235>/Constant3'
                                        *   '<S256>/Constant3'
                                        *   '<S277>/Constant3'
                                        *   '<S298>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S235>/Constant2'
                                *   '<S256>/Constant2'
                                *   '<S277>/Constant2'
                                *   '<S298>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S235>/Saturation'
                                           *   '<S256>/Saturation'
                                           *   '<S277>/Saturation'
                                           *   '<S298>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S235>/Saturation'
                                           *   '<S256>/Saturation'
                                           *   '<S277>/Saturation'
                                           *   '<S298>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S235>/Gain2'
                                        *   '<S256>/Gain2'
                                        *   '<S277>/Gain2'
                                        *   '<S298>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S235>/Saturation1'
                                           *   '<S256>/Saturation1'
                                           *   '<S277>/Saturation1'
                                           *   '<S298>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S235>/Saturation1'
                                           *   '<S256>/Saturation1'
                                           *   '<S277>/Saturation1'
                                           *   '<S298>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S235>/Gain1'
                                        *   '<S256>/Gain1'
                                        *   '<S277>/Gain1'
                                        *   '<S298>/Gain1'
                                        */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S369>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S369>/Constant1'
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
                        * Referenced by: '<S315>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S315>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S315>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S315>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S315>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S315>/Constant3'
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
 * Block '<S59>/Data Type Duplicate' : Unused code path elimination
 * Block '<S59>/Data Type Propagation' : Unused code path elimination
 * Block '<S57>/Scope' : Unused code path elimination
 * Block '<S60>/Data Type Duplicate' : Unused code path elimination
 * Block '<S60>/Data Type Propagation' : Unused code path elimination
 * Block '<S58>/Scope' : Unused code path elimination
 * Block '<S104>/Data Type Duplicate' : Unused code path elimination
 * Block '<S105>/Data Type Duplicate' : Unused code path elimination
 * Block '<S106>/Conversion' : Unused code path elimination
 * Block '<S106>/Data Type Duplicate' : Unused code path elimination
 * Block '<S107>/Data Type Duplicate' : Unused code path elimination
 * Block '<S65>/Data Type Duplicate' : Unused code path elimination
 * Block '<S66>/Data Type Duplicate' : Unused code path elimination
 * Block '<S67>/Data Type Duplicate' : Unused code path elimination
 * Block '<S68>/Data Type Duplicate' : Unused code path elimination
 * Block '<S69>/Data Type Duplicate' : Unused code path elimination
 * Block '<S70>/Data Type Duplicate' : Unused code path elimination
 * Block '<S71>/Data Type Duplicate' : Unused code path elimination
 * Block '<S72>/Conversion' : Unused code path elimination
 * Block '<S72>/Data Type Duplicate' : Unused code path elimination
 * Block '<S73>/Data Type Duplicate' : Unused code path elimination
 * Block '<S74>/Data Type Duplicate' : Unused code path elimination
 * Block '<S75>/Data Type Duplicate' : Unused code path elimination
 * Block '<S77>/Data Type Duplicate' : Unused code path elimination
 * Block '<S78>/Data Type Duplicate' : Unused code path elimination
 * Block '<S61>/G' : Unused code path elimination
 * Block '<S61>/H' : Unused code path elimination
 * Block '<S61>/N' : Unused code path elimination
 * Block '<S61>/P0' : Unused code path elimination
 * Block '<S61>/Q' : Unused code path elimination
 * Block '<S61>/R' : Unused code path elimination
 * Block '<S93>/CheckSignalProperties' : Unused code path elimination
 * Block '<S102>/CheckSignalProperties' : Unused code path elimination
 * Block '<S103>/CheckSignalProperties' : Unused code path elimination
 * Block '<S133>/Scope' : Unused code path elimination
 * Block '<S134>/Scope' : Unused code path elimination
 * Block '<S135>/Scope' : Unused code path elimination
 * Block '<S136>/Scope' : Unused code path elimination
 * Block '<S150>/Data Type Duplicate' : Unused code path elimination
 * Block '<S150>/Data Type Propagation' : Unused code path elimination
 * Block '<S151>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S153>/Data Type Duplicate' : Unused code path elimination
 * Block '<S153>/Data Type Propagation' : Unused code path elimination
 * Block '<S154>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S156>/Data Type Duplicate' : Unused code path elimination
 * Block '<S156>/Data Type Propagation' : Unused code path elimination
 * Block '<S157>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S159>/Data Type Duplicate' : Unused code path elimination
 * Block '<S159>/Data Type Propagation' : Unused code path elimination
 * Block '<S160>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S13>/Gain' : Unused code path elimination
 * Block '<S13>/Gain1' : Unused code path elimination
 * Block '<S13>/Scope' : Unused code path elimination
 * Block '<S176>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S180>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S186>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S220>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S164>/To Workspace' : Unused code path elimination
 * Block '<S164>/To Workspace1' : Unused code path elimination
 * Block '<S240>/Data Type Duplicate' : Unused code path elimination
 * Block '<S240>/Data Type Propagation' : Unused code path elimination
 * Block '<S232>/Scope' : Unused code path elimination
 * Block '<S234>/Scope' : Unused code path elimination
 * Block '<S251>/Data Type Duplicate' : Unused code path elimination
 * Block '<S251>/Data Type Propagation' : Unused code path elimination
 * Block '<S235>/Scope' : Unused code path elimination
 * Block '<S261>/Data Type Duplicate' : Unused code path elimination
 * Block '<S261>/Data Type Propagation' : Unused code path elimination
 * Block '<S253>/Scope' : Unused code path elimination
 * Block '<S255>/Scope' : Unused code path elimination
 * Block '<S272>/Data Type Duplicate' : Unused code path elimination
 * Block '<S272>/Data Type Propagation' : Unused code path elimination
 * Block '<S256>/Scope' : Unused code path elimination
 * Block '<S282>/Data Type Duplicate' : Unused code path elimination
 * Block '<S282>/Data Type Propagation' : Unused code path elimination
 * Block '<S274>/Scope' : Unused code path elimination
 * Block '<S276>/Scope' : Unused code path elimination
 * Block '<S293>/Data Type Duplicate' : Unused code path elimination
 * Block '<S293>/Data Type Propagation' : Unused code path elimination
 * Block '<S277>/Scope' : Unused code path elimination
 * Block '<S303>/Data Type Duplicate' : Unused code path elimination
 * Block '<S303>/Data Type Propagation' : Unused code path elimination
 * Block '<S295>/Scope' : Unused code path elimination
 * Block '<S297>/Scope' : Unused code path elimination
 * Block '<S314>/Data Type Duplicate' : Unused code path elimination
 * Block '<S314>/Data Type Propagation' : Unused code path elimination
 * Block '<S298>/Scope' : Unused code path elimination
 * Block '<S325>/Data Type Duplicate' : Unused code path elimination
 * Block '<S325>/Data Type Propagation' : Unused code path elimination
 * Block '<S326>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S334>/Data Type Duplicate' : Unused code path elimination
 * Block '<S334>/Data Type Propagation' : Unused code path elimination
 * Block '<S335>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S341>/Data Type Duplicate' : Unused code path elimination
 * Block '<S341>/Data Type Propagation' : Unused code path elimination
 * Block '<S337>/Scope' : Unused code path elimination
 * Block '<S391>/Data Type Duplicate' : Unused code path elimination
 * Block '<S391>/Data Type Propagation' : Unused code path elimination
 * Block '<S392>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S104>/Conversion' : Eliminate redundant data type conversion
 * Block '<S105>/Conversion' : Eliminate redundant data type conversion
 * Block '<S107>/Conversion' : Eliminate redundant data type conversion
 * Block '<S61>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S77>/Conversion' : Eliminate redundant data type conversion
 * Block '<S81>/Reshape' : Reshape block reduction
 * Block '<S61>/ReshapeX0' : Reshape block reduction
 * Block '<S61>/Reshapeu' : Reshape block reduction
 * Block '<S61>/Reshapexhat' : Reshape block reduction
 * Block '<S9>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S9>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S216>/Signal Copy' : Eliminate redundant signal conversion block
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
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero10'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero7'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero9'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Chart_Intake_and_Shooter'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant1'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant2'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant3'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant4'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase1'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase2'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase3'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase4'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left/Saturation Dynamic'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right/Saturation Dynamic'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_AA_To_Extentions'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_Extentions_to_AA'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Chart_Shooter_Position'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_AA_To_Extentions'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_Extentions_to_AA'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Angle_Gap_Height'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Arm_Lengths'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD1'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD2'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD/Difference'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD/Low_Pass_Filter'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD1/Difference'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD1/Low_Pass_Filter'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD2/Difference'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD2/Low_Pass_Filter'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Difference'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Low_Pass_Filter'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Saturation Dynamic'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Unit Delay External IC'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Saturation Dynamic'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Unit Delay External IC'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Saturation Dynamic'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Unit Delay External IC'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Saturation Dynamic'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Unit Delay External IC'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Circular Deadband'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero1'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero1'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero2'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero3'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero4'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

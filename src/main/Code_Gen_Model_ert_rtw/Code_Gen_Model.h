/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.157
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 15 20:23:33 2024
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
  real_T Climber_Cmd_Direction;        /* '<S9>/Switch9' */
  real_T Drive_Joystick_X;             /* '<S9>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S9>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S9>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S9>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S9>/Signal Copy6' */
  real_T State_Request_Intake_Shooter; /* '<S9>/Switch' */
  real_T State_Request_Arm;            /* '<S9>/Switch4' */
  real_T Odom_Position_X;              /* '<S14>/Accumulator2' */
  real_T KF_Position_X;                /* '<S12>/Switch' */
  real_T Odom_Position_Y;              /* '<S14>/Accumulator' */
  real_T KF_Position_Y;                /* '<S12>/Switch1' */
  real_T Distance_Speaker;             /* '<S7>/Switch2' */
  real_T Spline_Num_Poses;             /* '<S13>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S13>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S13>/Merge2' */
  real_T Translation_Speed;            /* '<S13>/Merge4' */
  real_T Translation_Angle;            /* '<S13>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S17>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S352>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S17>/Merge3' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S8>/Subtract1' */
  real_T Translation_Steering_Cmd;     /* '<S346>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S17>/Merge' */
  real_T Gyro_Angle_Adjustment_SPF;    /* '<S17>/Merge6' */
  real_T Steering_Localized_PID;       /* '<S365>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S17>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S361>/Sum' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S376>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S381>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S386>/Switch1' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S391>/Switch1' */
  real_T FL_Desired_Wheel_Speed;       /* '<S371>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S376>/Switch' */
  real_T FL_Steer_Module_Angle;        /* '<S250>/Add1' */
  real_T FR_Desired_Wheel_Speed;       /* '<S371>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S381>/Switch' */
  real_T FR_Steer_Module_Angle;        /* '<S251>/Add1' */
  real_T BL_Desired_Wheel_Speed;       /* '<S371>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S386>/Switch' */
  real_T BL_Steer_Module_Angle;        /* '<S252>/Add1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S371>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S391>/Switch' */
  real_T BR_Steer_Module_Angle;        /* '<S253>/Add1' */
  real_T State_Request_Intake_Shooter_h;/* '<S13>/Merge11' */
  real_T State_Request_Arm_d;          /* '<S13>/Merge12' */
  real_T Back_Lower_Arm_Length;        /* '<S22>/Subtract1' */
  real_T Back_Upper_Arm_Length;        /* '<S23>/Subtract1' */
  real_T Meas_Back_AA_Length;          /* '<S154>/Sqrt' */
  real_T Front_Arm_Length;             /* '<S25>/Subtract1' */
  real_T Meas_Front_AA_Length;         /* '<S158>/Sqrt' */
  real_T Ball_Screw_Arm_Length;        /* '<S24>/Subtract1' */
  real_T Meas_Angle;                   /* '<S16>/Gain2' */
  real_T Desired_Back_Upper_Dist;      /* '<S180>/Sum' */
  real_T Desired_Back_Lower_Dist;      /* '<S177>/Sum' */
  real_T Desired_Front_Dist;           /* '<S186>/Sum' */
  real_T Desired_Ball_Screw_Dist;      /* '<S183>/Sum' */
  real_T Steer_Joystick_X;             /* '<S9>/Signal Copy4' */
  real_T Product6[2];                  /* '<S14>/Product6' */
  real_T Odometry_X_global_est_ft;     /* '<S150>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S150>/Subtract' */
  real_T Odometry_Y_global_est_ft;     /* '<S150>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S150>/Subtract1' */
  real_T AT_Error_Yaw;                 /* '<S396>/Switch2' */
  real_T AT_Error_Y;                   /* '<S396>/Switch23' */
  real_T AT_Error_X;                   /* '<S396>/Switch15' */
  real_T Intake_Shooter_State_Request; /* '<S29>/Chart' */
  real_T SplineEnable;                 /* '<S29>/Chart' */
  real_T CurrentPriorityIndex;         /* '<S29>/Chart' */
  real_T AutoState;                    /* '<S29>/Chart' */
  real_T ArmStateRequest;              /* '<S29>/Chart' */
  real_T RelativeMoveForward;          /* '<S29>/Chart' */
  real_T Spline_Index;                 /* '<S195>/Merge4' */
  real_T Spline_Target_Y;              /* '<S192>/Selector6' */
  real_T Spline_Target_X;              /* '<S192>/Selector2' */
  real_T Assignment[450];              /* '<S217>/Assignment' */
  real_T Desired_Back_AA_Length;       /* '<S16>/Get_Arm_Lengths' */
  real_T Desired_Front_AA_Length;      /* '<S16>/Get_Arm_Lengths' */
  real_T Desired_BS_Length;            /* '<S16>/Get_Arm_Lengths' */
  real_T Meas_Height;                  /* '<S16>/Get_Angle_Gap_Height' */
  real_T Meas_Gap;                     /* '<S16>/Get_Angle_Gap_Height' */
  real_T Desired_Angle;                /* '<S16>/Chart_Shooter_Position' */
  real_T Desired_Height;               /* '<S16>/Chart_Shooter_Position' */
  real_T Desired_Gap;                  /* '<S16>/Chart_Shooter_Position' */
  real_T Shooter_Pos_State;            /* '<S16>/Chart_Shooter_Position' */
  real_T Product2[2];                  /* '<S140>/Product2' */
  real_T Product3[2];                  /* '<S138>/Product3' */
  real_T Intake_Motor_DC;              /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Left;     /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Left;        /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Right;    /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Right;       /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Note_State_ID;                /* '<S10>/Chart_Intake_and_Shooter' */
  uint16_T WhileIterator;              /* '<S242>/While Iterator' */
  uint8_T Prev_GameState;              /* '<S15>/Chart' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S44>/Compare' */
  boolean_T Is_Boosting;               /* '<S53>/Compare' */
  boolean_T Align_Trap;                /* '<S52>/Compare' */
  boolean_T Align_Amp;                 /* '<S51>/Compare' */
  boolean_T Align_Speaker;             /* '<S50>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S49>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S47>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S48>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S42>/Compare' */
  boolean_T Spline_Enable;             /* '<S13>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S17>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S17>/Merge5' */
  boolean_T Test_Mode;                 /* '<S13>/Merge10' */
  boolean_T Is_All_Arms_Cal_Position;  /* '<S2>/Logical Operator' */
  boolean_T Robot_Reached_Destination; /* '<S17>/Merge7' */
  boolean_T Line_Sensor_Boolean;       /* '<S28>/Compare' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S195>/Merge1' */
  boolean_T Shooter_Motor_Speed_Control_Ena;/* '<S10>/Chart_Intake_and_Shooter' */
  boolean_T Shooter_Brake_Enable_out;  /* '<S10>/Chart_Intake_and_Shooter' */
  boolean_T Shooter_Servo;             /* '<S10>/Chart_Intake_and_Shooter' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TappedDelay_X[6];             /* '<S12>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S12>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S87>/MemoryX' */
  real_T Accumulator2_DSTATE;          /* '<S14>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S14>/Accumulator' */
  real_T UnitDelay1_DSTATE;            /* '<S8>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S368>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S367>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S365>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S267>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S266>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S260>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S278>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S277>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S263>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S288>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S287>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S281>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S299>/Unit Delay1' */
  real_T UD_DSTATE_i;                  /* '<S298>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S284>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S309>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S308>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S302>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S320>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S319>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S305>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S330>/Unit Delay1' */
  real_T UD_DSTATE_c;                  /* '<S329>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S323>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S341>/Unit Delay1' */
  real_T UD_DSTATE_ll;                 /* '<S340>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S326>/Unit Delay' */
  real_T UnitDelay_DSTATE_mw;          /* '<S83>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S84>/Unit Delay' */
  real_T UnitDelay1_DSTATE_g;          /* '<S22>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_nc;         /* '<S23>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bc;         /* '<S25>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_fp;         /* '<S24>/Unit Delay1' */
  real_T UnitDelay_DSTATE_mg;          /* '<S162>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S163>/Unit Delay' */
  real_T UnitDelay_DSTATE_j;           /* '<S164>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j;          /* '<S170>/Unit Delay1' */
  real_T UD_DSTATE_ii;                 /* '<S169>/UD' */
  real_T UD_DSTATE_d;                  /* '<S141>/UD' */
  real_T UD_DSTATE_j;                  /* '<S142>/UD' */
  real_T UD_DSTATE_m;                  /* '<S143>/UD' */
  real_T UD_DSTATE_ic;                 /* '<S144>/UD' */
  real_T UD_DSTATE_ce;                 /* '<S145>/UD' */
  real_T UnitDelay_DSTATE_cg;          /* '<S150>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S150>/Unit Delay1' */
  real_T UnitDelay_DSTATE_gj;          /* '<S398>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S398>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_l;          /* '<S408>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S408>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S412>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S191>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S190>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S243>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S243>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S193>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S193>/Unit Delay1' */
  real_T Timer;                        /* '<S29>/Chart' */
  real_T CloseNoteCounter;             /* '<S29>/Chart' */
  real_T timer;                        /* '<S10>/Chart_Intake_and_Shooter' */
  int32_T Selector4_DIMS1[2];          /* '<S212>/Selector4' */
  uint32_T exitPortIndex;              /* '<S29>/Chart' */
  uint32_T exitPortIndex_n;            /* '<S29>/Chart' */
  uint32_T exitPortIndex_h;            /* '<S29>/Chart' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S354>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S363>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S182>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l5;   /* '<S179>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S188>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S412>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE;        /* '<S68>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_oz;       /* '<S1>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S11>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S77>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S78>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S80>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S79>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S81>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_i;      /* '<S82>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_hg;     /* '<S171>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S173>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S175>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S401>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S402>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S403>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S404>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S398>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S198>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S203>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S14>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S14>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S17>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S195>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S198>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S200>/If' */
  uint8_T is_active_c10_Code_Gen_Model;/* '<S29>/Chart' */
  uint8_T is_c10_Code_Gen_Model;       /* '<S29>/Chart' */
  uint8_T is_Note6;                    /* '<S29>/Chart' */
  uint8_T is_Note7;                    /* '<S29>/Chart' */
  uint8_T is_Note8;                    /* '<S29>/Chart' */
  uint8_T is_active_c5_Code_Gen_Model; /* '<S16>/Chart_Shooter_Position' */
  uint8_T is_c5_Code_Gen_Model;        /* '<S16>/Chart_Shooter_Position' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S15>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S15>/Chart' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S10>/Chart_Intake_and_Shooter' */
  uint8_T is_c4_Code_Gen_Model;        /* '<S10>/Chart_Intake_and_Shooter' */
  boolean_T icLoad;                    /* '<S87>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S114>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S107>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T MathFunction1;          /* '<S154>/Math Function1' */
  const real_T MathFunction1_d;        /* '<S157>/Math Function1' */
  const real_T MathFunction1_m;        /* '<S158>/Math Function1' */
  const real_T Cos5;                   /* '<S271>/Cos5' */
  const real_T Sin5;                   /* '<S271>/Sin5' */
  const real_T Cos5_g;                 /* '<S292>/Cos5' */
  const real_T Sin5_m;                 /* '<S292>/Sin5' */
  const real_T Cos5_i;                 /* '<S313>/Cos5' */
  const real_T Sin5_e;                 /* '<S313>/Sin5' */
  const real_T Cos5_b;                 /* '<S334>/Cos5' */
  const real_T Sin5_c;                 /* '<S334>/Sin5' */
  const real_T Atan1;                  /* '<S344>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S344>/Add1' */
  const real_T Atan3;                  /* '<S344>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S344>/Add2' */
  const real_T Atan4;                  /* '<S344>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S344>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S10>/1-D Lookup Table'
   *   '<S87>/X0'
   */
  real_T pooled1[2];

  /* Expression: Servo_Front_Arm_Length_in
   * Referenced by: '<S10>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[2];

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S10>/1-D Lookup Table1'
   *   '<S16>/1-D Lookup Table1'
   *   '<S16>/1-D Lookup Table2'
   *   '<S16>/1-D Lookup Table3'
   */
  real_T pooled3[10];

  /* Expression: Speaker_Height_out
   * Referenced by: '<S16>/1-D Lookup Table2'
   */
  real_T uDLookupTable2_tableData[10];

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S16>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData_p[10];

  /* Expression: Speaker_Gap_out
   * Referenced by: '<S16>/1-D Lookup Table3'
   */
  real_T uDLookupTable3_tableData[10];

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S190>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S190>/Capture Radius'
   *   '<S190>/Lookahead Distance'
   */
  real_T pooled9[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S190>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: All_Paths
   * Referenced by: '<S3>/Constant20'
   */
  real_T Constant20_Value[880];

  /* Expression: All_Num_Poses
   * Referenced by: '<S3>/Constant6'
   */
  real_T Constant6_Value[22];

  /* Expression: Yaw_angle_correction_yaw
   * Referenced by: '<S396>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[9];

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S396>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_g[9];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S398>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S398>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S399>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S399>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: [0 1 2]
   * Referenced by: '<Root>/Constant'
   */
  real_T Constant_Value_c[3];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S14>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S262>/1-D Lookup Table'
   *   '<S283>/1-D Lookup Table'
   *   '<S304>/1-D Lookup Table'
   *   '<S325>/1-D Lookup Table'
   */
  real_T pooled41[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S262>/1-D Lookup Table'
   *   '<S283>/1-D Lookup Table'
   *   '<S304>/1-D Lookup Table'
   *   '<S325>/1-D Lookup Table'
   */
  real_T pooled42[2];
} ConstP_Code_Gen_Model_T;

/* Constant parameters with dynamic initialization (default storage) */
typedef struct {
  /* Expression: All_Autos
   * Referenced by: '<S29>/Constant9'
   */
  real_T Constant9_Value[120];
} ConstInitP_Code_Gen_Model_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T GameState;                    /* '<Root>/GameState' */
  real_T IsRedAlliance;                /* '<Root>/IsRedAlliance' */
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
  real_T Joystick_Left_B7;             /* '<Root>/Joystick_Left_B7' */
  real_T Joystick_Left_B8;             /* '<Root>/Joystick_Left_B8' */
  real_T Joystick_Left_B10;            /* '<Root>/Joystick_Left_B10' */
  real_T Joystick_Left_B14;            /* '<Root>/Joystick_Left_B14' */
  real_T Joystick_Left_POV;            /* '<Root>/Joystick_Left_POV' */
  real_T Joystick_Right_B1;            /* '<Root>/Joystick_Right_B1' */
  real_T Joystick_Right_B2;            /* '<Root>/Joystick_Right_B2' */
  real_T Joystick_Right_B3;            /* '<Root>/Joystick_Right_B3' */
  real_T Joystick_Right_B4;            /* '<Root>/Joystick_Right_B4' */
  real_T Joystick_Right_B7;            /* '<Root>/Joystick_Right_B7' */
  real_T Joystick_Right_B8;            /* '<Root>/Joystick_Right_B8' */
  real_T Joystick_Right_B10;           /* '<Root>/Joystick_Right_B10' */
  real_T Joystick_Right_B14;           /* '<Root>/Joystick_Right_B14' */
  real_T Joystick_Right_POV;           /* '<Root>/Joystick_Right_POV' */
  real_T Gamepad_Stick_Left_X;         /* '<Root>/Gamepad_Stick_Left_X' */
  real_T Gamepad_Stick_Left_Y;         /* '<Root>/Gamepad_Stick_Left_Y' */
  real_T Gamepad_Stick_Right_X;        /* '<Root>/Gamepad_Stick_Right_X' */
  real_T Gamepad_Stick_Right_Y;        /* '<Root>/Gamepad_Stick_Right_Y' */
  real_T Gamepad_B1_A;                 /* '<Root>/Gamepad_B1_A' */
  real_T Gamepad_LB;                   /* '<Root>/Gamepad_LB' */
  real_T Gamepad_LT;                   /* '<Root>/Gamepad_LT' */
  real_T Gamepad_RB;                   /* '<Root>/Gamepad_RB' */
  real_T Gamepad_RT;                   /* '<Root>/Gamepad_RT' */
  real_T Gamepad_Back;                 /* '<Root>/Gamepad_Back' */
  real_T Gamepad_Start;                /* '<Root>/Gamepad_Start' */
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
  real_T Encoder_Revs_Back_Lower;      /* '<Root>/Encoder_Revs_Back_Lower' */
  real_T Encoder_Revs_Back_Upper;      /* '<Root>/Encoder_Revs_Back_Upper' */
  real_T Encoder_Revs_Front;           /* '<Root>/Encoder_Revs_Front' */
  real_T Encoder_Revs_Ball_Screw;      /* '<Root>/Encoder_Revs_Ball_Screw' */
  real_T Encoder_Revs_Climber;         /* '<Root>/Encoder_Revs_Climber' */
  real_T Gamepad_B4_Y;                 /* '<Root>/Gamepad_B4_Y' */
  real_T AT_Tag_4_Yaw;                 /* '<Root>/AT_Tag_4_Yaw' */
  real_T AT_Tag_5_Yaw;                 /* '<Root>/AT_Tag_5_Yaw' */
  real_T AT_Tag_6_Yaw;                 /* '<Root>/AT_Tag_6_Yaw' */
  real_T AT_Tag_7_Yaw;                 /* '<Root>/AT_Tag_7_Yaw' */
  real_T AT_Tag_11_Yaw;                /* '<Root>/AT_Tag_11_Yaw' */
  real_T AT_Tag_12_Yaw;                /* '<Root>/AT_Tag_12_Yaw' */
  real_T AT_Tag_13_Yaw;                /* '<Root>/AT_Tag_13_Yaw' */
  real_T AT_Tag_14_Yaw;                /* '<Root>/AT_Tag_14_Yaw' */
  real_T AT_Tag_15_Yaw;                /* '<Root>/AT_Tag_15_Yaw' */
  real_T AT_Tag_16_Yaw;                /* '<Root>/AT_Tag_16_Yaw' */
  real_T AT_Tag_4_Found;               /* '<Root>/AT_Tag_4_Found' */
  boolean_T AT_Tag_5_Found;            /* '<Root>/AT_Tag_5_Found' */
  boolean_T AT_Tag_6_Found;            /* '<Root>/AT_Tag_6_Found' */
  real_T AT_Tag_7_Found;               /* '<Root>/AT_Tag_7_Found' */
  boolean_T AT_Tag_11_Found;           /* '<Root>/AT_Tag_11_Found' */
  boolean_T AT_Tag_12_Found;           /* '<Root>/AT_Tag_12_Found' */
  boolean_T AT_Tag_13_Found;           /* '<Root>/AT_Tag_13_Found' */
  boolean_T AT_Tag_14_Found;           /* '<Root>/AT_Tag_14_Found' */
  boolean_T AT_Tag_15_Found;           /* '<Root>/AT_Tag_15_Found' */
  boolean_T AT_Tag_16_Found;           /* '<Root>/AT_Tag_16_Found' */
  real_T Line_Sensor_TOF_Range;        /* '<Root>/Line_Sensor_TOF_Range' */
  real_T Auto_ID;                      /* '<Root>/Auto_ID' */
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
  real_T Shooter_Brake_Enable;         /* '<Root>/Shooter_Brake_Enable' */
  real_T Shooter_Servo_Position;       /* '<Root>/Shooter_Servo_Position' */
  real_T Back_Upper_Arm_DutyCycle;     /* '<Root>/Back_Upper_Arm_DutyCycle' */
  real_T Back_Lower_Arm_DutyCycle;     /* '<Root>/Back_Lower_Arm_DutyCycle' */
  real_T Front_Arm_DutyCycle;          /* '<Root>/Front_Arm_DutyCycle' */
  real_T Ball_Screw_Arm_DutyCycle;     /* '<Root>/Ball_Screw_Arm_DutyCycle' */
  real_T Climber_DutyCycle;            /* '<Root>/Climber_DutyCycle' */
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

/* Constant parameters with dynamic initialization (default storage) */
extern ConstInitP_Code_Gen_Model_T Code_Gen_Model_ConstInitP;/* constant parameters */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T AA_Integral_Gain;        /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S162>/Gain2'
                                        *   '<S163>/Gain2'
                                        *   '<S164>/Gain2'
                                        */
extern real_T AA_Integral_IC;          /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S162>/Constant3'
                                        *   '<S163>/Constant3'
                                        *   '<S164>/Constant3'
                                        */
extern real_T AA_Integral_LL;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S162>/Saturation1'
                                        *   '<S163>/Saturation1'
                                        *   '<S164>/Saturation1'
                                        */
extern real_T AA_Integral_UL;          /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S162>/Saturation1'
                                        *   '<S163>/Saturation1'
                                        *   '<S164>/Saturation1'
                                        */
extern real_T AA_Position_Back_Dec_RL; /* Variable: AA_Position_Back_Dec_RL
                                        * Referenced by:
                                        *   '<S165>/Constant1'
                                        *   '<S166>/Constant1'
                                        */
extern real_T AA_Position_Back_Inc_RL; /* Variable: AA_Position_Back_Inc_RL
                                        * Referenced by:
                                        *   '<S165>/Constant3'
                                        *   '<S166>/Constant3'
                                        */
extern real_T AA_Position_Front_Dec_RL;/* Variable: AA_Position_Front_Dec_RL
                                        * Referenced by: '<S168>/Constant1'
                                        */
extern real_T AA_Position_Front_Inc_RL;/* Variable: AA_Position_Front_Inc_RL
                                        * Referenced by: '<S168>/Constant3'
                                        */
extern real_T AA_Prop_Gain;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S162>/Gain1'
                                        *   '<S163>/Gain1'
                                        *   '<S164>/Gain1'
                                        */
extern real_T AA_TC_LL;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S162>/Constant1'
                                        *   '<S162>/Saturation2'
                                        *   '<S163>/Constant1'
                                        *   '<S163>/Saturation2'
                                        *   '<S164>/Constant1'
                                        *   '<S164>/Saturation2'
                                        */
extern real_T AA_TC_UL;                /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S162>/Constant'
                                        *   '<S162>/Saturation2'
                                        *   '<S163>/Constant'
                                        *   '<S163>/Saturation2'
                                        *   '<S164>/Constant'
                                        *   '<S164>/Saturation2'
                                        */
extern real_T AT_Tag_11_Yaw_Offset;    /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S396>/Constant12'
                                        */
extern real_T AT_Tag_12_Yaw_Offset;    /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S396>/Constant11'
                                        */
extern real_T AT_Tag_13_Yaw_Offset;    /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S396>/Constant10'
                                        */
extern real_T AT_Tag_14_Yaw_Offset;    /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S396>/Constant8'
                                        */
extern real_T AT_Tag_15_Yaw_Offset;    /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S396>/Constant7'
                                        */
extern real_T AT_Tag_16_Yaw_Offset;    /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S396>/Constant6'
                                        */
extern real_T AT_Tag_4_Coordinate_X;   /* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S7>/Constant9'
                                        */
extern real_T AT_Tag_4_Coordinate_Y;   /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S7>/Constant1'
                                        */
extern real_T AT_Tag_5_Yaw_Offset;     /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S396>/Constant14'
                                        */
extern real_T AT_Tag_6_Yaw_Offset;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S396>/Constant13'
                                        */
extern real_T AT_Tag_7_Coordinate_X;   /* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S7>/Constant3'
                                        */
extern real_T AT_Tag_7_Coordinate_Y;   /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S7>/Constant2'
                                        */
extern real_T AT_Target_Tag_11_X;      /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S396>/Constant4'
                                        */
extern real_T AT_Target_Tag_11_Y;      /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S396>/Constant26'
                                        */
extern real_T AT_Target_Tag_12_X;      /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S396>/Constant17'
                                        */
extern real_T AT_Target_Tag_12_Y;      /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S396>/Constant3'
                                        */
extern real_T AT_Target_Tag_13_X;      /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S396>/Constant18'
                                        */
extern real_T AT_Target_Tag_13_Y;      /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S396>/Constant21'
                                        */
extern real_T AT_Target_Tag_14_X;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S396>/Constant19'
                                        */
extern real_T AT_Target_Tag_14_Y;      /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S396>/Constant23'
                                        */
extern real_T AT_Target_Tag_15_X;      /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S396>/Constant20'
                                        */
extern real_T AT_Target_Tag_15_Y;      /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S396>/Constant24'
                                        */
extern real_T AT_Target_Tag_16_X;      /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S396>/Constant22'
                                        */
extern real_T AT_Target_Tag_16_Y;      /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S396>/Constant25'
                                        */
extern real_T AT_Target_Tag_5_X;       /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S396>/Constant9'
                                        */
extern real_T AT_Target_Tag_5_Y;       /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S396>/Constant28'
                                        */
extern real_T AT_Target_Tag_6_X;       /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S396>/Constant5'
                                        */
extern real_T AT_Target_Tag_6_Y;       /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S396>/Constant27'
                                        */
extern real_T AT_XY_Control_Gain;      /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S399>/Gain2'
                                        */
extern real_T AT_Yaw_Control_Gain;     /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S398>/Constant17'
                                        */
extern real_T Amp_Angle;               /* Variable: Amp_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Amp_Gap;                 /* Variable: Amp_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Amp_Height;              /* Variable: Amp_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T BS_Deriv_FC;             /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S161>/Constant2'
                                        */
extern real_T BS_Deriv_Gain;           /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S161>/Constant3'
                                        */
extern real_T BS_Deriv_LL;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S161>/Saturation'
                                        */
extern real_T BS_Deriv_UL;             /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S161>/Saturation'
                                        */
extern real_T BS_Position_Dec_RL;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S167>/Constant1'
                                        */
extern real_T BS_Position_Inc_RL;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S167>/Constant3'
                                        */
extern real_T BS_Prop_Gain;            /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S161>/Gain1'
                                        */
extern real_T BS_TC_LL;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S161>/Saturation2'
                                        */
extern real_T BS_TC_UL;                /* Variable: BS_TC_UL
                                        * Referenced by: '<S161>/Saturation2'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S409>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S405>/Constant'
                                        *   '<S405>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S409>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S405>/Constant1'
                                        */
extern real_T Climber_DutyCycle_Neg;   /* Variable: Climber_DutyCycle_Neg
                                        * Referenced by: '<S4>/Constant3'
                                        */
extern real_T Climber_DutyCycle_Pos;   /* Variable: Climber_DutyCycle_Pos
                                        * Referenced by: '<S4>/Constant2'
                                        */
extern real_T Dist_AA_Cal_Tol;         /* Variable: Dist_AA_Cal_Tol
                                        * Referenced by:
                                        *   '<S22>/Calibration_Tolerance'
                                        *   '<S23>/Calibration_Tolerance'
                                        *   '<S25>/Calibration_Tolerance'
                                        */
extern real_T Dist_BS_Cal_Tol;         /* Variable: Dist_BS_Cal_Tol
                                        * Referenced by: '<S24>/Calibration_Tolerance'
                                        */
extern real_T Dist_Per_Rev_Back_Lower; /* Variable: Dist_Per_Rev_Back_Lower
                                        * Referenced by: '<S22>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Back_Upper; /* Variable: Dist_Per_Rev_Back_Upper
                                        * Referenced by: '<S23>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Ball_Screw; /* Variable: Dist_Per_Rev_Ball_Screw
                                        * Referenced by: '<S24>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Front;      /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S25>/Rev_2_Dist'
                                        */
extern real_T Dist_Reset_Value_Back_Lower;/* Variable: Dist_Reset_Value_Back_Lower
                                           * Referenced by:
                                           *   '<S22>/Dist_Reset_Value'
                                           *   '<S22>/Unit Delay1'
                                           */
extern real_T Dist_Reset_Value_Back_Upper;/* Variable: Dist_Reset_Value_Back_Upper
                                           * Referenced by:
                                           *   '<S23>/Dist_Reset_Value'
                                           *   '<S23>/Unit Delay1'
                                           */
extern real_T Dist_Reset_Value_Ball_Screw;/* Variable: Dist_Reset_Value_Ball_Screw
                                           * Referenced by:
                                           *   '<S24>/Dist_Reset_Value'
                                           *   '<S24>/Unit Delay1'
                                           */
extern real_T Dist_Reset_Value_Front;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S25>/Dist_Reset_Value'
                                        *   '<S25>/Unit Delay1'
                                        */
extern real_T Distance_FL_y;           /* Variable: Distance_FL_y
                                        * Referenced by: '<S344>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S260>/Constant3'
                                        *   '<S281>/Constant3'
                                        *   '<S302>/Constant3'
                                        *   '<S323>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S260>/Constant2'
                                   *   '<S281>/Constant2'
                                   *   '<S302>/Constant2'
                                   *   '<S323>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S260>/Saturation'
                                        *   '<S281>/Saturation'
                                        *   '<S302>/Saturation'
                                        *   '<S323>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S260>/Saturation'
                                        *   '<S281>/Saturation'
                                        *   '<S302>/Saturation'
                                        *   '<S323>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S260>/Gain'
                                        *   '<S281>/Gain'
                                        *   '<S302>/Gain'
                                        *   '<S323>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S260>/Gain2'
                                        *   '<S281>/Gain2'
                                        *   '<S302>/Gain2'
                                        *   '<S323>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S260>/Saturation1'
                                        *   '<S281>/Saturation1'
                                        *   '<S302>/Saturation1'
                                        *   '<S323>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S260>/Saturation1'
                                        *   '<S281>/Saturation1'
                                        *   '<S302>/Saturation1'
                                        *   '<S323>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S260>/Gain1'
                                        *   '<S281>/Gain1'
                                        *   '<S302>/Gain1'
                                        *   '<S323>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S265>/Constant'
                            *   '<S286>/Constant'
                            *   '<S307>/Constant'
                            *   '<S328>/Constant'
                            */
extern real_T FloorDistance;           /* Variable: FloorDistance
                                        * Referenced by: '<S28>/Constant'
                                        */
extern real_T Front_AA_Max_Ext;        /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S157>/Saturation'
                                        */
extern real_T Front_AA_Min_Ext;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S157>/Saturation'
                                        */
extern real_T Gamepad_Stick_Neg_Threshold;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S37>/Constant'
                                           *   '<S39>/Constant'
                                           */
extern real_T Gamepad_Stick_Pos_Threshold;/* Variable: Gamepad_Stick_Pos_Threshold
                                           * Referenced by:
                                           *   '<S38>/Constant'
                                           *   '<S40>/Constant'
                                           */
extern real_T Gyro_Calibration_Value;  /* Variable: Gyro_Calibration_Value
                                        * Referenced by: '<S8>/Unit Delay1'
                                        */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S12>/Constant1'
                                        *   '<S12>/Constant2'
                                        */
extern real_T KF_Vision_Ambiguity_Thresh;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S12>/Constant'
                                          */
extern real_T LoadShooter_Angle;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T LoadShooter_Gap;         /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T LoadShooter_Height;      /* Variable: LoadShooter_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Note_Detect_Dist_Intake; /* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Detect_Dist_Shooter;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Eject;         /* Variable: Note_Time_Eject
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Speaker_Spin_Up;/* Variable: Note_Time_Speaker_Spin_Up
                                         * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                         */
extern real_T Note_Time_Transfer;      /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Transfer_Spin_Up;/* Variable: Note_Time_Transfer_Spin_Up
                                          * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                          */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S14>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S150>/Constant'
                                        */
extern real_T Servo_Store_Gain;        /* Variable: Servo_Store_Gain
                                        * Referenced by: '<S10>/Gain'
                                        */
extern real_T Servo_Store_Offset;      /* Variable: Servo_Store_Offset
                                        * Referenced by: '<S10>/Constant1'
                                        */
extern real_T Servo_Time_Deploy;       /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Servo_Time_Store;        /* Variable: Servo_Time_Store
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Shooter_DC_Eject;        /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
extern real_T Shooter_Motor_Control_FF;/* Variable: Shooter_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S83>/Gain'
                                        *   '<S84>/Gain'
                                        */
extern real_T Shooter_Motor_Control_I; /* Variable: Shooter_Motor_Control_I
                                        * Referenced by:
                                        *   '<S83>/Gain2'
                                        *   '<S84>/Gain2'
                                        */
extern real_T Shooter_Motor_Control_I_LL;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S83>/Saturation1'
                                          *   '<S84>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_I_UL;/* Variable: Shooter_Motor_Control_I_UL
                                          * Referenced by:
                                          *   '<S83>/Saturation1'
                                          *   '<S84>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_P; /* Variable: Shooter_Motor_Control_P
                                        * Referenced by:
                                        *   '<S83>/Gain1'
                                        *   '<S84>/Gain1'
                                        */
extern real_T Shooter_Motor_DesSpd_Store;/* Variable: Shooter_Motor_DesSpd_Store
                                          * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                          */
extern real_T Shooter_Motor_Speed_Transition;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                      */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S245>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S245>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S192>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S205>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S245>/Constant3'
                                     */
extern real_T Stage_Angle;             /* Variable: Stage_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Stage_Gap;               /* Variable: Stage_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Stage_Height;            /* Variable: Stage_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S365>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S365>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S365>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S365>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S364>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S365>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S365>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S365>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S365>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S365>/Constant1'
                                   *   '<S365>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S365>/Constant'
                                   *   '<S365>/Saturation2'
                                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S355>/Constant5'
                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S355>/Constant6'
                   */
extern real_T Steering_Localized_Cmd_NonZero_Error_Thresh;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S355>/Constant9'
                         */
extern real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S355>/Constant10'
                   */
extern real_T Steering_Localized_Cmd_Rate_Limit_Dec;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S355>/Constant1'
                               */
extern real_T Steering_Localized_Cmd_Rate_Limit_Inc;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S355>/Constant3'
                               */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S263>/Constant3'
                                        *   '<S284>/Constant3'
                                        *   '<S305>/Constant3'
                                        *   '<S326>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S263>/Constant2'
                                *   '<S284>/Constant2'
                                *   '<S305>/Constant2'
                                *   '<S326>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S263>/Saturation'
                                           *   '<S284>/Saturation'
                                           *   '<S305>/Saturation'
                                           *   '<S326>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S263>/Saturation'
                                           *   '<S284>/Saturation'
                                           *   '<S305>/Saturation'
                                           *   '<S326>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S263>/Gain2'
                                        *   '<S284>/Gain2'
                                        *   '<S305>/Gain2'
                                        *   '<S326>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S263>/Saturation1'
                                           *   '<S284>/Saturation1'
                                           *   '<S305>/Saturation1'
                                           *   '<S326>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S263>/Saturation1'
                                           *   '<S284>/Saturation1'
                                           *   '<S305>/Saturation1'
                                           *   '<S326>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S263>/Gain1'
                                        *   '<S284>/Gain1'
                                        *   '<S305>/Gain1'
                                        *   '<S326>/Gain1'
                                        */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S398>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S398>/Constant1'
                                        */
extern real_T TEST_Servo_Override_Flag;/* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S10>/Constant4'
                                        */
extern real_T TEST_Servo_Override_Value;/* Variable: TEST_Servo_Override_Value
                                         * Referenced by: '<S10>/Constant5'
                                         */
extern real_T TEST_Speaker_Angle;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S16>/Constant26'
                                        */
extern real_T TEST_Speaker_Distance;   /* Variable: TEST_Speaker_Distance
                                        * Referenced by: '<S7>/Constant4'
                                        */
extern real_T TEST_Speaker_Gap;        /* Variable: TEST_Speaker_Gap
                                        * Referenced by: '<S16>/Constant27'
                                        */
extern real_T TEST_Speaker_Height;     /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S16>/Constant25'
                                        */
extern real_T TEST_Speaker_Speed;      /* Variable: TEST_Speaker_Speed
                                        * Referenced by: '<S10>/Constant26'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S20>/Constant5'
                                      */
extern real_T Test_DC_Gain_BackLower;  /* Variable: Test_DC_Gain_BackLower
                                        * Referenced by: '<S9>/Gain2'
                                        */
extern real_T Test_DC_Gain_BackUpper;  /* Variable: Test_DC_Gain_BackUpper
                                        * Referenced by: '<S9>/Gain'
                                        */
extern real_T Test_DC_Gain_BallScrew;  /* Variable: Test_DC_Gain_BallScrew
                                        * Referenced by: '<S9>/Gain3'
                                        */
extern real_T Test_DC_Gain_Front;      /* Variable: Test_DC_Gain_Front
                                        * Referenced by: '<S9>/Gain1'
                                        */
extern real_T Test_DC_Gain_Intake;     /* Variable: Test_DC_Gain_Intake
                                        * Referenced by: '<S9>/Gain4'
                                        */
extern real_T Test_DC_Gain_Shooter;    /* Variable: Test_DC_Gain_Shooter
                                        * Referenced by: '<S9>/Gain5'
                                        */
extern real_T Tol_Angle;               /* Variable: Tol_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Tol_Gap;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Tol_Height;              /* Variable: Tol_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S343>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S343>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S343>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S343>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S343>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S343>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S399>/Gain'
                                        */
extern real_T Trap_Angle;              /* Variable: Trap_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Trap_Gap;                /* Variable: Trap_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
extern real_T Trap_Height;             /* Variable: Trap_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
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
 * Block '<S85>/Data Type Duplicate' : Unused code path elimination
 * Block '<S85>/Data Type Propagation' : Unused code path elimination
 * Block '<S83>/Scope' : Unused code path elimination
 * Block '<S86>/Data Type Duplicate' : Unused code path elimination
 * Block '<S86>/Data Type Propagation' : Unused code path elimination
 * Block '<S84>/Scope' : Unused code path elimination
 * Block '<S130>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Conversion' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S133>/Data Type Duplicate' : Unused code path elimination
 * Block '<S91>/Data Type Duplicate' : Unused code path elimination
 * Block '<S92>/Data Type Duplicate' : Unused code path elimination
 * Block '<S93>/Data Type Duplicate' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S98>/Conversion' : Unused code path elimination
 * Block '<S98>/Data Type Duplicate' : Unused code path elimination
 * Block '<S99>/Data Type Duplicate' : Unused code path elimination
 * Block '<S100>/Data Type Duplicate' : Unused code path elimination
 * Block '<S101>/Data Type Duplicate' : Unused code path elimination
 * Block '<S103>/Data Type Duplicate' : Unused code path elimination
 * Block '<S104>/Data Type Duplicate' : Unused code path elimination
 * Block '<S87>/G' : Unused code path elimination
 * Block '<S87>/H' : Unused code path elimination
 * Block '<S87>/N' : Unused code path elimination
 * Block '<S87>/P0' : Unused code path elimination
 * Block '<S87>/Q' : Unused code path elimination
 * Block '<S87>/R' : Unused code path elimination
 * Block '<S119>/CheckSignalProperties' : Unused code path elimination
 * Block '<S128>/CheckSignalProperties' : Unused code path elimination
 * Block '<S129>/CheckSignalProperties' : Unused code path elimination
 * Block '<S161>/Scope' : Unused code path elimination
 * Block '<S172>/Data Type Duplicate' : Unused code path elimination
 * Block '<S172>/Data Type Propagation' : Unused code path elimination
 * Block '<S162>/Scope' : Unused code path elimination
 * Block '<S174>/Data Type Duplicate' : Unused code path elimination
 * Block '<S174>/Data Type Propagation' : Unused code path elimination
 * Block '<S163>/Scope' : Unused code path elimination
 * Block '<S176>/Data Type Duplicate' : Unused code path elimination
 * Block '<S176>/Data Type Propagation' : Unused code path elimination
 * Block '<S164>/Scope' : Unused code path elimination
 * Block '<S178>/Data Type Duplicate' : Unused code path elimination
 * Block '<S178>/Data Type Propagation' : Unused code path elimination
 * Block '<S179>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S181>/Data Type Duplicate' : Unused code path elimination
 * Block '<S181>/Data Type Propagation' : Unused code path elimination
 * Block '<S182>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S184>/Data Type Duplicate' : Unused code path elimination
 * Block '<S184>/Data Type Propagation' : Unused code path elimination
 * Block '<S185>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S187>/Data Type Duplicate' : Unused code path elimination
 * Block '<S187>/Data Type Propagation' : Unused code path elimination
 * Block '<S188>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S17>/Gain' : Unused code path elimination
 * Block '<S17>/Gain1' : Unused code path elimination
 * Block '<S17>/Scope' : Unused code path elimination
 * Block '<S204>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S208>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S214>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S248>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S192>/To Workspace' : Unused code path elimination
 * Block '<S192>/To Workspace1' : Unused code path elimination
 * Block '<S268>/Data Type Duplicate' : Unused code path elimination
 * Block '<S268>/Data Type Propagation' : Unused code path elimination
 * Block '<S260>/Scope' : Unused code path elimination
 * Block '<S262>/Scope' : Unused code path elimination
 * Block '<S279>/Data Type Duplicate' : Unused code path elimination
 * Block '<S279>/Data Type Propagation' : Unused code path elimination
 * Block '<S263>/Scope' : Unused code path elimination
 * Block '<S289>/Data Type Duplicate' : Unused code path elimination
 * Block '<S289>/Data Type Propagation' : Unused code path elimination
 * Block '<S281>/Scope' : Unused code path elimination
 * Block '<S283>/Scope' : Unused code path elimination
 * Block '<S300>/Data Type Duplicate' : Unused code path elimination
 * Block '<S300>/Data Type Propagation' : Unused code path elimination
 * Block '<S284>/Scope' : Unused code path elimination
 * Block '<S310>/Data Type Duplicate' : Unused code path elimination
 * Block '<S310>/Data Type Propagation' : Unused code path elimination
 * Block '<S302>/Scope' : Unused code path elimination
 * Block '<S304>/Scope' : Unused code path elimination
 * Block '<S321>/Data Type Duplicate' : Unused code path elimination
 * Block '<S321>/Data Type Propagation' : Unused code path elimination
 * Block '<S305>/Scope' : Unused code path elimination
 * Block '<S331>/Data Type Duplicate' : Unused code path elimination
 * Block '<S331>/Data Type Propagation' : Unused code path elimination
 * Block '<S323>/Scope' : Unused code path elimination
 * Block '<S325>/Scope' : Unused code path elimination
 * Block '<S342>/Data Type Duplicate' : Unused code path elimination
 * Block '<S342>/Data Type Propagation' : Unused code path elimination
 * Block '<S326>/Scope' : Unused code path elimination
 * Block '<S353>/Data Type Duplicate' : Unused code path elimination
 * Block '<S353>/Data Type Propagation' : Unused code path elimination
 * Block '<S354>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S362>/Data Type Duplicate' : Unused code path elimination
 * Block '<S362>/Data Type Propagation' : Unused code path elimination
 * Block '<S363>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S369>/Data Type Duplicate' : Unused code path elimination
 * Block '<S369>/Data Type Propagation' : Unused code path elimination
 * Block '<S365>/Scope' : Unused code path elimination
 * Block '<S411>/Data Type Duplicate' : Unused code path elimination
 * Block '<S411>/Data Type Propagation' : Unused code path elimination
 * Block '<S412>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S130>/Conversion' : Eliminate redundant data type conversion
 * Block '<S131>/Conversion' : Eliminate redundant data type conversion
 * Block '<S133>/Conversion' : Eliminate redundant data type conversion
 * Block '<S87>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S103>/Conversion' : Eliminate redundant data type conversion
 * Block '<S107>/Reshape' : Reshape block reduction
 * Block '<S87>/ReshapeX0' : Reshape block reduction
 * Block '<S87>/Reshapeu' : Reshape block reduction
 * Block '<S87>/Reshapexhat' : Reshape block reduction
 * Block '<S12>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S12>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S244>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S20>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S20>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S22>/Sum' : Unused code path elimination
 * Block '<S23>/Sum' : Unused code path elimination
 * Block '<S24>/Sum' : Unused code path elimination
 * Block '<S25>/Sum' : Unused code path elimination
 * Block '<S1>/Constant2' : Unused code path elimination
 * Block '<S1>/Constant3' : Unused code path elimination
 * Block '<S8>/Constant2' : Unused code path elimination
 * Block '<S8>/Sum' : Unused code path elimination
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
 * '<S4>'   : 'Code_Gen_Model/RoboRio Controls/Climber_Control'
 * '<S5>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Constant'
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Distance_from_Speaker'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Back_Lower'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Back_Upper'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Ball_Screw'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Front'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Compare To Zero'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Compare To Zero1'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/CompareToFloor'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Chart'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Compare To Constant'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Compare To Constant1'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Compare To Constant2'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/Compare To Zero'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/Compare To Zero1'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero10'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero18'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero19'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero20'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero21'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero22'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero23'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero24'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero7'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero9'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Chart_Intake_and_Shooter'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant1'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant2'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant3'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant4'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant5'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant6'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase1'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase2'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase3'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase4'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase5'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left/Saturation Dynamic'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right/Saturation Dynamic'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_AA_To_Extentions'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_Extentions_to_AA'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Chart_Shooter_Position'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Compare To Zero'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_AA_To_Extentions'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_Extentions_to_AA'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Angle_Gap_Height'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Arm_Lengths'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Difference'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Low_Pass_Filter'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable/Detect Increase'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable/Saturation Dynamic'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1/Detect Increase'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1/Saturation Dynamic'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2/Detect Increase'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2/Saturation Dynamic'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Saturation Dynamic'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Unit Delay External IC'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Saturation Dynamic'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Unit Delay External IC'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Saturation Dynamic'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Unit Delay External IC'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Saturation Dynamic'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Unit Delay External IC'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Errors'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

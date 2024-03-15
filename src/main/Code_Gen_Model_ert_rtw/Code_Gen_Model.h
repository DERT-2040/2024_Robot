/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.150
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 15 10:32:07 2024
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
  real_T Translation_Speed_RL;         /* '<S350>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S17>/Merge3' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S8>/Subtract1' */
  real_T Translation_Steering_Cmd;     /* '<S344>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S17>/Merge' */
  real_T Gyro_Angle_Adjustment_SPF;    /* '<S17>/Merge6' */
  real_T Steering_Localized_PID;       /* '<S363>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S17>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S359>/Sum' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S374>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S379>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S384>/Switch1' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S389>/Switch1' */
  real_T FL_Desired_Wheel_Speed;       /* '<S369>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S374>/Switch' */
  real_T FL_Steer_Module_Angle;        /* '<S248>/Add1' */
  real_T FR_Desired_Wheel_Speed;       /* '<S369>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S379>/Switch' */
  real_T FR_Steer_Module_Angle;        /* '<S249>/Add1' */
  real_T BL_Desired_Wheel_Speed;       /* '<S369>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S384>/Switch' */
  real_T BL_Steer_Module_Angle;        /* '<S250>/Add1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S369>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S389>/Switch' */
  real_T BR_Steer_Module_Angle;        /* '<S251>/Add1' */
  real_T State_Request_Intake_Shooter_h;/* '<S13>/Merge11' */
  real_T State_Request_Arm_d;          /* '<S13>/Merge12' */
  real_T Back_Lower_Arm_Length;        /* '<S22>/Subtract1' */
  real_T Back_Upper_Arm_Length;        /* '<S23>/Subtract1' */
  real_T Meas_Back_AA_Length;          /* '<S152>/Sqrt' */
  real_T Front_Arm_Length;             /* '<S25>/Subtract1' */
  real_T Meas_Front_AA_Length;         /* '<S156>/Sqrt' */
  real_T Ball_Screw_Arm_Length;        /* '<S24>/Subtract1' */
  real_T Meas_Angle;                   /* '<S16>/Gain2' */
  real_T Desired_Back_Upper_Dist;      /* '<S178>/Sum' */
  real_T Desired_Back_Lower_Dist;      /* '<S175>/Sum' */
  real_T Desired_Front_Dist;           /* '<S184>/Sum' */
  real_T Desired_Ball_Screw_Dist;      /* '<S181>/Sum' */
  real_T Steer_Joystick_X;             /* '<S9>/Signal Copy4' */
  real_T Product6[2];                  /* '<S14>/Product6' */
  real_T Odometry_X_global_est_ft;     /* '<S148>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S148>/Subtract' */
  real_T Odometry_Y_global_est_ft;     /* '<S148>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S148>/Subtract1' */
  real_T AT_Error_Yaw;                 /* '<S394>/Switch2' */
  real_T AT_Error_Y;                   /* '<S394>/Switch23' */
  real_T AT_Error_X;                   /* '<S394>/Switch15' */
  real_T Intake_Shooter_State_Request; /* '<S29>/Chart' */
  real_T SplineEnable;                 /* '<S29>/Chart' */
  real_T CurrentPriorityIndex;         /* '<S29>/Chart' */
  real_T AutoState;                    /* '<S29>/Chart' */
  real_T ArmStateRequest;              /* '<S29>/Chart' */
  real_T Spline_Index;                 /* '<S193>/Merge4' */
  real_T Spline_Target_Y;              /* '<S190>/Selector6' */
  real_T Spline_Target_X;              /* '<S190>/Selector2' */
  real_T Assignment[450];              /* '<S215>/Assignment' */
  real_T Desired_Back_AA_Length;       /* '<S16>/Get_Arm_Lengths' */
  real_T Desired_Front_AA_Length;      /* '<S16>/Get_Arm_Lengths' */
  real_T Desired_BS_Length;            /* '<S16>/Get_Arm_Lengths' */
  real_T Meas_Height;                  /* '<S16>/Get_Angle_Gap_Height' */
  real_T Meas_Gap;                     /* '<S16>/Get_Angle_Gap_Height' */
  real_T Desired_Angle;                /* '<S16>/Chart_Shooter_Position' */
  real_T Desired_Height;               /* '<S16>/Chart_Shooter_Position' */
  real_T Desired_Gap;                  /* '<S16>/Chart_Shooter_Position' */
  real_T Shooter_Pos_State;            /* '<S16>/Chart_Shooter_Position' */
  real_T Product2[2];                  /* '<S138>/Product2' */
  real_T Product3[2];                  /* '<S136>/Product3' */
  real_T Intake_Motor_DC;              /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Left;     /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Left;        /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Right;    /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Right;       /* '<S10>/Chart_Intake_and_Shooter' */
  real_T Note_State_ID;                /* '<S10>/Chart_Intake_and_Shooter' */
  uint16_T WhileIterator;              /* '<S240>/While Iterator' */
  uint8_T Prev_GameState;              /* '<S15>/Chart' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S44>/Compare' */
  boolean_T Is_Boosting;               /* '<S54>/Compare' */
  boolean_T Align_Trap;                /* '<S53>/Compare' */
  boolean_T Align_Amp;                 /* '<S52>/Compare' */
  boolean_T Align_Speaker;             /* '<S51>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S50>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S48>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S49>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S42>/Compare' */
  boolean_T Spline_Enable;             /* '<S13>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S17>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S17>/Merge5' */
  boolean_T Test_Mode;                 /* '<S13>/Merge10' */
  boolean_T Is_All_Arms_Cal_Position;  /* '<S2>/Logical Operator' */
  boolean_T Robot_Reached_Destination; /* '<S17>/Merge7' */
  boolean_T Line_Sensor_Boolean;       /* '<S28>/Compare' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S193>/Merge1' */
  boolean_T Shooter_Motor_Speed_Control_Ena;/* '<S10>/Chart_Intake_and_Shooter' */
  boolean_T Shooter_Brake_Enable_out;  /* '<S10>/Chart_Intake_and_Shooter' */
  boolean_T Shooter_Servo;             /* '<S10>/Chart_Intake_and_Shooter' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TappedDelay_X[6];             /* '<S12>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S12>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S85>/MemoryX' */
  real_T Accumulator2_DSTATE;          /* '<S14>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S14>/Accumulator' */
  real_T UnitDelay1_DSTATE;            /* '<S8>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S366>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S365>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S363>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S265>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S264>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S258>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S276>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S275>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S261>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S286>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S285>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S279>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S297>/Unit Delay1' */
  real_T UD_DSTATE_i;                  /* '<S296>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S282>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S307>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S306>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S300>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S318>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S317>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S303>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S328>/Unit Delay1' */
  real_T UD_DSTATE_c;                  /* '<S327>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S321>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S339>/Unit Delay1' */
  real_T UD_DSTATE_ll;                 /* '<S338>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S324>/Unit Delay' */
  real_T UnitDelay_DSTATE_mw;          /* '<S81>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S82>/Unit Delay' */
  real_T UnitDelay1_DSTATE_g;          /* '<S22>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_nc;         /* '<S23>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bc;         /* '<S25>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_fp;         /* '<S24>/Unit Delay1' */
  real_T UnitDelay_DSTATE_mg;          /* '<S160>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S161>/Unit Delay' */
  real_T UnitDelay_DSTATE_j;           /* '<S162>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j;          /* '<S168>/Unit Delay1' */
  real_T UD_DSTATE_ii;                 /* '<S167>/UD' */
  real_T UD_DSTATE_d;                  /* '<S139>/UD' */
  real_T UD_DSTATE_j;                  /* '<S140>/UD' */
  real_T UD_DSTATE_m;                  /* '<S141>/UD' */
  real_T UD_DSTATE_ic;                 /* '<S142>/UD' */
  real_T UD_DSTATE_ce;                 /* '<S143>/UD' */
  real_T UnitDelay_DSTATE_cg;          /* '<S148>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S148>/Unit Delay1' */
  real_T UnitDelay_DSTATE_gj;          /* '<S396>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S396>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_l;          /* '<S406>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S406>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S410>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S189>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S188>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S241>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S241>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S191>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S191>/Unit Delay1' */
  real_T Timer;                        /* '<S29>/Chart' */
  real_T CloseNoteCounter;             /* '<S29>/Chart' */
  real_T timer;                        /* '<S10>/Chart_Intake_and_Shooter' */
  int32_T Selector4_DIMS1[2];          /* '<S210>/Selector4' */
  uint32_T exitPortIndex;              /* '<S29>/Chart' */
  uint32_T exitPortIndex_n;            /* '<S29>/Chart' */
  uint32_T exitPortIndex_h;            /* '<S29>/Chart' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S352>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S361>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S180>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l5;   /* '<S177>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S186>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S183>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S410>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE;        /* '<S68>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_oz;       /* '<S1>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S11>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S76>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S77>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S79>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S78>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S80>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_hg;     /* '<S169>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S171>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S173>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S399>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S400>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S401>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S402>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S396>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S196>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S201>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S14>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S14>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S17>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S193>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S196>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S198>/If' */
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
  boolean_T icLoad;                    /* '<S85>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S112>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S105>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T MathFunction1;          /* '<S152>/Math Function1' */
  const real_T MathFunction1_d;        /* '<S155>/Math Function1' */
  const real_T MathFunction1_m;        /* '<S156>/Math Function1' */
  const real_T Cos5;                   /* '<S269>/Cos5' */
  const real_T Sin5;                   /* '<S269>/Sin5' */
  const real_T Cos5_g;                 /* '<S290>/Cos5' */
  const real_T Sin5_m;                 /* '<S290>/Sin5' */
  const real_T Cos5_i;                 /* '<S311>/Cos5' */
  const real_T Sin5_e;                 /* '<S311>/Sin5' */
  const real_T Cos5_b;                 /* '<S332>/Cos5' */
  const real_T Sin5_c;                 /* '<S332>/Sin5' */
  const real_T Atan1;                  /* '<S342>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S342>/Add1' */
  const real_T Atan3;                  /* '<S342>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S342>/Add2' */
  const real_T Atan4;                  /* '<S342>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S342>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S10>/1-D Lookup Table'
   *   '<S85>/X0'
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
   * Referenced by: '<S188>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S188>/Capture Radius'
   *   '<S188>/Lookahead Distance'
   */
  real_T pooled8[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S188>/Lookahead Distance'
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
   * Referenced by: '<S394>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[9];

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S394>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_g[9];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S396>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S396>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S397>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S397>/Modulation_Drv'
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
   *   '<S260>/1-D Lookup Table'
   *   '<S281>/1-D Lookup Table'
   *   '<S302>/1-D Lookup Table'
   *   '<S323>/1-D Lookup Table'
   */
  real_T pooled40[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S260>/1-D Lookup Table'
   *   '<S281>/1-D Lookup Table'
   *   '<S302>/1-D Lookup Table'
   *   '<S323>/1-D Lookup Table'
   */
  real_T pooled41[2];
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
                                        *   '<S160>/Gain2'
                                        *   '<S161>/Gain2'
                                        *   '<S162>/Gain2'
                                        */
extern real_T AA_Integral_IC;          /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S160>/Constant3'
                                        *   '<S161>/Constant3'
                                        *   '<S162>/Constant3'
                                        */
extern real_T AA_Integral_LL;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S160>/Saturation1'
                                        *   '<S161>/Saturation1'
                                        *   '<S162>/Saturation1'
                                        */
extern real_T AA_Integral_UL;          /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S160>/Saturation1'
                                        *   '<S161>/Saturation1'
                                        *   '<S162>/Saturation1'
                                        */
extern real_T AA_Position_Back_Dec_RL; /* Variable: AA_Position_Back_Dec_RL
                                        * Referenced by:
                                        *   '<S163>/Constant1'
                                        *   '<S164>/Constant1'
                                        */
extern real_T AA_Position_Back_Inc_RL; /* Variable: AA_Position_Back_Inc_RL
                                        * Referenced by:
                                        *   '<S163>/Constant3'
                                        *   '<S164>/Constant3'
                                        */
extern real_T AA_Position_Front_Dec_RL;/* Variable: AA_Position_Front_Dec_RL
                                        * Referenced by: '<S166>/Constant1'
                                        */
extern real_T AA_Position_Front_Inc_RL;/* Variable: AA_Position_Front_Inc_RL
                                        * Referenced by: '<S166>/Constant3'
                                        */
extern real_T AA_Prop_Gain;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S160>/Gain1'
                                        *   '<S161>/Gain1'
                                        *   '<S162>/Gain1'
                                        */
extern real_T AA_TC_LL;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S160>/Constant1'
                                        *   '<S160>/Saturation2'
                                        *   '<S161>/Constant1'
                                        *   '<S161>/Saturation2'
                                        *   '<S162>/Constant1'
                                        *   '<S162>/Saturation2'
                                        */
extern real_T AA_TC_UL;                /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S160>/Constant'
                                        *   '<S160>/Saturation2'
                                        *   '<S161>/Constant'
                                        *   '<S161>/Saturation2'
                                        *   '<S162>/Constant'
                                        *   '<S162>/Saturation2'
                                        */
extern real_T AT_Tag_11_Yaw_Offset;    /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S394>/Constant12'
                                        */
extern real_T AT_Tag_12_Yaw_Offset;    /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S394>/Constant11'
                                        */
extern real_T AT_Tag_13_Yaw_Offset;    /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S394>/Constant10'
                                        */
extern real_T AT_Tag_14_Yaw_Offset;    /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S394>/Constant8'
                                        */
extern real_T AT_Tag_15_Yaw_Offset;    /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S394>/Constant7'
                                        */
extern real_T AT_Tag_16_Yaw_Offset;    /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S394>/Constant6'
                                        */
extern real_T AT_Tag_4_Coordinate_X;   /* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S7>/Constant9'
                                        */
extern real_T AT_Tag_4_Coordinate_Y;   /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S7>/Constant1'
                                        */
extern real_T AT_Tag_5_Yaw_Offset;     /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S394>/Constant14'
                                        */
extern real_T AT_Tag_6_Yaw_Offset;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S394>/Constant13'
                                        */
extern real_T AT_Tag_7_Coordinate_X;   /* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S7>/Constant3'
                                        */
extern real_T AT_Tag_7_Coordinate_Y;   /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S7>/Constant2'
                                        */
extern real_T AT_Target_Tag_11_X;      /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S394>/Constant4'
                                        */
extern real_T AT_Target_Tag_11_Y;      /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S394>/Constant26'
                                        */
extern real_T AT_Target_Tag_12_X;      /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S394>/Constant17'
                                        */
extern real_T AT_Target_Tag_12_Y;      /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S394>/Constant3'
                                        */
extern real_T AT_Target_Tag_13_X;      /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S394>/Constant18'
                                        */
extern real_T AT_Target_Tag_13_Y;      /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S394>/Constant21'
                                        */
extern real_T AT_Target_Tag_14_X;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S394>/Constant19'
                                        */
extern real_T AT_Target_Tag_14_Y;      /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S394>/Constant23'
                                        */
extern real_T AT_Target_Tag_15_X;      /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S394>/Constant20'
                                        */
extern real_T AT_Target_Tag_15_Y;      /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S394>/Constant24'
                                        */
extern real_T AT_Target_Tag_16_X;      /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S394>/Constant22'
                                        */
extern real_T AT_Target_Tag_16_Y;      /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S394>/Constant25'
                                        */
extern real_T AT_Target_Tag_5_X;       /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S394>/Constant9'
                                        */
extern real_T AT_Target_Tag_5_Y;       /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S394>/Constant28'
                                        */
extern real_T AT_Target_Tag_6_X;       /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S394>/Constant5'
                                        */
extern real_T AT_Target_Tag_6_Y;       /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S394>/Constant27'
                                        */
extern real_T AT_XY_Control_Gain;      /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S397>/Gain2'
                                        */
extern real_T AT_Yaw_Control_Gain;     /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S396>/Constant17'
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
                                        * Referenced by: '<S159>/Constant2'
                                        */
extern real_T BS_Deriv_Gain;           /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S159>/Constant3'
                                        */
extern real_T BS_Deriv_LL;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S159>/Saturation'
                                        */
extern real_T BS_Deriv_UL;             /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S159>/Saturation'
                                        */
extern real_T BS_Position_Dec_RL;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S165>/Constant1'
                                        */
extern real_T BS_Position_Inc_RL;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S165>/Constant3'
                                        */
extern real_T BS_Prop_Gain;            /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S159>/Gain1'
                                        */
extern real_T BS_TC_LL;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S159>/Saturation2'
                                        */
extern real_T BS_TC_UL;                /* Variable: BS_TC_UL
                                        * Referenced by: '<S159>/Saturation2'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S407>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S403>/Constant'
                                        *   '<S403>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S407>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S403>/Constant1'
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
                                        * Referenced by: '<S342>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S258>/Constant3'
                                        *   '<S279>/Constant3'
                                        *   '<S300>/Constant3'
                                        *   '<S321>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S258>/Constant2'
                                   *   '<S279>/Constant2'
                                   *   '<S300>/Constant2'
                                   *   '<S321>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S258>/Saturation'
                                        *   '<S279>/Saturation'
                                        *   '<S300>/Saturation'
                                        *   '<S321>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S258>/Saturation'
                                        *   '<S279>/Saturation'
                                        *   '<S300>/Saturation'
                                        *   '<S321>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S258>/Gain'
                                        *   '<S279>/Gain'
                                        *   '<S300>/Gain'
                                        *   '<S321>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S258>/Gain2'
                                        *   '<S279>/Gain2'
                                        *   '<S300>/Gain2'
                                        *   '<S321>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S258>/Saturation1'
                                        *   '<S279>/Saturation1'
                                        *   '<S300>/Saturation1'
                                        *   '<S321>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S258>/Saturation1'
                                        *   '<S279>/Saturation1'
                                        *   '<S300>/Saturation1'
                                        *   '<S321>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S258>/Gain1'
                                        *   '<S279>/Gain1'
                                        *   '<S300>/Gain1'
                                        *   '<S321>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S263>/Constant'
                            *   '<S284>/Constant'
                            *   '<S305>/Constant'
                            *   '<S326>/Constant'
                            */
extern real_T FloorDistance;           /* Variable: FloorDistance
                                        * Referenced by: '<S28>/Constant'
                                        */
extern real_T Front_AA_Max_Ext;        /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S155>/Saturation'
                                        */
extern real_T Front_AA_Min_Ext;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S155>/Saturation'
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
                                        * Referenced by: '<S148>/Constant'
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
                                        *   '<S81>/Gain'
                                        *   '<S82>/Gain'
                                        */
extern real_T Shooter_Motor_Control_I; /* Variable: Shooter_Motor_Control_I
                                        * Referenced by:
                                        *   '<S81>/Gain2'
                                        *   '<S82>/Gain2'
                                        */
extern real_T Shooter_Motor_Control_I_LL;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S81>/Saturation1'
                                          *   '<S82>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_I_UL;/* Variable: Shooter_Motor_Control_I_UL
                                          * Referenced by:
                                          *   '<S81>/Saturation1'
                                          *   '<S82>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_P; /* Variable: Shooter_Motor_Control_P
                                        * Referenced by:
                                        *   '<S81>/Gain1'
                                        *   '<S82>/Gain1'
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
                          * Referenced by: '<S243>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S243>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S190>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S203>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S243>/Constant3'
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
                                          * Referenced by: '<S363>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S363>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S363>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S363>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S362>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S363>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S363>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S363>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S363>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S363>/Constant1'
                                   *   '<S363>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S363>/Constant'
                                   *   '<S363>/Saturation2'
                                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S353>/Constant5'
                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S353>/Constant6'
                   */
extern real_T Steering_Localized_Cmd_NonZero_Error_Thresh;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S353>/Constant9'
                         */
extern real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S353>/Constant10'
                   */
extern real_T Steering_Localized_Cmd_Rate_Limit_Dec;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S353>/Constant1'
                               */
extern real_T Steering_Localized_Cmd_Rate_Limit_Inc;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S353>/Constant3'
                               */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S261>/Constant3'
                                        *   '<S282>/Constant3'
                                        *   '<S303>/Constant3'
                                        *   '<S324>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S261>/Constant2'
                                *   '<S282>/Constant2'
                                *   '<S303>/Constant2'
                                *   '<S324>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S261>/Saturation'
                                           *   '<S282>/Saturation'
                                           *   '<S303>/Saturation'
                                           *   '<S324>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S261>/Saturation'
                                           *   '<S282>/Saturation'
                                           *   '<S303>/Saturation'
                                           *   '<S324>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S261>/Gain2'
                                        *   '<S282>/Gain2'
                                        *   '<S303>/Gain2'
                                        *   '<S324>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S261>/Saturation1'
                                           *   '<S282>/Saturation1'
                                           *   '<S303>/Saturation1'
                                           *   '<S324>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S261>/Saturation1'
                                           *   '<S282>/Saturation1'
                                           *   '<S303>/Saturation1'
                                           *   '<S324>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S261>/Gain1'
                                        *   '<S282>/Gain1'
                                        *   '<S303>/Gain1'
                                        *   '<S324>/Gain1'
                                        */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S396>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S396>/Constant1'
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
                        * Referenced by: '<S341>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S341>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S341>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S341>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S341>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S341>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S397>/Gain'
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
 * Block '<S46>/Compare' : Unused code path elimination
 * Block '<S46>/Constant' : Unused code path elimination
 * Block '<S57>/Compare' : Unused code path elimination
 * Block '<S57>/Constant' : Unused code path elimination
 * Block '<S9>/Constant9' : Unused code path elimination
 * Block '<S9>/OR3' : Unused code path elimination
 * Block '<S9>/Switch8' : Unused code path elimination
 * Block '<S83>/Data Type Duplicate' : Unused code path elimination
 * Block '<S83>/Data Type Propagation' : Unused code path elimination
 * Block '<S81>/Scope' : Unused code path elimination
 * Block '<S84>/Data Type Duplicate' : Unused code path elimination
 * Block '<S84>/Data Type Propagation' : Unused code path elimination
 * Block '<S82>/Scope' : Unused code path elimination
 * Block '<S128>/Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/Data Type Duplicate' : Unused code path elimination
 * Block '<S130>/Conversion' : Unused code path elimination
 * Block '<S130>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S89>/Data Type Duplicate' : Unused code path elimination
 * Block '<S90>/Data Type Duplicate' : Unused code path elimination
 * Block '<S91>/Data Type Duplicate' : Unused code path elimination
 * Block '<S92>/Data Type Duplicate' : Unused code path elimination
 * Block '<S93>/Data Type Duplicate' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Conversion' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S98>/Data Type Duplicate' : Unused code path elimination
 * Block '<S99>/Data Type Duplicate' : Unused code path elimination
 * Block '<S101>/Data Type Duplicate' : Unused code path elimination
 * Block '<S102>/Data Type Duplicate' : Unused code path elimination
 * Block '<S85>/G' : Unused code path elimination
 * Block '<S85>/H' : Unused code path elimination
 * Block '<S85>/N' : Unused code path elimination
 * Block '<S85>/P0' : Unused code path elimination
 * Block '<S85>/Q' : Unused code path elimination
 * Block '<S85>/R' : Unused code path elimination
 * Block '<S117>/CheckSignalProperties' : Unused code path elimination
 * Block '<S126>/CheckSignalProperties' : Unused code path elimination
 * Block '<S127>/CheckSignalProperties' : Unused code path elimination
 * Block '<S159>/Scope' : Unused code path elimination
 * Block '<S170>/Data Type Duplicate' : Unused code path elimination
 * Block '<S170>/Data Type Propagation' : Unused code path elimination
 * Block '<S160>/Scope' : Unused code path elimination
 * Block '<S172>/Data Type Duplicate' : Unused code path elimination
 * Block '<S172>/Data Type Propagation' : Unused code path elimination
 * Block '<S161>/Scope' : Unused code path elimination
 * Block '<S174>/Data Type Duplicate' : Unused code path elimination
 * Block '<S174>/Data Type Propagation' : Unused code path elimination
 * Block '<S162>/Scope' : Unused code path elimination
 * Block '<S176>/Data Type Duplicate' : Unused code path elimination
 * Block '<S176>/Data Type Propagation' : Unused code path elimination
 * Block '<S177>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S179>/Data Type Duplicate' : Unused code path elimination
 * Block '<S179>/Data Type Propagation' : Unused code path elimination
 * Block '<S180>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S182>/Data Type Duplicate' : Unused code path elimination
 * Block '<S182>/Data Type Propagation' : Unused code path elimination
 * Block '<S183>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S185>/Data Type Duplicate' : Unused code path elimination
 * Block '<S185>/Data Type Propagation' : Unused code path elimination
 * Block '<S186>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S17>/Gain' : Unused code path elimination
 * Block '<S17>/Gain1' : Unused code path elimination
 * Block '<S17>/Scope' : Unused code path elimination
 * Block '<S202>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S206>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S212>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S246>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S190>/To Workspace' : Unused code path elimination
 * Block '<S190>/To Workspace1' : Unused code path elimination
 * Block '<S266>/Data Type Duplicate' : Unused code path elimination
 * Block '<S266>/Data Type Propagation' : Unused code path elimination
 * Block '<S258>/Scope' : Unused code path elimination
 * Block '<S260>/Scope' : Unused code path elimination
 * Block '<S277>/Data Type Duplicate' : Unused code path elimination
 * Block '<S277>/Data Type Propagation' : Unused code path elimination
 * Block '<S261>/Scope' : Unused code path elimination
 * Block '<S287>/Data Type Duplicate' : Unused code path elimination
 * Block '<S287>/Data Type Propagation' : Unused code path elimination
 * Block '<S279>/Scope' : Unused code path elimination
 * Block '<S281>/Scope' : Unused code path elimination
 * Block '<S298>/Data Type Duplicate' : Unused code path elimination
 * Block '<S298>/Data Type Propagation' : Unused code path elimination
 * Block '<S282>/Scope' : Unused code path elimination
 * Block '<S308>/Data Type Duplicate' : Unused code path elimination
 * Block '<S308>/Data Type Propagation' : Unused code path elimination
 * Block '<S300>/Scope' : Unused code path elimination
 * Block '<S302>/Scope' : Unused code path elimination
 * Block '<S319>/Data Type Duplicate' : Unused code path elimination
 * Block '<S319>/Data Type Propagation' : Unused code path elimination
 * Block '<S303>/Scope' : Unused code path elimination
 * Block '<S329>/Data Type Duplicate' : Unused code path elimination
 * Block '<S329>/Data Type Propagation' : Unused code path elimination
 * Block '<S321>/Scope' : Unused code path elimination
 * Block '<S323>/Scope' : Unused code path elimination
 * Block '<S340>/Data Type Duplicate' : Unused code path elimination
 * Block '<S340>/Data Type Propagation' : Unused code path elimination
 * Block '<S324>/Scope' : Unused code path elimination
 * Block '<S351>/Data Type Duplicate' : Unused code path elimination
 * Block '<S351>/Data Type Propagation' : Unused code path elimination
 * Block '<S352>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S360>/Data Type Duplicate' : Unused code path elimination
 * Block '<S360>/Data Type Propagation' : Unused code path elimination
 * Block '<S361>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S367>/Data Type Duplicate' : Unused code path elimination
 * Block '<S367>/Data Type Propagation' : Unused code path elimination
 * Block '<S363>/Scope' : Unused code path elimination
 * Block '<S409>/Data Type Duplicate' : Unused code path elimination
 * Block '<S409>/Data Type Propagation' : Unused code path elimination
 * Block '<S410>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S128>/Conversion' : Eliminate redundant data type conversion
 * Block '<S129>/Conversion' : Eliminate redundant data type conversion
 * Block '<S131>/Conversion' : Eliminate redundant data type conversion
 * Block '<S85>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S101>/Conversion' : Eliminate redundant data type conversion
 * Block '<S105>/Reshape' : Reshape block reduction
 * Block '<S85>/ReshapeX0' : Reshape block reduction
 * Block '<S85>/Reshapeu' : Reshape block reduction
 * Block '<S85>/Reshapexhat' : Reshape block reduction
 * Block '<S12>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S12>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S242>/Signal Copy' : Eliminate redundant signal conversion block
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
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero10'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero18'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero19'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero20'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero21'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero22'
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
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase1'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase2'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase3'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase4'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left/Saturation Dynamic'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right/Saturation Dynamic'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_AA_To_Extentions'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_Extentions_to_AA'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Chart_Shooter_Position'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Compare To Zero'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_AA_To_Extentions'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_Extentions_to_AA'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Angle_Gap_Height'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Arm_Lengths'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Difference'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Low_Pass_Filter'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable/Detect Increase'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable/Saturation Dynamic'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1/Detect Increase'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1/Saturation Dynamic'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2/Detect Increase'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2/Saturation Dynamic'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Saturation Dynamic'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Unit Delay External IC'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Saturation Dynamic'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Unit Delay External IC'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Saturation Dynamic'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Unit Delay External IC'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Saturation Dynamic'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Unit Delay External IC'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Errors'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.137
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Mar 13 00:38:01 2024
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
  real_T Climber_Cmd_Direction;        /* '<S8>/Switch9' */
  real_T Drive_Joystick_X;             /* '<S8>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S8>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S8>/Signal Copy3' */
  real_T Steer_Joystick_X;             /* '<S8>/Signal Copy4' */
  real_T Steer_Joystick_Y;             /* '<S8>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S8>/Signal Copy6' */
  real_T State_Request_Intake_Shooter; /* '<S8>/Switch' */
  real_T State_Request_Arm;            /* '<S8>/Switch4' */
  real_T Odom_Position_X;              /* '<S13>/Accumulator2' */
  real_T KF_Position_X;                /* '<S11>/Switch' */
  real_T Odom_Position_Y;              /* '<S13>/Accumulator' */
  real_T KF_Position_Y;                /* '<S11>/Switch1' */
  real_T Distance_Speaker;             /* '<S6>/Switch' */
  real_T Spline_Num_Poses;             /* '<S12>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S12>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S12>/Merge2' */
  real_T Translation_Speed;            /* '<S12>/Merge4' */
  real_T Translation_Angle;            /* '<S12>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S16>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S353>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S16>/Merge3' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S7>/Subtract1' */
  real_T Translation_Steering_Cmd;     /* '<S347>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S16>/Merge' */
  real_T Gyro_Angle_Adjustment_SPF;    /* '<S16>/Merge6' */
  real_T Steering_Localized_PID;       /* '<S366>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S16>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S362>/Sum' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S377>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S382>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S387>/Switch1' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S392>/Switch1' */
  real_T FL_Desired_Wheel_Speed;       /* '<S372>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S377>/Switch' */
  real_T FL_Steer_Module_Angle;        /* '<S251>/Add1' */
  real_T FR_Desired_Wheel_Speed;       /* '<S372>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S382>/Switch' */
  real_T FR_Steer_Module_Angle;        /* '<S252>/Add1' */
  real_T BL_Desired_Wheel_Speed;       /* '<S372>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S387>/Switch' */
  real_T BL_Steer_Module_Angle;        /* '<S253>/Add1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S372>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S392>/Switch' */
  real_T BR_Steer_Module_Angle;        /* '<S254>/Add1' */
  real_T State_Request_Intake_Shooter_h;/* '<S12>/Merge11' */
  real_T State_Request_Arm_d;          /* '<S12>/Merge12' */
  real_T Back_Lower_Arm_Length;        /* '<S21>/Subtract1' */
  real_T Back_Upper_Arm_Length;        /* '<S22>/Subtract1' */
  real_T Meas_Back_AA_Length;          /* '<S155>/Sqrt' */
  real_T Front_Arm_Length;             /* '<S24>/Subtract1' */
  real_T Meas_Front_AA_Length;         /* '<S159>/Sqrt' */
  real_T Ball_Screw_Arm_Length;        /* '<S23>/Subtract1' */
  real_T Meas_Angle;                   /* '<S15>/Gain2' */
  real_T Desired_Back_Upper_Dist;      /* '<S181>/Sum' */
  real_T Desired_Back_Lower_Dist;      /* '<S178>/Sum' */
  real_T Desired_Front_Dist;           /* '<S187>/Sum' */
  real_T Desired_Ball_Screw_Dist;      /* '<S184>/Sum' */
  real_T Climber_Desired_Position;     /* '<S4>/Saturation1' */
  real_T Climber_Length;               /* '<S4>/Product' */
  real_T Product6[2];                  /* '<S13>/Product6' */
  real_T Odometry_X_global_est_ft;     /* '<S151>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S151>/Subtract' */
  real_T Odometry_Y_global_est_ft;     /* '<S151>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S151>/Subtract1' */
  real_T AT_Error_Yaw;                 /* '<S397>/Switch2' */
  real_T AT_Error_Y;                   /* '<S397>/Switch23' */
  real_T AT_Error_X;                   /* '<S397>/Switch15' */
  real_T Intake_Shooter_State_Request; /* '<S28>/Chart' */
  real_T SplineEnable;                 /* '<S28>/Chart' */
  real_T CurrentPriorityIndex;         /* '<S28>/Chart' */
  real_T ArmStateRequest;              /* '<S28>/Chart' */
  real_T Spline_Index;                 /* '<S196>/Merge4' */
  real_T Spline_Target_Y;              /* '<S193>/Selector6' */
  real_T Spline_Target_X;              /* '<S193>/Selector2' */
  real_T Assignment[450];              /* '<S218>/Assignment' */
  real_T Desired_Back_AA_Length;       /* '<S15>/Get_Arm_Lengths' */
  real_T Desired_Front_AA_Length;      /* '<S15>/Get_Arm_Lengths' */
  real_T Desired_BS_Length;            /* '<S15>/Get_Arm_Lengths' */
  real_T Meas_Height;                  /* '<S15>/Get_Angle_Gap_Height' */
  real_T Meas_Gap;                     /* '<S15>/Get_Angle_Gap_Height' */
  real_T Desired_Angle;                /* '<S15>/Chart_Shooter_Position' */
  real_T Desired_Height;               /* '<S15>/Chart_Shooter_Position' */
  real_T Desired_Gap;                  /* '<S15>/Chart_Shooter_Position' */
  real_T Shooter_Pos_State;            /* '<S15>/Chart_Shooter_Position' */
  real_T Product2[2];                  /* '<S141>/Product2' */
  real_T Product3[2];                  /* '<S139>/Product3' */
  real_T Intake_Motor_DC;              /* '<S9>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Left;     /* '<S9>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Left;        /* '<S9>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_Speed_Right;    /* '<S9>/Chart_Intake_and_Shooter' */
  real_T Shooter_Motor_DC_Right;       /* '<S9>/Chart_Intake_and_Shooter' */
  real_T Note_State_ID;                /* '<S9>/Chart_Intake_and_Shooter' */
  uint16_T WhileIterator;              /* '<S243>/While Iterator' */
  uint8_T Prev_GameState;              /* '<S14>/Chart' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S47>/Compare' */
  boolean_T Is_Boosting;               /* '<S57>/Compare' */
  boolean_T Align_Trap;                /* '<S56>/Compare' */
  boolean_T Align_Amp;                 /* '<S55>/Compare' */
  boolean_T Align_Speaker;             /* '<S54>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S53>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S51>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S52>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S45>/Compare' */
  boolean_T Spline_Enable;             /* '<S12>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S16>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S16>/Merge5' */
  boolean_T Test_Mode;                 /* '<S12>/Merge10' */
  boolean_T Is_All_Arms_Cal_Position;  /* '<S2>/Logical Operator' */
  boolean_T Robot_Reached_Destination; /* '<S16>/Merge7' */
  boolean_T Line_Sensor_Boolean;       /* '<S27>/Compare' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S196>/Merge1' */
  boolean_T Shooter_Motor_Speed_Control_Ena;/* '<S9>/Chart_Intake_and_Shooter' */
  boolean_T Shooter_Brake_Enable_out;  /* '<S9>/Chart_Intake_and_Shooter' */
  boolean_T Shooter_Servo;             /* '<S9>/Chart_Intake_and_Shooter' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TappedDelay_X[6];             /* '<S11>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S11>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S88>/MemoryX' */
  real_T Accumulator2_DSTATE;          /* '<S13>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S13>/Accumulator' */
  real_T UnitDelay_DSTATE_o;           /* '<S1>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S7>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S369>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S368>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S366>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S268>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S267>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S261>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S279>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S278>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S264>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S289>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S288>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S282>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S300>/Unit Delay1' */
  real_T UD_DSTATE_i;                  /* '<S299>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S285>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S310>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S309>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S303>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S321>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S320>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S306>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S331>/Unit Delay1' */
  real_T UD_DSTATE_c;                  /* '<S330>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S324>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S342>/Unit Delay1' */
  real_T UD_DSTATE_ll;                 /* '<S341>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S327>/Unit Delay' */
  real_T UnitDelay_DSTATE_mw;          /* '<S84>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S85>/Unit Delay' */
  real_T UnitDelay1_DSTATE_g;          /* '<S21>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_nc;         /* '<S22>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_bc;         /* '<S24>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_fp;         /* '<S23>/Unit Delay1' */
  real_T UnitDelay_DSTATE_mg;          /* '<S163>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S164>/Unit Delay' */
  real_T UnitDelay_DSTATE_j;           /* '<S165>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j;          /* '<S171>/Unit Delay1' */
  real_T UD_DSTATE_ii;                 /* '<S170>/UD' */
  real_T UnitDelay_DSTATE_om;          /* '<S4>/Unit Delay' */
  real_T UnitDelay_DSTATE_ge;          /* '<S36>/Unit Delay' */
  real_T UD_DSTATE_d;                  /* '<S142>/UD' */
  real_T UD_DSTATE_j;                  /* '<S143>/UD' */
  real_T UD_DSTATE_m;                  /* '<S144>/UD' */
  real_T UD_DSTATE_ic;                 /* '<S145>/UD' */
  real_T UD_DSTATE_ce;                 /* '<S146>/UD' */
  real_T UnitDelay_DSTATE_cg;          /* '<S151>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S151>/Unit Delay1' */
  real_T UnitDelay_DSTATE_gj;          /* '<S399>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d2;         /* '<S409>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S409>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S399>/Unit Delay1' */
  real_T UnitDelay_DSTATE_hh;          /* '<S408>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kr;         /* '<S408>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_l;          /* '<S420>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S420>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S424>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S192>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S191>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S244>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4g;         /* '<S244>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S194>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S194>/Unit Delay1' */
  real_T Timer;                        /* '<S28>/Chart' */
  real_T CloseNoteCounter;             /* '<S28>/Chart' */
  real_T timer;                        /* '<S9>/Chart_Intake_and_Shooter' */
  int32_T Selector4_DIMS1[2];          /* '<S213>/Selector4' */
  uint32_T exitPortIndex;              /* '<S28>/Chart' */
  uint32_T exitPortIndex_n;            /* '<S28>/Chart' */
  uint32_T exitPortIndex_h;            /* '<S28>/Chart' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S355>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S364>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S183>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_h;    /* '<S180>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S189>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S186>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S424>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE;        /* '<S71>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S10>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S79>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S80>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S82>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S81>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S83>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_hg;     /* '<S172>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S174>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S176>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_eo;     /* '<S37>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S404>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S405>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S406>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S407>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S399>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S199>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S204>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S13>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S13>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S16>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S196>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S199>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S201>/If' */
  uint8_T is_active_c7_Code_Gen_Model; /* '<S28>/Chart' */
  uint8_T is_c7_Code_Gen_Model;        /* '<S28>/Chart' */
  uint8_T is_Note6;                    /* '<S28>/Chart' */
  uint8_T is_Note7;                    /* '<S28>/Chart' */
  uint8_T is_Note8;                    /* '<S28>/Chart' */
  uint8_T is_active_c5_Code_Gen_Model; /* '<S15>/Chart_Shooter_Position' */
  uint8_T is_c5_Code_Gen_Model;        /* '<S15>/Chart_Shooter_Position' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S14>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S14>/Chart' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S9>/Chart_Intake_and_Shooter' */
  uint8_T is_c4_Code_Gen_Model;        /* '<S9>/Chart_Intake_and_Shooter' */
  boolean_T icLoad;                    /* '<S88>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S115>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S108>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T MathFunction1;          /* '<S155>/Math Function1' */
  const real_T MathFunction1_d;        /* '<S158>/Math Function1' */
  const real_T MathFunction1_m;        /* '<S159>/Math Function1' */
  const real_T Cos5;                   /* '<S272>/Cos5' */
  const real_T Sin5;                   /* '<S272>/Sin5' */
  const real_T Cos5_g;                 /* '<S293>/Cos5' */
  const real_T Sin5_m;                 /* '<S293>/Sin5' */
  const real_T Cos5_i;                 /* '<S314>/Cos5' */
  const real_T Sin5_e;                 /* '<S314>/Sin5' */
  const real_T Cos5_b;                 /* '<S335>/Cos5' */
  const real_T Sin5_c;                 /* '<S335>/Sin5' */
  const real_T Atan1;                  /* '<S345>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S345>/Add1' */
  const real_T Atan3;                  /* '<S345>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S345>/Add2' */
  const real_T Atan4;                  /* '<S345>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S345>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Servo_Addition_out
   * Referenced by: '<S9>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[2];

  /* Expression: Servo_Front_Arm_Length_in
   * Referenced by: '<S9>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[2];

  /* Expression: Speaker_MotorSpeed_out
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData[10];

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S9>/1-D Lookup Table1'
   *   '<S15>/1-D Lookup Table1'
   *   '<S15>/1-D Lookup Table2'
   *   '<S15>/1-D Lookup Table3'
   */
  real_T pooled2[10];

  /* Expression: Speaker_Height_out
   * Referenced by: '<S15>/1-D Lookup Table2'
   */
  real_T uDLookupTable2_tableData[10];

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S15>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData_p[10];

  /* Expression: Speaker_Gap_out
   * Referenced by: '<S15>/1-D Lookup Table3'
   */
  real_T uDLookupTable3_tableData[10];

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S191>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S191>/Capture Radius'
   *   '<S191>/Lookahead Distance'
   */
  real_T pooled8[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S191>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: Yaw_angle_correction_yaw
   * Referenced by: '<S397>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData_j[9];

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S397>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_g[9];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S400>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S400>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S399>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S399>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: [0 1 2]
   * Referenced by: '<Root>/Constant'
   */
  real_T Constant_Value[3];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S13>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S263>/1-D Lookup Table'
   *   '<S284>/1-D Lookup Table'
   *   '<S305>/1-D Lookup Table'
   *   '<S326>/1-D Lookup Table'
   */
  real_T pooled38[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S263>/1-D Lookup Table'
   *   '<S284>/1-D Lookup Table'
   *   '<S305>/1-D Lookup Table'
   *   '<S326>/1-D Lookup Table'
   */
  real_T pooled39[2];
} ConstP_Code_Gen_Model_T;

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
  real_T Joystick_Left_POV;            /* '<Root>/Joystick_Left_POV' */
  real_T Joystick_Right_B1;            /* '<Root>/Joystick_Right_B1' */
  real_T Joystick_Right_B2;            /* '<Root>/Joystick_Right_B2' */
  real_T Joystick_Right_B3;            /* '<Root>/Joystick_Right_B3' */
  real_T Joystick_Right_B4;            /* '<Root>/Joystick_Right_B4' */
  real_T Joystick_Right_POV;           /* '<Root>/Joystick_Right_POV' */
  real_T Joystick_Right_B7;            /* '<Root>/Joystick_Right_B7' */
  real_T Joystick_Right_B8;            /* '<Root>/Joystick_Right_B8' */
  real_T Joystick_Right_B10;           /* '<Root>/Joystick_Right_B10' */
  real_T Joystick_Right_B14;           /* '<Root>/Joystick_Right_B14' */
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
                                        *   '<S163>/Gain2'
                                        *   '<S164>/Gain2'
                                        *   '<S165>/Gain2'
                                        */
extern real_T AA_Integral_IC;          /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S163>/Constant3'
                                        *   '<S164>/Constant3'
                                        *   '<S165>/Constant3'
                                        */
extern real_T AA_Integral_LL;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S163>/Saturation1'
                                        *   '<S164>/Saturation1'
                                        *   '<S165>/Saturation1'
                                        */
extern real_T AA_Integral_UL;          /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S163>/Saturation1'
                                        *   '<S164>/Saturation1'
                                        *   '<S165>/Saturation1'
                                        */
extern real_T AA_Position_Back_Dec_RL; /* Variable: AA_Position_Back_Dec_RL
                                        * Referenced by:
                                        *   '<S166>/Constant1'
                                        *   '<S167>/Constant1'
                                        */
extern real_T AA_Position_Back_Inc_RL; /* Variable: AA_Position_Back_Inc_RL
                                        * Referenced by:
                                        *   '<S166>/Constant3'
                                        *   '<S167>/Constant3'
                                        */
extern real_T AA_Position_Front_Dec_RL;/* Variable: AA_Position_Front_Dec_RL
                                        * Referenced by: '<S169>/Constant1'
                                        */
extern real_T AA_Position_Front_Inc_RL;/* Variable: AA_Position_Front_Inc_RL
                                        * Referenced by: '<S169>/Constant3'
                                        */
extern real_T AA_Prop_Gain;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S163>/Gain1'
                                        *   '<S164>/Gain1'
                                        *   '<S165>/Gain1'
                                        */
extern real_T AA_TC_LL;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S163>/Constant1'
                                        *   '<S163>/Saturation2'
                                        *   '<S164>/Constant1'
                                        *   '<S164>/Saturation2'
                                        *   '<S165>/Constant1'
                                        *   '<S165>/Saturation2'
                                        */
extern real_T AA_TC_UL;                /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S163>/Constant'
                                        *   '<S163>/Saturation2'
                                        *   '<S164>/Constant'
                                        *   '<S164>/Saturation2'
                                        *   '<S165>/Constant'
                                        *   '<S165>/Saturation2'
                                        */
extern real_T AT_Tag_11_Yaw_Offset;    /* Variable: AT_Tag_11_Yaw_Offset
                                        * Referenced by: '<S397>/Constant12'
                                        */
extern real_T AT_Tag_12_Yaw_Offset;    /* Variable: AT_Tag_12_Yaw_Offset
                                        * Referenced by: '<S397>/Constant11'
                                        */
extern real_T AT_Tag_13_Yaw_Offset;    /* Variable: AT_Tag_13_Yaw_Offset
                                        * Referenced by: '<S397>/Constant10'
                                        */
extern real_T AT_Tag_14_Yaw_Offset;    /* Variable: AT_Tag_14_Yaw_Offset
                                        * Referenced by: '<S397>/Constant8'
                                        */
extern real_T AT_Tag_15_Yaw_Offset;    /* Variable: AT_Tag_15_Yaw_Offset
                                        * Referenced by: '<S397>/Constant7'
                                        */
extern real_T AT_Tag_16_Yaw_Offset;    /* Variable: AT_Tag_16_Yaw_Offset
                                        * Referenced by: '<S397>/Constant6'
                                        */
extern real_T AT_Tag_4_Coordinate_X;   /* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S6>/Constant9'
                                        */
extern real_T AT_Tag_4_Coordinate_Y;   /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S6>/Constant1'
                                        */
extern real_T AT_Tag_5_Yaw_Offset;     /* Variable: AT_Tag_5_Yaw_Offset
                                        * Referenced by: '<S397>/Constant14'
                                        */
extern real_T AT_Tag_6_Yaw_Offset;     /* Variable: AT_Tag_6_Yaw_Offset
                                        * Referenced by: '<S397>/Constant13'
                                        */
extern real_T AT_Tag_7_Coordinate_X;   /* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S6>/Constant3'
                                        */
extern real_T AT_Tag_7_Coordinate_Y;   /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S6>/Constant2'
                                        */
extern real_T AT_Target_Tag_11_X;      /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S397>/Constant4'
                                        */
extern real_T AT_Target_Tag_11_Y;      /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S397>/Constant26'
                                        */
extern real_T AT_Target_Tag_12_X;      /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S397>/Constant17'
                                        */
extern real_T AT_Target_Tag_12_Y;      /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S397>/Constant3'
                                        */
extern real_T AT_Target_Tag_13_X;      /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S397>/Constant18'
                                        */
extern real_T AT_Target_Tag_13_Y;      /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S397>/Constant21'
                                        */
extern real_T AT_Target_Tag_14_X;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S397>/Constant19'
                                        */
extern real_T AT_Target_Tag_14_Y;      /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S397>/Constant23'
                                        */
extern real_T AT_Target_Tag_15_X;      /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S397>/Constant20'
                                        */
extern real_T AT_Target_Tag_15_Y;      /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S397>/Constant24'
                                        */
extern real_T AT_Target_Tag_16_X;      /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S397>/Constant22'
                                        */
extern real_T AT_Target_Tag_16_Y;      /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S397>/Constant25'
                                        */
extern real_T AT_Target_Tag_5_X;       /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S397>/Constant9'
                                        */
extern real_T AT_Target_Tag_5_Y;       /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S397>/Constant28'
                                        */
extern real_T AT_Target_Tag_6_X;       /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S397>/Constant5'
                                        */
extern real_T AT_Target_Tag_6_Y;       /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S397>/Constant27'
                                        */
extern real_T AT_XY_Control_Gain;      /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S400>/Gain2'
                                        */
extern real_T AT_Yaw_Control_Gain;     /* Variable: AT_Yaw_Control_Gain
                                        * Referenced by: '<S399>/Constant17'
                                        */
extern real_T Amp_Angle;               /* Variable: Amp_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Amp_Gap;                 /* Variable: Amp_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Amp_Height;              /* Variable: Amp_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T BS_Deriv_FC;             /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S162>/Constant2'
                                        */
extern real_T BS_Deriv_Gain;           /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S162>/Constant3'
                                        */
extern real_T BS_Deriv_LL;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S162>/Saturation'
                                        */
extern real_T BS_Deriv_UL;             /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S162>/Saturation'
                                        */
extern real_T BS_Position_Dec_RL;      /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S168>/Constant1'
                                        */
extern real_T BS_Position_Inc_RL;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S168>/Constant3'
                                        */
extern real_T BS_Prop_Gain;            /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S162>/Gain1'
                                        */
extern real_T BS_TC_LL;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S162>/Saturation2'
                                        */
extern real_T BS_TC_UL;                /* Variable: BS_TC_UL
                                        * Referenced by: '<S162>/Saturation2'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S421>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S417>/Constant'
                                        *   '<S417>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S421>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S417>/Constant1'
                                        */
extern real_T Climber_Distance_LL;     /* Variable: Climber_Distance_LL
                                        * Referenced by: '<S4>/Saturation1'
                                        */
extern real_T Climber_Distance_UL;     /* Variable: Climber_Distance_UL
                                        * Referenced by: '<S4>/Saturation1'
                                        */
extern real_T Climber_Integral_Gain;   /* Variable: Climber_Integral_Gain
                                        * Referenced by: '<S36>/Gain2'
                                        */
extern real_T Climber_Integral_IC;     /* Variable: Climber_Integral_IC
                                        * Referenced by: '<S36>/Constant3'
                                        */
extern real_T Climber_Integral_LL;     /* Variable: Climber_Integral_LL
                                        * Referenced by: '<S36>/Saturation1'
                                        */
extern real_T Climber_Integral_UL;     /* Variable: Climber_Integral_UL
                                        * Referenced by: '<S36>/Saturation1'
                                        */
extern real_T Climber_Position_Dec_RL; /* Variable: Climber_Position_Dec_RL
                                        * Referenced by: '<S4>/Constant3'
                                        */
extern real_T Climber_Position_Inc_RL; /* Variable: Climber_Position_Inc_RL
                                        * Referenced by: '<S4>/Constant2'
                                        */
extern real_T Climber_Prop_Gain;       /* Variable: Climber_Prop_Gain
                                        * Referenced by: '<S36>/Gain1'
                                        */
extern real_T Climber_TC_LL;           /* Variable: Climber_TC_LL
                                        * Referenced by:
                                        *   '<S36>/Constant1'
                                        *   '<S36>/Saturation2'
                                        */
extern real_T Climber_TC_UL;           /* Variable: Climber_TC_UL
                                        * Referenced by:
                                        *   '<S36>/Constant'
                                        *   '<S36>/Saturation2'
                                        */
extern real_T Dist_AA_Cal_Tol;         /* Variable: Dist_AA_Cal_Tol
                                        * Referenced by:
                                        *   '<S21>/Calibration_Tolerance'
                                        *   '<S22>/Calibration_Tolerance'
                                        *   '<S24>/Calibration_Tolerance'
                                        */
extern real_T Dist_BS_Cal_Tol;         /* Variable: Dist_BS_Cal_Tol
                                        * Referenced by: '<S23>/Calibration_Tolerance'
                                        */
extern real_T Dist_Per_Rev_Back_Lower; /* Variable: Dist_Per_Rev_Back_Lower
                                        * Referenced by: '<S21>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Back_Upper; /* Variable: Dist_Per_Rev_Back_Upper
                                        * Referenced by: '<S22>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Ball_Screw; /* Variable: Dist_Per_Rev_Ball_Screw
                                        * Referenced by: '<S23>/Rev_2_Dist'
                                        */
extern real_T Dist_Per_Rev_Climber;    /* Variable: Dist_Per_Rev_Climber
                                        * Referenced by: '<S4>/Constant'
                                        */
extern real_T Dist_Per_Rev_Front;      /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S24>/Rev_2_Dist'
                                        */
extern real_T Dist_Reset_Value_Back_Lower;/* Variable: Dist_Reset_Value_Back_Lower
                                           * Referenced by:
                                           *   '<S21>/Dist_Reset_Value'
                                           *   '<S21>/Unit Delay1'
                                           */
extern real_T Dist_Reset_Value_Back_Upper;/* Variable: Dist_Reset_Value_Back_Upper
                                           * Referenced by:
                                           *   '<S22>/Dist_Reset_Value'
                                           *   '<S22>/Unit Delay1'
                                           */
extern real_T Dist_Reset_Value_Ball_Screw;/* Variable: Dist_Reset_Value_Ball_Screw
                                           * Referenced by:
                                           *   '<S23>/Dist_Reset_Value'
                                           *   '<S23>/Unit Delay1'
                                           */
extern real_T Dist_Reset_Value_Front;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S24>/Dist_Reset_Value'
                                        *   '<S24>/Unit Delay1'
                                        */
extern real_T Distance_FL_y;           /* Variable: Distance_FL_y
                                        * Referenced by: '<S345>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S261>/Constant3'
                                        *   '<S282>/Constant3'
                                        *   '<S303>/Constant3'
                                        *   '<S324>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S261>/Constant2'
                                   *   '<S282>/Constant2'
                                   *   '<S303>/Constant2'
                                   *   '<S324>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S261>/Saturation'
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S261>/Saturation'
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S261>/Gain'
                                        *   '<S282>/Gain'
                                        *   '<S303>/Gain'
                                        *   '<S324>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S261>/Gain2'
                                        *   '<S282>/Gain2'
                                        *   '<S303>/Gain2'
                                        *   '<S324>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S261>/Saturation1'
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S261>/Saturation1'
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S261>/Gain1'
                                        *   '<S282>/Gain1'
                                        *   '<S303>/Gain1'
                                        *   '<S324>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S266>/Constant'
                            *   '<S287>/Constant'
                            *   '<S308>/Constant'
                            *   '<S329>/Constant'
                            */
extern real_T FloorDistance;           /* Variable: FloorDistance
                                        * Referenced by: '<S27>/Constant'
                                        */
extern real_T Front_AA_Max_Ext;        /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S158>/Saturation'
                                        */
extern real_T Front_AA_Min_Ext;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S158>/Saturation'
                                        */
extern real_T Gamepad_Stick_Neg_Threshold;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S40>/Constant'
                                           *   '<S42>/Constant'
                                           */
extern real_T Gamepad_Stick_Pos_Threshold;/* Variable: Gamepad_Stick_Pos_Threshold
                                           * Referenced by:
                                           *   '<S41>/Constant'
                                           *   '<S43>/Constant'
                                           */
extern real_T Gyro_Calibration_Value;  /* Variable: Gyro_Calibration_Value
                                        * Referenced by: '<S7>/Unit Delay1'
                                        */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S11>/Constant1'
                                        *   '<S11>/Constant2'
                                        */
extern real_T KF_Vision_Ambiguity_Thresh;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S11>/Constant'
                                          */
extern real_T LoadShooter_Angle;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T LoadShooter_Gap;         /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T LoadShooter_Height;      /* Variable: LoadShooter_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Note_Detect_Dist_Intake; /* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Detect_Dist_Shooter;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Eject;         /* Variable: Note_Time_Eject
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Speaker_Spin_Up;/* Variable: Note_Time_Speaker_Spin_Up
                                         * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                         */
extern real_T Note_Time_Transfer;      /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Note_Time_Transfer_Spin_Up;/* Variable: Note_Time_Transfer_Spin_Up
                                          * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                          */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S13>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S151>/Constant'
                                        */
extern real_T Servo_Store_Gain;        /* Variable: Servo_Store_Gain
                                        * Referenced by: '<S9>/Gain'
                                        */
extern real_T Servo_Store_Offset;      /* Variable: Servo_Store_Offset
                                        * Referenced by: '<S9>/Constant1'
                                        */
extern real_T Servo_Time_Deploy;       /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Servo_Time_Store;        /* Variable: Servo_Time_Store
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Shooter_DC_Eject;        /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                        */
extern real_T Shooter_Motor_Control_FF;/* Variable: Shooter_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S84>/Gain'
                                        *   '<S85>/Gain'
                                        */
extern real_T Shooter_Motor_Control_I; /* Variable: Shooter_Motor_Control_I
                                        * Referenced by:
                                        *   '<S84>/Gain2'
                                        *   '<S85>/Gain2'
                                        */
extern real_T Shooter_Motor_Control_I_LL;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S84>/Saturation1'
                                          *   '<S85>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_I_UL;/* Variable: Shooter_Motor_Control_I_UL
                                          * Referenced by:
                                          *   '<S84>/Saturation1'
                                          *   '<S85>/Saturation1'
                                          */
extern real_T Shooter_Motor_Control_P; /* Variable: Shooter_Motor_Control_P
                                        * Referenced by:
                                        *   '<S84>/Gain1'
                                        *   '<S85>/Gain1'
                                        */
extern real_T Shooter_Motor_DesSpd_Store;/* Variable: Shooter_Motor_DesSpd_Store
                                          * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                          */
extern real_T Shooter_Motor_Speed_Transition;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S9>/Chart_Intake_and_Shooter'
                                      */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S246>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S246>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S193>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S206>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S246>/Constant3'
                                     */
extern real_T Stage_Angle;             /* Variable: Stage_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Stage_Gap;               /* Variable: Stage_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Stage_Height;            /* Variable: Stage_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Steering_Abs_Deadband_Range;/* Variable: Steering_Abs_Deadband_Range
                                           * Referenced by: '<S401>/Constant2'
                                           */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S366>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S366>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S366>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S366>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S365>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S366>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S366>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S366>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S366>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S366>/Constant1'
                                   *   '<S366>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S366>/Constant'
                                   *   '<S366>/Saturation2'
                                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S356>/Constant5'
                   */
extern real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S356>/Constant6'
                   */
extern real_T Steering_Localized_Cmd_NonZero_Error_Thresh;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S356>/Constant9'
                         */
extern real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S356>/Constant10'
                   */
extern real_T Steering_Localized_Cmd_Rate_Limit_Dec;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S356>/Constant1'
                               */
extern real_T Steering_Localized_Cmd_Rate_Limit_Inc;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S356>/Constant3'
                               */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S264>/Constant3'
                                        *   '<S285>/Constant3'
                                        *   '<S306>/Constant3'
                                        *   '<S327>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S264>/Constant2'
                                *   '<S285>/Constant2'
                                *   '<S306>/Constant2'
                                *   '<S327>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S264>/Saturation'
                                           *   '<S285>/Saturation'
                                           *   '<S306>/Saturation'
                                           *   '<S327>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S264>/Saturation'
                                           *   '<S285>/Saturation'
                                           *   '<S306>/Saturation'
                                           *   '<S327>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S264>/Gain2'
                                        *   '<S285>/Gain2'
                                        *   '<S306>/Gain2'
                                        *   '<S327>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S264>/Saturation1'
                                           *   '<S285>/Saturation1'
                                           *   '<S306>/Saturation1'
                                           *   '<S327>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S264>/Saturation1'
                                           *   '<S285>/Saturation1'
                                           *   '<S306>/Saturation1'
                                           *   '<S327>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S264>/Gain1'
                                        *   '<S285>/Gain1'
                                        *   '<S306>/Gain1'
                                        *   '<S327>/Gain1'
                                        */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S399>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S399>/Constant1'
                                        */
extern real_T TEST_Servo_Override_Flag;/* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S9>/Constant4'
                                        */
extern real_T TEST_Servo_Override_Value;/* Variable: TEST_Servo_Override_Value
                                         * Referenced by: '<S9>/Constant5'
                                         */
extern real_T TEST_Speaker_Angle;      /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S15>/Constant26'
                                        */
extern real_T TEST_Speaker_Gap;        /* Variable: TEST_Speaker_Gap
                                        * Referenced by: '<S15>/Constant27'
                                        */
extern real_T TEST_Speaker_Height;     /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S15>/Constant25'
                                        */
extern real_T TEST_Speaker_Speed;      /* Variable: TEST_Speaker_Speed
                                        * Referenced by: '<S9>/Constant26'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S19>/Constant5'
                                      */
extern real_T Test_DC_Gain_BackLower;  /* Variable: Test_DC_Gain_BackLower
                                        * Referenced by: '<S8>/Gain2'
                                        */
extern real_T Test_DC_Gain_BackUpper;  /* Variable: Test_DC_Gain_BackUpper
                                        * Referenced by: '<S8>/Gain'
                                        */
extern real_T Test_DC_Gain_BallScrew;  /* Variable: Test_DC_Gain_BallScrew
                                        * Referenced by: '<S8>/Gain3'
                                        */
extern real_T Test_DC_Gain_Front;      /* Variable: Test_DC_Gain_Front
                                        * Referenced by: '<S8>/Gain1'
                                        */
extern real_T Test_DC_Gain_Intake;     /* Variable: Test_DC_Gain_Intake
                                        * Referenced by: '<S8>/Gain4'
                                        */
extern real_T Test_DC_Gain_Shooter;    /* Variable: Test_DC_Gain_Shooter
                                        * Referenced by: '<S8>/Gain5'
                                        */
extern real_T Tol_Angle;               /* Variable: Tol_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Tol_Gap;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Tol_Height;              /* Variable: Tol_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S344>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S344>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S344>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S344>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S344>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S344>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S400>/Gain'
                                        */
extern real_T Trap_Angle;              /* Variable: Trap_Angle
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Trap_Gap;                /* Variable: Trap_Gap
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
                                        */
extern real_T Trap_Height;             /* Variable: Trap_Height
                                        * Referenced by: '<S15>/Chart_Shooter_Position'
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
 * Block '<S30>/Compare' : Unused code path elimination
 * Block '<S30>/Constant' : Unused code path elimination
 * Block '<S31>/Compare' : Unused code path elimination
 * Block '<S31>/Constant' : Unused code path elimination
 * Block '<S28>/Constant' : Unused code path elimination
 * Block '<S28>/Constant1' : Unused code path elimination
 * Block '<S28>/Constant2' : Unused code path elimination
 * Block '<S28>/Constant9' : Unused code path elimination
 * Block '<S28>/Multiport Switch' : Unused code path elimination
 * Block '<S28>/Selector' : Unused code path elimination
 * Block '<S28>/Selector1' : Unused code path elimination
 * Block '<S28>/Switch' : Unused code path elimination
 * Block '<S28>/Switch1' : Unused code path elimination
 * Block '<S38>/Data Type Duplicate' : Unused code path elimination
 * Block '<S38>/Data Type Propagation' : Unused code path elimination
 * Block '<S36>/Scope' : Unused code path elimination
 * Block '<S86>/Data Type Duplicate' : Unused code path elimination
 * Block '<S86>/Data Type Propagation' : Unused code path elimination
 * Block '<S84>/Scope' : Unused code path elimination
 * Block '<S87>/Data Type Duplicate' : Unused code path elimination
 * Block '<S87>/Data Type Propagation' : Unused code path elimination
 * Block '<S85>/Scope' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S133>/Conversion' : Unused code path elimination
 * Block '<S133>/Data Type Duplicate' : Unused code path elimination
 * Block '<S134>/Data Type Duplicate' : Unused code path elimination
 * Block '<S92>/Data Type Duplicate' : Unused code path elimination
 * Block '<S93>/Data Type Duplicate' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S98>/Data Type Duplicate' : Unused code path elimination
 * Block '<S99>/Conversion' : Unused code path elimination
 * Block '<S99>/Data Type Duplicate' : Unused code path elimination
 * Block '<S100>/Data Type Duplicate' : Unused code path elimination
 * Block '<S101>/Data Type Duplicate' : Unused code path elimination
 * Block '<S102>/Data Type Duplicate' : Unused code path elimination
 * Block '<S104>/Data Type Duplicate' : Unused code path elimination
 * Block '<S105>/Data Type Duplicate' : Unused code path elimination
 * Block '<S88>/G' : Unused code path elimination
 * Block '<S88>/H' : Unused code path elimination
 * Block '<S88>/N' : Unused code path elimination
 * Block '<S88>/P0' : Unused code path elimination
 * Block '<S88>/Q' : Unused code path elimination
 * Block '<S88>/R' : Unused code path elimination
 * Block '<S120>/CheckSignalProperties' : Unused code path elimination
 * Block '<S129>/CheckSignalProperties' : Unused code path elimination
 * Block '<S130>/CheckSignalProperties' : Unused code path elimination
 * Block '<S162>/Scope' : Unused code path elimination
 * Block '<S173>/Data Type Duplicate' : Unused code path elimination
 * Block '<S173>/Data Type Propagation' : Unused code path elimination
 * Block '<S163>/Scope' : Unused code path elimination
 * Block '<S175>/Data Type Duplicate' : Unused code path elimination
 * Block '<S175>/Data Type Propagation' : Unused code path elimination
 * Block '<S164>/Scope' : Unused code path elimination
 * Block '<S177>/Data Type Duplicate' : Unused code path elimination
 * Block '<S177>/Data Type Propagation' : Unused code path elimination
 * Block '<S165>/Scope' : Unused code path elimination
 * Block '<S179>/Data Type Duplicate' : Unused code path elimination
 * Block '<S179>/Data Type Propagation' : Unused code path elimination
 * Block '<S180>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S182>/Data Type Duplicate' : Unused code path elimination
 * Block '<S182>/Data Type Propagation' : Unused code path elimination
 * Block '<S183>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S185>/Data Type Duplicate' : Unused code path elimination
 * Block '<S185>/Data Type Propagation' : Unused code path elimination
 * Block '<S186>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S188>/Data Type Duplicate' : Unused code path elimination
 * Block '<S188>/Data Type Propagation' : Unused code path elimination
 * Block '<S189>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S16>/Gain' : Unused code path elimination
 * Block '<S16>/Gain1' : Unused code path elimination
 * Block '<S16>/Scope' : Unused code path elimination
 * Block '<S205>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S209>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S215>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S249>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S193>/To Workspace' : Unused code path elimination
 * Block '<S193>/To Workspace1' : Unused code path elimination
 * Block '<S269>/Data Type Duplicate' : Unused code path elimination
 * Block '<S269>/Data Type Propagation' : Unused code path elimination
 * Block '<S261>/Scope' : Unused code path elimination
 * Block '<S263>/Scope' : Unused code path elimination
 * Block '<S280>/Data Type Duplicate' : Unused code path elimination
 * Block '<S280>/Data Type Propagation' : Unused code path elimination
 * Block '<S264>/Scope' : Unused code path elimination
 * Block '<S290>/Data Type Duplicate' : Unused code path elimination
 * Block '<S290>/Data Type Propagation' : Unused code path elimination
 * Block '<S282>/Scope' : Unused code path elimination
 * Block '<S284>/Scope' : Unused code path elimination
 * Block '<S301>/Data Type Duplicate' : Unused code path elimination
 * Block '<S301>/Data Type Propagation' : Unused code path elimination
 * Block '<S285>/Scope' : Unused code path elimination
 * Block '<S311>/Data Type Duplicate' : Unused code path elimination
 * Block '<S311>/Data Type Propagation' : Unused code path elimination
 * Block '<S303>/Scope' : Unused code path elimination
 * Block '<S305>/Scope' : Unused code path elimination
 * Block '<S322>/Data Type Duplicate' : Unused code path elimination
 * Block '<S322>/Data Type Propagation' : Unused code path elimination
 * Block '<S306>/Scope' : Unused code path elimination
 * Block '<S332>/Data Type Duplicate' : Unused code path elimination
 * Block '<S332>/Data Type Propagation' : Unused code path elimination
 * Block '<S324>/Scope' : Unused code path elimination
 * Block '<S326>/Scope' : Unused code path elimination
 * Block '<S343>/Data Type Duplicate' : Unused code path elimination
 * Block '<S343>/Data Type Propagation' : Unused code path elimination
 * Block '<S327>/Scope' : Unused code path elimination
 * Block '<S354>/Data Type Duplicate' : Unused code path elimination
 * Block '<S354>/Data Type Propagation' : Unused code path elimination
 * Block '<S355>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S363>/Data Type Duplicate' : Unused code path elimination
 * Block '<S363>/Data Type Propagation' : Unused code path elimination
 * Block '<S364>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S370>/Data Type Duplicate' : Unused code path elimination
 * Block '<S370>/Data Type Propagation' : Unused code path elimination
 * Block '<S366>/Scope' : Unused code path elimination
 * Block '<S423>/Data Type Duplicate' : Unused code path elimination
 * Block '<S423>/Data Type Propagation' : Unused code path elimination
 * Block '<S424>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S131>/Conversion' : Eliminate redundant data type conversion
 * Block '<S132>/Conversion' : Eliminate redundant data type conversion
 * Block '<S134>/Conversion' : Eliminate redundant data type conversion
 * Block '<S88>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S104>/Conversion' : Eliminate redundant data type conversion
 * Block '<S108>/Reshape' : Reshape block reduction
 * Block '<S88>/ReshapeX0' : Reshape block reduction
 * Block '<S88>/Reshapeu' : Reshape block reduction
 * Block '<S88>/Reshapexhat' : Reshape block reduction
 * Block '<S11>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S11>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S13>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S13>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S13>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S13>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S245>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S21>/Sum' : Unused code path elimination
 * Block '<S22>/Sum' : Unused code path elimination
 * Block '<S23>/Sum' : Unused code path elimination
 * Block '<S24>/Sum' : Unused code path elimination
 * Block '<S1>/Constant2' : Unused code path elimination
 * Block '<S1>/Constant3' : Unused code path elimination
 * Block '<S7>/Constant2' : Unused code path elimination
 * Block '<S7>/Sum' : Unused code path elimination
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
 * '<S5>'   : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Distance_from_Speaker'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Back_Lower'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Back_Upper'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Ball_Screw'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Arm_Length_Calculation/Arm_Length_Calculator_Front'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Compare To Zero'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Compare To Zero1'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/CompareToFloor'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Chart'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Compare To Constant'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Compare To Constant1'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem Reference/Compare To Constant2'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/Compare To Zero'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/Compare To Zero1'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/Compare To Zero2'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/PI and Integral Enable'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/PI and Integral Enable/Detect Increase'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Climber_Control/PI and Integral Enable/Saturation Dynamic'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero10'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero18'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero19'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero20'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero21'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero22'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero7'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero9'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Chart_Intake_and_Shooter'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant1'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant2'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant3'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant4'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Compare To Constant5'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase1'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase2'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase3'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Detect Increase4'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Left/Saturation Dynamic'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Intake_Rollers_and_Shooter_Wheels/Feed Forward plus PI and Integral Enable Right/Saturation Dynamic'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_AA_To_Extentions'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Back_Extentions_to_AA'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Chart_Shooter_Position'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Compare To Zero'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_AA_To_Extentions'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Front_Extentions_to_AA'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Angle_Gap_Height'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Get_Arm_Lengths'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Difference'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PD3/Low_Pass_Filter'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable/Detect Increase'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable/Saturation Dynamic'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1/Detect Increase'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable1/Saturation Dynamic'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2/Detect Increase'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/PI and Integral Enable2/Saturation Dynamic'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Saturation Dynamic'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Lower/Discrete Rate Limiter/Unit Delay External IC'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Saturation Dynamic'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Back Upper/Discrete Rate Limiter/Unit Delay External IC'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Saturation Dynamic'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Ball Screw/Discrete Rate Limiter/Unit Delay External IC'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Saturation Dynamic'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Shooter_Arm_Controls/Rate Limit Front/Discrete Rate Limiter/Unit Delay External IC'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Errors'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Circular Deadband'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero1'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero1'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero2'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero3'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Gyro_Adjustment/Compare To Zero4'
 * '<S415>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S416>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S417>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S418>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S419>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S420>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S421>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S422>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S423>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S424>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S425>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S426>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

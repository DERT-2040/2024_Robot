/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model_data.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.208
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Mar 26 21:06:05 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"

/* Invariant block signals (default storage) */
const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB = {
  645.16,                              /* '<S162>/Math Function1' */
  645.16,                              /* '<S165>/Math Function1' */
  645.16,                              /* '<S166>/Math Function1' */
  -1.0,                                /* '<S276>/Cos5' */
  1.2246467991473532E-16,              /* '<S276>/Sin5' */
  -1.0,                                /* '<S297>/Cos5' */
  1.2246467991473532E-16,              /* '<S297>/Sin5' */
  -1.0,                                /* '<S318>/Cos5' */
  1.2246467991473532E-16,              /* '<S318>/Sin5' */
  -1.0,                                /* '<S339>/Cos5' */
  1.2246467991473532E-16,              /* '<S339>/Sin5' */
  -0.78539816339744828,                /* '<S349>/Atan1' */
  0.78539816339744828,                 /* '<S349>/Add1' */
  2.3561944901923448,                  /* '<S349>/Atan3' */
  3.9269908169872414,                  /* '<S349>/Add2' */
  -2.3561944901923448,                 /* '<S349>/Atan4' */
  -0.78539816339744828                 /* '<S349>/Add3' */
};

/* Constant parameters (default storage) */
const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP = {
  /* Expression: Servo_Addition_out
   * Referenced by: '<S10>/1-D Lookup Table'
   */
  { 0.0, 0.3 },

  /* Expression: Servo_Front_Arm_Length_in
   * Referenced by: '<S10>/1-D Lookup Table'
   */
  { 250.0, 350.0 },

  /* Expression: Speaker_Height_out
   * Referenced by: '<S16>/1-D Lookup Table2'
   */
  { 560.0, 580.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0 },

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S16>/1-D Lookup Table1'
   *   '<S16>/1-D Lookup Table2'
   *   '<S16>/1-D Lookup Table3'
   */
  { 1.37, 1.7, 2.0, 2.3, 2.7, 3.0, 3.3, 3.6, 4.0 },

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S16>/1-D Lookup Table1'
   */
  { 60.0, 50.0, 40.0, 35.0, 32.0, 30.0, 27.5, 26.5, 26.5 },

  /* Expression: Speaker_Gap_out
   * Referenced by: '<S16>/1-D Lookup Table3'
   */
  { 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0 },

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S195>/Capture Radius'
   */
  { 0.2, 0.3, 0.4, 0.5 },

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S195>/Capture Radius'
   *   '<S195>/Lookahead Distance'
   */
  { 0.5, 1.5, 2.5, 3.5 },

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S195>/Lookahead Distance'
   */
  { 0.2, 0.2, 0.2, 0.4 },

  /* Expression: All_Autos
   * Referenced by: '<S34>/Constant9'
   */
  { 7.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 3.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 4.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    7.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.0, 7.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 6.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    6.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.0, 11.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    6.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 13.0, 15.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 14.0, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
  },

  /* Expression: All_Paths
   * Referenced by: '<S3>/Constant20'
   */
  { 1.5410600000000017, 2.6930600000000009, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 5.5399999999999991,
    5.5399999999999991, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 2.6930600000000009, 2.6930600000000009, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    5.5399999999999991, 5.5399999999999991, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2,
    8.2, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6930600000000009, 2.9610600000000016,
    2.9610600000000016, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 5.5399999999999991, 5.9999999999999991,
    6.8999999999999995, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.5707963267948966, 1.5707963267948966,
    1.5707963267948966, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.9610600000000016,
    2.1410600000000013, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 6.8999999999999995, 6.4999999999999991, 8.2,
    8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.5707963267948966, 0.78539816339744828, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 15.000060000000001, 13.891060000000001, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    5.5399999999999991, 5.5399999999999991, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2,
    8.2, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1415926535897931,
    3.1415926535897931, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    13.891060000000001, 13.891060000000001, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 5.5399999999999991,
    5.5399999999999991, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1415926535897931, 3.1415926535897931,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 13.891060000000001,
    13.716060000000002, 13.716060000000002, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 5.5399999999999991,
    5.9999999999999991, 6.8999999999999995, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2,
    1.25, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.5707963267948966,
    1.5707963267948966, 1.5707963267948966, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    13.716060000000002, 14.400060000000002, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 6.8999999999999995,
    6.4999999999999991, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.5707963267948966, 2.3561944901923448,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.79106000000000165,
    1.3410600000000024, 2.6410600000000013, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 4.26, 3.875, 3.875, 8.2, 8.2, 8.2,
    8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -1.0471975511965976, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    2.6410600000000013, 1.5410600000000017, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 3.875, 3.8999999999999995,
    8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.78539816339744828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.5410600000000017, 3.5410600000000017, 5.5410600000000017,
    6.5410600000000017, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 3.8999999999999995, 2.1999999999999993, 1.6999999999999993,
    2.1719999999999997, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 3.75, 3.75, 2.5, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, -0.78539816339744828, -0.78539816339744828, 0.0,
    0.19198621771937624, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.5410600000000017,
    5.5410600000000017, 3.5410600000000017, 1.5410600000000017, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 2.1719999999999997,
    1.6999999999999993, 2.1999999999999993, 3.8999999999999995, 8.2, 8.2, 8.2,
    8.2, 8.2, 8.2, 3.75, 3.75, 2.5, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.19198621771937624, 0.0, -0.78539816339744828, -0.78539816339744828, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 15.750060000000001, 15.20006, 13.900060000000002,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 4.26,
    4.1, 4.1, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 1.25, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -2.0943951023931953, -3.1415926535897931,
    -3.1415926535897931, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 13.900060000000002,
    15.000060000000001, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 4.1, 3.8999999999999995, 8.2, 8.2, 8.2, 8.2,
    8.2, 8.2, 8.2, 8.2, 1.25, 1.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -3.1415926535897931, -2.3561944901923448, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 15.000060000000001, 13.000060000000001, 11.000060000000001,
    10.000060000000001, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 3.8999999999999995, 2.1999999999999993, 1.6999999999999993,
    2.1719999999999997, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 3.75, 3.75, 2.5, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, -2.3561944901923448, -2.3561944901923448,
    -3.1415926535897931, -3.3335788713091694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    10.000060000000001, 11.000060000000001, 13.000060000000001,
    15.000060000000001, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 2.1719999999999997, 1.6999999999999993, 2.1999999999999993,
    3.8999999999999995, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 3.75, 3.75, 2.5, 1.25, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, -3.3335788713091694, -3.1415926535897931,
    -2.3561944901923448, -2.3561944901923448, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: All_Num_Poses
   * Referenced by: '<S3>/Constant6'
   */
  { 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 3.0, 2.0, 3.0, 2.0, 4.0, 4.0, 3.0, 2.0, 4.0,
    4.0 },

  /* Expression: [0 1 2]
   * Referenced by: '<S27>/Constant3'
   */
  { 0.0, 1.0, 2.0 },

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S412>/Modulation_Drv'
   */
  { -1.0, -0.58, -0.31, -0.18, -0.14, -0.09, -0.06, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.06, 0.09, 0.14, 0.18, 0.31, 0.58, 1.0 },

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S412>/Modulation_Drv'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.45, -0.4, -0.35, -0.3, 0.0, 0.3, 0.35,
    0.4, 0.45, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S411>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.75, -0.55, -0.4, -0.27, -0.17, -0.1, -0.04, -0.015, -0.0, 0.0, 0.0,
    0.015, 0.04, 0.1, 0.17, 0.27, 0.4, 0.55, 0.75, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S411>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.25, -0.15, -0.05, 0.0, 0.05,
    0.15, 0.25, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S14>/Constant4'
   */
  { 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0,
    0.0, 0.25 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S267>/1-D Lookup Table'
   *   '<S288>/1-D Lookup Table'
   *   '<S309>/1-D Lookup Table'
   *   '<S330>/1-D Lookup Table'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S267>/1-D Lookup Table'
   *   '<S288>/1-D Lookup Table'
   *   '<S309>/1-D Lookup Table'
   *   '<S330>/1-D Lookup Table'
   */
  { 0.0, 0.78539816339744828 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

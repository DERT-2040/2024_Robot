/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model_data.c
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

#include "Code_Gen_Model.h"

/* Invariant block signals (default storage) */
const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB = {
  645.16,                              /* '<S155>/Math Function1' */
  645.16,                              /* '<S158>/Math Function1' */
  645.16,                              /* '<S159>/Math Function1' */
  -1.0,                                /* '<S272>/Cos5' */
  1.2246467991473532E-16,              /* '<S272>/Sin5' */
  -1.0,                                /* '<S293>/Cos5' */
  1.2246467991473532E-16,              /* '<S293>/Sin5' */
  -1.0,                                /* '<S314>/Cos5' */
  1.2246467991473532E-16,              /* '<S314>/Sin5' */
  -1.0,                                /* '<S335>/Cos5' */
  1.2246467991473532E-16,              /* '<S335>/Sin5' */
  -0.78539816339744828,                /* '<S345>/Atan1' */
  0.78539816339744828,                 /* '<S345>/Add1' */
  2.3561944901923448,                  /* '<S345>/Atan3' */
  3.9269908169872414,                  /* '<S345>/Add2' */
  -2.3561944901923448,                 /* '<S345>/Atan4' */
  -0.78539816339744828                 /* '<S345>/Add3' */
};

/* Constant parameters (default storage) */
const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP = {
  /* Expression: Servo_Addition_out
   * Referenced by: '<S9>/1-D Lookup Table'
   */
  { 0.0, 0.3 },

  /* Expression: Servo_Front_Arm_Length_in
   * Referenced by: '<S9>/1-D Lookup Table'
   */
  { 250.0, 350.0 },

  /* Expression: Speaker_MotorSpeed_out
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  { 2500.0, 2600.0, 2850.0, 3000.0, 3100.0, 3250.0, 3400.0, 4000.0, 4500.0,
    4500.0 },

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S9>/1-D Lookup Table1'
   *   '<S15>/1-D Lookup Table1'
   *   '<S15>/1-D Lookup Table2'
   *   '<S15>/1-D Lookup Table3'
   */
  { 1.44, 1.71, 2.3, 2.7, 3.0, 3.3, 3.5, 4.0, 4.2, 4.7 },

  /* Expression: Speaker_Height_out
   * Referenced by: '<S15>/1-D Lookup Table2'
   */
  { 657.0, 626.0, 612.0, 607.0, 603.0, 600.0, 599.0, 597.0, 597.0, 597.0 },

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S15>/1-D Lookup Table1'
   */
  { 45.0, 42.5, 38.0, 34.5, 33.5, 33.0, 32.5, 30.5, 29.0, 23.0 },

  /* Expression: Speaker_Gap_out
   * Referenced by: '<S15>/1-D Lookup Table3'
   */
  { 303.0, 303.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0 },

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S191>/Capture Radius'
   */
  { 0.2, 0.2, 0.25, 0.5 },

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S191>/Capture Radius'
   *   '<S191>/Lookahead Distance'
   */
  { 0.5, 1.5, 2.5, 3.5 },

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S191>/Lookahead Distance'
   */
  { 0.2, 0.2, 0.2, 0.4 },

  /* Expression: Yaw_angle_correction_yaw
   * Referenced by: '<S397>/1-D Lookup Table'
   */
  { -1.25, -1.5, -3.61, -3.96, -4.97, -6.38, -7.25, -7.5, -7.98 },

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S397>/1-D Lookup Table'
   */
  { 1.524, 1.6764, 2.02692, 2.1336, 2.4383999999999997, 3.048, 3.47472, 3.81,
    4.35864 },

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S400>/Modulation_Drv'
   */
  { -1.0, -0.58, -0.31, -0.18, -0.14, -0.09, -0.06, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.06, 0.09, 0.14, 0.18, 0.31, 0.58, 1.0 },

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S400>/Modulation_Drv'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.45, -0.4, -0.35, -0.3, 0.0, 0.3, 0.35,
    0.4, 0.45, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S399>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.75, -0.55, -0.4, -0.27, -0.17, -0.1, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.1, 0.17, 0.27, 0.4, 0.55, 0.75, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S399>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.25, -0.2, 0.0, 0.2, 0.25,
    0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: [0 1 2]
   * Referenced by: '<Root>/Constant'
   */
  { 0.0, 1.0, 2.0 },

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S13>/Constant4'
   */
  { 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0,
    0.0, 0.25 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S263>/1-D Lookup Table'
   *   '<S284>/1-D Lookup Table'
   *   '<S305>/1-D Lookup Table'
   *   '<S326>/1-D Lookup Table'
   */
  { 1.0, 0.05 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S263>/1-D Lookup Table'
   *   '<S284>/1-D Lookup Table'
   *   '<S305>/1-D Lookup Table'
   *   '<S326>/1-D Lookup Table'
   */
  { 0.0, 0.78539816339744828 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

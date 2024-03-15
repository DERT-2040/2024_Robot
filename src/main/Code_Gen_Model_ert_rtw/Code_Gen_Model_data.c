/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model_data.c
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

#include "Code_Gen_Model.h"

/* Invariant block signals (default storage) */
const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB = {
  645.16,                              /* '<S152>/Math Function1' */
  645.16,                              /* '<S155>/Math Function1' */
  645.16,                              /* '<S156>/Math Function1' */
  -1.0,                                /* '<S269>/Cos5' */
  1.2246467991473532E-16,              /* '<S269>/Sin5' */
  -1.0,                                /* '<S290>/Cos5' */
  1.2246467991473532E-16,              /* '<S290>/Sin5' */
  -1.0,                                /* '<S311>/Cos5' */
  1.2246467991473532E-16,              /* '<S311>/Sin5' */
  -1.0,                                /* '<S332>/Cos5' */
  1.2246467991473532E-16,              /* '<S332>/Sin5' */
  -0.78539816339744828,                /* '<S342>/Atan1' */
  0.78539816339744828,                 /* '<S342>/Add1' */
  2.3561944901923448,                  /* '<S342>/Atan3' */
  3.9269908169872414,                  /* '<S342>/Add2' */
  -2.3561944901923448,                 /* '<S342>/Atan4' */
  -0.78539816339744828                 /* '<S342>/Add3' */
};

/* Constant parameters (default storage) */
const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S10>/1-D Lookup Table'
   *   '<S85>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: Servo_Front_Arm_Length_in
   * Referenced by: '<S10>/1-D Lookup Table'
   */
  { 250.0, 350.0 },

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S10>/1-D Lookup Table1'
   *   '<S16>/1-D Lookup Table1'
   *   '<S16>/1-D Lookup Table2'
   *   '<S16>/1-D Lookup Table3'
   */
  { 1.44, 1.71, 2.3, 2.7, 3.0, 3.3, 3.5, 4.0, 4.2, 4.7 },

  /* Expression: Speaker_Height_out
   * Referenced by: '<S16>/1-D Lookup Table2'
   */
  { 575.0, 600.0, 612.0, 607.0, 603.0, 600.0, 599.0, 597.0, 597.0, 597.0 },

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S16>/1-D Lookup Table1'
   */
  { 55.0, 50.0, 42.0, 37.0, 34.5, 33.0, 32.5, 30.5, 29.0, 23.0 },

  /* Expression: Speaker_Gap_out
   * Referenced by: '<S16>/1-D Lookup Table3'
   */
  { 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0 },

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S188>/Capture Radius'
   */
  { 0.2, 0.2, 0.25, 0.5 },

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S188>/Capture Radius'
   *   '<S188>/Lookahead Distance'
   */
  { 0.5, 1.5, 2.5, 3.5 },

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S188>/Lookahead Distance'
   */
  { 0.2, 0.2, 0.2, 0.4 },

  /* Expression: All_Paths
   * Referenced by: '<S3>/Constant20'
   */
  { 15.2254, 13.8477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.7476, 4.1384,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.85521133347722145, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 13.8477, 13.8477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.1384,
    4.1384, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.85521133347722145, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 13.8477, 14.5825, 13.8477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    4.1384, 2.6163, 2.6163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 13.8477, 13.8477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6163,
    2.6163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    13.8477, 10.9741, 8.5991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6163, 1.8684,
    2.4851, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.22689280275926285, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 8.5991, 12.1419, 14.4119, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.4851,
    1.6978, 1.9734, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.24434609527920614, 5.8992128717408336, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 14.4119, 13.8477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.9734, 1.4485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.8992128717408336,
    5.6723200689815707, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 13.8477, 13.8477,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4485, 1.4485, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    5.6723200689815707, 5.6723200689815707, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 13.8477, 8.5991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4485, 0.963,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 5.6723200689815707, 6.19591884457987, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 8.5991, 14.3463, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.963, 2.4326, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.19591884457987, 6.1086523819801526, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.3157, 2.6934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 2.7476, 4.1384, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.4279739737023647, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6934, 2.6934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 4.1384, 4.1384, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 2.6934, 1.9586, 2.6934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    4.1384, 2.6163, 2.6163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 2.6934, 2.6934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6163,
    2.6163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6934,
    5.567, 7.942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6163, 1.8684, 2.4851, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 6.2308254296197561, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.942,
    4.3992, 2.1292, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.4851, 1.6978, 1.9734,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 6.2133721370998138, 0.38397243543875248, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 2.1292, 2.6934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.9734, 1.4485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.38397243543875248, 0.6108652381980153, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6934, 2.6934, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.4485, 1.4485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.6108652381980153,
    0.6108652381980153, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6934, 7.942,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4485, 0.963, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.6108652381980153, 0.087266462599716474, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 7.942, 2.1948, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.963, 2.4326,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.087266462599716474, 0.17453292519943295, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: All_Num_Poses
   * Referenced by: '<S3>/Constant6'
   */
  { 2.0, 2.0, 3.0, 2.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 3.0,
    3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0 },

  /* Expression: Yaw_angle_correction_yaw
   * Referenced by: '<S394>/1-D Lookup Table'
   */
  { -1.25, -1.5, -3.61, -3.96, -4.97, -6.38, -7.25, -7.5, -7.98 },

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S394>/1-D Lookup Table'
   */
  { 1.524, 1.6764, 2.02692, 2.1336, 2.4383999999999997, 3.048, 3.47472, 3.81,
    4.35864 },

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S396>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.75, -0.55, -0.4, -0.27, -0.17, -0.1, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.1, 0.17, 0.27, 0.4, 0.55, 0.75, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S396>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.25, -0.2, 0.0, 0.2, 0.25,
    0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S397>/Modulation_Drv'
   */
  { -1.0, -0.58, -0.31, -0.18, -0.14, -0.09, -0.06, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.06, 0.09, 0.14, 0.18, 0.31, 0.58, 1.0 },

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S397>/Modulation_Drv'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.45, -0.4, -0.35, -0.3, 0.0, 0.3, 0.35,
    0.4, 0.45, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: [0 1 2]
   * Referenced by: '<Root>/Constant'
   */
  { 0.0, 1.0, 2.0 },

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S14>/Constant4'
   */
  { 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0,
    0.0, 0.25 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S260>/1-D Lookup Table'
   *   '<S281>/1-D Lookup Table'
   *   '<S302>/1-D Lookup Table'
   *   '<S323>/1-D Lookup Table'
   */
  { 1.0, 0.05 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S260>/1-D Lookup Table'
   *   '<S281>/1-D Lookup Table'
   *   '<S302>/1-D Lookup Table'
   *   '<S323>/1-D Lookup Table'
   */
  { 0.0, 0.78539816339744828 }
};

/* Constant parameters with dynamic initialization (default storage) */
ConstInitP_Code_Gen_Model_T Code_Gen_Model_ConstInitP = {
  /* Expression: All_Autos
   * Referenced by: '<S29>/Constant9'
   */
  { -1.0, 6.0, 7.0, 4.0, 8.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 3.0, 5.0, 7.0,
    9.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 4.0, 6.0, 8.0, 10.0, 0.0, 0.0, 0.0, 0.0,
    -1.0, 6.0, 7.0, 4.0, 8.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 3.0, 5.0, 7.0,
    9.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 4.0, 6.0, 8.0, 10.0, 0.0, 0.0, 0.0, 0.0,
    -1.0, 6.0, 7.0, 4.0, 8.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 3.0, 5.0, 7.0,
    9.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 4.0, 6.0, 8.0, 10.0, 0.0, 0.0, 0.0, 0.0,
    -1.0, 6.0, 7.0, 4.0, 8.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 11.0, 13.0, 15.0,
    17.0, 19.0, 0.0, 0.0, 0.0, 0.0, 0.0, 12.0, 14.0, 16.0, 18.0, 20.0, 0.0, 0.0,
    0.0, 0.0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

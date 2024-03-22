/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model_data.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.181
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 08:16:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"

/* Invariant block signals (default storage) */
const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB = {
  645.16,                              /* '<S160>/Math Function1' */
  645.16,                              /* '<S163>/Math Function1' */
  645.16,                              /* '<S164>/Math Function1' */
  -1.0,                                /* '<S274>/Cos5' */
  1.2246467991473532E-16,              /* '<S274>/Sin5' */
  -1.0,                                /* '<S295>/Cos5' */
  1.2246467991473532E-16,              /* '<S295>/Sin5' */
  -1.0,                                /* '<S316>/Cos5' */
  1.2246467991473532E-16,              /* '<S316>/Sin5' */
  -1.0,                                /* '<S337>/Cos5' */
  1.2246467991473532E-16,              /* '<S337>/Sin5' */
  -0.78539816339744828,                /* '<S347>/Atan1' */
  0.78539816339744828,                 /* '<S347>/Add1' */
  2.3561944901923448,                  /* '<S347>/Atan3' */
  3.9269908169872414,                  /* '<S347>/Add2' */
  -2.3561944901923448,                 /* '<S347>/Atan4' */
  -0.78539816339744828                 /* '<S347>/Add3' */
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
  { 590.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0, 590.0
  },

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S16>/1-D Lookup Table1'
   *   '<S16>/1-D Lookup Table2'
   *   '<S16>/1-D Lookup Table3'
   */
  { 1.37, 1.7, 2.0, 2.3, 2.7, 3.0, 3.3, 3.6, 4.0, 4.2, 4.7 },

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S16>/1-D Lookup Table1'
   */
  { 60.0, 50.0, 40.0, 35.0, 32.0, 30.0, 27.5, 26.5, 26.5, 26.5, 26.5 },

  /* Expression: Speaker_Gap_out
   * Referenced by: '<S16>/1-D Lookup Table3'
   */
  { 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0, 293.0
  },

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S193>/Capture Radius'
   */
  { 0.5, 0.5, 0.5, 0.5 },

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S193>/Capture Radius'
   *   '<S193>/Lookahead Distance'
   */
  { 0.5, 1.5, 2.5, 3.5 },

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S193>/Lookahead Distance'
   */
  { 0.2, 0.2, 0.2, 0.4 },

  /* Expression: All_Autos
   * Referenced by: '<S34>/Constant9'
   */
  { 7.0, 6.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 3.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 4.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: All_Paths
   * Referenced by: '<S3>/Constant20'
   */
  { 1.5410600000000017, 2.6930600000000009, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 5.7399999999999993,
    5.7399999999999993, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 2.6930600000000009, 2.6930600000000009, 16.54106, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    5.7399999999999993, 5.7399999999999993, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2,
    8.2, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.6930600000000009, 2.9610600000000016,
    2.9610600000000016, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106,
    16.54106, 16.54106, 5.7399999999999993, 6.1999999999999993, 7.1, 8.2, 8.2,
    8.2, 8.2, 8.2, 8.2, 8.2, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.5707963267948966, 1.5707963267948966, 1.5707963267948966, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 2.9610600000000016, 2.9610600000000016, 16.54106,
    16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 16.54106, 7.1,
    7.1, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 8.2, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.5707963267948966, 1.5707963267948966, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: All_Num_Poses
   * Referenced by: '<S3>/Constant6'
   */
  { 2.0, 2.0, 3.0, 2.0 },

  /* Expression: Yaw_angle_correction_yaw
   * Referenced by: '<S399>/1-D Lookup Table'
   */
  { -1.25, -1.5, -3.61, -3.96, -4.97, -6.38, -7.25, -7.5, -7.98 },

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S399>/1-D Lookup Table'
   */
  { 1.524, 1.6764, 2.02692, 2.1336, 2.4383999999999997, 3.048, 3.47472, 3.81,
    4.35864 },

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S401>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.75, -0.55, -0.4, -0.27, -0.17, -0.1, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.1, 0.17, 0.27, 0.4, 0.55, 0.75, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S401>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.25, -0.2, 0.0, 0.2, 0.25,
    0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S402>/Modulation_Drv'
   */
  { -1.0, -0.58, -0.31, -0.18, -0.14, -0.09, -0.06, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.06, 0.09, 0.14, 0.18, 0.31, 0.58, 1.0 },

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S402>/Modulation_Drv'
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
   *   '<S265>/1-D Lookup Table'
   *   '<S286>/1-D Lookup Table'
   *   '<S307>/1-D Lookup Table'
   *   '<S328>/1-D Lookup Table'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S265>/1-D Lookup Table'
   *   '<S286>/1-D Lookup Table'
   *   '<S307>/1-D Lookup Table'
   *   '<S328>/1-D Lookup Table'
   */
  { 0.0, 0.78539816339744828 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

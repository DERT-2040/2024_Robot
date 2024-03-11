/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model_data.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.125
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Mar 11 17:07:08 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"

/* Invariant block signals (default storage) */
const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB = {
  645.16,                              /* '<S141>/Math Function1' */
  645.16,                              /* '<S144>/Math Function1' */
  645.16,                              /* '<S145>/Math Function1' */
  -1.0,                                /* '<S258>/Cos5' */
  1.2246467991473532E-16,              /* '<S258>/Sin5' */
  -1.0,                                /* '<S279>/Cos5' */
  1.2246467991473532E-16,              /* '<S279>/Sin5' */
  -1.0,                                /* '<S300>/Cos5' */
  1.2246467991473532E-16,              /* '<S300>/Sin5' */
  -1.0,                                /* '<S321>/Cos5' */
  1.2246467991473532E-16,              /* '<S321>/Sin5' */
  -0.78539816339744828,                /* '<S331>/Atan1' */
  0.78539816339744828,                 /* '<S331>/Add1' */
  2.3561944901923448,                  /* '<S331>/Atan3' */
  3.9269908169872414,                  /* '<S331>/Add2' */
  -2.3561944901923448,                 /* '<S331>/Atan4' */
  -0.78539816339744828                 /* '<S331>/Add3' */
};

/* Constant parameters (default storage) */
const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP = {
  /* Expression: Speaker_Shooter_Speed_out
   * Referenced by: '<S8>/1-D Lookup Table'
   */
  { 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0,
    3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0 },

  /* Pooled Parameter (Expression: Speaker_Distance_in)
   * Referenced by:
   *   '<S8>/1-D Lookup Table'
   *   '<S14>/1-D Lookup Table1'
   */
  { 1.524, 1.8288, 2.1336, 2.4383999999999997, 2.7432, 3.048, 3.3528, 3.6576,
    3.9623999999999997, 4.2672, 4.572, 4.8767999999999994, 5.1815999999999995,
    5.4864, 5.7912, 6.096 },

  /* Expression: Speaker_Height_out
   * Referenced by: '<S14>/1-D Lookup Table'
   */
  { 627.38, 627.38, 627.38, 627.38, 627.38, 627.38, 627.38 },

  /* Expression: Speaker_Angle_in
   * Referenced by: '<S14>/1-D Lookup Table'
   */
  { 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0 },

  /* Expression: Speaker_Angle_out
   * Referenced by: '<S14>/1-D Lookup Table1'
   */
  { 55.0, 53.0, 51.0, 49.0, 47.0, 45.0, 43.0, 41.0, 39.0, 37.0, 35.0, 33.0, 31.0,
    29.0, 27.0, 25.0 },

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S177>/Capture Radius'
   */
  { 0.2, 0.2, 0.25, 0.5 },

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S177>/Capture Radius'
   *   '<S177>/Lookahead Distance'
   */
  { 0.5, 1.5, 2.5, 3.5 },

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S177>/Lookahead Distance'
   */
  { 0.2, 0.2, 0.2, 0.4 },

  /* Expression: Spline_Ref_Poses_auto2
   * Referenced by: '<S3>/Constant11'
   */
  { 15.22, 12.96, 10.74, 6.27, 3.35, 1.92, 6.56, 5.5, 4.0, 4.2, 2.76, 2.54,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: Spline_Ref_Poses_auto3
   * Referenced by: '<S3>/Constant12'
   */
  { 15.22, 11.5, 6.65, 1.0, 1.0, 1.0, 6.56, 4.4, 2.01, 1.2, 1.2, 1.2,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: Spline_Ref_Poses_auto1
   * Referenced by: '<S3>/Constant4'
   */
  { 15.22, 5.14, 1.18, 1.18, 1.18, 1.18, 6.56, 6.34, 4.23, 4.23, 4.23, 4.23,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: Yaw_angle_correction_yaw
   * Referenced by: '<S383>/1-D Lookup Table'
   */
  { -1.25, -1.5, -3.61, -3.96, -4.97, -6.38, -7.25, -7.5, -7.98 },

  /* Expression: Yaw_angle_correction_distance
   * Referenced by: '<S383>/1-D Lookup Table'
   */
  { 1.524, 1.6764, 2.02692, 2.1336, 2.4383999999999997, 3.048, 3.47472, 3.81,
    4.35864 },

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S386>/Modulation_Drv'
   */
  { -1.0, -0.58, -0.31, -0.18, -0.14, -0.09, -0.06, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.06, 0.09, 0.14, 0.18, 0.31, 0.58, 1.0 },

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S386>/Modulation_Drv'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.45, -0.4, -0.35, -0.3, 0.0, 0.3, 0.35,
    0.4, 0.45, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S385>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.75, -0.55, -0.4, -0.27, -0.17, -0.1, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.1, 0.17, 0.27, 0.4, 0.55, 0.75, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S385>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.25, -0.2, 0.0, 0.2, 0.25,
    0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S12>/Constant4'
   */
  { 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0,
    0.0, 0.25 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S249>/1-D Lookup Table'
   *   '<S270>/1-D Lookup Table'
   *   '<S291>/1-D Lookup Table'
   *   '<S312>/1-D Lookup Table'
   */
  { 1.0, 0.05 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S249>/1-D Lookup Table'
   *   '<S270>/1-D Lookup Table'
   *   '<S291>/1-D Lookup Table'
   *   '<S312>/1-D Lookup Table'
   */
  { 0.0, 0.78539816339744828 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model_data.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.46
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Feb  3 19:53:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"

/* Invariant block signals (default storage) */
const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB = {
  -1.0,                                /* '<S163>/Cos5' */
  1.2246467991473532E-16,              /* '<S163>/Sin5' */
  -1.0,                                /* '<S184>/Cos5' */
  1.2246467991473532E-16,              /* '<S184>/Sin5' */
  -1.0,                                /* '<S205>/Cos5' */
  1.2246467991473532E-16,              /* '<S205>/Sin5' */
  -1.0,                                /* '<S226>/Cos5' */
  1.2246467991473532E-16,              /* '<S226>/Sin5' */
  -0.6251674791193863,                 /* '<S236>/Atan1' */
  0.94562884767551025,                 /* '<S236>/Add1' */
  2.5164251744704069,                  /* '<S236>/Atan3' */
  4.0872215012653035,                  /* '<S236>/Add2' */
  -2.5164251744704069,                 /* '<S236>/Atan4' */
  -0.94562884767551036                 /* '<S236>/Add3' */
};

/* Constant parameters (default storage) */
const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP = {
  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S82>/Capture Radius'
   */
  { 0.2, 0.2, 0.25, 0.5 },

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S82>/Capture Radius'
   *   '<S82>/Lookahead Distance'
   */
  { 0.5, 1.5, 2.5, 3.5 },

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S82>/Lookahead Distance'
   */
  { 0.2, 0.2, 0.2, 0.4 },

  /* Expression: Spline_Ref_Poses_auto2
   * Referenced by: '<S2>/Constant11'
   */
  { 15.22, 12.96, 10.74, 6.27, 3.35, 1.92, 6.56, 5.5, 4.0, 4.2, 2.76, 2.54,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: Spline_Ref_Poses_auto3
   * Referenced by: '<S2>/Constant12'
   */
  { 15.22, 11.5, 6.65, 1.0, 1.0, 1.0, 6.56, 4.4, 2.01, 1.2, 1.2, 1.2,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: Spline_Ref_Poses_auto1
   * Referenced by: '<S2>/Constant4'
   */
  { 15.22, 5.14, 1.18, 1.18, 1.18, 1.18, 6.56, 6.34, 4.23, 4.23, 4.23, 4.23,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821,
    7.1888840393700821, 7.1888840393700821, 7.1888840393700821, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S289>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.75, -0.55, -0.4, -0.27, -0.17, -0.1, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.1, 0.17, 0.27, 0.4, 0.55, 0.75, 1.0 },

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S289>/Modulation_Str_Y_Rel'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.25, -0.2, 0.0, 0.2, 0.25,
    0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S290>/Modulation_Drv'
   */
  { -1.0, -0.58, -0.31, -0.18, -0.14, -0.09, -0.06, -0.04, -0.01, -0.0, 0.0, 0.0,
    0.01, 0.04, 0.06, 0.09, 0.14, 0.18, 0.31, 0.58, 1.0 },

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S290>/Modulation_Drv'
   */
  { -1.0, -0.9, -0.8, -0.7, -0.6, -0.5, -0.45, -0.4, -0.35, -0.3, 0.0, 0.3, 0.35,
    0.4, 0.45, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S9>/Constant4'
   */
  { 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0, 0.0, 0.25, 0.25, 0.0,
    0.0, 0.25 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S154>/1-D Lookup Table'
   *   '<S175>/1-D Lookup Table'
   *   '<S196>/1-D Lookup Table'
   *   '<S217>/1-D Lookup Table'
   */
  { 1.0, 0.05 },

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S154>/1-D Lookup Table'
   *   '<S175>/1-D Lookup Table'
   *   '<S196>/1-D Lookup Table'
   *   '<S217>/1-D Lookup Table'
   */
  { 0.0, 0.78539816339744828 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
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
#include "rtwtypes.h"
#include "Code_Gen_Model_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include <float.h>
#include "rt_defines.h"

/* Named constants for Chart: '<S5>/Chart_Intake_and_Shooter' */
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)3U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)4U)
#define Code_Gen_Model_IN_Note_Intake  ((uint8_T)2U)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)1U)

/* Exported block parameters */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S303>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S301>/Constant'
                                         *   '<S301>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S303>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S301>/Constant1'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S236>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S152>/Constant3'
                                        *   '<S173>/Constant3'
                                        *   '<S194>/Constant3'
                                        *   '<S215>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S152>/Constant2'
                                   *   '<S173>/Constant2'
                                   *   '<S194>/Constant2'
                                   *   '<S215>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S152>/Saturation'
                                        *   '<S173>/Saturation'
                                        *   '<S194>/Saturation'
                                        *   '<S215>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S152>/Saturation'
                                        *   '<S173>/Saturation'
                                        *   '<S194>/Saturation'
                                        *   '<S215>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S152>/Gain'
                                            *   '<S173>/Gain'
                                            *   '<S194>/Gain'
                                            *   '<S215>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S152>/Gain2'
                                        *   '<S173>/Gain2'
                                        *   '<S194>/Gain2'
                                        *   '<S215>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S152>/Saturation1'
                                        *   '<S173>/Saturation1'
                                        *   '<S194>/Saturation1'
                                        *   '<S215>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S152>/Saturation1'
                                        *   '<S173>/Saturation1'
                                        *   '<S194>/Saturation1'
                                        *   '<S215>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S152>/Gain1'
                                        *   '<S173>/Gain1'
                                        *   '<S194>/Gain1'
                                        *   '<S215>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S157>/Constant'
                            *   '<S178>/Constant'
                            *   '<S199>/Constant'
                            *   '<S220>/Constant'
                            */
real_T Intake_Note_Detect_Dist = 100.0;/* Variable: Intake_Note_Detect_Dist
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T KF_Enable = 0.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S7>/Constant'
                                          */
real_T Note_Eject_Time = 0.5;          /* Variable: Note_Eject_Time
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Odometry_IC_X = 15.22;          /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 6.56;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S9>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S79>/Constant'
                                        */
real_T Shooter_Eject_DC = 0.2;         /* Variable: Shooter_Eject_DC
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Note_Detect_Dist = 75.0;/* Variable: Shooter_Note_Detect_Dist
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Transfer_DC = 0.17;     /* Variable: Shooter_Transfer_DC
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S137>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S137>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S84>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S2>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S97>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S137>/Constant3'
                                     */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S291>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S257>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S257>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S257>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S257>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S256>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S257>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S257>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S257>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S257>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S257>/Constant1'
                                   *   '<S257>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S257>/Constant'
                                   *   '<S257>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S247>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S247>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S247>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S247>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S247>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S247>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S155>/Constant3'
                                        *   '<S176>/Constant3'
                                        *   '<S197>/Constant3'
                                        *   '<S218>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S155>/Constant2'
                                *   '<S176>/Constant2'
                                *   '<S197>/Constant2'
                                *   '<S218>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S155>/Saturation'
                                           *   '<S176>/Saturation'
                                           *   '<S197>/Saturation'
                                           *   '<S218>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S155>/Saturation'
                                          *   '<S176>/Saturation'
                                          *   '<S197>/Saturation'
                                          *   '<S218>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S155>/Gain2'
                                         *   '<S176>/Gain2'
                                         *   '<S197>/Gain2'
                                         *   '<S218>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S155>/Saturation1'
                                             *   '<S176>/Saturation1'
                                             *   '<S197>/Saturation1'
                                             *   '<S218>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S155>/Saturation1'
                                            *   '<S176>/Saturation1'
                                            *   '<S197>/Saturation1'
                                            *   '<S218>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S155>/Gain1'
                                        *   '<S176>/Gain1'
                                        *   '<S197>/Gain1'
                                        *   '<S218>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S289>/Constant'
                                        */
real_T TEST_Request_Note_Eject = 0.0;  /* Variable: TEST_Request_Note_Eject
                                        * Referenced by: '<S5>/Constant2'
                                        */
real_T TEST_Request_Note_Pickup = 0.0; /* Variable: TEST_Request_Note_Pickup
                                        * Referenced by: '<S5>/Constant'
                                        */
real_T TEST_Request_Note_Transfer = 0.0;/* Variable: TEST_Request_Note_Transfer
                                         * Referenced by: '<S5>/Constant1'
                                         */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S235>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S235>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S235>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S235>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S235>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S235>/Constant3'
                                    */

/* Block signals (default storage) */
B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Code_Gen_Model_T Code_Gen_Model_Y;

/* Real-time model */
static RT_MODEL_Code_Gen_Model_T Code_Gen_Model_M_;
RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M = &Code_Gen_Model_M_;

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = (maxIndex >> 1U);
    iLeft = 0U;
    iRght = maxIndex;
    while ((iRght - iLeft) > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

/*
 * Output and update for action system:
 *    '<S1>/Disabled'
 *    '<S1>/Test'
 */
void Code_Gen_Model_Disabled(real_T *rty_Gyro_Angle_Adjustment, real_T
  *rty_Steering_Abs_Cmd, real_T *rty_Steering_Rel_Cmd, real_T
  *rty_Translation_Angle, real_T *rty_Translation_Speed, boolean_T
  *rty_Is_Absolute_Translation, boolean_T *rty_Is_Absolute_Steering, boolean_T
  *rty_Spline_Enable, real_T rty_Spline_Ref_Poses[24], real_T
  *rty_Spline_Num_Poses)
{
  /* SignalConversion generated from: '<S4>/Spline_Ref_Poses' */
  memset(&rty_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

  /* SignalConversion generated from: '<S4>/Gyro_Angle_Adjustment' incorporates:
   *  Constant: '<S4>/Constant'
   */
  *rty_Gyro_Angle_Adjustment = 0.0;

  /* SignalConversion generated from: '<S4>/Steering_Abs_Cmd' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  *rty_Steering_Abs_Cmd = 0.0;

  /* SignalConversion generated from: '<S4>/Steering_Rel_Cmd' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  *rty_Steering_Rel_Cmd = 0.0;

  /* SignalConversion generated from: '<S4>/Translation_Angle' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  *rty_Translation_Angle = 0.0;

  /* SignalConversion generated from: '<S4>/Translation_Speed' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  *rty_Translation_Speed = 0.0;

  /* SignalConversion generated from: '<S4>/Is_Absolute_Translation' incorporates:
   *  Constant: '<S4>/Constant5'
   */
  *rty_Is_Absolute_Translation = true;

  /* SignalConversion generated from: '<S4>/Is_Absolute_Steering' incorporates:
   *  Constant: '<S4>/Constant6'
   */
  *rty_Is_Absolute_Steering = true;

  /* SignalConversion generated from: '<S4>/Spline_Enable' incorporates:
   *  Constant: '<S4>/Constant7'
   */
  *rty_Spline_Enable = false;

  /* SignalConversion generated from: '<S4>/Spline_Num_Poses' incorporates:
   *  Constant: '<S4>/Constant9'
   */
  *rty_Spline_Num_Poses = 6.0;
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (((rtIsNaN(u0)) || (rtIsNaN(u1))) || (rtIsInf(u0))) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > (DBL_EPSILON * q));
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt((a * a) + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt((b * b) + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else if ((rtIsInf(u0)) && (rtIsInf(u1))) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void Code_Gen_Model_step(void)
{
  /* local block i/o variables */
  real_T rtb_LookupTableDynamic1;
  real_T rtb_LookupTableDynamic;
  real_T rtb_LookupTableDynamic1_i;
  real_T rtb_LookupTableDynamic_j;
  real_T rtb_MatrixConcatenate_o[450];
  real_T rtb_Position_and_Curvature[450];
  real_T distance_from_robot[150];
  real_T rtb_Assignment_d[150];
  real_T rtb_MatrixConcatenate_h[100];
  real_T rtb_Spline_Ref_Poses[24];
  real_T rtb_Assignment[16];
  real_T rtb_Selector4[16];
  real_T rtb_Ref_Poses[12];
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T rtb_Add_c4;
  real_T rtb_Add_ie;
  real_T rtb_Add_ls;
  real_T rtb_Add_nh;
  real_T rtb_Add_pd;
  real_T rtb_Add_pw;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_Integral_kz;
  real_T rtb_Integral_m;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product_i3;
  real_T rtb_Product_i5;
  real_T rtb_Product_ku;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Subtract1_jk;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_i;
  real_T rtb_Sum2_fc;
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_h;
  real_T rtb_Switch2_ef;
  real_T rtb_Switch2_p;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  real_T tmp_0;
  real_T tmp_1;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s109_iter;
  uint16_T s134_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T exitg1;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S142>/Add1' incorporates:
   *  Constant: '<S142>/Constant3'
   *  Constant: '<S142>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S142>/Math Function'
   *  Sum: '<S11>/Add'
   *  Sum: '<S142>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S71>/Diff'
   *  UnitDelay: '<S71>/UD'
   *
   * Block description for '<S71>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S71>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S143>/Add1' incorporates:
   *  Constant: '<S143>/Constant3'
   *  Constant: '<S143>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S143>/Math Function'
   *  Sum: '<S11>/Add1'
   *  Sum: '<S143>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S72>/Diff'
   *  UnitDelay: '<S72>/UD'
   *
   * Block description for '<S72>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S72>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S144>/Add1' incorporates:
   *  Constant: '<S144>/Constant3'
   *  Constant: '<S144>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S144>/Math Function'
   *  Sum: '<S11>/Add2'
   *  Sum: '<S144>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S73>/Diff'
   *  UnitDelay: '<S73>/UD'
   *
   * Block description for '<S73>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S73>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S145>/Add1' incorporates:
   *  Constant: '<S145>/Constant3'
   *  Constant: '<S145>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S145>/Math Function'
   *  Sum: '<S11>/Add3'
   *  Sum: '<S145>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product3' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S74>/Diff'
   *  UnitDelay: '<S74>/UD'
   *
   * Block description for '<S74>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S74>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_p = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S9>/Product7' incorporates:
   *  Fcn: '<S75>/r->x'
   *  Fcn: '<S75>/theta->y'
   *  Fcn: '<S76>/r->x'
   *  Fcn: '<S76>/theta->y'
   *  Fcn: '<S77>/r->x'
   *  Fcn: '<S77>/theta->y'
   *  Fcn: '<S78>/r->x'
   *  Fcn: '<S78>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_thetay * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_thetay * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_Init_e * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_Init_e * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Switch2_p * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Switch2_p * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Add_ie = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Add_ie)) || (rtIsInf(rtb_Add_ie))) {
    rtb_Add_ie = 0.0;
  } else {
    rtb_Add_ie = fmod(rtb_Add_ie, 4.294967296E+9);
  }

  switch ((rtb_Add_ie < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Add_ie)))) :
          ((int32_T)((uint32_T)rtb_Add_ie))) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    Code_Gen_Model_Disabled(&rtb_UnitDelay1_gi,
      &Code_Gen_Model_B.Steering_Abs_Cmd, &Code_Gen_Model_B.Steering_Rel_Cmd,
      &Code_Gen_Model_B.Translation_Angle, &Code_Gen_Model_B.Translation_Speed,
      &rtb_Is_Absolute_Translation, &rtb_Is_Absolute_Steering,
      &Code_Gen_Model_B.Spline_Enable, rtb_Spline_Ref_Poses,
      &Code_Gen_Model_B.Spline_Num_Poses);

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
     *  Constant: '<S2>/Constant11'
     *  Constant: '<S2>/Constant12'
     *  Constant: '<S2>/Constant16'
     *  Constant: '<S2>/Constant4'
     *  Merge: '<S8>/Merge8'
     */
    switch ((int32_T)Spline_Ref_Poses_switch_num) {
     case 1:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant4_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S8>/Merge9' incorporates:
       *  Constant: '<S2>/Constant4'
       *  Constant: '<S2>/Constant9'
       *  Merge: '<S8>/Merge8'
       *  MultiPortSwitch: '<S2>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 3.0;
      break;

     case 2:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant11_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S8>/Merge9' incorporates:
       *  Constant: '<S2>/Constant11'
       *  Constant: '<S2>/Constant14'
       *  Merge: '<S8>/Merge8'
       *  MultiPortSwitch: '<S2>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 6.0;
      break;

     default:
      memcpy(&rtb_Spline_Ref_Poses[0], &Code_Gen_Model_ConstP.Constant12_Value[0],
             24U * (sizeof(real_T)));

      /* Merge: '<S8>/Merge9' incorporates:
       *  Constant: '<S2>/Constant12'
       *  Constant: '<S2>/Constant15'
       *  Merge: '<S8>/Merge8'
       *  MultiPortSwitch: '<S2>/Multiport Switch1'
       */
      Code_Gen_Model_B.Spline_Num_Poses = 4.0;
      break;
    }

    /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

    /* SignalConversion generated from: '<S2>/Gyro_Angle_Adjustment' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    rtb_UnitDelay1_gi = 0.0;

    /* Merge: '<S8>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S8>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S8>/Merge4' incorporates:
     *  Constant: '<S2>/Constant8'
     *  SignalConversion generated from: '<S2>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S2>/Constant5'
     */
    rtb_Is_Absolute_Translation = true;

    /* Logic: '<S2>/NOT' incorporates:
     *  Logic: '<S2>/NOT1'
     *  UnitDelay: '<S6>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = !Code_Gen_Model_DW.UnitDelay_DSTATE_ll;

    /* Merge: '<S8>/Merge7' incorporates:
     *  Logic: '<S2>/NOT'
     */
    Code_Gen_Model_B.Spline_Enable = rtb_Is_Absolute_Steering;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* SignalConversion generated from: '<S13>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S8>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 24U * (sizeof(real_T)));

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S291>/Constant'
     *  Constant: '<S291>/Constant1'
     *  Constant: '<S291>/Constant2'
     *  Inport: '<Root>/Steer_Joystick_X'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Math: '<S291>/Hypot'
     *  RelationalOperator: '<S291>/GreaterThan'
     *  Switch: '<S291>/Switch'
     */
    if (rt_hypotd_snf(Code_Gen_Model_U.Steer_Joystick_X,
                      Code_Gen_Model_U.Steer_Joystick_Y) >
        Steering_Abs_Deadband_Range) {
      rtb_UnitDelay1_gi = Code_Gen_Model_U.Steer_Joystick_Y;
      rtb_thetay = Code_Gen_Model_U.Steer_Joystick_X;
    } else {
      rtb_UnitDelay1_gi = 0.0;
      rtb_thetay = 0.0;
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S299>/Constant'
     *  Constant: '<S300>/Constant'
     *  Logic: '<S293>/AND'
     *  RelationalOperator: '<S299>/Compare'
     *  RelationalOperator: '<S300>/Compare'
     *  Switch: '<S293>/Switch2'
     *  UnitDelay: '<S293>/Unit Delay'
     *  UnitDelay: '<S293>/Unit Delay1'
     */
    if ((rtb_thetay == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_thetay;
    }

    /* End of Switch: '<S293>/Switch1' */

    /* Merge: '<S8>/Merge1' incorporates:
     *  Trigonometry: '<S289>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S296>/Compare' incorporates:
     *  Constant: '<S296>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S292>/Constant'
     *  Constant: '<S292>/Constant1'
     *  Constant: '<S294>/Constant'
     *  Constant: '<S295>/Constant'
     *  Logic: '<S292>/Logical Operator'
     *  RelationalOperator: '<S294>/Compare'
     *  RelationalOperator: '<S295>/Compare'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_h >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = 6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S292>/Constant2'
     *  Constant: '<S292>/Constant3'
     *  Constant: '<S297>/Constant'
     *  Constant: '<S298>/Constant'
     *  Logic: '<S292>/Logical Operator1'
     *  RelationalOperator: '<S297>/Compare'
     *  RelationalOperator: '<S298>/Compare'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_h < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Product_i5 = -6.2831853071795862;
    } else {
      rtb_Product_i5 = 0.0;
    }

    /* Sum: '<S292>/Sum1' incorporates:
     *  Switch: '<S292>/Switch'
     *  Switch: '<S292>/Switch1'
     *  UnitDelay: '<S292>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Add_ie + rtb_Product_i5) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S307>/Constant'
     *  Constant: '<S308>/Constant'
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Logic: '<S302>/AND'
     *  RelationalOperator: '<S307>/Compare'
     *  RelationalOperator: '<S308>/Compare'
     *  Switch: '<S302>/Switch2'
     *  UnitDelay: '<S302>/Unit Delay'
     *  UnitDelay: '<S302>/Unit Delay1'
     */
    if ((Code_Gen_Model_U.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_U.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_ef = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_h = Code_Gen_Model_U.Drive_Joystick_Y;
      rtb_Switch2_ef = Code_Gen_Model_U.Drive_Joystick_X;
    }

    /* End of Switch: '<S302>/Switch1' */

    /* Merge: '<S8>/Merge3' incorporates:
     *  Trigonometry: '<S290>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_h,
      rtb_Switch2_ef);

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S13>/Constant3'
     *  SignalConversion generated from: '<S13>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S289>/Constant'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Lookup_n-D: '<S289>/Modulation_Str_Y_Rel'
     *  Product: '<S289>/Product'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = look1_binlcpw
      (Code_Gen_Model_U.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain;

    /* Merge: '<S8>/Merge9' incorporates:
     *  Constant: '<S13>/Constant9'
     *  SignalConversion generated from: '<S13>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 6.0;

    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S301>/Constant'
     *  Constant: '<S301>/Constant1'
     *  Inport: '<Root>/Is_Boost_Trigger_Pulled'
     */
    if (Code_Gen_Model_U.Is_Boost_Trigger_Pulled != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S301>/Switch1' */

    /* Switch: '<S306>/Init' incorporates:
     *  UnitDelay: '<S306>/FixPt Unit Delay1'
     *  UnitDelay: '<S306>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay = rtb_Product_ku;
    } else {
      rtb_thetay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S306>/Init' */

    /* Sum: '<S304>/Sum1' */
    rtb_Product_ku -= rtb_thetay;

    /* Switch: '<S305>/Switch2' incorporates:
     *  Constant: '<S303>/Constant1'
     *  Constant: '<S303>/Constant3'
     *  RelationalOperator: '<S305>/LowerRelop1'
     *  RelationalOperator: '<S305>/UpperRelop'
     *  Switch: '<S305>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S305>/Switch' incorporates:
       *  Constant: '<S303>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S305>/Switch2' */

    /* Sum: '<S304>/Sum' */
    rtb_thetay += rtb_Product_ku;

    /* Product: '<S301>/Product' incorporates:
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Lookup_n-D: '<S290>/Modulation_Drv'
     *  Math: '<S290>/Magnitude'
     */
    rtb_Add_ls = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_U.Drive_Joystick_X,
      Code_Gen_Model_U.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_thetay;

    /* Saturate: '<S301>/Saturation' */
    if (rtb_Add_ls > Boost_Trigger_High_Speed) {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (rtb_Add_ls < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Add_ls;
    }

    /* End of Saturate: '<S301>/Saturation' */

    /* SignalConversion generated from: '<S13>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S13>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Update for UnitDelay: '<S293>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch1_as;

    /* Update for UnitDelay: '<S292>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S302>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_h;

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_ef;

    /* Update for UnitDelay: '<S306>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S306>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S306>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_thetay;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    Code_Gen_Model_Disabled(&rtb_UnitDelay1_gi,
      &Code_Gen_Model_B.Steering_Abs_Cmd, &Code_Gen_Model_B.Steering_Rel_Cmd,
      &Code_Gen_Model_B.Translation_Angle, &Code_Gen_Model_B.Translation_Speed,
      &rtb_Is_Absolute_Translation, &rtb_Is_Absolute_Steering,
      &Code_Gen_Model_B.Spline_Enable, rtb_Spline_Ref_Poses,
      &Code_Gen_Model_B.Spline_Num_Poses);

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S16>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
   *  Sum: '<S7>/Add'
   *  Sum: '<S7>/Add1'
   */
  rtb_Reshapey[0] = (((((Code_Gen_Model_U.Photon_Est_Pose_X +
    Code_Gen_Model_DW.TappedDelay_X[0]) + Code_Gen_Model_DW.TappedDelay_X[1]) +
                       Code_Gen_Model_DW.TappedDelay_X[2]) +
                      Code_Gen_Model_DW.TappedDelay_X[3]) +
                     Code_Gen_Model_DW.TappedDelay_X[4]) +
    Code_Gen_Model_DW.TappedDelay_X[5];
  rtb_Reshapey[1] = (((((Code_Gen_Model_U.Photon_Est_Pose_Y +
    Code_Gen_Model_DW.TappedDelay1_X[0]) + Code_Gen_Model_DW.TappedDelay1_X[1])
                       + Code_Gen_Model_DW.TappedDelay1_X[2]) +
                      Code_Gen_Model_DW.TappedDelay1_X[3]) +
                     Code_Gen_Model_DW.TappedDelay1_X[4]) +
    Code_Gen_Model_DW.TappedDelay1_X[5];

  /* Delay: '<S16>/MemoryX' incorporates:
   *  Constant: '<S16>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S3>/Gain1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  rtb_thetay = 0.017453292519943295 * Code_Gen_Model_U.Gyro_Angle;

  /* Trigonometry: '<S9>/Trigonometric Function' */
  rtb_Init_e = cos(rtb_thetay);

  /* Trigonometry: '<S9>/Trigonometric Function1' */
  rtb_Switch2_p = sin(rtb_thetay);

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Init_e;
  rtb_Switch1_as = rtb_Switch2_p;

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus'
   */
  rtb_Switch1_h = -rtb_Switch2_p;
  rtb_Switch2_ef = rtb_Init_e;

  /* Sum: '<S70>/Diff' incorporates:
   *  UnitDelay: '<S70>/UD'
   *
   * Block description for '<S70>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S70>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = rtb_thetay - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S9>/Subtract2' incorporates:
   *  Constant: '<S9>/Constant3'
   *  Gain: '<S9>/Gain7'
   *  Math: '<S9>/Square'
   */
  rtb_Switch2_p = 1.0 - ((rtb_Init_e * rtb_Init_e) * 0.16666666666666666);

  /* Gain: '<S9>/Gain6' */
  rtb_Init_e *= 0.5;

  /* Product: '<S9>/Product7' incorporates:
   *  Constant: '<S9>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Add_ie = 0.0;
    rtb_Num_Segments = 0;
    for (s109_iter = 0; s109_iter < 8; s109_iter++) {
      rtb_Add_ie += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i]
        * rtb_TmpSignalConversionAtProduc[s109_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Add_ie;
  }

  /* End of Product: '<S9>/Product7' */

  /* Product: '<S9>/Product6' incorporates:
   *  SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S9>/Unary Minus2'
   */
  rtb_Product_ku = (rtb_Switch2_p * tmp[0]) + ((-rtb_Init_e) * tmp[1]);
  rtb_Init_e = (rtb_Init_e * tmp[0]) + (rtb_Switch2_p * tmp[1]);

  /* Product: '<S9>/Product6' incorporates:
   *  Concatenate: '<S9>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Product_ku) + (rtb_Switch1_h * rtb_Init_e);
  Code_Gen_Model_B.Product6[1] = (rtb_Switch1_as * rtb_Product_ku) +
    (rtb_Switch2_ef * rtb_Init_e);

  /* Outputs for Enabled SubSystem: '<S43>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S69>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S36>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S67>/Enable'
   */
  /* Logic: '<S7>/AND' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S7>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <= KF_Vision_Ambiguity_Thresh)
      && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S67>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S16>/C'
     *  Delay: '<S16>/MemoryX'
     *  Product: '<S69>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S67>/Sum' incorporates:
     *  Constant: '<S16>/D'
     *  Product: '<S67>/C[k]*xhat[k|k-1]'
     *  Product: '<S67>/D[k]*u[k]'
     *  Sum: '<S67>/Add1'
     */
    rtb_Switch2_p = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_p + rtb_Switch1_as);

    /* Product: '<S67>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S16>/C'
     *  Delay: '<S16>/MemoryX'
     *  Product: '<S69>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S67>/Sum' incorporates:
     *  Constant: '<S16>/D'
     *  Product: '<S67>/C[k]*xhat[k|k-1]'
     *  Product: '<S67>/D[k]*u[k]'
     *  Sum: '<S67>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch2_p + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S67>/Product3' incorporates:
     *  Constant: '<S17>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S69>/Add1' incorporates:
     *  Product: '<S69>/Product'
     */
    rtb_Switch2_p = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S67>/Product3' incorporates:
     *  Constant: '<S17>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S69>/Add1' incorporates:
     *  Product: '<S69>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S69>/Product2' incorporates:
     *  Constant: '<S17>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_p) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_p) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S67>/Product3' incorporates:
       *  Outport: '<S67>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S69>/Product2' incorporates:
       *  Outport: '<S69>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S7>/AND' */
  /* End of Outputs for SubSystem: '<S36>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S43>/Enabled Subsystem' */

  /* Sum: '<S43>/Add' incorporates:
   *  Delay: '<S16>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S9>/Accumulator2' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S9>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S9>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S7>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S7>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S7>/Switch' */

  /* DiscreteIntegrator: '<S9>/Accumulator' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S9>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S9>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S7>/Switch1' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S7>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S7>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* If: '<S10>/If' incorporates:
   *  Constant: '<S134>/Constant'
   *  Logic: '<S134>/AND'
   *  MATLAB Function: '<S84>/Find closest index to curve'
   *  Product: '<S134>/Product'
   *  RelationalOperator: '<S134>/Relational Operator'
   *  RelationalOperator: '<S134>/Relational Operator1'
   *  Selector: '<S134>/Selector'
   *  Selector: '<S134>/Selector1'
   *  Selector: '<S135>/Selector'
   *  Sum: '<S134>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S87>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S90>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S92>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S87>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S10>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S82>/Action Port'
       */
      /* InitializeConditions for If: '<S10>/If' incorporates:
       *  UnitDelay: '<S135>/Unit Delay'
       *  UnitDelay: '<S135>/Unit Delay1'
       *  UnitDelay: '<S82>/Unit Delay'
       *  UnitDelay: '<S83>/Unit Delay'
       *  UnitDelay: '<S85>/Unit Delay'
       *  UnitDelay: '<S85>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S10>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S10>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    /* Selector: '<S83>/Selector1' incorporates:
     *  Merge: '<S8>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S83>/Selector1' */

    /* Lookup_n-D: '<S82>/Capture Radius' incorporates:
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled7,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S83>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S83>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S87>/If' incorporates:
     *  RelationalOperator: '<S87>/ '
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S90>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S92>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S87>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S90>/Action Port'
       */
      /* InitializeConditions for If: '<S87>/If' incorporates:
       *  UnitDelay: '<S90>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S87>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S87>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S90>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S90>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S93>/Action Port'
       */
      /* If: '<S90>/If' incorporates:
       *  Selector: '<S83>/Selector1'
       *  Selector: '<S90>/Selector'
       *  Selector: '<S93>/Selector'
       */
      rtb_Optimized_Module_Angle = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S90>/Increment_If_Rectangle_Check' */

      /* Sum: '<S90>/Minus' incorporates:
       *  Concatenate: '<S83>/Matrix Concatenate2'
       *  Selector: '<S90>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Optimized_Module_Angle;

      /* Outputs for IfAction SubSystem: '<S90>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S93>/Action Port'
       */
      /* If: '<S90>/If' incorporates:
       *  Selector: '<S83>/Selector1'
       *  Selector: '<S90>/Selector'
       *  Selector: '<S93>/Selector'
       *  Sum: '<S90>/Minus'
       */
      rtb_Switch1_h = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S90>/Increment_If_Rectangle_Check' */

      /* Sum: '<S90>/Minus' incorporates:
       *  Concatenate: '<S83>/Matrix Concatenate2'
       *  Selector: '<S90>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_h;

      /* Math: '<S90>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S90>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S90>/Switch' incorporates:
       *  Logic: '<S90>/AND'
       *  Logic: '<S90>/OR'
       *  RelationalOperator: '<S90>/Relational Operator'
       *  UnitDelay: '<S90>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S90>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S92>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S90>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* If: '<S92>/If' incorporates:
         *  RelationalOperator: '<S92>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S92>/Is_Last_Point' incorporates:
           *  ActionPort: '<S95>/Action Port'
           */
          /* InitializeConditions for If: '<S92>/If' incorporates:
           *  UnitDelay: '<S95>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S92>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S92>/Is_Last_Point' incorporates:
           *  ActionPort: '<S95>/Action Port'
           */
          /* Switch: '<S95>/Switch' incorporates:
           *  Constant: '<S97>/Constant'
           *  Logic: '<S95>/OR'
           *  RelationalOperator: '<S97>/Compare'
           *  UnitDelay: '<S95>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S95>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S95>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S98>/Action Port'
             */
            /* Merge: '<S87>/Merge2' incorporates:
             *  Constant: '<S98>/Constant'
             *  SignalConversion generated from: '<S98>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S98>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S98>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S95>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S95>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S99>/Action Port'
             */
            /* Merge: '<S87>/Merge2' incorporates:
             *  Constant: '<S99>/Constant'
             *  SignalConversion generated from: '<S99>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S99>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S99>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S95>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S95>/If' */

          /* Merge: '<S87>/Merge4' incorporates:
           *  SignalConversion: '<S95>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S95>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S92>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S92>/Increment_Search' incorporates:
           *  ActionPort: '<S94>/Action Port'
           */
          /* Merge: '<S87>/Merge2' incorporates:
           *  Constant: '<S94>/Constant'
           *  SignalConversion generated from: '<S94>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S94>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S94>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S87>/Merge4' incorporates:
           *  Constant: '<S96>/FixPt Constant'
           *  SignalConversion: '<S94>/Signal Copy'
           *  Sum: '<S96>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S92>/Increment_Search' */
        }

        /* End of If: '<S92>/If' */
        /* End of Outputs for SubSystem: '<S90>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S90>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        /* Sum: '<S100>/FixPt Sum1' incorporates:
         *  Constant: '<S100>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S93>/Selector1' incorporates:
         *  Selector: '<S83>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S101>/Subtract' incorporates:
         *  Selector: '<S93>/Selector1'
         *  Sum: '<S101>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Optimized_Module_Angle;

        /* Selector: '<S93>/Selector1' incorporates:
         *  Selector: '<S83>/Selector1'
         */
        rtb_Switch2_ef = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S101>/Subtract' incorporates:
         *  Selector: '<S93>/Selector1'
         *  Sum: '<S101>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_ef - rtb_Switch1_h;

        /* Math: '<S101>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S101>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S101>/Unary Minus' */
        rtb_Switch2_p = rtb_Minus_n[0];

        /* Product: '<S101>/Product' incorporates:
         *  Product: '<S101>/Divide'
         *  UnaryMinus: '<S101>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_p) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S101>/Add1' incorporates:
         *  Sum: '<S101>/Add2'
         *  Sum: '<S101>/Minus'
         */
        rtb_Switch2_p = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S101>/Minus4' incorporates:
         *  Sum: '<S101>/Add2'
         *  Sum: '<S101>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_p;

        /* Sum: '<S101>/Minus5' incorporates:
         *  Concatenate: '<S83>/Matrix Concatenate2'
         *  Sum: '<S101>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Switch2_p;

        /* Sum: '<S101>/Add' incorporates:
         *  Sum: '<S101>/Add2'
         *  Sum: '<S101>/Minus1'
         */
        rtb_Switch1_as = rtb_Optimized_Module_Angle - rtb_Minus_n[0];

        /* Sum: '<S101>/Minus' incorporates:
         *  Sum: '<S101>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_as;

        /* DotProduct: '<S101>/Dot Product' incorporates:
         *  Concatenate: '<S83>/Matrix Concatenate2'
         *  Sum: '<S101>/Minus'
         *  Sum: '<S101>/Minus1'
         *  Sum: '<S101>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_p;

        /* DotProduct: '<S101>/Dot Product1' incorporates:
         *  Sum: '<S101>/Minus'
         */
        rtb_Optimized_Module_Angle = rtb_Switch2_p * rtb_Switch2_p;

        /* DotProduct: '<S101>/Dot Product2' incorporates:
         *  Sum: '<S101>/Minus4'
         *  Sum: '<S101>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S101>/Dot Product3' incorporates:
         *  Sum: '<S101>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S101>/Add1' incorporates:
         *  Sum: '<S101>/Add2'
         *  Sum: '<S101>/Minus'
         */
        rtb_Switch2_p = rtb_Switch2_ef - rtb_Minus_n[1];

        /* Sum: '<S101>/Minus4' incorporates:
         *  Sum: '<S101>/Add2'
         *  Sum: '<S101>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_ef + rtb_Minus_n[1]) - rtb_Switch2_p;

        /* Sum: '<S101>/Minus5' incorporates:
         *  Concatenate: '<S83>/Matrix Concatenate2'
         *  Sum: '<S101>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Switch2_p;

        /* Sum: '<S101>/Add' incorporates:
         *  Sum: '<S101>/Add2'
         *  Sum: '<S101>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_h - rtb_Minus_n[1];

        /* Sum: '<S101>/Minus' incorporates:
         *  Sum: '<S101>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_as;

        /* DotProduct: '<S101>/Dot Product' incorporates:
         *  Concatenate: '<S83>/Matrix Concatenate2'
         *  Sum: '<S101>/Minus'
         *  Sum: '<S101>/Minus1'
         *  Sum: '<S101>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_p;

        /* RelationalOperator: '<S102>/Compare' incorporates:
         *  Constant: '<S102>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S101>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S101>/Dot Product1'
         *  Sum: '<S101>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_p * rtb_Switch2_p) +
          rtb_Optimized_Module_Angle));

        /* DotProduct: '<S101>/Dot Product2' incorporates:
         *  Sum: '<S101>/Minus4'
         *  Sum: '<S101>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Rotationmatrixfromlocalto_0) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S87>/Merge4' incorporates:
         *  Constant: '<S103>/Constant'
         *  DataTypeConversion: '<S93>/Data Type Conversion'
         *  DotProduct: '<S101>/Dot Product3'
         *  Logic: '<S101>/AND'
         *  RelationalOperator: '<S101>/LessThanOrEqual1'
         *  RelationalOperator: '<S103>/Compare'
         *  Sum: '<S101>/Minus4'
         *  Sum: '<S93>/Add'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S87>/Merge2' incorporates:
         *  Constant: '<S93>/Constant2'
         *  SignalConversion generated from: '<S93>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S93>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S93>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S90>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S90>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* Merge: '<S87>/Merge2' incorporates:
         *  Constant: '<S91>/Constant2'
         *  SignalConversion generated from: '<S91>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S91>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S91>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S87>/Merge4' incorporates:
         *  SignalConversion generated from: '<S91>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S90>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S87>/Merge1' incorporates:
       *  Constant: '<S90>/Constant'
       *  SignalConversion generated from: '<S90>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S90>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S87>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S87>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S89>/Action Port'
       */
      /* Merge: '<S87>/Merge1' incorporates:
       *  Constant: '<S89>/Constant'
       *  SignalConversion generated from: '<S89>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S87>/Merge2' incorporates:
       *  Constant: '<S89>/Constant1'
       *  SignalConversion generated from: '<S89>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S89>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S89>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S87>/Merge4' incorporates:
       *  SignalConversion generated from: '<S89>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S87>/Escape_Auto_Driving' */
    }

    /* End of If: '<S87>/If' */

    /* If: '<S83>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S83>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S88>/Action Port'
       */
      /* Bias: '<S104>/Add Constant' incorporates:
       *  Bias: '<S104>/Bias'
       *  Sum: '<S104>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S104>/Selector4' incorporates:
       *  Bias: '<S104>/Bias1'
       *  Constant: '<S106>/FixPt Constant'
       *  Sum: '<S106>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S104>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S104>/Matrix Concatenate' incorporates:
       *  Bias: '<S104>/Add Constant1'
       *  Gain: '<S107>/Gain'
       *  Gain: '<S108>/Gain'
       *  Selector: '<S104>/Selector'
       *  Selector: '<S104>/Selector1'
       *  Selector: '<S104>/Selector2'
       *  Selector: '<S104>/Selector3'
       *  Selector: '<S83>/Selector1'
       *  Sum: '<S107>/Subtract'
       *  Sum: '<S108>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (i = 0; i < 6; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 9] = rtb_Ref_Poses[i + 6];
      }

      for (i = 0; i < 2; i++) {
        /* Selector: '<S104>/Selector4' incorporates:
         *  Selector: '<S104>/Selector'
         */
        rtb_Num_Segments = (i << 3);
        rtb_Assignment[rtb_Num_Segments + 7] = (rtb_Ref_Poses[((6 * i) +
          ((int32_T)Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) -
          rtb_Ref_Poses[(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) +
                         (6 * i)) - 1];

        /* Selector: '<S104>/Selector4' incorporates:
         *  Bias: '<S104>/Add Constant1'
         *  Gain: '<S107>/Gain'
         *  Selector: '<S104>/Selector'
         *  Selector: '<S104>/Selector1'
         *  Sum: '<S107>/Subtract'
         */
        for (s109_iter = 0; s109_iter <= rtb_Bias1_p; s109_iter++) {
          rtb_Selector4[s109_iter + (Code_Gen_Model_DW.Selector4_DIMS1[0] * i)] =
            rtb_Assignment[((s109_iter + rtb_Reshapey_0) + rtb_Num_Segments) - 1];
        }
      }

      /* End of Concatenate: '<S104>/Matrix Concatenate' */

      /* Assignment: '<S104>/Assignment' incorporates:
       *  Selector: '<S104>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s109_iter = 0; s109_iter < rtb_Bias1_p; s109_iter++) {
          rtb_Assignment[s109_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s109_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S104>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S105>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S109>/While Iterator'
       */
      s109_iter = 1;
      do {
        rtb_Switch2_p = rtb_Assignment[s109_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_p - rtb_Assignment[s109_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s109_iter] - rtb_Assignment[s109_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_p - rtb_Assignment[s109_iter];
        rtb_Switch2_p = rtb_Assignment[s109_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_p - rtb_Assignment[s109_iter + 7];
        rtb_Optimized_Module_Angle = rtb_Assignment[s109_iter + 8];
        rtb_Minus_n[1] = rtb_Optimized_Module_Angle - rtb_Assignment[s109_iter +
          10];
        rtb_Add2_f[1] = rtb_Switch2_p - rtb_Optimized_Module_Angle;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_h = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_ef = (rtb_Init_e - (2.0 * rtb_Switch1_h)) +
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Product_ku = rtb_Switch1_h - rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Switch1_h) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_ef)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s109_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_ef)
            + (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Optimized_Module_Angle;
          rtb_Switch2_ef = ((3.0 * rtb_Switch1_h) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_h);
          rtb_Switch1_h = (rtb_Init_e - rtb_Switch1_h) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Switch2_ef)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch1_h);
          rtb_Switch2_p = (((rtb_Reshapey[1] * rtb_Switch2_ef) + (rtb_Minus_n[1]
            * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_h);
          rtb_Switch1_h = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch2_ef = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch1_h) + (rtb_Minus_n[1] * rtb_Switch2_ef)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch1_h) + (rtb_Minus_n[0] *
            rtb_Switch2_ef)) * 0.5) + (rtb_Add2_f[0] * rtb_Init_e)) *
             rtb_Switch2_p)) / rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_p), 3.0);
        }

        if (s109_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s109_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s109_iter);
        rtb_Num_Segments = s109_iter;
        s109_iter++;
      } while ((rtb_Init_e >= 4.0) && (s109_iter <= 3));

      /* End of Outputs for SubSystem: '<S105>/Sampling_Loop' */

      /* SignalConversion generated from: '<S88>/Position_and_Curvature' incorporates:
       *  Assignment: '<S109>/Assignment'
       *  Merge: '<S83>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S83>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem' incorporates:
       *  ActionPort: '<S86>/Action Port'
       */
      /* Product: '<S86>/Product' incorporates:
       *  Selector: '<S83>/Selector'
       *  Selector: '<S83>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S86>/Product1' incorporates:
       *  Selector: '<S83>/Selector'
       *  Selector: '<S83>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S86>/Product' incorporates:
         *  Constant: '<S86>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S86>/Product1' incorporates:
         *  Constant: '<S86>/Constant2'
         *  Product: '<S86>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S86>/Assignment' incorporates:
       *  Concatenate: '<S86>/Matrix Concatenate'
       *  Merge: '<S83>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S86>/Assignment' */

      /* SignalConversion generated from: '<S86>/Num_Segments' incorporates:
       *  Constant: '<S86>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S83>/If Action Subsystem' */
    }

    /* End of If: '<S83>/If1' */

    /* Concatenate: '<S84>/Matrix Concatenate' incorporates:
     *  Merge: '<S83>/Merge'
     *  Selector: '<S84>/Selector'
     *  Selector: '<S84>/Selector1'
     *  Selector: '<S84>/Selector3'
     */
    for (i = 0; i < 50; i++) {
      rtb_MatrixConcatenate_o[i] = rtb_Position_and_Curvature[i];
      rtb_MatrixConcatenate_o[i + 50] = rtb_Position_and_Curvature[i + 150];
      rtb_MatrixConcatenate_o[i + 100] = rtb_Position_and_Curvature[i + 300];
      rtb_MatrixConcatenate_o[i + 150] = rtb_Position_and_Curvature[i + 50];
      rtb_MatrixConcatenate_o[i + 200] = rtb_Position_and_Curvature[i + 200];
      rtb_MatrixConcatenate_o[i + 250] = rtb_Position_and_Curvature[i + 350];
      rtb_MatrixConcatenate_o[i + 300] = rtb_Position_and_Curvature[i + 100];
      rtb_MatrixConcatenate_o[i + 350] = rtb_Position_and_Curvature[i + 250];
      rtb_MatrixConcatenate_o[i + 400] = rtb_Position_and_Curvature[i + 400];
    }

    /* End of Concatenate: '<S84>/Matrix Concatenate' */

    /* MATLAB Function: '<S84>/Distance Along Curve' incorporates:
     *  Concatenate: '<S84>/Matrix Concatenate'
     *  Selector: '<S84>/Selector4'
     *  Selector: '<S84>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s109_iter = 0; s109_iter < 149; s109_iter++) {
      /* Outputs for Iterator SubSystem: '<S105>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S109>/While Iterator'
       */
      rtb_Assignment_d[s109_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s109_iter + 1] -
         rtb_MatrixConcatenate_o[s109_iter], rtb_MatrixConcatenate_o[s109_iter +
         151] - rtb_MatrixConcatenate_o[s109_iter + 150]) +
        rtb_Assignment_d[s109_iter];

      /* End of Outputs for SubSystem: '<S105>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S84>/Distance Along Curve' */

    /* MATLAB Function: '<S84>/Find closest index to curve' incorporates:
     *  Concatenate: '<S84>/Matrix Concatenate'
     *  Selector: '<S135>/Selector'
     *  Selector: '<S84>/Selector4'
     *  Selector: '<S84>/Selector5'
     */
    for (s109_iter = 0; s109_iter < 150; s109_iter++) {
      /* Outputs for Iterator SubSystem: '<S105>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S109>/While Iterator'
       */
      distance_from_robot[s109_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s109_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s109_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S105>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s109_iter = 1;
    } else {
      s109_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s109_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s109_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s109_iter - 1];
      for (rtb_Bias1_p = s109_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s109_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s109_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S135>/Selector' incorporates:
     *  Constant: '<S135>/Constant'
     *  MATLAB Function: '<S84>/Find closest index to curve'
     *  MinMax: '<S135>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s109_iter)) - 1];

    /* If: '<S135>/If' incorporates:
     *  RelationalOperator: '<S135>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S135>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S138>/Action Port'
       */
      /* SignalConversion generated from: '<S138>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S140>/FixPt Sum1' incorporates:
       *  Constant: '<S140>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S138>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S138>/Selector11'
       *  Selector: '<S138>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S138>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S138>/Selector1'
       *  Selector: '<S138>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S138>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S138>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S138>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S138>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S138>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S135>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S135>/Latch' incorporates:
       *  ActionPort: '<S139>/Action Port'
       */
      /* SignalConversion generated from: '<S139>/In1' incorporates:
       *  UnitDelay: '<S135>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S139>/In2' incorporates:
       *  UnitDelay: '<S135>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S135>/Latch' */
    }

    /* End of If: '<S135>/If' */

    /* MinMax: '<S82>/Min' incorporates:
     *  Lookup_n-D: '<S82>/Lookahead Distance'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S84>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S134>/While Iterator'
     */
    s134_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s134_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S84>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S134>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s134_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s109_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s134_iter++;
    }

    /* End of Outputs for SubSystem: '<S84>/Find first index that meets distance target' */

    /* Switch: '<S137>/Switch' incorporates:
     *  Concatenate: '<S84>/Matrix Concatenate'
     *  Constant: '<S134>/Constant'
     *  Constant: '<S137>/Constant1'
     *  Constant: '<S137>/Constant2'
     *  Constant: '<S137>/Constant3'
     *  Constant: '<S84>/Constant'
     *  Logic: '<S134>/AND'
     *  MATLAB Function: '<S84>/Find closest index to curve'
     *  Math: '<S137>/Hypot'
     *  Merge: '<S8>/Merge8'
     *  MinMax: '<S137>/Min'
     *  MinMax: '<S137>/Min1'
     *  Product: '<S134>/Product'
     *  Product: '<S137>/Divide'
     *  Product: '<S137>/Product'
     *  Product: '<S137>/Product1'
     *  RelationalOperator: '<S134>/Relational Operator'
     *  RelationalOperator: '<S134>/Relational Operator1'
     *  RelationalOperator: '<S84>/Relational Operator'
     *  Selector: '<S134>/Selector'
     *  Selector: '<S134>/Selector1'
     *  Selector: '<S135>/Selector'
     *  Selector: '<S84>/Selector10'
     *  Selector: '<S84>/Selector7'
     *  Selector: '<S84>/Selector8'
     *  Selector: '<S84>/Selector9'
     *  Sqrt: '<S137>/Sqrt'
     *  Sum: '<S134>/Add'
     *  Sum: '<S137>/Subtract'
     *  Sum: '<S137>/Subtract1'
     *  Sum: '<S84>/Subtract'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_UnitDelay1_gi = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch1_as *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_UnitDelay1_gi = fmin(rtb_Switch1_as * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S137>/Switch' */

    /* Logic: '<S85>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S85>/Switch1' incorporates:
     *  Switch: '<S85>/Switch'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S10>/Merge2' incorporates:
       *  Constant: '<S85>/Constant3'
       *  SignalConversion: '<S85>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S10>/Merge2' incorporates:
       *  SignalConversion: '<S85>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S85>/Switch1' */

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion: '<S85>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S84>/Selector6' incorporates:
     *  Concatenate: '<S84>/Matrix Concatenate'
     *  Selector: '<S84>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S84>/Selector2' incorporates:
     *  Concatenate: '<S84>/Matrix Concatenate'
     *  Selector: '<S84>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S85>/Switch2' incorporates:
     *  Sum: '<S141>/Subtract'
     *  Sum: '<S141>/Subtract1'
     *  Trigonometry: '<S141>/Atan2'
     *  UnitDelay: '<S85>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_h = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S85>/Switch2' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion: '<S85>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_h;

    /* Merge: '<S10>/Merge7' incorporates:
     *  SignalConversion: '<S82>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S85>/Constant2'
     *  SignalConversion generated from: '<S82>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S85>/Constant5'
     *  SignalConversion generated from: '<S82>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S10>/Merge5' incorporates:
     *  Constant: '<S85>/Constant6'
     *  SignalConversion generated from: '<S82>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S10>/Merge6' incorporates:
     *  Constant: '<S85>/Constant1'
     *  SignalConversion generated from: '<S82>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S135>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S135>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S85>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S85>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_h;

    /* End of Outputs for SubSystem: '<S10>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S10>/Pass Through' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S81>/Constant'
     *  SignalConversion generated from: '<S81>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion generated from: '<S81>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S10>/Merge1' incorporates:
     *  SignalConversion generated from: '<S81>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S10>/Merge2' incorporates:
     *  SignalConversion generated from: '<S81>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion generated from: '<S81>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S10>/Merge4' incorporates:
     *  SignalConversion generated from: '<S81>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S10>/Merge5' incorporates:
     *  SignalConversion generated from: '<S81>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge6' incorporates:
     *  SignalConversion generated from: '<S81>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S10>/Pass Through' */
  }

  /* End of If: '<S10>/If' */

  /* UnitDelay: '<S235>/Unit Delay' */
  rtb_Init_e = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S235>/Sign2' */
  if (rtIsNaN(rtb_Init_e)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Init_e < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Init_e > 0.0);
  }

  /* Signum: '<S235>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S235>/Product1' incorporates:
   *  Signum: '<S235>/Sign1'
   *  Signum: '<S235>/Sign2'
   */
  rtb_Add_ie *= rtb_Product_i5;
  if (rtIsNaN(rtb_Add_ie)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_ie, 256.0);
  }

  /* Switch: '<S235>/Switch' incorporates:
   *  Constant: '<S235>/Constant'
   *  Constant: '<S240>/Constant'
   *  Constant: '<S241>/Constant'
   *  Logic: '<S235>/or'
   *  Product: '<S235>/Product1'
   *  RelationalOperator: '<S240>/Compare'
   *  RelationalOperator: '<S241>/Compare'
   */
  if ((rtb_Init_e == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_p = 0.0;
  }

  /* End of Switch: '<S235>/Switch' */

  /* Switch: '<S246>/Init' incorporates:
   *  UnitDelay: '<S246>/FixPt Unit Delay1'
   *  UnitDelay: '<S246>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Optimized_Module_Angle = rtb_Switch2_p;
  } else {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S246>/Init' */

  /* RelationalOperator: '<S242>/Compare' incorporates:
   *  Constant: '<S242>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_p == 0.0);

  /* RelationalOperator: '<S243>/Compare' incorporates:
   *  Constant: '<S243>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_p > 0.0);

  /* Abs: '<S235>/Abs' incorporates:
   *  Sum: '<S235>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Init_e - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S235>/Switch5' incorporates:
   *  Constant: '<S235>/Constant1'
   *  Switch: '<S235>/Switch1'
   *  UnaryMinus: '<S235>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S235>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S235>/Constant4'
     *  Constant: '<S235>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S235>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S235>/Constant2'
     *  Constant: '<S235>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S235>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S235>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic_j;
    rtb_Add_ie = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S235>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S235>/Constant10'
     *  Constant: '<S235>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S235>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S235>/Constant7'
     *  Constant: '<S235>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S235>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S235>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S235>/Switch3' incorporates:
     *  Constant: '<S235>/Constant1'
     *  Constant: '<S235>/Constant3'
     *  UnaryMinus: '<S235>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_ie = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Add_ie = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S235>/Switch3' */
  }

  /* End of Switch: '<S235>/Switch5' */

  /* Product: '<S235>/Product' incorporates:
   *  Switch: '<S235>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Add_ie * rtb_Merge1;

  /* Sum: '<S244>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_p - rtb_Optimized_Module_Angle;

  /* Switch: '<S245>/Switch2' incorporates:
   *  RelationalOperator: '<S245>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S235>/Switch2' incorporates:
     *  Constant: '<S235>/Constant1'
     *  Switch: '<S235>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S235>/Switch4' incorporates:
       *  Constant: '<S235>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S235>/Switch4' incorporates:
       *  Constant: '<S235>/Constant3'
       *  UnaryMinus: '<S235>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S235>/Switch2' */

    /* Product: '<S235>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S245>/Switch' incorporates:
     *  RelationalOperator: '<S245>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S245>/Switch' */
  }

  /* End of Switch: '<S245>/Switch2' */

  /* Sum: '<S244>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_Optimized_Module_Angle;

  /* Switch: '<S238>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S262>/Constant3'
     *  Constant: '<S262>/Constant4'
     *  Math: '<S262>/Math Function'
     *  Sum: '<S238>/Subtract'
     *  Sum: '<S262>/Add1'
     *  Sum: '<S262>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_thetay) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S238>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S238>/Switch' */

  /* Sum: '<S258>/Add1' incorporates:
   *  Constant: '<S258>/Constant3'
   *  Constant: '<S258>/Constant4'
   *  Math: '<S258>/Math Function'
   *  Sum: '<S237>/Add'
   *  Sum: '<S257>/Sum'
   *  Sum: '<S258>/Add2'
   */
  rtb_Optimized_Module_Angle = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_thetay +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S260>/Sum1' incorporates:
   *  Constant: '<S257>/Constant2'
   *  Product: '<S260>/Product'
   *  Sum: '<S260>/Sum'
   *  UnitDelay: '<S260>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Optimized_Module_Angle -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S259>/Diff' incorporates:
   *  UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S257>/Saturation' */
  if (rtb_Add_ls > Steering_Heading_Control_D_UL) {
    rtb_Add_ls = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ls < Steering_Heading_Control_D_LL) {
    rtb_Add_ls = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_Optimized_Module_Angle) +
    rtb_Add_ls;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_Optimized_Module_Angle) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S261>/Switch2' incorporates:
   *  RelationalOperator: '<S261>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S257>/Subtract1' incorporates:
     *  Constant: '<S257>/Constant1'
     */
    rtb_Switch1_h = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S261>/Switch' incorporates:
     *  RelationalOperator: '<S261>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_h) {
      rtb_uDLookupTable_l = rtb_Switch1_h;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S261>/Switch' */
  }

  /* End of Switch: '<S261>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  rtb_Add_ls = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S257>/Saturation2' */
  if (rtb_Add_ls > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S257>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ls < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S257>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S257>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ls;
  }

  /* End of Saturate: '<S257>/Saturation2' */

  /* Switch: '<S237>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S248>/Switch' incorporates:
     *  Abs: '<S248>/Abs'
     *  Constant: '<S248>/Constant'
     *  Constant: '<S256>/Constant'
     *  RelationalOperator: '<S256>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_Optimized_Module_Angle = 0.0;
    }

    /* End of Switch: '<S248>/Switch' */
  } else {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S237>/Switch' */

  /* Signum: '<S247>/Sign2' incorporates:
   *  UnitDelay: '<S247>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S247>/Sign1' */
  if (rtIsNaN(rtb_Optimized_Module_Angle)) {
    rtb_Product_i5 = (rtNaN);
  } else if (rtb_Optimized_Module_Angle < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (rtb_Optimized_Module_Angle > 0.0);
  }

  /* Product: '<S247>/Product1' incorporates:
   *  Signum: '<S247>/Sign1'
   *  Signum: '<S247>/Sign2'
   */
  rtb_Add_ie *= rtb_Product_i5;
  if (rtIsNaN(rtb_Add_ie)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_ie, 256.0);
  }

  /* Switch: '<S247>/Switch' incorporates:
   *  Constant: '<S247>/Constant'
   *  Constant: '<S249>/Constant'
   *  Constant: '<S250>/Constant'
   *  Logic: '<S247>/or'
   *  Product: '<S247>/Product1'
   *  RelationalOperator: '<S249>/Compare'
   *  RelationalOperator: '<S250>/Compare'
   *  UnitDelay: '<S247>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_ef = rtb_Optimized_Module_Angle;
  } else {
    rtb_Switch2_ef = 0.0;
  }

  /* End of Switch: '<S247>/Switch' */

  /* Switch: '<S255>/Init' incorporates:
   *  UnitDelay: '<S255>/FixPt Unit Delay1'
   *  UnitDelay: '<S255>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_ef;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S255>/Init' */

  /* RelationalOperator: '<S251>/Compare' incorporates:
   *  Constant: '<S251>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_ef == 0.0);

  /* RelationalOperator: '<S252>/Compare' incorporates:
   *  Constant: '<S252>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_ef > 0.0);

  /* Abs: '<S247>/Abs' incorporates:
   *  Sum: '<S247>/Subtract'
   *  UnitDelay: '<S247>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_Optimized_Module_Angle);

  /* Switch: '<S247>/Switch5' incorporates:
   *  Constant: '<S247>/Constant1'
   *  Switch: '<S247>/Switch1'
   *  UnaryMinus: '<S247>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S247>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S247>/Constant4'
     *  Constant: '<S247>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S247>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S247>/Constant2'
     *  Constant: '<S247>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S247>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S247>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Product_ku, &rtb_Minus_n[0], 1U);
    rtb_Product_ku = rtb_LookupTableDynamic;
    rtb_Add_ie = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S247>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S247>/Constant10'
     *  Constant: '<S247>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S247>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S247>/Constant7'
     *  Constant: '<S247>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S247>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S247>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Product_ku, &rtb_Minus_n[0], 1U);
    rtb_Product_ku = rtb_LookupTableDynamic1;

    /* Switch: '<S247>/Switch3' incorporates:
     *  Constant: '<S247>/Constant1'
     *  Constant: '<S247>/Constant3'
     *  UnaryMinus: '<S247>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_ie = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Add_ie = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S247>/Switch3' */
  }

  /* End of Switch: '<S247>/Switch5' */

  /* Product: '<S247>/Product' incorporates:
   *  Switch: '<S247>/Switch1'
   */
  rtb_Switch1_h = rtb_Add_ie * rtb_Product_ku;

  /* Sum: '<S253>/Sum1' */
  rtb_Switch2_ef -= rtb_Init_e;

  /* Switch: '<S254>/Switch2' incorporates:
   *  RelationalOperator: '<S254>/LowerRelop1'
   */
  if (!(rtb_Switch2_ef > rtb_Switch1_h)) {
    /* Switch: '<S247>/Switch2' incorporates:
     *  Constant: '<S247>/Constant1'
     *  Constant: '<S247>/Constant3'
     *  Switch: '<S247>/Switch4'
     *  UnaryMinus: '<S247>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Add_ie = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S247>/Switch4' incorporates:
       *  Constant: '<S247>/Constant1'
       */
      rtb_Add_ie = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Add_ie = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S247>/Product2' incorporates:
     *  Switch: '<S247>/Switch2'
     */
    rtb_Switch1_h = rtb_Add_ie * rtb_Product_ku;

    /* Switch: '<S254>/Switch' incorporates:
     *  RelationalOperator: '<S254>/UpperRelop'
     */
    if (!(rtb_Switch2_ef < rtb_Switch1_h)) {
      rtb_Switch1_h = rtb_Switch2_ef;
    }

    /* End of Switch: '<S254>/Switch' */
  }

  /* End of Switch: '<S254>/Switch2' */

  /* Sum: '<S253>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_h + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S150>/Initialize Function' */
  /* Sum: '<S236>/Add' incorporates:
   *  Constant: '<S236>/Constant'
   *  Constant: '<S236>/Constant4'
   *  Constant: '<S236>/Constant5'
   *  Trigonometry: '<S236>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S150>/Initialize Function' */

  /* Fcn: '<S270>/r->x' incorporates:
   *  Fcn: '<S275>/r->x'
   *  Fcn: '<S280>/r->x'
   *  Fcn: '<S285>/r->x'
   */
  rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S264>/Add' incorporates:
   *  Fcn: '<S270>/r->x'
   *  Fcn: '<S271>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_p;

  /* Fcn: '<S270>/theta->y' incorporates:
   *  Fcn: '<S275>/theta->y'
   *  Fcn: '<S280>/theta->y'
   *  Fcn: '<S285>/theta->y'
   */
  rtb_Switch1_h = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S264>/Add' incorporates:
   *  Fcn: '<S270>/theta->y'
   *  Fcn: '<S271>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch1_h;

  /* Sum: '<S265>/Add' incorporates:
   *  Fcn: '<S276>/r->x'
   *  Fcn: '<S276>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_h;

  /* Sum: '<S266>/Add' incorporates:
   *  Fcn: '<S281>/r->x'
   *  Fcn: '<S281>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_h;

  /* Sum: '<S267>/Add' incorporates:
   *  Fcn: '<S286>/r->x'
   *  Fcn: '<S286>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Switch1_h += Code_Gen_Model_B.Steering_Localized_Cmd * sin
    (Code_Gen_Model_ConstB.BR_Tangent_Angle);

  /* Fcn: '<S284>/x->r' */
  rtb_Init_e = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Switch1_h);

  /* RelationalOperator: '<S287>/Compare' incorporates:
   *  Constant: '<S287>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Init_e == 0.0);

  /* Switch: '<S283>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S283>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S283>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Init_e;
  }

  /* End of Switch: '<S283>/Switch1' */

  /* Fcn: '<S269>/x->r' */
  rtb_Init_e = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S272>/Compare' incorporates:
   *  Constant: '<S272>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init_e == 0.0);

  /* Switch: '<S268>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S268>/Switch1' incorporates:
     *  Constant: '<S268>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S268>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Init_e;
  }

  /* End of Switch: '<S268>/Switch1' */

  /* Fcn: '<S274>/x->r' */
  rtb_Switch2_p = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S277>/Compare' incorporates:
   *  Constant: '<S277>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_p == 0.0);

  /* Switch: '<S273>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S273>/Switch1' incorporates:
     *  Constant: '<S273>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S273>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_p;
  }

  /* End of Switch: '<S273>/Switch1' */

  /* Fcn: '<S279>/x->r' */
  rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S282>/Compare' incorporates:
   *  Constant: '<S282>/Constant'
   */
  rtb_Switch_b1 = (rtb_Optimized_Module_Angle == 0.0);

  /* Switch: '<S278>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S278>/Switch1' incorporates:
     *  Constant: '<S278>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S278>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_Optimized_Module_Angle;
  }

  /* End of Switch: '<S278>/Switch1' */

  /* Product: '<S263>/Divide' incorporates:
   *  Abs: '<S263>/Abs'
   *  Abs: '<S263>/Abs1'
   *  Abs: '<S263>/Abs2'
   *  Abs: '<S263>/Abs3'
   *  Constant: '<S263>/Constant'
   *  MinMax: '<S263>/Max'
   */
  rtb_Init_e = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S263>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Init_e;

  /* Switch: '<S283>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S283>/Switch' incorporates:
     *  Fcn: '<S284>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Switch1_h,
      rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S283>/Switch' */

  /* Trigonometry: '<S227>/Cos4' incorporates:
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S227>/Sin5' incorporates:
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S227>/Sin4' incorporates:
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S227>/Cos5' incorporates:
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S227>/Subtract1' incorporates:
   *  Product: '<S227>/Product2'
   *  Product: '<S227>/Product3'
   *  Trigonometry: '<S227>/Cos4'
   *  Trigonometry: '<S227>/Sin4'
   */
  rtb_Switch1_h = (rtb_MatrixConcatenate_b_idx_0 * rtb_uDLookupTable_l) +
    (rtb_MatrixConcatenate_b_idx_1 * rtb_Optimized_Module_Angle);

  /* Sum: '<S227>/Subtract' incorporates:
   *  Product: '<S227>/Product'
   *  Product: '<S227>/Product1'
   *  Trigonometry: '<S227>/Cos4'
   *  Trigonometry: '<S227>/Sin4'
   */
  rtb_Switch2_ef = (rtb_MatrixConcatenate_b_idx_0 * rtb_Optimized_Module_Angle)
    - (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l);

  /* Math: '<S227>/Hypot' */
  rtb_Product_ku = rt_hypotd_snf(rtb_Switch2_ef, rtb_Switch1_h);

  /* Switch: '<S227>/Switch' incorporates:
   *  Constant: '<S227>/Constant'
   *  Constant: '<S227>/Constant1'
   *  Constant: '<S228>/Constant'
   *  Product: '<S227>/Divide'
   *  Product: '<S227>/Divide1'
   *  RelationalOperator: '<S228>/Compare'
   *  Switch: '<S227>/Switch1'
   */
  if (rtb_Product_ku > 1.0E-6) {
    rtb_Switch2_p = rtb_Switch1_h / rtb_Product_ku;
    rtb_Optimized_Module_Angle = rtb_Switch2_ef / rtb_Product_ku;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S227>/Switch' */

  /* Switch: '<S216>/Speed_Switch' incorporates:
   *  Abs: '<S216>/Abs'
   *  Constant: '<S224>/Constant'
   *  RelationalOperator: '<S224>/Compare'
   *  Switch: '<S216>/Angle_Switch'
   *  Trigonometry: '<S226>/Atan1'
   *  Trigonometry: '<S227>/Atan1'
   *  UnaryMinus: '<S216>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    rtb_Add_ie = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S226>/Subtract1' incorporates:
     *  Product: '<S226>/Product2'
     *  Product: '<S226>/Product3'
     *  UnaryMinus: '<S216>/Unary Minus'
     */
    rtb_Switch1_h = (rtb_MatrixConcatenate_b_idx_0 *
                     Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S226>/Subtract' incorporates:
     *  Product: '<S226>/Product'
     *  Product: '<S226>/Product1'
     */
    rtb_Product_ku = (rtb_MatrixConcatenate_b_idx_0 *
                      Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S226>/Hypot' */
    rtb_Switch2_ef = rt_hypotd_snf(rtb_Product_ku, rtb_Switch1_h);

    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S226>/Constant'
     *  Constant: '<S226>/Constant1'
     *  Constant: '<S229>/Constant'
     *  Product: '<S226>/Divide'
     *  Product: '<S226>/Divide1'
     *  RelationalOperator: '<S229>/Compare'
     *  Switch: '<S226>/Switch'
     */
    if (rtb_Switch2_ef > 1.0E-6) {
      rtb_Product_ku /= rtb_Switch2_ef;
      rtb_Switch1_h /= rtb_Switch2_ef;
    } else {
      rtb_Product_ku = 1.0;
      rtb_Switch1_h = 0.0;
    }

    /* End of Switch: '<S226>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Switch1_h, rtb_Product_ku);
  } else {
    rtb_Add_ie = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S219>/Product2' incorporates:
   *  Constant: '<S219>/Constant'
   *  Switch: '<S216>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_ie * 1530.1401357649195;

  /* Signum: '<S214>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S214>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S217>/Add' incorporates:
   *  Sum: '<S218>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S149>/Product' incorporates:
   *  Abs: '<S214>/Abs'
   *  Abs: '<S217>/Abs'
   *  Constant: '<S220>/Constant'
   *  Constant: '<S230>/Constant3'
   *  Constant: '<S230>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S214>/OR'
   *  Lookup_n-D: '<S217>/1-D Lookup Table'
   *  Math: '<S230>/Math Function'
   *  RelationalOperator: '<S214>/Equal1'
   *  RelationalOperator: '<S220>/Compare'
   *  Signum: '<S214>/Sign'
   *  Signum: '<S214>/Sign1'
   *  Sum: '<S217>/Add'
   *  Sum: '<S230>/Add1'
   *  Sum: '<S230>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S215>/Gain' */
  rtb_Product_ku = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S215>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S222>/Sum1' incorporates:
   *  Constant: '<S215>/Constant2'
   *  Product: '<S222>/Product'
   *  Sum: '<S222>/Sum'
   *  UnitDelay: '<S222>/Unit Delay1'
   */
  rtb_Switch1_h = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S215>/Product' incorporates:
   *  Constant: '<S215>/Constant3'
   */
  rtb_Switch2_ef = rtb_Switch1_h * Drive_Motor_Control_D;

  /* Sum: '<S221>/Diff' incorporates:
   *  UnitDelay: '<S221>/UD'
   *
   * Block description for '<S221>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S221>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Switch2_ef - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S215>/Saturation' */
  if (rtb_Add_ls > Drive_Motor_Control_D_UL) {
    rtb_Add_ls = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Drive_Motor_Control_D_LL) {
    rtb_Add_ls = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S215>/Add' incorporates:
   *  Gain: '<S215>/Gain1'
   *  Saturate: '<S215>/Saturation'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((Drive_Motor_Control_P * rtb_Switch2_p) +
    rtb_Product_ku) + rtb_Add_ls;

  /* Sum: '<S215>/Subtract' incorporates:
   *  Constant: '<S215>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S215>/Sum2' incorporates:
   *  Gain: '<S215>/Gain2'
   *  UnitDelay: '<S215>/Unit Delay'
   */
  rtb_Product_ku = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S223>/Switch2' incorporates:
   *  Constant: '<S215>/Constant'
   *  RelationalOperator: '<S223>/LowerRelop1'
   *  Sum: '<S215>/Subtract'
   */
  if (!(rtb_Product_ku > (1.0 - rtb_Rotationmatrixfromlocalto_0))) {
    /* Switch: '<S223>/Switch' incorporates:
     *  Constant: '<S215>/Constant1'
     *  RelationalOperator: '<S223>/UpperRelop'
     *  Sum: '<S215>/Subtract1'
     */
    if (rtb_Product_ku < (-1.0 - rtb_Rotationmatrixfromlocalto_0)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_Optimized_Module_Angle = rtb_Product_ku;
    }

    /* End of Switch: '<S223>/Switch' */
  }

  /* End of Switch: '<S223>/Switch2' */

  /* Saturate: '<S215>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Product_ku = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Product_ku = Drive_Motor_Control_I_LL;
  } else {
    rtb_Product_ku = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S215>/Saturation1' */

  /* Sum: '<S215>/Add1' */
  rtb_Add_ls = rtb_Rotationmatrixfromlocalto_0 + rtb_Product_ku;

  /* Saturate: '<S215>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S215>/Saturation2' */

  /* Sum: '<S231>/Add1' incorporates:
   *  Constant: '<S231>/Constant3'
   *  Constant: '<S231>/Constant4'
   *  Math: '<S231>/Math Function'
   *  Sum: '<S231>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S233>/Sum1' incorporates:
   *  Constant: '<S218>/Constant2'
   *  Product: '<S233>/Product'
   *  Sum: '<S233>/Sum'
   *  UnitDelay: '<S233>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Switch2_p -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S218>/Product' incorporates:
   *  Constant: '<S218>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Rotationmatrixfromlocalto_0 * Steering_Motor_Control_D;

  /* Sum: '<S232>/Diff' incorporates:
   *  UnitDelay: '<S232>/UD'
   *
   * Block description for '<S232>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S232>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S218>/Saturation' */
  if (rtb_Add_ls > Steering_Motor_Control_D_UL) {
    rtb_Add_ls = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Steering_Motor_Control_D_LL) {
    rtb_Add_ls = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S218>/Add' incorporates:
   *  Gain: '<S218>/Gain1'
   *  Saturate: '<S218>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_ls;

  /* Sum: '<S218>/Subtract' incorporates:
   *  Constant: '<S218>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_pw;

  /* Sum: '<S218>/Sum2' incorporates:
   *  Gain: '<S218>/Gain2'
   *  UnitDelay: '<S218>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S234>/Switch2' incorporates:
   *  Constant: '<S218>/Constant'
   *  RelationalOperator: '<S234>/LowerRelop1'
   *  Sum: '<S218>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S234>/Switch' incorporates:
     *  Constant: '<S218>/Constant1'
     *  RelationalOperator: '<S234>/UpperRelop'
     *  Sum: '<S218>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_pw;
    } else {
      rtb_Optimized_Module_Angle = rtb_Sum2_fc;
    }

    /* End of Switch: '<S234>/Switch' */
  }

  /* End of Switch: '<S234>/Switch2' */

  /* Saturate: '<S218>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S218>/Saturation1' */

  /* Sum: '<S218>/Add1' */
  rtb_Add_ls = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S218>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S218>/Saturation2' */

  /* Product: '<S263>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Init_e;

  /* Switch: '<S268>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S268>/Switch' incorporates:
     *  Fcn: '<S269>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S268>/Switch' */

  /* Trigonometry: '<S164>/Cos4' incorporates:
   *  Switch: '<S153>/Angle_Switch'
   *  Trigonometry: '<S163>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S164>/Sin5' incorporates:
   *  UnaryMinus: '<S162>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S164>/Sin4' incorporates:
   *  Switch: '<S153>/Angle_Switch'
   *  Trigonometry: '<S163>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S164>/Cos5' incorporates:
   *  UnaryMinus: '<S162>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S164>/Subtract1' incorporates:
   *  Product: '<S164>/Product2'
   *  Product: '<S164>/Product3'
   *  Trigonometry: '<S164>/Cos4'
   *  Trigonometry: '<S164>/Sin4'
   */
  rtb_Switch2_p = (rtb_MatrixConcatenate_b_idx_0 * rtb_uDLookupTable_l) +
    (rtb_MatrixConcatenate_b_idx_1 * rtb_Optimized_Module_Angle);

  /* Sum: '<S164>/Subtract' incorporates:
   *  Product: '<S164>/Product'
   *  Product: '<S164>/Product1'
   *  Trigonometry: '<S164>/Cos4'
   *  Trigonometry: '<S164>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_0 * rtb_Optimized_Module_Angle) -
    (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l);

  /* Math: '<S164>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Add_pw, rtb_Switch2_p);

  /* Switch: '<S164>/Switch' incorporates:
   *  Constant: '<S164>/Constant'
   *  Constant: '<S164>/Constant1'
   *  Constant: '<S165>/Constant'
   *  Product: '<S164>/Divide'
   *  Product: '<S164>/Divide1'
   *  RelationalOperator: '<S165>/Compare'
   *  Switch: '<S164>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_p /= rtb_Hypot_g5;
    rtb_Optimized_Module_Angle = rtb_Add_pw / rtb_Hypot_g5;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S164>/Switch' */

  /* Switch: '<S153>/Speed_Switch' incorporates:
   *  Abs: '<S153>/Abs'
   *  Constant: '<S161>/Constant'
   *  RelationalOperator: '<S161>/Compare'
   *  Switch: '<S153>/Angle_Switch'
   *  Trigonometry: '<S163>/Atan1'
   *  Trigonometry: '<S164>/Atan1'
   *  UnaryMinus: '<S153>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    rtb_Add_ie = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S163>/Subtract1' incorporates:
     *  Product: '<S163>/Product2'
     *  Product: '<S163>/Product3'
     *  UnaryMinus: '<S153>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S163>/Subtract' incorporates:
     *  Product: '<S163>/Product'
     *  Product: '<S163>/Product1'
     */
    rtb_Subtract_i = (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S163>/Hypot' */
    rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract_i, rtb_Add_pw);

    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S163>/Constant'
     *  Constant: '<S163>/Constant1'
     *  Constant: '<S166>/Constant'
     *  Product: '<S163>/Divide'
     *  Product: '<S163>/Divide1'
     *  RelationalOperator: '<S166>/Compare'
     *  Switch: '<S163>/Switch'
     */
    if (rtb_Hypot_g5 > 1.0E-6) {
      rtb_Subtract_i /= rtb_Hypot_g5;
      rtb_Add_pw /= rtb_Hypot_g5;
    } else {
      rtb_Subtract_i = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S163>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Subtract_i);
  } else {
    rtb_Add_ie = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S156>/Product2' incorporates:
   *  Constant: '<S156>/Constant'
   *  Switch: '<S153>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_ie * 1530.1401357649195;

  /* Signum: '<S151>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S151>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S154>/Add' incorporates:
   *  Sum: '<S155>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S146>/Product' incorporates:
   *  Abs: '<S151>/Abs'
   *  Abs: '<S154>/Abs'
   *  Constant: '<S157>/Constant'
   *  Constant: '<S167>/Constant3'
   *  Constant: '<S167>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S151>/OR'
   *  Lookup_n-D: '<S154>/1-D Lookup Table'
   *  Math: '<S167>/Math Function'
   *  RelationalOperator: '<S151>/Equal1'
   *  RelationalOperator: '<S157>/Compare'
   *  Signum: '<S151>/Sign'
   *  Signum: '<S151>/Sign1'
   *  Sum: '<S154>/Add'
   *  Sum: '<S167>/Add1'
   *  Sum: '<S167>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S152>/Gain' */
  rtb_Subtract_i = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S152>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S159>/Sum1' incorporates:
   *  Constant: '<S152>/Constant2'
   *  Product: '<S159>/Product'
   *  Sum: '<S159>/Sum'
   *  UnitDelay: '<S159>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S152>/Product' incorporates:
   *  Constant: '<S152>/Constant3'
   */
  rtb_Hypot_g5 = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S158>/Diff' incorporates:
   *  UnitDelay: '<S158>/UD'
   *
   * Block description for '<S158>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S158>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Hypot_g5 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S152>/Saturation' */
  if (rtb_Add_ls > Drive_Motor_Control_D_UL) {
    rtb_Add_ls = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Drive_Motor_Control_D_LL) {
    rtb_Add_ls = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S152>/Add' incorporates:
   *  Gain: '<S152>/Gain1'
   *  Saturate: '<S152>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Subtract_i) +
    rtb_Add_ls;

  /* Sum: '<S152>/Subtract' incorporates:
   *  Constant: '<S152>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_c4;

  /* Sum: '<S152>/Sum2' incorporates:
   *  Gain: '<S152>/Gain2'
   *  UnitDelay: '<S152>/Unit Delay'
   */
  rtb_Switch2_p = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S160>/Switch2' incorporates:
   *  Constant: '<S152>/Constant'
   *  RelationalOperator: '<S160>/LowerRelop1'
   *  Sum: '<S152>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S160>/Switch' incorporates:
     *  Constant: '<S152>/Constant1'
     *  RelationalOperator: '<S160>/UpperRelop'
     *  Sum: '<S152>/Subtract1'
     */
    if (rtb_Switch2_p < (-1.0 - rtb_Add_c4)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_c4;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_p;
    }

    /* End of Switch: '<S160>/Switch' */
  }

  /* End of Switch: '<S160>/Switch2' */

  /* Saturate: '<S152>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Subtract_i = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Subtract_i = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_i = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S152>/Saturation1' */

  /* Sum: '<S152>/Add1' */
  rtb_Add_ls = rtb_Add_c4 + rtb_Subtract_i;

  /* Saturate: '<S152>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S152>/Saturation2' */

  /* Sum: '<S168>/Add1' incorporates:
   *  Constant: '<S168>/Constant3'
   *  Constant: '<S168>/Constant4'
   *  Math: '<S168>/Math Function'
   *  Sum: '<S168>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S170>/Sum1' incorporates:
   *  Constant: '<S155>/Constant2'
   *  Product: '<S170>/Product'
   *  Sum: '<S170>/Sum'
   *  UnitDelay: '<S170>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S155>/Product' incorporates:
   *  Constant: '<S155>/Constant3'
   */
  rtb_Product_i3 = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S169>/Diff' incorporates:
   *  UnitDelay: '<S169>/UD'
   *
   * Block description for '<S169>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S169>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Product_i3 - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S155>/Saturation' */
  if (rtb_Add_ls > Steering_Motor_Control_D_UL) {
    rtb_Add_ls = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Steering_Motor_Control_D_LL) {
    rtb_Add_ls = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S155>/Add' incorporates:
   *  Gain: '<S155>/Gain1'
   *  Saturate: '<S155>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_0 = (Steering_Motor_Control_P * rtb_Switch2_p) +
    rtb_Add_ls;

  /* Sum: '<S155>/Subtract' incorporates:
   *  Constant: '<S155>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_MatrixConcatenate_b_idx_0;

  /* Sum: '<S155>/Sum2' incorporates:
   *  Gain: '<S155>/Gain2'
   *  UnitDelay: '<S155>/Unit Delay'
   */
  rtb_Switch2_p = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S171>/Switch2' incorporates:
   *  Constant: '<S155>/Constant'
   *  RelationalOperator: '<S171>/LowerRelop1'
   *  Sum: '<S155>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_MatrixConcatenate_b_idx_0))) {
    /* Switch: '<S171>/Switch' incorporates:
     *  Constant: '<S155>/Constant1'
     *  RelationalOperator: '<S171>/UpperRelop'
     *  Sum: '<S155>/Subtract1'
     */
    if (rtb_Switch2_p < (-1.0 - rtb_MatrixConcatenate_b_idx_0)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_p;
    }

    /* End of Switch: '<S171>/Switch' */
  }

  /* End of Switch: '<S171>/Switch2' */

  /* Saturate: '<S155>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_jk = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_jk = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_jk = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S155>/Saturation1' */

  /* Sum: '<S155>/Add1' */
  rtb_Add_ls = rtb_MatrixConcatenate_b_idx_0 + rtb_Subtract1_jk;

  /* Saturate: '<S155>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S155>/Saturation2' */

  /* Product: '<S263>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Init_e;

  /* Switch: '<S273>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S273>/Switch' incorporates:
     *  Fcn: '<S274>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S273>/Switch' */

  /* Trigonometry: '<S185>/Cos4' incorporates:
   *  Switch: '<S174>/Angle_Switch'
   *  Trigonometry: '<S184>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S185>/Sin5' incorporates:
   *  UnaryMinus: '<S183>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S185>/Sin4' incorporates:
   *  Switch: '<S174>/Angle_Switch'
   *  Trigonometry: '<S184>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S185>/Cos5' incorporates:
   *  UnaryMinus: '<S183>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S185>/Subtract1' incorporates:
   *  Product: '<S185>/Product2'
   *  Product: '<S185>/Product3'
   *  Trigonometry: '<S185>/Cos4'
   *  Trigonometry: '<S185>/Sin4'
   */
  rtb_Switch2_p = (rtb_MatrixConcatenate_b_idx_0 * rtb_uDLookupTable_l) +
    (rtb_MatrixConcatenate_b_idx_1 * rtb_Optimized_Module_Angle);

  /* Sum: '<S185>/Subtract' incorporates:
   *  Product: '<S185>/Product'
   *  Product: '<S185>/Product1'
   *  Trigonometry: '<S185>/Cos4'
   *  Trigonometry: '<S185>/Sin4'
   */
  rtb_Optimized_Module_Angle = (rtb_MatrixConcatenate_b_idx_0 *
    rtb_Optimized_Module_Angle) - (rtb_MatrixConcatenate_b_idx_1 *
    rtb_uDLookupTable_l);

  /* Math: '<S185>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Optimized_Module_Angle, rtb_Switch2_p);

  /* Switch: '<S185>/Switch' incorporates:
   *  Constant: '<S185>/Constant'
   *  Constant: '<S185>/Constant1'
   *  Constant: '<S186>/Constant'
   *  Product: '<S185>/Divide'
   *  Product: '<S185>/Divide1'
   *  RelationalOperator: '<S186>/Compare'
   *  Switch: '<S185>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_p /= rtb_Hypot_b;
    rtb_Optimized_Module_Angle /= rtb_Hypot_b;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S185>/Switch' */

  /* Switch: '<S174>/Speed_Switch' incorporates:
   *  Abs: '<S174>/Abs'
   *  Constant: '<S182>/Constant'
   *  RelationalOperator: '<S182>/Compare'
   *  Switch: '<S174>/Angle_Switch'
   *  Trigonometry: '<S184>/Atan1'
   *  Trigonometry: '<S185>/Atan1'
   *  UnaryMinus: '<S174>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    rtb_Add_ie = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S184>/Subtract1' incorporates:
     *  Product: '<S184>/Product2'
     *  Product: '<S184>/Product3'
     *  UnaryMinus: '<S174>/Unary Minus'
     */
    rtb_Optimized_Module_Angle = (rtb_MatrixConcatenate_b_idx_0 *
      Code_Gen_Model_ConstB.Sin5_m) + (rtb_MatrixConcatenate_b_idx_1 *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S184>/Subtract' incorporates:
     *  Product: '<S184>/Product'
     *  Product: '<S184>/Product1'
     */
    rtb_MatrixConcatenate_b_idx_1 = (rtb_MatrixConcatenate_b_idx_0 *
      Code_Gen_Model_ConstB.Cos5_g) - (rtb_MatrixConcatenate_b_idx_1 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S184>/Hypot' */
    rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Optimized_Module_Angle);

    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S184>/Constant'
     *  Constant: '<S184>/Constant1'
     *  Constant: '<S187>/Constant'
     *  Product: '<S184>/Divide'
     *  Product: '<S184>/Divide1'
     *  RelationalOperator: '<S187>/Compare'
     *  Switch: '<S184>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
      rtb_MatrixConcatenate_b_idx_1 /= rtb_MatrixConcatenate_b_idx_0;
      rtb_Optimized_Module_Angle /= rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_MatrixConcatenate_b_idx_1 = 1.0;
      rtb_Optimized_Module_Angle = 0.0;
    }

    /* End of Switch: '<S184>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Optimized_Module_Angle,
      rtb_MatrixConcatenate_b_idx_1);
  } else {
    rtb_Add_ie = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S177>/Product2' incorporates:
   *  Constant: '<S177>/Constant'
   *  Switch: '<S174>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_ie * 1530.1401357649195;

  /* Signum: '<S172>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S172>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S175>/Add' incorporates:
   *  Sum: '<S176>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S147>/Product' incorporates:
   *  Abs: '<S172>/Abs'
   *  Abs: '<S175>/Abs'
   *  Constant: '<S178>/Constant'
   *  Constant: '<S188>/Constant3'
   *  Constant: '<S188>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S172>/OR'
   *  Lookup_n-D: '<S175>/1-D Lookup Table'
   *  Math: '<S188>/Math Function'
   *  RelationalOperator: '<S172>/Equal1'
   *  RelationalOperator: '<S178>/Compare'
   *  Signum: '<S172>/Sign'
   *  Signum: '<S172>/Sign1'
   *  Sum: '<S175>/Add'
   *  Sum: '<S188>/Add1'
   *  Sum: '<S188>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S173>/Gain' */
  rtb_Optimized_Module_Angle = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S173>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S180>/Sum1' incorporates:
   *  Constant: '<S173>/Constant2'
   *  Product: '<S180>/Product'
   *  Sum: '<S180>/Sum'
   *  UnitDelay: '<S180>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_p -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S173>/Product' incorporates:
   *  Constant: '<S173>/Constant3'
   */
  rtb_MatrixConcatenate_b_idx_1 = rtb_MatrixConcatenate_b_idx_0 *
    Drive_Motor_Control_D;

  /* Sum: '<S179>/Diff' incorporates:
   *  UnitDelay: '<S179>/UD'
   *
   * Block description for '<S179>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S179>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_MatrixConcatenate_b_idx_1 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S173>/Saturation' */
  if (rtb_Add_ls > Drive_Motor_Control_D_UL) {
    rtb_Add_ls = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Drive_Motor_Control_D_LL) {
    rtb_Add_ls = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S173>/Add' incorporates:
   *  Gain: '<S173>/Gain1'
   *  Saturate: '<S173>/Saturation'
   */
  rtb_Add_pd = ((Drive_Motor_Control_P * rtb_Switch2_p) +
                rtb_Optimized_Module_Angle) + rtb_Add_ls;

  /* Sum: '<S173>/Subtract' incorporates:
   *  Constant: '<S173>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_pd;

  /* Sum: '<S173>/Sum2' incorporates:
   *  Gain: '<S173>/Gain2'
   *  UnitDelay: '<S173>/Unit Delay'
   */
  rtb_Switch2_p = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S181>/Switch2' incorporates:
   *  Constant: '<S173>/Constant'
   *  RelationalOperator: '<S181>/LowerRelop1'
   *  Sum: '<S173>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_pd))) {
    /* Sum: '<S173>/Subtract1' incorporates:
     *  Constant: '<S173>/Constant1'
     */
    rtb_Optimized_Module_Angle = -1.0 - rtb_Add_pd;

    /* Switch: '<S181>/Switch' incorporates:
     *  Constant: '<S173>/Constant1'
     *  RelationalOperator: '<S181>/UpperRelop'
     *  Sum: '<S173>/Subtract1'
     */
    if (!(rtb_Switch2_p < (-1.0 - rtb_Add_pd))) {
      rtb_Optimized_Module_Angle = rtb_Switch2_p;
    }

    /* End of Switch: '<S181>/Switch' */
  }

  /* End of Switch: '<S181>/Switch2' */

  /* Saturate: '<S173>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Hypot_b = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Hypot_b = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_b = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S173>/Saturation1' */

  /* Sum: '<S173>/Add1' */
  rtb_Add_ls = rtb_Add_pd + rtb_Hypot_b;

  /* Saturate: '<S173>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S173>/Saturation2' */

  /* Sum: '<S189>/Add1' incorporates:
   *  Constant: '<S189>/Constant3'
   *  Constant: '<S189>/Constant4'
   *  Math: '<S189>/Math Function'
   *  Sum: '<S189>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S191>/Sum1' incorporates:
   *  Constant: '<S176>/Constant2'
   *  Product: '<S191>/Product'
   *  Sum: '<S191>/Sum'
   *  UnitDelay: '<S191>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S176>/Product' incorporates:
   *  Constant: '<S176>/Constant3'
   */
  rtb_Add_pd = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S190>/Diff' incorporates:
   *  UnitDelay: '<S190>/UD'
   *
   * Block description for '<S190>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Add_pd - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S176>/Saturation' */
  if (rtb_Add_ls > Steering_Motor_Control_D_UL) {
    rtb_Add_ls = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Steering_Motor_Control_D_LL) {
    rtb_Add_ls = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S176>/Add' incorporates:
   *  Gain: '<S176>/Gain1'
   *  Saturate: '<S176>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_ls;

  /* Sum: '<S176>/Subtract' incorporates:
   *  Constant: '<S176>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_ie;

  /* Sum: '<S176>/Sum2' incorporates:
   *  Gain: '<S176>/Gain2'
   *  UnitDelay: '<S176>/Unit Delay'
   */
  rtb_Switch2_p = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S192>/Switch2' incorporates:
   *  Constant: '<S176>/Constant'
   *  RelationalOperator: '<S192>/LowerRelop1'
   *  Sum: '<S176>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_ie))) {
    /* Sum: '<S176>/Subtract1' incorporates:
     *  Constant: '<S176>/Constant1'
     */
    rtb_Optimized_Module_Angle = -1.0 - rtb_Add_ie;

    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S176>/Constant1'
     *  RelationalOperator: '<S192>/UpperRelop'
     *  Sum: '<S176>/Subtract1'
     */
    if (!(rtb_Switch2_p < (-1.0 - rtb_Add_ie))) {
      rtb_Optimized_Module_Angle = rtb_Switch2_p;
    }

    /* End of Switch: '<S192>/Switch' */
  }

  /* End of Switch: '<S192>/Switch2' */

  /* Saturate: '<S176>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Integral_kz = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Integral_kz = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_kz = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S176>/Saturation1' */

  /* Sum: '<S176>/Add1' */
  rtb_Add_ls = rtb_Add_ie + rtb_Integral_kz;

  /* Saturate: '<S176>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S176>/Saturation2' */

  /* Product: '<S263>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Init_e;

  /* Switch: '<S278>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S278>/Switch' incorporates:
     *  Fcn: '<S279>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S278>/Switch' */

  /* Trigonometry: '<S206>/Cos4' incorporates:
   *  Switch: '<S195>/Angle_Switch'
   *  Trigonometry: '<S205>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S206>/Sin5' incorporates:
   *  UnaryMinus: '<S204>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S206>/Sin4' incorporates:
   *  Switch: '<S195>/Angle_Switch'
   *  Trigonometry: '<S205>/Sin4'
   */
  rtb_Product_i5 = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S206>/Cos5' incorporates:
   *  UnaryMinus: '<S204>/Unary Minus'
   */
  rtb_Switch2_p = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S206>/Subtract1' incorporates:
   *  Product: '<S206>/Product2'
   *  Product: '<S206>/Product3'
   *  Trigonometry: '<S206>/Cos4'
   *  Trigonometry: '<S206>/Sin4'
   */
  rtb_Init_e = (rtb_Add_ie * rtb_Optimized_Module_Angle) + (rtb_Product_i5 *
    rtb_Switch2_p);

  /* Sum: '<S206>/Subtract' incorporates:
   *  Product: '<S206>/Product'
   *  Product: '<S206>/Product1'
   *  Trigonometry: '<S206>/Cos4'
   *  Trigonometry: '<S206>/Sin4'
   */
  rtb_Switch2_p = (rtb_Add_ie * rtb_Switch2_p) - (rtb_Product_i5 *
    rtb_Optimized_Module_Angle);

  /* Math: '<S206>/Hypot' */
  rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Switch2_p, rtb_Init_e);

  /* Switch: '<S206>/Switch' incorporates:
   *  Constant: '<S206>/Constant'
   *  Constant: '<S206>/Constant1'
   *  Constant: '<S207>/Constant'
   *  Product: '<S206>/Divide'
   *  Product: '<S206>/Divide1'
   *  RelationalOperator: '<S207>/Compare'
   *  Switch: '<S206>/Switch1'
   */
  if (rtb_Optimized_Module_Angle > 1.0E-6) {
    rtb_Init_e /= rtb_Optimized_Module_Angle;
    rtb_Switch2_p /= rtb_Optimized_Module_Angle;
  } else {
    rtb_Init_e = 0.0;
    rtb_Switch2_p = 1.0;
  }

  /* End of Switch: '<S206>/Switch' */

  /* Switch: '<S195>/Speed_Switch' incorporates:
   *  Abs: '<S195>/Abs'
   *  Constant: '<S203>/Constant'
   *  RelationalOperator: '<S203>/Compare'
   *  Switch: '<S195>/Angle_Switch'
   *  Trigonometry: '<S205>/Atan1'
   *  Trigonometry: '<S206>/Atan1'
   *  UnaryMinus: '<S195>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_e, rtb_Switch2_p)) > 1.5707963267948966) {
    rtb_Init_e = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S205>/Subtract1' incorporates:
     *  Product: '<S205>/Product2'
     *  Product: '<S205>/Product3'
     *  UnaryMinus: '<S195>/Unary Minus'
     */
    rtb_Switch2_p = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_i5 * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S205>/Subtract' incorporates:
     *  Product: '<S205>/Product'
     *  Product: '<S205>/Product1'
     */
    rtb_Add_ie = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Product_i5 *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S205>/Hypot' */
    rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Add_ie, rtb_Switch2_p);

    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S205>/Constant'
     *  Constant: '<S205>/Constant1'
     *  Constant: '<S208>/Constant'
     *  Product: '<S205>/Divide'
     *  Product: '<S205>/Divide1'
     *  RelationalOperator: '<S208>/Compare'
     *  Switch: '<S205>/Switch'
     */
    if (rtb_Optimized_Module_Angle > 1.0E-6) {
      rtb_Add_ie /= rtb_Optimized_Module_Angle;
      rtb_Switch2_p /= rtb_Optimized_Module_Angle;
    } else {
      rtb_Add_ie = 1.0;
      rtb_Switch2_p = 0.0;
    }

    /* End of Switch: '<S205>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Switch2_p, rtb_Add_ie);
  } else {
    rtb_Init_e = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* End of Switch: '<S195>/Speed_Switch' */

  /* Product: '<S198>/Product2' incorporates:
   *  Constant: '<S198>/Constant'
   */
  rtb_Init_e *= 1530.1401357649195;

  /* Signum: '<S193>/Sign' */
  if (rtIsNaN(rtb_Init_e)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Init_e < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Init_e > 0.0);
  }

  /* Signum: '<S193>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S196>/Add' incorporates:
   *  Sum: '<S197>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S148>/Product' incorporates:
   *  Abs: '<S193>/Abs'
   *  Abs: '<S196>/Abs'
   *  Constant: '<S199>/Constant'
   *  Constant: '<S209>/Constant3'
   *  Constant: '<S209>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S193>/OR'
   *  Lookup_n-D: '<S196>/1-D Lookup Table'
   *  Math: '<S209>/Math Function'
   *  RelationalOperator: '<S193>/Equal1'
   *  RelationalOperator: '<S199>/Compare'
   *  Signum: '<S193>/Sign'
   *  Signum: '<S193>/Sign1'
   *  Sum: '<S196>/Add'
   *  Sum: '<S209>/Add1'
   *  Sum: '<S209>/Add2'
   */
  rtb_Init_e = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_e) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S194>/Gain' */
  rtb_Switch2_p = Drive_Motor_Control_FF * rtb_Init_e;

  /* Sum: '<S194>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Init_e -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S201>/Sum1' incorporates:
   *  Constant: '<S194>/Constant2'
   *  Product: '<S201>/Product'
   *  Sum: '<S201>/Sum'
   *  UnitDelay: '<S201>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Init_e - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S194>/Product' incorporates:
   *  Constant: '<S194>/Constant3'
   */
  rtb_Product_i5 = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S200>/Diff' incorporates:
   *  UnitDelay: '<S200>/UD'
   *
   * Block description for '<S200>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S200>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Product_i5 - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S194>/Saturation' */
  if (rtb_Add_ls > Drive_Motor_Control_D_UL) {
    rtb_Add_ls = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Drive_Motor_Control_D_LL) {
    rtb_Add_ls = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S194>/Add' incorporates:
   *  Gain: '<S194>/Gain1'
   *  Saturate: '<S194>/Saturation'
   */
  rtb_Add_nh = ((Drive_Motor_Control_P * rtb_Init_e) + rtb_Switch2_p) +
    rtb_Add_ls;

  /* Sum: '<S194>/Subtract' incorporates:
   *  Constant: '<S194>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_nh;

  /* Sum: '<S194>/Sum2' incorporates:
   *  Gain: '<S194>/Gain2'
   *  UnitDelay: '<S194>/Unit Delay'
   */
  rtb_Init_e = (Drive_Motor_Control_I * rtb_Init_e) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S202>/Switch2' incorporates:
   *  Constant: '<S194>/Constant'
   *  RelationalOperator: '<S202>/LowerRelop1'
   *  Sum: '<S194>/Subtract'
   */
  if (!(rtb_Init_e > (1.0 - rtb_Add_nh))) {
    /* Sum: '<S194>/Subtract1' incorporates:
     *  Constant: '<S194>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_nh;

    /* Switch: '<S202>/Switch' incorporates:
     *  Constant: '<S194>/Constant1'
     *  RelationalOperator: '<S202>/UpperRelop'
     *  Sum: '<S194>/Subtract1'
     */
    if (!(rtb_Init_e < (-1.0 - rtb_Add_nh))) {
      rtb_Switch2_p = rtb_Init_e;
    }

    /* End of Switch: '<S202>/Switch' */
  }

  /* End of Switch: '<S202>/Switch2' */

  /* Saturate: '<S194>/Saturation1' */
  if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
    rtb_Integral_m = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
    rtb_Integral_m = Drive_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_p;
  }

  /* End of Saturate: '<S194>/Saturation1' */

  /* Sum: '<S194>/Add1' */
  rtb_Add_ls = rtb_Add_nh + rtb_Integral_m;

  /* Saturate: '<S194>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S194>/Saturation2' */

  /* Sum: '<S210>/Add1' incorporates:
   *  Constant: '<S210>/Constant3'
   *  Constant: '<S210>/Constant4'
   *  Math: '<S210>/Math Function'
   *  Sum: '<S210>/Add2'
   */
  rtb_Init_e = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S212>/Sum1' incorporates:
   *  Constant: '<S197>/Constant2'
   *  Product: '<S212>/Product'
   *  Sum: '<S212>/Sum'
   *  UnitDelay: '<S212>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Init_e -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S197>/Product' incorporates:
   *  Constant: '<S197>/Constant3'
   */
  rtb_Add_nh = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S211>/Diff' incorporates:
   *  UnitDelay: '<S211>/UD'
   *
   * Block description for '<S211>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S211>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ls = rtb_Add_nh - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S197>/Saturation' */
  if (rtb_Add_ls > Steering_Motor_Control_D_UL) {
    rtb_Add_ls = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ls < Steering_Motor_Control_D_LL) {
    rtb_Add_ls = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S197>/Add' incorporates:
   *  Gain: '<S197>/Gain1'
   *  Saturate: '<S197>/Saturation'
   */
  rtb_Add_ls += Steering_Motor_Control_P * rtb_Init_e;

  /* Sum: '<S197>/Subtract' incorporates:
   *  Constant: '<S197>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_ls;

  /* Sum: '<S197>/Sum2' incorporates:
   *  Gain: '<S197>/Gain2'
   *  UnitDelay: '<S197>/Unit Delay'
   */
  rtb_Init_e = (Steering_Motor_Control_I * rtb_Init_e) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S213>/Switch2' incorporates:
   *  Constant: '<S197>/Constant'
   *  RelationalOperator: '<S213>/LowerRelop1'
   *  Sum: '<S197>/Subtract'
   */
  if (!(rtb_Init_e > (1.0 - rtb_Add_ls))) {
    /* Sum: '<S197>/Subtract1' incorporates:
     *  Constant: '<S197>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_ls;

    /* Switch: '<S213>/Switch' incorporates:
     *  Constant: '<S197>/Constant1'
     *  RelationalOperator: '<S213>/UpperRelop'
     *  Sum: '<S197>/Subtract1'
     */
    if (!(rtb_Init_e < (-1.0 - rtb_Add_ls))) {
      rtb_Switch2_p = rtb_Init_e;
    }

    /* End of Switch: '<S213>/Switch' */
  }

  /* End of Switch: '<S213>/Switch2' */

  /* Saturate: '<S197>/Saturation1' */
  if (rtb_Switch2_p > Steering_Motor_Control_I_UL) {
    rtb_Init_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Steering_Motor_Control_I_LL) {
    rtb_Init_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Init_e = rtb_Switch2_p;
  }

  /* End of Saturate: '<S197>/Saturation1' */

  /* Sum: '<S197>/Add1' */
  rtb_Add_ls += rtb_Init_e;

  /* Saturate: '<S197>/Saturation2' */
  if (rtb_Add_ls > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ls < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_ls;
  }

  /* End of Saturate: '<S197>/Saturation2' */

  /* Gain: '<S79>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   *  Constant: '<S80>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S79>/Switch1' incorporates:
   *  UnitDelay: '<S79>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Switch2_p = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S79>/Switch1' */

  /* Sum: '<S79>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_p;

  /* Gain: '<S79>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S79>/Switch' incorporates:
   *  UnitDelay: '<S79>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Add_ls = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Add_ls = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S79>/Switch' */

  /* Sum: '<S79>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Add_ls;

  /* Chart: '<S5>/Chart_Intake_and_Shooter' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   *  DataTypeConversion: '<S5>/Data Type Conversion2'
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;

    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -Shooter_Eject_DC;

      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = Shooter_Eject_DC;
      if (Code_Gen_Model_DW.timer >= Note_Eject_Time) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Intake:
      Code_Gen_Model_B.Note_State_ID = 1.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;

      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 0.0;

      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 0.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist <= Intake_Note_Detect_Dist) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;

      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -Shooter_Transfer_DC;

      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = Shooter_Transfer_DC;
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Shooter_Note_Detect_Dist) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 0.0;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_Model_B.Note_State_ID = 0.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 0.0;

      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 0.0;
      if ((TEST_Request_Note_Pickup != 0.0) && (Code_Gen_Model_U.Intake_TOF_Dist
           > Intake_Note_Detect_Dist)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Intake;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else if ((TEST_Request_Note_Transfer != 0.0) &&
                 (Code_Gen_Model_U.Intake_TOF_Dist <= Intake_Note_Detect_Dist))
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Cod_IN_Note_Transfer_to_Shooter;
        Code_Gen_Model_B.Note_State_ID = 2.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;

        /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -Shooter_Transfer_DC;

        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = Shooter_Transfer_DC;
      } else if (TEST_Request_Note_Eject != 0.0) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Eject_from_Shooter;
        Code_Gen_Model_B.Note_State_ID = 3.0;

        /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -Shooter_Eject_DC;

        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = Shooter_Eject_DC;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart_Intake_and_Shooter' */

  /* Update for UnitDelay: '<S71>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S71>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S72>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S72>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S73>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S73>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S74>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S74>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' incorporates:
     *  Bias: '<S109>/Bias'
     *  Merge: '<S83>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' incorporates:
     *  Bias: '<S109>/Bias'
     *  Merge: '<S83>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S16>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S36>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S16>/A'
   *  Delay: '<S16>/MemoryX'
   */
  tmp_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  tmp_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S16>/MemoryX' incorporates:
   *  Constant: '<S16>/B'
   *  Product: '<S36>/A[k]*xhat[k|k-1]'
   *  Product: '<S36>/B[k]*u[k]'
   *  Sum: '<S36>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + tmp_0) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + tmp_1) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S70>/UD'
   *
   * Block description for '<S70>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = rtb_thetay;

  /* Update for DiscreteIntegrator: '<S9>/Accumulator2' incorporates:
   *  Constant: '<S9>/Constant'
   *  DiscreteIntegrator: '<S9>/Accumulator'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE += Code_Gen_Model_B.Product6[0];
  if (Odometry_Reset_IC > 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 1;
  } else {
    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;
    }

    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S9>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S9>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S246>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S246>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S260>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S259>/UD'
   *
   * Block description for '<S259>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S255>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S255>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S222>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Switch1_h;

  /* Update for UnitDelay: '<S221>/UD'
   *
   * Block description for '<S221>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2_ef;

  /* Update for UnitDelay: '<S215>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Product_ku;

  /* Update for UnitDelay: '<S233>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S232>/UD'
   *
   * Block description for '<S232>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S218>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S159>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S158>/UD'
   *
   * Block description for '<S158>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S152>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Subtract_i;

  /* Update for UnitDelay: '<S170>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S169>/UD'
   *
   * Block description for '<S169>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product_i3;

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Subtract1_jk;

  /* Update for UnitDelay: '<S180>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S179>/UD'
   *
   * Block description for '<S179>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S173>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Hypot_b;

  /* Update for UnitDelay: '<S191>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S190>/UD'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Add_pd;

  /* Update for UnitDelay: '<S176>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Integral_kz;

  /* Update for UnitDelay: '<S201>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S200>/UD'
   *
   * Block description for '<S200>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Product_i5;

  /* Update for UnitDelay: '<S194>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Integral_m;

  /* Update for UnitDelay: '<S212>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S211>/UD'
   *
   * Block description for '<S211>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_nh;

  /* Update for UnitDelay: '<S197>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S79>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_p;

  /* Update for UnitDelay: '<S79>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Add_ls;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    real_T Constant;
    real_T Constant1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for If: '<S10>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S16>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S246>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S255>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S306>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S10>/Spline Path Following Enabled' */
    /* Start for If: '<S87>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S83>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S87>/Robot_Index_Is_Valid' */
    /* Start for If: '<S90>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S90>/Circle_Check_Valid' */
    /* Start for If: '<S92>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S90>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S87>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S10>/Spline Path Following Enabled' */
  }
}

/* Model terminate function */
void Code_Gen_Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

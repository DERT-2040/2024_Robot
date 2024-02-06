/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.51
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Feb  5 21:56:30 2024
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
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)4U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)6U)
#define Code_Gen_Mode_IN_Extra_Run_Time ((uint8_T)1U)
#define Code_Gen_Model_DutyCycle       (false)
#define Code_Gen_Model_IN_Note_Intake  ((uint8_T)3U)
#define Code_Gen_Model_Speed           (true)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)2U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)5U)

/* Exported block parameters */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S311>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S309>/Constant'
                                         *   '<S309>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S311>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S309>/Constant1'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S244>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S160>/Constant3'
                                        *   '<S181>/Constant3'
                                        *   '<S202>/Constant3'
                                        *   '<S223>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S160>/Constant2'
                                   *   '<S181>/Constant2'
                                   *   '<S202>/Constant2'
                                   *   '<S223>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S160>/Saturation'
                                        *   '<S181>/Saturation'
                                        *   '<S202>/Saturation'
                                        *   '<S223>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S160>/Saturation'
                                        *   '<S181>/Saturation'
                                        *   '<S202>/Saturation'
                                        *   '<S223>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S160>/Gain'
                                            *   '<S181>/Gain'
                                            *   '<S202>/Gain'
                                            *   '<S223>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S160>/Gain2'
                                        *   '<S181>/Gain2'
                                        *   '<S202>/Gain2'
                                        *   '<S223>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S160>/Saturation1'
                                        *   '<S181>/Saturation1'
                                        *   '<S202>/Saturation1'
                                        *   '<S223>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S160>/Saturation1'
                                        *   '<S181>/Saturation1'
                                        *   '<S202>/Saturation1'
                                        *   '<S223>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S160>/Gain1'
                                        *   '<S181>/Gain1'
                                        *   '<S202>/Gain1'
                                        *   '<S223>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S165>/Constant'
                            *   '<S186>/Constant'
                            *   '<S207>/Constant'
                            *   '<S228>/Constant'
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
real_T Note_Shooter_Spin_Up_Time = 0.5;/* Variable: Note_Shooter_Spin_Up_Time
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Transfer_Time = 0.0;       /* Variable: Note_Transfer_Time
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
                                        * Referenced by: '<S87>/Constant'
                                        */
real_T Shooter_Desired_Speed = 600.0;  /* Variable: Shooter_Desired_Speed
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Eject_DC = 0.2;         /* Variable: Shooter_Eject_DC
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S16>/Gain'
                                           *   '<S17>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S16>/Gain2'
                                         *   '<S17>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S16>/Saturation1'
                                          *   '<S17>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S16>/Saturation1'
                                         *   '<S17>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 5.0E-5;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S16>/Gain1'
                                         *   '<S17>/Gain1'
                                         */
real_T Shooter_Note_Detect_Dist = 75.0;/* Variable: Shooter_Note_Detect_Dist
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S145>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S145>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S92>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S2>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S105>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S145>/Constant3'
                                     */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S299>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S265>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S265>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S265>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S265>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S264>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S265>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S265>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S265>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S265>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S265>/Constant1'
                                   *   '<S265>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S265>/Constant'
                                   *   '<S265>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S255>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S255>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S255>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S255>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S255>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S255>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S163>/Constant3'
                                        *   '<S184>/Constant3'
                                        *   '<S205>/Constant3'
                                        *   '<S226>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S163>/Constant2'
                                *   '<S184>/Constant2'
                                *   '<S205>/Constant2'
                                *   '<S226>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S163>/Saturation'
                                           *   '<S184>/Saturation'
                                           *   '<S205>/Saturation'
                                           *   '<S226>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S163>/Saturation'
                                          *   '<S184>/Saturation'
                                          *   '<S205>/Saturation'
                                          *   '<S226>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S163>/Gain2'
                                         *   '<S184>/Gain2'
                                         *   '<S205>/Gain2'
                                         *   '<S226>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S163>/Saturation1'
                                             *   '<S184>/Saturation1'
                                             *   '<S205>/Saturation1'
                                             *   '<S226>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S163>/Saturation1'
                                            *   '<S184>/Saturation1'
                                            *   '<S205>/Saturation1'
                                            *   '<S226>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S163>/Gain1'
                                        *   '<S184>/Gain1'
                                        *   '<S205>/Gain1'
                                        *   '<S226>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S297>/Constant'
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
                        * Referenced by: '<S243>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S243>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S243>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S243>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S243>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S243>/Constant3'
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
  real_T rtb_Add_ho;
  real_T rtb_Add_i;
  real_T rtb_Add_ie;
  real_T rtb_Add_ls;
  real_T rtb_Add_nh;
  real_T rtb_Add_pd;
  real_T rtb_Add_pw;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_Integral_ei;
  real_T rtb_Integral_h;
  real_T rtb_Integral_m;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product_dh;
  real_T rtb_Product_eb;
  real_T rtb_Product_i3;
  real_T rtb_Product_i5;
  real_T rtb_Product_ku;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Subtract1_jk;
  real_T rtb_Subtract1_kh;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_i;
  real_T rtb_Subtract_is;
  real_T rtb_Sum1_h;
  real_T rtb_Sum2_fc;
  real_T rtb_Switch;
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_h;
  real_T rtb_Switch2_do;
  real_T rtb_Switch2_j;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s117_iter;
  uint16_T s142_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T exitg1;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S150>/Add1' incorporates:
   *  Constant: '<S150>/Constant3'
   *  Constant: '<S150>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S150>/Math Function'
   *  Sum: '<S11>/Add'
   *  Sum: '<S150>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S79>/Diff'
   *  UnitDelay: '<S79>/UD'
   *
   * Block description for '<S79>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S79>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S151>/Add1' incorporates:
   *  Constant: '<S151>/Constant3'
   *  Constant: '<S151>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S151>/Math Function'
   *  Sum: '<S11>/Add1'
   *  Sum: '<S151>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S80>/Diff'
   *  UnitDelay: '<S80>/UD'
   *
   * Block description for '<S80>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S80>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S152>/Add1' incorporates:
   *  Constant: '<S152>/Constant3'
   *  Constant: '<S152>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S152>/Math Function'
   *  Sum: '<S11>/Add2'
   *  Sum: '<S152>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S81>/Diff'
   *  UnitDelay: '<S81>/UD'
   *
   * Block description for '<S81>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S81>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S153>/Add1' incorporates:
   *  Constant: '<S153>/Constant3'
   *  Constant: '<S153>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S153>/Math Function'
   *  Sum: '<S11>/Add3'
   *  Sum: '<S153>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product3' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S82>/Diff'
   *  UnitDelay: '<S82>/UD'
   *
   * Block description for '<S82>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S82>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_do = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S9>/Product7' incorporates:
   *  Fcn: '<S83>/r->x'
   *  Fcn: '<S83>/theta->y'
   *  Fcn: '<S84>/r->x'
   *  Fcn: '<S84>/theta->y'
   *  Fcn: '<S85>/r->x'
   *  Fcn: '<S85>/theta->y'
   *  Fcn: '<S86>/r->x'
   *  Fcn: '<S86>/theta->y'
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
  rtb_TmpSignalConversionAtProduc[6] = rtb_Switch2_do * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Switch2_do * sin
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

    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S299>/Constant'
     *  Constant: '<S299>/Constant1'
     *  Constant: '<S299>/Constant2'
     *  Inport: '<Root>/Steer_Joystick_X'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Math: '<S299>/Hypot'
     *  RelationalOperator: '<S299>/GreaterThan'
     *  Switch: '<S299>/Switch'
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

    /* End of Switch: '<S299>/Switch1' */

    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S307>/Constant'
     *  Constant: '<S308>/Constant'
     *  Logic: '<S301>/AND'
     *  RelationalOperator: '<S307>/Compare'
     *  RelationalOperator: '<S308>/Compare'
     *  Switch: '<S301>/Switch2'
     *  UnitDelay: '<S301>/Unit Delay'
     *  UnitDelay: '<S301>/Unit Delay1'
     */
    if ((rtb_thetay == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_thetay;
    }

    /* End of Switch: '<S301>/Switch1' */

    /* Merge: '<S8>/Merge1' incorporates:
     *  Trigonometry: '<S297>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S304>/Compare' incorporates:
     *  Constant: '<S304>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S300>/Switch' incorporates:
     *  Constant: '<S300>/Constant'
     *  Constant: '<S300>/Constant1'
     *  Constant: '<S302>/Constant'
     *  Constant: '<S303>/Constant'
     *  Logic: '<S300>/Logical Operator'
     *  RelationalOperator: '<S302>/Compare'
     *  RelationalOperator: '<S303>/Compare'
     *  UnitDelay: '<S300>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_h >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = 6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Switch: '<S300>/Switch1' incorporates:
     *  Constant: '<S300>/Constant2'
     *  Constant: '<S300>/Constant3'
     *  Constant: '<S305>/Constant'
     *  Constant: '<S306>/Constant'
     *  Logic: '<S300>/Logical Operator1'
     *  RelationalOperator: '<S305>/Compare'
     *  RelationalOperator: '<S306>/Compare'
     *  UnitDelay: '<S300>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_h < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Product_i5 = -6.2831853071795862;
    } else {
      rtb_Product_i5 = 0.0;
    }

    /* Sum: '<S300>/Sum1' incorporates:
     *  Switch: '<S300>/Switch'
     *  Switch: '<S300>/Switch1'
     *  UnitDelay: '<S300>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Add_ie + rtb_Product_i5) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S315>/Constant'
     *  Constant: '<S316>/Constant'
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Logic: '<S310>/AND'
     *  RelationalOperator: '<S315>/Compare'
     *  RelationalOperator: '<S316>/Compare'
     *  Switch: '<S310>/Switch2'
     *  UnitDelay: '<S310>/Unit Delay'
     *  UnitDelay: '<S310>/Unit Delay1'
     */
    if ((Code_Gen_Model_U.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_U.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_j = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_h = Code_Gen_Model_U.Drive_Joystick_Y;
      rtb_Switch2_j = Code_Gen_Model_U.Drive_Joystick_X;
    }

    /* End of Switch: '<S310>/Switch1' */

    /* Merge: '<S8>/Merge3' incorporates:
     *  Trigonometry: '<S298>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_h,
      rtb_Switch2_j);

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S13>/Constant3'
     *  SignalConversion generated from: '<S13>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S297>/Constant'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Lookup_n-D: '<S297>/Modulation_Str_Y_Rel'
     *  Product: '<S297>/Product'
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

    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S309>/Constant1'
     *  Inport: '<Root>/Is_Boost_Trigger_Pulled'
     */
    if (Code_Gen_Model_U.Is_Boost_Trigger_Pulled != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Switch: '<S314>/Init' incorporates:
     *  UnitDelay: '<S314>/FixPt Unit Delay1'
     *  UnitDelay: '<S314>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay = rtb_Product_ku;
    } else {
      rtb_thetay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S314>/Init' */

    /* Sum: '<S312>/Sum1' */
    rtb_Product_ku -= rtb_thetay;

    /* Switch: '<S313>/Switch2' incorporates:
     *  Constant: '<S311>/Constant1'
     *  Constant: '<S311>/Constant3'
     *  RelationalOperator: '<S313>/LowerRelop1'
     *  RelationalOperator: '<S313>/UpperRelop'
     *  Switch: '<S313>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S313>/Switch' incorporates:
       *  Constant: '<S311>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S313>/Switch2' */

    /* Sum: '<S312>/Sum' */
    rtb_thetay += rtb_Product_ku;

    /* Product: '<S309>/Product' incorporates:
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Lookup_n-D: '<S298>/Modulation_Drv'
     *  Math: '<S298>/Magnitude'
     */
    rtb_Add_ho = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_U.Drive_Joystick_X,
      Code_Gen_Model_U.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_thetay;

    /* Saturate: '<S309>/Saturation' */
    if (rtb_Add_ho > Boost_Trigger_High_Speed) {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (rtb_Add_ho < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Add_ho;
    }

    /* End of Saturate: '<S309>/Saturation' */

    /* SignalConversion generated from: '<S13>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S13>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Update for UnitDelay: '<S301>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch1_as;

    /* Update for UnitDelay: '<S300>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S310>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_h;

    /* Update for UnitDelay: '<S310>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_j;

    /* Update for UnitDelay: '<S314>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S314>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S314>/FixPt Unit Delay1' */
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

  /* Reshape: '<S24>/Reshapey' incorporates:
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

  /* Delay: '<S24>/MemoryX' incorporates:
   *  Constant: '<S24>/X0'
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
  rtb_Switch2_do = sin(rtb_thetay);

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Init_e;
  rtb_Switch1_as = rtb_Switch2_do;

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus'
   */
  rtb_Switch1_h = -rtb_Switch2_do;
  rtb_Switch2_j = rtb_Init_e;

  /* Sum: '<S78>/Diff' incorporates:
   *  UnitDelay: '<S78>/UD'
   *
   * Block description for '<S78>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S78>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init_e = rtb_thetay - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S9>/Subtract2' incorporates:
   *  Constant: '<S9>/Constant3'
   *  Gain: '<S9>/Gain7'
   *  Math: '<S9>/Square'
   */
  rtb_Switch2_do = 1.0 - ((rtb_Init_e * rtb_Init_e) * 0.16666666666666666);

  /* Gain: '<S9>/Gain6' */
  rtb_Init_e *= 0.5;

  /* Product: '<S9>/Product7' incorporates:
   *  Constant: '<S9>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Add_ie = 0.0;
    rtb_Num_Segments = 0;
    for (s117_iter = 0; s117_iter < 8; s117_iter++) {
      rtb_Add_ie += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i]
        * rtb_TmpSignalConversionAtProduc[s117_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Add_ie;
  }

  /* End of Product: '<S9>/Product7' */

  /* Product: '<S9>/Product6' incorporates:
   *  SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S9>/Unary Minus2'
   */
  rtb_Product_ku = (rtb_Switch2_do * tmp[0]) + ((-rtb_Init_e) * tmp[1]);
  rtb_Init_e = (rtb_Init_e * tmp[0]) + (rtb_Switch2_do * tmp[1]);

  /* Product: '<S9>/Product6' incorporates:
   *  Concatenate: '<S9>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Product_ku) + (rtb_Switch1_h * rtb_Init_e);
  Code_Gen_Model_B.Product6[1] = (rtb_Switch1_as * rtb_Product_ku) +
    (rtb_Switch2_j * rtb_Init_e);

  /* Outputs for Enabled SubSystem: '<S51>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S77>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S44>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S75>/Enable'
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

    /* Product: '<S75>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S24>/C'
     *  Delay: '<S24>/MemoryX'
     *  Product: '<S77>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S75>/Sum' incorporates:
     *  Constant: '<S24>/D'
     *  Product: '<S75>/C[k]*xhat[k|k-1]'
     *  Product: '<S75>/D[k]*u[k]'
     *  Sum: '<S75>/Add1'
     */
    rtb_Switch1_h = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch1_h + rtb_Switch1_as);

    /* Product: '<S75>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S24>/C'
     *  Delay: '<S24>/MemoryX'
     *  Product: '<S77>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S75>/Sum' incorporates:
     *  Constant: '<S24>/D'
     *  Product: '<S75>/C[k]*xhat[k|k-1]'
     *  Product: '<S75>/D[k]*u[k]'
     *  Sum: '<S75>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch1_h + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S75>/Product3' incorporates:
     *  Constant: '<S25>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S77>/Add1' incorporates:
     *  Product: '<S77>/Product'
     */
    rtb_Switch1_h = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S75>/Product3' incorporates:
     *  Constant: '<S25>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S77>/Add1' incorporates:
     *  Product: '<S77>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S77>/Product2' incorporates:
     *  Constant: '<S25>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1_h) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1_h) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S75>/Product3' incorporates:
       *  Outport: '<S75>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S77>/Product2' incorporates:
       *  Outport: '<S77>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S7>/AND' */
  /* End of Outputs for SubSystem: '<S44>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S51>/Enabled Subsystem' */

  /* Sum: '<S51>/Add' incorporates:
   *  Delay: '<S24>/MemoryX'
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
   *  Constant: '<S142>/Constant'
   *  Logic: '<S142>/AND'
   *  MATLAB Function: '<S92>/Find closest index to curve'
   *  Product: '<S142>/Product'
   *  RelationalOperator: '<S142>/Relational Operator'
   *  RelationalOperator: '<S142>/Relational Operator1'
   *  Selector: '<S142>/Selector'
   *  Selector: '<S142>/Selector1'
   *  Selector: '<S143>/Selector'
   *  Sum: '<S142>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S95>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S98>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S100>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S95>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S10>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S90>/Action Port'
       */
      /* InitializeConditions for If: '<S10>/If' incorporates:
       *  UnitDelay: '<S143>/Unit Delay'
       *  UnitDelay: '<S143>/Unit Delay1'
       *  UnitDelay: '<S90>/Unit Delay'
       *  UnitDelay: '<S91>/Unit Delay'
       *  UnitDelay: '<S93>/Unit Delay'
       *  UnitDelay: '<S93>/Unit Delay1'
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
     *  ActionPort: '<S90>/Action Port'
     */
    /* Selector: '<S91>/Selector1' incorporates:
     *  Merge: '<S8>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S91>/Selector1' */

    /* Lookup_n-D: '<S90>/Capture Radius' incorporates:
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled7,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S91>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S91>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S95>/If' incorporates:
     *  RelationalOperator: '<S95>/ '
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S98>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S100>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S95>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S98>/Action Port'
       */
      /* InitializeConditions for If: '<S95>/If' incorporates:
       *  UnitDelay: '<S98>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S95>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S95>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S98>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S98>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S101>/Action Port'
       */
      /* If: '<S98>/If' incorporates:
       *  Selector: '<S101>/Selector'
       *  Selector: '<S91>/Selector1'
       *  Selector: '<S98>/Selector'
       */
      rtb_Optimized_Module_Angle = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S98>/Increment_If_Rectangle_Check' */

      /* Sum: '<S98>/Minus' incorporates:
       *  Concatenate: '<S91>/Matrix Concatenate2'
       *  Selector: '<S98>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Optimized_Module_Angle;

      /* Outputs for IfAction SubSystem: '<S98>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S101>/Action Port'
       */
      /* If: '<S98>/If' incorporates:
       *  Selector: '<S101>/Selector'
       *  Selector: '<S91>/Selector1'
       *  Selector: '<S98>/Selector'
       *  Sum: '<S98>/Minus'
       */
      rtb_Switch1_h = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S98>/Increment_If_Rectangle_Check' */

      /* Sum: '<S98>/Minus' incorporates:
       *  Concatenate: '<S91>/Matrix Concatenate2'
       *  Selector: '<S98>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_h;

      /* Math: '<S98>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S98>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S98>/Switch' incorporates:
       *  Logic: '<S98>/AND'
       *  Logic: '<S98>/OR'
       *  RelationalOperator: '<S98>/Relational Operator'
       *  UnitDelay: '<S98>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S98>/If' */
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
        /* Disable for If: '<S100>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S98>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S100>/Action Port'
         */
        /* If: '<S100>/If' incorporates:
         *  RelationalOperator: '<S100>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S100>/Is_Last_Point' incorporates:
           *  ActionPort: '<S103>/Action Port'
           */
          /* InitializeConditions for If: '<S100>/If' incorporates:
           *  UnitDelay: '<S103>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S100>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S100>/Is_Last_Point' incorporates:
           *  ActionPort: '<S103>/Action Port'
           */
          /* Switch: '<S103>/Switch' incorporates:
           *  Constant: '<S105>/Constant'
           *  Logic: '<S103>/OR'
           *  RelationalOperator: '<S105>/Compare'
           *  UnitDelay: '<S103>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S103>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S103>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            /* Merge: '<S95>/Merge2' incorporates:
             *  Constant: '<S106>/Constant'
             *  SignalConversion generated from: '<S106>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S106>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S106>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S103>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S103>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S107>/Action Port'
             */
            /* Merge: '<S95>/Merge2' incorporates:
             *  Constant: '<S107>/Constant'
             *  SignalConversion generated from: '<S107>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S107>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S107>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S103>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S103>/If' */

          /* Merge: '<S95>/Merge4' incorporates:
           *  SignalConversion: '<S103>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S103>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S100>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S100>/Increment_Search' incorporates:
           *  ActionPort: '<S102>/Action Port'
           */
          /* Merge: '<S95>/Merge2' incorporates:
           *  Constant: '<S102>/Constant'
           *  SignalConversion generated from: '<S102>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S102>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S102>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S95>/Merge4' incorporates:
           *  Constant: '<S104>/FixPt Constant'
           *  SignalConversion: '<S102>/Signal Copy'
           *  Sum: '<S104>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S100>/Increment_Search' */
        }

        /* End of If: '<S100>/If' */
        /* End of Outputs for SubSystem: '<S98>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S98>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S101>/Action Port'
         */
        /* Sum: '<S108>/FixPt Sum1' incorporates:
         *  Constant: '<S108>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S101>/Selector1' incorporates:
         *  Selector: '<S91>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S109>/Subtract' incorporates:
         *  Selector: '<S101>/Selector1'
         *  Sum: '<S109>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Optimized_Module_Angle;

        /* Selector: '<S101>/Selector1' incorporates:
         *  Selector: '<S91>/Selector1'
         */
        rtb_Switch2_j = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S109>/Subtract' incorporates:
         *  Selector: '<S101>/Selector1'
         *  Sum: '<S109>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Switch1_h;

        /* Math: '<S109>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S109>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S109>/Unary Minus' */
        rtb_Switch2_do = rtb_Minus_n[0];

        /* Product: '<S109>/Product' incorporates:
         *  Product: '<S109>/Divide'
         *  UnaryMinus: '<S109>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_do) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S109>/Add1' incorporates:
         *  Sum: '<S109>/Add2'
         *  Sum: '<S109>/Minus'
         */
        rtb_Switch2_do = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S109>/Minus4' incorporates:
         *  Sum: '<S109>/Add2'
         *  Sum: '<S109>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_do;

        /* Sum: '<S109>/Minus5' incorporates:
         *  Concatenate: '<S91>/Matrix Concatenate2'
         *  Sum: '<S109>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Switch2_do;

        /* Sum: '<S109>/Add' incorporates:
         *  Sum: '<S109>/Add2'
         *  Sum: '<S109>/Minus1'
         */
        rtb_Switch1_as = rtb_Optimized_Module_Angle - rtb_Minus_n[0];

        /* Sum: '<S109>/Minus' incorporates:
         *  Sum: '<S109>/Minus1'
         */
        rtb_Switch2_do -= rtb_Switch1_as;

        /* DotProduct: '<S109>/Dot Product' incorporates:
         *  Concatenate: '<S91>/Matrix Concatenate2'
         *  Sum: '<S109>/Minus'
         *  Sum: '<S109>/Minus1'
         *  Sum: '<S109>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_do;

        /* DotProduct: '<S109>/Dot Product1' incorporates:
         *  Sum: '<S109>/Minus'
         */
        rtb_Optimized_Module_Angle = rtb_Switch2_do * rtb_Switch2_do;

        /* DotProduct: '<S109>/Dot Product2' incorporates:
         *  Sum: '<S109>/Minus4'
         *  Sum: '<S109>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S109>/Dot Product3' incorporates:
         *  Sum: '<S109>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S109>/Add1' incorporates:
         *  Sum: '<S109>/Add2'
         *  Sum: '<S109>/Minus'
         */
        rtb_Switch2_do = rtb_Switch2_j - rtb_Minus_n[1];

        /* Sum: '<S109>/Minus4' incorporates:
         *  Sum: '<S109>/Add2'
         *  Sum: '<S109>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_j + rtb_Minus_n[1]) - rtb_Switch2_do;

        /* Sum: '<S109>/Minus5' incorporates:
         *  Concatenate: '<S91>/Matrix Concatenate2'
         *  Sum: '<S109>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Switch2_do;

        /* Sum: '<S109>/Add' incorporates:
         *  Sum: '<S109>/Add2'
         *  Sum: '<S109>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_h - rtb_Minus_n[1];

        /* Sum: '<S109>/Minus' incorporates:
         *  Sum: '<S109>/Minus1'
         */
        rtb_Switch2_do -= rtb_Switch1_as;

        /* DotProduct: '<S109>/Dot Product' incorporates:
         *  Concatenate: '<S91>/Matrix Concatenate2'
         *  Sum: '<S109>/Minus'
         *  Sum: '<S109>/Minus1'
         *  Sum: '<S109>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_do;

        /* RelationalOperator: '<S110>/Compare' incorporates:
         *  Constant: '<S110>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S109>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S109>/Dot Product1'
         *  Sum: '<S109>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_do * rtb_Switch2_do) +
          rtb_Optimized_Module_Angle));

        /* DotProduct: '<S109>/Dot Product2' incorporates:
         *  Sum: '<S109>/Minus4'
         *  Sum: '<S109>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Rotationmatrixfromlocalto_0) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S95>/Merge4' incorporates:
         *  Constant: '<S111>/Constant'
         *  DataTypeConversion: '<S101>/Data Type Conversion'
         *  DotProduct: '<S109>/Dot Product3'
         *  Logic: '<S109>/AND'
         *  RelationalOperator: '<S109>/LessThanOrEqual1'
         *  RelationalOperator: '<S111>/Compare'
         *  Sum: '<S101>/Add'
         *  Sum: '<S109>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S95>/Merge2' incorporates:
         *  Constant: '<S101>/Constant2'
         *  SignalConversion generated from: '<S101>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S101>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S101>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S98>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S98>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S99>/Action Port'
         */
        /* Merge: '<S95>/Merge2' incorporates:
         *  Constant: '<S99>/Constant2'
         *  SignalConversion generated from: '<S99>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S99>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S99>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S95>/Merge4' incorporates:
         *  SignalConversion generated from: '<S99>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S98>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S95>/Merge1' incorporates:
       *  Constant: '<S98>/Constant'
       *  SignalConversion generated from: '<S98>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S98>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S95>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S95>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S97>/Action Port'
       */
      /* Merge: '<S95>/Merge1' incorporates:
       *  Constant: '<S97>/Constant'
       *  SignalConversion generated from: '<S97>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S95>/Merge2' incorporates:
       *  Constant: '<S97>/Constant1'
       *  SignalConversion generated from: '<S97>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S97>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S97>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S95>/Merge4' incorporates:
       *  SignalConversion generated from: '<S97>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S95>/Escape_Auto_Driving' */
    }

    /* End of If: '<S95>/If' */

    /* If: '<S91>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S91>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S96>/Action Port'
       */
      /* Bias: '<S112>/Add Constant' incorporates:
       *  Bias: '<S112>/Bias'
       *  Sum: '<S112>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S112>/Selector4' incorporates:
       *  Bias: '<S112>/Bias1'
       *  Constant: '<S114>/FixPt Constant'
       *  Sum: '<S114>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S112>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S112>/Matrix Concatenate' incorporates:
       *  Bias: '<S112>/Add Constant1'
       *  Gain: '<S115>/Gain'
       *  Gain: '<S116>/Gain'
       *  Selector: '<S112>/Selector'
       *  Selector: '<S112>/Selector1'
       *  Selector: '<S112>/Selector2'
       *  Selector: '<S112>/Selector3'
       *  Selector: '<S91>/Selector1'
       *  Sum: '<S115>/Subtract'
       *  Sum: '<S116>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (i = 0; i < 6; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 9] = rtb_Ref_Poses[i + 6];
      }

      for (i = 0; i < 2; i++) {
        /* Selector: '<S112>/Selector4' incorporates:
         *  Selector: '<S112>/Selector'
         */
        rtb_Num_Segments = (i << 3);
        rtb_Assignment[rtb_Num_Segments + 7] = (rtb_Ref_Poses[((6 * i) +
          ((int32_T)Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) -
          rtb_Ref_Poses[(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) +
                         (6 * i)) - 1];

        /* Selector: '<S112>/Selector4' incorporates:
         *  Bias: '<S112>/Add Constant1'
         *  Gain: '<S115>/Gain'
         *  Selector: '<S112>/Selector'
         *  Selector: '<S112>/Selector1'
         *  Sum: '<S115>/Subtract'
         */
        for (s117_iter = 0; s117_iter <= rtb_Bias1_p; s117_iter++) {
          rtb_Selector4[s117_iter + (Code_Gen_Model_DW.Selector4_DIMS1[0] * i)] =
            rtb_Assignment[((s117_iter + rtb_Reshapey_0) + rtb_Num_Segments) - 1];
        }
      }

      /* End of Concatenate: '<S112>/Matrix Concatenate' */

      /* Assignment: '<S112>/Assignment' incorporates:
       *  Selector: '<S112>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s117_iter = 0; s117_iter < rtb_Bias1_p; s117_iter++) {
          rtb_Assignment[s117_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s117_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S112>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S113>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S117>/While Iterator'
       */
      s117_iter = 1;
      do {
        rtb_Switch1_h = rtb_Assignment[s117_iter + 1];
        rtb_Reshapey[0] = rtb_Switch1_h - rtb_Assignment[s117_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s117_iter] - rtb_Assignment[s117_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch1_h - rtb_Assignment[s117_iter];
        rtb_Switch1_h = rtb_Assignment[s117_iter + 9];
        rtb_Reshapey[1] = rtb_Switch1_h - rtb_Assignment[s117_iter + 7];
        rtb_Optimized_Module_Angle = rtb_Assignment[s117_iter + 8];
        rtb_Minus_n[1] = rtb_Optimized_Module_Angle - rtb_Assignment[s117_iter +
          10];
        rtb_Add2_f[1] = rtb_Switch1_h - rtb_Optimized_Module_Angle;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_h = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_j = (rtb_Init_e - (2.0 * rtb_Switch1_h)) +
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Product_ku = rtb_Switch1_h - rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Switch1_h) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_j) +
            (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s117_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_j) +
            (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Optimized_Module_Angle;
          rtb_Switch2_j = ((3.0 * rtb_Switch1_h) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_h);
          rtb_Switch1_h = (rtb_Init_e - rtb_Switch1_h) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Switch2_j)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch1_h);
          rtb_Switch2_do = (((rtb_Reshapey[1] * rtb_Switch2_j) + (rtb_Minus_n[1]
            * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_h);
          rtb_Switch1_h = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch2_j = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch1_h) + (rtb_Minus_n[1] * rtb_Switch2_j)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch1_h) + (rtb_Minus_n[0] *
            rtb_Switch2_j)) * 0.5) + (rtb_Add2_f[0] * rtb_Init_e)) *
             rtb_Switch2_do)) / rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_do), 3.0);
        }

        if (s117_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s117_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s117_iter);
        rtb_Num_Segments = s117_iter;
        s117_iter++;
      } while ((rtb_Init_e >= 4.0) && (s117_iter <= 3));

      /* End of Outputs for SubSystem: '<S113>/Sampling_Loop' */

      /* SignalConversion generated from: '<S96>/Position_and_Curvature' incorporates:
       *  Assignment: '<S117>/Assignment'
       *  Merge: '<S91>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S91>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S91>/If Action Subsystem' incorporates:
       *  ActionPort: '<S94>/Action Port'
       */
      /* Product: '<S94>/Product' incorporates:
       *  Selector: '<S91>/Selector'
       *  Selector: '<S91>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S94>/Product1' incorporates:
       *  Selector: '<S91>/Selector'
       *  Selector: '<S91>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S94>/Product' incorporates:
         *  Constant: '<S94>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S94>/Product1' incorporates:
         *  Constant: '<S94>/Constant2'
         *  Product: '<S94>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S94>/Assignment' incorporates:
       *  Concatenate: '<S94>/Matrix Concatenate'
       *  Merge: '<S91>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S94>/Assignment' */

      /* SignalConversion generated from: '<S94>/Num_Segments' incorporates:
       *  Constant: '<S94>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S91>/If Action Subsystem' */
    }

    /* End of If: '<S91>/If1' */

    /* Concatenate: '<S92>/Matrix Concatenate' incorporates:
     *  Merge: '<S91>/Merge'
     *  Selector: '<S92>/Selector'
     *  Selector: '<S92>/Selector1'
     *  Selector: '<S92>/Selector3'
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

    /* End of Concatenate: '<S92>/Matrix Concatenate' */

    /* MATLAB Function: '<S92>/Distance Along Curve' incorporates:
     *  Concatenate: '<S92>/Matrix Concatenate'
     *  Selector: '<S92>/Selector4'
     *  Selector: '<S92>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s117_iter = 0; s117_iter < 149; s117_iter++) {
      /* Outputs for Iterator SubSystem: '<S113>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S117>/While Iterator'
       */
      rtb_Assignment_d[s117_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s117_iter + 1] -
         rtb_MatrixConcatenate_o[s117_iter], rtb_MatrixConcatenate_o[s117_iter +
         151] - rtb_MatrixConcatenate_o[s117_iter + 150]) +
        rtb_Assignment_d[s117_iter];

      /* End of Outputs for SubSystem: '<S113>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S92>/Distance Along Curve' */

    /* MATLAB Function: '<S92>/Find closest index to curve' incorporates:
     *  Concatenate: '<S92>/Matrix Concatenate'
     *  Selector: '<S143>/Selector'
     *  Selector: '<S92>/Selector4'
     *  Selector: '<S92>/Selector5'
     */
    for (s117_iter = 0; s117_iter < 150; s117_iter++) {
      /* Outputs for Iterator SubSystem: '<S113>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S117>/While Iterator'
       */
      distance_from_robot[s117_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s117_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s117_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S113>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s117_iter = 1;
    } else {
      s117_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s117_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s117_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s117_iter - 1];
      for (rtb_Bias1_p = s117_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s117_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s117_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S143>/Selector' incorporates:
     *  Constant: '<S143>/Constant'
     *  MATLAB Function: '<S92>/Find closest index to curve'
     *  MinMax: '<S143>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s117_iter)) - 1];

    /* If: '<S143>/If' incorporates:
     *  RelationalOperator: '<S143>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S143>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S146>/Action Port'
       */
      /* SignalConversion generated from: '<S146>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S148>/FixPt Sum1' incorporates:
       *  Constant: '<S148>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S146>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S146>/Selector11'
       *  Selector: '<S146>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S146>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S146>/Selector1'
       *  Selector: '<S146>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S146>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S146>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S146>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S146>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S146>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S143>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S143>/Latch' incorporates:
       *  ActionPort: '<S147>/Action Port'
       */
      /* SignalConversion generated from: '<S147>/In1' incorporates:
       *  UnitDelay: '<S143>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S147>/In2' incorporates:
       *  UnitDelay: '<S143>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S143>/Latch' */
    }

    /* End of If: '<S143>/If' */

    /* MinMax: '<S90>/Min' incorporates:
     *  Lookup_n-D: '<S90>/Lookahead Distance'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S92>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S142>/While Iterator'
     */
    s142_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s142_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S92>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S142>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s142_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s117_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s142_iter++;
    }

    /* End of Outputs for SubSystem: '<S92>/Find first index that meets distance target' */

    /* Switch: '<S145>/Switch' incorporates:
     *  Concatenate: '<S92>/Matrix Concatenate'
     *  Constant: '<S142>/Constant'
     *  Constant: '<S145>/Constant1'
     *  Constant: '<S145>/Constant2'
     *  Constant: '<S145>/Constant3'
     *  Constant: '<S92>/Constant'
     *  Logic: '<S142>/AND'
     *  MATLAB Function: '<S92>/Find closest index to curve'
     *  Math: '<S145>/Hypot'
     *  Merge: '<S8>/Merge8'
     *  MinMax: '<S145>/Min'
     *  MinMax: '<S145>/Min1'
     *  Product: '<S142>/Product'
     *  Product: '<S145>/Divide'
     *  Product: '<S145>/Product'
     *  Product: '<S145>/Product1'
     *  RelationalOperator: '<S142>/Relational Operator'
     *  RelationalOperator: '<S142>/Relational Operator1'
     *  RelationalOperator: '<S92>/Relational Operator'
     *  Selector: '<S142>/Selector'
     *  Selector: '<S142>/Selector1'
     *  Selector: '<S143>/Selector'
     *  Selector: '<S92>/Selector10'
     *  Selector: '<S92>/Selector7'
     *  Selector: '<S92>/Selector8'
     *  Selector: '<S92>/Selector9'
     *  Sqrt: '<S145>/Sqrt'
     *  Sum: '<S142>/Add'
     *  Sum: '<S145>/Subtract'
     *  Sum: '<S145>/Subtract1'
     *  Sum: '<S92>/Subtract'
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

    /* End of Switch: '<S145>/Switch' */

    /* Logic: '<S93>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S93>/Switch1' incorporates:
     *  Switch: '<S93>/Switch'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S10>/Merge2' incorporates:
       *  Constant: '<S93>/Constant3'
       *  SignalConversion: '<S93>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S10>/Merge2' incorporates:
       *  SignalConversion: '<S93>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion: '<S93>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S92>/Selector6' incorporates:
     *  Concatenate: '<S92>/Matrix Concatenate'
     *  Selector: '<S92>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S92>/Selector2' incorporates:
     *  Concatenate: '<S92>/Matrix Concatenate'
     *  Selector: '<S92>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S93>/Switch2' incorporates:
     *  Sum: '<S149>/Subtract'
     *  Sum: '<S149>/Subtract1'
     *  Trigonometry: '<S149>/Atan2'
     *  UnitDelay: '<S93>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_h = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S93>/Switch2' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion: '<S93>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_h;

    /* Merge: '<S10>/Merge7' incorporates:
     *  SignalConversion: '<S90>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S93>/Constant2'
     *  SignalConversion generated from: '<S90>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S93>/Constant5'
     *  SignalConversion generated from: '<S90>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S10>/Merge5' incorporates:
     *  Constant: '<S93>/Constant6'
     *  SignalConversion generated from: '<S90>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S10>/Merge6' incorporates:
     *  Constant: '<S93>/Constant1'
     *  SignalConversion generated from: '<S90>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S143>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S143>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S93>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S93>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_h;

    /* End of Outputs for SubSystem: '<S10>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S10>/Pass Through' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S89>/Constant'
     *  SignalConversion generated from: '<S89>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion generated from: '<S89>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S10>/Merge1' incorporates:
     *  SignalConversion generated from: '<S89>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S10>/Merge2' incorporates:
     *  SignalConversion generated from: '<S89>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion generated from: '<S89>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S10>/Merge4' incorporates:
     *  SignalConversion generated from: '<S89>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S10>/Merge5' incorporates:
     *  SignalConversion generated from: '<S89>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge6' incorporates:
     *  SignalConversion generated from: '<S89>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S10>/Pass Through' */
  }

  /* End of If: '<S10>/If' */

  /* UnitDelay: '<S243>/Unit Delay' */
  rtb_Init_e = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S243>/Sign2' */
  if (rtIsNaN(rtb_Init_e)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Init_e < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Init_e > 0.0);
  }

  /* Signum: '<S243>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S243>/Product1' incorporates:
   *  Signum: '<S243>/Sign1'
   *  Signum: '<S243>/Sign2'
   */
  rtb_Add_ie *= rtb_Product_i5;
  if (rtIsNaN(rtb_Add_ie)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_ie, 256.0);
  }

  /* Switch: '<S243>/Switch' incorporates:
   *  Constant: '<S243>/Constant'
   *  Constant: '<S248>/Constant'
   *  Constant: '<S249>/Constant'
   *  Logic: '<S243>/or'
   *  Product: '<S243>/Product1'
   *  RelationalOperator: '<S248>/Compare'
   *  RelationalOperator: '<S249>/Compare'
   */
  if ((rtb_Init_e == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_do = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_do = 0.0;
  }

  /* End of Switch: '<S243>/Switch' */

  /* Switch: '<S254>/Init' incorporates:
   *  UnitDelay: '<S254>/FixPt Unit Delay1'
   *  UnitDelay: '<S254>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Optimized_Module_Angle = rtb_Switch2_do;
  } else {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S254>/Init' */

  /* RelationalOperator: '<S250>/Compare' incorporates:
   *  Constant: '<S250>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_do == 0.0);

  /* RelationalOperator: '<S251>/Compare' incorporates:
   *  Constant: '<S251>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_do > 0.0);

  /* Abs: '<S243>/Abs' incorporates:
   *  Sum: '<S243>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Init_e - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S243>/Switch5' incorporates:
   *  Constant: '<S243>/Constant1'
   *  Switch: '<S243>/Switch1'
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S243>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S243>/Constant4'
     *  Constant: '<S243>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S243>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S243>/Constant2'
     *  Constant: '<S243>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S243>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S243>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S243>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S243>/Constant10'
     *  Constant: '<S243>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S243>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S243>/Constant7'
     *  Constant: '<S243>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S243>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S243>/Lookup Table Dynamic1'
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

    /* Switch: '<S243>/Switch3' incorporates:
     *  Constant: '<S243>/Constant1'
     *  Constant: '<S243>/Constant3'
     *  UnaryMinus: '<S243>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_ie = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Add_ie = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S243>/Switch3' */
  }

  /* End of Switch: '<S243>/Switch5' */

  /* Product: '<S243>/Product' incorporates:
   *  Switch: '<S243>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Add_ie * rtb_Merge1;

  /* Sum: '<S252>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_do - rtb_Optimized_Module_Angle;

  /* Switch: '<S253>/Switch2' incorporates:
   *  RelationalOperator: '<S253>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S243>/Switch2' incorporates:
     *  Constant: '<S243>/Constant1'
     *  Switch: '<S243>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S243>/Switch4' incorporates:
       *  Constant: '<S243>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S243>/Switch4' incorporates:
       *  Constant: '<S243>/Constant3'
       *  UnaryMinus: '<S243>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S243>/Switch2' */

    /* Product: '<S243>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S253>/Switch' incorporates:
     *  RelationalOperator: '<S253>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S253>/Switch' */
  }

  /* End of Switch: '<S253>/Switch2' */

  /* Sum: '<S252>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_Optimized_Module_Angle;

  /* Switch: '<S246>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S246>/Switch' incorporates:
     *  Constant: '<S270>/Constant3'
     *  Constant: '<S270>/Constant4'
     *  Math: '<S270>/Math Function'
     *  Sum: '<S246>/Subtract'
     *  Sum: '<S270>/Add1'
     *  Sum: '<S270>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_thetay) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S246>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S246>/Switch' */

  /* Sum: '<S266>/Add1' incorporates:
   *  Constant: '<S266>/Constant3'
   *  Constant: '<S266>/Constant4'
   *  Math: '<S266>/Math Function'
   *  Sum: '<S245>/Add'
   *  Sum: '<S265>/Sum'
   *  Sum: '<S266>/Add2'
   */
  rtb_Optimized_Module_Angle = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_thetay +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S268>/Sum1' incorporates:
   *  Constant: '<S265>/Constant2'
   *  Product: '<S268>/Product'
   *  Sum: '<S268>/Sum'
   *  UnitDelay: '<S268>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Optimized_Module_Angle -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S265>/Product' incorporates:
   *  Constant: '<S265>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S267>/Diff' incorporates:
   *  UnitDelay: '<S267>/UD'
   *
   * Block description for '<S267>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S267>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S265>/Saturation' */
  if (rtb_Add_ho > Steering_Heading_Control_D_UL) {
    rtb_Add_ho = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ho < Steering_Heading_Control_D_LL) {
    rtb_Add_ho = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S265>/Add' incorporates:
   *  Gain: '<S265>/Gain1'
   *  Saturate: '<S265>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_Optimized_Module_Angle) +
    rtb_Add_ho;

  /* Sum: '<S265>/Subtract' incorporates:
   *  Constant: '<S265>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S265>/Sum2' incorporates:
   *  Gain: '<S265>/Gain2'
   *  UnitDelay: '<S265>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_Optimized_Module_Angle) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S269>/Switch2' incorporates:
   *  RelationalOperator: '<S269>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S265>/Subtract1' incorporates:
     *  Constant: '<S265>/Constant1'
     */
    rtb_Switch1_h = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S269>/Switch' incorporates:
     *  RelationalOperator: '<S269>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_h) {
      rtb_uDLookupTable_l = rtb_Switch1_h;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S269>/Switch' */
  }

  /* End of Switch: '<S269>/Switch2' */

  /* Saturate: '<S265>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S265>/Saturation1' */

  /* Sum: '<S265>/Add1' */
  rtb_Add_ho = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S265>/Saturation2' */
  if (rtb_Add_ho > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S265>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ho < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S265>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S265>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ho;
  }

  /* End of Saturate: '<S265>/Saturation2' */

  /* Switch: '<S245>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S256>/Switch' incorporates:
     *  Abs: '<S256>/Abs'
     *  Constant: '<S256>/Constant'
     *  Constant: '<S264>/Constant'
     *  RelationalOperator: '<S264>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_Optimized_Module_Angle = 0.0;
    }

    /* End of Switch: '<S256>/Switch' */
  } else {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S245>/Switch' */

  /* Signum: '<S255>/Sign2' incorporates:
   *  UnitDelay: '<S255>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S255>/Sign1' */
  if (rtIsNaN(rtb_Optimized_Module_Angle)) {
    rtb_Product_i5 = (rtNaN);
  } else if (rtb_Optimized_Module_Angle < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (rtb_Optimized_Module_Angle > 0.0);
  }

  /* Product: '<S255>/Product1' incorporates:
   *  Signum: '<S255>/Sign1'
   *  Signum: '<S255>/Sign2'
   */
  rtb_Add_ie *= rtb_Product_i5;
  if (rtIsNaN(rtb_Add_ie)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_ie, 256.0);
  }

  /* Switch: '<S255>/Switch' incorporates:
   *  Constant: '<S255>/Constant'
   *  Constant: '<S257>/Constant'
   *  Constant: '<S258>/Constant'
   *  Logic: '<S255>/or'
   *  Product: '<S255>/Product1'
   *  RelationalOperator: '<S257>/Compare'
   *  RelationalOperator: '<S258>/Compare'
   *  UnitDelay: '<S255>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_j = rtb_Optimized_Module_Angle;
  } else {
    rtb_Switch2_j = 0.0;
  }

  /* End of Switch: '<S255>/Switch' */

  /* Switch: '<S263>/Init' incorporates:
   *  UnitDelay: '<S263>/FixPt Unit Delay1'
   *  UnitDelay: '<S263>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_j;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S263>/Init' */

  /* RelationalOperator: '<S259>/Compare' incorporates:
   *  Constant: '<S259>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_j == 0.0);

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Constant: '<S260>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j > 0.0);

  /* Abs: '<S255>/Abs' incorporates:
   *  Sum: '<S255>/Subtract'
   *  UnitDelay: '<S255>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_Optimized_Module_Angle);

  /* Switch: '<S255>/Switch5' incorporates:
   *  Constant: '<S255>/Constant1'
   *  Switch: '<S255>/Switch1'
   *  UnaryMinus: '<S255>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S255>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S255>/Constant4'
     *  Constant: '<S255>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S255>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S255>/Constant2'
     *  Constant: '<S255>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S255>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S255>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S255>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S255>/Constant10'
     *  Constant: '<S255>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S255>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S255>/Constant7'
     *  Constant: '<S255>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S255>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S255>/Lookup Table Dynamic1'
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

    /* Switch: '<S255>/Switch3' incorporates:
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S255>/Constant3'
     *  UnaryMinus: '<S255>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_ie = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Add_ie = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S255>/Switch3' */
  }

  /* End of Switch: '<S255>/Switch5' */

  /* Product: '<S255>/Product' incorporates:
   *  Switch: '<S255>/Switch1'
   */
  rtb_Switch1_h = rtb_Add_ie * rtb_Product_ku;

  /* Sum: '<S261>/Sum1' */
  rtb_Switch2_j -= rtb_Init_e;

  /* Switch: '<S262>/Switch2' incorporates:
   *  RelationalOperator: '<S262>/LowerRelop1'
   */
  if (!(rtb_Switch2_j > rtb_Switch1_h)) {
    /* Switch: '<S255>/Switch2' incorporates:
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S255>/Constant3'
     *  Switch: '<S255>/Switch4'
     *  UnaryMinus: '<S255>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Add_ie = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S255>/Switch4' incorporates:
       *  Constant: '<S255>/Constant1'
       */
      rtb_Add_ie = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Add_ie = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S255>/Product2' incorporates:
     *  Switch: '<S255>/Switch2'
     */
    rtb_Switch1_h = rtb_Add_ie * rtb_Product_ku;

    /* Switch: '<S262>/Switch' incorporates:
     *  RelationalOperator: '<S262>/UpperRelop'
     */
    if (!(rtb_Switch2_j < rtb_Switch1_h)) {
      rtb_Switch1_h = rtb_Switch2_j;
    }

    /* End of Switch: '<S262>/Switch' */
  }

  /* End of Switch: '<S262>/Switch2' */

  /* Sum: '<S261>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_h + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S158>/Initialize Function' */
  /* Sum: '<S244>/Add' incorporates:
   *  Constant: '<S244>/Constant'
   *  Constant: '<S244>/Constant4'
   *  Constant: '<S244>/Constant5'
   *  Trigonometry: '<S244>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S158>/Initialize Function' */

  /* Fcn: '<S278>/r->x' incorporates:
   *  Fcn: '<S283>/r->x'
   *  Fcn: '<S288>/r->x'
   *  Fcn: '<S293>/r->x'
   */
  rtb_Switch1_h = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S272>/Add' incorporates:
   *  Fcn: '<S278>/r->x'
   *  Fcn: '<S279>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch1_h;

  /* Fcn: '<S278>/theta->y' incorporates:
   *  Fcn: '<S283>/theta->y'
   *  Fcn: '<S288>/theta->y'
   *  Fcn: '<S293>/theta->y'
   */
  rtb_Switch2_j = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S272>/Add' incorporates:
   *  Fcn: '<S278>/theta->y'
   *  Fcn: '<S279>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_j;

  /* Sum: '<S273>/Add' incorporates:
   *  Fcn: '<S284>/r->x'
   *  Fcn: '<S284>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_h;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_j;

  /* Sum: '<S274>/Add' incorporates:
   *  Fcn: '<S289>/r->x'
   *  Fcn: '<S289>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_h;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_j;

  /* Sum: '<S275>/Add' incorporates:
   *  Fcn: '<S294>/r->x'
   *  Fcn: '<S294>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_h;
  rtb_Switch1_h = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_j;

  /* Fcn: '<S292>/x->r' */
  rtb_Init_e = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Switch1_h);

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Constant: '<S295>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Init_e == 0.0);

  /* Switch: '<S291>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S291>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S291>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Init_e;
  }

  /* End of Switch: '<S291>/Switch1' */

  /* Fcn: '<S277>/x->r' */
  rtb_Init_e = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S280>/Compare' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init_e == 0.0);

  /* Switch: '<S276>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S276>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S276>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Init_e;
  }

  /* End of Switch: '<S276>/Switch1' */

  /* Fcn: '<S282>/x->r' */
  rtb_Switch2_do = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S285>/Compare' incorporates:
   *  Constant: '<S285>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_do == 0.0);

  /* Switch: '<S281>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S281>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_do;
  }

  /* End of Switch: '<S281>/Switch1' */

  /* Fcn: '<S287>/x->r' */
  rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_Switch_b1 = (rtb_Optimized_Module_Angle == 0.0);

  /* Switch: '<S286>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S286>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S286>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_Optimized_Module_Angle;
  }

  /* End of Switch: '<S286>/Switch1' */

  /* Product: '<S271>/Divide' incorporates:
   *  Abs: '<S271>/Abs'
   *  Abs: '<S271>/Abs1'
   *  Abs: '<S271>/Abs2'
   *  Abs: '<S271>/Abs3'
   *  Constant: '<S271>/Constant'
   *  MinMax: '<S271>/Max'
   */
  rtb_Init_e = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S271>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Init_e;

  /* Switch: '<S291>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S291>/Switch' incorporates:
     *  Fcn: '<S292>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Switch1_h,
      rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S291>/Switch' */

  /* Trigonometry: '<S235>/Cos4' incorporates:
   *  Switch: '<S224>/Angle_Switch'
   *  Trigonometry: '<S234>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S235>/Sin5' incorporates:
   *  UnaryMinus: '<S233>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S235>/Sin4' incorporates:
   *  Switch: '<S224>/Angle_Switch'
   *  Trigonometry: '<S234>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S235>/Cos5' incorporates:
   *  UnaryMinus: '<S233>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S235>/Subtract1' incorporates:
   *  Product: '<S235>/Product2'
   *  Product: '<S235>/Product3'
   *  Trigonometry: '<S235>/Cos4'
   *  Trigonometry: '<S235>/Sin4'
   */
  rtb_Switch1_h = (rtb_MatrixConcatenate_b_idx_0 * rtb_uDLookupTable_l) +
    (rtb_MatrixConcatenate_b_idx_1 * rtb_Optimized_Module_Angle);

  /* Sum: '<S235>/Subtract' incorporates:
   *  Product: '<S235>/Product'
   *  Product: '<S235>/Product1'
   *  Trigonometry: '<S235>/Cos4'
   *  Trigonometry: '<S235>/Sin4'
   */
  rtb_Switch2_j = (rtb_MatrixConcatenate_b_idx_0 * rtb_Optimized_Module_Angle) -
    (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l);

  /* Math: '<S235>/Hypot' */
  rtb_Product_ku = rt_hypotd_snf(rtb_Switch2_j, rtb_Switch1_h);

  /* Switch: '<S235>/Switch' incorporates:
   *  Constant: '<S235>/Constant'
   *  Constant: '<S235>/Constant1'
   *  Constant: '<S236>/Constant'
   *  Product: '<S235>/Divide'
   *  Product: '<S235>/Divide1'
   *  RelationalOperator: '<S236>/Compare'
   *  Switch: '<S235>/Switch1'
   */
  if (rtb_Product_ku > 1.0E-6) {
    rtb_Switch2_do = rtb_Switch1_h / rtb_Product_ku;
    rtb_Optimized_Module_Angle = rtb_Switch2_j / rtb_Product_ku;
  } else {
    rtb_Switch2_do = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S235>/Switch' */

  /* Switch: '<S224>/Speed_Switch' incorporates:
   *  Abs: '<S224>/Abs'
   *  Constant: '<S232>/Constant'
   *  RelationalOperator: '<S232>/Compare'
   *  Switch: '<S224>/Angle_Switch'
   *  Trigonometry: '<S234>/Atan1'
   *  Trigonometry: '<S235>/Atan1'
   *  UnaryMinus: '<S224>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_do, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    rtb_Add_ie = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S234>/Subtract1' incorporates:
     *  Product: '<S234>/Product2'
     *  Product: '<S234>/Product3'
     *  UnaryMinus: '<S224>/Unary Minus'
     */
    rtb_Switch1_h = (rtb_MatrixConcatenate_b_idx_0 *
                     Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S234>/Subtract' incorporates:
     *  Product: '<S234>/Product'
     *  Product: '<S234>/Product1'
     */
    rtb_Product_ku = (rtb_MatrixConcatenate_b_idx_0 *
                      Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S234>/Hypot' */
    rtb_Switch2_j = rt_hypotd_snf(rtb_Product_ku, rtb_Switch1_h);

    /* Switch: '<S234>/Switch1' incorporates:
     *  Constant: '<S234>/Constant'
     *  Constant: '<S234>/Constant1'
     *  Constant: '<S237>/Constant'
     *  Product: '<S234>/Divide'
     *  Product: '<S234>/Divide1'
     *  RelationalOperator: '<S237>/Compare'
     *  Switch: '<S234>/Switch'
     */
    if (rtb_Switch2_j > 1.0E-6) {
      rtb_Product_ku /= rtb_Switch2_j;
      rtb_Switch1_h /= rtb_Switch2_j;
    } else {
      rtb_Product_ku = 1.0;
      rtb_Switch1_h = 0.0;
    }

    /* End of Switch: '<S234>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Switch1_h, rtb_Product_ku);
  } else {
    rtb_Add_ie = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S227>/Product2' incorporates:
   *  Constant: '<S227>/Constant'
   *  Switch: '<S224>/Speed_Switch'
   */
  rtb_Switch2_do = rtb_Add_ie * 1530.1401357649195;

  /* Signum: '<S222>/Sign' */
  if (rtIsNaN(rtb_Switch2_do)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Switch2_do < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Switch2_do > 0.0);
  }

  /* Signum: '<S222>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S225>/Add' incorporates:
   *  Sum: '<S226>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S157>/Product' incorporates:
   *  Abs: '<S222>/Abs'
   *  Abs: '<S225>/Abs'
   *  Constant: '<S228>/Constant'
   *  Constant: '<S238>/Constant3'
   *  Constant: '<S238>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S222>/OR'
   *  Lookup_n-D: '<S225>/1-D Lookup Table'
   *  Math: '<S238>/Math Function'
   *  RelationalOperator: '<S222>/Equal1'
   *  RelationalOperator: '<S228>/Compare'
   *  Signum: '<S222>/Sign'
   *  Signum: '<S222>/Sign1'
   *  Sum: '<S225>/Add'
   *  Sum: '<S238>/Add1'
   *  Sum: '<S238>/Add2'
   */
  rtb_Switch2_do = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_do) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
                  Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S223>/Gain' */
  rtb_Product_ku = Drive_Motor_Control_FF * rtb_Switch2_do;

  /* Sum: '<S223>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_do -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S230>/Sum1' incorporates:
   *  Constant: '<S223>/Constant2'
   *  Product: '<S230>/Product'
   *  Sum: '<S230>/Sum'
   *  UnitDelay: '<S230>/Unit Delay1'
   */
  rtb_Switch1_h = ((rtb_Switch2_do - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S223>/Product' incorporates:
   *  Constant: '<S223>/Constant3'
   */
  rtb_Switch2_j = rtb_Switch1_h * Drive_Motor_Control_D;

  /* Sum: '<S229>/Diff' incorporates:
   *  UnitDelay: '<S229>/UD'
   *
   * Block description for '<S229>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S229>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Switch2_j - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S223>/Saturation' */
  if (rtb_Add_ho > Drive_Motor_Control_D_UL) {
    rtb_Add_ho = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Drive_Motor_Control_D_LL) {
    rtb_Add_ho = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S223>/Add' incorporates:
   *  Gain: '<S223>/Gain1'
   *  Saturate: '<S223>/Saturation'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((Drive_Motor_Control_P * rtb_Switch2_do) +
    rtb_Product_ku) + rtb_Add_ho;

  /* Sum: '<S223>/Subtract' incorporates:
   *  Constant: '<S223>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S223>/Sum2' incorporates:
   *  Gain: '<S223>/Gain2'
   *  UnitDelay: '<S223>/Unit Delay'
   */
  rtb_Product_ku = (Drive_Motor_Control_I * rtb_Switch2_do) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S231>/Switch2' incorporates:
   *  Constant: '<S223>/Constant'
   *  RelationalOperator: '<S231>/LowerRelop1'
   *  Sum: '<S223>/Subtract'
   */
  if (!(rtb_Product_ku > (1.0 - rtb_Rotationmatrixfromlocalto_0))) {
    /* Switch: '<S231>/Switch' incorporates:
     *  Constant: '<S223>/Constant1'
     *  RelationalOperator: '<S231>/UpperRelop'
     *  Sum: '<S223>/Subtract1'
     */
    if (rtb_Product_ku < (-1.0 - rtb_Rotationmatrixfromlocalto_0)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_Optimized_Module_Angle = rtb_Product_ku;
    }

    /* End of Switch: '<S231>/Switch' */
  }

  /* End of Switch: '<S231>/Switch2' */

  /* Saturate: '<S223>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Product_ku = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Product_ku = Drive_Motor_Control_I_LL;
  } else {
    rtb_Product_ku = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S223>/Saturation1' */

  /* Sum: '<S223>/Add1' */
  rtb_Add_ho = rtb_Rotationmatrixfromlocalto_0 + rtb_Product_ku;

  /* Saturate: '<S223>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S223>/Saturation2' */

  /* Sum: '<S239>/Add1' incorporates:
   *  Constant: '<S239>/Constant3'
   *  Constant: '<S239>/Constant4'
   *  Math: '<S239>/Math Function'
   *  Sum: '<S239>/Add2'
   */
  rtb_Switch2_do = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S241>/Sum1' incorporates:
   *  Constant: '<S226>/Constant2'
   *  Product: '<S241>/Product'
   *  Sum: '<S241>/Sum'
   *  UnitDelay: '<S241>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Switch2_do -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S226>/Product' incorporates:
   *  Constant: '<S226>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Rotationmatrixfromlocalto_0 * Steering_Motor_Control_D;

  /* Sum: '<S240>/Diff' incorporates:
   *  UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S226>/Saturation' */
  if (rtb_Add_ho > Steering_Motor_Control_D_UL) {
    rtb_Add_ho = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Steering_Motor_Control_D_LL) {
    rtb_Add_ho = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S226>/Add' incorporates:
   *  Gain: '<S226>/Gain1'
   *  Saturate: '<S226>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_do) + rtb_Add_ho;

  /* Sum: '<S226>/Subtract' incorporates:
   *  Constant: '<S226>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_pw;

  /* Sum: '<S226>/Sum2' incorporates:
   *  Gain: '<S226>/Gain2'
   *  UnitDelay: '<S226>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_do) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S242>/Switch2' incorporates:
   *  Constant: '<S226>/Constant'
   *  RelationalOperator: '<S242>/LowerRelop1'
   *  Sum: '<S226>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S226>/Constant1'
     *  RelationalOperator: '<S242>/UpperRelop'
     *  Sum: '<S226>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_pw;
    } else {
      rtb_Optimized_Module_Angle = rtb_Sum2_fc;
    }

    /* End of Switch: '<S242>/Switch' */
  }

  /* End of Switch: '<S242>/Switch2' */

  /* Saturate: '<S226>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S226>/Saturation1' */

  /* Sum: '<S226>/Add1' */
  rtb_Add_ho = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S226>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S226>/Saturation2' */

  /* Product: '<S271>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Init_e;

  /* Switch: '<S276>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S276>/Switch' incorporates:
     *  Fcn: '<S277>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S276>/Switch' */

  /* Trigonometry: '<S172>/Cos4' incorporates:
   *  Switch: '<S161>/Angle_Switch'
   *  Trigonometry: '<S171>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S172>/Sin5' incorporates:
   *  UnaryMinus: '<S170>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S172>/Sin4' incorporates:
   *  Switch: '<S161>/Angle_Switch'
   *  Trigonometry: '<S171>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S172>/Cos5' incorporates:
   *  UnaryMinus: '<S170>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S172>/Subtract1' incorporates:
   *  Product: '<S172>/Product2'
   *  Product: '<S172>/Product3'
   *  Trigonometry: '<S172>/Cos4'
   *  Trigonometry: '<S172>/Sin4'
   */
  rtb_Switch2_do = (rtb_MatrixConcatenate_b_idx_0 * rtb_uDLookupTable_l) +
    (rtb_MatrixConcatenate_b_idx_1 * rtb_Optimized_Module_Angle);

  /* Sum: '<S172>/Subtract' incorporates:
   *  Product: '<S172>/Product'
   *  Product: '<S172>/Product1'
   *  Trigonometry: '<S172>/Cos4'
   *  Trigonometry: '<S172>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_0 * rtb_Optimized_Module_Angle) -
    (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l);

  /* Math: '<S172>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Add_pw, rtb_Switch2_do);

  /* Switch: '<S172>/Switch' incorporates:
   *  Constant: '<S172>/Constant'
   *  Constant: '<S172>/Constant1'
   *  Constant: '<S173>/Constant'
   *  Product: '<S172>/Divide'
   *  Product: '<S172>/Divide1'
   *  RelationalOperator: '<S173>/Compare'
   *  Switch: '<S172>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_do /= rtb_Hypot_g5;
    rtb_Optimized_Module_Angle = rtb_Add_pw / rtb_Hypot_g5;
  } else {
    rtb_Switch2_do = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S172>/Switch' */

  /* Switch: '<S161>/Speed_Switch' incorporates:
   *  Abs: '<S161>/Abs'
   *  Constant: '<S169>/Constant'
   *  RelationalOperator: '<S169>/Compare'
   *  Switch: '<S161>/Angle_Switch'
   *  Trigonometry: '<S171>/Atan1'
   *  Trigonometry: '<S172>/Atan1'
   *  UnaryMinus: '<S161>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_do, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    rtb_Add_ie = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S171>/Subtract1' incorporates:
     *  Product: '<S171>/Product2'
     *  Product: '<S171>/Product3'
     *  UnaryMinus: '<S161>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S171>/Subtract' incorporates:
     *  Product: '<S171>/Product'
     *  Product: '<S171>/Product1'
     */
    rtb_Subtract_i = (rtb_MatrixConcatenate_b_idx_0 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S171>/Hypot' */
    rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract_i, rtb_Add_pw);

    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S171>/Constant'
     *  Constant: '<S171>/Constant1'
     *  Constant: '<S174>/Constant'
     *  Product: '<S171>/Divide'
     *  Product: '<S171>/Divide1'
     *  RelationalOperator: '<S174>/Compare'
     *  Switch: '<S171>/Switch'
     */
    if (rtb_Hypot_g5 > 1.0E-6) {
      rtb_Subtract_i /= rtb_Hypot_g5;
      rtb_Add_pw /= rtb_Hypot_g5;
    } else {
      rtb_Subtract_i = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S171>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Subtract_i);
  } else {
    rtb_Add_ie = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S164>/Product2' incorporates:
   *  Constant: '<S164>/Constant'
   *  Switch: '<S161>/Speed_Switch'
   */
  rtb_Switch2_do = rtb_Add_ie * 1530.1401357649195;

  /* Signum: '<S159>/Sign' */
  if (rtIsNaN(rtb_Switch2_do)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Switch2_do < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Switch2_do > 0.0);
  }

  /* Signum: '<S159>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S162>/Add' incorporates:
   *  Sum: '<S163>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S154>/Product' incorporates:
   *  Abs: '<S159>/Abs'
   *  Abs: '<S162>/Abs'
   *  Constant: '<S165>/Constant'
   *  Constant: '<S175>/Constant3'
   *  Constant: '<S175>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S159>/OR'
   *  Lookup_n-D: '<S162>/1-D Lookup Table'
   *  Math: '<S175>/Math Function'
   *  RelationalOperator: '<S159>/Equal1'
   *  RelationalOperator: '<S165>/Compare'
   *  Signum: '<S159>/Sign'
   *  Signum: '<S159>/Sign1'
   *  Sum: '<S162>/Add'
   *  Sum: '<S175>/Add1'
   *  Sum: '<S175>/Add2'
   */
  rtb_Switch2_do = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_do) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
                  Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S160>/Gain' */
  rtb_Subtract_i = Drive_Motor_Control_FF * rtb_Switch2_do;

  /* Sum: '<S160>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_do -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S167>/Sum1' incorporates:
   *  Constant: '<S160>/Constant2'
   *  Product: '<S167>/Product'
   *  Sum: '<S167>/Sum'
   *  UnitDelay: '<S167>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_do - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S160>/Product' incorporates:
   *  Constant: '<S160>/Constant3'
   */
  rtb_Hypot_g5 = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S166>/Diff' incorporates:
   *  UnitDelay: '<S166>/UD'
   *
   * Block description for '<S166>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S166>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Hypot_g5 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S160>/Saturation' */
  if (rtb_Add_ho > Drive_Motor_Control_D_UL) {
    rtb_Add_ho = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Drive_Motor_Control_D_LL) {
    rtb_Add_ho = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S160>/Add' incorporates:
   *  Gain: '<S160>/Gain1'
   *  Saturate: '<S160>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_do) + rtb_Subtract_i) +
    rtb_Add_ho;

  /* Sum: '<S160>/Subtract' incorporates:
   *  Constant: '<S160>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_c4;

  /* Sum: '<S160>/Sum2' incorporates:
   *  Gain: '<S160>/Gain2'
   *  UnitDelay: '<S160>/Unit Delay'
   */
  rtb_Switch2_do = (Drive_Motor_Control_I * rtb_Switch2_do) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S168>/Switch2' incorporates:
   *  Constant: '<S160>/Constant'
   *  RelationalOperator: '<S168>/LowerRelop1'
   *  Sum: '<S160>/Subtract'
   */
  if (!(rtb_Switch2_do > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S168>/Switch' incorporates:
     *  Constant: '<S160>/Constant1'
     *  RelationalOperator: '<S168>/UpperRelop'
     *  Sum: '<S160>/Subtract1'
     */
    if (rtb_Switch2_do < (-1.0 - rtb_Add_c4)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_c4;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_do;
    }

    /* End of Switch: '<S168>/Switch' */
  }

  /* End of Switch: '<S168>/Switch2' */

  /* Saturate: '<S160>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Subtract_i = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Subtract_i = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_i = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S160>/Saturation1' */

  /* Sum: '<S160>/Add1' */
  rtb_Add_ho = rtb_Add_c4 + rtb_Subtract_i;

  /* Saturate: '<S160>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S160>/Saturation2' */

  /* Sum: '<S176>/Add1' incorporates:
   *  Constant: '<S176>/Constant3'
   *  Constant: '<S176>/Constant4'
   *  Math: '<S176>/Math Function'
   *  Sum: '<S176>/Add2'
   */
  rtb_Switch2_do = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S178>/Sum1' incorporates:
   *  Constant: '<S163>/Constant2'
   *  Product: '<S178>/Product'
   *  Sum: '<S178>/Sum'
   *  UnitDelay: '<S178>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_do - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S163>/Product' incorporates:
   *  Constant: '<S163>/Constant3'
   */
  rtb_Product_i3 = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S177>/Diff' incorporates:
   *  UnitDelay: '<S177>/UD'
   *
   * Block description for '<S177>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S177>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Product_i3 - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S163>/Saturation' */
  if (rtb_Add_ho > Steering_Motor_Control_D_UL) {
    rtb_Add_ho = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Steering_Motor_Control_D_LL) {
    rtb_Add_ho = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S163>/Add' incorporates:
   *  Gain: '<S163>/Gain1'
   *  Saturate: '<S163>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_0 = (Steering_Motor_Control_P * rtb_Switch2_do) +
    rtb_Add_ho;

  /* Sum: '<S163>/Subtract' incorporates:
   *  Constant: '<S163>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_MatrixConcatenate_b_idx_0;

  /* Sum: '<S163>/Sum2' incorporates:
   *  Gain: '<S163>/Gain2'
   *  UnitDelay: '<S163>/Unit Delay'
   */
  rtb_Switch2_do = (Steering_Motor_Control_I * rtb_Switch2_do) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S179>/Switch2' incorporates:
   *  Constant: '<S163>/Constant'
   *  RelationalOperator: '<S179>/LowerRelop1'
   *  Sum: '<S163>/Subtract'
   */
  if (!(rtb_Switch2_do > (1.0 - rtb_MatrixConcatenate_b_idx_0))) {
    /* Switch: '<S179>/Switch' incorporates:
     *  Constant: '<S163>/Constant1'
     *  RelationalOperator: '<S179>/UpperRelop'
     *  Sum: '<S163>/Subtract1'
     */
    if (rtb_Switch2_do < (-1.0 - rtb_MatrixConcatenate_b_idx_0)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_do;
    }

    /* End of Switch: '<S179>/Switch' */
  }

  /* End of Switch: '<S179>/Switch2' */

  /* Saturate: '<S163>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_jk = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_jk = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_jk = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S163>/Saturation1' */

  /* Sum: '<S163>/Add1' */
  rtb_Add_ho = rtb_MatrixConcatenate_b_idx_0 + rtb_Subtract1_jk;

  /* Saturate: '<S163>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S163>/Saturation2' */

  /* Product: '<S271>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Init_e;

  /* Switch: '<S281>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S281>/Switch' incorporates:
     *  Fcn: '<S282>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S281>/Switch' */

  /* Trigonometry: '<S193>/Cos4' incorporates:
   *  Switch: '<S182>/Angle_Switch'
   *  Trigonometry: '<S192>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S193>/Sin5' incorporates:
   *  UnaryMinus: '<S191>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S193>/Sin4' incorporates:
   *  Switch: '<S182>/Angle_Switch'
   *  Trigonometry: '<S192>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S193>/Cos5' incorporates:
   *  UnaryMinus: '<S191>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S193>/Subtract1' incorporates:
   *  Product: '<S193>/Product2'
   *  Product: '<S193>/Product3'
   *  Trigonometry: '<S193>/Cos4'
   *  Trigonometry: '<S193>/Sin4'
   */
  rtb_Switch2_do = (rtb_MatrixConcatenate_b_idx_0 * rtb_uDLookupTable_l) +
    (rtb_MatrixConcatenate_b_idx_1 * rtb_Optimized_Module_Angle);

  /* Sum: '<S193>/Subtract' incorporates:
   *  Product: '<S193>/Product'
   *  Product: '<S193>/Product1'
   *  Trigonometry: '<S193>/Cos4'
   *  Trigonometry: '<S193>/Sin4'
   */
  rtb_Subtract_is = (rtb_MatrixConcatenate_b_idx_0 * rtb_Optimized_Module_Angle)
    - (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l);

  /* Math: '<S193>/Hypot' */
  rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_is, rtb_Switch2_do);

  /* Switch: '<S193>/Switch' incorporates:
   *  Constant: '<S193>/Constant'
   *  Constant: '<S193>/Constant1'
   *  Constant: '<S194>/Constant'
   *  Product: '<S193>/Divide'
   *  Product: '<S193>/Divide1'
   *  RelationalOperator: '<S194>/Compare'
   *  Switch: '<S193>/Switch1'
   */
  if (rtb_uDLookupTable_l > 1.0E-6) {
    rtb_Switch2_do /= rtb_uDLookupTable_l;
    rtb_Optimized_Module_Angle = rtb_Subtract_is / rtb_uDLookupTable_l;
  } else {
    rtb_Switch2_do = 0.0;
    rtb_Optimized_Module_Angle = 1.0;
  }

  /* End of Switch: '<S193>/Switch' */

  /* Switch: '<S182>/Speed_Switch' incorporates:
   *  Abs: '<S182>/Abs'
   *  Constant: '<S190>/Constant'
   *  RelationalOperator: '<S190>/Compare'
   *  Switch: '<S182>/Angle_Switch'
   *  Trigonometry: '<S192>/Atan1'
   *  Trigonometry: '<S193>/Atan1'
   *  UnaryMinus: '<S182>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_do, rtb_Optimized_Module_Angle)) >
      1.5707963267948966) {
    rtb_Add_ie = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S192>/Subtract1' incorporates:
     *  Product: '<S192>/Product2'
     *  Product: '<S192>/Product3'
     *  UnaryMinus: '<S182>/Unary Minus'
     */
    rtb_Subtract_is = (rtb_MatrixConcatenate_b_idx_0 *
                       Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S192>/Subtract' incorporates:
     *  Product: '<S192>/Product'
     *  Product: '<S192>/Product1'
     */
    rtb_MatrixConcatenate_b_idx_1 = (rtb_MatrixConcatenate_b_idx_0 *
      Code_Gen_Model_ConstB.Cos5_g) - (rtb_MatrixConcatenate_b_idx_1 *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S192>/Hypot' */
    rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract_is);

    /* Switch: '<S192>/Switch1' incorporates:
     *  Constant: '<S192>/Constant'
     *  Constant: '<S192>/Constant1'
     *  Constant: '<S195>/Constant'
     *  Product: '<S192>/Divide'
     *  Product: '<S192>/Divide1'
     *  RelationalOperator: '<S195>/Compare'
     *  Switch: '<S192>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
      rtb_MatrixConcatenate_b_idx_1 /= rtb_MatrixConcatenate_b_idx_0;
      rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract_is /
        rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_MatrixConcatenate_b_idx_1 = 1.0;
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S192>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0,
      rtb_MatrixConcatenate_b_idx_1);
  } else {
    rtb_Add_ie = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S185>/Product2' incorporates:
   *  Constant: '<S185>/Constant'
   *  Switch: '<S182>/Speed_Switch'
   */
  rtb_Switch2_do = rtb_Add_ie * 1530.1401357649195;

  /* Signum: '<S180>/Sign' */
  if (rtIsNaN(rtb_Switch2_do)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Switch2_do < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Switch2_do > 0.0);
  }

  /* Signum: '<S180>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S183>/Add' incorporates:
   *  Sum: '<S184>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S155>/Product' incorporates:
   *  Abs: '<S180>/Abs'
   *  Abs: '<S183>/Abs'
   *  Constant: '<S186>/Constant'
   *  Constant: '<S196>/Constant3'
   *  Constant: '<S196>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S180>/OR'
   *  Lookup_n-D: '<S183>/1-D Lookup Table'
   *  Math: '<S196>/Math Function'
   *  RelationalOperator: '<S180>/Equal1'
   *  RelationalOperator: '<S186>/Compare'
   *  Signum: '<S180>/Sign'
   *  Signum: '<S180>/Sign1'
   *  Sum: '<S183>/Add'
   *  Sum: '<S196>/Add1'
   *  Sum: '<S196>/Add2'
   */
  rtb_Switch2_do = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_do) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
                  Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S181>/Gain' */
  rtb_Subtract_is = Drive_Motor_Control_FF * rtb_Switch2_do;

  /* Sum: '<S181>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_do -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S188>/Sum1' incorporates:
   *  Constant: '<S181>/Constant2'
   *  Product: '<S188>/Product'
   *  Sum: '<S188>/Sum'
   *  UnitDelay: '<S188>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_do -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S181>/Product' incorporates:
   *  Constant: '<S181>/Constant3'
   */
  rtb_MatrixConcatenate_b_idx_1 = rtb_MatrixConcatenate_b_idx_0 *
    Drive_Motor_Control_D;

  /* Sum: '<S187>/Diff' incorporates:
   *  UnitDelay: '<S187>/UD'
   *
   * Block description for '<S187>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S187>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_MatrixConcatenate_b_idx_1 - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S181>/Saturation' */
  if (rtb_Add_ho > Drive_Motor_Control_D_UL) {
    rtb_Add_ho = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Drive_Motor_Control_D_LL) {
    rtb_Add_ho = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S181>/Add' incorporates:
   *  Gain: '<S181>/Gain1'
   *  Saturate: '<S181>/Saturation'
   */
  rtb_Add_pd = ((Drive_Motor_Control_P * rtb_Switch2_do) + rtb_Subtract_is) +
    rtb_Add_ho;

  /* Sum: '<S181>/Subtract' incorporates:
   *  Constant: '<S181>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_pd;

  /* Sum: '<S181>/Sum2' incorporates:
   *  Gain: '<S181>/Gain2'
   *  UnitDelay: '<S181>/Unit Delay'
   */
  rtb_Switch2_do = (Drive_Motor_Control_I * rtb_Switch2_do) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S189>/Switch2' incorporates:
   *  Constant: '<S181>/Constant'
   *  RelationalOperator: '<S189>/LowerRelop1'
   *  Sum: '<S181>/Subtract'
   */
  if (!(rtb_Switch2_do > (1.0 - rtb_Add_pd))) {
    /* Switch: '<S189>/Switch' incorporates:
     *  Constant: '<S181>/Constant1'
     *  RelationalOperator: '<S189>/UpperRelop'
     *  Sum: '<S181>/Subtract1'
     */
    if (rtb_Switch2_do < (-1.0 - rtb_Add_pd)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_pd;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_do;
    }

    /* End of Switch: '<S189>/Switch' */
  }

  /* End of Switch: '<S189>/Switch2' */

  /* Saturate: '<S181>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Drive_Motor_Control_I_UL) {
    rtb_Subtract_is = Drive_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Drive_Motor_Control_I_LL) {
    rtb_Subtract_is = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_is = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S181>/Saturation1' */

  /* Sum: '<S181>/Add1' */
  rtb_Add_ho = rtb_Add_pd + rtb_Subtract_is;

  /* Saturate: '<S181>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S181>/Saturation2' */

  /* Sum: '<S197>/Add1' incorporates:
   *  Constant: '<S197>/Constant3'
   *  Constant: '<S197>/Constant4'
   *  Math: '<S197>/Math Function'
   *  Sum: '<S197>/Add2'
   */
  rtb_Switch2_do = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S199>/Sum1' incorporates:
   *  Constant: '<S184>/Constant2'
   *  Product: '<S199>/Product'
   *  Sum: '<S199>/Sum'
   *  UnitDelay: '<S199>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_do - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S184>/Product' incorporates:
   *  Constant: '<S184>/Constant3'
   */
  rtb_Add_pd = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S198>/Diff' incorporates:
   *  UnitDelay: '<S198>/UD'
   *
   * Block description for '<S198>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S198>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Add_pd - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S184>/Saturation' */
  if (rtb_Add_ho > Steering_Motor_Control_D_UL) {
    rtb_Add_ho = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Steering_Motor_Control_D_LL) {
    rtb_Add_ho = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S184>/Add' incorporates:
   *  Gain: '<S184>/Gain1'
   *  Saturate: '<S184>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_do) + rtb_Add_ho;

  /* Sum: '<S184>/Subtract' incorporates:
   *  Constant: '<S184>/Constant'
   */
  rtb_Optimized_Module_Angle = 1.0 - rtb_Add_ie;

  /* Sum: '<S184>/Sum2' incorporates:
   *  Gain: '<S184>/Gain2'
   *  UnitDelay: '<S184>/Unit Delay'
   */
  rtb_Switch2_do = (Steering_Motor_Control_I * rtb_Switch2_do) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S200>/Switch2' incorporates:
   *  Constant: '<S184>/Constant'
   *  RelationalOperator: '<S200>/LowerRelop1'
   *  Sum: '<S184>/Subtract'
   */
  if (!(rtb_Switch2_do > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S200>/Switch' incorporates:
     *  Constant: '<S184>/Constant1'
     *  RelationalOperator: '<S200>/UpperRelop'
     *  Sum: '<S184>/Subtract1'
     */
    if (rtb_Switch2_do < (-1.0 - rtb_Add_ie)) {
      rtb_Optimized_Module_Angle = -1.0 - rtb_Add_ie;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_do;
    }

    /* End of Switch: '<S200>/Switch' */
  }

  /* End of Switch: '<S200>/Switch2' */

  /* Saturate: '<S184>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_kh = Steering_Motor_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_kh = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_kh = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S184>/Saturation1' */

  /* Sum: '<S184>/Add1' */
  rtb_Add_ho = rtb_Add_ie + rtb_Subtract1_kh;

  /* Saturate: '<S184>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S184>/Saturation2' */

  /* Product: '<S271>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Init_e;

  /* Switch: '<S286>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S286>/Switch' incorporates:
     *  Fcn: '<S287>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S286>/Switch' */

  /* Trigonometry: '<S214>/Cos4' incorporates:
   *  Switch: '<S203>/Angle_Switch'
   *  Trigonometry: '<S213>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S214>/Sin5' incorporates:
   *  UnaryMinus: '<S212>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S214>/Sin4' incorporates:
   *  Switch: '<S203>/Angle_Switch'
   *  Trigonometry: '<S213>/Sin4'
   */
  rtb_Product_i5 = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S214>/Cos5' incorporates:
   *  UnaryMinus: '<S212>/Unary Minus'
   */
  rtb_Switch2_do = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S214>/Subtract1' incorporates:
   *  Product: '<S214>/Product2'
   *  Product: '<S214>/Product3'
   *  Trigonometry: '<S214>/Cos4'
   *  Trigonometry: '<S214>/Sin4'
   */
  rtb_Init_e = (rtb_Add_ie * rtb_Optimized_Module_Angle) + (rtb_Product_i5 *
    rtb_Switch2_do);

  /* Sum: '<S214>/Subtract' incorporates:
   *  Product: '<S214>/Product'
   *  Product: '<S214>/Product1'
   *  Trigonometry: '<S214>/Cos4'
   *  Trigonometry: '<S214>/Sin4'
   */
  rtb_Switch2_do = (rtb_Add_ie * rtb_Switch2_do) - (rtb_Product_i5 *
    rtb_Optimized_Module_Angle);

  /* Math: '<S214>/Hypot' */
  rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Switch2_do, rtb_Init_e);

  /* Switch: '<S214>/Switch' incorporates:
   *  Constant: '<S214>/Constant'
   *  Constant: '<S214>/Constant1'
   *  Constant: '<S215>/Constant'
   *  Product: '<S214>/Divide'
   *  Product: '<S214>/Divide1'
   *  RelationalOperator: '<S215>/Compare'
   *  Switch: '<S214>/Switch1'
   */
  if (rtb_Optimized_Module_Angle > 1.0E-6) {
    rtb_Init_e /= rtb_Optimized_Module_Angle;
    rtb_Switch2_do /= rtb_Optimized_Module_Angle;
  } else {
    rtb_Init_e = 0.0;
    rtb_Switch2_do = 1.0;
  }

  /* End of Switch: '<S214>/Switch' */

  /* Switch: '<S203>/Speed_Switch' incorporates:
   *  Abs: '<S203>/Abs'
   *  Constant: '<S211>/Constant'
   *  RelationalOperator: '<S211>/Compare'
   *  Switch: '<S203>/Angle_Switch'
   *  Trigonometry: '<S213>/Atan1'
   *  Trigonometry: '<S214>/Atan1'
   *  UnaryMinus: '<S203>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Init_e, rtb_Switch2_do)) > 1.5707963267948966) {
    rtb_Init_e = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S213>/Subtract1' incorporates:
     *  Product: '<S213>/Product2'
     *  Product: '<S213>/Product3'
     *  UnaryMinus: '<S203>/Unary Minus'
     */
    rtb_Switch2_do = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_i5 * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S213>/Subtract' incorporates:
     *  Product: '<S213>/Product'
     *  Product: '<S213>/Product1'
     */
    rtb_Add_ie = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Product_i5 *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S213>/Hypot' */
    rtb_Optimized_Module_Angle = rt_hypotd_snf(rtb_Add_ie, rtb_Switch2_do);

    /* Switch: '<S213>/Switch1' incorporates:
     *  Constant: '<S213>/Constant'
     *  Constant: '<S213>/Constant1'
     *  Constant: '<S216>/Constant'
     *  Product: '<S213>/Divide'
     *  Product: '<S213>/Divide1'
     *  RelationalOperator: '<S216>/Compare'
     *  Switch: '<S213>/Switch'
     */
    if (rtb_Optimized_Module_Angle > 1.0E-6) {
      rtb_Add_ie /= rtb_Optimized_Module_Angle;
      rtb_Switch2_do /= rtb_Optimized_Module_Angle;
    } else {
      rtb_Add_ie = 1.0;
      rtb_Switch2_do = 0.0;
    }

    /* End of Switch: '<S213>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Switch2_do, rtb_Add_ie);
  } else {
    rtb_Init_e = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* End of Switch: '<S203>/Speed_Switch' */

  /* Product: '<S206>/Product2' incorporates:
   *  Constant: '<S206>/Constant'
   */
  rtb_Init_e *= 1530.1401357649195;

  /* Signum: '<S201>/Sign' */
  if (rtIsNaN(rtb_Init_e)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_Init_e < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_Init_e > 0.0);
  }

  /* Signum: '<S201>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Product_i5 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Product_i5 = -1.0;
  } else {
    rtb_Product_i5 = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S204>/Add' incorporates:
   *  Sum: '<S205>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S156>/Product' incorporates:
   *  Abs: '<S201>/Abs'
   *  Abs: '<S204>/Abs'
   *  Constant: '<S207>/Constant'
   *  Constant: '<S217>/Constant3'
   *  Constant: '<S217>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S201>/OR'
   *  Lookup_n-D: '<S204>/1-D Lookup Table'
   *  Math: '<S217>/Math Function'
   *  RelationalOperator: '<S201>/Equal1'
   *  RelationalOperator: '<S207>/Compare'
   *  Signum: '<S201>/Sign'
   *  Signum: '<S201>/Sign1'
   *  Sum: '<S204>/Add'
   *  Sum: '<S217>/Add1'
   *  Sum: '<S217>/Add2'
   */
  rtb_Init_e = (((real_T)((rtb_Add_ie == rtb_Product_i5) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Init_e) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S202>/Gain' */
  rtb_Switch2_do = Drive_Motor_Control_FF * rtb_Init_e;

  /* Sum: '<S202>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Init_e -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S209>/Sum1' incorporates:
   *  Constant: '<S202>/Constant2'
   *  Product: '<S209>/Product'
   *  Sum: '<S209>/Sum'
   *  UnitDelay: '<S209>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Init_e - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S202>/Product' incorporates:
   *  Constant: '<S202>/Constant3'
   */
  rtb_Product_i5 = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S208>/Diff' incorporates:
   *  UnitDelay: '<S208>/UD'
   *
   * Block description for '<S208>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S208>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Product_i5 - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S202>/Saturation' */
  if (rtb_Add_ho > Drive_Motor_Control_D_UL) {
    rtb_Add_ho = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Drive_Motor_Control_D_LL) {
    rtb_Add_ho = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S202>/Add' incorporates:
   *  Gain: '<S202>/Gain1'
   *  Saturate: '<S202>/Saturation'
   */
  rtb_Add_nh = ((Drive_Motor_Control_P * rtb_Init_e) + rtb_Switch2_do) +
    rtb_Add_ho;

  /* Sum: '<S202>/Subtract' incorporates:
   *  Constant: '<S202>/Constant'
   */
  rtb_Switch2_do = 1.0 - rtb_Add_nh;

  /* Sum: '<S202>/Sum2' incorporates:
   *  Gain: '<S202>/Gain2'
   *  UnitDelay: '<S202>/Unit Delay'
   */
  rtb_Init_e = (Drive_Motor_Control_I * rtb_Init_e) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S210>/Switch2' incorporates:
   *  Constant: '<S202>/Constant'
   *  RelationalOperator: '<S210>/LowerRelop1'
   *  Sum: '<S202>/Subtract'
   */
  if (!(rtb_Init_e > (1.0 - rtb_Add_nh))) {
    /* Sum: '<S202>/Subtract1' incorporates:
     *  Constant: '<S202>/Constant1'
     */
    rtb_Switch2_do = -1.0 - rtb_Add_nh;

    /* Switch: '<S210>/Switch' incorporates:
     *  Constant: '<S202>/Constant1'
     *  RelationalOperator: '<S210>/UpperRelop'
     *  Sum: '<S202>/Subtract1'
     */
    if (!(rtb_Init_e < (-1.0 - rtb_Add_nh))) {
      rtb_Switch2_do = rtb_Init_e;
    }

    /* End of Switch: '<S210>/Switch' */
  }

  /* End of Switch: '<S210>/Switch2' */

  /* Saturate: '<S202>/Saturation1' */
  if (rtb_Switch2_do > Drive_Motor_Control_I_UL) {
    rtb_Integral_h = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_do < Drive_Motor_Control_I_LL) {
    rtb_Integral_h = Drive_Motor_Control_I_LL;
  } else {
    rtb_Integral_h = rtb_Switch2_do;
  }

  /* End of Saturate: '<S202>/Saturation1' */

  /* Sum: '<S202>/Add1' */
  rtb_Add_ho = rtb_Add_nh + rtb_Integral_h;

  /* Saturate: '<S202>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S202>/Saturation2' */

  /* Sum: '<S218>/Add1' incorporates:
   *  Constant: '<S218>/Constant3'
   *  Constant: '<S218>/Constant4'
   *  Math: '<S218>/Math Function'
   *  Sum: '<S218>/Add2'
   */
  rtb_Init_e = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S220>/Sum1' incorporates:
   *  Constant: '<S205>/Constant2'
   *  Product: '<S220>/Product'
   *  Sum: '<S220>/Sum'
   *  UnitDelay: '<S220>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Init_e -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S205>/Product' incorporates:
   *  Constant: '<S205>/Constant3'
   */
  rtb_Add_nh = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S219>/Diff' incorporates:
   *  UnitDelay: '<S219>/UD'
   *
   * Block description for '<S219>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S219>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Add_nh - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S205>/Saturation' */
  if (rtb_Add_ho > Steering_Motor_Control_D_UL) {
    rtb_Add_ho = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ho < Steering_Motor_Control_D_LL) {
    rtb_Add_ho = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S205>/Add' incorporates:
   *  Gain: '<S205>/Gain1'
   *  Saturate: '<S205>/Saturation'
   */
  rtb_Add_ls = (Steering_Motor_Control_P * rtb_Init_e) + rtb_Add_ho;

  /* Sum: '<S205>/Subtract' incorporates:
   *  Constant: '<S205>/Constant'
   */
  rtb_Switch2_do = 1.0 - rtb_Add_ls;

  /* Sum: '<S205>/Sum2' incorporates:
   *  Gain: '<S205>/Gain2'
   *  UnitDelay: '<S205>/Unit Delay'
   */
  rtb_Init_e = (Steering_Motor_Control_I * rtb_Init_e) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S221>/Switch2' incorporates:
   *  Constant: '<S205>/Constant'
   *  RelationalOperator: '<S221>/LowerRelop1'
   *  Sum: '<S205>/Subtract'
   */
  if (!(rtb_Init_e > (1.0 - rtb_Add_ls))) {
    /* Sum: '<S205>/Subtract1' incorporates:
     *  Constant: '<S205>/Constant1'
     */
    rtb_Switch2_do = -1.0 - rtb_Add_ls;

    /* Switch: '<S221>/Switch' incorporates:
     *  Constant: '<S205>/Constant1'
     *  RelationalOperator: '<S221>/UpperRelop'
     *  Sum: '<S205>/Subtract1'
     */
    if (!(rtb_Init_e < (-1.0 - rtb_Add_ls))) {
      rtb_Switch2_do = rtb_Init_e;
    }

    /* End of Switch: '<S221>/Switch' */
  }

  /* End of Switch: '<S221>/Switch2' */

  /* Saturate: '<S205>/Saturation1' */
  if (rtb_Switch2_do > Steering_Motor_Control_I_UL) {
    rtb_Integral_ei = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_do < Steering_Motor_Control_I_LL) {
    rtb_Integral_ei = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_ei = rtb_Switch2_do;
  }

  /* End of Saturate: '<S205>/Saturation1' */

  /* Sum: '<S205>/Add1' */
  rtb_Add_ho = rtb_Add_ls + rtb_Integral_ei;

  /* Saturate: '<S205>/Saturation2' */
  if (rtb_Add_ho > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ho < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_ho;
  }

  /* End of Saturate: '<S205>/Saturation2' */

  /* Gain: '<S87>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S88>/Compare' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S87>/Switch1' incorporates:
   *  UnitDelay: '<S87>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Add_ls = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_ls = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S87>/Switch1' */

  /* Sum: '<S87>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_ls;

  /* Gain: '<S87>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S87>/Switch' incorporates:
   *  UnitDelay: '<S87>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S87>/Switch' */

  /* Sum: '<S87>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

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
    Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_DutyCycle;
    Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
    Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Mode_IN_Extra_Run_Time:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (Code_Gen_Model_DW.timer >= Note_Transfer_Time) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
        Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_DutyCycle;
        Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
      Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_DutyCycle;
      Code_Gen_Model_B.Shooter_Left_Motor_DC = -Shooter_Eject_DC;
      Code_Gen_Model_B.Shooter_Right_Motor_DC = Shooter_Eject_DC;
      if (Code_Gen_Model_DW.timer >= Note_Eject_Time) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Intake:
      Code_Gen_Model_B.Note_State_ID = 1.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_DutyCycle;
      Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
      Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist <= Intake_Note_Detect_Dist) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Shooter_Note_Detect_Dist) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mode_IN_Extra_Run_Time;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case IN_Spin_Up_Shooter_Before_Trans:
      Code_Gen_Model_B.Note_State_ID = 2.1;
      Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_Speed;
      Code_Gen_Model_B.Shooter_Left_Motor_Speed = -Shooter_Desired_Speed;
      Code_Gen_Model_B.Shooter_Right_Motor_Speed = Shooter_Desired_Speed;
      if (Code_Gen_Model_DW.timer >= Note_Shooter_Spin_Up_Time) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Cod_IN_Note_Transfer_to_Shooter;
        Code_Gen_Model_B.Note_State_ID = 2.2;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_Model_B.Note_State_ID = 0.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
      Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_DutyCycle;
      Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
      Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
      if ((TEST_Request_Note_Transfer != 0.0) &&
          (Code_Gen_Model_U.Intake_TOF_Dist <= Intake_Note_Detect_Dist)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
        Code_Gen_Model_B.Note_State_ID = 2.1;
        Code_Gen_Model_B.Shooter_Control_Type = Code_Gen_Model_Speed;
        Code_Gen_Model_B.Shooter_Left_Motor_Speed = -Shooter_Desired_Speed;
        Code_Gen_Model_B.Shooter_Right_Motor_Speed = Shooter_Desired_Speed;
        Code_Gen_Model_DW.timer = 0.02;
      } else if ((TEST_Request_Note_Pickup != 0.0) &&
                 (Code_Gen_Model_U.Intake_TOF_Dist > Intake_Note_Detect_Dist)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Intake;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else if (TEST_Request_Note_Eject != 0.0) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Eject_from_Shooter;
        Code_Gen_Model_B.Note_State_ID = 3.0;
        Code_Gen_Model_B.Shooter_Left_Motor_DC = -Shooter_Eject_DC;
        Code_Gen_Model_B.Shooter_Right_Motor_DC = Shooter_Eject_DC;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart_Intake_and_Shooter' */

  /* Sum: '<S16>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Init_e = Code_Gen_Model_B.Shooter_Left_Motor_Speed -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S16>/Constant2'
   *  Product: '<S19>/Product'
   *  Sum: '<S19>/Sum'
   *  UnitDelay: '<S19>/Unit Delay1'
   */
  rtb_Sum1_h = ((rtb_Init_e - Code_Gen_Model_DW.UnitDelay1_DSTATE_kd) * 0.1) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kd;

  /* Product: '<S16>/Product' incorporates:
   *  Constant: '<S16>/Constant3'
   */
  rtb_Product_dh = rtb_Sum1_h * 0.0;

  /* Sum: '<S18>/Diff' incorporates:
   *  UnitDelay: '<S18>/UD'
   *
   * Block description for '<S18>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S18>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Product_dh - Code_Gen_Model_DW.UD_DSTATE_av;

  /* Saturate: '<S16>/Saturation' */
  if (rtb_Add_ho > 0.1) {
    rtb_Add_ho = 0.1;
  } else if (rtb_Add_ho < -0.1) {
    rtb_Add_ho = -0.1;
  }

  /* Sum: '<S16>/Add' incorporates:
   *  Gain: '<S16>/Gain'
   *  Gain: '<S16>/Gain1'
   *  Saturate: '<S16>/Saturation'
   */
  rtb_Add_i = ((Shooter_Motor_Control_FF *
                Code_Gen_Model_B.Shooter_Left_Motor_Speed) +
               (Shooter_Motor_Control_P * rtb_Init_e)) + rtb_Add_ho;

  /* Sum: '<S16>/Subtract' incorporates:
   *  Constant: '<S16>/Constant'
   */
  rtb_Switch2_do = 1.0 - rtb_Add_i;

  /* Sum: '<S16>/Sum2' incorporates:
   *  Gain: '<S16>/Gain2'
   *  UnitDelay: '<S16>/Unit Delay'
   */
  rtb_Init_e = (Shooter_Motor_Control_I * rtb_Init_e) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_fl;

  /* Switch: '<S20>/Switch2' incorporates:
   *  Constant: '<S16>/Constant'
   *  RelationalOperator: '<S20>/LowerRelop1'
   *  Sum: '<S16>/Subtract'
   */
  if (!(rtb_Init_e > (1.0 - rtb_Add_i))) {
    /* Sum: '<S16>/Subtract1' incorporates:
     *  Constant: '<S16>/Constant1'
     */
    rtb_Switch2_do = -1.0 - rtb_Add_i;

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S16>/Constant1'
     *  RelationalOperator: '<S20>/UpperRelop'
     *  Sum: '<S16>/Subtract1'
     */
    if (!(rtb_Init_e < (-1.0 - rtb_Add_i))) {
      rtb_Switch2_do = rtb_Init_e;
    }

    /* End of Switch: '<S20>/Switch' */
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Saturate: '<S16>/Saturation1' */
  if (rtb_Switch2_do > Shooter_Motor_Control_I_UL) {
    rtb_Integral_m = Shooter_Motor_Control_I_UL;
  } else if (rtb_Switch2_do < Shooter_Motor_Control_I_LL) {
    rtb_Integral_m = Shooter_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_do;
  }

  /* End of Saturate: '<S16>/Saturation1' */

  /* Switch: '<S5>/Switch' */
  if (Code_Gen_Model_B.Shooter_Control_Type) {
    /* Sum: '<S16>/Add1' */
    rtb_Add_ho = rtb_Add_i + rtb_Integral_m;

    /* Saturate: '<S16>/Saturation2' */
    if (rtb_Add_ho > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_ho < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Add_ho;
    }

    /* End of Saturate: '<S16>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Left_Motor_DC;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Sum: '<S17>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Init_e = Code_Gen_Model_B.Shooter_Right_Motor_Speed -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S22>/Sum1' incorporates:
   *  Constant: '<S17>/Constant2'
   *  Product: '<S22>/Product'
   *  Sum: '<S22>/Sum'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_Init_e - Code_Gen_Model_DW.UnitDelay1_DSTATE_p) * 0.1) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_p;

  /* Product: '<S17>/Product' incorporates:
   *  Constant: '<S17>/Constant3'
   */
  rtb_Product_eb = rtb_Add_i * 0.0;

  /* Sum: '<S21>/Diff' incorporates:
   *  UnitDelay: '<S21>/UD'
   *
   * Block description for '<S21>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S21>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ho = rtb_Product_eb - Code_Gen_Model_DW.UD_DSTATE_k1;

  /* Saturate: '<S17>/Saturation' */
  if (rtb_Add_ho > 0.1) {
    rtb_Add_ho = 0.1;
  } else if (rtb_Add_ho < -0.1) {
    rtb_Add_ho = -0.1;
  }

  /* Sum: '<S17>/Add' incorporates:
   *  Gain: '<S17>/Gain'
   *  Gain: '<S17>/Gain1'
   *  Saturate: '<S17>/Saturation'
   */
  rtb_Add_ho += (Shooter_Motor_Control_FF *
                 Code_Gen_Model_B.Shooter_Right_Motor_Speed) +
    (Shooter_Motor_Control_P * rtb_Init_e);

  /* Sum: '<S17>/Subtract' incorporates:
   *  Constant: '<S17>/Constant'
   */
  rtb_Switch2_do = 1.0 - rtb_Add_ho;

  /* Sum: '<S17>/Sum2' incorporates:
   *  Gain: '<S17>/Gain2'
   *  UnitDelay: '<S17>/Unit Delay'
   */
  rtb_Init_e = (Shooter_Motor_Control_I * rtb_Init_e) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_mv;

  /* Switch: '<S23>/Switch2' incorporates:
   *  Constant: '<S17>/Constant'
   *  RelationalOperator: '<S23>/LowerRelop1'
   *  Sum: '<S17>/Subtract'
   */
  if (!(rtb_Init_e > (1.0 - rtb_Add_ho))) {
    /* Sum: '<S17>/Subtract1' incorporates:
     *  Constant: '<S17>/Constant1'
     */
    rtb_Switch2_do = -1.0 - rtb_Add_ho;

    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S17>/Constant1'
     *  RelationalOperator: '<S23>/UpperRelop'
     *  Sum: '<S17>/Subtract1'
     */
    if (!(rtb_Init_e < (-1.0 - rtb_Add_ho))) {
      rtb_Switch2_do = rtb_Init_e;
    }

    /* End of Switch: '<S23>/Switch' */
  }

  /* End of Switch: '<S23>/Switch2' */

  /* Saturate: '<S17>/Saturation1' */
  if (rtb_Switch2_do > Shooter_Motor_Control_I_UL) {
    rtb_Init_e = Shooter_Motor_Control_I_UL;
  } else if (rtb_Switch2_do < Shooter_Motor_Control_I_LL) {
    rtb_Init_e = Shooter_Motor_Control_I_LL;
  } else {
    rtb_Init_e = rtb_Switch2_do;
  }

  /* End of Saturate: '<S17>/Saturation1' */

  /* Switch: '<S5>/Switch1' */
  if (Code_Gen_Model_B.Shooter_Control_Type) {
    /* Sum: '<S17>/Add1' */
    rtb_Add_ho += rtb_Init_e;

    /* Saturate: '<S17>/Saturation2' */
    if (rtb_Add_ho > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_ho < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Add_ho;
    }

    /* End of Saturate: '<S17>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Right_Motor_DC;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Update for UnitDelay: '<S79>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S79>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S80>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S80>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S81>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S81>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S82>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S82>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' incorporates:
     *  Bias: '<S117>/Bias'
     *  Merge: '<S91>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' incorporates:
     *  Bias: '<S117>/Bias'
     *  Merge: '<S91>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S24>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S44>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S24>/A'
   *  Delay: '<S24>/MemoryX'
   */
  rtb_Switch2_do = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Add_ho = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S24>/MemoryX' incorporates:
   *  Constant: '<S24>/B'
   *  Product: '<S44>/A[k]*xhat[k|k-1]'
   *  Product: '<S44>/B[k]*u[k]'
   *  Sum: '<S44>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch2_do) + Code_Gen_Model_B.Product3
    [0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Add_ho) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S78>/UD'
   *
   * Block description for '<S78>/UD':
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

  /* Update for UnitDelay: '<S254>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S254>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S268>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S267>/UD'
   *
   * Block description for '<S267>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S265>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S263>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S263>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S230>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Switch1_h;

  /* Update for UnitDelay: '<S229>/UD'
   *
   * Block description for '<S229>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch2_j;

  /* Update for UnitDelay: '<S223>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Product_ku;

  /* Update for UnitDelay: '<S241>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S226>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S167>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S166>/UD'
   *
   * Block description for '<S166>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S160>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Subtract_i;

  /* Update for UnitDelay: '<S178>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S177>/UD'
   *
   * Block description for '<S177>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product_i3;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Subtract1_jk;

  /* Update for UnitDelay: '<S188>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S187>/UD'
   *
   * Block description for '<S187>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S181>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract_is;

  /* Update for UnitDelay: '<S199>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S198>/UD'
   *
   * Block description for '<S198>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Add_pd;

  /* Update for UnitDelay: '<S184>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_kh;

  /* Update for UnitDelay: '<S209>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S208>/UD'
   *
   * Block description for '<S208>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Product_i5;

  /* Update for UnitDelay: '<S202>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Integral_h;

  /* Update for UnitDelay: '<S220>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S219>/UD'
   *
   * Block description for '<S219>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_nh;

  /* Update for UnitDelay: '<S205>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_ei;

  /* Update for UnitDelay: '<S87>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_ls;

  /* Update for UnitDelay: '<S87>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kd = rtb_Sum1_h;

  /* Update for UnitDelay: '<S18>/UD'
   *
   * Block description for '<S18>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_av = rtb_Product_dh;

  /* Update for UnitDelay: '<S16>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_fl = rtb_Integral_m;

  /* Update for UnitDelay: '<S22>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_p = rtb_Add_i;

  /* Update for UnitDelay: '<S21>/UD'
   *
   * Block description for '<S21>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k1 = rtb_Product_eb;

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mv = rtb_Init_e;
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

    /* InitializeConditions for Delay: '<S24>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S254>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S263>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S314>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S10>/Spline Path Following Enabled' */
    /* Start for If: '<S95>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S91>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S95>/Robot_Index_Is_Valid' */
    /* Start for If: '<S98>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S98>/Circle_Check_Valid' */
    /* Start for If: '<S100>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S98>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S95>/Robot_Index_Is_Valid' */
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

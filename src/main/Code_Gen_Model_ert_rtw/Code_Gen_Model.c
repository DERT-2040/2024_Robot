/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.56
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Feb  7 21:57:09 2024
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
#define Code_Gen_Model_IN_Note_Intake  ((uint8_T)3U)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)2U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)5U)

/* Exported block parameters */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S310>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S308>/Constant'
                                         *   '<S308>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S310>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S308>/Constant1'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S243>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S159>/Constant3'
                                        *   '<S180>/Constant3'
                                        *   '<S201>/Constant3'
                                        *   '<S222>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S159>/Constant2'
                                   *   '<S180>/Constant2'
                                   *   '<S201>/Constant2'
                                   *   '<S222>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S159>/Saturation'
                                        *   '<S180>/Saturation'
                                        *   '<S201>/Saturation'
                                        *   '<S222>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S159>/Saturation'
                                        *   '<S180>/Saturation'
                                        *   '<S201>/Saturation'
                                        *   '<S222>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S159>/Gain'
                                            *   '<S180>/Gain'
                                            *   '<S201>/Gain'
                                            *   '<S222>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S159>/Gain2'
                                        *   '<S180>/Gain2'
                                        *   '<S201>/Gain2'
                                        *   '<S222>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S159>/Saturation1'
                                        *   '<S180>/Saturation1'
                                        *   '<S201>/Saturation1'
                                        *   '<S222>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S159>/Saturation1'
                                        *   '<S180>/Saturation1'
                                        *   '<S201>/Saturation1'
                                        *   '<S222>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S159>/Gain1'
                                        *   '<S180>/Gain1'
                                        *   '<S201>/Gain1'
                                        *   '<S222>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S164>/Constant'
                            *   '<S185>/Constant'
                            *   '<S206>/Constant'
                            *   '<S227>/Constant'
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
real_T Note_Shooter_Spin_Up_Time = 2.0;/* Variable: Note_Shooter_Spin_Up_Time
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Transfer_Time = 0.06;      /* Variable: Note_Transfer_Time
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
                                        * Referenced by: '<S86>/Constant'
                                        */
real_T Shooter_Desired_Speed = 450.0;  /* Variable: Shooter_Desired_Speed
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Eject_DC = 0.2;         /* Variable: Shooter_Eject_DC
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S19>/Gain'
                                           *   '<S20>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S19>/Gain2'
                                         *   '<S20>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S19>/Saturation1'
                                          *   '<S20>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S19>/Saturation1'
                                         *   '<S20>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S19>/Gain1'
                                         *   '<S20>/Gain1'
                                         */
real_T Shooter_Note_Detect_Dist = 70.0;/* Variable: Shooter_Note_Detect_Dist
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S144>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S144>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S91>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S2>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S104>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S144>/Constant3'
                                     */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S298>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S264>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S264>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S264>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S264>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S263>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S264>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S264>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S264>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S264>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S264>/Constant1'
                                   *   '<S264>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S264>/Constant'
                                   *   '<S264>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S254>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S254>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S254>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S254>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S254>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S254>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S162>/Constant3'
                                        *   '<S183>/Constant3'
                                        *   '<S204>/Constant3'
                                        *   '<S225>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S162>/Constant2'
                                *   '<S183>/Constant2'
                                *   '<S204>/Constant2'
                                *   '<S225>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S162>/Saturation'
                                           *   '<S183>/Saturation'
                                           *   '<S204>/Saturation'
                                           *   '<S225>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S162>/Saturation'
                                          *   '<S183>/Saturation'
                                          *   '<S204>/Saturation'
                                          *   '<S225>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S162>/Gain2'
                                         *   '<S183>/Gain2'
                                         *   '<S204>/Gain2'
                                         *   '<S225>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S162>/Saturation1'
                                             *   '<S183>/Saturation1'
                                             *   '<S204>/Saturation1'
                                             *   '<S225>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S162>/Saturation1'
                                            *   '<S183>/Saturation1'
                                            *   '<S204>/Saturation1'
                                            *   '<S225>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S162>/Gain1'
                                        *   '<S183>/Gain1'
                                        *   '<S204>/Gain1'
                                        *   '<S225>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S296>/Constant'
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
                        * Referenced by: '<S242>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S242>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S242>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S242>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S242>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S242>/Constant3'
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
  real_T rtb_Add_i;
  real_T rtb_Add_ie;
  real_T rtb_Add_ls;
  real_T rtb_Add_nh;
  real_T rtb_Add_pd;
  real_T rtb_Add_pw;
  real_T rtb_Error;
  real_T rtb_Hypot_g5;
  real_T rtb_Init_e;
  real_T rtb_Integral_h;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Product_do;
  real_T rtb_Product_ku;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Subtract1_bm;
  real_T rtb_Subtract1_hq;
  real_T rtb_Subtract1_kh;
  real_T rtb_Subtract_jj;
  real_T rtb_Subtract_pa;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_i4;
  real_T rtb_Switch1_kl;
  real_T rtb_Switch1_m5;
  real_T rtb_Switch1_p;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_ef;
  real_T rtb_Switch2_jg;
  real_T rtb_Switch2_p;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s116_iter;
  uint16_T s141_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T exitg1;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S149>/Add1' incorporates:
   *  Constant: '<S149>/Constant3'
   *  Constant: '<S149>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S149>/Math Function'
   *  Sum: '<S11>/Add'
   *  Sum: '<S149>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S78>/Diff'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S150>/Add1' incorporates:
   *  Constant: '<S150>/Constant3'
   *  Constant: '<S150>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S150>/Math Function'
   *  Sum: '<S11>/Add1'
   *  Sum: '<S150>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S151>/Add1' incorporates:
   *  Constant: '<S151>/Constant3'
   *  Constant: '<S151>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S151>/Math Function'
   *  Sum: '<S11>/Add2'
   *  Sum: '<S151>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S152>/Add1' incorporates:
   *  Constant: '<S152>/Constant3'
   *  Constant: '<S152>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S152>/Math Function'
   *  Sum: '<S11>/Add3'
   *  Sum: '<S152>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product3' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_Switch2_p = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S9>/Product7' incorporates:
   *  Fcn: '<S82>/r->x'
   *  Fcn: '<S82>/theta->y'
   *  Fcn: '<S83>/r->x'
   *  Fcn: '<S83>/theta->y'
   *  Fcn: '<S84>/r->x'
   *  Fcn: '<S84>/theta->y'
   *  Fcn: '<S85>/r->x'
   *  Fcn: '<S85>/theta->y'
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
  rtb_Add_nh = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Add_nh)) || (rtIsInf(rtb_Add_nh))) {
    rtb_Add_nh = 0.0;
  } else {
    rtb_Add_nh = fmod(rtb_Add_nh, 4.294967296E+9);
  }

  switch ((rtb_Add_nh < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Add_nh)))) :
          ((int32_T)((uint32_T)rtb_Add_nh))) {
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

    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S298>/Constant'
     *  Constant: '<S298>/Constant1'
     *  Constant: '<S298>/Constant2'
     *  Inport: '<Root>/Steer_Joystick_X'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Math: '<S298>/Hypot'
     *  RelationalOperator: '<S298>/GreaterThan'
     *  Switch: '<S298>/Switch'
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

    /* End of Switch: '<S298>/Switch1' */

    /* Switch: '<S300>/Switch1' incorporates:
     *  Constant: '<S306>/Constant'
     *  Constant: '<S307>/Constant'
     *  Logic: '<S300>/AND'
     *  RelationalOperator: '<S306>/Compare'
     *  RelationalOperator: '<S307>/Compare'
     *  Switch: '<S300>/Switch2'
     *  UnitDelay: '<S300>/Unit Delay'
     *  UnitDelay: '<S300>/Unit Delay1'
     */
    if ((rtb_thetay == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_m5 = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_thetay;
    }

    /* End of Switch: '<S300>/Switch1' */

    /* Merge: '<S8>/Merge1' incorporates:
     *  Trigonometry: '<S296>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_m5, rtb_Init_e);

    /* RelationalOperator: '<S303>/Compare' incorporates:
     *  Constant: '<S303>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S299>/Constant'
     *  Constant: '<S299>/Constant1'
     *  Constant: '<S301>/Constant'
     *  Constant: '<S302>/Constant'
     *  Logic: '<S299>/Logical Operator'
     *  RelationalOperator: '<S301>/Compare'
     *  RelationalOperator: '<S302>/Compare'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    if (((rtb_Switch1_m5 < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_h >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_nh = 6.2831853071795862;
    } else {
      rtb_Add_nh = 0.0;
    }

    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S299>/Constant2'
     *  Constant: '<S299>/Constant3'
     *  Constant: '<S304>/Constant'
     *  Constant: '<S305>/Constant'
     *  Logic: '<S299>/Logical Operator1'
     *  RelationalOperator: '<S304>/Compare'
     *  RelationalOperator: '<S305>/Compare'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_h < 0.0) && (rtb_Switch1_m5 >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = -6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Sum: '<S299>/Sum1' incorporates:
     *  Switch: '<S299>/Switch'
     *  Switch: '<S299>/Switch1'
     *  UnitDelay: '<S299>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Add_nh + rtb_Add_ie) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S314>/Constant'
     *  Constant: '<S315>/Constant'
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Logic: '<S309>/AND'
     *  RelationalOperator: '<S314>/Compare'
     *  RelationalOperator: '<S315>/Compare'
     *  Switch: '<S309>/Switch2'
     *  UnitDelay: '<S309>/Unit Delay'
     *  UnitDelay: '<S309>/Unit Delay1'
     */
    if ((Code_Gen_Model_U.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_U.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_ef = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p = Code_Gen_Model_U.Drive_Joystick_Y;
      rtb_Switch2_ef = Code_Gen_Model_U.Drive_Joystick_X;
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Merge: '<S8>/Merge3' incorporates:
     *  Trigonometry: '<S297>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p,
      rtb_Switch2_ef);

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S13>/Constant3'
     *  SignalConversion generated from: '<S13>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S296>/Constant'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Lookup_n-D: '<S296>/Modulation_Str_Y_Rel'
     *  Product: '<S296>/Product'
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

    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S308>/Constant'
     *  Constant: '<S308>/Constant1'
     *  Inport: '<Root>/Is_Boost_Trigger_Pulled'
     */
    if (Code_Gen_Model_U.Is_Boost_Trigger_Pulled != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S308>/Switch1' */

    /* Switch: '<S313>/Init' incorporates:
     *  UnitDelay: '<S313>/FixPt Unit Delay1'
     *  UnitDelay: '<S313>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay = rtb_Product_ku;
    } else {
      rtb_thetay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S313>/Init' */

    /* Sum: '<S311>/Sum1' */
    rtb_Product_ku -= rtb_thetay;

    /* Switch: '<S312>/Switch2' incorporates:
     *  Constant: '<S310>/Constant1'
     *  Constant: '<S310>/Constant3'
     *  RelationalOperator: '<S312>/LowerRelop1'
     *  RelationalOperator: '<S312>/UpperRelop'
     *  Switch: '<S312>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S312>/Switch' incorporates:
       *  Constant: '<S310>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S312>/Switch2' */

    /* Sum: '<S311>/Sum' */
    rtb_thetay += rtb_Product_ku;

    /* Product: '<S308>/Product' incorporates:
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Lookup_n-D: '<S297>/Modulation_Drv'
     *  Math: '<S297>/Magnitude'
     */
    rtb_Add_i = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_U.Drive_Joystick_X,
      Code_Gen_Model_U.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_thetay;

    /* Saturate: '<S308>/Saturation' */
    if (rtb_Add_i > Boost_Trigger_High_Speed) {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
    } else if (rtb_Add_i < (-Boost_Trigger_High_Speed)) {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
    } else {
      /* Merge: '<S8>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = rtb_Add_i;
    }

    /* End of Saturate: '<S308>/Saturation' */

    /* SignalConversion generated from: '<S13>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S13>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Update for UnitDelay: '<S300>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S299>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S299>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S309>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p;

    /* Update for UnitDelay: '<S309>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_ef;

    /* Update for UnitDelay: '<S313>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S313>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S313>/FixPt Unit Delay1' */
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

  /* Reshape: '<S23>/Reshapey' incorporates:
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

  /* Delay: '<S23>/MemoryX' incorporates:
   *  Constant: '<S23>/X0'
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
  rtb_Switch1_kl = cos(rtb_thetay);

  /* Trigonometry: '<S9>/Trigonometric Function1' */
  rtb_Switch2_p = sin(rtb_thetay);

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch1_kl;
  rtb_Init_e = rtb_Switch2_p;

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus'
   */
  rtb_Switch1_m5 = -rtb_Switch2_p;
  rtb_Switch1_p = rtb_Switch1_kl;

  /* Sum: '<S77>/Diff' incorporates:
   *  UnitDelay: '<S77>/UD'
   *
   * Block description for '<S77>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S77>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_kl = rtb_thetay - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S9>/Subtract2' incorporates:
   *  Constant: '<S9>/Constant3'
   *  Gain: '<S9>/Gain7'
   *  Math: '<S9>/Square'
   */
  rtb_Switch2_p = 1.0 - ((rtb_Switch1_kl * rtb_Switch1_kl) * 0.16666666666666666);

  /* Gain: '<S9>/Gain6' */
  rtb_Switch1_kl *= 0.5;

  /* Product: '<S9>/Product7' incorporates:
   *  Constant: '<S9>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Add_nh = 0.0;
    rtb_Num_Segments = 0;
    for (s116_iter = 0; s116_iter < 8; s116_iter++) {
      rtb_Add_nh += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i]
        * rtb_TmpSignalConversionAtProduc[s116_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Add_nh;
  }

  /* End of Product: '<S9>/Product7' */

  /* Product: '<S9>/Product6' incorporates:
   *  SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S9>/Unary Minus2'
   */
  rtb_Switch2_ef = (rtb_Switch2_p * tmp[0]) + ((-rtb_Switch1_kl) * tmp[1]);
  rtb_Switch2_p = (rtb_Switch1_kl * tmp[0]) + (rtb_Switch2_p * tmp[1]);

  /* Product: '<S9>/Product6' incorporates:
   *  Concatenate: '<S9>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch2_ef) + (rtb_Switch1_m5 * rtb_Switch2_p);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch2_ef) + (rtb_Switch1_p *
    rtb_Switch2_p);

  /* Outputs for Enabled SubSystem: '<S50>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S76>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S43>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S74>/Enable'
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

    /* Product: '<S74>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S23>/C'
     *  Delay: '<S23>/MemoryX'
     *  Product: '<S76>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_m5;

    /* Sum: '<S74>/Sum' incorporates:
     *  Constant: '<S23>/D'
     *  Product: '<S74>/C[k]*xhat[k|k-1]'
     *  Product: '<S74>/D[k]*u[k]'
     *  Sum: '<S74>/Add1'
     */
    rtb_Switch2_p = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_p + rtb_Switch1_m5);

    /* Product: '<S74>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S23>/C'
     *  Delay: '<S23>/MemoryX'
     *  Product: '<S76>/Product'
     */
    rtb_Switch1_m5 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_m5;

    /* Sum: '<S74>/Sum' incorporates:
     *  Constant: '<S23>/D'
     *  Product: '<S74>/C[k]*xhat[k|k-1]'
     *  Product: '<S74>/D[k]*u[k]'
     *  Sum: '<S74>/Add1'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - (rtb_Switch2_p + rtb_Switch1_m5);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S74>/Product3' incorporates:
     *  Constant: '<S24>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_m5);

    /* Sum: '<S76>/Add1' incorporates:
     *  Product: '<S76>/Product'
     */
    rtb_Switch2_p = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S74>/Product3' incorporates:
     *  Constant: '<S24>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_m5);

    /* Sum: '<S76>/Add1' incorporates:
     *  Product: '<S76>/Product'
     */
    rtb_Switch1_m5 = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S76>/Product2' incorporates:
     *  Constant: '<S24>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_p) +
      (5.9896845167210271E-17 * rtb_Switch1_m5);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_p) +
      (0.095124921972503981 * rtb_Switch1_m5);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S74>/Product3' incorporates:
       *  Outport: '<S74>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S76>/Product2' incorporates:
       *  Outport: '<S76>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S7>/AND' */
  /* End of Outputs for SubSystem: '<S43>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S50>/Enabled Subsystem' */

  /* Sum: '<S50>/Add' incorporates:
   *  Delay: '<S23>/MemoryX'
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
   *  Constant: '<S141>/Constant'
   *  Logic: '<S141>/AND'
   *  MATLAB Function: '<S91>/Find closest index to curve'
   *  Product: '<S141>/Product'
   *  RelationalOperator: '<S141>/Relational Operator'
   *  RelationalOperator: '<S141>/Relational Operator1'
   *  Selector: '<S141>/Selector'
   *  Selector: '<S141>/Selector1'
   *  Selector: '<S142>/Selector'
   *  Sum: '<S141>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S94>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S97>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S99>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S94>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S10>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S89>/Action Port'
       */
      /* InitializeConditions for If: '<S10>/If' incorporates:
       *  UnitDelay: '<S142>/Unit Delay'
       *  UnitDelay: '<S142>/Unit Delay1'
       *  UnitDelay: '<S89>/Unit Delay'
       *  UnitDelay: '<S90>/Unit Delay'
       *  UnitDelay: '<S92>/Unit Delay'
       *  UnitDelay: '<S92>/Unit Delay1'
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
     *  ActionPort: '<S89>/Action Port'
     */
    /* Selector: '<S90>/Selector1' incorporates:
     *  Merge: '<S8>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S90>/Selector1' */

    /* Lookup_n-D: '<S89>/Capture Radius' incorporates:
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled7,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S90>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S90>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S94>/If' incorporates:
     *  RelationalOperator: '<S94>/ '
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S97>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S99>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S94>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S97>/Action Port'
       */
      /* InitializeConditions for If: '<S94>/If' incorporates:
       *  UnitDelay: '<S97>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S94>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S94>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S97>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S97>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S100>/Action Port'
       */
      /* If: '<S97>/If' incorporates:
       *  Selector: '<S100>/Selector'
       *  Selector: '<S90>/Selector1'
       *  Selector: '<S97>/Selector'
       */
      rtb_Switch1_kl = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S97>/Increment_If_Rectangle_Check' */

      /* Sum: '<S97>/Minus' incorporates:
       *  Concatenate: '<S90>/Matrix Concatenate2'
       *  Selector: '<S97>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch1_kl;

      /* Outputs for IfAction SubSystem: '<S97>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S100>/Action Port'
       */
      /* If: '<S97>/If' incorporates:
       *  Selector: '<S100>/Selector'
       *  Selector: '<S90>/Selector1'
       *  Selector: '<S97>/Selector'
       *  Sum: '<S97>/Minus'
       */
      rtb_Switch1_p = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S97>/Increment_If_Rectangle_Check' */

      /* Sum: '<S97>/Minus' incorporates:
       *  Concatenate: '<S90>/Matrix Concatenate2'
       *  Selector: '<S97>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_p;

      /* Math: '<S97>/Hypot' */
      rtb_Switch1_m5 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S97>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S97>/Switch' incorporates:
       *  Logic: '<S97>/AND'
       *  Logic: '<S97>/OR'
       *  RelationalOperator: '<S97>/Relational Operator'
       *  UnitDelay: '<S97>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_m5 <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S97>/If' */
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
        /* Disable for If: '<S99>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S97>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S99>/Action Port'
         */
        /* If: '<S99>/If' incorporates:
         *  RelationalOperator: '<S99>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S99>/Is_Last_Point' incorporates:
           *  ActionPort: '<S102>/Action Port'
           */
          /* InitializeConditions for If: '<S99>/If' incorporates:
           *  UnitDelay: '<S102>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S99>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S99>/Is_Last_Point' incorporates:
           *  ActionPort: '<S102>/Action Port'
           */
          /* Switch: '<S102>/Switch' incorporates:
           *  Constant: '<S104>/Constant'
           *  Logic: '<S102>/OR'
           *  RelationalOperator: '<S104>/Compare'
           *  UnitDelay: '<S102>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_m5 <= Spline_Stop_Radius));

          /* If: '<S102>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S102>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S105>/Action Port'
             */
            /* Merge: '<S94>/Merge2' incorporates:
             *  Constant: '<S105>/Constant'
             *  SignalConversion generated from: '<S105>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S105>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S105>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S102>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S102>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            /* Merge: '<S94>/Merge2' incorporates:
             *  Constant: '<S106>/Constant'
             *  SignalConversion generated from: '<S106>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S106>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S106>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S102>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S102>/If' */

          /* Merge: '<S94>/Merge4' incorporates:
           *  SignalConversion: '<S102>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S102>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S99>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S99>/Increment_Search' incorporates:
           *  ActionPort: '<S101>/Action Port'
           */
          /* Merge: '<S94>/Merge2' incorporates:
           *  Constant: '<S101>/Constant'
           *  SignalConversion generated from: '<S101>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S101>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S101>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S94>/Merge4' incorporates:
           *  Constant: '<S103>/FixPt Constant'
           *  SignalConversion: '<S101>/Signal Copy'
           *  Sum: '<S103>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S99>/Increment_Search' */
        }

        /* End of If: '<S99>/If' */
        /* End of Outputs for SubSystem: '<S97>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S97>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S100>/Action Port'
         */
        /* Sum: '<S107>/FixPt Sum1' incorporates:
         *  Constant: '<S107>/FixPt Constant'
         */
        rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S100>/Selector1' incorporates:
         *  Selector: '<S90>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) - 1];

        /* Sum: '<S108>/Subtract' incorporates:
         *  Selector: '<S100>/Selector1'
         *  Sum: '<S108>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Switch1_kl;

        /* Selector: '<S100>/Selector1' incorporates:
         *  Selector: '<S90>/Selector1'
         */
        rtb_Switch2_ef = rtb_Ref_Poses[((int32_T)rtb_Switch1_m5) + 5];

        /* Sum: '<S108>/Subtract' incorporates:
         *  Selector: '<S100>/Selector1'
         *  Sum: '<S108>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_ef - rtb_Switch1_p;

        /* Math: '<S108>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S108>/Divide' */
        rtb_Switch1_m5 = rtb_Minus_n[1];

        /* UnaryMinus: '<S108>/Unary Minus' */
        rtb_Switch2_p = rtb_Minus_n[0];

        /* Product: '<S108>/Product' incorporates:
         *  Product: '<S108>/Divide'
         *  UnaryMinus: '<S108>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_m5 / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_p) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S108>/Add1' incorporates:
         *  Sum: '<S108>/Add2'
         *  Sum: '<S108>/Minus'
         */
        rtb_Switch2_p = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S108>/Minus4' incorporates:
         *  Sum: '<S108>/Add2'
         *  Sum: '<S108>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_p;

        /* Sum: '<S108>/Minus5' incorporates:
         *  Concatenate: '<S90>/Matrix Concatenate2'
         *  Sum: '<S108>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Switch2_p;

        /* Sum: '<S108>/Add' incorporates:
         *  Sum: '<S108>/Add2'
         *  Sum: '<S108>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch1_kl - rtb_Minus_n[0];

        /* Sum: '<S108>/Minus' incorporates:
         *  Sum: '<S108>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_m5;

        /* DotProduct: '<S108>/Dot Product' incorporates:
         *  Concatenate: '<S90>/Matrix Concatenate2'
         *  Sum: '<S108>/Minus'
         *  Sum: '<S108>/Minus1'
         *  Sum: '<S108>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_m5) * rtb_Switch2_p;

        /* DotProduct: '<S108>/Dot Product1' incorporates:
         *  Sum: '<S108>/Minus'
         */
        rtb_Switch1_kl = rtb_Switch2_p * rtb_Switch2_p;

        /* DotProduct: '<S108>/Dot Product2' incorporates:
         *  Sum: '<S108>/Minus4'
         *  Sum: '<S108>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S108>/Dot Product3' incorporates:
         *  Sum: '<S108>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S108>/Add1' incorporates:
         *  Sum: '<S108>/Add2'
         *  Sum: '<S108>/Minus'
         */
        rtb_Switch2_p = rtb_Switch2_ef - rtb_Minus_n[1];

        /* Sum: '<S108>/Minus4' incorporates:
         *  Sum: '<S108>/Add2'
         *  Sum: '<S108>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_ef + rtb_Minus_n[1]) - rtb_Switch2_p;

        /* Sum: '<S108>/Minus5' incorporates:
         *  Concatenate: '<S90>/Matrix Concatenate2'
         *  Sum: '<S108>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Switch2_p;

        /* Sum: '<S108>/Add' incorporates:
         *  Sum: '<S108>/Add2'
         *  Sum: '<S108>/Minus1'
         */
        rtb_Switch1_m5 = rtb_Switch1_p - rtb_Minus_n[1];

        /* Sum: '<S108>/Minus' incorporates:
         *  Sum: '<S108>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_m5;

        /* DotProduct: '<S108>/Dot Product' incorporates:
         *  Concatenate: '<S90>/Matrix Concatenate2'
         *  Sum: '<S108>/Minus'
         *  Sum: '<S108>/Minus1'
         *  Sum: '<S108>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_m5) * rtb_Switch2_p;

        /* RelationalOperator: '<S109>/Compare' incorporates:
         *  Constant: '<S109>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S108>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S108>/Dot Product1'
         *  Sum: '<S108>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_p * rtb_Switch2_p) +
          rtb_Switch1_kl));

        /* DotProduct: '<S108>/Dot Product2' incorporates:
         *  Sum: '<S108>/Minus4'
         *  Sum: '<S108>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Rotationmatrixfromlocalto_0) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S94>/Merge4' incorporates:
         *  Constant: '<S110>/Constant'
         *  DataTypeConversion: '<S100>/Data Type Conversion'
         *  DotProduct: '<S108>/Dot Product3'
         *  Logic: '<S108>/AND'
         *  RelationalOperator: '<S108>/LessThanOrEqual1'
         *  RelationalOperator: '<S110>/Compare'
         *  Sum: '<S100>/Add'
         *  Sum: '<S108>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S94>/Merge2' incorporates:
         *  Constant: '<S100>/Constant2'
         *  SignalConversion generated from: '<S100>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S100>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S100>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S97>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S97>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S98>/Action Port'
         */
        /* Merge: '<S94>/Merge2' incorporates:
         *  Constant: '<S98>/Constant2'
         *  SignalConversion generated from: '<S98>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S98>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S98>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S94>/Merge4' incorporates:
         *  SignalConversion generated from: '<S98>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S97>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S94>/Merge1' incorporates:
       *  Constant: '<S97>/Constant'
       *  SignalConversion generated from: '<S97>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S97>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S94>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S94>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S96>/Action Port'
       */
      /* Merge: '<S94>/Merge1' incorporates:
       *  Constant: '<S96>/Constant'
       *  SignalConversion generated from: '<S96>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S94>/Merge2' incorporates:
       *  Constant: '<S96>/Constant1'
       *  SignalConversion generated from: '<S96>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S96>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S96>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S94>/Merge4' incorporates:
       *  SignalConversion generated from: '<S96>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S94>/Escape_Auto_Driving' */
    }

    /* End of If: '<S94>/If' */

    /* If: '<S90>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S90>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S95>/Action Port'
       */
      /* Bias: '<S111>/Add Constant' incorporates:
       *  Bias: '<S111>/Bias'
       *  Sum: '<S111>/Subtract'
       */
      rtb_Switch1_m5 = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S111>/Selector4' incorporates:
       *  Bias: '<S111>/Bias1'
       *  Constant: '<S113>/FixPt Constant'
       *  Sum: '<S113>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S111>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S111>/Matrix Concatenate' incorporates:
       *  Bias: '<S111>/Add Constant1'
       *  Gain: '<S114>/Gain'
       *  Gain: '<S115>/Gain'
       *  Selector: '<S111>/Selector'
       *  Selector: '<S111>/Selector1'
       *  Selector: '<S111>/Selector2'
       *  Selector: '<S111>/Selector3'
       *  Selector: '<S90>/Selector1'
       *  Sum: '<S114>/Subtract'
       *  Sum: '<S115>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (i = 0; i < 6; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 9] = rtb_Ref_Poses[i + 6];
      }

      for (i = 0; i < 2; i++) {
        /* Selector: '<S111>/Selector4' incorporates:
         *  Selector: '<S111>/Selector'
         */
        rtb_Num_Segments = (i << 3);
        rtb_Assignment[rtb_Num_Segments + 7] = (rtb_Ref_Poses[((6 * i) +
          ((int32_T)Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) -
          rtb_Ref_Poses[(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) +
                         (6 * i)) - 1];

        /* Selector: '<S111>/Selector4' incorporates:
         *  Bias: '<S111>/Add Constant1'
         *  Gain: '<S114>/Gain'
         *  Selector: '<S111>/Selector'
         *  Selector: '<S111>/Selector1'
         *  Sum: '<S114>/Subtract'
         */
        for (s116_iter = 0; s116_iter <= rtb_Bias1_p; s116_iter++) {
          rtb_Selector4[s116_iter + (Code_Gen_Model_DW.Selector4_DIMS1[0] * i)] =
            rtb_Assignment[((s116_iter + rtb_Reshapey_0) + rtb_Num_Segments) - 1];
        }
      }

      /* End of Concatenate: '<S111>/Matrix Concatenate' */

      /* Assignment: '<S111>/Assignment' incorporates:
       *  Selector: '<S111>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s116_iter = 0; s116_iter < rtb_Bias1_p; s116_iter++) {
          rtb_Assignment[s116_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s116_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S111>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S112>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S116>/While Iterator'
       */
      s116_iter = 1;
      do {
        rtb_Switch2_p = rtb_Assignment[s116_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_p - rtb_Assignment[s116_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s116_iter] - rtb_Assignment[s116_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_p - rtb_Assignment[s116_iter];
        rtb_Switch2_p = rtb_Assignment[s116_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_p - rtb_Assignment[s116_iter + 7];
        rtb_Switch1_kl = rtb_Assignment[s116_iter + 8];
        rtb_Minus_n[1] = rtb_Switch1_kl - rtb_Assignment[s116_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_p - rtb_Switch1_kl;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Init_e = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch1_p = rt_powd_snf(rtb_Init_e, 2.0);
          rtb_Rotationmatrixfromlocalto_0 = rt_powd_snf(rtb_Init_e, 3.0);
          rtb_Switch2_ef = (rtb_Init_e - (2.0 * rtb_Switch1_p)) +
            rtb_Rotationmatrixfromlocalto_0;
          rtb_Product_ku = rtb_Switch1_p - rtb_Rotationmatrixfromlocalto_0;
          rtb_Rotationmatrixfromlocalto_0 = (3.0 * rtb_Switch1_p) - (2.0 *
            rtb_Rotationmatrixfromlocalto_0);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Reshapey[0] * rtb_Switch2_ef)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s116_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_ef)
            + (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Switch1_kl;
          rtb_Switch2_ef = ((3.0 * rtb_Switch1_p) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_p);
          rtb_Switch1_p = (rtb_Init_e - rtb_Switch1_p) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Switch2_ef)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch1_p);
          rtb_Switch2_p = (((rtb_Reshapey[1] * rtb_Switch2_ef) + (rtb_Minus_n[1]
            * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_p);
          rtb_Switch1_p = (6.0 * rtb_Init_e) - 4.0;
          rtb_Switch2_ef = (-6.0 * rtb_Init_e) + 2.0;
          rtb_Init_e = (-12.0 * rtb_Init_e) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Reshapey[1] *
            rtb_Switch1_p) + (rtb_Minus_n[1] * rtb_Switch2_ef)) * 0.5) +
            (rtb_Add2_f[1] * rtb_Init_e)) * rtb_Rotationmatrixfromlocalto_0) -
            (((((rtb_Reshapey[0] * rtb_Switch1_p) + (rtb_Minus_n[0] *
            rtb_Switch2_ef)) * 0.5) + (rtb_Add2_f[0] * rtb_Init_e)) *
             rtb_Switch2_p)) / rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_p), 3.0);
        }

        if (s116_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s116_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_m5 - ((real_T)s116_iter);
        rtb_Num_Segments = s116_iter;
        s116_iter++;
      } while ((rtb_Init_e >= 4.0) && (s116_iter <= 3));

      /* End of Outputs for SubSystem: '<S112>/Sampling_Loop' */

      /* SignalConversion generated from: '<S95>/Position_and_Curvature' incorporates:
       *  Assignment: '<S116>/Assignment'
       *  Merge: '<S90>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S90>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S90>/If Action Subsystem' incorporates:
       *  ActionPort: '<S93>/Action Port'
       */
      /* Product: '<S93>/Product' incorporates:
       *  Selector: '<S90>/Selector'
       *  Selector: '<S90>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S93>/Product1' incorporates:
       *  Selector: '<S90>/Selector'
       *  Selector: '<S90>/Selector1'
       */
      rtb_Switch1_m5 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S93>/Product' incorporates:
         *  Constant: '<S93>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S93>/Product1' incorporates:
         *  Constant: '<S93>/Constant2'
         *  Product: '<S93>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_m5;
      }

      /* Assignment: '<S93>/Assignment' incorporates:
       *  Concatenate: '<S93>/Matrix Concatenate'
       *  Merge: '<S90>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S93>/Assignment' */

      /* SignalConversion generated from: '<S93>/Num_Segments' incorporates:
       *  Constant: '<S93>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S90>/If Action Subsystem' */
    }

    /* End of If: '<S90>/If1' */

    /* Concatenate: '<S91>/Matrix Concatenate' incorporates:
     *  Merge: '<S90>/Merge'
     *  Selector: '<S91>/Selector'
     *  Selector: '<S91>/Selector1'
     *  Selector: '<S91>/Selector3'
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

    /* End of Concatenate: '<S91>/Matrix Concatenate' */

    /* MATLAB Function: '<S91>/Distance Along Curve' incorporates:
     *  Concatenate: '<S91>/Matrix Concatenate'
     *  Selector: '<S91>/Selector4'
     *  Selector: '<S91>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s116_iter = 0; s116_iter < 149; s116_iter++) {
      /* Outputs for Iterator SubSystem: '<S112>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S116>/While Iterator'
       */
      rtb_Assignment_d[s116_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s116_iter + 1] -
         rtb_MatrixConcatenate_o[s116_iter], rtb_MatrixConcatenate_o[s116_iter +
         151] - rtb_MatrixConcatenate_o[s116_iter + 150]) +
        rtb_Assignment_d[s116_iter];

      /* End of Outputs for SubSystem: '<S112>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S91>/Distance Along Curve' */

    /* MATLAB Function: '<S91>/Find closest index to curve' incorporates:
     *  Concatenate: '<S91>/Matrix Concatenate'
     *  Selector: '<S142>/Selector'
     *  Selector: '<S91>/Selector4'
     *  Selector: '<S91>/Selector5'
     */
    for (s116_iter = 0; s116_iter < 150; s116_iter++) {
      /* Outputs for Iterator SubSystem: '<S112>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S116>/While Iterator'
       */
      distance_from_robot[s116_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s116_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s116_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S112>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s116_iter = 1;
    } else {
      s116_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s116_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s116_iter == 0) {
      rtb_Switch1_m5 = distance_from_robot[0];
    } else {
      rtb_Switch1_m5 = distance_from_robot[s116_iter - 1];
      for (rtb_Bias1_p = s116_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_m5 > rtb_Init_e) {
          rtb_Switch1_m5 = rtb_Init_e;
        }
      }
    }

    s116_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s116_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_m5) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S142>/Selector' incorporates:
     *  Constant: '<S142>/Constant'
     *  MATLAB Function: '<S91>/Find closest index to curve'
     *  MinMax: '<S142>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s116_iter)) - 1];

    /* If: '<S142>/If' incorporates:
     *  RelationalOperator: '<S142>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S142>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S145>/Action Port'
       */
      /* SignalConversion generated from: '<S145>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S147>/FixPt Sum1' incorporates:
       *  Constant: '<S147>/FixPt Constant'
       */
      rtb_Switch1_m5 = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S145>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S145>/Selector11'
       *  Selector: '<S145>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S145>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S145>/Selector1'
       *  Selector: '<S145>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_m5) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S145>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S145>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_m5), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S145>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S145>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S145>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S142>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S142>/Latch' incorporates:
       *  ActionPort: '<S146>/Action Port'
       */
      /* SignalConversion generated from: '<S146>/In1' incorporates:
       *  UnitDelay: '<S142>/Unit Delay1'
       */
      rtb_Switch1_m5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S146>/In2' incorporates:
       *  UnitDelay: '<S142>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S142>/Latch' */
    }

    /* End of If: '<S142>/If' */

    /* MinMax: '<S89>/Min' incorporates:
     *  Lookup_n-D: '<S89>/Lookahead Distance'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S91>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S141>/While Iterator'
     */
    s141_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s141_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S91>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S141>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s141_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s116_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s141_iter++;
    }

    /* End of Outputs for SubSystem: '<S91>/Find first index that meets distance target' */

    /* Switch: '<S144>/Switch' incorporates:
     *  Concatenate: '<S91>/Matrix Concatenate'
     *  Constant: '<S141>/Constant'
     *  Constant: '<S144>/Constant1'
     *  Constant: '<S144>/Constant2'
     *  Constant: '<S144>/Constant3'
     *  Constant: '<S91>/Constant'
     *  Logic: '<S141>/AND'
     *  MATLAB Function: '<S91>/Find closest index to curve'
     *  Math: '<S144>/Hypot'
     *  Merge: '<S8>/Merge8'
     *  MinMax: '<S144>/Min'
     *  MinMax: '<S144>/Min1'
     *  Product: '<S141>/Product'
     *  Product: '<S144>/Divide'
     *  Product: '<S144>/Product'
     *  Product: '<S144>/Product1'
     *  RelationalOperator: '<S141>/Relational Operator'
     *  RelationalOperator: '<S141>/Relational Operator1'
     *  RelationalOperator: '<S91>/Relational Operator'
     *  Selector: '<S141>/Selector'
     *  Selector: '<S141>/Selector1'
     *  Selector: '<S142>/Selector'
     *  Selector: '<S91>/Selector10'
     *  Selector: '<S91>/Selector7'
     *  Selector: '<S91>/Selector8'
     *  Selector: '<S91>/Selector9'
     *  Sqrt: '<S144>/Sqrt'
     *  Sum: '<S141>/Add'
     *  Sum: '<S144>/Subtract'
     *  Sum: '<S144>/Subtract1'
     *  Sum: '<S91>/Subtract'
     */
    if (Code_Gen_Model_B.Spline_Index >= (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_UnitDelay1_gi = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[5] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[11] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch1_m5 *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_UnitDelay1_gi = fmin(rtb_Switch1_m5 * Spline_Velocity_Multiplier_TEST,
        sqrt(Spline_Max_Centripital_Acceleration /
             rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S144>/Switch' */

    /* Logic: '<S92>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S92>/Switch1' incorporates:
     *  Switch: '<S92>/Switch'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S10>/Merge2' incorporates:
       *  Constant: '<S92>/Constant3'
       *  SignalConversion: '<S92>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S10>/Merge2' incorporates:
       *  SignalConversion: '<S92>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion: '<S92>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S91>/Selector6' incorporates:
     *  Concatenate: '<S91>/Matrix Concatenate'
     *  Selector: '<S91>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S91>/Selector2' incorporates:
     *  Concatenate: '<S91>/Matrix Concatenate'
     *  Selector: '<S91>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S92>/Switch2' incorporates:
     *  Sum: '<S148>/Subtract'
     *  Sum: '<S148>/Subtract1'
     *  Trigonometry: '<S148>/Atan2'
     *  UnitDelay: '<S92>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_p = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S92>/Switch2' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion: '<S92>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_p;

    /* Merge: '<S10>/Merge7' incorporates:
     *  SignalConversion: '<S89>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S92>/Constant2'
     *  SignalConversion generated from: '<S89>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S92>/Constant5'
     *  SignalConversion generated from: '<S89>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S10>/Merge5' incorporates:
     *  Constant: '<S92>/Constant6'
     *  SignalConversion generated from: '<S89>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S10>/Merge6' incorporates:
     *  Constant: '<S92>/Constant1'
     *  SignalConversion generated from: '<S89>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S89>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S142>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_m5;

    /* Update for UnitDelay: '<S142>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S92>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_p;

    /* End of Outputs for SubSystem: '<S10>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S10>/Pass Through' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S88>/Constant'
     *  SignalConversion generated from: '<S88>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion generated from: '<S88>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S10>/Merge1' incorporates:
     *  SignalConversion generated from: '<S88>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S10>/Merge2' incorporates:
     *  SignalConversion generated from: '<S88>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion generated from: '<S88>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S10>/Merge4' incorporates:
     *  SignalConversion generated from: '<S88>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S10>/Merge5' incorporates:
     *  SignalConversion generated from: '<S88>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge6' incorporates:
     *  SignalConversion generated from: '<S88>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S10>/Pass Through' */
  }

  /* End of If: '<S10>/If' */

  /* Signum: '<S242>/Sign2' incorporates:
   *  UnitDelay: '<S242>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Add_nh = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S242>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S242>/Product1' incorporates:
   *  Signum: '<S242>/Sign1'
   *  Signum: '<S242>/Sign2'
   */
  rtb_Add_nh *= rtb_Add_ie;
  if (rtIsNaN(rtb_Add_nh)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_nh, 256.0);
  }

  /* Switch: '<S242>/Switch' incorporates:
   *  Constant: '<S242>/Constant'
   *  Constant: '<S247>/Constant'
   *  Constant: '<S248>/Constant'
   *  Logic: '<S242>/or'
   *  Product: '<S242>/Product1'
   *  RelationalOperator: '<S247>/Compare'
   *  RelationalOperator: '<S248>/Compare'
   *  UnitDelay: '<S242>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_p = 0.0;
  }

  /* End of Switch: '<S242>/Switch' */

  /* Switch: '<S253>/Init' incorporates:
   *  UnitDelay: '<S253>/FixPt Unit Delay1'
   *  UnitDelay: '<S253>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S253>/Init' */

  /* RelationalOperator: '<S249>/Compare' incorporates:
   *  Constant: '<S249>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_p == 0.0);

  /* RelationalOperator: '<S250>/Compare' incorporates:
   *  Constant: '<S250>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_p > 0.0);

  /* Abs: '<S242>/Abs' incorporates:
   *  Sum: '<S242>/Subtract'
   *  UnitDelay: '<S242>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S242>/Switch5' incorporates:
   *  Constant: '<S242>/Constant1'
   *  Switch: '<S242>/Switch1'
   *  UnaryMinus: '<S242>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S242>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S242>/Constant4'
     *  Constant: '<S242>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S242>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S242>/Constant2'
     *  Constant: '<S242>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S242>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S242>/Lookup Table Dynamic'
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
    rtb_Add_nh = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S242>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S242>/Constant10'
     *  Constant: '<S242>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S242>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S242>/Constant7'
     *  Constant: '<S242>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S242>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S242>/Lookup Table Dynamic1'
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

    /* Switch: '<S242>/Switch3' incorporates:
     *  Constant: '<S242>/Constant1'
     *  Constant: '<S242>/Constant3'
     *  UnaryMinus: '<S242>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_nh = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Add_nh = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S242>/Switch3' */
  }

  /* End of Switch: '<S242>/Switch5' */

  /* Product: '<S242>/Product' incorporates:
   *  Switch: '<S242>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Add_nh * rtb_Merge1;

  /* Sum: '<S251>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_p - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S252>/Switch2' incorporates:
   *  RelationalOperator: '<S252>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S242>/Switch2' incorporates:
     *  Constant: '<S242>/Constant1'
     *  Switch: '<S242>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S242>/Switch4' incorporates:
       *  Constant: '<S242>/Constant1'
       */
      rtb_Switch1_m5 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S242>/Switch4' incorporates:
       *  Constant: '<S242>/Constant3'
       *  UnaryMinus: '<S242>/Unary Minus1'
       */
      rtb_Switch1_m5 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S242>/Switch2' */

    /* Product: '<S242>/Product2' */
    rtb_Switch1_m5 *= rtb_Merge1;

    /* Switch: '<S252>/Switch' incorporates:
     *  RelationalOperator: '<S252>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_m5) {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S252>/Switch' */
  }

  /* End of Switch: '<S252>/Switch2' */

  /* Sum: '<S251>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S245>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S245>/Switch' incorporates:
     *  Constant: '<S269>/Constant3'
     *  Constant: '<S269>/Constant4'
     *  Math: '<S269>/Math Function'
     *  Sum: '<S245>/Subtract'
     *  Sum: '<S269>/Add1'
     *  Sum: '<S269>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_thetay) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S245>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S245>/Switch' */

  /* Sum: '<S265>/Add1' incorporates:
   *  Constant: '<S265>/Constant3'
   *  Constant: '<S265>/Constant4'
   *  Math: '<S265>/Math Function'
   *  Sum: '<S244>/Add'
   *  Sum: '<S264>/Sum'
   *  Sum: '<S265>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_thetay +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S267>/Sum1' incorporates:
   *  Constant: '<S264>/Constant2'
   *  Product: '<S267>/Product'
   *  Sum: '<S267>/Sum'
   *  UnitDelay: '<S267>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S264>/Product' incorporates:
   *  Constant: '<S264>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S266>/Diff' incorporates:
   *  UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S264>/Saturation' */
  if (rtb_Add_i > Steering_Heading_Control_D_UL) {
    rtb_Add_i = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_i < Steering_Heading_Control_D_LL) {
    rtb_Add_i = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S264>/Add' incorporates:
   *  Gain: '<S264>/Gain1'
   *  Saturate: '<S264>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_i;

  /* Sum: '<S264>/Subtract' incorporates:
   *  Constant: '<S264>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S264>/Sum2' incorporates:
   *  Gain: '<S264>/Gain2'
   *  UnitDelay: '<S264>/Unit Delay'
   */
  rtb_Switch1_m5 = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S268>/Switch2' incorporates:
   *  RelationalOperator: '<S268>/LowerRelop1'
   */
  if (!(rtb_Switch1_m5 > rtb_uDLookupTable_l)) {
    /* Sum: '<S264>/Subtract1' incorporates:
     *  Constant: '<S264>/Constant1'
     */
    rtb_Switch1_p = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S268>/Switch' incorporates:
     *  RelationalOperator: '<S268>/UpperRelop'
     */
    if (rtb_Switch1_m5 < rtb_Switch1_p) {
      rtb_uDLookupTable_l = rtb_Switch1_p;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_m5;
    }

    /* End of Switch: '<S268>/Switch' */
  }

  /* End of Switch: '<S268>/Switch2' */

  /* Saturate: '<S264>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_m5 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_m5 = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S264>/Saturation1' */

  /* Sum: '<S264>/Add1' */
  rtb_Add_i = rtb_Init_e + rtb_Switch1_m5;

  /* Saturate: '<S264>/Saturation2' */
  if (rtb_Add_i > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S264>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_i < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S264>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S264>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_i;
  }

  /* End of Saturate: '<S264>/Saturation2' */

  /* Switch: '<S244>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S255>/Switch' incorporates:
     *  Abs: '<S255>/Abs'
     *  Constant: '<S255>/Constant'
     *  Constant: '<S263>/Constant'
     *  RelationalOperator: '<S263>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S255>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S244>/Switch' */

  /* Signum: '<S254>/Sign2' incorporates:
   *  UnitDelay: '<S254>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Add_nh = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S254>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S254>/Product1' incorporates:
   *  Signum: '<S254>/Sign1'
   *  Signum: '<S254>/Sign2'
   */
  rtb_Add_nh *= rtb_Add_ie;
  if (rtIsNaN(rtb_Add_nh)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_nh, 256.0);
  }

  /* Switch: '<S254>/Switch' incorporates:
   *  Constant: '<S254>/Constant'
   *  Constant: '<S256>/Constant'
   *  Constant: '<S257>/Constant'
   *  Logic: '<S254>/or'
   *  Product: '<S254>/Product1'
   *  RelationalOperator: '<S256>/Compare'
   *  RelationalOperator: '<S257>/Compare'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_ef = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_ef = 0.0;
  }

  /* End of Switch: '<S254>/Switch' */

  /* Switch: '<S262>/Init' incorporates:
   *  UnitDelay: '<S262>/FixPt Unit Delay1'
   *  UnitDelay: '<S262>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_ef;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S262>/Init' */

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_ef == 0.0);

  /* RelationalOperator: '<S259>/Compare' incorporates:
   *  Constant: '<S259>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_ef > 0.0);

  /* Abs: '<S254>/Abs' incorporates:
   *  Sum: '<S254>/Subtract'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S254>/Switch5' incorporates:
   *  Constant: '<S254>/Constant1'
   *  Switch: '<S254>/Switch1'
   *  UnaryMinus: '<S254>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S254>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S254>/Constant4'
     *  Constant: '<S254>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S254>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S254>/Constant2'
     *  Constant: '<S254>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S254>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S254>/Lookup Table Dynamic'
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
    rtb_Add_nh = -Steering_Localized_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S254>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S254>/Constant10'
     *  Constant: '<S254>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S254>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S254>/Constant7'
     *  Constant: '<S254>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S254>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S254>/Lookup Table Dynamic1'
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

    /* Switch: '<S254>/Switch3' incorporates:
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant3'
     *  UnaryMinus: '<S254>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_nh = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Add_nh = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S254>/Switch3' */
  }

  /* End of Switch: '<S254>/Switch5' */

  /* Product: '<S254>/Product' incorporates:
   *  Switch: '<S254>/Switch1'
   */
  rtb_Switch1_p = rtb_Add_nh * rtb_Product_ku;

  /* Sum: '<S260>/Sum1' */
  rtb_Switch2_ef -= rtb_Init_e;

  /* Switch: '<S261>/Switch2' incorporates:
   *  RelationalOperator: '<S261>/LowerRelop1'
   */
  if (!(rtb_Switch2_ef > rtb_Switch1_p)) {
    /* Switch: '<S254>/Switch2' incorporates:
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant3'
     *  Switch: '<S254>/Switch4'
     *  UnaryMinus: '<S254>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Add_nh = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S254>/Switch4' incorporates:
       *  Constant: '<S254>/Constant1'
       */
      rtb_Add_nh = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Add_nh = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S254>/Product2' incorporates:
     *  Switch: '<S254>/Switch2'
     */
    rtb_Switch1_p = rtb_Add_nh * rtb_Product_ku;

    /* Switch: '<S261>/Switch' incorporates:
     *  RelationalOperator: '<S261>/UpperRelop'
     */
    if (!(rtb_Switch2_ef < rtb_Switch1_p)) {
      rtb_Switch1_p = rtb_Switch2_ef;
    }

    /* End of Switch: '<S261>/Switch' */
  }

  /* End of Switch: '<S261>/Switch2' */

  /* Sum: '<S260>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_p + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S157>/Initialize Function' */
  /* Sum: '<S243>/Add' incorporates:
   *  Constant: '<S243>/Constant'
   *  Constant: '<S243>/Constant4'
   *  Constant: '<S243>/Constant5'
   *  Trigonometry: '<S243>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S157>/Initialize Function' */

  /* Fcn: '<S277>/r->x' incorporates:
   *  Fcn: '<S282>/r->x'
   *  Fcn: '<S287>/r->x'
   *  Fcn: '<S292>/r->x'
   */
  rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S271>/Add' incorporates:
   *  Fcn: '<S277>/r->x'
   *  Fcn: '<S278>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_p;

  /* Fcn: '<S277>/theta->y' incorporates:
   *  Fcn: '<S282>/theta->y'
   *  Fcn: '<S287>/theta->y'
   *  Fcn: '<S292>/theta->y'
   */
  rtb_Switch1_kl = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S271>/Add' incorporates:
   *  Fcn: '<S277>/theta->y'
   *  Fcn: '<S278>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch1_kl;

  /* Sum: '<S272>/Add' incorporates:
   *  Fcn: '<S283>/r->x'
   *  Fcn: '<S283>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch1_kl;

  /* Sum: '<S273>/Add' incorporates:
   *  Fcn: '<S288>/r->x'
   *  Fcn: '<S288>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch1_kl;

  /* Sum: '<S274>/Add' incorporates:
   *  Fcn: '<S293>/r->x'
   *  Fcn: '<S293>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch1_kl;

  /* Fcn: '<S291>/x->r' */
  rtb_Switch1_kl = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Init_e);

  /* RelationalOperator: '<S294>/Compare' incorporates:
   *  Constant: '<S294>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch1_kl == 0.0);

  /* Switch: '<S290>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S290>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S290>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch1_kl;
  }

  /* End of Switch: '<S290>/Switch1' */

  /* Fcn: '<S276>/x->r' */
  rtb_Switch1_kl = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S279>/Compare' incorporates:
   *  Constant: '<S279>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch1_kl == 0.0);

  /* Switch: '<S275>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S275>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S275>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch1_kl;
  }

  /* End of Switch: '<S275>/Switch1' */

  /* Fcn: '<S281>/x->r' */
  rtb_Switch2_p = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S284>/Compare' incorporates:
   *  Constant: '<S284>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_p == 0.0);

  /* Switch: '<S280>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S280>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S280>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_p;
  }

  /* End of Switch: '<S280>/Switch1' */

  /* Fcn: '<S286>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S285>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S285>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S285>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S285>/Switch1' */

  /* Product: '<S270>/Divide' incorporates:
   *  Abs: '<S270>/Abs'
   *  Abs: '<S270>/Abs1'
   *  Abs: '<S270>/Abs2'
   *  Abs: '<S270>/Abs3'
   *  Constant: '<S270>/Constant'
   *  MinMax: '<S270>/Max'
   */
  rtb_Switch1_kl = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S270>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch1_kl;

  /* Switch: '<S290>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S290>/Switch' incorporates:
     *  Fcn: '<S291>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S290>/Switch' */

  /* Trigonometry: '<S234>/Cos4' incorporates:
   *  Switch: '<S223>/Angle_Switch'
   *  Trigonometry: '<S233>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S234>/Sin5' incorporates:
   *  UnaryMinus: '<S232>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S234>/Sin4' incorporates:
   *  Switch: '<S223>/Angle_Switch'
   *  Trigonometry: '<S233>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S234>/Cos5' incorporates:
   *  UnaryMinus: '<S232>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S234>/Subtract1' incorporates:
   *  Product: '<S234>/Product2'
   *  Product: '<S234>/Product3'
   *  Trigonometry: '<S234>/Cos4'
   *  Trigonometry: '<S234>/Sin4'
   */
  rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract_jj * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S234>/Subtract' incorporates:
   *  Product: '<S234>/Product'
   *  Product: '<S234>/Product1'
   *  Trigonometry: '<S234>/Cos4'
   *  Trigonometry: '<S234>/Sin4'
   */
  rtb_Switch1_p = (rtb_MatrixConcatenate_b_idx_1 * rtb_MatrixConcatenate_b_idx_0)
    - (rtb_Subtract_jj * rtb_uDLookupTable_l);

  /* Math: '<S234>/Hypot' */
  rtb_Switch2_ef = rt_hypotd_snf(rtb_Switch1_p, rtb_Init_e);

  /* Switch: '<S234>/Switch' incorporates:
   *  Constant: '<S234>/Constant'
   *  Constant: '<S234>/Constant1'
   *  Constant: '<S235>/Constant'
   *  Product: '<S234>/Divide'
   *  Product: '<S234>/Divide1'
   *  RelationalOperator: '<S235>/Compare'
   *  Switch: '<S234>/Switch1'
   */
  if (rtb_Switch2_ef > 1.0E-6) {
    rtb_Switch2_p = rtb_Init_e / rtb_Switch2_ef;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_p / rtb_Switch2_ef;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S234>/Switch' */

  /* Switch: '<S223>/Speed_Switch' incorporates:
   *  Abs: '<S223>/Abs'
   *  Constant: '<S231>/Constant'
   *  RelationalOperator: '<S231>/Compare'
   *  Switch: '<S223>/Angle_Switch'
   *  Trigonometry: '<S233>/Atan1'
   *  Trigonometry: '<S234>/Atan1'
   *  UnaryMinus: '<S223>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S233>/Subtract1' incorporates:
     *  Product: '<S233>/Product2'
     *  Product: '<S233>/Product3'
     *  UnaryMinus: '<S223>/Unary Minus'
     */
    rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S233>/Subtract' incorporates:
     *  Product: '<S233>/Product'
     *  Product: '<S233>/Product1'
     */
    rtb_Switch2_ef = (rtb_MatrixConcatenate_b_idx_1 *
                      Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S233>/Hypot' */
    rtb_Switch1_p = rt_hypotd_snf(rtb_Switch2_ef, rtb_Init_e);

    /* Switch: '<S233>/Switch1' incorporates:
     *  Constant: '<S233>/Constant'
     *  Constant: '<S233>/Constant1'
     *  Constant: '<S236>/Constant'
     *  Product: '<S233>/Divide'
     *  Product: '<S233>/Divide1'
     *  RelationalOperator: '<S236>/Compare'
     *  Switch: '<S233>/Switch'
     */
    if (rtb_Switch1_p > 1.0E-6) {
      rtb_Switch2_ef /= rtb_Switch1_p;
      rtb_Init_e /= rtb_Switch1_p;
    } else {
      rtb_Switch2_ef = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S233>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2_ef);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S226>/Product2' incorporates:
   *  Constant: '<S226>/Constant'
   *  Switch: '<S223>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S221>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S221>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S224>/Add' incorporates:
   *  Sum: '<S225>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S156>/Product' incorporates:
   *  Abs: '<S221>/Abs'
   *  Abs: '<S224>/Abs'
   *  Constant: '<S227>/Constant'
   *  Constant: '<S237>/Constant3'
   *  Constant: '<S237>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S221>/OR'
   *  Lookup_n-D: '<S224>/1-D Lookup Table'
   *  Math: '<S237>/Math Function'
   *  RelationalOperator: '<S221>/Equal1'
   *  RelationalOperator: '<S227>/Compare'
   *  Signum: '<S221>/Sign'
   *  Signum: '<S221>/Sign1'
   *  Sum: '<S224>/Add'
   *  Sum: '<S237>/Add1'
   *  Sum: '<S237>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S222>/Gain' */
  rtb_Switch2_ef = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S222>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S229>/Sum1' incorporates:
   *  Constant: '<S222>/Constant2'
   *  Product: '<S229>/Product'
   *  Sum: '<S229>/Sum'
   *  UnitDelay: '<S229>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S222>/Product' incorporates:
   *  Constant: '<S222>/Constant3'
   */
  rtb_Switch1_p = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S228>/Diff' incorporates:
   *  UnitDelay: '<S228>/UD'
   *
   * Block description for '<S228>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S228>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Switch1_p - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S222>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S222>/Add' incorporates:
   *  Gain: '<S222>/Gain1'
   *  Saturate: '<S222>/Saturation'
   */
  rtb_Product_ku = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Switch2_ef) +
    rtb_Add_i;

  /* Sum: '<S222>/Subtract' incorporates:
   *  Constant: '<S222>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Product_ku;

  /* Sum: '<S222>/Sum2' incorporates:
   *  Gain: '<S222>/Gain2'
   *  UnitDelay: '<S222>/Unit Delay'
   */
  rtb_Switch2_ef = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S230>/Switch2' incorporates:
   *  Constant: '<S222>/Constant'
   *  RelationalOperator: '<S230>/LowerRelop1'
   *  Sum: '<S222>/Subtract'
   */
  if (!(rtb_Switch2_ef > (1.0 - rtb_Product_ku))) {
    /* Switch: '<S230>/Switch' incorporates:
     *  Constant: '<S222>/Constant1'
     *  RelationalOperator: '<S230>/UpperRelop'
     *  Sum: '<S222>/Subtract1'
     */
    if (rtb_Switch2_ef < (-1.0 - rtb_Product_ku)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Product_ku;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_ef;
    }

    /* End of Switch: '<S230>/Switch' */
  }

  /* End of Switch: '<S230>/Switch2' */

  /* Saturate: '<S222>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch2_ef = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch2_ef = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_ef = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S222>/Saturation1' */

  /* Sum: '<S222>/Add1' */
  rtb_Add_i = rtb_Product_ku + rtb_Switch2_ef;

  /* Saturate: '<S222>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S222>/Saturation2' */

  /* Sum: '<S238>/Add1' incorporates:
   *  Constant: '<S238>/Constant3'
   *  Constant: '<S238>/Constant4'
   *  Math: '<S238>/Math Function'
   *  Sum: '<S238>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S240>/Sum1' incorporates:
   *  Constant: '<S225>/Constant2'
   *  Product: '<S240>/Product'
   *  Sum: '<S240>/Sum'
   *  UnitDelay: '<S240>/Unit Delay1'
   */
  rtb_Product_ku = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S225>/Product' incorporates:
   *  Constant: '<S225>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Product_ku * Steering_Motor_Control_D;

  /* Sum: '<S239>/Diff' incorporates:
   *  UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Rotationmatrixfromlocalto_0 - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S225>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S225>/Add' incorporates:
   *  Gain: '<S225>/Gain1'
   *  Saturate: '<S225>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_i;

  /* Sum: '<S225>/Subtract' incorporates:
   *  Constant: '<S225>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S225>/Sum2' incorporates:
   *  Gain: '<S225>/Gain2'
   *  UnitDelay: '<S225>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S241>/Switch2' incorporates:
   *  Constant: '<S225>/Constant'
   *  RelationalOperator: '<S241>/LowerRelop1'
   *  Sum: '<S225>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S241>/Switch' incorporates:
     *  Constant: '<S225>/Constant1'
     *  RelationalOperator: '<S241>/UpperRelop'
     *  Sum: '<S225>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S241>/Switch' */
  }

  /* End of Switch: '<S241>/Switch2' */

  /* Saturate: '<S225>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S225>/Saturation1' */

  /* Sum: '<S225>/Add1' */
  rtb_Add_i = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S225>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S225>/Saturation2' */

  /* Product: '<S270>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch1_kl;

  /* Switch: '<S275>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S275>/Switch' incorporates:
     *  Fcn: '<S276>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S275>/Switch' */

  /* Trigonometry: '<S171>/Cos4' incorporates:
   *  Switch: '<S160>/Angle_Switch'
   *  Trigonometry: '<S170>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S171>/Sin5' incorporates:
   *  UnaryMinus: '<S169>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S171>/Sin4' incorporates:
   *  Switch: '<S160>/Angle_Switch'
   *  Trigonometry: '<S170>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S171>/Cos5' incorporates:
   *  UnaryMinus: '<S169>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S171>/Subtract1' incorporates:
   *  Product: '<S171>/Product2'
   *  Product: '<S171>/Product3'
   *  Trigonometry: '<S171>/Cos4'
   *  Trigonometry: '<S171>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract_jj * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S171>/Subtract' incorporates:
   *  Product: '<S171>/Product'
   *  Product: '<S171>/Product1'
   *  Trigonometry: '<S171>/Cos4'
   *  Trigonometry: '<S171>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_MatrixConcatenate_b_idx_1 *
                      rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract_jj *
    rtb_uDLookupTable_l);

  /* Math: '<S171>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S171>/Switch' incorporates:
   *  Constant: '<S171>/Constant'
   *  Constant: '<S171>/Constant1'
   *  Constant: '<S172>/Constant'
   *  Product: '<S171>/Divide'
   *  Product: '<S171>/Divide1'
   *  RelationalOperator: '<S172>/Compare'
   *  Switch: '<S171>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_p = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S171>/Switch' */

  /* Switch: '<S160>/Speed_Switch' incorporates:
   *  Abs: '<S160>/Abs'
   *  Constant: '<S168>/Constant'
   *  RelationalOperator: '<S168>/Compare'
   *  Switch: '<S160>/Angle_Switch'
   *  Trigonometry: '<S170>/Atan1'
   *  Trigonometry: '<S171>/Atan1'
   *  UnaryMinus: '<S160>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S170>/Subtract1' incorporates:
     *  Product: '<S170>/Product2'
     *  Product: '<S170>/Product3'
     *  UnaryMinus: '<S160>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S170>/Subtract' incorporates:
     *  Product: '<S170>/Product'
     *  Product: '<S170>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract_jj * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S170>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S170>/Constant'
     *  Constant: '<S170>/Constant1'
     *  Constant: '<S173>/Constant'
     *  Product: '<S170>/Divide'
     *  Product: '<S170>/Divide1'
     *  RelationalOperator: '<S173>/Compare'
     *  Switch: '<S170>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S170>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S163>/Product2' incorporates:
   *  Constant: '<S163>/Constant'
   *  Switch: '<S160>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S158>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S158>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S161>/Add' incorporates:
   *  Sum: '<S162>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S153>/Product' incorporates:
   *  Abs: '<S158>/Abs'
   *  Abs: '<S161>/Abs'
   *  Constant: '<S164>/Constant'
   *  Constant: '<S174>/Constant3'
   *  Constant: '<S174>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S158>/OR'
   *  Lookup_n-D: '<S161>/1-D Lookup Table'
   *  Math: '<S174>/Math Function'
   *  RelationalOperator: '<S158>/Equal1'
   *  RelationalOperator: '<S164>/Compare'
   *  Signum: '<S158>/Sign'
   *  Signum: '<S158>/Sign1'
   *  Sum: '<S161>/Add'
   *  Sum: '<S174>/Add1'
   *  Sum: '<S174>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S159>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S159>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S166>/Sum1' incorporates:
   *  Constant: '<S159>/Constant2'
   *  Product: '<S166>/Product'
   *  Sum: '<S166>/Sum'
   *  UnitDelay: '<S166>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S159>/Product' incorporates:
   *  Constant: '<S159>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S165>/Diff' incorporates:
   *  UnitDelay: '<S165>/UD'
   *
   * Block description for '<S165>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S165>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S159>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S159>/Add' incorporates:
   *  Gain: '<S159>/Gain1'
   *  Saturate: '<S159>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Hypot_g5) +
    rtb_Add_i;

  /* Sum: '<S159>/Subtract' incorporates:
   *  Constant: '<S159>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S159>/Sum2' incorporates:
   *  Gain: '<S159>/Gain2'
   *  UnitDelay: '<S159>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S167>/Switch2' incorporates:
   *  Constant: '<S159>/Constant'
   *  RelationalOperator: '<S167>/LowerRelop1'
   *  Sum: '<S159>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S159>/Constant1'
     *  RelationalOperator: '<S167>/UpperRelop'
     *  Sum: '<S159>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S167>/Switch' */
  }

  /* End of Switch: '<S167>/Switch2' */

  /* Saturate: '<S159>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S159>/Saturation1' */

  /* Sum: '<S159>/Add1' */
  rtb_Add_i = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S159>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S159>/Saturation2' */

  /* Sum: '<S175>/Add1' incorporates:
   *  Constant: '<S175>/Constant3'
   *  Constant: '<S175>/Constant4'
   *  Math: '<S175>/Math Function'
   *  Sum: '<S175>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S177>/Sum1' incorporates:
   *  Constant: '<S162>/Constant2'
   *  Product: '<S177>/Product'
   *  Sum: '<S177>/Sum'
   *  UnitDelay: '<S177>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S162>/Product' incorporates:
   *  Constant: '<S162>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S176>/Diff' incorporates:
   *  UnitDelay: '<S176>/UD'
   *
   * Block description for '<S176>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S176>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S162>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S162>/Add' incorporates:
   *  Gain: '<S162>/Gain1'
   *  Saturate: '<S162>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Switch2_p) +
    rtb_Add_i;

  /* Sum: '<S162>/Subtract' incorporates:
   *  Constant: '<S162>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S162>/Sum2' incorporates:
   *  Gain: '<S162>/Gain2'
   *  UnitDelay: '<S162>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S178>/Switch2' incorporates:
   *  Constant: '<S162>/Constant'
   *  RelationalOperator: '<S178>/LowerRelop1'
   *  Sum: '<S162>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S178>/Switch' incorporates:
     *  Constant: '<S162>/Constant1'
     *  RelationalOperator: '<S178>/UpperRelop'
     *  Sum: '<S162>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S178>/Switch' */
  }

  /* End of Switch: '<S178>/Switch2' */

  /* Saturate: '<S162>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S162>/Saturation1' */

  /* Sum: '<S162>/Add1' */
  rtb_Add_i = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S162>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S162>/Saturation2' */

  /* Product: '<S270>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch1_kl;

  /* Switch: '<S280>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S280>/Switch' incorporates:
     *  Fcn: '<S281>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S280>/Switch' */

  /* Trigonometry: '<S192>/Cos4' incorporates:
   *  Switch: '<S181>/Angle_Switch'
   *  Trigonometry: '<S191>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S192>/Sin5' incorporates:
   *  UnaryMinus: '<S190>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S192>/Sin4' incorporates:
   *  Switch: '<S181>/Angle_Switch'
   *  Trigonometry: '<S191>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S192>/Cos5' incorporates:
   *  UnaryMinus: '<S190>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S192>/Subtract1' incorporates:
   *  Product: '<S192>/Product2'
   *  Product: '<S192>/Product3'
   *  Trigonometry: '<S192>/Cos4'
   *  Trigonometry: '<S192>/Sin4'
   */
  rtb_Switch2_p = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract_jj * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S192>/Subtract' incorporates:
   *  Product: '<S192>/Product'
   *  Product: '<S192>/Product1'
   *  Trigonometry: '<S192>/Cos4'
   *  Trigonometry: '<S192>/Sin4'
   */
  rtb_Subtract_pa = (rtb_MatrixConcatenate_b_idx_1 *
                     rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract_jj *
    rtb_uDLookupTable_l);

  /* Math: '<S192>/Hypot' */
  rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_pa, rtb_Switch2_p);

  /* Switch: '<S192>/Switch' incorporates:
   *  Constant: '<S192>/Constant'
   *  Constant: '<S192>/Constant1'
   *  Constant: '<S193>/Constant'
   *  Product: '<S192>/Divide'
   *  Product: '<S192>/Divide1'
   *  RelationalOperator: '<S193>/Compare'
   *  Switch: '<S192>/Switch1'
   */
  if (rtb_uDLookupTable_l > 1.0E-6) {
    rtb_Switch2_p /= rtb_uDLookupTable_l;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract_pa / rtb_uDLookupTable_l;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S192>/Switch' */

  /* Switch: '<S181>/Speed_Switch' incorporates:
   *  Abs: '<S181>/Abs'
   *  Constant: '<S189>/Constant'
   *  RelationalOperator: '<S189>/Compare'
   *  Switch: '<S181>/Angle_Switch'
   *  Trigonometry: '<S191>/Atan1'
   *  Trigonometry: '<S192>/Atan1'
   *  UnaryMinus: '<S181>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S191>/Subtract1' incorporates:
     *  Product: '<S191>/Product2'
     *  Product: '<S191>/Product3'
     *  UnaryMinus: '<S181>/Unary Minus'
     */
    rtb_Subtract_pa = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S191>/Subtract' incorporates:
     *  Product: '<S191>/Product'
     *  Product: '<S191>/Product1'
     */
    rtb_Subtract_jj = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S191>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract_jj,
      rtb_Subtract_pa);

    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<S191>/Constant'
     *  Constant: '<S191>/Constant1'
     *  Constant: '<S194>/Constant'
     *  Product: '<S191>/Divide'
     *  Product: '<S191>/Divide1'
     *  RelationalOperator: '<S194>/Compare'
     *  Switch: '<S191>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract_jj /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract_pa /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract_jj = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S191>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract_jj);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S184>/Product2' incorporates:
   *  Constant: '<S184>/Constant'
   *  Switch: '<S181>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S179>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S179>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S182>/Add' incorporates:
   *  Sum: '<S183>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S154>/Product' incorporates:
   *  Abs: '<S179>/Abs'
   *  Abs: '<S182>/Abs'
   *  Constant: '<S185>/Constant'
   *  Constant: '<S195>/Constant3'
   *  Constant: '<S195>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S179>/OR'
   *  Lookup_n-D: '<S182>/1-D Lookup Table'
   *  Math: '<S195>/Math Function'
   *  RelationalOperator: '<S179>/Equal1'
   *  RelationalOperator: '<S185>/Compare'
   *  Signum: '<S179>/Sign'
   *  Signum: '<S179>/Sign1'
   *  Sum: '<S182>/Add'
   *  Sum: '<S195>/Add1'
   *  Sum: '<S195>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S180>/Gain' */
  rtb_Subtract_pa = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S180>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S187>/Sum1' incorporates:
   *  Constant: '<S180>/Constant2'
   *  Product: '<S187>/Product'
   *  Sum: '<S187>/Sum'
   *  UnitDelay: '<S187>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Switch2_p -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S180>/Product' incorporates:
   *  Constant: '<S180>/Constant3'
   */
  rtb_Subtract_jj = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S186>/Diff' incorporates:
   *  UnitDelay: '<S186>/UD'
   *
   * Block description for '<S186>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S186>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Subtract_jj - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S180>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S180>/Add' incorporates:
   *  Gain: '<S180>/Gain1'
   *  Saturate: '<S180>/Saturation'
   */
  rtb_Add_pd = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Subtract_pa) +
    rtb_Add_i;

  /* Sum: '<S180>/Subtract' incorporates:
   *  Constant: '<S180>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pd;

  /* Sum: '<S180>/Sum2' incorporates:
   *  Gain: '<S180>/Gain2'
   *  UnitDelay: '<S180>/Unit Delay'
   */
  rtb_Switch2_p = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S188>/Switch2' incorporates:
   *  Constant: '<S180>/Constant'
   *  RelationalOperator: '<S188>/LowerRelop1'
   *  Sum: '<S180>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_pd))) {
    /* Switch: '<S188>/Switch' incorporates:
     *  Constant: '<S180>/Constant1'
     *  RelationalOperator: '<S188>/UpperRelop'
     *  Sum: '<S180>/Subtract1'
     */
    if (rtb_Switch2_p < (-1.0 - rtb_Add_pd)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pd;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
    }

    /* End of Switch: '<S188>/Switch' */
  }

  /* End of Switch: '<S188>/Switch2' */

  /* Saturate: '<S180>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_pa = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S180>/Saturation1' */

  /* Sum: '<S180>/Add1' */
  rtb_Add_i = rtb_Add_pd + rtb_Subtract_pa;

  /* Saturate: '<S180>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S180>/Saturation2' */

  /* Sum: '<S196>/Add1' incorporates:
   *  Constant: '<S196>/Constant3'
   *  Constant: '<S196>/Constant4'
   *  Math: '<S196>/Math Function'
   *  Sum: '<S196>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S198>/Sum1' incorporates:
   *  Constant: '<S183>/Constant2'
   *  Product: '<S198>/Product'
   *  Sum: '<S198>/Sum'
   *  UnitDelay: '<S198>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S183>/Product' incorporates:
   *  Constant: '<S183>/Constant3'
   */
  rtb_Add_pd = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S197>/Diff' incorporates:
   *  UnitDelay: '<S197>/UD'
   *
   * Block description for '<S197>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S197>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Add_pd - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S183>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S183>/Add' incorporates:
   *  Gain: '<S183>/Gain1'
   *  Saturate: '<S183>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_i;

  /* Sum: '<S183>/Subtract' incorporates:
   *  Constant: '<S183>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S183>/Sum2' incorporates:
   *  Gain: '<S183>/Gain2'
   *  UnitDelay: '<S183>/Unit Delay'
   */
  rtb_Switch2_p = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S199>/Switch2' incorporates:
   *  Constant: '<S183>/Constant'
   *  RelationalOperator: '<S199>/LowerRelop1'
   *  Sum: '<S183>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S183>/Constant1'
     *  RelationalOperator: '<S199>/UpperRelop'
     *  Sum: '<S183>/Subtract1'
     */
    if (rtb_Switch2_p < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
    }

    /* End of Switch: '<S199>/Switch' */
  }

  /* End of Switch: '<S199>/Switch2' */

  /* Saturate: '<S183>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_kh = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_kh = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_kh = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S183>/Saturation1' */

  /* Sum: '<S183>/Add1' */
  rtb_Add_i = rtb_Add_ie + rtb_Subtract1_kh;

  /* Saturate: '<S183>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S183>/Saturation2' */

  /* Product: '<S270>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch1_kl;

  /* Switch: '<S285>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S285>/Switch' incorporates:
     *  Fcn: '<S286>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S285>/Switch' */

  /* Trigonometry: '<S213>/Cos4' incorporates:
   *  Switch: '<S202>/Angle_Switch'
   *  Trigonometry: '<S212>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S213>/Sin5' incorporates:
   *  UnaryMinus: '<S211>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S213>/Sin4' incorporates:
   *  Switch: '<S202>/Angle_Switch'
   *  Trigonometry: '<S212>/Sin4'
   */
  rtb_Product_do = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S213>/Cos5' incorporates:
   *  UnaryMinus: '<S211>/Unary Minus'
   */
  rtb_Switch2_p = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S213>/Subtract1' incorporates:
   *  Product: '<S213>/Product2'
   *  Product: '<S213>/Product3'
   *  Trigonometry: '<S213>/Cos4'
   *  Trigonometry: '<S213>/Sin4'
   */
  rtb_Switch1_kl = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) +
    (rtb_Product_do * rtb_Switch2_p);

  /* Sum: '<S213>/Subtract' incorporates:
   *  Product: '<S213>/Product'
   *  Product: '<S213>/Product1'
   *  Trigonometry: '<S213>/Cos4'
   *  Trigonometry: '<S213>/Sin4'
   */
  rtb_Switch2_p = (rtb_Add_ie * rtb_Switch2_p) - (rtb_Product_do *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S213>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Switch2_p, rtb_Switch1_kl);

  /* Switch: '<S213>/Switch' incorporates:
   *  Constant: '<S213>/Constant'
   *  Constant: '<S213>/Constant1'
   *  Constant: '<S214>/Constant'
   *  Product: '<S213>/Divide'
   *  Product: '<S213>/Divide1'
   *  RelationalOperator: '<S214>/Compare'
   *  Switch: '<S213>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch1_kl /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_p /= rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch1_kl = 0.0;
    rtb_Switch2_p = 1.0;
  }

  /* End of Switch: '<S213>/Switch' */

  /* Switch: '<S202>/Speed_Switch' incorporates:
   *  Abs: '<S202>/Abs'
   *  Constant: '<S210>/Constant'
   *  RelationalOperator: '<S210>/Compare'
   *  Switch: '<S202>/Angle_Switch'
   *  Trigonometry: '<S212>/Atan1'
   *  Trigonometry: '<S213>/Atan1'
   *  UnaryMinus: '<S202>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch1_kl, rtb_Switch2_p)) > 1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S212>/Subtract1' incorporates:
     *  Product: '<S212>/Product2'
     *  Product: '<S212>/Product3'
     *  UnaryMinus: '<S202>/Unary Minus'
     */
    rtb_Switch2_p = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_do * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S212>/Subtract' incorporates:
     *  Product: '<S212>/Product'
     *  Product: '<S212>/Product1'
     */
    rtb_Add_ie = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Product_do *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S212>/Hypot' */
    rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add_ie, rtb_Switch2_p);

    /* Switch: '<S212>/Switch1' incorporates:
     *  Constant: '<S212>/Constant'
     *  Constant: '<S212>/Constant1'
     *  Constant: '<S215>/Constant'
     *  Product: '<S212>/Divide'
     *  Product: '<S212>/Divide1'
     *  RelationalOperator: '<S215>/Compare'
     *  Switch: '<S212>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
      rtb_Add_ie /= rtb_MatrixConcatenate_b_idx_0;
      rtb_Switch2_p /= rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_Add_ie = 1.0;
      rtb_Switch2_p = 0.0;
    }

    /* End of Switch: '<S212>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Switch2_p, rtb_Add_ie);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S205>/Product2' incorporates:
   *  Constant: '<S205>/Constant'
   *  Switch: '<S202>/Speed_Switch'
   */
  rtb_Switch1_kl = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S200>/Sign' */
  if (rtIsNaN(rtb_Switch1_kl)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch1_kl < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch1_kl > 0.0);
  }

  /* Signum: '<S200>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S203>/Add' incorporates:
   *  Sum: '<S204>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S155>/Product' incorporates:
   *  Abs: '<S200>/Abs'
   *  Abs: '<S203>/Abs'
   *  Constant: '<S206>/Constant'
   *  Constant: '<S216>/Constant3'
   *  Constant: '<S216>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S200>/OR'
   *  Lookup_n-D: '<S203>/1-D Lookup Table'
   *  Math: '<S216>/Math Function'
   *  RelationalOperator: '<S200>/Equal1'
   *  RelationalOperator: '<S206>/Compare'
   *  Signum: '<S200>/Sign'
   *  Signum: '<S200>/Sign1'
   *  Sum: '<S203>/Add'
   *  Sum: '<S216>/Add1'
   *  Sum: '<S216>/Add2'
   */
  rtb_Switch1_kl = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch1_kl) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 +
    1.5707963267948966, 3.1415926535897931) - 1.5707963267948966),
                  Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23,
                  1U);

  /* Gain: '<S201>/Gain' */
  rtb_Switch2_p = Drive_Motor_Control_FF * rtb_Switch1_kl;

  /* Sum: '<S201>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch1_kl -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S208>/Sum1' incorporates:
   *  Constant: '<S201>/Constant2'
   *  Product: '<S208>/Product'
   *  Sum: '<S208>/Sum'
   *  UnitDelay: '<S208>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch1_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S201>/Product' incorporates:
   *  Constant: '<S201>/Constant3'
   */
  rtb_Product_do = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S207>/Diff' incorporates:
   *  UnitDelay: '<S207>/UD'
   *
   * Block description for '<S207>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S207>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Product_do - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S201>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S201>/Add' incorporates:
   *  Gain: '<S201>/Gain1'
   *  Saturate: '<S201>/Saturation'
   */
  rtb_Add_nh = ((Drive_Motor_Control_P * rtb_Switch1_kl) + rtb_Switch2_p) +
    rtb_Add_i;

  /* Sum: '<S201>/Subtract' incorporates:
   *  Constant: '<S201>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_nh;

  /* Sum: '<S201>/Sum2' incorporates:
   *  Gain: '<S201>/Gain2'
   *  UnitDelay: '<S201>/Unit Delay'
   */
  rtb_Switch1_kl = (Drive_Motor_Control_I * rtb_Switch1_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S209>/Switch2' incorporates:
   *  Constant: '<S201>/Constant'
   *  RelationalOperator: '<S209>/LowerRelop1'
   *  Sum: '<S201>/Subtract'
   */
  if (!(rtb_Switch1_kl > (1.0 - rtb_Add_nh))) {
    /* Sum: '<S201>/Subtract1' incorporates:
     *  Constant: '<S201>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_nh;

    /* Switch: '<S209>/Switch' incorporates:
     *  Constant: '<S201>/Constant1'
     *  RelationalOperator: '<S209>/UpperRelop'
     *  Sum: '<S201>/Subtract1'
     */
    if (!(rtb_Switch1_kl < (-1.0 - rtb_Add_nh))) {
      rtb_Switch2_p = rtb_Switch1_kl;
    }

    /* End of Switch: '<S209>/Switch' */
  }

  /* End of Switch: '<S209>/Switch2' */

  /* Saturate: '<S201>/Saturation1' */
  if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
    rtb_Integral_h = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
    rtb_Integral_h = Drive_Motor_Control_I_LL;
  } else {
    rtb_Integral_h = rtb_Switch2_p;
  }

  /* End of Saturate: '<S201>/Saturation1' */

  /* Sum: '<S201>/Add1' */
  rtb_Add_i = rtb_Add_nh + rtb_Integral_h;

  /* Saturate: '<S201>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S201>/Saturation2' */

  /* Sum: '<S217>/Add1' incorporates:
   *  Constant: '<S217>/Constant3'
   *  Constant: '<S217>/Constant4'
   *  Math: '<S217>/Math Function'
   *  Sum: '<S217>/Add2'
   */
  rtb_Switch1_kl = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 +
    3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S219>/Sum1' incorporates:
   *  Constant: '<S204>/Constant2'
   *  Product: '<S219>/Product'
   *  Sum: '<S219>/Sum'
   *  UnitDelay: '<S219>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch1_kl -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S204>/Product' incorporates:
   *  Constant: '<S204>/Constant3'
   */
  rtb_Add_nh = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S218>/Diff' incorporates:
   *  UnitDelay: '<S218>/UD'
   *
   * Block description for '<S218>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S218>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Add_nh - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S204>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S204>/Add' incorporates:
   *  Gain: '<S204>/Gain1'
   *  Saturate: '<S204>/Saturation'
   */
  rtb_Add_ls = (Steering_Motor_Control_P * rtb_Switch1_kl) + rtb_Add_i;

  /* Sum: '<S204>/Subtract' incorporates:
   *  Constant: '<S204>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_ls;

  /* Sum: '<S204>/Sum2' incorporates:
   *  Gain: '<S204>/Gain2'
   *  UnitDelay: '<S204>/Unit Delay'
   */
  rtb_Switch1_kl = (Steering_Motor_Control_I * rtb_Switch1_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S220>/Switch2' incorporates:
   *  Constant: '<S204>/Constant'
   *  RelationalOperator: '<S220>/LowerRelop1'
   *  Sum: '<S204>/Subtract'
   */
  if (!(rtb_Switch1_kl > (1.0 - rtb_Add_ls))) {
    /* Sum: '<S204>/Subtract1' incorporates:
     *  Constant: '<S204>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_ls;

    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S204>/Constant1'
     *  RelationalOperator: '<S220>/UpperRelop'
     *  Sum: '<S204>/Subtract1'
     */
    if (!(rtb_Switch1_kl < (-1.0 - rtb_Add_ls))) {
      rtb_Switch2_p = rtb_Switch1_kl;
    }

    /* End of Switch: '<S220>/Switch' */
  }

  /* End of Switch: '<S220>/Switch2' */

  /* Saturate: '<S204>/Saturation1' */
  if (rtb_Switch2_p > Steering_Motor_Control_I_UL) {
    rtb_Switch1_kl = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Steering_Motor_Control_I_LL) {
    rtb_Switch1_kl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Switch1_kl = rtb_Switch2_p;
  }

  /* End of Saturate: '<S204>/Saturation1' */

  /* Sum: '<S204>/Add1' */
  rtb_Add_i = rtb_Add_ls + rtb_Switch1_kl;

  /* Saturate: '<S204>/Saturation2' */
  if (rtb_Add_i > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_i < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_i;
  }

  /* End of Saturate: '<S204>/Saturation2' */

  /* Gain: '<S86>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S87>/Compare' incorporates:
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S86>/Switch1' incorporates:
   *  UnitDelay: '<S86>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Switch2_p = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S86>/Switch1' */

  /* Sum: '<S86>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_p;

  /* Gain: '<S86>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S86>/Switch' incorporates:
   *  UnitDelay: '<S86>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Add_ls = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Add_ls = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S86>/Switch' */

  /* Sum: '<S86>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Add_ls;

  /* Chart: '<S5>/Chart_Intake_and_Shooter' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S16>/FixPt Relational Operator'
   *  RelationalOperator: '<S17>/FixPt Relational Operator'
   *  RelationalOperator: '<S18>/FixPt Relational Operator'
   *  UnitDelay: '<S16>/Delay Input1'
   *  UnitDelay: '<S17>/Delay Input1'
   *  UnitDelay: '<S18>/Delay Input1'
   *
   * Block description for '<S16>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S18>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;

    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = true;
    Code_Gen_Model_B.Shooter_Speed_Control_Enable = false;
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

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Speed_Control_Enable = false;
        Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.0;
      Code_Gen_Model_B.Shooter_Left_Motor_DC = -Shooter_Eject_DC;
      Code_Gen_Model_B.Shooter_Right_Motor_DC = Shooter_Eject_DC;
      if (Code_Gen_Model_DW.timer >= Note_Eject_Time) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Speed_Control_Enable = false;
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
      if (Code_Gen_Model_U.Intake_TOF_Dist <= Intake_Note_Detect_Dist) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Speed_Control_Enable = false;
        Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
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
      Code_Gen_Model_B.Shooter_Left_Motor_DC = 0.0;
      Code_Gen_Model_B.Shooter_Right_Motor_DC = 0.0;
      if (TEST_Request_Note_Transfer > Code_Gen_Model_DW.DelayInput1_DSTATE_i) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
        Code_Gen_Model_B.Note_State_ID = 2.1;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Speed_Control_Enable = true;
        Code_Gen_Model_B.Shooter_Left_Motor_Speed = -Shooter_Desired_Speed;
        Code_Gen_Model_B.Shooter_Right_Motor_Speed = Shooter_Desired_Speed;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (TEST_Request_Note_Pickup > Code_Gen_Model_DW.DelayInput1_DSTATE)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Intake;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else if (TEST_Request_Note_Eject >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Eject_from_Shooter;
        Code_Gen_Model_B.Note_State_ID = 3.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Left_Motor_DC = -Shooter_Eject_DC;
        Code_Gen_Model_B.Shooter_Right_Motor_DC = Shooter_Eject_DC;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart_Intake_and_Shooter' */

  /* Sum: '<S19>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Error = Code_Gen_Model_B.Shooter_Left_Motor_Speed -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S19>/Add' incorporates:
   *  Gain: '<S19>/Gain'
   *  Gain: '<S19>/Gain1'
   */
  rtb_Add_i = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Left_Motor_Speed) +
    (Shooter_Motor_Control_P * rtb_Error);

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S19>/Constant2'
   *  Switch: '<S5>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Speed_Control_Enable) {
    /* Sum: '<S19>/Sum2' incorporates:
     *  Gain: '<S19>/Gain2'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    rtb_Error = (Shooter_Motor_Control_I * rtb_Error) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mo;

    /* Sum: '<S19>/Subtract' incorporates:
     *  Constant: '<S19>/Constant'
     */
    rtb_Switch2_jg = 1.0 - rtb_Add_i;

    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     *  RelationalOperator: '<S21>/LowerRelop1'
     *  Sum: '<S19>/Subtract'
     */
    if (!(rtb_Error > (1.0 - rtb_Add_i))) {
      /* Sum: '<S19>/Subtract1' incorporates:
       *  Constant: '<S19>/Constant1'
       */
      rtb_Switch2_jg = -1.0 - rtb_Add_i;

      /* Switch: '<S21>/Switch' incorporates:
       *  Constant: '<S19>/Constant1'
       *  RelationalOperator: '<S21>/UpperRelop'
       *  Sum: '<S19>/Subtract1'
       */
      if (!(rtb_Error < (-1.0 - rtb_Add_i))) {
        rtb_Switch2_jg = rtb_Error;
      }

      /* End of Switch: '<S21>/Switch' */
    }

    /* End of Switch: '<S21>/Switch2' */

    /* Saturate: '<S19>/Saturation1' */
    if (rtb_Switch2_jg > Shooter_Motor_Control_I_UL) {
      rtb_Error = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_jg < Shooter_Motor_Control_I_LL) {
      rtb_Error = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Error = rtb_Switch2_jg;
    }

    /* End of Saturate: '<S19>/Saturation1' */

    /* Sum: '<S19>/Add1' */
    rtb_Add_i += rtb_Error;

    /* Saturate: '<S19>/Saturation2' */
    if (rtb_Add_i > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_i < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = rtb_Add_i;
    }

    /* End of Saturate: '<S19>/Saturation2' */
  } else {
    rtb_Error = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S19>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Left_Motor_DC;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Sum: '<S20>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_jg = Code_Gen_Model_B.Shooter_Right_Motor_Speed -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S20>/Add' incorporates:
   *  Gain: '<S20>/Gain'
   *  Gain: '<S20>/Gain1'
   */
  rtb_Add_i = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Right_Motor_Speed) +
    (Shooter_Motor_Control_P * rtb_Switch2_jg);

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/Constant2'
   *  Switch: '<S5>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Speed_Control_Enable) {
    /* Sum: '<S20>/Sum2' incorporates:
     *  Gain: '<S20>/Gain2'
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_Switch2_jg = (Shooter_Motor_Control_I * rtb_Switch2_jg) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_in;

    /* Sum: '<S20>/Subtract' incorporates:
     *  Constant: '<S20>/Constant'
     */
    rtb_Switch2_e = 1.0 - rtb_Add_i;

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S20>/Constant'
     *  RelationalOperator: '<S22>/LowerRelop1'
     *  Sum: '<S20>/Subtract'
     */
    if (!(rtb_Switch2_jg > (1.0 - rtb_Add_i))) {
      /* Sum: '<S20>/Subtract1' incorporates:
       *  Constant: '<S20>/Constant1'
       */
      rtb_Switch2_e = -1.0 - rtb_Add_i;

      /* Switch: '<S22>/Switch' incorporates:
       *  Constant: '<S20>/Constant1'
       *  RelationalOperator: '<S22>/UpperRelop'
       *  Sum: '<S20>/Subtract1'
       */
      if (!(rtb_Switch2_jg < (-1.0 - rtb_Add_i))) {
        rtb_Switch2_e = rtb_Switch2_jg;
      }

      /* End of Switch: '<S22>/Switch' */
    }

    /* End of Switch: '<S22>/Switch2' */

    /* Saturate: '<S20>/Saturation1' */
    if (rtb_Switch2_e > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_jg = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_e < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_jg = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_jg = rtb_Switch2_e;
    }

    /* End of Saturate: '<S20>/Saturation1' */

    /* Sum: '<S20>/Add1' */
    rtb_Add_i += rtb_Switch2_jg;

    /* Saturate: '<S20>/Saturation2' */
    if (rtb_Add_i > 1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
    } else if (rtb_Add_i < -1.0) {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Add_i;
    }

    /* End of Saturate: '<S20>/Saturation2' */
  } else {
    rtb_Switch2_jg = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Right_Motor_DC;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Update for UnitDelay: '<S78>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S78>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S79>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S79>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S80>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S80>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S81>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S81>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' incorporates:
     *  Bias: '<S116>/Bias'
     *  Merge: '<S90>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' incorporates:
     *  Bias: '<S116>/Bias'
     *  Merge: '<S90>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S23>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S43>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S23>/A'
   *  Delay: '<S23>/MemoryX'
   */
  rtb_Add_i = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_e = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S23>/MemoryX' incorporates:
   *  Constant: '<S23>/B'
   *  Product: '<S43>/A[k]*xhat[k|k-1]'
   *  Product: '<S43>/B[k]*u[k]'
   *  Sum: '<S43>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Add_i) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_e) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S77>/UD'
   *
   * Block description for '<S77>/UD':
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

  /* Update for UnitDelay: '<S253>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S253>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S267>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S264>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_m5;

  /* Update for UnitDelay: '<S262>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S262>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S229>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S228>/UD'
   *
   * Block description for '<S228>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch1_p;

  /* Update for UnitDelay: '<S222>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2_ef;

  /* Update for UnitDelay: '<S240>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Product_ku;

  /* Update for UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S225>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S166>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S165>/UD'
   *
   * Block description for '<S165>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S159>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S177>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S176>/UD'
   *
   * Block description for '<S176>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S162>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S187>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S186>/UD'
   *
   * Block description for '<S186>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract_jj;

  /* Update for UnitDelay: '<S180>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract_pa;

  /* Update for UnitDelay: '<S198>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S197>/UD'
   *
   * Block description for '<S197>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Add_pd;

  /* Update for UnitDelay: '<S183>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_kh;

  /* Update for UnitDelay: '<S208>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S207>/UD'
   *
   * Block description for '<S207>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Product_do;

  /* Update for UnitDelay: '<S201>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Integral_h;

  /* Update for UnitDelay: '<S219>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S218>/UD'
   *
   * Block description for '<S218>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_nh;

  /* Update for UnitDelay: '<S204>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Switch1_kl;

  /* Update for UnitDelay: '<S86>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_p;

  /* Update for UnitDelay: '<S86>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Add_ls;

  /* Update for UnitDelay: '<S16>/Delay Input1' incorporates:
   *  Constant: '<S5>/Constant'
   *
   * Block description for '<S16>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = TEST_Request_Note_Pickup;

  /* Update for UnitDelay: '<S17>/Delay Input1' incorporates:
   *  Constant: '<S5>/Constant1'
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_i = TEST_Request_Note_Transfer;

  /* Update for UnitDelay: '<S18>/Delay Input1' incorporates:
   *  Constant: '<S5>/Constant2'
   *
   * Block description for '<S18>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = TEST_Request_Note_Eject;

  /* Update for UnitDelay: '<S19>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mo = rtb_Error;

  /* Update for UnitDelay: '<S20>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_in = rtb_Switch2_jg;
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

    /* InitializeConditions for Delay: '<S23>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S253>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S262>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S313>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S10>/Spline Path Following Enabled' */
    /* Start for If: '<S94>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S90>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S94>/Robot_Index_Is_Valid' */
    /* Start for If: '<S97>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S97>/Circle_Check_Valid' */
    /* Start for If: '<S99>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S97>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S94>/Robot_Index_Is_Valid' */
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

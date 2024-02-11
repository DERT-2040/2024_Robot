/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.64
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Feb 10 14:46:04 2024
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
#define Co_IN_Note_Speaker_Score_Intake ((uint8_T)8U)
#define Co_IN_Note_Speaker_Score_SpinUp ((uint8_T)9U)
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)10U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)13U)
#define Code_Gen_Mod_IN_Extra_Run_Time2 ((uint8_T)1U)
#define Code_Gen_Mod_IN_Extra_Run_Time4 ((uint8_T)2U)
#define Code_Gen_Mod_IN_Extra_Run_Time5 ((uint8_T)3U)
#define Code_Gen_Mod_IN_Extra_Run_Time6 ((uint8_T)4U)
#define Code_Gen_Model_IN_Note_Pickup  ((uint8_T)7U)
#define Code_Gen_Model_IN_Store_Servo  ((uint8_T)12U)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)5U)
#define Code_IN_Note_Intake_AND_Shooter ((uint8_T)6U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)11U)

/* Exported block parameters */
real_T Boost_Trigger_Decreasing_Limit = -0.044444;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S312>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 3.658;/* Variable: Boost_Trigger_High_Speed
                                         * Referenced by:
                                         *   '<S310>/Constant'
                                         *   '<S310>/Saturation'
                                         */
real_T Boost_Trigger_Increasing_Limit = 0.04;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S312>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S310>/Constant1'
                                        */
real_T Distance_FL_y = 0.26353;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S245>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S161>/Constant3'
                                        *   '<S182>/Constant3'
                                        *   '<S203>/Constant3'
                                        *   '<S224>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S161>/Constant2'
                                   *   '<S182>/Constant2'
                                   *   '<S203>/Constant2'
                                   *   '<S224>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S161>/Saturation'
                                        *   '<S182>/Saturation'
                                        *   '<S203>/Saturation'
                                        *   '<S224>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S161>/Saturation'
                                        *   '<S182>/Saturation'
                                        *   '<S203>/Saturation'
                                        *   '<S224>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S161>/Gain'
                                            *   '<S182>/Gain'
                                            *   '<S203>/Gain'
                                            *   '<S224>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S161>/Gain2'
                                        *   '<S182>/Gain2'
                                        *   '<S203>/Gain2'
                                        *   '<S224>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S161>/Saturation1'
                                        *   '<S182>/Saturation1'
                                        *   '<S203>/Saturation1'
                                        *   '<S224>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S161>/Saturation1'
                                        *   '<S182>/Saturation1'
                                        *   '<S203>/Saturation1'
                                        *   '<S224>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S161>/Gain1'
                                        *   '<S182>/Gain1'
                                        *   '<S203>/Gain1'
                                        *   '<S224>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 1500.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S166>/Constant'
                            *   '<S187>/Constant'
                            *   '<S208>/Constant'
                            *   '<S229>/Constant'
                            */
real_T KF_Enable = 0.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.25;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S7>/Constant'
                                          */
real_T Note_Detect_Dist_Intake = 100.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 0.5;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 0.2;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.1;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
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
                                        * Referenced by: '<S88>/Constant'
                                        */
real_T Servo_Position_Deploy = 1.0;    /* Variable: Servo_Position_Deploy
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Position_Store = 0.0;     /* Variable: Servo_Position_Store
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.2;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S21>/Gain'
                                           *   '<S22>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S21>/Gain2'
                                         *   '<S22>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S21>/Saturation1'
                                          *   '<S22>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S21>/Saturation1'
                                         *   '<S22>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S21>/Gain1'
                                         *   '<S22>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 450.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S5>/Chart_Intake_and_Shooter'
                                      */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S146>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S146>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S93>/Constant'
                             */
real_T Spline_Ref_Poses_switch_num = 1.0;/* Variable: Spline_Ref_Poses_switch_num
                                          * Referenced by: '<S2>/Constant16'
                                          */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S106>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S146>/Constant3'
                                     */
real_T Steering_Abs_Deadband_Range = 0.7;/* Variable: Steering_Abs_Deadband_Range
                                          * Referenced by: '<S300>/Constant2'
                                          */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S266>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S266>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S266>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S266>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S265>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S266>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S266>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S266>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 1.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S266>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -1.3;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S266>/Constant1'
                                   *   '<S266>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 1.3;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S266>/Constant'
                                   *   '<S266>/Saturation2'
                                   */
real_T Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Error_Thresh
                   * Referenced by: '<S256>/Constant5'
                   */
real_T Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
                  /* Variable: Steering_Localized_Cmd_Approach_Zero_Final_Thresh
                   * Referenced by: '<S256>/Constant6'
                   */
real_T Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
                        /* Variable: Steering_Localized_Cmd_NonZero_Error_Thresh
                         * Referenced by: '<S256>/Constant9'
                         */
real_T Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;
                  /* Variable: Steering_Localized_Cmd_NonZero_Final_Scale_Factor
                   * Referenced by: '<S256>/Constant10'
                   */
real_T Steering_Localized_Cmd_Rate_Limit_Dec = -1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Dec
                               * Referenced by: '<S256>/Constant1'
                               */
real_T Steering_Localized_Cmd_Rate_Limit_Inc = 1.0;
                              /* Variable: Steering_Localized_Cmd_Rate_Limit_Inc
                               * Referenced by: '<S256>/Constant3'
                               */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S164>/Constant3'
                                        *   '<S185>/Constant3'
                                        *   '<S206>/Constant3'
                                        *   '<S227>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S164>/Constant2'
                                *   '<S185>/Constant2'
                                *   '<S206>/Constant2'
                                *   '<S227>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S164>/Saturation'
                                           *   '<S185>/Saturation'
                                           *   '<S206>/Saturation'
                                           *   '<S227>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S164>/Saturation'
                                          *   '<S185>/Saturation'
                                          *   '<S206>/Saturation'
                                          *   '<S227>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S164>/Gain2'
                                         *   '<S185>/Gain2'
                                         *   '<S206>/Gain2'
                                         *   '<S227>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S164>/Saturation1'
                                             *   '<S185>/Saturation1'
                                             *   '<S206>/Saturation1'
                                             *   '<S227>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S164>/Saturation1'
                                            *   '<S185>/Saturation1'
                                            *   '<S206>/Saturation1'
                                            *   '<S227>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S164>/Gain1'
                                        *   '<S185>/Gain1'
                                        *   '<S206>/Gain1'
                                        *   '<S227>/Gain1'
                                        */
real_T Steering_Relative_Gain = 1.3;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S298>/Constant'
                                        */
real_T TEST_Request_Note_Eject = 0.0;  /* Variable: TEST_Request_Note_Eject
                                        * Referenced by: '<S5>/Constant2'
                                        */
real_T TEST_Request_Note_Pickup = 0.0; /* Variable: TEST_Request_Note_Pickup
                                        * Referenced by: '<S5>/Constant'
                                        */
real_T TEST_Request_Note_Pickup_AND_Transfer = 0.0;
                              /* Variable: TEST_Request_Note_Pickup_AND_Transfer
                               * Referenced by: '<S5>/Constant3'
                               */
real_T TEST_Request_Note_Speaker = 0.0;/* Variable: TEST_Request_Note_Speaker
                                        * Referenced by: '<S5>/Constant7'
                                        */
real_T TEST_Request_Note_Transfer = 0.0;/* Variable: TEST_Request_Note_Transfer
                                         * Referenced by: '<S5>/Constant1'
                                         */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S5>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S5>/Constant5'
                                        */
real_T Test_Shooter_Angle = 35.0;      /* Variable: Test_Shooter_Angle
                                        * Referenced by: '<S5>/Constant6'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S244>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S244>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S244>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S244>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -0.2;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S244>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 0.085714;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S244>/Constant3'
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
  real_T rtb_Switch1_as;
  real_T rtb_Switch1_h;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_j;
  real_T rtb_Switch2_jg;
  real_T rtb_Switch2_p;
  real_T rtb_UnitDelay1_gi;
  real_T rtb_thetay;
  real_T rtb_uDLookupTable;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T rtb_Reshapey_0;
  int32_T s118_iter;
  uint16_T s143_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T exitg1;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation;
  boolean_T rtb_OR_ao;
  boolean_T rtb_Switch_b1;

  /* Sum: '<S151>/Add1' incorporates:
   *  Constant: '<S151>/Constant3'
   *  Constant: '<S151>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S151>/Math Function'
   *  Sum: '<S11>/Add'
   *  Sum: '<S151>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE) * 0.037290702116950625;

  /* Sum: '<S152>/Add1' incorporates:
   *  Constant: '<S152>/Constant3'
   *  Constant: '<S152>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S152>/Math Function'
   *  Sum: '<S11>/Add1'
   *  Sum: '<S152>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_Init_e = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.037290702116950625;

  /* Sum: '<S153>/Add1' incorporates:
   *  Constant: '<S153>/Constant3'
   *  Constant: '<S153>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S153>/Math Function'
   *  Sum: '<S11>/Add2'
   *  Sum: '<S153>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_i) * 0.037290702116950625;

  /* Sum: '<S154>/Add1' incorporates:
   *  Constant: '<S154>/Constant3'
   *  Constant: '<S154>/Constant4'
   *  Gain: '<S11>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S154>/Math Function'
   *  Sum: '<S11>/Add3'
   *  Sum: '<S154>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S9>/Product3' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S83>/Diff'
   *  UnitDelay: '<S83>/UD'
   *
   * Block description for '<S83>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S83>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_p = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_c) * 0.037290702116950625;

  /* SignalConversion generated from: '<S9>/Product7' incorporates:
   *  Fcn: '<S84>/r->x'
   *  Fcn: '<S84>/theta->y'
   *  Fcn: '<S85>/r->x'
   *  Fcn: '<S85>/theta->y'
   *  Fcn: '<S86>/r->x'
   *  Fcn: '<S86>/theta->y'
   *  Fcn: '<S87>/r->x'
   *  Fcn: '<S87>/theta->y'
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

    /* Switch: '<S300>/Switch1' incorporates:
     *  Constant: '<S300>/Constant'
     *  Constant: '<S300>/Constant1'
     *  Constant: '<S300>/Constant2'
     *  Inport: '<Root>/Steer_Joystick_X'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Math: '<S300>/Hypot'
     *  RelationalOperator: '<S300>/GreaterThan'
     *  Switch: '<S300>/Switch'
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

    /* End of Switch: '<S300>/Switch1' */

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S308>/Constant'
     *  Constant: '<S309>/Constant'
     *  Logic: '<S302>/AND'
     *  RelationalOperator: '<S308>/Compare'
     *  RelationalOperator: '<S309>/Compare'
     *  Switch: '<S302>/Switch2'
     *  UnitDelay: '<S302>/Unit Delay'
     *  UnitDelay: '<S302>/Unit Delay1'
     */
    if ((rtb_thetay == 0.0) && (rtb_UnitDelay1_gi == 0.0)) {
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_d2;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;
    } else {
      rtb_Switch1_as = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_thetay;
    }

    /* End of Switch: '<S302>/Switch1' */

    /* Merge: '<S8>/Merge1' incorporates:
     *  Trigonometry: '<S298>/Atan2'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = rt_atan2d_snf(rtb_Switch1_as, rtb_Init_e);

    /* RelationalOperator: '<S305>/Compare' incorporates:
     *  Constant: '<S305>/Constant'
     */
    rtb_Is_Absolute_Translation = (rtb_Init_e < 0.0);

    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S301>/Constant'
     *  Constant: '<S301>/Constant1'
     *  Constant: '<S303>/Constant'
     *  Constant: '<S304>/Constant'
     *  Logic: '<S301>/Logical Operator'
     *  RelationalOperator: '<S303>/Compare'
     *  RelationalOperator: '<S304>/Compare'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    if (((rtb_Switch1_as < 0.0) && (Code_Gen_Model_DW.UnitDelay_DSTATE_h >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_nh = 6.2831853071795862;
    } else {
      rtb_Add_nh = 0.0;
    }

    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S301>/Constant2'
     *  Constant: '<S301>/Constant3'
     *  Constant: '<S306>/Constant'
     *  Constant: '<S307>/Constant'
     *  Logic: '<S301>/Logical Operator1'
     *  RelationalOperator: '<S306>/Compare'
     *  RelationalOperator: '<S307>/Compare'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    if (((Code_Gen_Model_DW.UnitDelay_DSTATE_h < 0.0) && (rtb_Switch1_as >= 0.0))
        && rtb_Is_Absolute_Translation) {
      rtb_Add_ie = -6.2831853071795862;
    } else {
      rtb_Add_ie = 0.0;
    }

    /* Sum: '<S301>/Sum1' incorporates:
     *  Switch: '<S301>/Switch'
     *  Switch: '<S301>/Switch1'
     *  UnitDelay: '<S301>/Unit Delay1'
     */
    rtb_UnitDelay1_gi = (rtb_Add_nh + rtb_Add_ie) +
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kr;

    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S316>/Constant'
     *  Constant: '<S317>/Constant'
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Logic: '<S311>/AND'
     *  RelationalOperator: '<S316>/Compare'
     *  RelationalOperator: '<S317>/Compare'
     *  Switch: '<S311>/Switch2'
     *  UnitDelay: '<S311>/Unit Delay'
     *  UnitDelay: '<S311>/Unit Delay1'
     */
    if ((Code_Gen_Model_U.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_U.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_j = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_h = Code_Gen_Model_U.Drive_Joystick_Y;
      rtb_Switch2_j = Code_Gen_Model_U.Drive_Joystick_X;
    }

    /* End of Switch: '<S311>/Switch1' */

    /* Merge: '<S8>/Merge3' incorporates:
     *  Trigonometry: '<S299>/Atan2'
     */
    Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_h,
      rtb_Switch2_j);

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S13>/Constant3'
     *  SignalConversion generated from: '<S13>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S298>/Constant'
     *  Inport: '<Root>/Steer_Joystick_Y'
     *  Lookup_n-D: '<S298>/Modulation_Str_Y_Rel'
     *  Product: '<S298>/Product'
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

    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S310>/Constant1'
     *  Inport: '<Root>/Is_Boost_Trigger_Pulled'
     */
    if (Code_Gen_Model_U.Is_Boost_Trigger_Pulled != 0.0) {
      rtb_Product_ku = Boost_Trigger_High_Speed;
    } else {
      rtb_Product_ku = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S310>/Switch1' */

    /* Switch: '<S315>/Init' incorporates:
     *  UnitDelay: '<S315>/FixPt Unit Delay1'
     *  UnitDelay: '<S315>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay = rtb_Product_ku;
    } else {
      rtb_thetay = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S315>/Init' */

    /* Sum: '<S313>/Sum1' */
    rtb_Product_ku -= rtb_thetay;

    /* Switch: '<S314>/Switch2' incorporates:
     *  Constant: '<S312>/Constant1'
     *  Constant: '<S312>/Constant3'
     *  RelationalOperator: '<S314>/LowerRelop1'
     *  RelationalOperator: '<S314>/UpperRelop'
     *  Switch: '<S314>/Switch'
     */
    if (rtb_Product_ku > Boost_Trigger_Increasing_Limit) {
      rtb_Product_ku = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product_ku < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S314>/Switch' incorporates:
       *  Constant: '<S312>/Constant1'
       */
      rtb_Product_ku = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S314>/Switch2' */

    /* Sum: '<S313>/Sum' */
    rtb_thetay += rtb_Product_ku;

    /* Product: '<S310>/Product' incorporates:
     *  Inport: '<Root>/Drive_Joystick_X'
     *  Inport: '<Root>/Drive_Joystick_Y'
     *  Lookup_n-D: '<S299>/Modulation_Drv'
     *  Math: '<S299>/Magnitude'
     */
    rtb_Add_i = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_U.Drive_Joystick_X,
      Code_Gen_Model_U.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U) * rtb_thetay;

    /* Saturate: '<S310>/Saturation' */
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

    /* End of Saturate: '<S310>/Saturation' */

    /* SignalConversion generated from: '<S13>/Is_Absolute_Translation_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Translation'
     */
    rtb_Is_Absolute_Translation = Code_Gen_Model_U.Is_Absolute_Translation;

    /* SignalConversion generated from: '<S13>/Is_Absolute_Steering_In' incorporates:
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;

    /* Update for UnitDelay: '<S302>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_d2 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Init_e;

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Switch1_as;

    /* Update for UnitDelay: '<S301>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kr = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S311>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_h;

    /* Update for UnitDelay: '<S311>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_j;

    /* Update for UnitDelay: '<S315>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S315>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S315>/FixPt Unit Delay1' */
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

  /* Reshape: '<S25>/Reshapey' incorporates:
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

  /* Delay: '<S25>/MemoryX' incorporates:
   *  Constant: '<S25>/X0'
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
  rtb_Switch2_c = cos(rtb_thetay);

  /* Trigonometry: '<S9>/Trigonometric Function1' */
  rtb_Switch2_p = sin(rtb_thetay);

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Switch2_c;
  rtb_Init_e = rtb_Switch2_p;

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus'
   */
  rtb_Switch1_as = -rtb_Switch2_p;
  rtb_Switch1_h = rtb_Switch2_c;

  /* Sum: '<S79>/Diff' incorporates:
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
  rtb_Switch2_c = rtb_thetay - Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S9>/Subtract2' incorporates:
   *  Constant: '<S9>/Constant3'
   *  Gain: '<S9>/Gain7'
   *  Math: '<S9>/Square'
   */
  rtb_Switch2_p = 1.0 - ((rtb_Switch2_c * rtb_Switch2_c) * 0.16666666666666666);

  /* Gain: '<S9>/Gain6' */
  rtb_Switch2_c *= 0.5;

  /* Product: '<S9>/Product7' incorporates:
   *  Constant: '<S9>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Add_nh = 0.0;
    rtb_Num_Segments = 0;
    for (s118_iter = 0; s118_iter < 8; s118_iter++) {
      rtb_Add_nh += Code_Gen_Model_ConstP.Constant4_Value_d[rtb_Num_Segments + i]
        * rtb_TmpSignalConversionAtProduc[s118_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Add_nh;
  }

  /* End of Product: '<S9>/Product7' */

  /* Product: '<S9>/Product6' incorporates:
   *  SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S9>/Unary Minus2'
   */
  rtb_Switch2_j = (rtb_Switch2_p * tmp[0]) + ((-rtb_Switch2_c) * tmp[1]);
  rtb_Switch2_p = (rtb_Switch2_c * tmp[0]) + (rtb_Switch2_p * tmp[1]);

  /* Product: '<S9>/Product6' incorporates:
   *  Concatenate: '<S9>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch2_j) + (rtb_Switch1_as * rtb_Switch2_p);
  Code_Gen_Model_B.Product6[1] = (rtb_Init_e * rtb_Switch2_j) + (rtb_Switch1_h *
    rtb_Switch2_p);

  /* Outputs for Enabled SubSystem: '<S52>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S78>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S45>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S76>/Enable'
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

    /* Product: '<S76>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S25>/C'
     *  Delay: '<S25>/MemoryX'
     *  Product: '<S78>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch1_as;

    /* Sum: '<S76>/Sum' incorporates:
     *  Constant: '<S25>/D'
     *  Product: '<S76>/C[k]*xhat[k|k-1]'
     *  Product: '<S76>/D[k]*u[k]'
     *  Sum: '<S76>/Add1'
     */
    rtb_Switch2_p = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Init_e = rtb_Reshapey[0] - (rtb_Switch2_p + rtb_Switch1_as);

    /* Product: '<S76>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S25>/C'
     *  Delay: '<S25>/MemoryX'
     *  Product: '<S78>/Product'
     */
    rtb_Switch1_as = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch1_as;

    /* Sum: '<S76>/Sum' incorporates:
     *  Constant: '<S25>/D'
     *  Product: '<S76>/C[k]*xhat[k|k-1]'
     *  Product: '<S76>/D[k]*u[k]'
     *  Sum: '<S76>/Add1'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - (rtb_Switch2_p + rtb_Switch1_as);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S76>/Product3' incorporates:
     *  Constant: '<S26>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Init_e) +
      (-2.0601714451538746E-17 * rtb_Switch1_as);

    /* Sum: '<S78>/Add1' incorporates:
     *  Product: '<S78>/Product'
     */
    rtb_Switch2_p = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S76>/Product3' incorporates:
     *  Constant: '<S26>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Init_e) +
      (0.095124921972504 * rtb_Switch1_as);

    /* Sum: '<S78>/Add1' incorporates:
     *  Product: '<S78>/Product'
     */
    rtb_Switch1_as = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S78>/Product2' incorporates:
     *  Constant: '<S26>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_p) +
      (5.9896845167210271E-17 * rtb_Switch1_as);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_p) +
      (0.095124921972503981 * rtb_Switch1_as);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S76>/Product3' incorporates:
       *  Outport: '<S76>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S78>/Product2' incorporates:
       *  Outport: '<S78>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S7>/AND' */
  /* End of Outputs for SubSystem: '<S45>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S52>/Enabled Subsystem' */

  /* Sum: '<S52>/Add' incorporates:
   *  Delay: '<S25>/MemoryX'
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
   *  Constant: '<S143>/Constant'
   *  Logic: '<S143>/AND'
   *  MATLAB Function: '<S93>/Find closest index to curve'
   *  Product: '<S143>/Product'
   *  RelationalOperator: '<S143>/Relational Operator'
   *  RelationalOperator: '<S143>/Relational Operator1'
   *  Selector: '<S143>/Selector'
   *  Selector: '<S143>/Selector1'
   *  Selector: '<S144>/Selector'
   *  Sum: '<S143>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S96>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S99>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S101>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S96>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S10>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S91>/Action Port'
       */
      /* InitializeConditions for If: '<S10>/If' incorporates:
       *  UnitDelay: '<S144>/Unit Delay'
       *  UnitDelay: '<S144>/Unit Delay1'
       *  UnitDelay: '<S91>/Unit Delay'
       *  UnitDelay: '<S92>/Unit Delay'
       *  UnitDelay: '<S94>/Unit Delay'
       *  UnitDelay: '<S94>/Unit Delay1'
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
     *  ActionPort: '<S91>/Action Port'
     */
    /* Selector: '<S92>/Selector1' incorporates:
     *  Merge: '<S8>/Merge8'
     */
    for (i = 0; i < 6; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 6] = rtb_Spline_Ref_Poses[i + 6];
    }

    /* End of Selector: '<S92>/Selector1' */

    /* Lookup_n-D: '<S91>/Capture Radius' incorporates:
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_UnitDelay1_gi = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled7,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S92>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S92>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S96>/If' incorporates:
     *  RelationalOperator: '<S96>/ '
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S99>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S101>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S96>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S99>/Action Port'
       */
      /* InitializeConditions for If: '<S96>/If' incorporates:
       *  UnitDelay: '<S99>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S96>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S96>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S99>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S99>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S102>/Action Port'
       */
      /* If: '<S99>/If' incorporates:
       *  Selector: '<S102>/Selector'
       *  Selector: '<S92>/Selector1'
       *  Selector: '<S99>/Selector'
       */
      rtb_Switch2_c = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S99>/Increment_If_Rectangle_Check' */

      /* Sum: '<S99>/Minus' incorporates:
       *  Concatenate: '<S92>/Matrix Concatenate2'
       *  Selector: '<S99>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Switch2_c;

      /* Outputs for IfAction SubSystem: '<S99>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S102>/Action Port'
       */
      /* If: '<S99>/If' incorporates:
       *  Selector: '<S102>/Selector'
       *  Selector: '<S92>/Selector1'
       *  Selector: '<S99>/Selector'
       *  Sum: '<S99>/Minus'
       */
      rtb_Switch1_h = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 5];

      /* End of Outputs for SubSystem: '<S99>/Increment_If_Rectangle_Check' */

      /* Sum: '<S99>/Minus' incorporates:
       *  Concatenate: '<S92>/Matrix Concatenate2'
       *  Selector: '<S99>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch1_h;

      /* Math: '<S99>/Hypot' */
      rtb_Switch1_as = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S99>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S99>/Switch' incorporates:
       *  Logic: '<S99>/AND'
       *  Logic: '<S99>/OR'
       *  RelationalOperator: '<S99>/Relational Operator'
       *  UnitDelay: '<S99>/Unit Delay'
       */
      rtb_Is_Absolute_Translation = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch1_as <= rtb_UnitDelay1_gi) && rtb_Is_Absolute_Steering));

      /* If: '<S99>/If' */
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
        /* Disable for If: '<S101>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S99>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S101>/Action Port'
         */
        /* If: '<S101>/If' incorporates:
         *  RelationalOperator: '<S101>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S101>/Is_Last_Point' incorporates:
           *  ActionPort: '<S104>/Action Port'
           */
          /* InitializeConditions for If: '<S101>/If' incorporates:
           *  UnitDelay: '<S104>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S101>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S101>/Is_Last_Point' incorporates:
           *  ActionPort: '<S104>/Action Port'
           */
          /* Switch: '<S104>/Switch' incorporates:
           *  Constant: '<S106>/Constant'
           *  Logic: '<S104>/OR'
           *  RelationalOperator: '<S106>/Compare'
           *  UnitDelay: '<S104>/Unit Delay'
           */
          rtb_Switch_b1 = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
                           (rtb_Switch1_as <= Spline_Stop_Radius));

          /* If: '<S104>/If' */
          if (rtb_Switch_b1) {
            /* Outputs for IfAction SubSystem: '<S104>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S107>/Action Port'
             */
            /* Merge: '<S96>/Merge2' incorporates:
             *  Constant: '<S107>/Constant'
             *  SignalConversion generated from: '<S107>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S107>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S107>/Constant1'
             */
            rtb_OR_ao = false;

            /* End of Outputs for SubSystem: '<S104>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S104>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S108>/Action Port'
             */
            /* Merge: '<S96>/Merge2' incorporates:
             *  Constant: '<S108>/Constant'
             *  SignalConversion generated from: '<S108>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S108>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S108>/Constant1'
             */
            rtb_OR_ao = true;

            /* End of Outputs for SubSystem: '<S104>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S104>/If' */

          /* Merge: '<S96>/Merge4' incorporates:
           *  SignalConversion: '<S104>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S104>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_Switch_b1;

          /* End of Outputs for SubSystem: '<S101>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S101>/Increment_Search' incorporates:
           *  ActionPort: '<S103>/Action Port'
           */
          /* Merge: '<S96>/Merge2' incorporates:
           *  Constant: '<S103>/Constant'
           *  SignalConversion generated from: '<S103>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S103>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S103>/Constant1'
           */
          rtb_OR_ao = false;

          /* Merge: '<S96>/Merge4' incorporates:
           *  Constant: '<S105>/FixPt Constant'
           *  SignalConversion: '<S103>/Signal Copy'
           *  Sum: '<S105>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh
            + 1.0;

          /* End of Outputs for SubSystem: '<S101>/Increment_Search' */
        }

        /* End of If: '<S101>/If' */
        /* End of Outputs for SubSystem: '<S99>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S99>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        /* Sum: '<S109>/FixPt Sum1' incorporates:
         *  Constant: '<S109>/FixPt Constant'
         */
        rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S102>/Selector1' incorporates:
         *  Selector: '<S92>/Selector1'
         */
        rtb_Product_ku = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) - 1];

        /* Sum: '<S110>/Subtract' incorporates:
         *  Selector: '<S102>/Selector1'
         *  Sum: '<S110>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product_ku - rtb_Switch2_c;

        /* Selector: '<S102>/Selector1' incorporates:
         *  Selector: '<S92>/Selector1'
         */
        rtb_Switch2_j = rtb_Ref_Poses[((int32_T)rtb_Switch1_as) + 5];

        /* Sum: '<S110>/Subtract' incorporates:
         *  Selector: '<S102>/Selector1'
         *  Sum: '<S110>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2_j - rtb_Switch1_h;

        /* Math: '<S110>/Hypot' */
        rtb_Init_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S110>/Divide' */
        rtb_Switch1_as = rtb_Minus_n[1];

        /* UnaryMinus: '<S110>/Unary Minus' */
        rtb_Switch2_p = rtb_Minus_n[0];

        /* Product: '<S110>/Product' incorporates:
         *  Product: '<S110>/Divide'
         *  UnaryMinus: '<S110>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch1_as / rtb_Init_e) * rtb_UnitDelay1_gi;
        rtb_Minus_n[1] = ((-rtb_Switch2_p) / rtb_Init_e) * rtb_UnitDelay1_gi;

        /* Sum: '<S110>/Add1' incorporates:
         *  Sum: '<S110>/Add2'
         *  Sum: '<S110>/Minus'
         */
        rtb_Switch2_p = rtb_Product_ku - rtb_Minus_n[0];

        /* Sum: '<S110>/Minus4' incorporates:
         *  Sum: '<S110>/Add2'
         *  Sum: '<S110>/Minus'
         */
        rtb_Product_ku = (rtb_Product_ku + rtb_Minus_n[0]) - rtb_Switch2_p;

        /* Sum: '<S110>/Minus5' incorporates:
         *  Concatenate: '<S92>/Matrix Concatenate2'
         *  Sum: '<S110>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[0] - rtb_Switch2_p;

        /* Sum: '<S110>/Add' incorporates:
         *  Sum: '<S110>/Add2'
         *  Sum: '<S110>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch2_c - rtb_Minus_n[0];

        /* Sum: '<S110>/Minus' incorporates:
         *  Sum: '<S110>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_as;

        /* DotProduct: '<S110>/Dot Product' incorporates:
         *  Concatenate: '<S92>/Matrix Concatenate2'
         *  Sum: '<S110>/Minus'
         *  Sum: '<S110>/Minus1'
         *  Sum: '<S110>/Minus5'
         */
        rtb_Init_e = (rtb_Reshapey[0] - rtb_Switch1_as) * rtb_Switch2_p;

        /* DotProduct: '<S110>/Dot Product1' incorporates:
         *  Sum: '<S110>/Minus'
         */
        rtb_Switch2_c = rtb_Switch2_p * rtb_Switch2_p;

        /* DotProduct: '<S110>/Dot Product2' incorporates:
         *  Sum: '<S110>/Minus4'
         *  Sum: '<S110>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Product_ku *
          rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S110>/Dot Product3' incorporates:
         *  Sum: '<S110>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product_ku * rtb_Product_ku;

        /* Sum: '<S110>/Add1' incorporates:
         *  Sum: '<S110>/Add2'
         *  Sum: '<S110>/Minus'
         */
        rtb_Switch2_p = rtb_Switch2_j - rtb_Minus_n[1];

        /* Sum: '<S110>/Minus4' incorporates:
         *  Sum: '<S110>/Add2'
         *  Sum: '<S110>/Minus'
         */
        rtb_Product_ku = (rtb_Switch2_j + rtb_Minus_n[1]) - rtb_Switch2_p;

        /* Sum: '<S110>/Minus5' incorporates:
         *  Concatenate: '<S92>/Matrix Concatenate2'
         *  Sum: '<S110>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Reshapey[1] - rtb_Switch2_p;

        /* Sum: '<S110>/Add' incorporates:
         *  Sum: '<S110>/Add2'
         *  Sum: '<S110>/Minus1'
         */
        rtb_Switch1_as = rtb_Switch1_h - rtb_Minus_n[1];

        /* Sum: '<S110>/Minus' incorporates:
         *  Sum: '<S110>/Minus1'
         */
        rtb_Switch2_p -= rtb_Switch1_as;

        /* DotProduct: '<S110>/Dot Product' incorporates:
         *  Concatenate: '<S92>/Matrix Concatenate2'
         *  Sum: '<S110>/Minus'
         *  Sum: '<S110>/Minus1'
         *  Sum: '<S110>/Minus5'
         */
        rtb_Init_e += (rtb_Reshapey[1] - rtb_Switch1_as) * rtb_Switch2_p;

        /* RelationalOperator: '<S111>/Compare' incorporates:
         *  Constant: '<S111>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Init_e >= 0.0);

        /* RelationalOperator: '<S110>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S110>/Dot Product1'
         *  Sum: '<S110>/Minus'
         */
        rtb_OR_ao = (rtb_Init_e <= ((rtb_Switch2_p * rtb_Switch2_p) +
          rtb_Switch2_c));

        /* DotProduct: '<S110>/Dot Product2' incorporates:
         *  Sum: '<S110>/Minus4'
         *  Sum: '<S110>/Minus5'
         */
        rtb_Init_e = (rtb_Product_ku * rtb_Rotationmatrixfromlocalto_0) +
          rtb_MatrixConcatenate_b_idx_0;

        /* Merge: '<S96>/Merge4' incorporates:
         *  Constant: '<S112>/Constant'
         *  DataTypeConversion: '<S102>/Data Type Conversion'
         *  DotProduct: '<S110>/Dot Product3'
         *  Logic: '<S110>/AND'
         *  RelationalOperator: '<S110>/LessThanOrEqual1'
         *  RelationalOperator: '<S112>/Compare'
         *  Sum: '<S102>/Add'
         *  Sum: '<S110>/Minus4'
         */
        Code_Gen_Model_B.Spline_Index = ((real_T)(((rtb_Is_Absolute_Steering &&
          rtb_OR_ao) && (rtb_Init_e >= 0.0)) && (rtb_Init_e <= ((rtb_Product_ku *
          rtb_Product_ku) + rtb_MatrixConcatenate_b_idx_1)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S96>/Merge2' incorporates:
         *  Constant: '<S102>/Constant2'
         *  SignalConversion generated from: '<S102>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S102>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S102>/Constant1'
         */
        rtb_OR_ao = false;

        /* End of Outputs for SubSystem: '<S99>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S99>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S100>/Action Port'
         */
        /* Merge: '<S96>/Merge2' incorporates:
         *  Constant: '<S100>/Constant2'
         *  SignalConversion generated from: '<S100>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S100>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S100>/Constant1'
         */
        rtb_OR_ao = false;

        /* Merge: '<S96>/Merge4' incorporates:
         *  SignalConversion generated from: '<S100>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S99>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S96>/Merge1' incorporates:
       *  Constant: '<S99>/Constant'
       *  SignalConversion generated from: '<S99>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S99>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation;

      /* End of Outputs for SubSystem: '<S96>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S96>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S98>/Action Port'
       */
      /* Merge: '<S96>/Merge1' incorporates:
       *  Constant: '<S98>/Constant'
       *  SignalConversion generated from: '<S98>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S96>/Merge2' incorporates:
       *  Constant: '<S98>/Constant1'
       *  SignalConversion generated from: '<S98>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S98>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S98>/Constant2'
       */
      rtb_OR_ao = false;

      /* Merge: '<S96>/Merge4' incorporates:
       *  SignalConversion generated from: '<S98>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Index = Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S96>/Escape_Auto_Driving' */
    }

    /* End of If: '<S96>/If' */

    /* If: '<S92>/If1' */
    if (!rtb_OR_ao) {
      /* Outputs for IfAction SubSystem: '<S92>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S97>/Action Port'
       */
      /* Bias: '<S113>/Add Constant' incorporates:
       *  Bias: '<S113>/Bias'
       *  Sum: '<S113>/Subtract'
       */
      rtb_Switch1_as = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S113>/Selector4' incorporates:
       *  Bias: '<S113>/Bias1'
       *  Constant: '<S115>/FixPt Constant'
       *  Sum: '<S115>/FixPt Sum1'
       */
      rtb_Reshapey[0] = Code_Gen_Model_B.Spline_Index - 1.0;
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S113>/Selector4' */
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - ((int32_T)rtb_Reshapey[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = rtb_Bias1_p + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Reshapey_0 = (int32_T)rtb_Reshapey[0];

      /* Concatenate: '<S113>/Matrix Concatenate' incorporates:
       *  Bias: '<S113>/Add Constant1'
       *  Gain: '<S116>/Gain'
       *  Gain: '<S117>/Gain'
       *  Selector: '<S113>/Selector'
       *  Selector: '<S113>/Selector1'
       *  Selector: '<S113>/Selector2'
       *  Selector: '<S113>/Selector3'
       *  Selector: '<S92>/Selector1'
       *  Sum: '<S116>/Subtract'
       *  Sum: '<S117>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[8] = (2.0 * rtb_Ref_Poses[6]) - rtb_Ref_Poses[7];
      for (i = 0; i < 6; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 9] = rtb_Ref_Poses[i + 6];
      }

      for (i = 0; i < 2; i++) {
        /* Selector: '<S113>/Selector4' incorporates:
         *  Selector: '<S113>/Selector'
         */
        rtb_Num_Segments = (i << 3);
        rtb_Assignment[rtb_Num_Segments + 7] = (rtb_Ref_Poses[((6 * i) +
          ((int32_T)Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) -
          rtb_Ref_Poses[(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) +
                         (6 * i)) - 1];

        /* Selector: '<S113>/Selector4' incorporates:
         *  Bias: '<S113>/Add Constant1'
         *  Gain: '<S116>/Gain'
         *  Selector: '<S113>/Selector'
         *  Selector: '<S113>/Selector1'
         *  Sum: '<S116>/Subtract'
         */
        for (s118_iter = 0; s118_iter <= rtb_Bias1_p; s118_iter++) {
          rtb_Selector4[s118_iter + (Code_Gen_Model_DW.Selector4_DIMS1[0] * i)] =
            rtb_Assignment[((s118_iter + rtb_Reshapey_0) + rtb_Num_Segments) - 1];
        }
      }

      /* End of Concatenate: '<S113>/Matrix Concatenate' */

      /* Assignment: '<S113>/Assignment' incorporates:
       *  Selector: '<S113>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, (sizeof(real_T)) << 4U);
      rtb_Bias1_p = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s118_iter = 0; s118_iter < rtb_Bias1_p; s118_iter++) {
          rtb_Assignment[s118_iter + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            s118_iter];
        }

        i += 8;
      }

      /* End of Assignment: '<S113>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S114>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S118>/While Iterator'
       */
      s118_iter = 1;
      do {
        rtb_Switch2_p = rtb_Assignment[s118_iter + 1];
        rtb_Reshapey[0] = rtb_Switch2_p - rtb_Assignment[s118_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s118_iter] - rtb_Assignment[s118_iter +
          2];
        rtb_Add2_f[0] = rtb_Switch2_p - rtb_Assignment[s118_iter];
        rtb_Switch2_p = rtb_Assignment[s118_iter + 9];
        rtb_Reshapey[1] = rtb_Switch2_p - rtb_Assignment[s118_iter + 7];
        rtb_Switch2_c = rtb_Assignment[s118_iter + 8];
        rtb_Minus_n[1] = rtb_Switch2_c - rtb_Assignment[s118_iter + 10];
        rtb_Add2_f[1] = rtb_Switch2_p - rtb_Switch2_c;
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
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Assignment[s118_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Reshapey[1] * rtb_Switch2_j) +
            (rtb_Minus_n[1] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_0)) + rtb_Switch2_c;
          rtb_Switch2_j = ((3.0 * rtb_Switch1_h) - (4.0 * rtb_Init_e)) + 1.0;
          rtb_Product_ku = (2.0 * rtb_Init_e) - (3.0 * rtb_Switch1_h);
          rtb_Switch1_h = (rtb_Init_e - rtb_Switch1_h) * 6.0;
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Reshapey[0] * rtb_Switch2_j)
            + (rtb_Minus_n[0] * rtb_Product_ku)) * 0.5) + (rtb_Add2_f[0] *
            rtb_Switch1_h);
          rtb_Switch2_p = (((rtb_Reshapey[1] * rtb_Switch2_j) + (rtb_Minus_n[1] *
            rtb_Product_ku)) * 0.5) + (rtb_Add2_f[1] * rtb_Switch1_h);
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
             rtb_Switch2_p)) / rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_0, rtb_Switch2_p), 3.0);
        }

        if (s118_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s118_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Init_e = rtb_Switch1_as - ((real_T)s118_iter);
        rtb_Num_Segments = s118_iter;
        s118_iter++;
      } while ((rtb_Init_e >= 4.0) && (s118_iter <= 3));

      /* End of Outputs for SubSystem: '<S114>/Sampling_Loop' */

      /* SignalConversion generated from: '<S97>/Position_and_Curvature' incorporates:
       *  Assignment: '<S118>/Assignment'
       *  Merge: '<S92>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S92>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
       *  ActionPort: '<S95>/Action Port'
       */
      /* Product: '<S95>/Product' incorporates:
       *  Selector: '<S92>/Selector'
       *  Selector: '<S92>/Selector1'
       */
      rtb_Init_e = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S95>/Product1' incorporates:
       *  Selector: '<S92>/Selector'
       *  Selector: '<S92>/Selector1'
       */
      rtb_Switch1_as = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 5];
      for (i = 0; i < 50; i++) {
        /* Product: '<S95>/Product' incorporates:
         *  Constant: '<S95>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Init_e;

        /* Product: '<S95>/Product1' incorporates:
         *  Constant: '<S95>/Constant2'
         *  Product: '<S95>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch1_as;
      }

      /* Assignment: '<S95>/Assignment' incorporates:
       *  Concatenate: '<S95>/Matrix Concatenate'
       *  Merge: '<S92>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S95>/Assignment' */

      /* SignalConversion generated from: '<S95>/Num_Segments' incorporates:
       *  Constant: '<S95>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
    }

    /* End of If: '<S92>/If1' */

    /* Concatenate: '<S93>/Matrix Concatenate' incorporates:
     *  Merge: '<S92>/Merge'
     *  Selector: '<S93>/Selector'
     *  Selector: '<S93>/Selector1'
     *  Selector: '<S93>/Selector3'
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

    /* End of Concatenate: '<S93>/Matrix Concatenate' */

    /* MATLAB Function: '<S93>/Distance Along Curve' incorporates:
     *  Concatenate: '<S93>/Matrix Concatenate'
     *  Selector: '<S93>/Selector4'
     *  Selector: '<S93>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s118_iter = 0; s118_iter < 149; s118_iter++) {
      /* Outputs for Iterator SubSystem: '<S114>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S118>/While Iterator'
       */
      rtb_Assignment_d[s118_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s118_iter + 1] -
         rtb_MatrixConcatenate_o[s118_iter], rtb_MatrixConcatenate_o[s118_iter +
         151] - rtb_MatrixConcatenate_o[s118_iter + 150]) +
        rtb_Assignment_d[s118_iter];

      /* End of Outputs for SubSystem: '<S114>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S93>/Distance Along Curve' */

    /* MATLAB Function: '<S93>/Find closest index to curve' incorporates:
     *  Concatenate: '<S93>/Matrix Concatenate'
     *  Selector: '<S144>/Selector'
     *  Selector: '<S93>/Selector4'
     *  Selector: '<S93>/Selector5'
     */
    for (s118_iter = 0; s118_iter < 150; s118_iter++) {
      /* Outputs for Iterator SubSystem: '<S114>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S118>/While Iterator'
       */
      distance_from_robot[s118_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s118_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s118_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S114>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s118_iter = 1;
    } else {
      s118_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s118_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s118_iter == 0) {
      rtb_Switch1_as = distance_from_robot[0];
    } else {
      rtb_Switch1_as = distance_from_robot[s118_iter - 1];
      for (rtb_Bias1_p = s118_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Init_e = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch1_as > rtb_Init_e) {
          rtb_Switch1_as = rtb_Init_e;
        }
      }
    }

    s118_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s118_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch1_as) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S144>/Selector' incorporates:
     *  Constant: '<S144>/Constant'
     *  MATLAB Function: '<S93>/Find closest index to curve'
     *  MinMax: '<S144>/Min'
     */
    rtb_Init_e = rtb_Assignment_d[((int32_T)fmin(50.0, s118_iter)) - 1];

    /* If: '<S144>/If' incorporates:
     *  RelationalOperator: '<S144>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S144>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S147>/Action Port'
       */
      /* SignalConversion generated from: '<S147>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S149>/FixPt Sum1' incorporates:
       *  Constant: '<S149>/FixPt Constant'
       */
      rtb_Switch1_as = Code_Gen_Model_B.Spline_Index - 1.0;

      /* SignalConversion generated from: '<S147>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S147>/Selector11'
       *  Selector: '<S147>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 11];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 11];

      /* SignalConversion generated from: '<S147>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S8>/Merge8'
       *  Selector: '<S147>/Selector1'
       *  Selector: '<S147>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch1_as) + 17];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Index) + 17];

      /* S-Function (sfix_look1_dyn): '<S147>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S147>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch1_as), &rtb_Minus_n[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S147>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S147>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S147>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Init_e,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S144>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S144>/Latch' incorporates:
       *  ActionPort: '<S148>/Action Port'
       */
      /* SignalConversion generated from: '<S148>/In1' incorporates:
       *  UnitDelay: '<S144>/Unit Delay1'
       */
      rtb_Switch1_as = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S148>/In2' incorporates:
       *  UnitDelay: '<S144>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4g;

      /* End of Outputs for SubSystem: '<S144>/Latch' */
    }

    /* End of If: '<S144>/If' */

    /* MinMax: '<S91>/Min' incorporates:
     *  Lookup_n-D: '<S91>/Lookahead Distance'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_UnitDelay1_gi = fmin(rtb_UnitDelay1_gi, look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled7,
       Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S93>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S143>/While Iterator'
     */
    s143_iter = 1U;
    rtb_Is_Absolute_Translation = true;
    while (rtb_Is_Absolute_Translation && (s143_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S93>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S143>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s143_iter;
      rtb_Is_Absolute_Translation =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s118_iter - 1] + rtb_UnitDelay1_gi)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s143_iter++;
    }

    /* End of Outputs for SubSystem: '<S93>/Find first index that meets distance target' */

    /* Switch: '<S146>/Switch' incorporates:
     *  Concatenate: '<S93>/Matrix Concatenate'
     *  Constant: '<S143>/Constant'
     *  Constant: '<S146>/Constant1'
     *  Constant: '<S146>/Constant2'
     *  Constant: '<S146>/Constant3'
     *  Constant: '<S93>/Constant'
     *  Logic: '<S143>/AND'
     *  MATLAB Function: '<S93>/Find closest index to curve'
     *  Math: '<S146>/Hypot'
     *  Merge: '<S8>/Merge8'
     *  MinMax: '<S146>/Min'
     *  MinMax: '<S146>/Min1'
     *  Product: '<S143>/Product'
     *  Product: '<S146>/Divide'
     *  Product: '<S146>/Product'
     *  Product: '<S146>/Product1'
     *  RelationalOperator: '<S143>/Relational Operator'
     *  RelationalOperator: '<S143>/Relational Operator1'
     *  RelationalOperator: '<S93>/Relational Operator'
     *  Selector: '<S143>/Selector'
     *  Selector: '<S143>/Selector1'
     *  Selector: '<S144>/Selector'
     *  Selector: '<S93>/Selector10'
     *  Selector: '<S93>/Selector7'
     *  Selector: '<S93>/Selector8'
     *  Selector: '<S93>/Selector9'
     *  Sqrt: '<S146>/Sqrt'
     *  Sum: '<S143>/Add'
     *  Sum: '<S146>/Subtract'
     *  Sum: '<S146>/Subtract1'
     *  Sum: '<S93>/Subtract'
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

    /* End of Switch: '<S146>/Switch' */

    /* Logic: '<S94>/OR' */
    rtb_OR_ao = (rtb_Is_Absolute_Steering ||
                 (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S94>/Switch1' incorporates:
     *  Switch: '<S94>/Switch'
     *  UnitDelay: '<S94>/Unit Delay'
     */
    if (rtb_OR_ao) {
      /* Merge: '<S10>/Merge2' incorporates:
       *  Constant: '<S94>/Constant3'
       *  SignalConversion: '<S94>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Init_e = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S10>/Merge2' incorporates:
       *  SignalConversion: '<S94>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_UnitDelay1_gi;
      rtb_Init_e = rtb_Merge1;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion: '<S94>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Init_e;

    /* Selector: '<S93>/Selector6' incorporates:
     *  Concatenate: '<S93>/Matrix Concatenate'
     *  Selector: '<S93>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S93>/Selector2' incorporates:
     *  Concatenate: '<S93>/Matrix Concatenate'
     *  Selector: '<S93>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S94>/Switch2' incorporates:
     *  Sum: '<S150>/Subtract'
     *  Sum: '<S150>/Subtract1'
     *  Trigonometry: '<S150>/Atan2'
     *  UnitDelay: '<S94>/Unit Delay1'
     */
    if (rtb_OR_ao) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch1_h = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S94>/Switch2' */

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion: '<S94>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch1_h;

    /* Merge: '<S10>/Merge7' incorporates:
     *  SignalConversion: '<S91>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge1' incorporates:
     *  Constant: '<S94>/Constant2'
     *  SignalConversion generated from: '<S91>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S10>/Merge4' incorporates:
     *  Constant: '<S94>/Constant5'
     *  SignalConversion generated from: '<S91>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S10>/Merge5' incorporates:
     *  Constant: '<S94>/Constant6'
     *  SignalConversion generated from: '<S91>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S10>/Merge6' incorporates:
     *  Constant: '<S94>/Constant1'
     *  SignalConversion generated from: '<S91>/Gyro_Angle_Adjustment'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = 0.0;

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Index;

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_UnitDelay1_gi;

    /* Update for UnitDelay: '<S144>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch1_as;

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4g = rtb_Merge1;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Init_e;

    /* Update for UnitDelay: '<S94>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch1_h;

    /* End of Outputs for SubSystem: '<S10>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S10>/Pass Through' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    /* Merge: '<S10>/Merge7' incorporates:
     *  Constant: '<S90>/Constant'
     *  SignalConversion generated from: '<S90>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = false;

    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion generated from: '<S90>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S10>/Merge1' incorporates:
     *  SignalConversion generated from: '<S90>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S10>/Merge2' incorporates:
     *  SignalConversion generated from: '<S90>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S10>/Merge3' incorporates:
     *  SignalConversion generated from: '<S90>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S10>/Merge4' incorporates:
     *  SignalConversion generated from: '<S90>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation;

    /* Merge: '<S10>/Merge5' incorporates:
     *  SignalConversion generated from: '<S90>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S10>/Merge6' incorporates:
     *  SignalConversion generated from: '<S90>/Gyro_Angle_Adjustment_In'
     */
    Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF = rtb_UnitDelay1_gi;

    /* End of Outputs for SubSystem: '<S10>/Pass Through' */
  }

  /* End of If: '<S10>/If' */

  /* Signum: '<S244>/Sign2' incorporates:
   *  UnitDelay: '<S244>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Add_nh = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S244>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S244>/Product1' incorporates:
   *  Signum: '<S244>/Sign1'
   *  Signum: '<S244>/Sign2'
   */
  rtb_Add_nh *= rtb_Add_ie;
  if (rtIsNaN(rtb_Add_nh)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_nh, 256.0);
  }

  /* Switch: '<S244>/Switch' incorporates:
   *  Constant: '<S244>/Constant'
   *  Constant: '<S249>/Constant'
   *  Constant: '<S250>/Constant'
   *  Logic: '<S244>/or'
   *  Product: '<S244>/Product1'
   *  RelationalOperator: '<S249>/Compare'
   *  RelationalOperator: '<S250>/Compare'
   *  UnitDelay: '<S244>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_p = 0.0;
  }

  /* End of Switch: '<S244>/Switch' */

  /* Switch: '<S255>/Init' incorporates:
   *  UnitDelay: '<S255>/FixPt Unit Delay1'
   *  UnitDelay: '<S255>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S255>/Init' */

  /* RelationalOperator: '<S251>/Compare' incorporates:
   *  Constant: '<S251>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_p == 0.0);

  /* RelationalOperator: '<S252>/Compare' incorporates:
   *  Constant: '<S252>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_p > 0.0);

  /* Abs: '<S244>/Abs' incorporates:
   *  Sum: '<S244>/Subtract'
   *  UnitDelay: '<S244>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S244>/Switch5' incorporates:
   *  Constant: '<S244>/Constant1'
   *  Switch: '<S244>/Switch1'
   *  UnaryMinus: '<S244>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S244>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S244>/Constant4'
     *  Constant: '<S244>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S244>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S244>/Constant2'
     *  Constant: '<S244>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S244>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S244>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S244>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S244>/Constant10'
     *  Constant: '<S244>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S244>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S244>/Constant7'
     *  Constant: '<S244>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S244>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S244>/Lookup Table Dynamic1'
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

    /* Switch: '<S244>/Switch3' incorporates:
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S244>/Constant3'
     *  UnaryMinus: '<S244>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_nh = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Add_nh = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S244>/Switch3' */
  }

  /* End of Switch: '<S244>/Switch5' */

  /* Product: '<S244>/Product' incorporates:
   *  Switch: '<S244>/Switch1'
   */
  rtb_uDLookupTable_l = rtb_Add_nh * rtb_Merge1;

  /* Sum: '<S253>/Sum1' */
  rtb_UnitDelay1_gi = rtb_Switch2_p - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S254>/Switch2' incorporates:
   *  RelationalOperator: '<S254>/LowerRelop1'
   */
  if (!(rtb_UnitDelay1_gi > rtb_uDLookupTable_l)) {
    /* Switch: '<S244>/Switch2' incorporates:
     *  Constant: '<S244>/Constant1'
     *  Switch: '<S244>/Switch4'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S244>/Switch4' incorporates:
       *  Constant: '<S244>/Constant1'
       */
      rtb_Switch1_as = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S244>/Switch4' incorporates:
       *  Constant: '<S244>/Constant3'
       *  UnaryMinus: '<S244>/Unary Minus1'
       */
      rtb_Switch1_as = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S244>/Switch2' */

    /* Product: '<S244>/Product2' */
    rtb_Switch1_as *= rtb_Merge1;

    /* Switch: '<S254>/Switch' incorporates:
     *  RelationalOperator: '<S254>/UpperRelop'
     */
    if (rtb_UnitDelay1_gi < rtb_Switch1_as) {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    } else {
      rtb_uDLookupTable_l = rtb_UnitDelay1_gi;
    }

    /* End of Switch: '<S254>/Switch' */
  }

  /* End of Switch: '<S254>/Switch2' */

  /* Sum: '<S253>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_l +
    rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S247>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S247>/Switch' incorporates:
     *  Constant: '<S271>/Constant3'
     *  Constant: '<S271>/Constant4'
     *  Math: '<S271>/Math Function'
     *  Sum: '<S247>/Subtract'
     *  Sum: '<S271>/Add1'
     *  Sum: '<S271>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - rtb_thetay) +
       3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S247>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S247>/Switch' */

  /* Sum: '<S267>/Add1' incorporates:
   *  Constant: '<S267>/Constant3'
   *  Constant: '<S267>/Constant4'
   *  Math: '<S267>/Math Function'
   *  Sum: '<S246>/Add'
   *  Sum: '<S266>/Sum'
   *  Sum: '<S267>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - (rtb_thetay +
       Code_Gen_Model_B.Gyro_Angle_Adjustment_SPF)) + 3.1415926535897931,
     6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S269>/Sum1' incorporates:
   *  Constant: '<S266>/Constant2'
   *  Product: '<S269>/Product'
   *  Sum: '<S269>/Sum'
   *  UnitDelay: '<S269>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_MatrixConcatenate_b_idx_0 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE;

  /* Product: '<S266>/Product' incorporates:
   *  Constant: '<S266>/Constant3'
   */
  rtb_UnitDelay1_gi = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S268>/Diff' incorporates:
   *  UnitDelay: '<S268>/UD'
   *
   * Block description for '<S268>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S268>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_UnitDelay1_gi - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S266>/Saturation' */
  if (rtb_Add_i > Steering_Heading_Control_D_UL) {
    rtb_Add_i = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_i < Steering_Heading_Control_D_LL) {
    rtb_Add_i = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S266>/Add' incorporates:
   *  Gain: '<S266>/Gain1'
   *  Saturate: '<S266>/Saturation'
   */
  rtb_Init_e = (Steering_Heading_Control_P * rtb_MatrixConcatenate_b_idx_0) +
    rtb_Add_i;

  /* Sum: '<S266>/Subtract' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_uDLookupTable_l = Steering_Heading_Control_Total_UL - rtb_Init_e;

  /* Sum: '<S266>/Sum2' incorporates:
   *  Gain: '<S266>/Gain2'
   *  UnitDelay: '<S266>/Unit Delay'
   */
  rtb_Switch1_as = (Steering_Heading_Control_I * rtb_MatrixConcatenate_b_idx_0)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S270>/Switch2' incorporates:
   *  RelationalOperator: '<S270>/LowerRelop1'
   */
  if (!(rtb_Switch1_as > rtb_uDLookupTable_l)) {
    /* Sum: '<S266>/Subtract1' incorporates:
     *  Constant: '<S266>/Constant1'
     */
    rtb_Switch1_h = Steering_Heading_Control_Total_LL - rtb_Init_e;

    /* Switch: '<S270>/Switch' incorporates:
     *  RelationalOperator: '<S270>/UpperRelop'
     */
    if (rtb_Switch1_as < rtb_Switch1_h) {
      rtb_uDLookupTable_l = rtb_Switch1_h;
    } else {
      rtb_uDLookupTable_l = rtb_Switch1_as;
    }

    /* End of Switch: '<S270>/Switch' */
  }

  /* End of Switch: '<S270>/Switch2' */

  /* Saturate: '<S266>/Saturation1' */
  if (rtb_uDLookupTable_l > Steering_Heading_Control_I_UL) {
    rtb_Switch1_as = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_l < Steering_Heading_Control_I_LL) {
    rtb_Switch1_as = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch1_as = rtb_uDLookupTable_l;
  }

  /* End of Saturate: '<S266>/Saturation1' */

  /* Sum: '<S266>/Add1' */
  rtb_Add_i = rtb_Init_e + rtb_Switch1_as;

  /* Saturate: '<S266>/Saturation2' */
  if (rtb_Add_i > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S266>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_i < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S266>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S266>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_i;
  }

  /* End of Saturate: '<S266>/Saturation2' */

  /* Switch: '<S246>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S257>/Switch' incorporates:
     *  Abs: '<S257>/Abs'
     *  Constant: '<S257>/Constant'
     *  Constant: '<S265>/Constant'
     *  RelationalOperator: '<S265>/Compare'
     */
    if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
        Steering_Heading_Control_Deadzone) {
      rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Localized_PID;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S257>/Switch' */
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  }

  /* End of Switch: '<S246>/Switch' */

  /* Signum: '<S256>/Sign2' incorporates:
   *  UnitDelay: '<S256>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Localized_Cmd)) {
    rtb_Add_nh = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Localized_Cmd < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (Code_Gen_Model_B.Steering_Localized_Cmd > 0.0);
  }

  /* Signum: '<S256>/Sign1' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    rtb_Add_ie = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Product: '<S256>/Product1' incorporates:
   *  Signum: '<S256>/Sign1'
   *  Signum: '<S256>/Sign2'
   */
  rtb_Add_nh *= rtb_Add_ie;
  if (rtIsNaN(rtb_Add_nh)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Add_nh, 256.0);
  }

  /* Switch: '<S256>/Switch' incorporates:
   *  Constant: '<S256>/Constant'
   *  Constant: '<S258>/Constant'
   *  Constant: '<S259>/Constant'
   *  Logic: '<S256>/or'
   *  Product: '<S256>/Product1'
   *  RelationalOperator: '<S258>/Compare'
   *  RelationalOperator: '<S259>/Compare'
   *  UnitDelay: '<S256>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Steering_Localized_Cmd == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_j = 0.0;
  }

  /* End of Switch: '<S256>/Switch' */

  /* Switch: '<S264>/Init' incorporates:
   *  UnitDelay: '<S264>/FixPt Unit Delay1'
   *  UnitDelay: '<S264>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init_e = rtb_Switch2_j;
  } else {
    rtb_Init_e = Code_Gen_Model_B.Steering_Localized_Cmd;
  }

  /* End of Switch: '<S264>/Init' */

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Constant: '<S260>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_j == 0.0);

  /* RelationalOperator: '<S261>/Compare' incorporates:
   *  Constant: '<S261>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_j > 0.0);

  /* Abs: '<S256>/Abs' incorporates:
   *  Sum: '<S256>/Subtract'
   *  UnitDelay: '<S256>/Unit Delay'
   */
  rtb_Product_ku = fabs(Code_Gen_Model_B.Steering_Localized_Cmd -
                        rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S256>/Switch5' incorporates:
   *  Constant: '<S256>/Constant1'
   *  Switch: '<S256>/Switch1'
   *  UnaryMinus: '<S256>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation) {
    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S256>/Constant4'
     *  Constant: '<S256>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S256>/Constant2'
     *  Constant: '<S256>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S256>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S256>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S256>/Constant10'
     *  Constant: '<S256>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Localized_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S256>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S256>/Constant7'
     *  Constant: '<S256>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Localized_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S256>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S256>/Lookup Table Dynamic1'
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

    /* Switch: '<S256>/Switch3' incorporates:
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S256>/Constant3'
     *  UnaryMinus: '<S256>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Add_nh = Steering_Localized_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Add_nh = -Steering_Localized_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S256>/Switch3' */
  }

  /* End of Switch: '<S256>/Switch5' */

  /* Product: '<S256>/Product' incorporates:
   *  Switch: '<S256>/Switch1'
   */
  rtb_Switch1_h = rtb_Add_nh * rtb_Product_ku;

  /* Sum: '<S262>/Sum1' */
  rtb_Switch2_j -= rtb_Init_e;

  /* Switch: '<S263>/Switch2' incorporates:
   *  RelationalOperator: '<S263>/LowerRelop1'
   */
  if (!(rtb_Switch2_j > rtb_Switch1_h)) {
    /* Switch: '<S256>/Switch2' incorporates:
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S256>/Constant3'
     *  Switch: '<S256>/Switch4'
     *  UnaryMinus: '<S256>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation) {
      rtb_Add_nh = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S256>/Switch4' incorporates:
       *  Constant: '<S256>/Constant1'
       */
      rtb_Add_nh = Steering_Localized_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Add_nh = -Steering_Localized_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S256>/Product2' incorporates:
     *  Switch: '<S256>/Switch2'
     */
    rtb_Switch1_h = rtb_Add_nh * rtb_Product_ku;

    /* Switch: '<S263>/Switch' incorporates:
     *  RelationalOperator: '<S263>/UpperRelop'
     */
    if (!(rtb_Switch2_j < rtb_Switch1_h)) {
      rtb_Switch1_h = rtb_Switch2_j;
    }

    /* End of Switch: '<S263>/Switch' */
  }

  /* End of Switch: '<S263>/Switch2' */

  /* Sum: '<S262>/Sum' */
  Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch1_h + rtb_Init_e;

  /* Outputs for Atomic SubSystem: '<S159>/Initialize Function' */
  /* Sum: '<S245>/Add' incorporates:
   *  Constant: '<S245>/Constant'
   *  Constant: '<S245>/Constant4'
   *  Constant: '<S245>/Constant5'
   *  Trigonometry: '<S245>/Atan2'
   */
  rtb_Init_e = rt_atan2d_snf(Distance_FL_y, 0.365125) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S159>/Initialize Function' */

  /* Fcn: '<S279>/r->x' incorporates:
   *  Fcn: '<S284>/r->x'
   *  Fcn: '<S289>/r->x'
   *  Fcn: '<S294>/r->x'
   */
  rtb_Switch2_p = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S273>/Add' incorporates:
   *  Fcn: '<S279>/r->x'
   *  Fcn: '<S280>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init_e))
    + rtb_Switch2_p;

  /* Fcn: '<S279>/theta->y' incorporates:
   *  Fcn: '<S284>/theta->y'
   *  Fcn: '<S289>/theta->y'
   *  Fcn: '<S294>/theta->y'
   */
  rtb_Switch2_c = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S273>/Add' incorporates:
   *  Fcn: '<S279>/theta->y'
   *  Fcn: '<S280>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init_e))
    + rtb_Switch2_c;

  /* Sum: '<S274>/Add' incorporates:
   *  Fcn: '<S285>/r->x'
   *  Fcn: '<S285>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_c;

  /* Sum: '<S275>/Add' incorporates:
   *  Fcn: '<S290>/r->x'
   *  Fcn: '<S290>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_c;

  /* Sum: '<S276>/Add' incorporates:
   *  Fcn: '<S295>/r->x'
   *  Fcn: '<S295>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Localized_Cmd *
    cos(Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_p;
  rtb_Init_e = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_c;

  /* Fcn: '<S293>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Init_e);

  /* RelationalOperator: '<S296>/Compare' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_Is_Absolute_Translation = (rtb_Switch2_c == 0.0);

  /* Switch: '<S292>/Switch1' */
  if (rtb_Is_Absolute_Translation) {
    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S292>/Constant'
     */
    Code_Gen_Model_B.Switch1 = 1.0E-15;
  } else {
    /* Switch: '<S292>/Switch1' */
    Code_Gen_Model_B.Switch1 = rtb_Switch2_c;
  }

  /* End of Switch: '<S292>/Switch1' */

  /* Fcn: '<S278>/x->r' */
  rtb_Switch2_c = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S281>/Compare' incorporates:
   *  Constant: '<S281>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_c == 0.0);

  /* Switch: '<S277>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S277>/Constant'
     */
    Code_Gen_Model_B.Switch1_m = 1.0E-15;
  } else {
    /* Switch: '<S277>/Switch1' */
    Code_Gen_Model_B.Switch1_m = rtb_Switch2_c;
  }

  /* End of Switch: '<S277>/Switch1' */

  /* Fcn: '<S283>/x->r' */
  rtb_Switch2_p = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S286>/Compare' incorporates:
   *  Constant: '<S286>/Constant'
   */
  rtb_OR_ao = (rtb_Switch2_p == 0.0);

  /* Switch: '<S282>/Switch1' */
  if (rtb_OR_ao) {
    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S282>/Constant'
     */
    Code_Gen_Model_B.Switch1_o = 1.0E-15;
  } else {
    /* Switch: '<S282>/Switch1' */
    Code_Gen_Model_B.Switch1_o = rtb_Switch2_p;
  }

  /* End of Switch: '<S282>/Switch1' */

  /* Fcn: '<S288>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_Switch_b1 = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S287>/Switch1' */
  if (rtb_Switch_b1) {
    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S287>/Constant'
     */
    Code_Gen_Model_B.Switch1_p = 1.0E-15;
  } else {
    /* Switch: '<S287>/Switch1' */
    Code_Gen_Model_B.Switch1_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S287>/Switch1' */

  /* Product: '<S272>/Divide' incorporates:
   *  Abs: '<S272>/Abs'
   *  Abs: '<S272>/Abs1'
   *  Abs: '<S272>/Abs2'
   *  Abs: '<S272>/Abs3'
   *  Constant: '<S272>/Constant'
   *  MinMax: '<S272>/Max'
   */
  rtb_Switch2_c = 3.5944420196850411 / fmax(fmax(fmax(fmax(3.5944420196850411,
    Code_Gen_Model_B.Switch1_m), Code_Gen_Model_B.Switch1_o),
    Code_Gen_Model_B.Switch1_p), Code_Gen_Model_B.Switch1);

  /* Product: '<S272>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1 *
    rtb_Switch2_c;

  /* Switch: '<S292>/Switch' */
  if (!rtb_Is_Absolute_Translation) {
    /* Switch: '<S292>/Switch' incorporates:
     *  Fcn: '<S293>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Init_e,
      rtb_Rotationmatrixfromlocalto_0);
  }

  /* End of Switch: '<S292>/Switch' */

  /* Trigonometry: '<S236>/Cos4' incorporates:
   *  Switch: '<S225>/Angle_Switch'
   *  Trigonometry: '<S235>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S236>/Sin5' incorporates:
   *  UnaryMinus: '<S234>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S236>/Sin4' incorporates:
   *  Switch: '<S225>/Angle_Switch'
   *  Trigonometry: '<S235>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S236>/Cos5' incorporates:
   *  UnaryMinus: '<S234>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S236>/Subtract1' incorporates:
   *  Product: '<S236>/Product2'
   *  Product: '<S236>/Product3'
   *  Trigonometry: '<S236>/Cos4'
   *  Trigonometry: '<S236>/Sin4'
   */
  rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract_jj * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S236>/Subtract' incorporates:
   *  Product: '<S236>/Product'
   *  Product: '<S236>/Product1'
   *  Trigonometry: '<S236>/Cos4'
   *  Trigonometry: '<S236>/Sin4'
   */
  rtb_Switch1_h = (rtb_MatrixConcatenate_b_idx_1 * rtb_MatrixConcatenate_b_idx_0)
    - (rtb_Subtract_jj * rtb_uDLookupTable_l);

  /* Math: '<S236>/Hypot' */
  rtb_Switch2_j = rt_hypotd_snf(rtb_Switch1_h, rtb_Init_e);

  /* Switch: '<S236>/Switch' incorporates:
   *  Constant: '<S236>/Constant'
   *  Constant: '<S236>/Constant1'
   *  Constant: '<S237>/Constant'
   *  Product: '<S236>/Divide'
   *  Product: '<S236>/Divide1'
   *  RelationalOperator: '<S237>/Compare'
   *  Switch: '<S236>/Switch1'
   */
  if (rtb_Switch2_j > 1.0E-6) {
    rtb_Switch2_p = rtb_Init_e / rtb_Switch2_j;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Switch1_h / rtb_Switch2_j;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S236>/Switch' */

  /* Switch: '<S225>/Speed_Switch' incorporates:
   *  Abs: '<S225>/Abs'
   *  Constant: '<S233>/Constant'
   *  RelationalOperator: '<S233>/Compare'
   *  Switch: '<S225>/Angle_Switch'
   *  Trigonometry: '<S235>/Atan1'
   *  Trigonometry: '<S236>/Atan1'
   *  UnaryMinus: '<S225>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S235>/Subtract1' incorporates:
     *  Product: '<S235>/Product2'
     *  Product: '<S235>/Product3'
     *  UnaryMinus: '<S225>/Unary Minus'
     */
    rtb_Init_e = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5_c)
      + (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S235>/Subtract' incorporates:
     *  Product: '<S235>/Product'
     *  Product: '<S235>/Product1'
     */
    rtb_Switch2_j = (rtb_MatrixConcatenate_b_idx_1 *
                     Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S235>/Hypot' */
    rtb_Switch1_h = rt_hypotd_snf(rtb_Switch2_j, rtb_Init_e);

    /* Switch: '<S235>/Switch1' incorporates:
     *  Constant: '<S235>/Constant'
     *  Constant: '<S235>/Constant1'
     *  Constant: '<S238>/Constant'
     *  Product: '<S235>/Divide'
     *  Product: '<S235>/Divide1'
     *  RelationalOperator: '<S238>/Compare'
     *  Switch: '<S235>/Switch'
     */
    if (rtb_Switch1_h > 1.0E-6) {
      rtb_Switch2_j /= rtb_Switch1_h;
      rtb_Init_e /= rtb_Switch1_h;
    } else {
      rtb_Switch2_j = 1.0;
      rtb_Init_e = 0.0;
    }

    /* End of Switch: '<S235>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Init_e, rtb_Switch2_j);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S228>/Product2' incorporates:
   *  Constant: '<S228>/Constant'
   *  Switch: '<S225>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S223>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S223>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S226>/Add' incorporates:
   *  Sum: '<S227>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S158>/Product' incorporates:
   *  Abs: '<S223>/Abs'
   *  Abs: '<S226>/Abs'
   *  Constant: '<S229>/Constant'
   *  Constant: '<S239>/Constant3'
   *  Constant: '<S239>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S223>/OR'
   *  Lookup_n-D: '<S226>/1-D Lookup Table'
   *  Math: '<S239>/Math Function'
   *  RelationalOperator: '<S223>/Equal1'
   *  RelationalOperator: '<S229>/Compare'
   *  Signum: '<S223>/Sign'
   *  Signum: '<S223>/Sign1'
   *  Sum: '<S226>/Add'
   *  Sum: '<S239>/Add1'
   *  Sum: '<S239>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S224>/Gain' */
  rtb_Switch2_j = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S224>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S231>/Sum1' incorporates:
   *  Constant: '<S224>/Constant2'
   *  Product: '<S231>/Product'
   *  Sum: '<S231>/Sum'
   *  UnitDelay: '<S231>/Unit Delay1'
   */
  rtb_Init_e = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S224>/Product' incorporates:
   *  Constant: '<S224>/Constant3'
   */
  rtb_Switch1_h = rtb_Init_e * Drive_Motor_Control_D;

  /* Sum: '<S230>/Diff' incorporates:
   *  UnitDelay: '<S230>/UD'
   *
   * Block description for '<S230>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S230>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Switch1_h - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S224>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S224>/Add' incorporates:
   *  Gain: '<S224>/Gain1'
   *  Saturate: '<S224>/Saturation'
   */
  rtb_Product_ku = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Switch2_j) +
    rtb_Add_i;

  /* Sum: '<S224>/Subtract' incorporates:
   *  Constant: '<S224>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Product_ku;

  /* Sum: '<S224>/Sum2' incorporates:
   *  Gain: '<S224>/Gain2'
   *  UnitDelay: '<S224>/Unit Delay'
   */
  rtb_Switch2_j = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S232>/Switch2' incorporates:
   *  Constant: '<S224>/Constant'
   *  RelationalOperator: '<S232>/LowerRelop1'
   *  Sum: '<S224>/Subtract'
   */
  if (!(rtb_Switch2_j > (1.0 - rtb_Product_ku))) {
    /* Switch: '<S232>/Switch' incorporates:
     *  Constant: '<S224>/Constant1'
     *  RelationalOperator: '<S232>/UpperRelop'
     *  Sum: '<S224>/Subtract1'
     */
    if (rtb_Switch2_j < (-1.0 - rtb_Product_ku)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Product_ku;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_j;
    }

    /* End of Switch: '<S232>/Switch' */
  }

  /* End of Switch: '<S232>/Switch2' */

  /* Saturate: '<S224>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Switch2_j = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Switch2_j = Drive_Motor_Control_I_LL;
  } else {
    rtb_Switch2_j = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S224>/Saturation1' */

  /* Sum: '<S224>/Add1' */
  rtb_Add_i = rtb_Product_ku + rtb_Switch2_j;

  /* Saturate: '<S224>/Saturation2' */
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

  /* End of Saturate: '<S224>/Saturation2' */

  /* Sum: '<S240>/Add1' incorporates:
   *  Constant: '<S240>/Constant3'
   *  Constant: '<S240>/Constant4'
   *  Math: '<S240>/Math Function'
   *  Sum: '<S240>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S242>/Sum1' incorporates:
   *  Constant: '<S227>/Constant2'
   *  Product: '<S242>/Product'
   *  Sum: '<S242>/Sum'
   *  UnitDelay: '<S242>/Unit Delay1'
   */
  rtb_Product_ku = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S227>/Product' incorporates:
   *  Constant: '<S227>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Product_ku * Steering_Motor_Control_D;

  /* Sum: '<S241>/Diff' incorporates:
   *  UnitDelay: '<S241>/UD'
   *
   * Block description for '<S241>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S241>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Rotationmatrixfromlocalto_0 - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S227>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S227>/Add' incorporates:
   *  Gain: '<S227>/Gain1'
   *  Saturate: '<S227>/Saturation'
   */
  rtb_Add_pw = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_i;

  /* Sum: '<S227>/Subtract' incorporates:
   *  Constant: '<S227>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pw;

  /* Sum: '<S227>/Sum2' incorporates:
   *  Gain: '<S227>/Gain2'
   *  UnitDelay: '<S227>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S243>/Switch2' incorporates:
   *  Constant: '<S227>/Constant'
   *  RelationalOperator: '<S243>/LowerRelop1'
   *  Sum: '<S227>/Subtract'
   */
  if (!(rtb_Sum2_fc > (1.0 - rtb_Add_pw))) {
    /* Switch: '<S243>/Switch' incorporates:
     *  Constant: '<S227>/Constant1'
     *  RelationalOperator: '<S243>/UpperRelop'
     *  Sum: '<S227>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_pw)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pw;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_fc;
    }

    /* End of Switch: '<S243>/Switch' */
  }

  /* End of Switch: '<S243>/Switch2' */

  /* Saturate: '<S227>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S227>/Saturation1' */

  /* Sum: '<S227>/Add1' */
  rtb_Add_i = rtb_Add_pw + rtb_Sum2_fc;

  /* Saturate: '<S227>/Saturation2' */
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

  /* End of Saturate: '<S227>/Saturation2' */

  /* Product: '<S272>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_m *
    rtb_Switch2_c;

  /* Switch: '<S277>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S277>/Switch' incorporates:
     *  Fcn: '<S278>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S277>/Switch' */

  /* Trigonometry: '<S173>/Cos4' incorporates:
   *  Switch: '<S162>/Angle_Switch'
   *  Trigonometry: '<S172>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S173>/Sin5' incorporates:
   *  UnaryMinus: '<S171>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S173>/Sin4' incorporates:
   *  Switch: '<S162>/Angle_Switch'
   *  Trigonometry: '<S172>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S173>/Cos5' incorporates:
   *  UnaryMinus: '<S171>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S173>/Subtract1' incorporates:
   *  Product: '<S173>/Product2'
   *  Product: '<S173>/Product3'
   *  Trigonometry: '<S173>/Cos4'
   *  Trigonometry: '<S173>/Sin4'
   */
  rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract_jj * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S173>/Subtract' incorporates:
   *  Product: '<S173>/Product'
   *  Product: '<S173>/Product1'
   *  Trigonometry: '<S173>/Cos4'
   *  Trigonometry: '<S173>/Sin4'
   */
  rtb_Subtract1_bm = (rtb_MatrixConcatenate_b_idx_1 *
                      rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract_jj *
    rtb_uDLookupTable_l);

  /* Math: '<S173>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_bm, rtb_Add_pw);

  /* Switch: '<S173>/Switch' incorporates:
   *  Constant: '<S173>/Constant'
   *  Constant: '<S173>/Constant1'
   *  Constant: '<S174>/Constant'
   *  Product: '<S173>/Divide'
   *  Product: '<S173>/Divide1'
   *  RelationalOperator: '<S174>/Compare'
   *  Switch: '<S173>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_p = rtb_Add_pw / rtb_Hypot_g5;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract1_bm / rtb_Hypot_g5;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S173>/Switch' */

  /* Switch: '<S162>/Speed_Switch' incorporates:
   *  Abs: '<S162>/Abs'
   *  Constant: '<S170>/Constant'
   *  RelationalOperator: '<S170>/Compare'
   *  Switch: '<S162>/Angle_Switch'
   *  Trigonometry: '<S172>/Atan1'
   *  Trigonometry: '<S173>/Atan1'
   *  UnaryMinus: '<S162>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S172>/Subtract1' incorporates:
     *  Product: '<S172>/Product2'
     *  Product: '<S172>/Product3'
     *  UnaryMinus: '<S162>/Unary Minus'
     */
    rtb_Add_pw = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S172>/Subtract' incorporates:
     *  Product: '<S172>/Product'
     *  Product: '<S172>/Product1'
     */
    rtb_Hypot_g5 = (rtb_MatrixConcatenate_b_idx_1 * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Subtract_jj * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S172>/Hypot' */
    rtb_Subtract1_bm = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_pw);

    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S172>/Constant'
     *  Constant: '<S172>/Constant1'
     *  Constant: '<S175>/Constant'
     *  Product: '<S172>/Divide'
     *  Product: '<S172>/Divide1'
     *  RelationalOperator: '<S175>/Compare'
     *  Switch: '<S172>/Switch'
     */
    if (rtb_Subtract1_bm > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_bm;
      rtb_Add_pw /= rtb_Subtract1_bm;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_pw = 0.0;
    }

    /* End of Switch: '<S172>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_pw, rtb_Hypot_g5);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S165>/Product2' incorporates:
   *  Constant: '<S165>/Constant'
   *  Switch: '<S162>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S160>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S160>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S163>/Add' incorporates:
   *  Sum: '<S164>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S155>/Product' incorporates:
   *  Abs: '<S160>/Abs'
   *  Abs: '<S163>/Abs'
   *  Constant: '<S166>/Constant'
   *  Constant: '<S176>/Constant3'
   *  Constant: '<S176>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S160>/OR'
   *  Lookup_n-D: '<S163>/1-D Lookup Table'
   *  Math: '<S176>/Math Function'
   *  RelationalOperator: '<S160>/Equal1'
   *  RelationalOperator: '<S166>/Compare'
   *  Signum: '<S160>/Sign'
   *  Signum: '<S160>/Sign1'
   *  Sum: '<S163>/Add'
   *  Sum: '<S176>/Add1'
   *  Sum: '<S176>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S161>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S161>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S168>/Sum1' incorporates:
   *  Constant: '<S161>/Constant2'
   *  Product: '<S168>/Product'
   *  Sum: '<S168>/Sum'
   *  UnitDelay: '<S168>/Unit Delay1'
   */
  rtb_Add_pw = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S161>/Product' incorporates:
   *  Constant: '<S161>/Constant3'
   */
  rtb_Subtract1_bm = rtb_Add_pw * Drive_Motor_Control_D;

  /* Sum: '<S167>/Diff' incorporates:
   *  UnitDelay: '<S167>/UD'
   *
   * Block description for '<S167>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S167>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Subtract1_bm - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S161>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S161>/Add' incorporates:
   *  Gain: '<S161>/Gain1'
   *  Saturate: '<S161>/Saturation'
   */
  rtb_Add_c4 = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Hypot_g5) +
    rtb_Add_i;

  /* Sum: '<S161>/Subtract' incorporates:
   *  Constant: '<S161>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_c4;

  /* Sum: '<S161>/Sum2' incorporates:
   *  Gain: '<S161>/Gain2'
   *  UnitDelay: '<S161>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S169>/Switch2' incorporates:
   *  Constant: '<S161>/Constant'
   *  RelationalOperator: '<S169>/LowerRelop1'
   *  Sum: '<S161>/Subtract'
   */
  if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_c4))) {
    /* Switch: '<S169>/Switch' incorporates:
     *  Constant: '<S161>/Constant1'
     *  RelationalOperator: '<S169>/UpperRelop'
     *  Sum: '<S161>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_c4)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_c4;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Hypot_g5;
    }

    /* End of Switch: '<S169>/Switch' */
  }

  /* End of Switch: '<S169>/Switch2' */

  /* Saturate: '<S161>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S161>/Saturation1' */

  /* Sum: '<S161>/Add1' */
  rtb_Add_i = rtb_Add_c4 + rtb_Hypot_g5;

  /* Saturate: '<S161>/Saturation2' */
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

  /* End of Saturate: '<S161>/Saturation2' */

  /* Sum: '<S177>/Add1' incorporates:
   *  Constant: '<S177>/Constant3'
   *  Constant: '<S177>/Constant4'
   *  Math: '<S177>/Math Function'
   *  Sum: '<S177>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S179>/Sum1' incorporates:
   *  Constant: '<S164>/Constant2'
   *  Product: '<S179>/Product'
   *  Sum: '<S179>/Sum'
   *  UnitDelay: '<S179>/Unit Delay1'
   */
  rtb_Add_c4 = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S164>/Product' incorporates:
   *  Constant: '<S164>/Constant3'
   */
  rtb_Subtract1_hq = rtb_Add_c4 * Steering_Motor_Control_D;

  /* Sum: '<S178>/Diff' incorporates:
   *  UnitDelay: '<S178>/UD'
   *
   * Block description for '<S178>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S178>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Subtract1_hq - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S164>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S164>/Add' incorporates:
   *  Gain: '<S164>/Gain1'
   *  Saturate: '<S164>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Switch2_p) +
    rtb_Add_i;

  /* Sum: '<S164>/Subtract' incorporates:
   *  Constant: '<S164>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S164>/Sum2' incorporates:
   *  Gain: '<S164>/Gain2'
   *  UnitDelay: '<S164>/Unit Delay'
   */
  rtb_Sum2_i4 = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S180>/Switch2' incorporates:
   *  Constant: '<S164>/Constant'
   *  RelationalOperator: '<S180>/LowerRelop1'
   *  Sum: '<S164>/Subtract'
   */
  if (!(rtb_Sum2_i4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Switch: '<S180>/Switch' incorporates:
     *  Constant: '<S164>/Constant1'
     *  RelationalOperator: '<S180>/UpperRelop'
     *  Sum: '<S164>/Subtract1'
     */
    if (rtb_Sum2_i4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Sum2_i4;
    }

    /* End of Switch: '<S180>/Switch' */
  }

  /* End of Switch: '<S180>/Switch2' */

  /* Saturate: '<S164>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Sum2_i4 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_i4 = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S164>/Saturation1' */

  /* Sum: '<S164>/Add1' */
  rtb_Add_i = rtb_MatrixConcatenate_b_idx_1 + rtb_Sum2_i4;

  /* Saturate: '<S164>/Saturation2' */
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

  /* End of Saturate: '<S164>/Saturation2' */

  /* Product: '<S272>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_o *
    rtb_Switch2_c;

  /* Switch: '<S282>/Switch' */
  if (!rtb_OR_ao) {
    /* Switch: '<S282>/Switch' incorporates:
     *  Fcn: '<S283>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S282>/Switch' */

  /* Trigonometry: '<S194>/Cos4' incorporates:
   *  Switch: '<S183>/Angle_Switch'
   *  Trigonometry: '<S193>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S194>/Sin5' incorporates:
   *  UnaryMinus: '<S192>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S194>/Sin4' incorporates:
   *  Switch: '<S183>/Angle_Switch'
   *  Trigonometry: '<S193>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S194>/Cos5' incorporates:
   *  UnaryMinus: '<S192>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S194>/Subtract1' incorporates:
   *  Product: '<S194>/Product2'
   *  Product: '<S194>/Product3'
   *  Trigonometry: '<S194>/Cos4'
   *  Trigonometry: '<S194>/Sin4'
   */
  rtb_Switch2_p = (rtb_MatrixConcatenate_b_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Subtract_jj * rtb_MatrixConcatenate_b_idx_0);

  /* Sum: '<S194>/Subtract' incorporates:
   *  Product: '<S194>/Product'
   *  Product: '<S194>/Product1'
   *  Trigonometry: '<S194>/Cos4'
   *  Trigonometry: '<S194>/Sin4'
   */
  rtb_Subtract_pa = (rtb_MatrixConcatenate_b_idx_1 *
                     rtb_MatrixConcatenate_b_idx_0) - (rtb_Subtract_jj *
    rtb_uDLookupTable_l);

  /* Math: '<S194>/Hypot' */
  rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_pa, rtb_Switch2_p);

  /* Switch: '<S194>/Switch' incorporates:
   *  Constant: '<S194>/Constant'
   *  Constant: '<S194>/Constant1'
   *  Constant: '<S195>/Constant'
   *  Product: '<S194>/Divide'
   *  Product: '<S194>/Divide1'
   *  RelationalOperator: '<S195>/Compare'
   *  Switch: '<S194>/Switch1'
   */
  if (rtb_uDLookupTable_l > 1.0E-6) {
    rtb_Switch2_p /= rtb_uDLookupTable_l;
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract_pa / rtb_uDLookupTable_l;
  } else {
    rtb_Switch2_p = 0.0;
    rtb_MatrixConcatenate_b_idx_0 = 1.0;
  }

  /* End of Switch: '<S194>/Switch' */

  /* Switch: '<S183>/Speed_Switch' incorporates:
   *  Abs: '<S183>/Abs'
   *  Constant: '<S191>/Constant'
   *  RelationalOperator: '<S191>/Compare'
   *  Switch: '<S183>/Angle_Switch'
   *  Trigonometry: '<S193>/Atan1'
   *  Trigonometry: '<S194>/Atan1'
   *  UnaryMinus: '<S183>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_p, rtb_MatrixConcatenate_b_idx_0)) >
      1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S193>/Subtract1' incorporates:
     *  Product: '<S193>/Product2'
     *  Product: '<S193>/Product3'
     *  UnaryMinus: '<S183>/Unary Minus'
     */
    rtb_Subtract_pa = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S193>/Subtract' incorporates:
     *  Product: '<S193>/Product'
     *  Product: '<S193>/Product1'
     */
    rtb_Subtract_jj = (rtb_MatrixConcatenate_b_idx_1 *
                       Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S193>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Subtract_jj,
      rtb_Subtract_pa);

    /* Switch: '<S193>/Switch1' incorporates:
     *  Constant: '<S193>/Constant'
     *  Constant: '<S193>/Constant1'
     *  Constant: '<S196>/Constant'
     *  Product: '<S193>/Divide'
     *  Product: '<S193>/Divide1'
     *  RelationalOperator: '<S196>/Compare'
     *  Switch: '<S193>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Subtract_jj /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_1 = rtb_Subtract_pa /
        rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Subtract_jj = 1.0;
      rtb_MatrixConcatenate_b_idx_1 = 0.0;
    }

    /* End of Switch: '<S193>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_1,
      rtb_Subtract_jj);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S186>/Product2' incorporates:
   *  Constant: '<S186>/Constant'
   *  Switch: '<S183>/Speed_Switch'
   */
  rtb_Switch2_p = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S181>/Sign' */
  if (rtIsNaN(rtb_Switch2_p)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_p < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_p > 0.0);
  }

  /* Signum: '<S181>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S184>/Add' incorporates:
   *  Sum: '<S185>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S156>/Product' incorporates:
   *  Abs: '<S181>/Abs'
   *  Abs: '<S184>/Abs'
   *  Constant: '<S187>/Constant'
   *  Constant: '<S197>/Constant3'
   *  Constant: '<S197>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S181>/OR'
   *  Lookup_n-D: '<S184>/1-D Lookup Table'
   *  Math: '<S197>/Math Function'
   *  RelationalOperator: '<S181>/Equal1'
   *  RelationalOperator: '<S187>/Compare'
   *  Signum: '<S181>/Sign'
   *  Signum: '<S181>/Sign1'
   *  Sum: '<S184>/Add'
   *  Sum: '<S197>/Add1'
   *  Sum: '<S197>/Add2'
   */
  rtb_Switch2_p = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_p) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S182>/Gain' */
  rtb_Subtract_pa = Drive_Motor_Control_FF * rtb_Switch2_p;

  /* Sum: '<S182>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_p -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S189>/Sum1' incorporates:
   *  Constant: '<S182>/Constant2'
   *  Product: '<S189>/Product'
   *  Sum: '<S189>/Sum'
   *  UnitDelay: '<S189>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_1 = ((rtb_Switch2_p -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S182>/Product' incorporates:
   *  Constant: '<S182>/Constant3'
   */
  rtb_Subtract_jj = rtb_MatrixConcatenate_b_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S188>/Diff' incorporates:
   *  UnitDelay: '<S188>/UD'
   *
   * Block description for '<S188>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Subtract_jj - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S182>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S182>/Add' incorporates:
   *  Gain: '<S182>/Gain1'
   *  Saturate: '<S182>/Saturation'
   */
  rtb_Add_pd = ((Drive_Motor_Control_P * rtb_Switch2_p) + rtb_Subtract_pa) +
    rtb_Add_i;

  /* Sum: '<S182>/Subtract' incorporates:
   *  Constant: '<S182>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_pd;

  /* Sum: '<S182>/Sum2' incorporates:
   *  Gain: '<S182>/Gain2'
   *  UnitDelay: '<S182>/Unit Delay'
   */
  rtb_Switch2_p = (Drive_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S190>/Switch2' incorporates:
   *  Constant: '<S182>/Constant'
   *  RelationalOperator: '<S190>/LowerRelop1'
   *  Sum: '<S182>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_pd))) {
    /* Switch: '<S190>/Switch' incorporates:
     *  Constant: '<S182>/Constant1'
     *  RelationalOperator: '<S190>/UpperRelop'
     *  Sum: '<S182>/Subtract1'
     */
    if (rtb_Switch2_p < (-1.0 - rtb_Add_pd)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_pd;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
    }

    /* End of Switch: '<S190>/Switch' */
  }

  /* End of Switch: '<S190>/Switch2' */

  /* Saturate: '<S182>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Drive_Motor_Control_I_UL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Drive_Motor_Control_I_LL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_pa = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S182>/Saturation1' */

  /* Sum: '<S182>/Add1' */
  rtb_Add_i = rtb_Add_pd + rtb_Subtract_pa;

  /* Saturate: '<S182>/Saturation2' */
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

  /* End of Saturate: '<S182>/Saturation2' */

  /* Sum: '<S198>/Add1' incorporates:
   *  Constant: '<S198>/Constant3'
   *  Constant: '<S198>/Constant4'
   *  Math: '<S198>/Math Function'
   *  Sum: '<S198>/Add2'
   */
  rtb_Switch2_p = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S200>/Sum1' incorporates:
   *  Constant: '<S185>/Constant2'
   *  Product: '<S200>/Product'
   *  Sum: '<S200>/Sum'
   *  UnitDelay: '<S200>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_p - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S185>/Product' incorporates:
   *  Constant: '<S185>/Constant3'
   */
  rtb_Add_pd = rtb_uDLookupTable_l * Steering_Motor_Control_D;

  /* Sum: '<S199>/Diff' incorporates:
   *  UnitDelay: '<S199>/UD'
   *
   * Block description for '<S199>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S199>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Add_pd - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S185>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S185>/Add' incorporates:
   *  Gain: '<S185>/Gain1'
   *  Saturate: '<S185>/Saturation'
   */
  rtb_Add_ie = (Steering_Motor_Control_P * rtb_Switch2_p) + rtb_Add_i;

  /* Sum: '<S185>/Subtract' incorporates:
   *  Constant: '<S185>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Add_ie;

  /* Sum: '<S185>/Sum2' incorporates:
   *  Gain: '<S185>/Gain2'
   *  UnitDelay: '<S185>/Unit Delay'
   */
  rtb_Switch2_p = (Steering_Motor_Control_I * rtb_Switch2_p) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S201>/Switch2' incorporates:
   *  Constant: '<S185>/Constant'
   *  RelationalOperator: '<S201>/LowerRelop1'
   *  Sum: '<S185>/Subtract'
   */
  if (!(rtb_Switch2_p > (1.0 - rtb_Add_ie))) {
    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S185>/Constant1'
     *  RelationalOperator: '<S201>/UpperRelop'
     *  Sum: '<S185>/Subtract1'
     */
    if (rtb_Switch2_p < (-1.0 - rtb_Add_ie)) {
      rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Add_ie;
    } else {
      rtb_MatrixConcatenate_b_idx_0 = rtb_Switch2_p;
    }

    /* End of Switch: '<S201>/Switch' */
  }

  /* End of Switch: '<S201>/Switch2' */

  /* Saturate: '<S185>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_kh = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_kh = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_kh = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S185>/Saturation1' */

  /* Sum: '<S185>/Add1' */
  rtb_Add_i = rtb_Add_ie + rtb_Subtract1_kh;

  /* Saturate: '<S185>/Saturation2' */
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

  /* End of Saturate: '<S185>/Saturation2' */

  /* Product: '<S272>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed = Code_Gen_Model_B.Switch1_p *
    rtb_Switch2_c;

  /* Switch: '<S287>/Switch' */
  if (!rtb_Switch_b1) {
    /* Switch: '<S287>/Switch' incorporates:
     *  Fcn: '<S288>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S287>/Switch' */

  /* Trigonometry: '<S215>/Cos4' incorporates:
   *  Switch: '<S204>/Angle_Switch'
   *  Trigonometry: '<S214>/Cos4'
   */
  rtb_Add_ie = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S215>/Sin5' incorporates:
   *  UnaryMinus: '<S213>/Unary Minus'
   */
  rtb_MatrixConcatenate_b_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S215>/Sin4' incorporates:
   *  Switch: '<S204>/Angle_Switch'
   *  Trigonometry: '<S214>/Sin4'
   */
  rtb_Product_do = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S215>/Cos5' incorporates:
   *  UnaryMinus: '<S213>/Unary Minus'
   */
  rtb_Switch2_p = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S215>/Subtract1' incorporates:
   *  Product: '<S215>/Product2'
   *  Product: '<S215>/Product3'
   *  Trigonometry: '<S215>/Cos4'
   *  Trigonometry: '<S215>/Sin4'
   */
  rtb_Switch2_c = (rtb_Add_ie * rtb_MatrixConcatenate_b_idx_0) + (rtb_Product_do
    * rtb_Switch2_p);

  /* Sum: '<S215>/Subtract' incorporates:
   *  Product: '<S215>/Product'
   *  Product: '<S215>/Product1'
   *  Trigonometry: '<S215>/Cos4'
   *  Trigonometry: '<S215>/Sin4'
   */
  rtb_Switch2_p = (rtb_Add_ie * rtb_Switch2_p) - (rtb_Product_do *
    rtb_MatrixConcatenate_b_idx_0);

  /* Math: '<S215>/Hypot' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Switch2_p, rtb_Switch2_c);

  /* Switch: '<S215>/Switch' incorporates:
   *  Constant: '<S215>/Constant'
   *  Constant: '<S215>/Constant1'
   *  Constant: '<S216>/Constant'
   *  Product: '<S215>/Divide'
   *  Product: '<S215>/Divide1'
   *  RelationalOperator: '<S216>/Compare'
   *  Switch: '<S215>/Switch1'
   */
  if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
    rtb_Switch2_c /= rtb_MatrixConcatenate_b_idx_0;
    rtb_Switch2_p /= rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Switch2_c = 0.0;
    rtb_Switch2_p = 1.0;
  }

  /* End of Switch: '<S215>/Switch' */

  /* Switch: '<S204>/Speed_Switch' incorporates:
   *  Abs: '<S204>/Abs'
   *  Constant: '<S212>/Constant'
   *  RelationalOperator: '<S212>/Compare'
   *  Switch: '<S204>/Angle_Switch'
   *  Trigonometry: '<S214>/Atan1'
   *  Trigonometry: '<S215>/Atan1'
   *  UnaryMinus: '<S204>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_c, rtb_Switch2_p)) > 1.5707963267948966) {
    rtb_Add_nh = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S214>/Subtract1' incorporates:
     *  Product: '<S214>/Product2'
     *  Product: '<S214>/Product3'
     *  UnaryMinus: '<S204>/Unary Minus'
     */
    rtb_Switch2_p = (rtb_Add_ie * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_do * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S214>/Subtract' incorporates:
     *  Product: '<S214>/Product'
     *  Product: '<S214>/Product1'
     */
    rtb_Add_ie = (rtb_Add_ie * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Product_do *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S214>/Hypot' */
    rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Add_ie, rtb_Switch2_p);

    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S214>/Constant'
     *  Constant: '<S214>/Constant1'
     *  Constant: '<S217>/Constant'
     *  Product: '<S214>/Divide'
     *  Product: '<S214>/Divide1'
     *  RelationalOperator: '<S217>/Compare'
     *  Switch: '<S214>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_0 > 1.0E-6) {
      rtb_Add_ie /= rtb_MatrixConcatenate_b_idx_0;
      rtb_Switch2_p /= rtb_MatrixConcatenate_b_idx_0;
    } else {
      rtb_Add_ie = 1.0;
      rtb_Switch2_p = 0.0;
    }

    /* End of Switch: '<S214>/Switch1' */
    rtb_MatrixConcatenate_b_idx_0 = rt_atan2d_snf(rtb_Switch2_p, rtb_Add_ie);
  } else {
    rtb_Add_nh = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S207>/Product2' incorporates:
   *  Constant: '<S207>/Constant'
   *  Switch: '<S204>/Speed_Switch'
   */
  rtb_Switch2_c = rtb_Add_nh * 1530.1401357649195;

  /* Signum: '<S202>/Sign' */
  if (rtIsNaN(rtb_Switch2_c)) {
    rtb_Add_nh = (rtNaN);
  } else if (rtb_Switch2_c < 0.0) {
    rtb_Add_nh = -1.0;
  } else {
    rtb_Add_nh = (rtb_Switch2_c > 0.0);
  }

  /* Signum: '<S202>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_ie = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_ie = -1.0;
  } else {
    rtb_Add_ie = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S205>/Add' incorporates:
   *  Sum: '<S206>/Sum'
   */
  rtb_MatrixConcatenate_b_idx_0 -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S157>/Product' incorporates:
   *  Abs: '<S202>/Abs'
   *  Abs: '<S205>/Abs'
   *  Constant: '<S208>/Constant'
   *  Constant: '<S218>/Constant3'
   *  Constant: '<S218>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S202>/OR'
   *  Lookup_n-D: '<S205>/1-D Lookup Table'
   *  Math: '<S218>/Math Function'
   *  RelationalOperator: '<S202>/Equal1'
   *  RelationalOperator: '<S208>/Compare'
   *  Signum: '<S202>/Sign'
   *  Signum: '<S202>/Sign1'
   *  Sum: '<S205>/Add'
   *  Sum: '<S218>/Add1'
   *  Sum: '<S218>/Add2'
   */
  rtb_Switch2_c = (((real_T)((rtb_Add_nh == rtb_Add_ie) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_c) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled24, Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S203>/Gain' */
  rtb_Switch2_p = Drive_Motor_Control_FF * rtb_Switch2_c;

  /* Sum: '<S203>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_c -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S210>/Sum1' incorporates:
   *  Constant: '<S203>/Constant2'
   *  Product: '<S210>/Product'
   *  Sum: '<S210>/Sum'
   *  UnitDelay: '<S210>/Unit Delay1'
   */
  rtb_Add_ie = ((rtb_Switch2_c - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S203>/Product' incorporates:
   *  Constant: '<S203>/Constant3'
   */
  rtb_Product_do = rtb_Add_ie * Drive_Motor_Control_D;

  /* Sum: '<S209>/Diff' incorporates:
   *  UnitDelay: '<S209>/UD'
   *
   * Block description for '<S209>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S209>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Product_do - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S203>/Saturation' */
  if (rtb_Add_i > Drive_Motor_Control_D_UL) {
    rtb_Add_i = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_i < Drive_Motor_Control_D_LL) {
    rtb_Add_i = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S203>/Add' incorporates:
   *  Gain: '<S203>/Gain1'
   *  Saturate: '<S203>/Saturation'
   */
  rtb_Add_nh = ((Drive_Motor_Control_P * rtb_Switch2_c) + rtb_Switch2_p) +
    rtb_Add_i;

  /* Sum: '<S203>/Subtract' incorporates:
   *  Constant: '<S203>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_nh;

  /* Sum: '<S203>/Sum2' incorporates:
   *  Gain: '<S203>/Gain2'
   *  UnitDelay: '<S203>/Unit Delay'
   */
  rtb_Switch2_c = (Drive_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S211>/Switch2' incorporates:
   *  Constant: '<S203>/Constant'
   *  RelationalOperator: '<S211>/LowerRelop1'
   *  Sum: '<S203>/Subtract'
   */
  if (!(rtb_Switch2_c > (1.0 - rtb_Add_nh))) {
    /* Sum: '<S203>/Subtract1' incorporates:
     *  Constant: '<S203>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_nh;

    /* Switch: '<S211>/Switch' incorporates:
     *  Constant: '<S203>/Constant1'
     *  RelationalOperator: '<S211>/UpperRelop'
     *  Sum: '<S203>/Subtract1'
     */
    if (!(rtb_Switch2_c < (-1.0 - rtb_Add_nh))) {
      rtb_Switch2_p = rtb_Switch2_c;
    }

    /* End of Switch: '<S211>/Switch' */
  }

  /* End of Switch: '<S211>/Switch2' */

  /* Saturate: '<S203>/Saturation1' */
  if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
    rtb_Integral_h = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
    rtb_Integral_h = Drive_Motor_Control_I_LL;
  } else {
    rtb_Integral_h = rtb_Switch2_p;
  }

  /* End of Saturate: '<S203>/Saturation1' */

  /* Sum: '<S203>/Add1' */
  rtb_Add_i = rtb_Add_nh + rtb_Integral_h;

  /* Saturate: '<S203>/Saturation2' */
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

  /* End of Saturate: '<S203>/Saturation2' */

  /* Sum: '<S219>/Add1' incorporates:
   *  Constant: '<S219>/Constant3'
   *  Constant: '<S219>/Constant4'
   *  Math: '<S219>/Math Function'
   *  Sum: '<S219>/Add2'
   */
  rtb_Switch2_c = rt_modd_snf(rtb_MatrixConcatenate_b_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S221>/Sum1' incorporates:
   *  Constant: '<S206>/Constant2'
   *  Product: '<S221>/Product'
   *  Sum: '<S221>/Sum'
   *  UnitDelay: '<S221>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Switch2_c -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S206>/Product' incorporates:
   *  Constant: '<S206>/Constant3'
   */
  rtb_Add_nh = rtb_MatrixConcatenate_b_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S220>/Diff' incorporates:
   *  UnitDelay: '<S220>/UD'
   *
   * Block description for '<S220>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S220>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_i = rtb_Add_nh - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S206>/Saturation' */
  if (rtb_Add_i > Steering_Motor_Control_D_UL) {
    rtb_Add_i = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_i < Steering_Motor_Control_D_LL) {
    rtb_Add_i = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S206>/Add' incorporates:
   *  Gain: '<S206>/Gain1'
   *  Saturate: '<S206>/Saturation'
   */
  rtb_Add_ls = (Steering_Motor_Control_P * rtb_Switch2_c) + rtb_Add_i;

  /* Sum: '<S206>/Subtract' incorporates:
   *  Constant: '<S206>/Constant'
   */
  rtb_Switch2_p = 1.0 - rtb_Add_ls;

  /* Sum: '<S206>/Sum2' incorporates:
   *  Gain: '<S206>/Gain2'
   *  UnitDelay: '<S206>/Unit Delay'
   */
  rtb_Switch2_c = (Steering_Motor_Control_I * rtb_Switch2_c) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S222>/Switch2' incorporates:
   *  Constant: '<S206>/Constant'
   *  RelationalOperator: '<S222>/LowerRelop1'
   *  Sum: '<S206>/Subtract'
   */
  if (!(rtb_Switch2_c > (1.0 - rtb_Add_ls))) {
    /* Sum: '<S206>/Subtract1' incorporates:
     *  Constant: '<S206>/Constant1'
     */
    rtb_Switch2_p = -1.0 - rtb_Add_ls;

    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S206>/Constant1'
     *  RelationalOperator: '<S222>/UpperRelop'
     *  Sum: '<S206>/Subtract1'
     */
    if (!(rtb_Switch2_c < (-1.0 - rtb_Add_ls))) {
      rtb_Switch2_p = rtb_Switch2_c;
    }

    /* End of Switch: '<S222>/Switch' */
  }

  /* End of Switch: '<S222>/Switch2' */

  /* Saturate: '<S206>/Saturation1' */
  if (rtb_Switch2_p > Steering_Motor_Control_I_UL) {
    rtb_Switch2_c = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_p < Steering_Motor_Control_I_LL) {
    rtb_Switch2_c = Steering_Motor_Control_I_LL;
  } else {
    rtb_Switch2_c = rtb_Switch2_p;
  }

  /* End of Saturate: '<S206>/Saturation1' */

  /* Sum: '<S206>/Add1' */
  rtb_Add_i = rtb_Add_ls + rtb_Switch2_c;

  /* Saturate: '<S206>/Saturation2' */
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

  /* End of Saturate: '<S206>/Saturation2' */

  /* Gain: '<S88>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S89>/Compare' incorporates:
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   */
  rtb_Switch_b1 = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S88>/Switch1' incorporates:
   *  UnitDelay: '<S88>/Unit Delay1'
   */
  if (rtb_Switch_b1) {
    rtb_Switch2_p = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_p = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S88>/Switch1' */

  /* Sum: '<S88>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_p;

  /* Gain: '<S88>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S88>/Switch' incorporates:
   *  UnitDelay: '<S88>/Unit Delay'
   */
  if (rtb_Switch_b1) {
    rtb_Add_ls = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Add_ls = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S88>/Switch' */

  /* Sum: '<S88>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Add_ls;

  /* Lookup_n-D: '<S5>/1-D Lookup Table' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  rtb_uDLookupTable = look1_binlcpw(Test_Shooter_Angle,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 3U);

  /* Chart: '<S5>/Chart_Intake_and_Shooter' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant7'
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   *  RelationalOperator: '<S16>/FixPt Relational Operator'
   *  RelationalOperator: '<S17>/FixPt Relational Operator'
   *  RelationalOperator: '<S18>/FixPt Relational Operator'
   *  RelationalOperator: '<S19>/FixPt Relational Operator'
   *  RelationalOperator: '<S20>/FixPt Relational Operator'
   *  UnitDelay: '<S16>/Delay Input1'
   *  UnitDelay: '<S17>/Delay Input1'
   *  UnitDelay: '<S18>/Delay Input1'
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S20>/Delay Input1'
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
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;

    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Mod_IN_Extra_Run_Time2:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time4:
      Code_Gen_Model_B.Note_State_ID = 4.2;
      if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time5:
      Code_Gen_Model_B.Note_State_ID = 5.4;
      if (Code_Gen_Model_DW.timer >= Note_Time_Eject) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time6:
      Code_Gen_Model_B.Note_State_ID = 5.2;
      if (Code_Gen_Model_DW.timer >= Note_Time_Speaker_Spin_Up) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_Intake;
        Code_Gen_Model_B.Note_State_ID = 5.3;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.2;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
      if (Code_Gen_Model_DW.timer >= Note_Time_Eject) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Intake_AND_Shooter:
      Code_Gen_Model_B.Note_State_ID = 4.1;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Co_IN_Note_Speaker_Score_Intake:
      Code_Gen_Model_B.Note_State_ID = 5.3;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Intake_TOF_Dist > Note_Detect_Dist_Intake) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time5;
        Code_Gen_Model_B.Note_State_ID = 5.4;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Co_IN_Note_Speaker_Score_SpinUp:
      Code_Gen_Model_B.Note_State_ID = 5.1;
      if ((Code_Gen_Model_U.Shooter_Left_Motor_RPM <
           (-Shooter_Motor_Speed_Transition)) &&
          (Code_Gen_Model_U.Shooter_Right_Motor_RPM >
           Shooter_Motor_Speed_Transition)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time6;
        Code_Gen_Model_B.Note_State_ID = 5.2;
        Code_Gen_Model_DW.timer = 0.02;
      } else {
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_uDLookupTable;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_uDLookupTable;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      if (Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time2;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case IN_Spin_Up_Shooter_Before_Trans:
      Code_Gen_Model_B.Note_State_ID = 2.1;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer_Spin_Up) &&
          (Code_Gen_Model_DW.timer >= Servo_Time_Deploy)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Cod_IN_Note_Transfer_to_Shooter;
        Code_Gen_Model_B.Note_State_ID = 2.2;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Store_Servo:
      Code_Gen_Model_B.Note_State_ID = 3.1;
      if (Code_Gen_Model_DW.timer >= Servo_Time_Store) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Eject_from_Shooter;
        Code_Gen_Model_B.Note_State_ID = 3.2;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
        Code_Gen_Model_DW.timer = 0.02;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_Model_B.Note_State_ID = 0.0;

      /* Outport: '<Root>/Intake_Motor_DutyCycle' */
      Code_Gen_Model_Y.Intake_Motor_DutyCycle = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      if (TEST_Request_Note_Pickup_AND_Transfer >
          Code_Gen_Model_DW.DelayInput1_DSTATE_a) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Intake_AND_Shooter;
        Code_Gen_Model_B.Note_State_ID = 4.1;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      } else if (TEST_Request_Note_Transfer >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_i) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
        Code_Gen_Model_B.Note_State_ID = 2.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Deploy;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (TEST_Request_Note_Pickup > Code_Gen_Model_DW.DelayInput1_DSTATE)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
        Code_Gen_Model_B.Note_State_ID = 1.0;

        /* Outport: '<Root>/Intake_Motor_DutyCycle' */
        Code_Gen_Model_Y.Intake_Motor_DutyCycle = -1.0;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
      } else if (TEST_Request_Note_Eject >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
        Code_Gen_Model_B.Note_State_ID = 3.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (TEST_Request_Note_Speaker >
                 Code_Gen_Model_DW.DelayInput1_DSTATE_k) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo_Pos = Servo_Position_Store;

        /* Outport: '<Root>/Shooter_Brake_Enable' */
        Code_Gen_Model_Y.Shooter_Brake_Enable = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Left = -rtb_uDLookupTable;
        Code_Gen_Model_B.Shooter_Motor_Speed_Right = rtb_uDLookupTable;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart_Intake_and_Shooter' */

  /* Sum: '<S21>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_uDLookupTable = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S21>/Add' incorporates:
   *  Gain: '<S21>/Gain'
   *  Gain: '<S21>/Gain1'
   */
  rtb_Add_i = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_uDLookupTable);

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Constant2'
   *  Switch: '<S5>/Switch'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S21>/Sum2' incorporates:
     *  Gain: '<S21>/Gain2'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    rtb_uDLookupTable = (Shooter_Motor_Control_I * rtb_uDLookupTable) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mo;

    /* Sum: '<S21>/Subtract' incorporates:
     *  Constant: '<S21>/Constant'
     */
    rtb_Switch2_jg = 1.0 - rtb_Add_i;

    /* Switch: '<S23>/Switch2' incorporates:
     *  Constant: '<S21>/Constant'
     *  RelationalOperator: '<S23>/LowerRelop1'
     *  Sum: '<S21>/Subtract'
     */
    if (!(rtb_uDLookupTable > (1.0 - rtb_Add_i))) {
      /* Sum: '<S21>/Subtract1' incorporates:
       *  Constant: '<S21>/Constant1'
       */
      rtb_Switch2_jg = -1.0 - rtb_Add_i;

      /* Switch: '<S23>/Switch' incorporates:
       *  Constant: '<S21>/Constant1'
       *  RelationalOperator: '<S23>/UpperRelop'
       *  Sum: '<S21>/Subtract1'
       */
      if (!(rtb_uDLookupTable < (-1.0 - rtb_Add_i))) {
        rtb_Switch2_jg = rtb_uDLookupTable;
      }

      /* End of Switch: '<S23>/Switch' */
    }

    /* End of Switch: '<S23>/Switch2' */

    /* Saturate: '<S21>/Saturation1' */
    if (rtb_Switch2_jg > Shooter_Motor_Control_I_UL) {
      rtb_uDLookupTable = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_jg < Shooter_Motor_Control_I_LL) {
      rtb_uDLookupTable = Shooter_Motor_Control_I_LL;
    } else {
      rtb_uDLookupTable = rtb_Switch2_jg;
    }

    /* End of Saturate: '<S21>/Saturation1' */

    /* Sum: '<S21>/Add1' */
    rtb_Add_i += rtb_uDLookupTable;

    /* Saturate: '<S21>/Saturation2' */
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

    /* End of Saturate: '<S21>/Saturation2' */
  } else {
    rtb_uDLookupTable = 0.0;

    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Sum: '<S22>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Switch2_jg = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S22>/Add' incorporates:
   *  Gain: '<S22>/Gain'
   *  Gain: '<S22>/Gain1'
   */
  rtb_Add_i = (Shooter_Motor_Control_FF *
               Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Switch2_jg);

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/Constant2'
   *  Switch: '<S5>/Switch1'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S22>/Sum2' incorporates:
     *  Gain: '<S22>/Gain2'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    rtb_Switch2_jg = (Shooter_Motor_Control_I * rtb_Switch2_jg) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_in;

    /* Sum: '<S22>/Subtract' incorporates:
     *  Constant: '<S22>/Constant'
     */
    rtb_Switch2_e = 1.0 - rtb_Add_i;

    /* Switch: '<S24>/Switch2' incorporates:
     *  Constant: '<S22>/Constant'
     *  RelationalOperator: '<S24>/LowerRelop1'
     *  Sum: '<S22>/Subtract'
     */
    if (!(rtb_Switch2_jg > (1.0 - rtb_Add_i))) {
      /* Sum: '<S22>/Subtract1' incorporates:
       *  Constant: '<S22>/Constant1'
       */
      rtb_Switch2_e = -1.0 - rtb_Add_i;

      /* Switch: '<S24>/Switch' incorporates:
       *  Constant: '<S22>/Constant1'
       *  RelationalOperator: '<S24>/UpperRelop'
       *  Sum: '<S22>/Subtract1'
       */
      if (!(rtb_Switch2_jg < (-1.0 - rtb_Add_i))) {
        rtb_Switch2_e = rtb_Switch2_jg;
      }

      /* End of Switch: '<S24>/Switch' */
    }

    /* End of Switch: '<S24>/Switch2' */

    /* Saturate: '<S22>/Saturation1' */
    if (rtb_Switch2_e > Shooter_Motor_Control_I_UL) {
      rtb_Switch2_jg = Shooter_Motor_Control_I_UL;
    } else if (rtb_Switch2_e < Shooter_Motor_Control_I_LL) {
      rtb_Switch2_jg = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Switch2_jg = rtb_Switch2_e;
    }

    /* End of Saturate: '<S22>/Saturation1' */

    /* Sum: '<S22>/Add1' */
    rtb_Add_i += rtb_Switch2_jg;

    /* Saturate: '<S22>/Saturation2' */
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

    /* End of Saturate: '<S22>/Saturation2' */
  } else {
    rtb_Switch2_jg = 0.0;

    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Right;
  }

  /* End of Switch: '<S22>/Switch' */

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S5>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' */
    Code_Gen_Model_Y.Shooter_Servo_Position = Code_Gen_Model_B.Shooter_Servo_Pos;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Update for UnitDelay: '<S80>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S80>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S81>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S81>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S82>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S82>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S83>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S83>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' incorporates:
     *  Bias: '<S118>/Bias'
     *  Merge: '<S92>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' incorporates:
     *  Bias: '<S118>/Bias'
     *  Merge: '<S92>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S25>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S45>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S25>/A'
   *  Delay: '<S25>/MemoryX'
   */
  rtb_Add_i = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Switch2_e = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S25>/MemoryX' incorporates:
   *  Constant: '<S25>/B'
   *  Product: '<S45>/A[k]*xhat[k|k-1]'
   *  Product: '<S45>/B[k]*u[k]'
   *  Sum: '<S45>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Add_i) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Switch2_e) + Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S79>/UD'
   *
   * Block description for '<S79>/UD':
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

  /* Update for UnitDelay: '<S255>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S255>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S269>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Merge1;

  /* Update for UnitDelay: '<S268>/UD'
   *
   * Block description for '<S268>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_UnitDelay1_gi;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch1_as;

  /* Update for UnitDelay: '<S264>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S264>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S231>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Init_e;

  /* Update for UnitDelay: '<S230>/UD'
   *
   * Block description for '<S230>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Switch1_h;

  /* Update for UnitDelay: '<S224>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Switch2_j;

  /* Update for UnitDelay: '<S242>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Product_ku;

  /* Update for UnitDelay: '<S241>/UD'
   *
   * Block description for '<S241>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S227>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S168>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_pw;

  /* Update for UnitDelay: '<S167>/UD'
   *
   * Block description for '<S167>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_bm;

  /* Update for UnitDelay: '<S161>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S179>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_c4;

  /* Update for UnitDelay: '<S178>/UD'
   *
   * Block description for '<S178>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_hq;

  /* Update for UnitDelay: '<S164>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_i4;

  /* Update for UnitDelay: '<S189>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S188>/UD'
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract_jj;

  /* Update for UnitDelay: '<S182>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract_pa;

  /* Update for UnitDelay: '<S200>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S199>/UD'
   *
   * Block description for '<S199>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Add_pd;

  /* Update for UnitDelay: '<S185>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_kh;

  /* Update for UnitDelay: '<S210>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_ie;

  /* Update for UnitDelay: '<S209>/UD'
   *
   * Block description for '<S209>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Product_do;

  /* Update for UnitDelay: '<S203>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Integral_h;

  /* Update for UnitDelay: '<S221>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S220>/UD'
   *
   * Block description for '<S220>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add_nh;

  /* Update for UnitDelay: '<S206>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Switch2_c;

  /* Update for UnitDelay: '<S88>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_p;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
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

  /* Update for UnitDelay: '<S19>/Delay Input1' incorporates:
   *  Constant: '<S5>/Constant3'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_a = TEST_Request_Note_Pickup_AND_Transfer;

  /* Update for UnitDelay: '<S20>/Delay Input1' incorporates:
   *  Constant: '<S5>/Constant7'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_k = TEST_Request_Note_Speaker;

  /* Update for UnitDelay: '<S21>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mo = rtb_uDLookupTable;

  /* Update for UnitDelay: '<S22>/Unit Delay' */
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

    /* InitializeConditions for Delay: '<S25>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S255>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S264>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S315>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S10>/Spline Path Following Enabled' */
    /* Start for If: '<S96>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S92>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S96>/Robot_Index_Is_Valid' */
    /* Start for If: '<S99>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S99>/Circle_Check_Valid' */
    /* Start for If: '<S101>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S99>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S96>/Robot_Index_Is_Valid' */
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

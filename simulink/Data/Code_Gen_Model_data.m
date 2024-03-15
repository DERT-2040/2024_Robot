% Parameters to exclude from being tunable.
% This is used in the 'Build_Extern.m' file
Not_Tunable_List = {'t_sample',...
    'Distance_FL_x','DistancAe_FL_y','Distance_FR_x','Distance_FR_y',...
    'Distance_BL_x','Distance_BL_y','Distance_BR_x','Distance_BR_y',...
    'Wheel_Speed_to_Motor_Speed','Motor_Rev_to_Wheel_Distance','Drive_Wheel_Max_Speed',...
    'KF_Odom_Covariance','KF_Vision_Covariance',...
    'Spline_Num_Samples','Spline_Num_Samples_3x','Spline_Samples_Per_Pass',...
    'Spline_Max_Num_RefPoses','Spline_Tension',...
    'Spline_Velocity_Axis','Spline_Capture_Radius','Spline_Lookahead_Dist',...
    'Spline_Num_Poses_default','Spline_Num_Poses_auto1','Spline_Num_Poses_auto2','Spline_Num_Poses_auto3',...
    'Spline_Ref_Poses_default','Spline_Ref_Poses_auto1','Spline_Ref_Poses_auto2','Spline_Ref_Poses_auto3'...
    'l_1','l_2','l_3','l_4','l_5','l_6','l_7','l_8','l_9','l_10','l_11',...
    'Back_AA_spacing','Back_AA_length',...
    'Back_AA_Bot_Min_Ext','Back_AA_Bot_Max_Ext','Back_AA_Top_Min_Ext','Back_AA_Top_Max_Ext',...
    'Front_AA_spacing','Front_AA_length','Back_AA_Bot_Min_Ext','Back_AA_Bot_Max_Ext',...
};

% sample time model
t_sample = 0.020;

% gyro calibration value
Gyro_Calibration_Value = 0; % degrees

%% TEST mode parameters
% Test Mode gains to convert gamepad inputs to duty cycle
Test_DC_Gain_BackUpper = 0.3;
Test_DC_Gain_Front = 0.3;
Test_DC_Gain_BackLower = 0.3;
Test_DC_Gain_BallScrew = 0.2;  % do not make this larger than 0.2 or you may damage the ball screw nut
Test_DC_Gain_Intake = -1;
Test_DC_Gain_Shooter = 1;

% Test Mode for swerve drive
% When this is set to 1 then the control will listen to joystick button
% inputs to toggle absolute or relative
TEST_Swerve_Mode_Override_Flag = 0;

% temporary variables for testing
TEST_Servo_Override_Flag = 0;
TEST_Servo_Override_Value = 0;

% These overrides take effect when values are changed to non-zero
TEST_Speaker_Angle = 0;   % degrees
TEST_Speaker_Height = 0;  % mm
TEST_Speaker_Gap = 0;     % mm
TEST_Speaker_Speed = 0;   % rpm
TEST_Speaker_Distance = 0; % m

%% Joystick Command Profiling
% Thresholds for treating gamepad sticks as discrete inputs
Gamepad_Stick_Neg_Threshold = -0.5;
Gamepad_Stick_Pos_Threshold = 0.5;

% Absolute Steering Circular Deadband
% Steering_Abs_Deadband_Range = 0.7;

% modulation curve 
temp_x = [0.3 0.35  0.4 0.45 0.5  0.6  0.7  0.8 0.9  1.0];
temp_y = [0.0 0.01 0.04 0.06 0.09 0.14 0.18 0.31 0.58 1.0];
%figure(1), clf, plot(temp_x,temp_y,'-o'), grid on
% figure(2), clf, plot([-fliplr(temp_x) 0 temp_x],[-fliplr(temp_y) 0 temp_y],'-o'), grid on

Steering_Mod_Drv_in = [-fliplr(temp_x) 0 temp_x];
Steering_Mod_Drv_out = [-fliplr(temp_y) 0 temp_y];

temp_x = [0.2 0.25  0.3 0.4 0.5  0.6  0.7  0.8 0.9  1.0];
temp_y = [0.0 0.01 0.04 0.10 0.17 0.27 0.40 0.55 0.75 1.0];
% figure(1), clf, plot(temp_x,temp_y,'-o'), grid on
% figure(2), clf, plot([-fliplr(temp_x) 0 temp_x],[-fliplr(temp_y) 0 temp_y],'-o'), grid on

Steering_Mod_Str_Rel_in = [-fliplr(temp_x) 0 temp_x];
Steering_Mod_Str_Rel_out = [-fliplr(temp_y) 0 temp_y];

clear temp_x temp_y

% Steering Relative Gain
Steering_Relative_Gain = 5;

% Boost Trigger
Boost_Trigger_High_Speed = 5.0; % 3.658; % m/s
Boost_Trigger_Low_Speed = 1.5; % m/s

Boost_Trigger_Increasing_Limit = (Boost_Trigger_High_Speed-Boost_Trigger_Low_Speed)/0.25*t_sample;
Boost_Trigger_Decreasing_Limit = -(Boost_Trigger_High_Speed-Boost_Trigger_Low_Speed)/0.25*t_sample;

% Joystick Twist Axis Gains
Steering_Twist_Gain = -0.015;
Translation_Twist_Gain = 0.5;

%% Wheel Gear Ratio
gear_ratio = 8.14;
wheel_diameter = 0.101600203;
Wheel_Speed_to_Motor_Speed = 60*gear_ratio/(wheel_diameter*pi); % (rev/min)/(m/sec)

Drive_Motor_Max_Speed = 6000; %5500; % rpm  (also used below for PID feedforward gain)
Drive_Wheel_Max_Speed = Drive_Motor_Max_Speed/Wheel_Speed_to_Motor_Speed; % m/sec

% Ran a test without the adjustment factor with the following results
%   physical measurement = 177.33 feet
%   odometry estimate    = 186.44 feet
adjustment_factor = 0.951;  % 177.33/186.44
% set the above factor to 1.0 for simulation (don't for get to change it back!)
% adjustment_factor = 1.0;

Motor_Rev_to_Wheel_Distance = wheel_diameter*pi/gear_ratio*adjustment_factor; % m/rev

clear gear_ratio wheel_diameter adjustment_factor


%% Wheel Locations from Center of Rotation
% distances between swerve modules
FrontBack = (26 - 0.125 - 2*2.625)*0.0254;  % meters
LeftRight = (26 - 0.125 - 2*2.625)*0.0254;  % meters

% swerve module distances from center to x and y coordinates
% Front Left
Distance_FL_x = FrontBack/2;
Distance_FL_y = LeftRight/2;

% Front Right
Distance_FR_x = FrontBack/2;
Distance_FR_y = -LeftRight/2;

% Back Left
Distance_BL_x = -FrontBack/2;
Distance_BL_y = LeftRight/2;

% Back Right
Distance_BR_x = -FrontBack/2;
Distance_BR_y = -LeftRight/2;

clear FrontBack LeftRight


%% Odometry rotation matrix
% robot rotation matrix to obtain: 
%   Vx and Vy for each module from the robot center Vx, Vy, and Omega
%   Dx and Dy for each module from the robot center Dx, Dy, and Theta
Rotation_Local =  [1 0 -Distance_FL_y;
                   0 1  Distance_FL_x;
                   1 0 -Distance_FR_y;
                   0 1  Distance_FR_x;
                   1 0 -Distance_BL_y;
                   0 1  Distance_BL_x;
                   1 0 -Distance_BR_y;
                   0 1  Distance_BR_x];

% pseudo inverse of the rotation matrix
temp = pinv(Rotation_Local);

% only keep first two rows since we don't need to estimate Theta
Rotation_Local_Inv = temp(1:2,:);

% reset the odometry estimate to the IC
% write to this in Smart Dashboard to reset (rising edge)
Odometry_Reset_IC = 0;

% only used for validation testing
% set to 1 to tear the X and Y measurement
% set to 0 to let the X and Y measurements accumulate since the last tear
Odometry_X_Y_TEAR = 0;

clear temp


%% Kalman Filter
KF_Enable = 1;
KF_Odom_Covariance = 0.001*eye(2);
KF_Vision_Covariance = 0.1*eye(2);
KF_Vision_Ambiguity_Thresh = 0.25;  % below this threshold trust the vision estimate


%% Drive Motor PID
Drive_Motor_Control_FF= 1/Drive_Motor_Max_Speed;  % 1 DC / Max Speed RPM;
Drive_Motor_Control_P = 0.000005;

Drive_Motor_Control_I = 0.0000002*0;

Drive_Motor_Control_I_UL = 0; % 0.1
Drive_Motor_Control_I_LL = -Drive_Motor_Control_I_UL;

Drive_Motor_Control_D = 0.000002/t_sample;

Derivative_low_pass_filter_freq = 2; % Hz
Drive_Motor_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Drive_Motor_Control_D_UL = 0.2;
Drive_Motor_Control_D_LL = -Drive_Motor_Control_D_UL;

Drive_Motor_Control_Sign_Change_Deadband = 7000;  %1500;

Drive_Motor_Control_Module_Angle_Error = [0 45]*pi/180;
Drive_Motor_Control_Scale_Factor = [1 1]; %[1 0.05];

clear Drive_Motor_Max_Speed Derivative_low_pass_filter_freq


%% Steering Motor PID
Steering_Motor_Control_P = 0.15;

Steering_Motor_Control_I = 0.005;
Steering_Motor_Control_I_UL = 0.005;
Steering_Motor_Control_I_LL = -Steering_Motor_Control_I_UL;

Steering_Motor_Control_D = 0.01/t_sample;
Derivative_low_pass_filter_freq = 2; % Hz
Steering_Motor_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Steering_Motor_Control_D_UL = 0.2;
Steering_Motor_Control_D_LL = -Drive_Motor_Control_D_UL;

clear Derivative_low_pass_filter_freq


%% Steering Heading PID
Steering_Heading_Control_P = 3.5;

Steering_Heading_Control_I = 0.015*0;  % set to 0 to stop gyro drift
Steering_Heading_Control_I_UL = 0.1;
Steering_Heading_Control_I_LL = -Steering_Heading_Control_I_UL;
Steering_Heading_Control_D = 0;
Derivative_low_pass_filter_freq = 2; % Hz
Steering_Heading_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Steering_Heading_Control_D_UL = 0;
Steering_Heading_Control_D_LL = -Steering_Heading_Control_D_UL;

Steering_Heading_Control_Total_UL = 3; %1.3;  % m/sec
Steering_Heading_Control_Total_LL = -Steering_Heading_Control_Total_UL;

Steering_Heading_Control_Deadzone = 0.1;

clear Derivative_low_pass_filter_freq


%% Translation Speed Rate Limit
Translation_Speed_Rate_Limit_Inc =  2;  %1; %3/0.7*t_sample;
Translation_Speed_Rate_Limit_Dec = -2; %-2/0.2*t_sample;
Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
Translation_Speed_NonZero_Error_Thresh = 0.15;
Translation_Speed_NonZero_Final_Scale_Factor = 0.05;


%% Steering Localized Cmd Rate Limit
Steering_Localized_Cmd_Rate_Limit_Inc = 10;
Steering_Localized_Cmd_Rate_Limit_Dec = -10;
Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 1.0;


%% Spline Path Following
% Not tunable while running
Spline_Num_Samples = 50;
Spline_Num_Samples_3x = Spline_Num_Samples*3;
Spline_Samples_Per_Pass = 10; % must be an even number
Spline_Max_Num_RefPoses = 10;
Spline_Tension = 0.5;
Spline_Velocity_Axis  = [0.50 1.50 2.50 3.50]; % m/s
Spline_Capture_Radius = [0.20 0.20 0.25 0.50]; % m
Spline_Lookahead_Dist = [0.20 0.20 0.20 0.40]; % m

% Spline_Ref_Poses_switch_num = 1;
velocity_gain = Drive_Wheel_Max_Speed*2;
Spline_Num_Poses_auto1 = 3;
Spline_Ref_Poses_auto1 = [% x, y, velocity, field-oriented heading
    15.22   6.56    velocity_gain   0*(180+60)*pi/180
    5.14    6.34    velocity_gain   0
    1.18    4.23    velocity_gain   0*(180+45)*pi/180
    1.18    4.23    velocity_gain   0*(180+45)*pi/180
    1.18    4.23    velocity_gain   0*(180+45)*pi/180
    1.18    4.23    velocity_gain   0*(180+45)*pi/180    
    ];

Spline_Num_Poses_auto2 = 6;
Spline_Ref_Poses_auto2 = [% x, y, velocity, field-oriented heading
    15.22   6.56    velocity_gain   0*(180+60)*pi/180
    12.96   5.50    velocity_gain   0*(180+60)*pi/180
    10.74   4.00    velocity_gain   0
    6.27    4.20    velocity_gain   0    
    3.35    2.76    velocity_gain   0*(180+60)*pi/180
    1.92    2.54    velocity_gain   0    
    ];

Spline_Num_Poses_auto3 = 4;
Spline_Ref_Poses_auto3 = [% x, y, velocity, field-oriented heading
    15.22   6.56    velocity_gain   0*(180+60)*pi/180
    11.50   4.40    velocity_gain   0*(180+45)*pi/180
    6.65    2.01    velocity_gain   0
    1.00    1.20    velocity_gain   0*(180-45)*pi/180
    1.00    1.20    velocity_gain   0*(180-45)*pi/180 
    1.00    1.20    velocity_gain   0*(180-45)*pi/180     
    ];

clear velocity_gain

Odometry_IC_X = 15.22;
Odometry_IC_Y = 6.56;

Spline_Num_Poses_default = Spline_Max_Num_RefPoses;
Spline_Ref_Poses_default = zeros(Spline_Max_Num_RefPoses,4);

% Tunable while running
Spline_Stop_Radius = 0.1; % m
Spline_Max_Centripital_Acceleration = 10; % m/sec^2
Spline_Pose_Num_Before_End_Reduce_Speed = 1;  % index count
Spline_Last_Pose_Distance_to_Velocity_Gain = 2; % (m/sec) / (m)
Spline_Velocity_Multiplier_TEST = 1.0;  % velocity scaling for test purposes only


%% Arms Dimension Data
% vertical offset of back Argos Arm
l_1 = 1.0*25.4;

% vertical offset of Ball Screw
l_2 = 3.5*25.4;

% horizontal length from back argos arm to Ball Screw
l_3 = (12.5-5.5)*25.4;

% horizontal length from ball screw to front Argos Arm
l_4 = 5.5*25.4;

% length from pivot of front argos arm to pivot of ball screw on that arm
l_5 = 11.375*25.4;

% horizontal offset from the end of gap to Back Argos Arm pivot on shooter
l_6 = 0.042875*1000;

% vertical offset from the end of gap to Back Argos Arm pivot on shooter
l_7 = -0.076*1000;

% horizontal offset from back argos arm to Front Argos Arm pivot on shooter
l_8 = 0.155550*1000;

% vertical offset from back argos arm to Front Argos Arm pivot on shooter
l_9 = -1.0*25.4;

% horizontal offset for top roller of intake
l_10 = -0.050027*1000;

% vertical offset for top roller of intake
l_11 = 0.465697*1000;

% Back arm spacing between arms
Back_AA_spacing = 1.0*25.4;

% Back arm length
Back_AA_length = 17.0*25.4-10;  % subtracted 10 mm for fudge factor

% Back arm min and max
Back_AA_Bot_Min_Ext = 3.125*25.4;
Back_AA_Bot_Max_Ext = 317; % 12.625*25.4;
Back_AA_Top_Min_Ext = 0.75*25.4;
Back_AA_Top_Max_Ext = 334; % 12.75*25.4;

% Front arm spacing between arm and pivot
Front_AA_spacing = 1.0*25.4;

% Front arm length
Front_AA_length = (20-1/16)*25.4;

% Front arm min and max
Front_AA_Min_Ext = 0.25*25.4; % mm
Front_AA_Max_Ext = 443; % (18-1/16)*25.4;

% Ball screw max
Ball_Screw_Max = 11.0*25.4;


%% Arm Length Calculation
% Encoder distance per revolution (mm / motor rev)
Dist_Per_Rev_Back_Lower = ((1.75 * pi) / (9*7)) * 25.4; % 9:1 gear box, 7:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
Dist_Per_Rev_Back_Upper = ((1.75 * pi) / (9*7)) * 25.4; % 9:1 gear box, 7:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
Dist_Per_Rev_Front      = ((1.75 * pi) / (9*7)) * 25.4; % 9:1 gear box, 7:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
Dist_Per_Rev_Ball_Screw = (1/72)*25.4;

% Distance reset values (mm)
Dist_Reset_Value_Back_Lower = Back_AA_Bot_Min_Ext;
Dist_Reset_Value_Back_Upper = Back_AA_Top_Min_Ext;
Dist_Reset_Value_Front = Front_AA_Min_Ext;
Dist_Reset_Value_Ball_Screw = Ball_Screw_Max;
clear Ball_Screw_Max

% Calibration tolerance for operator indication (test point)
Dist_AA_Cal_Tol = 5; % mm, Argos Arms
Dist_BS_Cal_Tol = 1; % mm, Ball SCrew


%% Arm Position Tuning
% Position the arms for driving under the stage
Stage_Angle = 16;       % degrees
Stage_Height = 21*25.4; % mm
Stage_Gap = 9.5*25.4;     % mm

% Position arms for transfering a note into the shooter for scoring in the amp or trap
LoadShooter_Angle = 47;
LoadShooter_Height = 510;
LoadShooter_Gap = 270;

% Position the arms for scoring in the amp
Amp_Angle = -35;
Amp_Height = 1000;
Amp_Gap = 650;

% Position the arms for scoring in the trap
Trap_Angle = 50;
Trap_Height = 845;
Trap_Gap = 460;

% Tolerance checks for transitioning to the next state in Stateflow
Tol_Angle = 5;
Tol_Height = 0.5*25.4;
Tol_Gap = 0.5*25.4;

% Set the speaker parameters based on distance from the April Tag
Speaker_Distance_in =   [1.44   1.71	2.3	    2.7	    3	    3.3	    3.5	    4	    4.2	    4.7];
Speaker_Angle_out =     [55	    50 	    42	    37	    34.5	33	    32.5	30.5	29	    23];
Speaker_Height_out =    [575    600	    612	    607	    603	    600	    599	    597	    597	    597];
Speaker_Gap_out =       [293	293	    293	    293	    293	    293	    293	    293	    293	    293];
Speaker_MotorSpeed_out= [2500	3000	4000	4000	4000	4000	4000	4350	4500	4500];


%% Arm Control Gains
% Argos Arms Desired Position Rate Limits
AA_Position_Back_Inc_RL = 2.5; % mm/loop
AA_Position_Back_Dec_RL = -2.5; % mm/loop

AA_Position_Front_Inc_RL = 6; % mm/loop
AA_Position_Front_Dec_RL = -6; % mm/loop

% Ball Screw Desired Position Rate Limits
BS_Position_Inc_RL = 4; % mm/loop
BS_Position_Dec_RL = -4; % mm/loop

% Argos Arms P+I Control
AA_Prop_Gain = 0.01;
AA_Integral_Gain = 0.0005;
AA_Integral_IC = 0;
AA_Integral_UL = 0.5;
AA_Integral_LL = -0.5;
AA_TC_UL = 0.6;
AA_TC_LL = -0.6;

% Ball Screw P+D Control
BS_Prop_Gain = 0.1;
BS_Deriv_Gain = 0;
BS_Deriv_FC = 0.2;
BS_Deriv_UL = 0.5;
BS_Deriv_LL = -0.5;
BS_TC_UL = 0.3;
BS_TC_LL = -0.3;


%% Climber Control
% Distance gain
% Dist_Per_Rev_Climber = 13.625/73 * 25.4; % 5:1 gear box, 4:1 gear box, 2:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
% Dist_Climber_Cal_Tol = 5; % mm, Argos Arms
% 
% % Desired Position Limits
% Climber_Distance_LL = 0.5*25.4;  % mm, command hooks up a little bit at the start to avoid commanding to the lower stop
% Climber_Distance_UL = 13.5*25.4;  % mm, upper limit to avoid commanding at the upper stop
% 
% % Rate limit
% Climber_Position_Inc_RL = 5*25.4*t_sample; % mm/loop
% Climber_Position_Dec_RL = -5*25.4*t_sample; % mm/loop
% 
% % P+I
% Climber_Prop_Gain = 0.01;
% Climber_Integral_Gain = 0.0002*0;
% Climber_Integral_IC = 0;
% Climber_Integral_UL = 0.5;
% Climber_Integral_LL = -0.5;
% Climber_TC_UL = 1.0;
% Climber_TC_LL = -1.0;

Climber_DutyCycle_Pos = 0.4;
Climber_DutyCycle_Neg = -1;


%% Intake and Shooter Parameters
% Time of Flight sensor distance for detecting in intake
Note_Detect_Dist_Intake = 200;  % mm

% Time of Flight sensor distance for detecting in shooter
Note_Detect_Dist_Shooter = 60;  % mm

% Time to run shooter before running intake
Note_Time_Transfer_Spin_Up = 0.5;  % seconds

% Shooter desired speed for storing note
Shooter_Motor_DesSpd_Store = 500; % rpm

% Time to continue running shooter after detecting the note
Note_Time_Transfer = 0;  % seconds

% Shooter duty cycle for ejecting note
Shooter_DC_Eject = 0.2; % duty cycle

% Time to run shooter for secoring in amp/trap
Note_Time_Eject = 1.0; % seconds

% Speaker shooting parameters
Shooter_Motor_Speed_Transition = 2000;
Note_Time_Speaker_Spin_Up = 1.0;

% Shooter Servo (note stopper)
Servo_Time_Store = 0.2; % seconds
Servo_Time_Deploy = 0.4; % seconds

% Maximum servo store position vs. calculated shooter angle
% Servo = Angle(deg) * Gain + Offset
Servo_Store_Offset = 0.5;  % setting this smaller will make it stick out more all the time
Servo_Store_Gain = 0.0071429;  % this is tuned to keep a constant angle as the shooter rotates

% Add more based on front arm height
Servo_Front_Arm_Length_in = [250 350];
Servo_Addition_out = [0 0];

% Shooter speed control PID for transfer
Shooter_Motor_Control_FF= 0.00025;  % 1 DC / Max Speed RPM;
Shooter_Motor_Control_P = 0.00010;
Shooter_Motor_Control_I = 0.00002;
Shooter_Motor_Control_I_UL = 0.1;
Shooter_Motor_Control_I_LL = -0.1;


%% Autonmous
% LineSensor
FloorDistance = 850;


%% PhotonVision
% Yaw Offsets (degrees)
AT_Tag_5_Yaw_Offset = 0;
AT_Tag_6_Yaw_Offset = -3;
AT_Tag_11_Yaw_Offset = 0;
AT_Tag_12_Yaw_Offset = 0;
AT_Tag_13_Yaw_Offset = 0; 
AT_Tag_14_Yaw_Offset = 0;
AT_Tag_15_Yaw_Offset = 0;
AT_Tag_16_Yaw_Offset = 0;

% Distance vs. yaw angle correction table for use with speaker
Yaw_angle_correction_distance = [5 5.5 6.65 7 8 10 11.4 12.5 14.3]*12*0.0254;  % meters
Yaw_angle_correction_yaw = -[1.25 1.5 3.61 3.96 4.97 6.38 7.25 7.5 7.98];  % degrees

% April Tag locations, dimensions in inches
% https://firstfrc.blob.core.windows.net/frc2024/FieldAssets/2024LayoutMarkingDiagram.pdf
%
% ID    X      Y       Z       Rotation
% 1     593.68 9.68    53.38   120°
% 2     637.21 34.79   53.38   120°
% 3     652.73 196.17  57.13   180°
% 4     652.73 218.42  57.13   180°   SPEAKER CENTER
% 5     578.77 323.00  53.38   270°   AMP
% 6     72.5   323.00  53.38   270°   AMP
% 7    -1.50   218.42  57.13   0°     SPEAKER CENTER
% 8    -1.50   196.17  57.13   0°
% 9     14.02  34.79   53.38   60°
% 10    57.54  9.68    53.38   60°
% 11    468.69 146.19  52.00   300°   TRAP
% 12    468.69 177.10  52.00   60°    TRAP
% 13    441.74 161.62  52.00   180°   TRAP
% 14    209.48 161.62  52.00   0°     TRAP
% 15    182.73 177.10  52.00   120°   TRAP
% 16    182.73 146.19  52.00   240°   TRAP

AT_Data = [...
    593.68 9.68    53.38   120;
    637.21 34.79   53.38   120;
    652.73 196.17  57.13   180;
    652.73 218.42  57.13   180;
    578.77 323.00  53.38   270;
    72.5   323.00  53.38   270;
    -1.50   218.42  57.13   0;
    -1.50   196.17  57.13   0;
    14.02  34.79   53.38   60;
    57.54  9.68    53.38   60;
    468.69 146.19  52.00   300;
    468.69 177.10  52.00   60;
    441.74 161.62  52.00   180;
    209.48 161.62  52.00   0;
    182.73 177.10  52.00   120;
    182.73 146.19  52.00   240;
    ];

% Find the target robot coordinates for each tag of interest when pushing the button.
% Calculate the tag location plus an desired offset distance in front of the tag.
% The offset distance is rotated using the rotation matrix.
% [X_target; Y_target] = [X_tag; Y_tag] + R*[d_offset; 0];
%   where R = rotation matrix = [cos(angle), -sin(angle); sin(angle), cos(angle)]

% Amp tags
d_offset = 60; % inches  (can still 

tag = 5;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_5_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_5_Y = temp(2)*0.0254; % convert from inches to meters

tag = 6;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_6_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_6_Y = temp(2)*0.0254; % convert from inches to meters

% Trap tags
d_offset = 60; % inches

tag = 11;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_11_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_11_Y = temp(2)*0.0254; % convert from inches to meters

tag = 12;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_12_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_12_Y = temp(2)*0.0254; % convert from inches to meters

tag = 13;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_13_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_13_Y = temp(2)*0.0254; % convert from inches to meters

tag = 14;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_14_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_14_Y = temp(2)*0.0254; % convert from inches to meters

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_15_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_15_Y = temp(2)*0.0254; % convert from inches to meters

tag = 16;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_16_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_16_Y = temp(2)*0.0254; % convert from inches to meters

clear d_offset tag angle temp

% Speaker X and Y Coordinates
AT_Tag_4_Coordinate_X = AT_Data(4,1)*0.0254; % convert from inches to meters
AT_Tag_4_Coordinate_Y = AT_Data(4,2)*0.0254; % convert from inches to meters
AT_Tag_7_Coordinate_X = AT_Data(7,1)*0.0254; % convert from inches to meters
AT_Tag_7_Coordinate_Y = AT_Data(7,2)*0.0254; % convert from inches to meters

clear AT_Data

% Control gains
AT_Yaw_Control_Gain = -0.0006;
AT_XY_Control_Gain = 1;

Autos;
Paths;

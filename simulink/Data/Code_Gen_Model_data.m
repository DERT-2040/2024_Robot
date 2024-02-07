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
};

% sample time model
t_sample = 0.02;

%% Joystick Command Profiling

% Absolute Steering Circular Deadband
Steering_Abs_Deadband_Range = 0.7;

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

Steering_Relative_Gain = 1.3;

Boost_Trigger_High_Speed = 3.658; % m/s
Boost_Trigger_Low_Speed = 1.5; % m/s

Boost_Trigger_Increasing_Limit = 2/1*0.02;
Boost_Trigger_Decreasing_Limit = -2/0.9*0.02;

%% Wheel Gear Ratio
gear_ratio = 8.14;
wheel_diameter = 0.101600203;
Wheel_Speed_to_Motor_Speed = 60*gear_ratio/(wheel_diameter*pi); % (rev/min)/(m/sec)

Drive_Motor_Max_Speed = 5500; % rpm  (also used below for PID feedforward gain)
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
FrontBack = (34 - 2*2.625)*0.0254;  % meters
LeftRight = (26 - 2*2.625)*0.0254;  % meters

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
KF_Enable = 0;
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

Drive_Motor_Control_Sign_Change_Deadband = 1500;

Drive_Motor_Control_Module_Angle_Error = [0 45]*pi/180;
Drive_Motor_Control_Scale_Factor = [1 0.05];

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
Steering_Heading_Control_P = 1.5;

Steering_Heading_Control_I = 0.015*0;  % set to 0 to stop gyro drift
Steering_Heading_Control_I_UL = 0.1;
Steering_Heading_Control_I_LL = -Steering_Heading_Control_I_UL;
Steering_Heading_Control_D = 0;
Derivative_low_pass_filter_freq = 2; % Hz
Steering_Heading_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Steering_Heading_Control_D_UL = 0;
Steering_Heading_Control_D_LL = -Steering_Heading_Control_D_UL;

Steering_Heading_Control_Total_UL = 1.3;  % m/sec
Steering_Heading_Control_Total_LL = -Steering_Heading_Control_Total_UL;

Steering_Heading_Control_Deadzone = 0.1;

clear Derivative_low_pass_filter_freq

%% Translation Speed Rate Limit
Translation_Speed_Rate_Limit_Inc =  3/0.7*0.02;
Translation_Speed_Rate_Limit_Dec = -2/0.2*0.02;
Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
Translation_Speed_NonZero_Error_Thresh = 0.15;
Translation_Speed_NonZero_Final_Scale_Factor = 0.05;

%% Steering Localized Cmd Rate Limit
Steering_Localized_Cmd_Rate_Limit_Inc = 1/0.25*0.02*0 + 1;
Steering_Localized_Cmd_Rate_Limit_Dec = -1/0.25*0.02*0 - 1;
Steering_Localized_Cmd_Approach_Zero_Error_Thresh = 0.2;
Steering_Localized_Cmd_Approach_Zero_Final_Thresh = 0.01;
Steering_Localized_Cmd_NonZero_Error_Thresh = 0.2;
Steering_Localized_Cmd_NonZero_Final_Scale_Factor = 0.1;

%% Spline Path Following
% Not tunable while running
Spline_Num_Samples = 50;
Spline_Num_Samples_3x = Spline_Num_Samples*3;
Spline_Samples_Per_Pass = 10; % must be an even number
Spline_Max_Num_RefPoses = 6;
Spline_Tension = 0.5;
Spline_Velocity_Axis  = [0.50 1.50 2.50 3.50]; % m/s
Spline_Capture_Radius = [0.20 0.20 0.25 0.50]; % m
Spline_Lookahead_Dist = [0.20 0.20 0.20 0.40]; % m

Spline_Ref_Poses_switch_num = 1;
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

%% Intake and Shooter Parameters
% Pickup from floor
Intake_Note_Detect_Dist = 100;  % mm

% Transfer to shooter
Shooter_Note_Detect_Dist = 60;  % mm

% Shooter speed control PID for transfer
Shooter_Desired_Speed = 550; % rpm
Shooter_Motor_Control_FF= 0.00025;  % 1 DC / Max Speed RPM;
Shooter_Motor_Control_P = 0.00030;
Shooter_Motor_Control_I = 0.00002;
Shooter_Motor_Control_I_UL = 0.1;
Shooter_Motor_Control_I_LL = -0.1;

% Time to run shooter before running intake
Note_Shooter_Spin_Up_Time = 1.0;  % seconds

% Time to continue running shooter after detecting the note
Note_Transfer_Time = 0.0;  % seconds

% Shooter Eject
Shooter_Eject_DC = 0.2; % duty cycle for amp/trap scoring
Note_Eject_Time = 0.5; % seconds to turn motors on for amp/trap scoring

% temporary variables for testing
TEST_Request_Note_Pickup = 0;
TEST_Request_Note_Transfer = 0;
TEST_Request_Note_Eject = 0;
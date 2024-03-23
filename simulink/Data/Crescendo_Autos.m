% LineSensor
FloorDistance = 850;

% Tuning
Auto_Start_Velocity     = 0.2;  % m/sec
Auto_Start_Time         = 1.5;  % sec
Auto_Intake_Velocity    = 0;  % m/sec
Auto_Design_Path        = 1;  % 1 = Blue/Red Autos #1, 2 = Blue/Red Autos #2

Auto_Matrix_Blue1  = [...
    % Note Number, Path to Pickup, Path to Shoot
    7, 1, 2;...
    8, 3, 4;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];

Auto_Matrix_Red1  = [...
    % Note Number, Path to Pickup, Path to Shoot
    7, 5, 6;...
    8, 7, 8;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];

Auto_Matrix_Blue2  = [...
    % Note Number, Path to Pickup, Path to Shoot
    6, 9, 10;...
    2, 11, 12;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];

Auto_Matrix_Red2  = [...
    % Note Number, Path to Pickup, Path to Shoot
    6, 13, 14;...
    2, 15, 16;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];

All_Autos = cat(3, ...
    Auto_Matrix_Blue1,...
    Auto_Matrix_Red1,...
    Auto_Matrix_Blue2,...
    Auto_Matrix_Red2......
);
All_Autos_Sizes = [...
    2,...
    2,...
    2,...
    2,...    
];
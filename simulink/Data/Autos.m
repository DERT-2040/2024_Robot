%path for center position blue
Auto_Matrix1  = [...
    % Note Number, Path to Pickup, Path to Shoot
    -1, NaN, 0;...
    6, 1, 2;...
    7, 3, 4;...
    4, 5, 6;...
    8, 7, 8;...
    5, 9, 10;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];
%path for one driver station side blue
Auto_Matrix2  = [...
    % Note Number, Path to Pickup, Path to Shoot
    -1, NaN, 0;...
    6, 1, 2;...
    7, 3, 4;...
    4, 5, 6;...
    8, 7, 8;...
    5, 9, 10;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];

%path for two driver station side blue
Auto_Matrix3  = [...
    % Note Number, Path to Pickup, Path to Shoot
    -1, NaN, 0;...
    6, 1, 2;...
    7, 3, 4;...
    4, 5, 6;...
    8, 7, 8;...
    5, 9, 10;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];

%path for center position red
Auto_Matrix4  = [...
    % Note Number, Path to Pickup, Path to Shoot
    -1, NaN, 0;...
    6, 11, 12;...
    7, 13, 14;...
    4, 15, 16;...
    8, 17, 18;...
    5, 19, 20;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
    0 0 0;...
];


All_Autos = cat(3, ...
    Auto_Matrix1,...
    Auto_Matrix2,...
    Auto_Matrix3,...
    Auto_Matrix4...
    );

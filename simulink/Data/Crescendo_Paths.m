% [x, y, robot velocity, angle]

x_offset = 0;
y_offset = -0.2;
max_speed = 1.0;
D2R = pi/180;

Path1 = [...
    15.000 + x_offset, 2.660 + y_offset, 1.0 * max_speed, 0*D2R;
    13.848 + x_offset, 2.660 + y_offset, 1.0 * max_speed, 0*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path2 = [...
    13.848 + x_offset, 2.660 + y_offset, 1.0 * max_speed, 0*D2R;
    13.848 + x_offset, 2.660 + y_offset, 1.0 * max_speed, 0*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];


Path3 = [
    13.848 + x_offset, 2.660 + y_offset, 1.0 * max_speed, 90*D2R;
    13.580 + x_offset, 2.200 + y_offset, 1.0 * max_speed, 90*D2R;
    13.580 + x_offset, 1.300 + y_offset, 1.0 * max_speed, 90*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path4 = [
    13.580 + x_offset, 1.300 + y_offset, 1.0 * max_speed, 90*D2R;
    13.580 + x_offset, 1.300 + y_offset, 1.0 * max_speed, 90*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    ];

All_Paths = cat(3, ...
    Path1,...
    Path2,...
    Path3,...
    Path4...
);

All_Num_Poses = [
  2,... %1
  2,... %2
  3,... %3
  2,... %4
];

All_Paths = All_Paths - [16.54106/2 8.2/2 0 0];
All_Paths = All_Paths .* [-1 -1 1 1];
All_Paths = All_Paths + [16.54106/2 8.2/2 0 0];

clear x_offset y_offset max_speed D2R

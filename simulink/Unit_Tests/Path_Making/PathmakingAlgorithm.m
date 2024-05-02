figure(1);
hold on;
axis equal;

[x,y] = circle(2,2,1);
plot(x,y);

[x,y] = regularpolygon(6,3,2,3,0);
plot(x,y);

function [x_samples, y_samples] = circle(x, y, r)
    samples = linspace(0, 2*pi, 100);
    x_samples = r*cos(samples) + x;
    y_samples = r*sin(samples) + y;
end

function [x_samples, y_samples] = regularpolygon(n, x, y, circum_radius, rot)
    samples = linspace(pi/2, 2*pi + pi/2, n+1);
    x_samples = circum_radius*cos(samples + rot) + x;
    y_samples = circum_radius*sin(samples + rot) + y;
end
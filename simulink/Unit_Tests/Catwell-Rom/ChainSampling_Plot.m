Data = out.ChainSampling.signals.values;

figure(1), clf
hold on
axis equal
plot([2 4 7 8 10], [2 3 2 0 -2], 'Ob');
for i = 1:size(Data, 3)
    plot(Data(:,1,i), Data(:,2,i), '-');
end

figure(2), clf
hold on
for i = 1:size(Data, 3)
    plot((i-1:1/(Spline_Num_Samples-1):i)', Data(:, 3, i), '-');
end
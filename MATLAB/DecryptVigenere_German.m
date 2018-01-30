function y = DecryptVigenere_German(x, k)
k1 = double(k) - 97;
n = size(x, 2);
m = size(k, 2);
for i = 1 : n
    xp = double(x(i)) - 65;
    ii = mod(i - 1, m) + 1;
    y(i) = mod(xp - k1(ii), 30) + 97;
end;
y = char(y);
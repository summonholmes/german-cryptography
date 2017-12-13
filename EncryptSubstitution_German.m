function y = EncryptSubstitution_German(x, k)
    n = size(x, 2);
    for i = 1 : n 
        xp = x(i) - 96;
        y(i) = k(xp) - 32;
    end;
 
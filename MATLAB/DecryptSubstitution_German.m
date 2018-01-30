function y = DecryptSubstitution_German(x, k)
    n = size(x, 2);
    for i = 1 : 30
        kk(k(i) - 96) = i + 96;
    end;
    for i = 1 : n 
        xp = x(i) - 64;
        y(i) = kk(xp);
    end;
    y=char(y);
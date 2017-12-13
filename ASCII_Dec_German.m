function y = ASCII_Dec_German(x)
% Very similar to preprocessing.
    n = size(x, 2);
    j = 1;
    for i = 1 : n
        xp = x(i);
        if (xp == 196) 
            y(j) = 91;
            j = j + 1;
        elseif (xp == 214)
            y(j) = 92;
            j = j + 1;
        elseif (xp == 220)
            y(j) = 93;
            j = j + 1;
        elseif (xp == 223)
            y(j) = 94;
            j = j + 1;
        else
            y(j) = xp;
            j = j + 1;
        end
    end
end


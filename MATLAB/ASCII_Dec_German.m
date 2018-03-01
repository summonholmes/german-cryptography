function y = ASCII_Dec_German(x)
% Very similar to preprocessing.
    n = size(x, 2);
    for i = 1 : n
        xp = x(i);
        if (xp == 196) 
            y(i) = 91;
        elseif (xp == 214)
            y(i) = 92;
        elseif (xp == 220)
            y(i) = 93;
        elseif (xp == 223)
            y(i) = 94;
        else
            y(i) = xp;
        end
    end
end


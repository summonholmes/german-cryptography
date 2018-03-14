function y = ASCII_Dec_German(x)
% Very similar to preprocessing.
    n = size(x, 2);
    for i = 1 : n
        if (x(i) == 196) 
            y(i) = 91;
        elseif (x(i) == 214)
            y(i) = 92;
        elseif (x(i) == 220)
            y(i) = 93;
        elseif (x(i) == 223)
            y(i) = 94;
        else
            y(i) = x(i);
        end
    end
end

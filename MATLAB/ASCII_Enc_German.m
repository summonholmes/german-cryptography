function y = ASCII_Enc_German(x)
% Very similar to preprocessing.
    n = size(x, 2);
    for i = 1 : n
        xp = x(i);
        if (xp == 91) 
            y(i) = 196;
        elseif (xp == 92)
            y(i) = 214;
        elseif (xp == 93)
            y(i) = 220;
        elseif (xp == 94)
            y(i) = 223;
        else
            y(i) = xp;
        end
    end
end


function y = ASCII_Enc_German(x)
% Very similar to preprocessing.
    n = size(x, 2);
    j = 1;
    for i = 1 : n
        xp = x(i);
        if (xp == 91) 
            y(j) = 196;
            j = j + 1;
        elseif (xp == 92)
            y(j) = 214;
            j = j + 1;
        elseif (xp == 93)
            y(j) = 220;
            j = j + 1;
        elseif (xp == 94)
            y(j) = 223;
            j = j + 1;
        else
            y(j) = xp;
            j = j + 1;
        end
    end
end


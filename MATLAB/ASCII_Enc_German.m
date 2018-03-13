function y = ASCII_Enc_German(x)
% Very similar to preprocessing.
    n = size(x, 2);
    for i = 1 : n
        if (x(i) == 91) 
            y(i) = 196;
        elseif (x(i) == 92)
            y(i) = 214;
        elseif (x(i) == 93)
            y(i) = 220;
        elseif (x(i) == 94)
            y(i) = 223;
        else
            y(i) = x(i);
        end
    end
end


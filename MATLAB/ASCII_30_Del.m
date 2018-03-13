function y = ASCII_30_Del(x)
% For use on the substituted German alphabet.  Revert the changes to
% retrieve the native German characters.
    n = size(x, 2);
    for i = 1 : n
        if (x(i) == 123) 
            y(i) = 228;
        elseif (x(i) == 124)
            y(i) = 246;
        elseif (x(i) == 125)
            y(i) = 252;
        elseif (x(i) == 126)
            y(i) = 223;
        else
            y(i) = x(i);
        end
    end
end
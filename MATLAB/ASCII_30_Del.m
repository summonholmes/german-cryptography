function y = ASCII_30_Del(x)
% For use on the substituted German alphabet.  Revert the changes to
% retrieve the native German characters.
    n = size(x, 2);
    for i = 1 : n
        xp = x(i);
        if (xp == 123) 
            y(i) = 228;
        elseif (xp == 124)
            y(i) = 246;
        elseif (xp == 125)
            y(i) = 252;
        elseif (xp == 126)
            y(i) = 223;
        else
            y(i) = xp;
        end
    end
end
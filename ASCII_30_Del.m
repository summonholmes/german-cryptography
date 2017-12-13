function y = ASCII_30_Del(x)
% For use on the substituted German alphabet.  Revert the changes to
% retrieve the native German characters.
    n = size(x, 2);
    j = 1;
    for i = 1 : n
        xp = x(i);
        if (xp == 123) 
            y(j) = 228;
            j = j + 1;
        elseif (xp == 124)
            y(j) = 246;
            j = j + 1;
        elseif (xp == 125)
            y(j) = 252;
            j = j + 1;
        elseif (xp == 126)
            y(j) = 223;
            j = j + 1;
        else
            y(j) = xp;
            j = j + 1;
        end
    end
end
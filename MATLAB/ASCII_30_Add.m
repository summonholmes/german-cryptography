function y = ASCII_30_Add(x)
% For use on the German alphabet.  Temporarily append extended ASCII values to the end
% of the lower case character range
    n = size(x, 2);
    for i = 1 : n
        xp = x(i);
        if (xp == 228) 
            y(i) = 123;
        elseif (xp == 246)
            y(i) = 124;
        elseif (xp == 252)
            y(i) = 125;
        elseif (xp == 223)
            y(i) = 126;
        else
            y(i) = xp;
        end
    end
end
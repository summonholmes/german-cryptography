function y = ASCII_30_Add(x)
% For use on the German alphabet.  Temporarily append extended ASCII values to the end
% of the lower case character range
    n = size(x, 2);
    j = 1;
    for i = 1 : n
        xp = x(i);
        if (xp == 228) 
            y(j) = 123;
            j = j + 1;
        elseif (xp == 246)
            y(j) = 124;
            j = j + 1;
        elseif (xp == 252)
            y(j) = 125;
            j = j + 1;
        elseif (xp == 223)
            y(j) = 126;
            j = j + 1;
        else
            y(j) = xp;
            j = j + 1;
        end
    end
end
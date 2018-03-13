function y = ASCII_30_Add(x)
% For use on the German alphabet.  Temporarily append extended ASCII values to the end
% of the lower case character range
    n = size(x, 2);
    for i = 1 : n
        if (x(i) == 228) 
            y(i) = 123;
        elseif (x(i) == 246)
            y(i) = 124;
        elseif (x(i) == 252)
            y(i) = 125;
        elseif (x(i) == 223)
            y(i) = 126;
        else
            y(i) = x(i);
        end
    end
end
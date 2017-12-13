function y = PreProcess_German(x)
    n = size(x, 2);
    j = 1;
    for i = 1 : n
        % The German alphabet includes the English alphabet + 7 more
        % characters
        xp = x(i);
        if (xp > 64 && xp < 91) 
            y(j) = xp + 32;
            j = j + 1;
        elseif (xp > 96 && xp < 123)
            y(j) = xp;
            j = j + 1;
        % Create exceptions for the unique German characters
        % Lower case
        elseif (xp == 228)
            y(j) = xp;
            j = j + 1;
        elseif (xp == 246)
            y(j) = xp;
            j = j + 1;
        elseif (xp == 252)
            y(j) = xp;
            j = j + 1;
        % Upper case
        elseif (xp == 196)
            y(j) = 228;
            j = j + 1;
        elseif (xp == 214)
            y(j) = 246;
            j = j + 1;
        elseif (xp == 220)
            y(j) = 252;
            j = j + 1;
        % Beta - unique S-like character
        elseif (xp == 223)
            y(j) = xp;
            j = j + 1;
        end
    end;

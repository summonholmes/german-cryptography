function y = PreProcess_German(x)
    n = size(x, 2);
    for i = 1 : n
        % The German alphabet includes the English alphabet + 7 more
        % characters
        xp = x(i);
        if (xp > 64 && xp < 91) 
            y(i) = xp + 32;
        elseif (xp > 96 && xp < 123)
            y(i) = xp;
        % Create exceptions for the unique German characters
        % Lower case
        elseif (xp == 228)
            y(i) = xp;
        elseif (xp == 246)
            y(i) = xp;
        elseif (xp == 252)
            y(i) = xp;
        % Upper case
        elseif (xp == 196)
            y(i) = 228;
        elseif (xp == 214)
            y(i) = 246;
        elseif (xp == 220)
            y(i) = 252;
        % Beta - unique S-like character
        elseif (xp == 223)
            y(i) = xp;
        end
    end;

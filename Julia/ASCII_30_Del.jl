function ASCII_30_Del(dectext_ascii_30)
    for i in dectext_ascii_30
        if i == 123
            i = 228
        elseif i == 124
            i = 246
        elseif i == 125
            i = 252
        elseif i == 126
            i = 223
        end
    end
    return dectext_ascii_30
end
function ASCII_30_Del(dectext_ascii_30)
    for i = 1:length(dectext_ascii_30)
        if dectext_ascii_30[i] == 123
            dectext_ascii_30[i] = 228
        elseif dectext_ascii_30[i] == 124
            dectext_ascii_30[i] = 246
        elseif dectext_ascii_30[i] == 125
            dectext_ascii_30[i] = 252
        elseif dectext_ascii_30[i] == 126
            dectext_ascii_30[i] = 223
        end
    end
    return dectext_ascii_30
end
function ASCII_30_Add(plaintext_ascii)
    for i in plaintext_ascii
        if i == 228
            i = 123
        elseif i == 246
            i = 124
        elseif i == 252
            i = 125
        elseif i == 223
            i = 126
        end
    end
    return plaintext_ascii
end
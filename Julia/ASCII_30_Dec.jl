function ASCII_30_Dec(ciphertext_ascii)
    for i in ciphertext_ascii
        if i == 196
            i = 91
        elseif i == 214
            i = 92
        elseif i == 220
            i = 93
        elseif i == 223
            i = 94
        end
    end
    return ciphertext_ascii
end
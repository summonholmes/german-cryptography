function ASCII_30_Dec(ciphertext_ascii)
    for i = 1:length(ciphertext_ascii)
        if ciphertext_ascii[i] == 196
            ciphertext_ascii[i] = 91
        elseif ciphertext_ascii[i] == 214
            ciphertext_ascii[i] = 92
        elseif ciphertext_ascii[i] == 220
            ciphertext_ascii[i] = 93
        elseif ciphertext_ascii[i] == 223
            ciphertext_ascii[i] = 94
        end
    end
    return ciphertext_ascii
end
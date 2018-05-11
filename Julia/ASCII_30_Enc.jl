function ASCII_30_Enc(ciphertext_ascii_30)
    for i = 1:length(ciphertext_ascii_30)
        if ciphertext_ascii_30[i] == 91
            ciphertext_ascii_30[i] = 196
        elseif ciphertext_ascii_30[i] == 92
            ciphertext_ascii_30[i] = 214
        elseif ciphertext_ascii_30[i] == 93
            ciphertext_ascii_30[i] = 220
        elseif ciphertext_ascii_30[i] == 94
            ciphertext_ascii_30[i] = 223
        end
    end
    return ciphertext_ascii_30
end
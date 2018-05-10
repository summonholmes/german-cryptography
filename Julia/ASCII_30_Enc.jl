function ASCII_30_Enc(ciphertext_ascii_30)
    for i in ciphertext_ascii_30
        if i == 91
            i = 196
        elseif i == 92
            i = 214
        elseif i == 93
            i = 220
        elseif i == 94
            i = 223
        end
    end
    return ciphertext_ascii_30
end
function ASCII_30_Enc(ciphertext_ascii_30)
    ciphertext_ascii_30[find(x -> x == 91, ciphertext_ascii_30)] = 196
    ciphertext_ascii_30[find(x -> x == 92, ciphertext_ascii_30)] = 214
    ciphertext_ascii_30[find(x -> x == 93, ciphertext_ascii_30)] = 220
    ciphertext_ascii_30[find(x -> x == 94, ciphertext_ascii_30)] = 223
    return ciphertext_ascii_30
end
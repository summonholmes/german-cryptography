function ASCII_30_Dec(ciphertext_ascii)
    ciphertext_ascii_30[find(x -> x == 196, ciphertext_ascii_30)] = 91
    ciphertext_ascii_30[find(x -> x == 214, ciphertext_ascii_30)] = 92
    ciphertext_ascii_30[find(x -> x == 220, ciphertext_ascii_30)] = 93
    ciphertext_ascii_30[find(x -> x == 223, ciphertext_ascii_30)] = 94
    return ciphertext_ascii
end
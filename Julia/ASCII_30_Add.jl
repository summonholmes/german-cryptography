function ASCII_30_Add(plaintext_ascii)
    plaintext_ascii[find(x -> x == 228, plaintext_ascii)] = 123
    plaintext_ascii[find(x -> x == 246, plaintext_ascii)] = 124
    plaintext_ascii[find(x -> x == 252, plaintext_ascii)] = 125
    plaintext_ascii[find(x -> x == 223, plaintext_ascii)] = 126
    return plaintext_ascii
end
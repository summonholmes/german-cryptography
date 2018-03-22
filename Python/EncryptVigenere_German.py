def EncryptVigenere_German(plaintext_ascii_30, keyword):
    keyword_ascii = [(i - 97) for i in [ord(j) for j in keyword]]
    ciphertext_ascii_30 = [((((plaintext_ascii_30[i] - 97) + keyword_ascii[(i - 1) % len(keyword)]) % 30) + 65)
                           for i in range(len(plaintext_ascii_30))]

    return ciphertext_ascii_30

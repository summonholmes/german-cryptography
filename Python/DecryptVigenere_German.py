def DecryptVigenere_German(ciphertext_ascii_30, keyword):
    keyword_ascii = [(i - 97) for i in [ord(j) for j in keyword]]
    dectext_ascii_30 = [((((ciphertext_ascii_30[i] - 65) - keyword_ascii[(i - 1) % len(keyword)]) % 30) + 97)
         for i in range(len(ciphertext_ascii_30))]

    return dectext_ascii_30

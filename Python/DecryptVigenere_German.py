def DecryptVigenere_German(ciphertext_ascii_30, keyword):
    keyword_ascii = [(i - 97) for i in list(map(ord, keyword))]
    return [
        ((((crypt - 65) - keyword_ascii[(i - 1) % len(keyword)]) % 30) + 97)
        for i, crypt in enumerate(ciphertext_ascii_30)
    ]

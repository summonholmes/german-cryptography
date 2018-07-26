def EncryptVigenere_German(plaintext_ascii_30, keyword):
    keyword_ascii = [(i - 97) for i in list(map(ord, keyword))]
    return [
        ((((plain - 97) + keyword_ascii[(i - 1) % len(keyword)]) % 30) + 65)
        for i, plain in enumerate(plaintext_ascii_30)
    ]

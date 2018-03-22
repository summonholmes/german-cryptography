def EncryptAffine_German(plaintext_ascii_30, a, b):
    ciphertext_ascii_30 = [(((a * (i - 97) + b) % 30) + 65) for i in plaintext_ascii_30]

    return ciphertext_ascii_30

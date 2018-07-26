def EncryptAffine_German(plaintext_ascii_30, a, b):
    return [(((a * (i - 97) + b) % 30) + 65) for i in plaintext_ascii_30]

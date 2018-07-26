def EncryptShift_German(plaintext_ascii_30, shift):
    return [(((i - 97 + shift) % 30) + 65) for i in plaintext_ascii_30]

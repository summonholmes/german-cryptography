def EncryptShift_German(plaintext_ascii_30, shift_k):
    ciphertext_ascii_30 = [(((i - 97 + shift_k) % 30) + 65) for i in plaintext_ascii_30]

    return ciphertext_ascii_30

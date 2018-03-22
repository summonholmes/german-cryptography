def EncryptSubstitution_German(plaintext_ascii_30, key_list):
    ciphertext_ascii_30 = [(key_list[i - 97] - 32) for i in plaintext_ascii_30]

    return ciphertext_ascii_30

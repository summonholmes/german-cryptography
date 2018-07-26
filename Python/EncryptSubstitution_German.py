def EncryptSubstitution_German(plaintext_ascii_30, key_list):
    return [(key_list[i - 97] - 32) for i in plaintext_ascii_30]

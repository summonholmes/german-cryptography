function EncryptSubstitution_German(plaintext_ascii_30, key_list)
    return key_list[plaintext_ascii_30 - 96] - 32
end
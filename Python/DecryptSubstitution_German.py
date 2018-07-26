def DecryptSubstitution_German(ciphertext_ascii_30, key_list):
    lookup_key = [((key - 97), (i + 97)) for i, key in enumerate(key_list)]
    return [
        j[:][1] for i in ciphertext_ascii_30 for j in lookup_key
        if (i - 65) == j[:][0]
    ]

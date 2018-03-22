def DecryptSubstitution_German(ciphertext_ascii_30, key_list):
    lookup_key = list(zip([(i - 97) for i in key_list], [(i + 97) for i in range(len(key_list))]))
    dectext_ascii_30 = [j[:][1] for i in ciphertext_ascii_30 for j in lookup_key if (i - 65) == j[:][0]]

    return dectext_ascii_30

def DecryptShift_German(ciphertext_ascii_dec_30, shift_k):
    dectext_ascii_30 = [(((i - 65 - shift_k) % 30) + 97) for i in ciphertext_ascii_dec_30]

    return dectext_ascii_30

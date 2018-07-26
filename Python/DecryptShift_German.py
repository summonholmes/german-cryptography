def DecryptShift_German(ciphertext_ascii_dec_30, shift):
    return [(((i - 65 - shift) % 30) + 97) for i in ciphertext_ascii_dec_30]

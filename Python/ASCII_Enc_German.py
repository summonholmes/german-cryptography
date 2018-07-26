def ASCII_Enc_German(ciphertext_ascii_30):
    return [
        196 if i == 91 else 214 if i == 92 else 220 if i == 93 else 223
        if i == 94 else i for i in ciphertext_ascii_30
    ]

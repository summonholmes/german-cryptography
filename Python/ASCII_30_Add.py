def ASCII_30_Add(plaintext_ascii):
    return [
        123 if i == 228 else 124 if i == 246 else 125 if i == 252 else 126
        if i == 223 else i for i in plaintext_ascii
    ]

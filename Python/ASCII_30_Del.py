def ASCII_30_Del(dectext_ascii_30):
    return [
        228 if i == 123 else 246 if i == 124 else 252 if i == 125 else 223
        if i == 126 else i for i in dectext_ascii_30
    ]

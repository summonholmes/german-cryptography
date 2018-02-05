def EncryptAffine_German(x, a, b):
    y = [(((a * (i - 97) + b) % 30) + 65) for i in x]

    return y

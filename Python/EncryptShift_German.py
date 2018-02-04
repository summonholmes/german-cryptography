def EncryptShift_German(x, k):
    y = [(((i - 97 + k) % 30) + 65) for i in x]
    return y
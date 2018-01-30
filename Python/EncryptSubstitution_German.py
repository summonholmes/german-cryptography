def EncryptSubstitution_German(x, k):
    n = len(x)
    y = []

    for i in range(n):
        xp = x[i] - 97
        y.append(k[xp] - 32)

    return y

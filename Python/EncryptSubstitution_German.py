def EncryptSubstitution_German(x, k):
    y = []

    for i in range(len(x)):
        xp = x[i] - 97
        y.append(k[xp] - 32)

    return y

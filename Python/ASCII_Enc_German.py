def ASCII_Enc_German(x):
# Very similar to preprocessing.
    n = len(x)
    j = 0
    y = []

    for i in range(j, n):
        xp = x[i]
        if xp == 91:
            y.append(196)
            j = j + 1
        elif xp == 92:
            y.append(214)
            j = j + 1
        elif xp == 93:
            y.append(220)
            j = j + 1
        elif xp == 94:
            y.append(223)
            j = j + 1
        else:
            y.append(xp)
            j = j + 1

    return y

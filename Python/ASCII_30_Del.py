def ASCII_30_Del(x):
# For use on the substituted German alphabet.  Revert the changes to
# retrieve the native German characters.
    n = len(x)
    j = 0
    y = []

    for i in range(j, n):
        xp = x[i]
        if xp == 123:
            y.append(228)
            j = j + 1
        elif xp == 124:
            y.append(246)
            j = j + 1
        elif xp == 125:
            y.append(252)
            j = j + 1
        elif xp == 126:
            y.append(223)
            j = j + 1
        else:
            y.append(xp)
            j = j + 1

    return y

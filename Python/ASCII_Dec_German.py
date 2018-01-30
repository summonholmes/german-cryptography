def ASCII_Dec_German(x):
# Very similar to preprocessing.
    n = len(x)
    j = 0
    y = []
    
    for i in range(j,n):
        xp = x[i]
        if xp == 196:
            y.append(91)
            j = j + 1
        elif xp == 214:
            y.append(92)
            j = j + 1
        elif xp == 220:
            y.append(93)
            j = j + 1
        elif xp == 223:
            y.append(94)
            j = j + 1
        else:
            y.append(xp)
            j = j + 1

    return y

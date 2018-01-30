def ASCII_30_Add(x):
# Very similar to preprocessing.
    n = len(x)
    j = 0
    y = []
    
    for i in range(j,n):
        xp = x[i]
        if xp == 228:
            y.append(123)
            j = j + 1
        elif xp == 246:
            y.append(124)
            j = j + 1
        elif xp == 252:
            y.append(125)
            j = j + 1
        elif xp == 223:
            y.append(126)
            j = j + 1
        else:
            y.append(xp)
            j = j + 1
            
    return y

def DecryptSubstitution_German(x, k):
    n = len(x)
    k1 = []
    k2 = []
    y = []
    
    for i in range(len(k)):
        k1.append(k[i] - 97)
        k2.append(i + 97)

    for i in range(n):
        xp = x[i] - 65
        for j in range(len(k)):
            if xp == k1[j]:
                y.append(k2[j])

    return y

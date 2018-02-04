def DecryptSubstitution_German(x, k):
    k1 = [(i - 97) for i in k]
    k2 = [(i + 97) for i in range(len(k))]
    y = []
    
    for i in range(len(x)):
        xp = x[i] - 65
        for j in range(len(k)):
            if xp == k1[j]:
                y.append(k2[j])

    return y

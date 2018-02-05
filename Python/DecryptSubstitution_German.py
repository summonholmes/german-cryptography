def DecryptSubstitution_German(x, k):
    k1 = list(zip([(i - 97) for i in k], [(i + 97) for i in range(len(k))]))
    y = [j[:][1] for i in x for j in k1 if (i - 65) == j[:][0]]
    
    return y

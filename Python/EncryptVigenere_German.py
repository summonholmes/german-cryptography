def EncryptVigenere_German(x, k):
    y = []
    plaintext_ascii = [ord(c) for c in k]
    k1 = [(i - 97) for i in plaintext_ascii]
    
    for i in range(len(x)):
        xp = x[i] - 97
        ii = ((i - 1) % len(k))
        y.append(((xp + k1[ii]) % 30) + 65)

    return y

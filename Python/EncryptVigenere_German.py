def EncryptVigenere_German(x, k):
    y = []
    k1 = []
    plaintext_ascii = [ord(c) for c in k]
    
    for i in range(len(plaintext_ascii)):
        k1.append(plaintext_ascii[i] - 97)
    
    n = len(x)
    m = len(k)
    
    for i in range(n):
        xp = x[i] - 97
        ii = ((i - 1) % m)
        y.append(((xp + k1[ii]) % 30) + 65)

    return y

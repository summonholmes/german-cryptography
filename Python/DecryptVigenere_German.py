def DecryptVigenere_German(x, k):
    y = []
    plaintext_ascii = [ord(c) for c in k]
    k1 = [(i - 97) for i in plaintext_ascii]

    n = len(x)
    m = len(k)

    for i in range(n):
        xp = x[i] - 65
        ii = ((i - 1) % m)
        y.append(((xp - k1[ii]) % 30) + 97)

    return y

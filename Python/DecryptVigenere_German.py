def DecryptVigenere_German(x, k):
    k1 = [(i - 97) for i in [ord(c) for c in k]]
    y = [((((x[i] - 65) - k1[(i - 1) % len(k)]) % 30) + 97)
         for i in range(len(x))]

    return y

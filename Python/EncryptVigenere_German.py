def EncryptVigenere_German(x, k):
    key_ascii = [ord(c) for c in k]
    k1 = [(i - 97) for i in key_ascii]
    y = [((((x[i] - 97) + k1[(i - 1) % len(k)]) % 30) + 65) for i in range(len(x))]

    return y

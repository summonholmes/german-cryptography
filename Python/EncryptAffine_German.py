def EncryptAffine_German(x, a, b):
    y = []

    for i in range(len(x)):
        y.append(((a * (x[i] - 97) + b) % 30) + 65)
        
    return y

from ExtendedEuclidean import ExtendedEuclidean

def DecryptAffine_German(x, a, b):
    y = []
    z = ExtendedEuclidean(30, a)
    
    for i in range(len(x)):
        y.append(((int(z[2]) * (x[i] - 65) - b * int(z[2])) % 30) + 97)
    return y

from ExtendedEuclidean import ExtendedEuclidean


def DecryptAffine_German(x, a, b):
    z = ExtendedEuclidean(30, a)
    y = [(((int(z[2]) * (i - 65) - b * int(z[2])) % 30) + 97) for i in x]

    return y

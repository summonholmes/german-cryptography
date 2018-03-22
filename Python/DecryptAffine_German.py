from ExtendedEuclidean import ExtendedEuclidean


def DecryptAffine_German(ciphertext_ascii_30, a, b):
    ext_eucl = ExtendedEuclidean(30, a)
    dectext_ascii_30 = [(((int(ext_eucl[2]) * (i - 65) - b * int(ext_eucl[2])) % 30) + 97) for i in ciphertext_ascii_30]

    return dectext_ascii_30

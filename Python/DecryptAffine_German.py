from ExtendedEuclidean import ExtendedEuclidean


def DecryptAffine_German(ciphertext_ascii_30, a, b):
    t = ExtendedEuclidean(30, a)["t"]
    return [(((t * (i - 65) - b * t) % 30) + 97) for i in ciphertext_ascii_30]

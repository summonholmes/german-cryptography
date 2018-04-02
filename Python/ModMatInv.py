from numpy import identity, linalg, zeros, count_nonzero, append as np_append
from ExtendedEuclidean import ExtendedEuclidean
from ModMatIter import ModMatIter


def ModMatInv(key, alpha_len):
    key_identity_matrix = np_append(key, identity(len(key)), axis=1)
    key_determinant = round(linalg.det(key)) % alpha_len
    ext_eucl_determinant = ExtendedEuclidean(alpha_len, key_determinant)

    if ext_eucl_determinant[0] != 1:
        return zeros((len(key), len(key)))
    else:
        key_identity_matrix = ModMatIter(key_identity_matrix, alpha_len, key)
        if count_nonzero(key_identity_matrix) == 0:
            return zeros((len(key), len(key)))
        inverted_key = key_identity_matrix[:, len(key): (2 * len(key))]

        return inverted_key

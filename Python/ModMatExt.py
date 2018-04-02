from ExtendedEuclidean import ExtendedEuclidean
from numpy import zeros


def ModMatExt(key_identity_matrix, alpha_len, key, i, ext_eucl_i, ext_eucl):
    if ext_eucl[0] != 1:
        key_invalid = zeros((len(key), len(key)))
        return key_invalid
    elif ext_eucl_i != i:
        key_identity_matrix[i, :] = (
            (key_identity_matrix[i, :] + key_identity_matrix[ext_eucl_i, :]) % alpha_len)

    key_identity_matrix[i, :] = (
        (ext_eucl[2] * key_identity_matrix[i, :]) % alpha_len)

    return key_identity_matrix

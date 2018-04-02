from ExtendedEuclidean import ExtendedEuclidean
from numpy import zeros
from ModMatExt import ModMatExt


def ModMatIter(key_identity_matrix, alpha_len, key):
    for i in range(len(key)):
        ext_eucl = ExtendedEuclidean(alpha_len, key_identity_matrix[i][i])
        ext_eucl_i = i

        while ext_eucl[0] != 1 and ext_eucl_i < (len(key) - 1):
            ext_eucl_i += 1
            ext_eucl = ExtendedEuclidean(alpha_len, ((
                key_identity_matrix[ext_eucl_i][i] + key_identity_matrix[i][i]) % alpha_len))

        key_identity_matrix = ModMatExt(
            key_identity_matrix, alpha_len, key, i, ext_eucl_i, ext_eucl)

        for j in range(len(key)):
            if j != i:
                key_identity_matrix[j, :] = (
                    (key_identity_matrix[j, :] - key_identity_matrix[j][i] * key_identity_matrix[i, :]) % alpha_len)

    return key_identity_matrix

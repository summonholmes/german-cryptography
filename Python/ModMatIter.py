from ExtendedEuclidean import ExtendedEuclidean
from numpy import zeros


def ModMatIter(key_identity_matrix, alpha_len, key):
    for i in range(len(key)):
        ext_eucl = ExtendedEuclidean(alpha_len, key_identity_matrix[i][i])
        ext_eucl_i = i

        while ext_eucl[0] != 1 and ext_eucl_i < (len(key) - 1):
            ext_eucl_i += 1
            ext_eucl = ExtendedEuclidean(alpha_len, ((
                key_identity_matrix[ext_eucl_i][i] + key_identity_matrix[i][i]) % alpha_len))

        if ext_eucl[0] != 1:
            key_invalid = zeros((len(key), len(key)))
            return key_invalid
        elif ext_eucl_i != i:
            key_identity_matrix[i, :] = (
                (key_identity_matrix[i, :] + key_identity_matrix[ext_eucl_i, :]) % alpha_len)

        key_identity_matrix[i, :] = (
            (ext_eucl[2] * key_identity_matrix[i, :]) % alpha_len)

        for j in range(len(key)):
            if j != i:
                key_identity_matrix[j, :] = (
                    (key_identity_matrix[j, :] - key_identity_matrix[j][i] * key_identity_matrix[i, :]) % alpha_len)

    return key_identity_matrix

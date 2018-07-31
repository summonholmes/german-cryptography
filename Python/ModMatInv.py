from numpy import identity, append as np_append
from numpy.linalg import det
from ExtendedEuclidean import ExtendedEuclidean
from ModMatInit import ModMatInit


def ModMatInv(key, alpha_len, matrix_len):
    key_ident = np_append(key, identity(matrix_len), axis=1)
    key_det = round(det(key)) % alpha_len
    key_det_ext = ExtendedEuclidean(alpha_len, key_det)
    inverted_key = ModMatInit(key, key_ident, key_det_ext, alpha_len,
                              matrix_len)
    return inverted_key

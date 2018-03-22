from math import ceil
from numpy import zeros, reshape, dot, array, append as np_append


def EncryptDecryptHill_German(text_ascii_30_97, key, alpha_len):
    matrix_len = ceil(len(text_ascii_30_97) / len(key))
    inverted_key = zeros((1, matrix_len * len(key) - len(text_ascii_30_97)))
    inverted_key = np_append(text_ascii_30_97, inverted_key)
    matrix_len = int(len(inverted_key) / len(key))
    inverted_key = inverted_key.reshape(len(key), matrix_len, order='F').copy()
    enc_dec_matrix = dot(inverted_key.T, key) % alpha_len
    matrix_len = matrix_len * len(key)
    enc_dec_matrix = enc_dec_matrix.T.reshape(1, matrix_len, order='F').copy()

    return [int(i) for i in array(enc_dec_matrix)[0].tolist()]

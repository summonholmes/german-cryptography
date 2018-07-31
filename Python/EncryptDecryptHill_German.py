from math import ceil
from numpy import zeros, reshape, dot, array, append as np_append


def EncryptDecryptHill_German(text_ascii_30, key, matrix_len, alpha_len):
    total_len = ceil(len(text_ascii_30) / matrix_len)
    inverted_key = zeros((1, total_len * matrix_len - len(text_ascii_30)))
    inverted_key = np_append(text_ascii_30, inverted_key)
    inverted_key = inverted_key.reshape(matrix_len, total_len, order='F')
    enc_dec_matrix = dot(inverted_key.T, key) % alpha_len
    total_len = total_len * matrix_len
    enc_dec_matrix = enc_dec_matrix.T.reshape(1, total_len, order='F')
    return [int(i) for i in array(enc_dec_matrix)[0].tolist()]

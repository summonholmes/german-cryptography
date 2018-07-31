from numpy import random, zeros, array_equal, round as np_round
from ModMatInv import ModMatInv


def Generate(matrix_len, alpha_len):
    key = np_round((alpha_len - 1) * random.rand(matrix_len, matrix_len))
    inverted_key = ModMatInv(key, alpha_len, matrix_len)
    while array_equal(inverted_key, zeros((matrix_len, matrix_len))) is True:
        key = np_round((alpha_len - 1) * random.rand(matrix_len, matrix_len))
        inverted_key = ModMatInv(key, alpha_len, matrix_len)
    return key, inverted_key
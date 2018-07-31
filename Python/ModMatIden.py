from ExtendedEuclidean import ExtendedEuclidean


def ModMatIden(key_ident, key_ident_ext, i, alpha_len, matrix_len):
    key_ident_i = i
    while key_ident_ext["gcd"] != 1 and key_ident_i < (matrix_len - 1):
        key_ident_i += 1
        key_ident_ext = ExtendedEuclidean(
            alpha_len,
            ((key_ident[key_ident_i][i] + key_ident[i][i]) % alpha_len))
    return key_ident_i, key_ident_ext
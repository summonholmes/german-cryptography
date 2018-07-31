from numpy import zeros


def ModMatExt(key_ident, key, key_ident_ext, key_ident_i, i, alpha_len,
              matrix_len):
    if key_ident_ext["gcd"] != 1:
        return zeros((matrix_len, matrix_len))
    elif key_ident_i != i:
        key_ident[i, :] = (
            (key_ident[i, :] + key_ident[key_ident_i, :]) % alpha_len)
    key_ident[i, :] = ((key_ident_ext["t"] * key_ident[i, :]) % alpha_len)
    return key_ident
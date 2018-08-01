include("ModMatIter.jl")

function ModMatInit(key, key_ident, key_det_ext, alpha_len, matrix_len)
    if key_det_ext["gcd"] != 1
        return zeros(matrix_len, matrix_len)
    else
        key_ident = ModMatIter(key, key_ident, alpha_len, matrix_len)
        if key_ident == zeros(matrix_len, matrix_len)
            return zeros(matrix_len, matrix_len)
        else
            inverted_key = key_ident[:, matrix_len + 1 : matrix_len * 2]
            return inverted_key
        end
    end
end
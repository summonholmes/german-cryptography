include("ExtendedEuclidean.jl")
include("ModMatInit.jl")

function ModMatInv(key, alpha_len, matrix_len)
    key_ident = hcat(key, eye(matrix_len))
    key_det = round(mod.(det(key), alpha_len))
    key_det_ext = ExtendedEuclidean(alpha_len, key_det)
    inverted_key = ModMatInit(key, key_ident, key_det_ext, alpha_len, matrix_len)
    return inverted_key
end
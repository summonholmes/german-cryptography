include("ExtendedEuclidean.jl")
include("ModMatIden.jl")
include("ModMatExt.jl")
include("ModMatShape.jl")

function ModMatIter(key, key_ident, alpha_len, matrix_len)
    for i in 1:matrix_len
        key_ident_ext = ExtendedEuclidean(alpha_len, key_ident[i, i])
        key_ident_i, key_ident_ext = ModMatIden(key_ident, key_ident_ext, i, alpha_len, matrix_len)
        key_ident = ModMatExt(key_ident, key, key_ident_ext, key_ident_i, i, alpha_len, matrix_len)
        key_ident = ModMatShape(key_ident, i, alpha_len, matrix_len)
    end
    return key_ident
end

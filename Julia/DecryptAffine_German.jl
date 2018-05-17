include("ExtendedEuclidean.jl")

function DecryptAffine_German(plaintext_ascii_30, a, b)
    ext_eucl_list = ExtendedEuclidean(30, a)
    return mod((ext_eucl_list[3] * (plaintext_ascii_30 - 65) - b * ext_eucl_list[3]), 30) + 97
end
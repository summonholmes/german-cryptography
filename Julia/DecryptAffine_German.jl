include("ExtendedEuclidean.jl")

function DecryptAffine_German(plaintext_ascii_30, a, b)
    ext_eucl = ExtendedEuclidean(30, a)
    return mod.((ext_eucl["t"] * (plaintext_ascii_30 - 65) - b * ext_eucl["t"]), 30) + 97
end
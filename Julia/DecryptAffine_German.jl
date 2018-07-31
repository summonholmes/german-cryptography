include("ExtendedEuclidean.jl")

function DecryptAffine_German(plaintext_ascii_30, a, b)
    a_t = ExtendedEuclidean(30, a)["t"]
    return mod.((a_t * (plaintext_ascii_30 - 65) - b * a_t), 30) + 97
end
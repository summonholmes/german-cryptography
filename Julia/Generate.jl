include("ModMatInv.jl")

function Generate(matrix_len, alpha_len)
    key = floor.(rand(matrix_len, matrix_len) * alpha_len)
    inverted_key = ModMatInv(key, alpha_len, matrix_len)
    while inverted_key == zeros(matrix_len, matrix_len)
        key = floor.(rand(matrix_len, matrix_len) * alpha_len)
        inverted_key = ModMatInv(key, alpha_len, matrix_len)
    end
    return key, inverted_key
end
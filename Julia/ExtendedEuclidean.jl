function ExtendedEuclidean(alpha_len, a)
    remainder = [alpha_len, a]
    alpha_len_s = [1, 0]
    a_t = [0, 1]
    quotient = []
    while remainder[end] > 0
        push!(quotient, fld(remainder[end - 1], remainder[end]))
        push!(remainder, mod(remainder[end - 1], remainder[end]))
        push!(alpha_len_s, alpha_len_s[end - 1] - quotient[end] * alpha_len_s[end])
        push!(a_t, a_t[end - 1] - quotient[end] * a_t[end])
    end
    return Dict("gcd" => remainder[end - 1], 
        "s" => alpha_len_s[end - 1], 
        "t" => a_t[end - 1])
end
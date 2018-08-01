function EncryptDecryptHill_German(text_ascii_30, key, matrix_len, alpha_len)
    total_len = cld(length(text_ascii_30), matrix_len)
    text_key = zeros(total_len * matrix_len - length(text_ascii_30))
    text_key = vcat(text_ascii_30, text_key)
    text_key = reshape(text_key, matrix_len, total_len)
    enc_dec_matrix = transpose(text_key) * key % 30
    total_len = total_len * matrix_len
    enc_dec_matrix = reshape(transpose(enc_dec_matrix), total_len)
    return enc_dec_matrix
end
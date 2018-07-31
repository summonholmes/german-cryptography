function DecryptVigenere_German(ciphertext_ascii_30, keyword)
    keyword_ascii = [Int(i) - 97 for i in keyword]
    keyword_ascii = repmat(keyword_ascii, cld(length(ciphertext_ascii_30), length(keyword_ascii)))
    pop_length = length(keyword_ascii) - length(ciphertext_ascii_30) - 1
    keyword_ascii = deleteat!(keyword_ascii, length(keyword_ascii) - pop_length:length(keyword_ascii))
    return mod.((ciphertext_ascii_30 - 65) - keyword_ascii, 30) + 97
end
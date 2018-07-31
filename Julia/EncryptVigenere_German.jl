function EncryptVigenere_German(plaintext_ascii_30, keyword)
    keyword_ascii = [Int(i) - 97 for i in keyword]
    keyword_ascii = repmat(keyword_ascii, cld(length(plaintext_ascii_30), length(keyword_ascii)))
    pop_length = length(keyword_ascii) - length(plaintext_ascii_30) - 1
    keyword_ascii = deleteat!(keyword_ascii, length(keyword_ascii) - pop_length:length(keyword_ascii))
    return mod.((plaintext_ascii_30 - 97) + keyword_ascii, 30) + 65
end

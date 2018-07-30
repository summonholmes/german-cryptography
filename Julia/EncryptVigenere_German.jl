function EncryptVigenere_German(plaintext_ascii_30, keyword)
    keyword_ascii = [Int(i) - 97 for i in keyword]
    return [mod.((plain - 97) + keyword_ascii[mod.((i - 1), length(keyword)) + 1], 30) 
        for (i, plain) in enumerate(plaintext_ascii_30)] + 65
end
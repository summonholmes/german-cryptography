function DecryptVigenere_German(ciphertext_ascii_30, keyword)
    keyword_ascii = [Int(i) - 97 for i in keyword]
    return [mod.((crypt - 65) - keyword_ascii[mod.((i - 1), length(keyword)) + 1], 30) 
        for (i, crypt) in enumerate(ciphertext_ascii_30)] + 97
end
function ASCII_30_Add(plaintext_ascii)
    for i = 1:length(plaintext_ascii)
        if plaintext_ascii[i] == 228
            plaintext_ascii[i] = 123
        elseif plaintext_ascii[i] == 246
            plaintext_ascii[i] = 124
        elseif plaintext_ascii[i] == 252
            plaintext_ascii[i] = 125
        elseif plaintext_ascii[i] == 223
            plaintext_ascii[i] = 126
        end
    end
    return plaintext_ascii
end
function DecryptSubstitution_German(ciphertext_ascii_30, key_list)
    dectext_ascii_30 = ciphertext_ascii_30 - 64
    for (i, key) in enumerate(key_list)
        dectext_ascii_30[find(x -> x == key - 96, dectext_ascii_30)] = i + 96
    end
    return dectext_ascii_30
end
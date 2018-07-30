function ASCII_30_Del(dectext_ascii_30)
    dectext_ascii_30[find(x -> x == 123, dectext_ascii_30)] = 228
    dectext_ascii_30[find(x -> x == 124, dectext_ascii_30)] = 246
    dectext_ascii_30[find(x -> x == 125, dectext_ascii_30)] = 252
    dectext_ascii_30[find(x -> x == 126, dectext_ascii_30)] = 223
    return dectext_ascii_30
end
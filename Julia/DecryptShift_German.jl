function DecryptShift_German(ciphertext_ascii_30, shift)
    return mod.((ciphertext_ascii_30 - 65 - shift), 30) + 97
end
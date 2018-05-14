function DecryptShift_German(ciphertext_ascii_30, magnitude_of_shift)
    return mod((ciphertext_ascii_30 - 65 - magnitude_of_shift), 30) + 97
end
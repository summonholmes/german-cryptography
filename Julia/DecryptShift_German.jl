function DecryptShift_German(ciphertext_ascii_30, magnitude_of_shift)
    return ((ciphertext_ascii_30 - 65 - magnitude_of_shift) % 30) + 97
end
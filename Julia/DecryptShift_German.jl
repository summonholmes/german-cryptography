function DecryptShift_German(ciphertext_ascii_30, magnitude_of_shift)
    return [((i - 65 - magnitude_of_shift) % 30) + 97 for i in ciphertext_ascii_30]
end
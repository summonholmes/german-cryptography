function EncryptShift_German(plaintext_ascii_30, magnitude_of_shift)
    return [((i - 97 + magnitude_of_shift) % 30) + 65 for i in plaintext_ascii_30]
end
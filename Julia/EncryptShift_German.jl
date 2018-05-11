function EncryptShift_German(plaintext_ascii_30, magnitude_of_shift)
    return ((plaintext_ascii_30 - 97 + magnitude_of_shift) % 30) + 65
end
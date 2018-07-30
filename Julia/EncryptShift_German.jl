function EncryptShift_German(plaintext_ascii_30, shift)
    return mod.((plaintext_ascii_30 - 97 + shift), 30) + 65
end
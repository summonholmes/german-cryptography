function EncryptAffine_German(plaintext_ascii_30, a, b)
    return mod.((a * (plaintext_ascii_30 - 97) + b), 30) + 65
end
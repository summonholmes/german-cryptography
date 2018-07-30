include("PreProcess_German.jl")
include("ASCII_30_Add.jl")
include("EncryptAffine_German.jl")
include("ASCII_30_Enc.jl")
include("ASCII_30_Dec.jl")
include("DecryptAffine_German.jl")
include("ASCII_30_Del.jl")

# Import file
file = open("nachtlied-utf-8.txt")
rawtext = readstring(file)
close(file)

# Preprocess
plaintext = PreProcess_German(rawtext)

# Convert to ASCII Integer array
plaintext_ascii = [Int(i) for i in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

# Ciphertext
ciphertext_ascii_30 = EncryptAffine_German(plaintext_ascii_30, 7, 5)
ciphertext_ascii = ASCII_30_Enc(ciphertext_ascii_30)
ciphertext = join([Char(i) for i in ciphertext_ascii])

# Decrypted Ciphertext
ciphertext_ascii_30 = ASCII_30_Dec(ciphertext_ascii)
dectext_ascii_30 = DecryptAffine_German(ciphertext_ascii_30, 7, 5)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)
dectext = join([Char(i) for i in dectext_ascii])

# Print results
print(plaintext[301:400])
print("\n")
print(ciphertext[301:400])
print("\n")
print(dectext[301:400])

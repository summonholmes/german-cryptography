include("PreProcess_German.jl")
include("ASCII_30_Add.jl")
include("Generate.jl")
include("EncryptDecryptHill_German.jl")
include("ASCII_30_Enc.jl")
include("ASCII_30_Dec.jl")
include("ASCII_30_Del.jl")

# Import file
file = open("nachtlied-utf-8.txt")
rawtext = readstring(file)
close(file)

# Preprocess
plaintext = PreProcess_German(rawtext)
key, inverted_key = Generate(8, 30)

# Convert to ASCII Integer array
plaintext_ascii = [Int(i) for i in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)
plaintext_ascii_30 = plaintext_ascii_30 - 97

# Ciphertext
ciphertext_ascii_30 = EncryptDecryptHill_German(plaintext_ascii_30, key, 8, 30)
dectext_ascii_30 = EncryptDecryptHill_German(ciphertext_ascii_30, inverted_key, 8, 30)
ciphertext_ascii_30 = ciphertext_ascii_30 + 65
ciphertext_ascii = ASCII_30_Enc(ciphertext_ascii_30)
ciphertext = join([Char(i) for i in ciphertext_ascii])

# Decrypted Ciphertext
dectext_ascii_30 = dectext_ascii_30 + 97
dectext_ascii = ASCII_30_Del(dectext_ascii_30)
dectext = join([Char(i) for i in dectext_ascii])

# Print results
print(plaintext[301:400], "\n")
print(ciphertext[301:400], "\n")
print(dectext[301:400], "\n")
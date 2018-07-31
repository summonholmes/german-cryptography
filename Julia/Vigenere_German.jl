include("PreProcess_German.jl")
include("ASCII_30_Add.jl")
include("EncryptVigenere_German.jl")
include("ASCII_30_Enc.jl")
include("ASCII_30_Dec.jl")
include("DecryptVigenere_German.jl")
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
ciphertext_ascii_30 = EncryptVigenere_German(plaintext_ascii_30, "bratwurst")
ciphertext_ascii = ASCII_30_Enc(ciphertext_ascii_30)
ciphertext = join([Char(i) for i in ciphertext_ascii])

# Decrypted Ciphertext
ciphertext_ascii_30 = ASCII_30_Dec(ciphertext_ascii)
dectext_ascii_30 = DecryptVigenere_German(ciphertext_ascii_30, "bratwurst")
dectext_ascii = ASCII_30_Del(dectext_ascii_30)
dectext = join([Char(i) for i in dectext_ascii])

# Print results
print(plaintext[301:400], "\n")
print(ciphertext[300:400], "\n")
print(dectext[301:400], "\n")
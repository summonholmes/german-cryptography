include("PreProcess_German.jl")
include("ASCII_30_Add.jl")
include("EncryptSubstitution_German.jl")
include("ASCII_30_Enc.jl")
include("ASCII_30_Dec.jl")
include("DecryptSubstitution_German.jl")
include("ASCII_30_Del.jl")

# Import file
file = open("nachtlied-utf-8.txt")
rawtext = readstring(file)
close(file)

# Preprocess
plaintext = PreProcess_German(rawtext)

# Key
key_list = randperm(30) + 96

# Convert to ASCII Integer array
plaintext_ascii = [Int(i) for i in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

# Ciphertext
ciphertext_ascii_30 = EncryptSubstitution_German(plaintext_ascii_30, key_list)
ciphertext_ascii = ASCII_30_Enc(ciphertext_ascii_30)
ciphertext = join([Char(i) for i in ciphertext_ascii])

# Decrypted Ciphertext
ciphertext_ascii_30 = ASCII_30_Dec(ciphertext_ascii)
dectext_ascii_30 = DecryptSubstitution_German(ciphertext_ascii_30, key_list)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)
dectext = join([Char(i) for i in dectext_ascii])

# Print results
print(plaintext[301:400], "\n")
print(ciphertext[300:400], "\n")
print(dectext[301:400], "\n")
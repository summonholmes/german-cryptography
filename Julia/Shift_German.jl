include("Julia/PreProcess_German.jl")
include("Julia/ASCII_30_Add.jl")
include("Julia/EncryptShift_German.jl")
include("Julia/ASCII_30_Enc.jl")
include("Julia/ASCII_30_Dec.jl")
include("Julia/DecryptShift_German.jl")
include("Julia/ASCII_30_Del.jl")

# Import file
f = open("nachtlied-utf-8.txt")
rawtext = readstring(f)
close(f)

# Preprocess
plaintext = PreProcess_German(rawtext)

# Convert to ASCII Integer array
plaintext_ascii = [Int(i) for i in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

# Ciphertext
magnitude_of_shift = 23
ciphertext_ascii_30 = EncryptShift_German(plaintext_ascii_30, magnitude_of_shift)
ciphertext_ascii = ASCII_30_Enc(ciphertext_ascii_30)
ciphertext = join([Char(i) for i in ciphertext_ascii])

# Decrypted Ciphertext
ciphertext_ascii_30 = ASCII_30_Dec(ciphertext_ascii)
dectext_ascii_30 = DecryptShift_German(ciphertext_ascii_30, magnitude_of_shift)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)
dectext = join([Char(i) for i in dectext_ascii])
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/PreProcess_German.r')
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/ASCII_30_Add.r')
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/ASCII_30_Del.r')
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/ASCII_Enc_German.r')
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/ASCII_Dec_German.r')
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/EncryptDecryptHill_German.r')
source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/Generate.r')


f <- read.delim("/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/nachtlied-utf-8.txt", comment.char="#")
x <- paste(unlist(f), collapse = " ")
k <- Generate(8, 30)

plaintext <- PreProcess_German(x)
plaintext_ascii <- utf8ToInt(plaintext)
plaintext_ascii_30 <- ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 <- EncryptDecryptHill_German((plaintext_ascii_30 - 97), k[1], 30)
ciphertext_ascii <- ASCII_Enc_German(ciphertext_ascii_30 + 65)

dectext_ascii_30 <- EncryptDecryptHill_German(ciphertext_ascii_30, k[2], 30)
dectext_ascii <- ASCII_30_Del(dectext_ascii_30 + 97)

ciphertext <- intToUtf8(ciphertext_ascii)
dectext <- intToUtf8(dectext_ascii)

sprintf("%s", substring(plaintext, 300, 400))
sprintf("%s", substring(ciphertext, 300, 400))
sprintf("%s", substring(dectext, 300, 400))


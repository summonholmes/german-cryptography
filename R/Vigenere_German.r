source('~/german-cryptography/R/PreProcess_German.r')
source('~/german-cryptography/R/ASCII_30_Add.r')
source('~/german-cryptography/R/ASCII_30_Del.r')
source('~/german-cryptography/R/ASCII_Enc_German.r')
source('~/german-cryptography/R/ASCII_Dec_German.r')
source('~/german-cryptography/R/EncryptVigenere_German.r')
source('~/german-cryptography/R/DecryptVigenere_German.r')


f <- read.delim("~/german-cryptography/nachtlied-utf-8.txt", comment.char="#")
x <- paste(unlist(f), collapse = " ")

plaintext <- PreProcess_German(x)
plaintext_ascii <- utf8ToInt(plaintext)
plaintext_ascii_30 <- ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 <- EncryptVigenere_German(plaintext_ascii_30, "bratwurst")
ciphertext_ascii <- ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_dec <- ASCII_Dec_German(ciphertext_ascii_30)

dectext_ascii_30 <- DecryptVigenere_German(ciphertext_ascii_dec, "bratwurst")
dectext_ascii <- ASCII_30_Del(dectext_ascii_30)

ciphertext <- intToUtf8(ciphertext_ascii)
dectext <- intToUtf8(dectext_ascii)

sprintf("%s", substring(plaintext, 300, 400))
sprintf("%s", substring(ciphertext, 300, 400))
sprintf("%s", substring(dectext, 300, 400))

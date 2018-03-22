source('PreProcess_German.r')
source('ASCII_30_Add.r')
source('ASCII_30_Del.r')
source('ASCII_Enc_German.r')
source('ASCII_Dec_German.r')
source('EncryptAffine_German.r')
source('DecryptAffine_German.r')


f <- read.delim("nachtlied-utf-8.txt", comment.char="#")
rawtext <- paste(unlist(f), collapse = " ")

plaintext <- PreProcess_German(rawtext)
plaintext_ascii <- utf8ToInt(plaintext)
plaintext_ascii_30 <- ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 <- EncryptAffine_German(plaintext_ascii_30, 7, 5)
ciphertext_ascii <- ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_dec <- ASCII_Dec_German(ciphertext_ascii_30)

dectext_ascii_30 <- DecryptAffine_German(ciphertext_ascii_dec, 7, 5)
dectext_ascii <- ASCII_30_Del(dectext_ascii_30)

ciphertext <- intToUtf8(ciphertext_ascii)
dectext <- intToUtf8(dectext_ascii)

sprintf("%s", substring(plaintext, 300, 400))
sprintf("%s", substring(ciphertext, 300, 400))
sprintf("%s", substring(dectext, 300, 400))

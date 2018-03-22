source('PreProcess_German.r')
source('ASCII_30_Add.r')
source('ASCII_30_Del.r')
source('ASCII_Enc_German.r')
source('ASCII_Dec_German.r')
source('EncryptShift_German.r')
source('DecryptShift_German.r')


f <- read.delim("nachtlied-utf-8.txt", comment.char="#")
rawtext <- paste(unlist(f), collapse = " ")
shift_k <- 23

plaintext <- PreProcess_German(rawtext)
plaintext_ascii <- utf8ToInt(plaintext)
plaintext_ascii_30 <- ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 <- EncryptShift_German(plaintext_ascii_30, shift_k)
ciphertext_ascii <- ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_dec_30 <- ASCII_Dec_German(ciphertext_ascii)

dectext_ascii_30 <- DecryptShift_German(ciphertext_ascii_dec_30, shift_k)
dectext_ascii <- ASCII_30_Del(dectext_ascii_30)

plaintext_30 <- intToUtf8(plaintext_ascii_30)
ciphertext <- intToUtf8(ciphertext_ascii)
dectext <- intToUtf8(dectext_ascii)
  
sprintf("%s", substring(plaintext, 300, 400))
sprintf("%s", substring(ciphertext, 300, 400))
sprintf("%s", substring(dectext, 300, 400))

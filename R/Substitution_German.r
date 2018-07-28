source('PreProcess_German.r')
source('ASCII_30_Add.r')
source('ASCII_30_Del.r')
source('ASCII_Enc_German.r')
source('ASCII_Dec_German.r')
source('EncryptSubstitution_German.r')
source('DecryptSubstitution_German.r')


file <- read.delim("nachtlied-utf-8.txt")
rawtext <- paste(unlist(file), collapse = "")
key_list <- (sample(30, 30, replace = FALSE, prob = NULL)) + 96

plaintext <- PreProcess_German(rawtext)
plaintext_ascii <- utf8ToInt(plaintext)
plaintext_ascii_30 <- ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 <-
  EncryptSubstitution_German(plaintext_ascii_30, key_list)
ciphertext_ascii <- ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_dec <- ASCII_Dec_German(ciphertext_ascii_30)

dectext_ascii_30 <-
  DecryptSubstitution_German(ciphertext_ascii_dec, key_list)
dectext_ascii <- ASCII_30_Del(dectext_ascii_30)

ciphertext <- intToUtf8(ciphertext_ascii)
dectext <- intToUtf8(dectext_ascii)

sprintf("%s", substring(plaintext, 300, 400))
sprintf("%s", substring(ciphertext, 300, 400))
sprintf("%s", substring(dectext, 300, 400))

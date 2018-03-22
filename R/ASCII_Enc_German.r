ASCII_Enc_German <- function(ciphertext_ascii)
{
  ciphertext_ascii[ciphertext_ascii == 91] <- 196
  ciphertext_ascii[ciphertext_ascii == 92] <- 214
  ciphertext_ascii[ciphertext_ascii == 93] <- 220
  ciphertext_ascii[ciphertext_ascii == 94] <- 223
  
  return(ciphertext_ascii)
}
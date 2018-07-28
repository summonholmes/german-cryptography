ASCII_Dec_German <- function(ciphertext_ascii_dec_30)
{
  ciphertext_ascii_dec_30[ciphertext_ascii_dec_30 == 196] <- 91
  ciphertext_ascii_dec_30[ciphertext_ascii_dec_30 == 214] <- 92
  ciphertext_ascii_dec_30[ciphertext_ascii_dec_30 == 220] <- 93
  ciphertext_ascii_dec_30[ciphertext_ascii_dec_30 == 223] <- 94
  
  return(ciphertext_ascii_dec_30)
}
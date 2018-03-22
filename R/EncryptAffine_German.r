EncryptAffine_German <- function(plaintext_ascii_30, a, b)
{
  ciphertext_ascii_30 <- ((a * (plaintext_ascii_30 - 97) + b) %% 30) + 65
  
  return(ciphertext_ascii_30)
}
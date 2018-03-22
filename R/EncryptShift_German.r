EncryptShift_German <- function(plaintext_ascii_30, shift_k)
{
  ciphertext_ascii_30 <- ((plaintext_ascii_30 - 97 + shift_k) %% 30) + 65
  
  return(ciphertext_ascii_30)
}
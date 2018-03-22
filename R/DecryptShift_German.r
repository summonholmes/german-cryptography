DecryptShift_German <- function(ciphertext_ascii_dec, shift_k)
{
  ciphertext_ascii_30 <- ((ciphertext_ascii_dec - 65 - shift_k) %% 30) + 97
  
  return(ciphertext_ascii_30)
}
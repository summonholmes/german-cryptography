DecryptShift_German <- function(ciphertext_ascii_dec, shift)
{
  return(((ciphertext_ascii_dec - 65 - shift) %% 30) + 97)
}
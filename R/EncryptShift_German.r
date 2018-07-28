EncryptShift_German <- function(plaintext_ascii_30, shift)
{
  return(((plaintext_ascii_30 - 97 + shift) %% 30) + 65)
}
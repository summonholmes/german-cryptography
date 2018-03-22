EncryptSubstitution_German <- function(plaintext_ascii_30, key_list)
{
  ciphertext_ascii_30 <- plaintext_ascii_30
  for(i in 1 : length(plaintext_ascii_30))
  {
    ciphertext_ascii_30[i] <- key_list[plaintext_ascii_30[i] - 96] - 32
  }

  return(ciphertext_ascii_30)
}
EncryptVigenere_German <- function(plaintext_ascii_30, keyword)
{
  keyword_ascii <- utf8ToInt(keyword) - 97
  ciphertext_ascii_3 <- plaintext_ascii_30
  for(i in 1 : length(plaintext_ascii_30))
  {
    ciphertext_ascii_3[i] <- (((plaintext_ascii_30[i] - 97) + keyword_ascii[((i - 1) %% length(keyword_ascii)) + 1]) %% 30) + 65
  }
  
  return(ciphertext_ascii_3)
}
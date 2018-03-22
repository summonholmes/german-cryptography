DecryptVigenere_German <- function(ciphertext_ascii_dec, keyword)
{
  keyword_ascii <- utf8ToInt(keyword) - 97
  dectext_ascii_30 <- ciphertext_ascii_dec
  for(i in 1 : length(ciphertext_ascii_dec))
  {
    dectext_ascii_30[i] <- (((ciphertext_ascii_dec[i] - 65) - keyword_ascii[((i - 1) %% length(keyword_ascii)) + 1]) %% 30) + 97
  }
  
  return(dectext_ascii_30)
}
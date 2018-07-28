EncryptVigenere_German <- function(plaintext_ascii_30, keyword)
{
  keyword_ascii <- utf8ToInt(keyword) - 97
  
  return((((plaintext_ascii_30 - 97) + keyword_ascii
  ) %% 30) + 65)
}
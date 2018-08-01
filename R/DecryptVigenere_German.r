DecryptVigenere_German <- function(ciphertext_ascii_dec, keyword)
{
  keyword_ascii <- utf8ToInt(keyword) - 97
  return((((ciphertext_ascii_dec - 65) - keyword_ascii
  ) %% 30) + 97)
}
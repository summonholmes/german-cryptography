EncryptAffine_German <- function(plaintext_ascii_30, a, b)
{
  return(((a * (
    plaintext_ascii_30 - 97
  ) + b) %% 30) + 65)
}
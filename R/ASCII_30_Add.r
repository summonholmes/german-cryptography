ASCII_30_Add <- function(plaintext_ascii_30)
{
  plaintext_ascii_30[plaintext_ascii_30 == 228] <- 123
  plaintext_ascii_30[plaintext_ascii_30 == 246] <- 124
  plaintext_ascii_30[plaintext_ascii_30 == 252] <- 125
  plaintext_ascii_30[plaintext_ascii_30 == 223] <- 126
  return(plaintext_ascii_30)
}
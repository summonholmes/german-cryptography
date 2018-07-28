ASCII_30_Del <- function(dectext_ascii)
{
  dectext_ascii[dectext_ascii == 123] <- 228
  dectext_ascii[dectext_ascii == 124] <- 246
  dectext_ascii[dectext_ascii == 125] <- 252
  dectext_ascii[dectext_ascii == 126] <- 223
  
  return(dectext_ascii)
}
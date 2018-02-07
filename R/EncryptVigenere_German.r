EncryptVigenere_German <- function(x, k)
{
  k1 <- utf8ToInt(k) - 97
  y <- x
  for(i in 1 : length(x))
  {
    xp <- x[i] - 97
    ii <- ((i - 1) %% length(k1)) + 1
    y[i] <- ((xp + k1[ii]) %% 30) + 65
  }
  return(y)
}
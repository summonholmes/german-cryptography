EncryptSubstitution_German <- function(x, k)
{
  y <- x
  
  for(i in 1 : length(x))
  {
    xp <- x[i] - 96
    y[i] <- k[xp] - 32
  }
  return(y)
}
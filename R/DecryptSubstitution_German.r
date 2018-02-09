DecryptSubstitution_German <- function(x, k)
{
  k1 <- k
  k2 <- k
  y <- x
  
  for(i in 1 : length(k))
  {
    k1[i] <- k[i] - 96
    k2[i] <- i + 96
  }
  
  for(i in 1 : length(x))
  {
    xp <- x[i] - 64
    for(j in 1 : length(k))
    {
      if(xp == k1[j])
      {
        y[i] <- k2[j]
      }
    }
  }
  return(y)
}
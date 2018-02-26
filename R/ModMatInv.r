source('ExtendedEuclidean.r')

ModMatInv <- function(A, m)
{
  n <- nrow(A)
  X <- cbind(A, diag(n))
  d <- round(det(A) %% m)
  x1 <- ExtendedEuclidean(m, d)
  
  if (x1[1] != 1)
  {
    B <- matrix(0, nrow = n, ncol = n)
    return(B)
  }
  
  for (i in 1 : n)
  {
    x <- X[i, i]
    x1 <- ExtendedEuclidean(m, x)
    ii <- i
    while (x1[1] != 1 && ii < n)
    {
      ii <- ii + 1
      x <- (X[ii, i] + X[i, i]) %% m
      x1 <- ExtendedEuclidean(m, x)
    }
    if (x1[1] != 1)
    {
      B <- matrix(0, nrow = n, ncol = n)
      return(B)
    }
    if (ii != i)
    {
      X[i,] <- (X[i,] + X[ii,]) %% m
    }
    X[i,] <- (x1[3] * X[i,]) %% m
    for (j in 1 : n)
    {
      if (j != i)
      {
        x <- X[j, i]
        X[j,] <- (X[j,] - x * X[i,]) %% m
      }
    }
  }
  B <- X[, (n+1):(n*2)]
  return(B)
}
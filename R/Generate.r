source('/Users/shanekimble/Dropbox/Code/Git/german-cryptography/R/ModMatInv.r')

Generate <- function(n, m)
{
  K <- round((m - 1) * matrix(runif(n * n), ncol = n))
  K_1 <- ModMatInv(K, m)
  i <- 1

  
  while (all.equal(K_1, matrix(0, nrow = n, ncol = n)) == TRUE)
    {
    i <- i + 1
    K <- round((m - 1) * matrix(runif(n * n), ncol = n))
    K_1 <- ModMatInv(K, m)
  }
  return(list(K, K_1, i))
}
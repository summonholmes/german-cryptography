EncryptDecryptHill_German <- function(x, k, m)
{
  k <- matrix(unlist(k), ncol = 8, nrow = 8)
  n <- nrow(k)
  nx <- length(x)
  l <- ceiling(nx / n)
  z <- matrix(0, nrow = 1, ncol = l * n - nx)
  z <- c(x, z)
  l <- length(z) / n
  z <- array(z, c(n, l))
  y <- (t(z) %*% k) %% m
  l <- l * n
  y <- c(array(t(y), c(1, l)))
  
  return(y)
}
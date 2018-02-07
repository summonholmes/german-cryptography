source('~/german-cryptography/R/ExtendedEuclidean.r')

DecryptAffine_German <- function(x, a, b)
{
  z <- ExtendedEuclidean(30, a)
  y <- ((z[3] * (x - 65) - b) %% 30) + 97
  return(y)
}
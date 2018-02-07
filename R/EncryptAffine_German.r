EncryptAffine_German <- function(x, a, b)
{
  y <- ((a * (x - 97) + b) %% 30) + 65
  return(y)
}
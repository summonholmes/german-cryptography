EncryptShift_German <- function(x, k)
{
  y <- ((x - 97 + k) %% 30) + 65
  return(y)
}
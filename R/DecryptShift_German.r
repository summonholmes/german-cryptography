DecryptShift_German <- function(x, k)
{
  y <- ((x - 65 - k) %% 30) + 97
  return(y)
}
ASCII_30_Del <- function(x)
{
  y <- replace(as.numeric(x), x == 123, 228)
  y <- replace(as.numeric(y), y == 124, 246)
  y <- replace(as.numeric(y), y == 125, 252)
  y <- replace(as.numeric(y), y == 126, 223)
  return(y)
}

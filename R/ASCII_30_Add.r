ASCII_30_Add <- function(x)
{
  y <- replace(as.numeric(x), x == 228, 123)
  y <- replace(as.numeric(y), y == 246, 124)
  y <- replace(as.numeric(y), y == 252, 125)
  y <- replace(as.numeric(y), y == 223, 126)
  return(y)
}

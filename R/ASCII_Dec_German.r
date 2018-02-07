ASCII_Dec_German <- function(x)
{
  y <- replace(as.numeric(x), x == 196, 91)
  y <- replace(as.numeric(y), y == 214, 92)
  y <- replace(as.numeric(y), y == 220, 93)
  y <- replace(as.numeric(y), y == 223, 94)
  return(y)
}

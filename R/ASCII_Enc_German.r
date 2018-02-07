ASCII_Enc_German <- function(x)
{
  y <- replace(as.numeric(x), x == 91, 196)
  y <- replace(as.numeric(y), y == 92, 214)
  y <- replace(as.numeric(y), y == 93, 220)
  y <- replace(as.numeric(y), y == 94, 223)
  return(y)
}

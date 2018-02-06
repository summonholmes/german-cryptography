PreProcess_German <- function(x)
{
  y <- gsub('\\s+', '', x)
  y <- tolower(y)
  y <- gsub("[[:punct:]]", "", as.character(y))
  return(y)
}
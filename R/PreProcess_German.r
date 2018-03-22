PreProcess_German <- function(rawtext)
{
  plaintext <- gsub("[[:punct:]]", "", as.character(tolower(gsub('\\s+', '', rawtext))))
  
  return(plaintext)
}
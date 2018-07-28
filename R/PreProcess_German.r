PreProcess_German <- function(rawtext)
{
  return(gsub("[[:punct:]]", "", as.character(tolower(gsub('\\s+', '', rawtext)))))
}
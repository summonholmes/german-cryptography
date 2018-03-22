EncryptDecryptHill_German <- function(text_ascii_30, key, alpha_len)
{
  key <- matrix(unlist(key), ncol = 8, nrow = 8)
  matrix_len <- ceiling((length(text_ascii_30)) / nrow(key))
  inverted_key <- array((c(text_ascii_30, (matrix(0, nrow = 1, 
      ncol = matrix_len * nrow(key) - (length(text_ascii_30)))))), 
    c(nrow(key), (length((c(text_ascii_30, (matrix(0, nrow = 1, 
      ncol = matrix_len * nrow(key) - (length(text_ascii_30))))))) / nrow(key))))
  encdec_text <- (t(inverted_key) %*% key) %% alpha_len
  matrix_len <- matrix_len * nrow(key)
  encdec_text <- c(array(t(encdec_text), c(1, matrix_len)))
  
  return(encdec_text)
}
source('ModMatInv.r')

Generate <- function(matrix_len, alpha_len)
{
  key <-
    round((alpha_len - 1) * matrix(runif(matrix_len * matrix_len), ncol = matrix_len))
  inverted_key <- ModMatInv(key, alpha_len, matrix_len)
  while (identical(inverted_key, 0 * key) == TRUE)
  {
    key <-
      round((alpha_len - 1) * matrix(runif(matrix_len * matrix_len), ncol = matrix_len))
    inverted_key <- ModMatInv(key, alpha_len, matrix_len)
  }
  return(list(key, inverted_key))
}
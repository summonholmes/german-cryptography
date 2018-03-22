source('ModMatInv.r')

Generate <- function(matrix_len, alpha_len)
{
  key <- round((alpha_len - 1) * matrix(runif(matrix_len * matrix_len), ncol = matrix_len))
  inverted_key <- ModMatInv(key, alpha_len)
  while (all.equal(inverted_key, matrix(0, nrow = matrix_len, ncol = matrix_len)) == TRUE)
    {
    key <- round((alpha_len - 1) * matrix(runif(matrix_len * matrix_len), ncol = matrix_len))
    inverted_key <- ModMatInv(key, alpha_len)
  }

  return(list(key, inverted_key))
}
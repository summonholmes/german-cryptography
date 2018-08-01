source('ExtendedEuclidean.r')
source('ModMatInit.r')

ModMatInv <- function(key, alpha_len, matrix_len)
{
  key_ident <- cbind(key, diag(matrix_len))
  key_det <- round(det(key) %% alpha_len)
  key_det_ext <- ExtendedEuclidean(alpha_len, key_det)
  inverted_key <-
    ModMatInit(key, key_ident, key_det_ext, alpha_len, matrix_len)
  return(inverted_key)
}
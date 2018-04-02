source('ExtendedEuclidean.r')
source('ModMatIter.r')

ModMatInv <- function(key, alpha_len, matrix_len)
{
  key_identity_matrix <- cbind(key, diag(nrow(key)))
  key_determinant <- round(det(key) %% alpha_len)
  ext_eucl_determinant <- ExtendedEuclidean(alpha_len, key_determinant)
  
  if (ext_eucl_determinant[1] != 1)
  {
    return (matrix(0, nrow = nrow(key), ncol = nrow(key)))
  }
  else
  {
    key_identity_matrix <- ModMatIter(key_identity_matrix, alpha_len, key)
    if (all.equal(key_identity_matrix, matrix(0, nrow = matrix_len, ncol = matrix_len)) == TRUE)
    {
      return (matrix(0, nrow = nrow(key), ncol = nrow(key)))
    }
    inverted_key <- key_identity_matrix[, (nrow(key) + 1):(nrow(key) * 2)]
    return (inverted_key)
  }
}
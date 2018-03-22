source('ExtendedEuclidean.r')

ModMatInv <- function(key, alpha_len)
{
  key_identity_matrix <- cbind(key, diag(nrow(key)))
  key_determinant <- round(det(key) %% alpha_len)
  ext_eucl_determinant <- ExtendedEuclidean(alpha_len, key_determinant)
  
  if (ext_eucl_determinant[1] != 1)
  {
    inverted_key <- matrix(0, nrow = nrow(key), ncol = nrow(key))
    return(inverted_key)
  }
  
  for (i in 1 : nrow(key))
  {
    ext_eucl_iter <- ExtendedEuclidean(alpha_len, key_identity_matrix[i, i])
    ii <- i
    while (ext_eucl_iter[1] != 1 && ii < nrow(key))
    {
      ii <- ii + 1
      ext_eucl_iter <- ExtendedEuclidean(alpha_len, ((key_identity_matrix[ii, i] + key_identity_matrix[i, i]) %% alpha_len))
    }
    if (ext_eucl_iter[1] != 1)
    {
      inverted_key <- matrix(0, nrow = nrow(key), ncol = nrow(key))
      return(inverted_key)
    }
    if (ii != i)
    {
      key_identity_matrix[i,] <- (key_identity_matrix[i,] + key_identity_matrix[ii,]) %% alpha_len
    }
    key_identity_matrix[i,] <- (ext_eucl_iter[3] * key_identity_matrix[i,]) %% alpha_len
    for (j in 1 : nrow(key))
    {
      if (j != i)
      {
        key_identity_matrix[j,] <- (key_identity_matrix[j,] - (key_identity_matrix[j, i]) * key_identity_matrix[i,]) %% alpha_len
      }
    }
  }
  inverted_key <- key_identity_matrix[, (nrow(key) + 1):(nrow(key) * 2)]
  
  return(inverted_key)
}
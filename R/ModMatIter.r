source('ExtendedEuclidean.r')
source('ModMatExt.r')


ModMatIter <- function(key_identity_matrix, alpha_len, key)
{
  for (i in 1 : nrow(key))
  {
    ext_eucl <- ExtendedEuclidean(alpha_len, key_identity_matrix[i, i])
    ext_eucl_i <- i
    
    while (ext_eucl[1] != 1 && ext_eucl_i < nrow(key))
    {
      ext_eucl_i <- ext_eucl_i + 1
      ext_eucl <- ExtendedEuclidean(alpha_len, ((key_identity_matrix[ext_eucl_i, i] + key_identity_matrix[i, i]) %% alpha_len))
    }
    
    key_identity_matrix <- ModMatExt(key_identity_matrix, alpha_len, key, i, ext_eucl_i, ext_eucl)
    
    for (j in 1 : nrow(key))
    {
      if (j != i)
      {
        key_identity_matrix[j,] <- (key_identity_matrix[j,] - (key_identity_matrix[j, i]) * key_identity_matrix[i,]) %% alpha_len
      }
    }
  }
  
  return(key_identity_matrix)
}
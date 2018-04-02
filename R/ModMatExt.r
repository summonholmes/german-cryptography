ModMatExt <- function (key_identity_matrix, alpha_len, key, i, ext_eucl_i, ext_eucl)
{
  if (ext_eucl[1] != 1)
  {
    inverted_key <- matrix(0, nrow = nrow(key), ncol = nrow(key))
    return (inverted_key)
  }
  else if (ext_eucl_i != i)
  {
    key_identity_matrix[i,] <- (key_identity_matrix[i,] + key_identity_matrix[ext_eucl_i,]) %% alpha_len
  }
  key_identity_matrix[i,] <- (ext_eucl[3] * key_identity_matrix[i,]) %% alpha_len
  
  return (key_identity_matrix)
}

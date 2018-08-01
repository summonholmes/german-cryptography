source('ModMatIter.r')

ModMatInit <-
  function(key,
           key_ident,
           key_det_ext,
           alpha_len,
           matrix_len)
  {
    if (key_det_ext[["gcd"]] != 1)
    {
      return (key * 0)
    }
    else
    {
      key_ident <-
        ModMatIter(key, key_ident, alpha_len, matrix_len)
      if (identical(key_ident, key * 0) == TRUE)
      {
        return (key * 0)
      }
      else
      {
        inverted_key <- key_ident[, (matrix_len + 1):(matrix_len * 2)]
        return (inverted_key)
      }
    }
  }
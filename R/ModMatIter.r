source('ExtendedEuclidean.r')
source("ModMatIden.R")
source('ModMatExt.r')
source('ModMatShape.R')


ModMatIter <-
  function(key,
           key_ident,
           alpha_len,
           matrix_len)
  {
    for (i in 1:matrix_len)
    {
      key_ident_ext <-
        ExtendedEuclidean(alpha_len, key_ident[i, i])
      key_ident_ext_i <-
        ModMatIden(key_ident, key_ident_ext, i, alpha_len, matrix_len)
      key_ident <-
        ModMatExt(key_ident, key, key_ident_ext_i, i, alpha_len,
                  matrix_len)
      key_ident <- ModMatShape(key_ident, i, alpha_len, matrix_len)
    }
    return(key_ident)
  }
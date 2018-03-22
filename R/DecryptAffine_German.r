source('ExtendedEuclidean.r')

DecryptAffine_German <- function(ciphertext_ascii_dec, a, b)
{
  ext_eucl <- ExtendedEuclidean(30, a)
  ciphertext_ascii_30 <- ((ext_eucl[3] * (ciphertext_ascii_dec - 65) - b) %% 30) + 97
  
  return(ciphertext_ascii_30)
}
source('ExtendedEuclidean.r')

DecryptAffine_German <- function(ciphertext_ascii_dec, a, b)
{
  ext_eucl <- ExtendedEuclidean(30, a)
  return(((
    ext_eucl[['t']] * (ciphertext_ascii_dec - 65) - b
  ) %% 30) + 97)
}
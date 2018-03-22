DecryptSubstitution_German <- function(ciphertext_ascii_dec, key_list)
{
  k_temp1 <- key_list
  k_temp2 <- key_list
  dectext_ascii_30 <- ciphertext_ascii_dec
  for(i in 1 : length(key_list))
  {
    k_temp1[i] <- key_list[i] - 96
    k_temp2[i] <- i + 96
  }
  
  for(i in 1 : length(ciphertext_ascii_dec))
  {
    for(j in 1 : length(key_list))
    {
      if((ciphertext_ascii_dec[i] - 64) == k_temp1[j])
      {
        dectext_ascii_30[i] <- k_temp2[j]
      }
    }
  }

  return(dectext_ascii_30)
}
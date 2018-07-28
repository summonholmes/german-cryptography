DecryptSubstitution_German <-
  function(ciphertext_ascii_dec, key_list)
  {
    k1 <- key_list - 96
    k2 <- seq(1, length(key_list)) + 96
    dectext_ascii_30 <- ciphertext_ascii_dec - 64
    
    for (i in 1:length(key_list))
      dectext_ascii_30[dectext_ascii_30 == k1[i]] = k2[i]
    
    return(dectext_ascii_30)
  }
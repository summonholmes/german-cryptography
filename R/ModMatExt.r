ModMatExt <-
  function (key_ident,
            key,
            key_ident_ext_i,
            i,
            alpha_len,
            matrix_len)
  {
    if (key_ident_ext_i[[1]][["gcd"]] != 1)
    {
      inverted_key <- key * 0
      return (inverted_key)
    }
    else if (key_ident_ext_i[[2]] != i)
    {
      key_ident[i,] <-
        (key_ident[i,] + key_ident[key_ident_ext_i[[2]],]) %% alpha_len
    }
    key_ident[i,] <-
      (key_ident_ext_i[[1]][["t"]] * key_ident[i,]) %% alpha_len
    return (key_ident)
  }

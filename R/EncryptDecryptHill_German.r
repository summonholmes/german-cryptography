EncryptDecryptHill_German <-
  function(text_ascii_30, key, alpha_len, matrix_len)
  {
    key <- matrix(unlist(key), ncol = 8, nrow = 8)
    total_len <- ceiling(length(text_ascii_30) / matrix_len)
    inverted_key <- c(text_ascii_30,
                      matrix(
                        0,
                        nrow = 1,
                        ncol = total_len * matrix_len - length(text_ascii_30)
                      ))
    inverted_key <- array(inverted_key,
                          c(matrix_len, length(inverted_key) / matrix_len))
    encdec_text <- (t(inverted_key) %*% key) %% alpha_len
    total_len <- total_len * matrix_len
    encdec_text <- c(array(t(encdec_text), c(1, total_len)))
    return(encdec_text)
  }
ExtendedEuclidean <- function(alpha_len, a)
{
  remainder <- c(alpha_len, a)
  alpha_len_s <- c(1, 0)
  a_t <- c(0, 1)
  quotient <- c(0, 0)
  
  while (remainder[length(remainder)] > 0)
  {
    quotient <-
      c(quotient, floor(remainder[length(remainder) - 1] / remainder[length(remainder)]))
    remainder <-
      c(remainder, remainder[length(remainder) - 1] %% remainder[length(remainder)])
    alpha_len_s <-
      c(alpha_len_s, alpha_len_s[length(alpha_len_s) - 1] - quotient[length(quotient)] * alpha_len_s[length(alpha_len_s)])
    a_t <-
      c(a_t, a_t[length(a_t) - 1] - quotient[length(quotient)] * a_t[length(a_t)])
    
  }
  
  
  return(list(gcd = remainder[length(remainder) - 1], s = alpha_len_s[length(alpha_len_s) - 1], t = a_t[length(a_t) - 1]))
}

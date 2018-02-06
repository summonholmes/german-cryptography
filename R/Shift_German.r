source("/home/summonholmes/german-cryptography/R/PreProcess_German.r")

f <- read.delim("~/german-cryptography/nachtlied-utf-8.txt", comment.char="#")
x <- paste(unlist(f), collapse = " ")
y <- PreProcess_German(x)
sprintf("%s", y)




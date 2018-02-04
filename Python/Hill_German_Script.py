from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del
from Hill_German import Hill_German
from Generate import Generate
from numpy import matrix

# Hill cipher for the German Alphabet

f = open("nachtlied.txt", 'r', 'iso-8859-1')
x = f.read()
f.close()

plaintext = PreProcess_German(x)
plaintext_ascii = [ord(c) for c in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

[K, K_1, i] = Generate(8, 30)

ciphertext_ascii_30 = Hill_German([(i - 97) for i in plaintext_ascii_30], K, 30)
ciphertext_ascii = ASCII_Enc_German([(i + 65) for i in ciphertext_ascii_30])
# ciphertext_ascii_30_1 = ASCII_Dec_German(ciphertext_ascii)

dectext_ascii_30 = Hill_German(ciphertext_ascii_30, K_1, 30)
dectext_ascii = ASCII_30_Del([(i + 97) for i in dectext_ascii_30])

ciphertext = ''.join(chr(i) for i in ciphertext_ascii)
dectext = ''.join(chr(i) for i in dectext_ascii)

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])
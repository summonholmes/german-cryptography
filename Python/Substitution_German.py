# Substitution cipher for the German alphabet
from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del
from numpy import random
from EncryptSubstitution_German import EncryptSubstitution_German
from DecryptSubstitution_German import DecryptSubstitution_German

f = open("nachtlied.txt", 'r', 'iso-8859-1')
x = f.read()
f.close()

k = random.permutation(30)
k1 = []

for i in range(len(k)):
        k1.append(k[i] + 97)

plaintext = PreProcess_German(x)
plaintext_ascii = [ord(c) for c in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 = EncryptSubstitution_German(plaintext_ascii_30, k1)
ciphertext_ascii = ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_30 = ASCII_Dec_German(ciphertext_ascii)

dectext_ascii_30 = DecryptSubstitution_German(ciphertext_ascii_30, k1)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)

ciphertext = ''.join(chr(i) for i in ciphertext_ascii)
dectext = ''.join(chr(i) for i in dectext_ascii)

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])

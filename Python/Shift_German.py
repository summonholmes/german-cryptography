#!/usr/bin/env python3
# Shift cipher for the German alphabet
from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del
from EncryptShift_German import EncryptShift_German
from DecryptShift_German import DecryptShift_German

f = open("nachtlied.txt", 'r', 'iso-8859-1')
x = f.read()
f.close()

k = 23  # Magnitude of shift

plaintext = PreProcess_German(x)
plaintext_ascii = [ord(c) for c in plaintext]
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 = EncryptShift_German(plaintext_ascii_30, k)
ciphertext_ascii = ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_dec = ASCII_Dec_German(ciphertext_ascii)

dectext_ascii_30 = DecryptShift_German(ciphertext_ascii_dec, k)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)

ciphertext = ''.join(chr(i) for i in ciphertext_ascii)
dectext = ''.join(chr(i) for i in dectext_ascii)

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])

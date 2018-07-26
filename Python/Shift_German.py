from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del
from EncryptShift_German import EncryptShift_German
from DecryptShift_German import DecryptShift_German

file = open("nachtlied.txt", 'r', 'iso-8859-1')
rawtext = file.read()
file.close()

plaintext = PreProcess_German(rawtext)
plaintext_ascii = list(map(ord, plaintext))
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

ciphertext_ascii_30 = EncryptShift_German(plaintext_ascii_30, 23)
ciphertext_ascii = ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_dec_30 = ASCII_Dec_German(ciphertext_ascii)

dectext_ascii_30 = DecryptShift_German(ciphertext_ascii_dec_30, 23)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)

ciphertext = ''.join(map(chr, ciphertext_ascii))
dectext = ''.join(map(chr, dectext_ascii))

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])

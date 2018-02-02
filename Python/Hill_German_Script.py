# DO NOT USE!  IN PROGRESS.
from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del
from Hill_German import Hill_German
from Generate import Generate

# Hill cipher for the German Alphabet

f = open("nachtlied.txt", 'r', 'iso-8859-1')
x = f.read()
f.close()

plaintext = PreProcess_German(x)
plaintext_ascii_pre = [ord(c) for c in plaintext]
plaintext_ascii = [(i - 97) for i in plaintext_ascii_pre]

[K, K_1, i] = Generate(8, 30)
ciphertext_ascii_30_pre = Hill_German(plaintext_ascii, K, 30)
ciphertext_ascii_30 = [(i + 65) for i in ciphertext_ascii_30_pre]
ciphertext_ascii = ASCII_Enc_German(ciphertext_ascii_30)
ciphertext_ascii_30 = ASCII_Dec_German(ciphertext_ascii_30)

dectext_ascii_30_pre = Hill_German(ciphertext_ascii, K_1, 30)
dectext_ascii_30 = [(i + 97) for i in dectext_ascii_30_pre]
dectext_ascii = ASCII_30_Del(dectext_ascii_30)

ciphertext = ''.join(chr(i) for i in ciphertext_ascii)
dectext = ''.join(chr(i) for i in dectext_ascii)

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])
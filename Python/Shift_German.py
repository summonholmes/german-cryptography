# Shift cipher for the German alphabet
# Nightsong by Friedrich Nietzsche
from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del

f = open("nachtlied.txt", 'r', 'iso-8859-1')
x = f.read()
f.close()

plaintext = PreProcess_German(x)
k = 23 # Magnitude of shift

plaintext_ascii = [ord(c) for c in plaintext]

plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)
ciphertext_ascii_30 = []
dectext_ascii_30 = []

for i in range(len(plaintext_ascii_30)):
    ciphertext_ascii_30.append(((plaintext_ascii_30[i] - 97 + k) % 30) + 65)
ciphertext_ascii = ASCII_Enc_German(ciphertext_ascii_30)

ciphertext_ascii_dec = ASCII_Dec_German(ciphertext_ascii)

for i in range(len(ciphertext_ascii_dec)):
    dectext_ascii_30.append(((ciphertext_ascii_dec[i] - 65 - k) % 30) + 97)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)

ciphertext = ''.join(chr(i) for i in ciphertext_ascii)
dectext = ''.join(chr(i) for i in dectext_ascii)

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])
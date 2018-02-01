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


dectext_ascii = []
plaintext = PreProcess_German(x)
plaintext_ascii_pre = [ord(c) for c in plaintext]

plaintext_ascii = []
for i in range(len(plaintext_ascii_pre)):
    plaintext_ascii.append(plaintext_ascii_pre[i] - 97)

[K, K_1, i] = Generate(8, 30)
ciphertext_ascii_30_pre = Hill_German(plaintext_ascii, K, 30)

ciphertext_ascii_30 = []
for i in range(len(ciphertext_ascii_30_pre)):
    ciphertext_ascii_30.append(ciphertext_ascii_30_pre + 65)
ciphertext_ascii = ASCII_Enc_German(ciphertext_ascii_30)

ciphertext_ascii_30 = ASCII_Dec_German(ciphertext_ascii_30)
dectext_ascii_30_pre = Hill_German(ciphertext_ascii, K_1, 30)

dectext_ascii_30 = []
for i in range(len(dectext_ascii_30_pre)):
    dectext_ascii_30.append(dectext_ascii_30_pre[i] + 97)
dectext_ascii = ASCII_30_Del(dectext_ascii_30)

ciphertext = ''.join(chr(i) for i in ciphertext_ascii)
dectext = ''.join(chr(i) for i in dectext_ascii)

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])
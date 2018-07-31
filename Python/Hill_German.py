from codecs import open
from PreProcess_German import PreProcess_German
from ASCII_Enc_German import ASCII_Enc_German
from ASCII_Dec_German import ASCII_Dec_German
from ASCII_30_Add import ASCII_30_Add
from ASCII_30_Del import ASCII_30_Del
from EncryptDecryptHill_German import EncryptDecryptHill_German
from Generate import Generate

# Hill cipher for the German Alphabet

file = open("nachtlied.txt", 'r', 'iso-8859-1')
rawtext = file.read()
file.close()

plaintext = PreProcess_German(rawtext)
plaintext_ascii = list(map(ord, plaintext))
plaintext_ascii_30 = ASCII_30_Add(plaintext_ascii)

[key, inverted_key] = Generate(8, 30)

ciphertext_ascii_30 = EncryptDecryptHill_German(
    [(i - 97) for i in plaintext_ascii_30], key, 30)
ciphertext_ascii = ASCII_Enc_German([(i + 65) for i in ciphertext_ascii_30])

dectext_ascii_30 = EncryptDecryptHill_German(ciphertext_ascii_30, inverted_key, 30)
dectext_ascii = ASCII_30_Del([(i + 97) for i in dectext_ascii_30])

ciphertext = ''.join(map(chr, ciphertext_ascii))
dectext = ''.join(map(chr, dectext_ascii))

print(plaintext[300:400])
print(ciphertext[300:400])
print(dectext[300:400])
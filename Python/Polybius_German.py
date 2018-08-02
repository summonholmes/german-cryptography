from codecs import open
from PreProcess_German import PreProcess_German
from pandas import DataFrame

# Get file
file = open("nachtlied.txt", 'r', 'iso-8859-1')
rawtext = file.read()
file.close()

# Process plaintext
plaintext = PreProcess_German(rawtext)

# Initialize Polybius square
polybius = DataFrame(columns=(1, 2, 3, 4, 5, 6), index=(1, 2, 3, 4, 5))
alphabet = "abcdefghijklmnopqrstuvwxyzäöüß"
for column, letters in enumerate(range(0, 30, 6)):
    polybius.loc[column + 1, :] = list(alphabet[letters:letters + 6])

# Encrypt
ciphertext = plaintext
for letter in alphabet:
    letter_loc = (polybius == letter).loc[:, (
        polybius == letter).any()].idxmax()
    crypt = str(letter_loc.values[0]) + str(letter_loc.index[0])
    ciphertext = ciphertext.replace(letter, crypt)

# Decrypt
dectext = list(map(int, ciphertext))
for i in range(len(dectext) // 2):
    dectext[i:i + 2] = polybius.loc[dectext[i:i + 2][0], dectext[i:i + 2][1]]
dectext = ''.join(dectext)
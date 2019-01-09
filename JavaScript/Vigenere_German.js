// Import required functions
import { PreProcess_German } from "./PreProcess_German.mjs";
import { ASCII_30_Add } from "./ASCII_30_Add.mjs";
import { EncryptVigenere_German } from "./EncryptVigenere_German.mjs";
import { ASCII_Enc_German } from "./ASCII_Enc_German.mjs";
import { ASCII_Dec_German } from "./ASCII_Dec_German.mjs";
import { DecryptVigenere_German } from "./DecryptVigenere_German.mjs";
import { ASCII_30_Del } from "./ASCII_30_Del.mjs";

// Process Plaintext
var rawtext = fs.readFileSync("nachtlied-utf-8.txt", "utf-8");
var plaintext = PreProcess_German(rawtext);
var plaintext_ascii = plaintext.split('').map(function (char) { return char.charCodeAt(0); });
var plaintext_ascii_30 = plaintext_ascii.map(ASCII_30_Add);

// Encrypt Plaintext
var ciphertext_ascii_30 = EncryptVigenere_German(plaintext_ascii_30);
var ciphertext_ascii = ciphertext_ascii_30.map(ASCII_Enc_German);
var ciphertext = String.fromCharCode.apply(null, ciphertext_ascii);

// Decrypt Ciphertext
ciphertext_ascii_30 = ciphertext_ascii.map(ASCII_Dec_German);
var dectext_ascii_30 = DecryptVigenere_German(ciphertext_ascii_30);
var dectext_ascii = dectext_ascii_30.map(ASCII_30_Del);
var dectext = String.fromCharCode.apply(null, dectext_ascii);

// Decrypt Ciphertext
console.log(plaintext.substring(300, 400));
console.log(ciphertext.substring(300, 400));
console.log(dectext.substring(300, 400));

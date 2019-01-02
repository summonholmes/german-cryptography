// Import required functions
import { PreProcess_German } from "./PreProcess_German.js"
import { ASCII_30_Add } from "./ASCII_30_Add.js"
import { EncryptShift_German } from "./EncryptShift_German.js"
import { ASCII_Enc_German } from "./ASCII_Enc_German.js"
import { ASCII_Dec_German } from "./ASCII_Dec_German.js"
import { DecryptShift_German } from "./DecryptShift_German.js"
import { ASCII_30_Del } from "./ASCII_30_Del.js"

// Process Plaintext
var rawtext = fs.readFileSync("nachtlied-utf-8.txt", "utf-8");
var plaintext = PreProcess_German(rawtext);
var plaintext_ascii = plaintext.split('').map(function (char) { return char.charCodeAt(0); });
var plaintext_ascii_30 = plaintext_ascii.map(ASCII_30_Add);

// Encrypt Plaintext
var ciphertext_ascii_30 = plaintext_ascii_30.map(EncryptShift_German);
var ciphertext_ascii = ciphertext_ascii_30.map(ASCII_Enc_German);
var ciphertext = String.fromCharCode.apply(null, ciphertext_ascii);

// Decrypt Ciphertext
ciphertext_ascii_30 = ciphertext_ascii.map(ASCII_Dec_German);
var dectext_ascii_30 = ciphertext_ascii_30.map(DecryptShift_German);
var dectext_ascii = dectext_ascii_30.map(ASCII_30_Del);
var dectext = String.fromCharCode.apply(null, dectext_ascii);

// Decrypt Ciphertext
console.log(dectext);

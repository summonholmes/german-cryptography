import { mod } from "./mod.js";

export function DecryptVigenere_German(ciphertext_ascii_30) {
    // Scramble using keyword
    var keyword = "bratwurst";
    var keyword_ascii = keyword.split('').map(function (char) { return char.charCodeAt(0) - 97; });
    for (var i = 0; i < ciphertext_ascii_30.length; i++) {
        ciphertext_ascii_30[i] = mod((ciphertext_ascii_30[i] - 65) - keyword_ascii[mod(i, keyword.length)], 30) + 97
    }
    return ciphertext_ascii_30
};

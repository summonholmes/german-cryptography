import { mod } from "./mod.js";

export function EncryptVigenere_German(plaintext_ascii_30) {
    // Scramble using keyword
    var keyword = "bratwurst";
    var keyword_ascii = keyword.split('').map(function (char) { return char.charCodeAt(0) - 97; });
    for (var i = 0; i < plaintext_ascii_30.length; i++) {
        plaintext_ascii_30[i] = mod((plaintext_ascii_30[i] - 97) + keyword_ascii[mod(i, keyword.length)], 30) + 65
    }
    return plaintext_ascii_30
};

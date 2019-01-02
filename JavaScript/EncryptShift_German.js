import { mod } from "./mod.js"

export function EncryptShift_German(num) {
    // Shift all characters and convert to upper case
    var shift = 23;
    return mod((num - 97 + shift), 30) + 65;
};

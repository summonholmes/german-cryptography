import { mod } from "./mod.js";

export function EncryptAffine_German(num) {
    // Shift using y = ax + b
    var a = 7;
    var b = 5;
    return mod(a * (num - 97) + b, 30) + 65;
};

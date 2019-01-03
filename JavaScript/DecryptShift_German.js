import { mod } from "./mod.js";

export function DecryptShift_German(num) {
    // Shift all characters and convert to lower case
    var shift = 23;
    return mod((num - 65 - shift), 30) + 97;
};

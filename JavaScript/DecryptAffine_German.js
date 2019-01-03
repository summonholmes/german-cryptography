import { mod } from "./mod.js";
import { ExtendedEuclidean } from "./ExtendedEuclidean.js";

export function DecryptAffine_German(num) {
    // Shift back using y = ax + b
    var a = 7;
    var b = 5;
    var t = ExtendedEuclidean(30, a).t
    return mod(t * (num - 65) - b * t, 30) + 97;
};

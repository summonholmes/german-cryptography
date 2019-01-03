import { mod } from "./mod.js";

export function ExtendedEuclidean(alpha_len, a) {
    // Return gcd, s, and t as an object literal
    var remainder = [alpha_len, a];
    var alpha_len_s = [1, 0];
    var a_t = [0, 1];
    var quotient = [];
    while (remainder[remainder.length - 1] > 0) {
        quotient.push(Math.floor(remainder[remainder.length - 2] / remainder[remainder.length - 1]))
        remainder.push(mod(remainder[remainder.length - 2], remainder[remainder.length - 1]))
        alpha_len_s.push(alpha_len_s[alpha_len_s.length - 2] - quotient[quotient.length - 1] * alpha_len_s[alpha_len_s.length - 1])
        a_t.push(a_t[a_t.length - 2] - quotient[quotient.length - 1] * a_t[a_t.length - 1])
    }
    return { gcd: remainder[remainder.length - 2], s: alpha_len_s[alpha_len_s.length - 2], t: a_t[a_t.length - 2] }
};

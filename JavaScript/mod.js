export function mod(n, m) {
    // Like many other languages, true modulus doesn't work in JS
    return ((n % m) + m) % m;
};

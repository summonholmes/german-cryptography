export function ASCII_30_Add(num) {
    // Replace umlaut characters
    if (num === 228)
        num = 123;
    else if (num === 228)
        num = 124;
    else if (num === 246)
        num = 125;
    else if (num === 252)
        num = 126;
    return num
};

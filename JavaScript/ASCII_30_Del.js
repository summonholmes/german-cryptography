export function ASCII_30_Del(num) {
    // Add umlaut characters
    if (num === 123)
        num = 228;
    else if (num === 124)
        num = 228;
    else if (num === 125)
        num = 246;
    else if (num === 126)
        num = 252;
    return num
};

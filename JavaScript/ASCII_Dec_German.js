export function ASCII_Dec_German(num) {
    // Add umlaut characters
    if (num === 196)
        num = 91;
    else if (num === 214)
        num = 92;
    else if (num === 220)
        num = 93;
    else if (num === 223)
        num = 94;
    return num
};

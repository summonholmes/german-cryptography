export function ASCII_Enc_German(num) {
    // Add umlaut characters
    if (num === 91)
        num = 196;
    else if (num === 92)
        num = 214;
    else if (num === 93)
        num = 220;
    else if (num === 94)
        num = 223;
    return num
};

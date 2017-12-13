function y = EncryptAffine_German(x, a, b)
    x1=double(x);
    y = mod(a*(x1 - 97) + b, 30) + 65;

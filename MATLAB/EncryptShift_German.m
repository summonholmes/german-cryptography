function y = EncryptShift_German(x, k)
    y = mod(x-97+k,30)+65;


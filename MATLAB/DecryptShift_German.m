function y = DecryptShift_German(x, k)
    y = mod(x-65-k,30)+97;


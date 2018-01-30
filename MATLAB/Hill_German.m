%This function performs Hill cipher on a string of integers in Zm. 
%It uses an nxn invertable key in Zm. Use K for encryption and
%K_1 for decryption. Block size is n
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function y = Hill_German(x, k, m)
    n = size(k, 1);
    nx = size(x, 2);
    l = ceil(nx / n);
    z = zeros(1, l * n - nx);
    z = cat(2, x, z);
    l = size(z, 2) / n;
    z = reshape(z, n, l);
    y = mod(z' * k, m);
    l = l * n;
    y = reshape(y', 1, l);

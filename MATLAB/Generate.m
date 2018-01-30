%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%This function searches for an nxn invertable matrix in Zm.
%Inputs: n (matrix size) and m (modulus) -- both must be positive integers.
%Outputs: K: nxn invertable matrix in Zm, K_1: inverse of K, and i: number
%of attempts until the first success
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [K, K_1, i] = Generate(n, m)
    K = round((m - 1) * rand(n));
    K_1 = ModMatInv(K, m);
    i = 1;
    while K_1 == zeros(n)
        i = i + 1;
        K = round((m - 1) * rand(n));
        K_1 = ModMatInv(K, m);
    end;
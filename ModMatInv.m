%This function computes the inverse of a matrix in Zm using row-operations
%Inputs: A is an nxn matrix in Zm, m: modulus.
%Output: B is the inverse of A in Zm.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function B = ModMatInv(A,m)
n = size(A, 1);
X = cat(2, A, eye(n));
d = mod((det(A)), m);
x1 = ExtendedEuclidean(m, d);
if x1(1)~= 1
    B = zeros(n);
    return;
end;
for i = 1 : n
    x = X(i, i);
    x1 = ExtendedEuclidean(m, x);
    ii = i;
    while x1(1) ~= 1 && ii < n
        ii = ii + 1;
        x = mod(X(ii, i) + X(i,i),m);
        x1 = ExtendedEuclidean(m, x);
    end;
    if x1(1) ~= 1
        B = zeros(n);
        return;
    end;
    if ii ~= i
        X(i,:) = mod(X(i,:) + X(ii,:), m);
    end;
    X(i,:) = mod(x1(3) * X(i,:), m);
    for j = 1 : n
        if j ~= i
            x = X(j, i);
            X(j,:) = mod(X(j,:)-x * X(i,:), m);
        end;
    end;
end;
B = X(:, n + 1 : 2 * n);
end
            

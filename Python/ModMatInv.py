from numpy import identity, linalg, zeros
from ExtendedEuclidean import ExtendedEuclidean
from numpy import append as np_append
# This function computes the inverse of a matrix in Zm using row-operations
# Inputs: A is an nxn matrix in Zm, m: modulus.
# Output: B is the inverse of A in Zm.
# %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
def ModMatInv(A, m):
    n = len(A)
    X = np_append(A, identity(n), axis=1)
    d = round(linalg.det(A) % m)
    x1 = ExtendedEuclidean(m, d)
    
    if x1[0] != 1:
        B = zeros((n, n))
        return B
        
    for i in range(n):
        x = X[i][i]
        x1 = ExtendedEuclidean(m, x)
        ii = i

        while x1[0] != 1 and ii < (n-1):
            ii = ii + 1
            x = ((X[ii][i] + X[i][i]) % m)
            x1 = ExtendedEuclidean(m, x)
        
        if x1[0] != 1:
            B = zeros((n, n))
            return B
        
        if ii != i:
            X[i, :] = ((X[i, :] + X[ii, :]) % m)
        X[i, :] = ((x1[2] * X[i, :]) % m)

        for j in range(n):
            if j != i:
                x = X[j][i]
                X[j, :] = ((X[j, :] - x * X[i, :]) % m)

    B = X[:, n : (2 * n)]

    return B
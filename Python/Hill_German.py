from math import ceil
from numpy import zeros, reshape, transpose, dot
from numpy import append as np_append

def Hill_German(x, k, m):
    n = len(k)
    nx = len(x)
    l = ceil(nx / n)
    z = zeros((1, l * n - nx))
    z = np_append(x, z)
    l = int(len(z) / n)
    z = reshape(z, (n, l))
    y = dot(transpose(z), k) % m
    l = l * n
    y = reshape(transpose(y), (1, l))
    y1 = [int(i) for i in transpose(y)]
    
    return y1
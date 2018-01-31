from math import ceil
from numpy import zeros, reshape

def Hill_German(x, k, m):
    n = len(k)
    nx = len(x)
    l = ceil(nx / n)
    z = zeros((1, l * n - nx))
    z = (2, x, z)
    l = len(z) / n
    z = reshape(z, n, l)
    y = (z * k) % m
    l = l * n
    y = reshape(y, 1, l)
    
    return y
from math import ceil
from numpy import zeros, reshape
import numpy

def Hill_German(x, k, m):
    n = len(k)
    nx = len(x)
    l = ceil(nx / n)
    z = zeros((1, l * n - nx))
    z = numpy.append(x, z)
    # z = numpy.append(x, z, axis=1)
    l = len(z) / n
    z = reshape(z, (n, l))
    y = (z * k) % m
    l = l * n
    y = reshape(y, (1, l))
    
    return y
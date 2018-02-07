#!/usr/bin/env python3
from math import ceil
from numpy import zeros, reshape, dot, array, append as np_append


def Hill_German(x, k, m):
    n = len(k)
    nx = len(x)
    l = ceil(nx / n)
    z = zeros((1, l * n - nx))
    z = np_append(x, z)
    l = int(len(z) / n)
    z = z.reshape(n, l, order='F').copy()
    y = dot(z.T, k) % m
    l = l * n
    y = y.T.reshape(1, l, order='F').copy()

    return [int(i) for i in array(y)[0].tolist()]

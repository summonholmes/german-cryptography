#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#This function searches for an nxn invertable matrix in Zm.
#Inputs: n (matrix size) and m (modulus) -- both must be positive integers.
#Outputs: K: nxn invertable matrix in Zm, K_1: inverse of K, and i: number
#of attempts until the first success
#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
import numpy
from numpy import random, zeros, array_equal
from ModMatInv import ModMatInv

def Generate(n, m):
    K = numpy.round((m - 1) * random.rand(n, n))
    K_1 = ModMatInv(K, m)
    i = 0

    while array_equal(K_1, zeros((n, n))) is True:
        i = i + 1
        K = numpy.round((m - 1) * random.rand(n, n))
        K_1 = ModMatInv(K, m) 
    
    return [K, K_1, i]

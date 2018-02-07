#!/usr/bin/env python3
def EncryptSubstitution_German(x, k):
    y = [(k[i - 97] - 32) for i in x]

    return y

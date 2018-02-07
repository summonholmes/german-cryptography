#!/usr/bin/env python3
def DecryptShift_German(x, k):
    y = [(((i - 65 - k) % 30) + 97) for i in x]

    return y

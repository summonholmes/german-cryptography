#!/usr/bin/env python3
def ASCII_30_Del(x):
    # For use on the substituted German alphabet.  Revert the changes to
    # retrieve the native German characters.
    y = [
        228 if i == 123 else 246
        if i == 124 else 252
        if i == 125 else 223
        if i == 126 else i for i in x]

    return y

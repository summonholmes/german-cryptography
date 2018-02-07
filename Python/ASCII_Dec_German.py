#!/usr/bin/env python3
def ASCII_Dec_German(x):
    # Very similar to preprocessing.
    y = [
        91 if i == 196 else 92
        if i == 214 else 93
        if i == 220 else 94
        if i == 223 else i for i in x]

    return y

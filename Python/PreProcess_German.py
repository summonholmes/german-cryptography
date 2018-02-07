#!/usr/bin/env python3
from re import sub


def PreProcess_German(x):
    y = ''.join(x.split())
    y = sub(r'[^\w\s]', '', y)
    y = y.lower()

    return y

#!/usr/bin/env python3
from re import sub


def PreProcess_German(x):
    y = sub(r'[^\w\s]', '', (''.join(x.split()))).lower()

    return y

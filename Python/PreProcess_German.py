from re import sub


def PreProcess_German(rawtext):
    plaintext = sub(r'[^\w\s]', '', (''.join(rawtext.split()))).lower()

    return plaintext

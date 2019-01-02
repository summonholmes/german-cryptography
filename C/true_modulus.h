#ifndef TRUE_MODULUS_H
#define TRUE_MODULUS_H

int true_modulus(int r, int q)
{ /* Modulus in C with negatives doesn't work */
    return (r % q + q) % q;
}

#endif /* TRUE_MODULUS_H */
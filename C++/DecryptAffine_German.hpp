#include "ExtendedEuclidean.hpp"
#include "mod.hpp"

void ExtendedEuclidean(int, int *, int *);
int mod(int, int);

void DecryptAffine_German(int *ciphertext_ascii_30, int *a, int *b, int *array_len, int *dectext_ascii_30)
{
    int gcd_s_t[3];
    ExtendedEuclidean(30, &*a, gcd_s_t);
    for (int i = 0; i < *array_len; i++)
    {
        dectext_ascii_30[i] = mod(gcd_s_t[2] * (ciphertext_ascii_30[i] - 65) - *b * gcd_s_t[2], 30) + 97;
    }
}

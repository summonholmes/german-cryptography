#ifndef MOD_HPP
#define MOD_HPP

int mod(int r, int q)
{ /* Modulus in C/C++ with negatives doesn't work */
    return (r % q + q) % q;
}

#endif /* MOD_HPP */

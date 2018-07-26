from math import floor


def ExtendedEuclidean(alpha_len, a):
    remainder = [alpha_len, a]
    alpha_len_s = [1, 0]
    a_t = [0, 1]
    quotient = []

    while remainder[-1] > 0:
        quotient.append(floor(remainder[-2] / remainder[-1]))
        remainder.append(remainder[-2] % remainder[-1])
        alpha_len_s.append(alpha_len_s[-2] - quotient[-1] * alpha_len_s[-1])
        a_t.append(a_t[-2] - quotient[-1] * a_t[-1])

    return {
        "gcd": remainder[-2],
        "s": alpha_len_s[-2],
        "t": a_t[-2],
    }

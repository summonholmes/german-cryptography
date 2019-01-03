void ExtendedEuclidean(int a, int *b, int *gcd_s_t)
{
    int r0 = a;
    int r1 = *b;
    int s0 = 1;
    int s1 = 0;
    int t0 = 0;
    int t1 = 1;
    int r, s, t;
    float q;

    gcd_s_t[0] = r0;
    gcd_s_t[1] = s0;
    gcd_s_t[2] = t0;

    while (r1 > 0)
    {
        r = r0 % r1;
        q = (r0 - r) / r1;
        s = s0 - q * s1;
        t = t0 - q * t1;
        gcd_s_t[0] = r1;
        gcd_s_t[1] = s1;
        gcd_s_t[2] = t1;
        s0 = s1;
        t0 = t1;
        s1 = s;
        t1 = t;
        r0 = r1;
        r1 = r;
    }
}

void ExtendedEuclidean(int *a, int *b, int *z)
{
    int r0 = *a;
    int r1 = *b;
    int x0 = 1;
    int x1 = 0;
    int y0 = 0;
    int y1 = 1;
    z[0] = r0, z[1] = x0; z[2] = y0;
    
    while(r1 > 0)
    {
        int r = r0 % r1;
        float q = (r0 - r) / r1;
        int x = x0 - q * x1;
        int y = y0 - q * y1;
        z[0] = r1; z[1] = x1; z[2] = y1;
        x0 = x1;
        y0 = y1;
        x1 = x;
        y1 = y;
        r0 = r1;
        r1 = r;
    }
}
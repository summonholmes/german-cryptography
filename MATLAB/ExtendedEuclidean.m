%========================================
%ExtendedEuclidean computes gcd and the two linear weights 
%of two positive integers.
%Input : two integers a and b
%output a vecor z of three values
%z(1) = a * z(2) + b * z(3)
%=========================================
function z = ExtendedEuclidean(a,b)
    r0=a;
    r1=b;
    x0=1;
    x1=0;
    y0=0;
    y1=1;
    z=[r0,x0,y0];
    while r1 > 0
        r = mod(r0,r1);
        q = (r0 - r)/ r1;
        x = x0 - q * x1;
        y = y0 - q * y1;
        z = [r1,x1,y1];
        x0 = x1;
        y0 = y1;
        x1 = x;
        y1 = y;
        r0 = r1;
        r1 = r;
    end;

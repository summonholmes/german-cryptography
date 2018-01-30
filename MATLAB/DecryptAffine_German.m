function y = DecryptAffine_German(x, a, b)
    x1=double(x);
    z=ExtendedEuclidean(30,a);
    y = mod(z(3)*(x1 - 65) - b * z(3), 30) + 97;

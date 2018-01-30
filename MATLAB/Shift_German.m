% Shift cipher for the German alphabet
% Nightsong by Friedrich Nietzsche
fd=fopen('nachtlied.txt','r');
x=fread(fd);
fclose(fd);
y=PreProcess_German(x');
k=23;

% A true ASCII shift is performed as follows:
z= y-97+k +65;
y1 = z-65-k+97;
cat(1, char(y(300:400)), char(z(300:400)), char(y1(300:400)))

% An alphabet shift is harder because we need to grab the extended ASCII
% characters and convert them so the modulus operation works properly.  We
% will perform substitution to constrain them to {1...30} instead 
% of {1...155}

y2 = ASCII_30_Add(y);
z1 = mod(y2-97+k,30)+65;
z2 = ASCII_Enc_German(z1);
z3 = ASCII_Dec_German(z2);
y3 = mod(z1-65-k,30)+97;
y4 = ASCII_30_Del(y3);

cat(1, char(y(300:400)),  char(z2(300:400)),  char(y4(300:400)))
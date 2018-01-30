% Substitution cipher for the German alphabet
fd=fopen('nachtlied.txt','r');
x=fread(fd);
fclose(fd);
y=PreProcess_German(x');
k=randperm(30);
k=char(k+96);

y1 = ASCII_30_Add(y);
z = EncryptSubstitution_German(y1, k);
z1 = ASCII_Enc_German(z);
z2 = ASCII_Dec_German(z1);
y2 = DecryptSubstitution_German(z2, k);
y3 = ASCII_30_Del(y2);
cat(1,char(y(300:400)),char(z1(300:400)),char(y3(300:400)))

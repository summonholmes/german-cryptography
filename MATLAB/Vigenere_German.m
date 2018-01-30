% Affine cipher for the German alphabet
fd=fopen('nachtlied.txt','r');
x=fread(fd);
fclose(fd);
y=PreProcess_German(x');
y1 = ASCII_30_Add(y);

z = EncryptVigenere_German(y1, 'bratwurst');
z1 = ASCII_Enc_German(z);
z2 = ASCII_Dec_German(z1);
y2 = DecryptVigenere_German(z2, 'bratwurst');
y3 = ASCII_30_Del(y2);
cat(1,char(y(300:400)),char(z1(300:400)), y3(300:400))
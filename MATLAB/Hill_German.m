% Hill cipher for the German Alphabet
f=fopen('nachtlied.txt','r');
a=fread(f);
fclose(f);
x=PreProcess_German(a');
x1 = ASCII_30_Add(x);

[K K_1 i]=Generate(8,30);
mod(K*K_1,30);
mod(K_1*K,30);
y=EncryptDecryptHill_German(x1-97,K,30);
y1 = ASCII_Enc_German(y(300:400) +65);
y2 = ASCII_Dec_German(y1);
z=EncryptDecryptHill_German(y,K_1,30);
z1 = ASCII_30_Del(z(300:400) +97);

cat(1,char(x(300:400)),char(y1),char(z1))
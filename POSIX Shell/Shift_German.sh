#!/bin/sh
X_TXT=`cat nachtlied-utf-8.txt | tr -d "\t\n\r[:space:]"`

PLAINTEXT=`./PreProcess_German.sh $X_TXT`
PLAINTEXT_30=`./ASCII_30_Add.sh $PLAINTEXT`
CIPHERTEXT_30=`./EncryptShift_German.sh $PLAINTEXT_30`
CIPHERTEXT=`./ASCII_Enc_German.sh $CIPHERTEXT_30`
CIPHERTEXT_30_DEC=`./ASCII_Dec_German.sh $CIPHERTEXT`
DECTEXT_30=`./DecryptShift_German.sh $CIPHERTEXT_30_DEC`
DECTEXT=`./ASCII_30_Del.sh $DECTEXT_30`

echo ${PLAINTEXT:300:100}
echo ${CIPHERTEXT:300:100}
echo ${DECTEXT:300:100}
#!/bin/sh
X_TXT=`cat nachtlied-utf-8.txt | tr -d "\t\n\r[:space:]"`

PLAINTEXT=`./PreProcess_German.sh $X_TXT`
PLAINTEXT_ASCII=`printf $PLAINTEXT | od -A n -t d1`
# PLAINTEXT_ASCII_30=`/home/summonholmes/New/ASCII_30_Add.sh $PLAINTEXT_ASCII`

echo $PLAINTEXT

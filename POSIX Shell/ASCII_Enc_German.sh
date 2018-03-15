ASCII_Enc_German()
{
    echo "$1" | tr '[\]^' 'ÄÖÜß'
}
ASCII_Enc_German $1
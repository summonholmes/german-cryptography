ASCII_Dec_German()
{
    echo "$1" | tr 'ÄÖÜß' '[\]^' 
}
ASCII_Dec_German $1
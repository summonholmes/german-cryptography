ASCII_30_Add()
{
    echo "$1" | tr 'äöüß' '{|}~'
}
ASCII_30_Add $1
ASCII_30_Del()
{
    echo "$1" | tr '{|}~' 'äöüß' 
}
ASCII_30_Del $1
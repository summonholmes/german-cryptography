PreProcess_German()
{
    echo "$1" | tr '[:upper:]' '[:lower:]' | tr -d '[:punct:]'
}
PreProcess_German $1
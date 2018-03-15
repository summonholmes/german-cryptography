DecryptShift_German()
{
    echo $1 | tr '[X-ZA-W][\]^' '[a-z]{|}~'
}
DecryptShift_German $1
EncryptShift_German()
{
    echo $1 | tr '[a-z]{|}~' '[X-ZA-W][\]^'
}
EncryptShift_German $1
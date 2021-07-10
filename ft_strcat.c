char    *ft_strcat(char *dest, const char *src)
{
    int size_dest;
    int i;

    i = 0;
    size_dest = 0;
    while (dest[i])
        size_dest++;
    while (src[i])
    {
        dest[size_dest + i] = src[i];
        i++;
    }
    dest[size_dest + i] = '\0';
    return (dest);
}
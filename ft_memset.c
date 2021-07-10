#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *ptr;

    ptr = s;
    i = 0;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}
#include <stdlib.h>

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(const char *s)
{
    char    *str;
    int     i;

    i = 0;
    str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    while(s[i])
    {
        str[i] = s[i];
        i++; 
    }
    str[i] = '\0';
    return (str);
}
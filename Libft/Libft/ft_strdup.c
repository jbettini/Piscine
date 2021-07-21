#include "libft.h"

char    *ft_strdup( const char *src)
{
    char    *str;
    size_t     i;

    i = 0;
    str = malloc(sizeof(char) * ft_strlen(src) + 1);
    if (!str)
        return (NULL);
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
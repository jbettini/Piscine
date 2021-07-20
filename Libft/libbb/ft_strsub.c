#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    str = malloc(sizeof(char) * len + 1);
    if(!str)
        return (NULL);
    while(start != len)
        str[i++] = s[start++];
    str[i] = 0;
    return (str);

}
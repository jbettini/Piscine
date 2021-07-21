#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
    size_t i;
    char *str;

    i = -1;
    str = malloc(sizeof(char) * ft_strlen(s) + 1);
    if(!str)
        return (NULL);
    while(s[++i])
        str[i] = (*f)(s[i]);
    return (str);
}
#include "libft.h"

char * ft_strnew(size_t size)
{
    char *str;

    str = malloc(sizeof(char) * size);
    if(!str)
        return (NULL);
    while(size != 0)
        str[size--] = '\0';
    return (str);
}
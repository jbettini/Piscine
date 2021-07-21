#include "libft.h"
#include <stdio.h>

char *ft_strcat(char *dest, const char *src)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while(dest[i])
        i++;
    while(src[j])
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}
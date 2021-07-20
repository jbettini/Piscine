#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;

    j = 0;
    i = ft_strlen(dest);
    while(src[j] && j < n)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

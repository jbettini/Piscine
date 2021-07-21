#include "libft.h"

void    *ft_memset( void *pt, int value, size_t len)
{
    size_t  i;

    i = 0;
    if (!pt)
        return (NULL);
    while(i < len)
    {
        ((unsigned char *)pt)[i] = (unsigned char)value;
        i++;
    }
    return (pt);
}
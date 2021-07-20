#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    if (c > n)
        ft_memcpy(dest,src,n);
    else 
        while(i < c)
        {
            ((unsigned char*)dest)[i] =  ((unsigned char*)src)[i];
            i++;
        }
        return (dest);
}
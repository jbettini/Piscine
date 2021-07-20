#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char tmp[n];

    ft_memcpy(tmp,src,n);
    ft_memcpy(dest,tmp,n);
    return (dest);
}
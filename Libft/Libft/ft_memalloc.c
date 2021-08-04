#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *pt;
    size_t i;

    pt = malloc(sizeof(size));
    while(i < size)
        ((unsigned char*)pt)[i++] = 0;
    return(pt);
}

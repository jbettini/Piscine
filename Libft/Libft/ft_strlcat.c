#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    if (n > ft_strlen(dest) + ft_strlen(src) + 1)
    {
        ft_strcat(dest,src);
        return (ft_strlen(dest));
    }
    else 
    {
        if (n > ft_strlen(dest) + 1)
            ft_strncat(dest, src, n - ft_strlen(dest) - 1);
		return (ft_strlen(src) + n);
    }
}
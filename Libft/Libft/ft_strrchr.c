#include "libft.h"

char *ft_strrchr(const char *str, int tofind)
{
    size_t i;

    i = ft_strlen(str);
    if (tofind == 0 || !str)
	    return ((char*)str + ft_strlen(str));
    while(i != -1)
    {
        if (str[i] == tofind)
            return ((char*)str + i);
        i--;
    }
    return (0);
}

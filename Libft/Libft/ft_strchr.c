#include "libft.h"

char *ft_strchr(const char *str, int tofind)
{
    size_t i;

    i = 0;
    if (!str || !tofind)
	    return ((char*)str);
    while(str[i])
    {
        if (str[i] == tofind)
            return ((char*)str + i);
        i++;
    }
    return (0);
}

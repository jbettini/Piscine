#include "libft.h"

char *ft_strrchr(const char *str, int tofind)
{
    size_t i;

    i = ft_strlen(str);
    while(i != 0)
    {
        if (str[i] == tofind)
            return ((char*)str + i);
        i--;
    }
    return (0);
}
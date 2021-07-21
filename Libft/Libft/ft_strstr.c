#include "libft.h"

char *ft_strstr(const char *str, const char *tofind)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!tofind)
		return ((char*)str);
    while(str[i])
    {
        if (str[i] == tofind[j])
            while (str[i + j] == tofind[j]) 
            {
                if (tofind[j + 1] == '\0')
                    return ((char*)str + i);
                j++;
            }
        j = 0;
        i++;
    }
    return (0);
}
#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && s1[i] && s2[i++])
        if (s1[i] != s2[i])
            return (0);
    return (1);
}
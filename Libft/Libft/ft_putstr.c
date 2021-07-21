#include "libft.h"

void ft_putstr(char const *s)
{
    size_t i;

    i = 0;
    while(s[i])
        write(1, &s[i++], 1);
}
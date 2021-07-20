#include "libft.h"

int ft_atoi(const char *str)
{
    int neg;
    int res;
    int i;

    i = 0;
    res = 0;
    neg = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg -= 2;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - 48;
        i++;
    }
    return (res * neg);
}
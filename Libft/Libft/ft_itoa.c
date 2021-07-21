#include "libft.h"

int ft_isneg(int n)
{
    if (n < 0)
        return (1);
    return (0);
}

int ft_intlen(int n)
{
    int len;

    len = 0;
    if (ft_isneg(n))
    {   
        n = -n;
        len++;
    }
    if (n == 0)
        return (1);   
    else
        while(n / 10 != 0)
        {
            len++;
            n /= 10;
        }
    return (len + 1);
}

char *ft_itoa(int n)
{
    char *str;
    size_t i;
    size_t res;

    res = n;
    i = ft_intlen(n);
    str = malloc(sizeof(char) * ft_intlen(n) + 1);
    if(!str)
        return (NULL);
    str[i] = 0;
    i -= 1;
    if (ft_isneg(n))
        str[0] = '-';
    while(res != 0)
    {
        str[i] = (res % 10) + 48;
        res /= 10;
        i--;
    }
    return (str);
}

/*int main(int ac, char **av)
{
    int i;

    i = ft_atoi(av[1]);
    ft_putstr(ft_itoa(i));
}*/
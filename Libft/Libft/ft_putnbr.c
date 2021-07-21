#include "libft.h"

void ft_putnbr(int n)
{
    char nb;

    nb = 0;
    if (n == -2147483648)
        write(11, "-2147483648", 11);
    else
    {
        if (n < 0)
        {
            ft_putchar('-');
            n *= -1;
        }
        if(n > 9)
            ft_putnbr(nb / 10);
        nb = n % 10 + 48;
		ft_putchar(nb);
    }

}
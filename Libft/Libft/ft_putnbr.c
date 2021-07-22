#include "libft.h"

void ft_putnbr(int n)
{
    if (n != -2147483648)
    {
        if (n < 0)
        {
            ft_putchar('-');
            n *= -1;
        }
        if(n > 9)
            ft_putnbr(n / 10);
        n = n % 10 + 48;
	ft_putchar(n);
    }
    else
        write(1, "-2147483648", 11);
}

#include "libft.h"

int is_blank(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    else
        return (0);
}

int end_blank(char const *s)
{
    size_t i;
    size_t j;

    i = 0; 
    j = ft_strlen(s) - 1;
    while (is_blank(s[j]) && j != 0)
    {
        j--;
        i++;
    }
    return (i);
}

char *ft_strtrim(char const *s)
{
    size_t i;
    size_t j;
    size_t k;
    char *str;

    i = 0;
    j = ft_strlen(s);
    k = end_blank(s);
    while(is_blank(s[i]))
        i++;
    str = malloc(sizeof(char) * (j - (k + i)) + 1);
    if(!str)
        return (NULL);
    j = 0;
    while (i < ft_strlen(s) - k)
    {
	    str[j] = s[i];
	    i++;
	    j++;
    }
    return (str);
}

/*#include <stdio.h>
int main(int ac, char **av)
{
	char *str = ft_strtrim(av[1]);
	if (ac == 1)
   	printf("str = %s\n", str);
}
*/

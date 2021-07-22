#include "libft.h"

int isep(char s, char c)
{
    if (s == c)
        return (1);
    else
        return (0);
}

size_t word(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t w;

    j = 0;
    i = 0;
    w = 0;
    while (s[i] && s[j])
    {
        i = j;
        while (isep(s[i], c) && s[i])
            i++;
        j = i;
        while (!isep(s[j], c) && s[j])
            j++;
        if (j > i)
            w++;
    }
    return (w);
}

char **wordalloc(char const *s, char c)
{
    char **str;
    size_t i;
    size_t j;
    size_t w;

    w = 0;
    j = 0;
    i = 0;
    if (!(str = malloc(sizeof(char*) * word(s,c) + 1)))
        return (NULL);
    while(s[i] && s[j])
    {
        i = j;
        while(isep(s[i], c) && s[i])
            i++;
        j = i;
        while(!isep(s[j], c) && s[j])
            j++;
        if (!(str[w] = malloc(sizeof(char) * (j - i) + 1)))
            return (NULL);
        w++;
    }
    return (str);
}

char **ft_split(char const *s, char c)
{
    char **str;
    size_t i;
    size_t j;
    size_t w;

    i = 0;
    j = 0;
    w = 0;
    str = wordalloc(s,c);
    while (j < word(s,c))
    {
        w = 0;
        while (isep(s[i],c) && s[i])
            i++;
        while(!isep(s[i], c) && s[i])
            str[j][w++] = s[i++];
        str[j][w] = 0;
        j++;
    }
    str[j] = 0;
    return (str);
}


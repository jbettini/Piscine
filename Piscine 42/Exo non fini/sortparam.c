#include<unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return s1[i] != s2[i] ;
        i++;
    }
    return 0;
}

void ft_putstr(char *str)
{
    int i;

    i = 0
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac , char **av)
{
    int i;
    int j;

    j = 1;
    i = 1;
    while (i < ac -1)  
    {
        j = i;
        while()
    }
    
}
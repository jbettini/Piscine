#include <stdio.h>
#include <unistd.h>

int puthexnbr(long nb, int i)
{
    char *str = "0123456789abcdef";
    if (nb > 16)
        puthexnbr(nb / 16, i + 1);
    write(1, &str[nb % 16], 1);
    if (nb < 16)
        return i;
    
}

void putaddr(void *addr)
{
    int i;
    long adr;

    i = 1;
    adr = (long)addr;
    /*while((float)adr / 16 > 0)
    {
        adr /= 16;
        i++;
    }*/

   /* while(i + 4 > 0)
    {
        i--;
        write(1, "0", 1);
    }*/
    puthexnbr((long)addr, 1);
    printf("\ni = %d", i);
   // write(1, ": ", 2);
}
/*void    *ft_print_memory(void *addr, unsigned int size)
{

}*/















int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
    
}

int main()
{
    char *str = "65+464959549549494grdsj9456f6j54f15g95155";
   putaddr(str);
   
   printf("\n%p", str);

}
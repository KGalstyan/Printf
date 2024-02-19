#include <stdio.h>
#include "printf.h"
#include <unistd.h>

int ft_puthex_len(unsigned long n, char x)
{
    int len;
    int count;

    len = 1;
    if (n > 15)
        len = n / 16;
    if (x = 'x')
        ft_putstr_len("123456789abcdef"[n % 16]);
    if (x = 'X')
        ft_putstr_len("123456789ABCDEF"[n % 16]);
    return (len);
}

/*
int main()
{
    int a;
    a = ft_puthex_len(11884111, 'X');
    printf ("%d", a);
    return(0);
}
*/
#include "printf.h"
#include "libft.h"

int ft_putnbr_len(int nb)
{
    char *num;
    int len;

    len = 0;
    num = ft_itoa(nb);
    len += ft_putstr_len(num);
    return(len);
}

/*
int main ()

printf("%d", ft_decnum(125, 1))
*/
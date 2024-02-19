#include "printf.h"

int ft_sort(char s, va_list args)

{
	int len;

	len = 0;
	if (s == 's')
		len += ft_putstr_len(va_arg(args, char *));
	else if (s == 'd' || s == 'i')
		len += ft_putnbr_len(va_arg(args, int));
	else if (s == 'u')
		len += ft_putunsigned_len(va_arg(args, unsigned long));
	else if (s == 'x')
		len += ft_puthex_len(va_arg(args, unsigned long), 'x');
	else if (s == 'X')
		len += ft_puthex_len(va_arg(args, unsigned long), 'X');
	else if (s == 'p')
		len += ft_putptr_len(va_arg(args, unsigned long));
	else if (s == 'c')
		len += ft_putchar_len(va_arg(args, char));
    else if (s == '%')
		len += ft_putchar_len('%');
    return(len);
}

int ft_printf(const char *s, ...)
{
va_list args;
int len;
int i;

len = 0;
i = 0;
va_start (args, s);
while (s[i])
{
    if (s[i] == '%')
    {
        i++;
        len += ft_sort(s[i], args);
        i++;
    }
	else
	{
    	len += ft_putchar_len(s[i], 1);
    	i++;
	}
}
va_end(args);
return(len);
}

/*
int main()
{
	int a = 145;
	printf("%d", ft_printf("sya%da", a));
	return(0)
}
*/
#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


int ft_printf(const char *s, ...);
int ft_putunsigned_len(unsigned int nb);
int	ft_putstr_len(char *s);
int ft_putptr_len(unsigned long long p);
int ft_putnbr_len(int nb);
int ft_puthex_len(unsigned long n, char x);
int ft_putchar_len(char c);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);

#endif
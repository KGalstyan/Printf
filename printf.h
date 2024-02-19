#ifndef PRINTF_H
# define PRINTF_H

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *s, ...);
int ft_putunsigned_len(unsigned int nb);
int	ft_putstr_fd(char *s);
int ft_pusptr_len(unsigned long p);
int ft_putnbr_len(int nb);
int ft_puthex_len(unsigned long n, char x);
int ft_putchar_fd(char c);

#endif
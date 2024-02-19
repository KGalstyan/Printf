NAME = ft_printf.a
CC = cc
CFLAGES = -Wall -Wextra -Werror
FUN =	ft_printf.c \
		ft_putunsigned_len.c \
		ft_putstr_fd.c \
		ft_pusptr_len.c \
		ft_putnbr_len.c \
		ft_puthex_len.c \
		ft_putchar_fd.c \
		ft_itoa.c \
		ft_strlen.c

FUNO = $(FUN:.c=.o)

all : $(NAME)

$(NAME): $(FUNO)
	ar -rcs $(NAME) $(FUNO)

clean: 
	-rm -rf $(FUNO)

fclean: 
	-rm -rf $(NAME) $(FUNO)

re: fclean all

.PHONY: all clean fclean re
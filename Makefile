NAME = ft_printf.a
CC = cc
CFLAGES = -Wall -Wextra -Werror
FUN = 

FUNO = (FUN:.c=.o)

all : $(NAME)

$(NAME) : $(FUNO)
	ar -rcs $(NAME) $(FUNO)

clean: 
	-rm -rf $(FUNO)

fclean: 
	-rm -rf $(NAME) $(FUNO)

re: fclean all

.PHONY: all clean fclean re
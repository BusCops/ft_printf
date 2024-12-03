NAME = libftprintf.a

SRC = ft_printf.c ft_print_hex.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_putvoidp.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = ar rcs

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	$(ARFLAGS) $(NAME) $(OBJ)

%o : %c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean all fclean re
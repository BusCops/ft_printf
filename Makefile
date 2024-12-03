NAME = libftprintf.a

SRC = ft_printf.c ft_print_hex.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_putvoidp.c libftprintf.h

OBJ = ${SRC : .c=.o}

CC = CC

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = ar rcs

RM = rm -f

all : ${NAME}
	${ARFLAGS} ${NAME} ${OBJ}

%o : %c
	${CC} ${CFLAGS} -c -o

clean : ${OBJ}
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME} ${OBJ}

.PHONY clean all fclean
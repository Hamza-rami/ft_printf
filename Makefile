NAME = libftprintf.a

SRC = ft_printf.c ft_putstr.c ft_putchar.c ft_putnbr.c\
		ft_unsigned_putnbr.c ft_put_adrresse.c ft_putnbr_base.c\

INC = ft_printf.h
OBJS = ${SRC:.c=.o}
ARC = ar -rc
CC = cc -Wall -Werror -Wextra
RM = rm -f

%.o: %.c ${INC}
	${CC} -c $< -o $@

${NAME}: ${OBJS}
	${ARC} ${NAME} ${OBJS} 

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re: fclean all
NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
AR := ar rc
RM := rm -rf

CFILES := ft_printf.c ft_putchar.c ft_put_hex.c ft_putnbr.c \
	 	ft_putstr.c ft_putuns_nbr.c

OBJS := ${CFILES:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@
	${AR} ${NAME} $@

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean
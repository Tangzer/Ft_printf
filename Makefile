LIBFT = ./libft/libft.a

NAME = libftprintf.a

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./includes
OBJS =   ${SRCS:.c=.o}

SRC = src/ft_printf.c

.c.o:	${SRCS}
	${CC} ${CFLAGS} -c -o $@ $<

${NAME}:	${OBJS}
		ar r $(NAME) ${OBJS} ${INCLUDES}

all:	${NAME}

bonus:	${OBJS_BONUS}
		ar r ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
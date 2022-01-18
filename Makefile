LIBFT = ./libft/libft.a

NAME = libftprintf.a

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS =   ${SRCS:.c=.o}

SRC = src/ft_printf.c\
      src/ft_type_list.c\
      src/ft_putchar.c\
      src/ft_putstr_and_count.c\
      src/ft_input_type.c\
      src/ft_print_var.c\
      src/ft_print_int.c

.c.o:	${SRCS}
	${CC} ${CFLAGS} -c -o $@ $<

${NAME}:	${OBJS}
		ar -rcs $(NAME) ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
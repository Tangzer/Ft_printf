LIBFT = ./libft/libft.a

NAME = libftprintf.a

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS =   ${SRC:.c=.o}

SRC = src/ft_printf.c\
      src/fonctions_supp.c\
      src/ft_print_var.c\
      src/ft_print_int.c\
      src/ft_print_char.c\
      src/ft_print_string.c\
      src/ft_print_hexa.c\
      src/ft_print_unsigned_int.c\
      src/ft_print_percent.c\
      src/ft_print_pointer.c

.c.o:	${SRC}
	${CC} ${CFLAGS} -c -o $@ $<

${NAME}:	${OBJS}
	make -C libft
	cp $(LIBFT) .
	mv libft.a $(NAME)
	ar r $(NAME) ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	make fclean -C libft
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
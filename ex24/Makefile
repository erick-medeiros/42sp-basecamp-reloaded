NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Werror -Wextra -I includes/

%.o: srcs/%.c
	gcc ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -fr ${OBJS}

fclean: clean
	rm -fr ${NAME}

re: fclean all

.PHONY: all clean fclean re
NAME = ft_display_file
SRCS = ${wildcard *.c}
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	gcc ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -fr ${OBJS}

fclean: clean
	rm -fr ${NAME}

.PHONY: all clean fclean
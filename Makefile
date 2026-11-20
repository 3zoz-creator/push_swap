NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.


SRCS =  main.c operations/push.c stack_add.c \
	stack_init.c stack_remove.c	operations/swap.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.


SRCS =  main.c operations/push.c stack_utils/stack_add.c \
	stack_utils/stack_init.c stack_utils/stack_remove.c operations/swap.c \
	parsing/ft_atoi.c operations/reverse_rotate.c operations/rotate.c \
	stack_utils/stack_free.c parsing/parse_argc.c parsing/check_duplicates.c \
	parsing/validate.c parsing/parse_argc_utils.c stack_utils/is_sorted.c \
	print_stack.c algorithms/simple.c algorithms/complex_utils.c algorithms/complex.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

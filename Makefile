NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

INCLUDES    = -I include

SRCS        = \
push_swap.c \
src/parsing/parse.c \
src/parsing/error_checker.c \
src/parsing/ft_atol.c \
src/utils/ft_split.c \
src/utils/ft_strlcpy.c \
src/utils/free_split.c \
src/stack/stack_init.c \
src/stack/stack_utils.c \
src/operations/push.c \
src/operations/rotate.c \
src/operations/reverse.c \
src/operations/swap.c    \
src/algorithm/indexing.c \
src/algorithm/algorithm_utils.c \
src/algorithm/small_sorts.c \
src/algorithm/big_sorts.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


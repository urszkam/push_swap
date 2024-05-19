NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = main.c utils/ft_atoi.c utils/ft_strlen.c utils/has_duplicates.c \
	utils/is_correct.c utils/is_sorted.c utils/lst_clear.c \
	alghoritm/initialize.c alghoritm/push.c alghoritm/reverse.c \
	alghoritm/rotate.c alghoritm/swap.c

OBJS = $(SRCS:.c=.o)

HEADER = ./includes

.c.o:
	@$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJS)

re: fclean all

.PHONY: clean fclean re all tests bonus_tests
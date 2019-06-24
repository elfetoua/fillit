NAME = libft.a

SRC= *.c

OUT=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OUT)
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OUT)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OUT)

fclean:	clean
	@/bin/rm -f $(NAME)

re: fclean all

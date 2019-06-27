NAME = fillit

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror  fillit.c validation.c verification.c list.c get_next_line.c  types.c libft/libft.a -o $(NAME)

clean:
	@/bin/rm -f $(NAME)

re: clean all

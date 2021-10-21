# -*-Makefile-*-

NAME = libft.a;

SRC = *.c libft.h

FLAGS = -g -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
# -*-Makefile-*-

NAME = rush-02;

SRC = main.c open.c

all: $(NAME)
$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *o

fclean: clean
	rm -f $(NAME)

rr: fclean all


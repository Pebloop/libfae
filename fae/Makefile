SRC	=	src/putchar.c			\
		src/putstr.c			\
		src/strlen.c			\
		src/revstr.c			\
		src/power.c				\
		src/swap.c				\
		src/strcmp.c			\
		src/str_is.c			\
		src/char_is.c			\
		src/square_root.c		\
		src/str_change_case.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libfae.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp include/* ../../include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

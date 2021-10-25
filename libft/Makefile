SRCS	= *.c
OBJS	= ${SRCS:.c=.o}
INS	= libft.h
NAME	= libft.a
LIB	= ar rc
RL	= ranlib
C		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${C} ${CFLAGS} -c -o ${OBJS} -I${INS}

${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS}
	${RL} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${TOBJS}
	${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}
	${RM} ${TNAME}

re: fclean all

test: re ${TOBJS}
	${CC} -g ${CFLAGS} ${TOBJS} -L. -lft -o ${TNAME}

bonus: re ${BOBJS}
	${LIB} ${NAME} ${OBJS} ${BOBJS}
	${RL} ${NAME}

norm :
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean
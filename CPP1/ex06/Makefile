NAME	=	launch
SRCS	=	main.cpp \
				Harl.cpp \

OBJS	=$(SRCS:.cpp=.o)
FLAGS	= -Wextra -Wall -Werror -std=c++98
CC		= c++
INCS	=.

.cpp.o :
		@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o} -I${INCS}

all		: fclean $(NAME)

${NAME}	: ${OBJS}
		@${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	@rm -rf ${OBJS}
	@rm -rf *.replace

fclean: clean
	@rm -rf $(NAME)

re: fclean all

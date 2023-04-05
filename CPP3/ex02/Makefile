NAME	=	demo
SRCS	=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \

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
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
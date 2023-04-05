NAME	= myphone
SRCS	=	main.cpp \
			Phonebook.cpp \
			Contact.cpp \

OBJS	= $(SRCS:.cpp=.o)
RM	=		rm -f
CC	= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INCS	=.

.cpp.o :
		@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o} -I${INCS}

$(NAME)	: $(OBJS)
	${CC} $(FLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

fclean	: clean
	$(RM) $(NAME)

clean	:
	$(RM) -f $(OBJS)

re	: fclean all

.PHONY	: all fclean re .c.o clean

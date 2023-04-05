NAME	= megaphone
SRCS	=	megaphone.cpp \

RM	=		rm -f
CC	= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98


$(NAME)	:
	${CC} $(FLAGS) $(SRCS) -o $(NAME)

all	: $(NAME)

fclean	: clean
	$(RM) $(NAME)

clean	:
	

re	: fclean all

.PHONY	: all fclean re .c.o clean norm

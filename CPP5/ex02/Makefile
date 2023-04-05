NAME	=	demo
SRCS	=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \

OBJS	=$(SRCS:.cpp=.o)
FLAGS	= -Wextra -Wall -Werror -std=c++98
CC		= c++
INCS	=.

.cpp.o :
		@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o} -I${INCS}

all		: $(NAME)

${NAME}	: ${OBJS}
		@${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	@echo delete : ${OBJS}
	@rm -rf $(OBJS)

fclean: clean
	@echo delete : ${NAME} *_shrubbery
	@rm -rf $(NAME)
	@rm -rf *_shrubbery

re: fclean all
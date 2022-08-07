NAME	=	form

CPP		=	c++ -Wall -Wextra -Werror -std=c++98
SRCS	=	Form.cpp Bureaucrat.cpp main.cpp 
OBJ		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

%.o		:	%.cpp Bureaucrat.hpp Form.hpp
			$(CPP) -c $< -o $@

$(NAME)	:	$(OBJ) MAKEFILE
			$(CPP) $(OBJ) -o $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

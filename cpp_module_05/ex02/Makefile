NAME	=	form

CPP		=	c++ -Wall -Wextra -Werror -std=c++98
SRCS_L	=	Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp main.cpp
SRCS	=	$(addprefix src/,$(SRCS_L))
INCS_L	=	PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp
INCS	=	$(addprefix inc/,$(INCS_L))
OBJ		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

%.o		:	%.cpp $(INCS)
			$(CPP) -c $< -o $@

$(NAME)	:	$(OBJ) MAKEFILE
			$(CPP) $(OBJ) -o $(NAME)

clean	:
			rm -f $(OBJ) *_shrubbery

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

NAME	=	animal

DIR_S	=	srcs
CPP		=	c++ -Wall -Wextra -Werror -std=c++98
SRCS_L	=	Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp
SRCS	=	$(addprefix srcs/,$(SRCS_L))
INCS_L	=	Dog.hpp Cat.hpp Animal.hpp Brain.hpp
INCS	=	$(addprefix incs/,$(INCS_L))
OBJ		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

%.o		:	%.cpp $(INCS)
			$(CPP) -c $< -o $@

$(NAME)	:	$(OBJ) MAKEFILE
			$(CPP) $(OBJ) -o $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

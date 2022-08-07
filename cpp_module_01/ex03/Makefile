NAME	=	humans

CPP		=	c++ -Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

%.o		:	%.cpp HumanA.hpp HumanB.hpp Weapon.hpp
			$(CPP) -c $< -o $@

$(NAME)	:	$(OBJ) MAKEFILE
			$(CPP) $(OBJ) -o $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

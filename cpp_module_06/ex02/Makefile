NAME	=	a.out

CPP		=	c++ -Wall -Wextra -Werror -std=c++98
SRCS	=	A.cpp C.cpp B.cpp Base.cpp main.cpp typeIdentifier.cpp
OBJ		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

%.o		:	%.cpp Base.hpp A.hpp C.hpp B.hpp typeIdentifier.hpp
			$(CPP) -c $< -o $@

$(NAME)	:	$(OBJ) MAKEFILE
			$(CPP) $(OBJ) -o $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

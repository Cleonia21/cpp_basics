#include <iostream>
#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "argv error" << std::endl;
		return (0);
	}

	std::string levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	std::string level = argv[1];
	std::transform(level.begin(), level.end(), level.begin(), tolower);
	int i = -1;
	while (++i < 4)
	{
		if (level == levels[i])
			break ;
	}
	if (i == 4)
		std::cout << "level error" << std::endl;
	while (i < 4)
	{
		karen.complain(levels[i]);
		i++;
	}
	
	return (0);
}
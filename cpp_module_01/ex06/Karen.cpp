#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*ptrs[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*(ptrs[i]))();
	}
}
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

void Karen::empty(void) {}

void Karen::complain(std::string level)
{
	void (Karen::*ptrs[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
		&Karen::empty
	};

	std::string levels[] = {
		"debug",
		"info",
		"warning",
		"error",
		"empty"
	};

	std::transform(level.begin(), level.end(), level.begin(), tolower);

	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	(this->*(ptrs[i]))();
}
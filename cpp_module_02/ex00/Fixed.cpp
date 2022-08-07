#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	this->value = copy.value;
}

int Fixed::getRawBits(void) const
{
	std::cout << "\e[0;32mgetRawBits called\e[0m" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "\e[0;32msetRawBits called\e[0m" << std::endl;
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	if (this != &assign)
		this->value = assign.value;

	return *this;
}

/*
$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
*/

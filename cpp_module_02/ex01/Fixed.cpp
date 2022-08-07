#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
	this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "\e[0;33mFloat Constructor called\e[0m" << std::endl;
	this->value = value * pow(2, this->fractional_bits);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	this->value = copy.value;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	if (this != &assign)
		this->value = assign.value;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &i)
{
	out << i.toFloat();
	return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)pow(2, this->fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> this->fractional_bits);
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

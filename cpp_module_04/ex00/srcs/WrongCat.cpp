#include "../incs/WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "ks-ks" << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	this->type = assign.type;
	return *this;
}


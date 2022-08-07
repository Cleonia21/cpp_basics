#include "../incs/Animal.hpp"

const std::string Animal::_className = "Animal";

Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of \e[0m" << this->_className << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of \e[0m" << this->_className << std::endl;
	this->type = copy.type;
}

void Animal::makeSound() const
{
	std::cout << "chirik-chiric" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal & Animal::operator=(const Animal &assign)
{
	std::cout << "\e[0;32mComparison operator called of \e[0m" << this->_className << std::endl;
	this->type = assign.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of \e[0m" << this->_className << std::endl;
}

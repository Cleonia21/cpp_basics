#include "../incs/Animal.hpp"

Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
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
	this->type = assign.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

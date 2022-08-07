#include "../incs/Dog.hpp"

// Constructors
Dog::Dog()
{
	this->type = "Dog";
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "gav-gav" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	this->type = assign.type;
	return *this;
}


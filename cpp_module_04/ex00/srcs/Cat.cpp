#include "../incs/Cat.hpp"

// Constructors
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "mey" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	this->type = assign.type;
	return *this;
}


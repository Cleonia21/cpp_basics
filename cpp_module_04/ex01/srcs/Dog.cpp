#include "../incs/Dog.hpp"

const std::string Dog::_className = "Dog";

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of \e[0m" << this->_className << std::endl;
	this->_brain = new Brain;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of \e[0m" << this->_className << std::endl;
	*this = copy;
}

void Dog::makeSound() const
{
	std::cout << "gav-gav" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of \e[0m" << this->_className << std::endl;
	delete this->_brain;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "\e[0;32Comparison operator called of \e[0m" << this->_className << std::endl;
	this->type = assign.type;
	*(this->_brain) = *(assign._brain);
	return *this;
}


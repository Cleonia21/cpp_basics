#include "../incs/Cat.hpp"

const std::string Cat::_className = "Cat";

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of \e[0m" << this->_className << std::endl;
	this->_brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of \e[0m" << this->_className << std::endl;
	*this = copy;
}

void Cat::makeSound() const
{
	std::cout << "mey" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of \e[0m" << this->_className << std::endl;
	delete this->_brain;
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	std::cout << "\e[0;32mComparison operator called of \e[0m" << this->_className << std::endl;
	this->type = assign.type;
	*(this->_brain) = *(assign._brain);
	return *this;
}

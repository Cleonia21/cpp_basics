#include "../incs/Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain. Adres: \e[0m" << this << std::endl;
	this->lenght = 100;
	this->ideas = new std::string[this->lenght];
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain. Adres: \e[0m" << this << std::endl;
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}

// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain. Adres: \e[0m" << this << std::endl;
	delete [] this->ideas;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	std::cout << "\e[0;32mComparison operator called of Brain. Adres: \e[0m" << this << std::endl;
	if (this != &assign)
	{
		for (int i = 0; i < this->lenght; i++)
			this->ideas[i] = assign.ideas[i];
	}
	return *this;
}


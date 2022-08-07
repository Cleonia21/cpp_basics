#include "../incs/AAnimal.hpp"

std::string AAnimal::getType() const
{
	return (this->type);
}

AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mDestructor called of \e[0m" << "AAnimal" << std::endl;
}

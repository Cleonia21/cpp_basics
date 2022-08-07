#include "../inc/PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm()
	: Form("Presidential pardon", 25, 5)
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("Presidential pardon", 25, 5)
{
	_target = target;
	std::cout << "\e[0;33mTarget Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
	*this = copy;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	chekToExecute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}

// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	std::cout << "\e[0;33mCopy operator called of PresidentialPardonForm\e[0m" << std::endl;
	this->_target = assign._target;
	return *this;
}

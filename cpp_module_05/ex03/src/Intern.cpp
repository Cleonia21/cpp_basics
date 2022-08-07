#include "../inc/Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
	(void) copy;
}

Form *Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string mas[3] = 
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	int i = 0;
	while (i < 3 && mas[i] != form_name)
		i++;

	const int result = i;
	switch (result)
	{
	case 0:
		return (new PresidentialPardonForm(form_target));
	case 1:
		return (new RobotomyRequestForm(form_target));
	case 2:
		return (new ShrubberyCreationForm(form_target));
	default:
		std::cout << "Form name not found :(" << std::endl;
	}
	return (NULL);
}

// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

// Operators
Intern & Intern::operator=(const Intern &assign)
{
	std::cout << "\e[0;33mCopy operator called of Intern\e[0m" << std::endl;
	(void) assign;
	return *this;
}


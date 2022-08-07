#include "../inc/RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequest", 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequest", 72, 45)
{
	_target = target;
	std::cout << "\e[0;33mTarget Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	*this = copy;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->chekToExecute(executor);
	std::cout << "A drop fell..." << std::endl;
	std::srand(time(0));
	if (std::rand() % 2)
	{
		std::cout << _target << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "the robotomy " << _target << " failed" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	std::cout << "\e[0;33mCopy operator called of RobotomyRequestForm\e[0m" << std::endl;
	this->_target = assign._target;
	return *this;
}


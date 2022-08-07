#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include <unistd.h>
#include <iostream>
#include <string>

void signing(Form &form, Bureaucrat &bureaucrat)
{
	std::cout	<< "\e[0;32m" << bureaucrat.getName()
				<< " wont signing " << form.getName() << "\e[0m" << std::endl;
	try
	{
		form.beSigned(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void executor(Form &form, Bureaucrat &bureaucrat)
{
	std::cout	<< "\e[0;32m" << bureaucrat.getName()
				<< " wont execute " << form.getName() << "\e[0m" << std::endl;
	try
	{
		form.execute(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	// Form a_form("A", 21, 42);

	Bureaucrat president("Medvedev", 1);
	Bureaucrat advisor("Zhirinovski", 10);
	Bureaucrat mayor("Sobianin", 50);

	std::cout	<< std::endl
				<< "Was created bureaucrats: " << std::endl
				<< "	" << president << std::endl
				<< "	" << advisor << std::endl
				<< "	" << mayor << std::endl << std::endl
				<< "||||||||||||||" << std::endl << std::endl;

	PresidentialPardonForm pardon("Evgeni");
	std::cout	<< "Was created form:" << std::endl
				<< pardon << std::endl << std::endl; 
	executor(pardon, mayor);
	signing(pardon, mayor);
	signing(pardon, president);
	executor(pardon, mayor);
	executor(pardon, advisor);
	executor(pardon, president);
	std::cout << std::endl << "|||||||||||||" << std::endl << std::endl;

	RobotomyRequestForm robotomy("ICoder");
	std::cout	<< "Was created form:" << std::endl
				<< robotomy << std::endl << std::endl;
	signing(robotomy, mayor);
	executor(robotomy, mayor);
	executor(robotomy, advisor);
	usleep(500000);
	executor(robotomy, advisor);
	usleep(500000);
	executor(robotomy, advisor);

	std::cout << std::endl << "|||||||||||||" << std::endl << std::endl;
	
	ShrubberyCreationForm shrubbery("Elki_palki");
	signing(shrubbery, president);
	executor(shrubbery, president);

	std::cout << "|||||||||||||" << std::endl << std::endl;

	mayor.executeForm(pardon);
	president.executeForm(pardon);

	std::cout << std::endl << "|||||||||||||" << std::endl << std::endl;
}

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"
#include <unistd.h>
#include <iostream>
#include <string>

int main(void)
{
	Intern pir;
	Form *form;
	Bureaucrat president("Pushkin", 1);

	pir.makeForm("123", "123");
	form = pir.makeForm("presidential pardon", "Dantes");
	form->beSigned(president);
	form->execute(president);
	delete form;
	form = pir.makeForm("robotomy request", "Mielafon");
	form->beSigned(president);
	form->execute(president);
	delete form;
	form = pir.makeForm("shrubbery creation", "Tatyana_Onegin_is_letter");
	form->beSigned(president);
	form->execute(president);
	delete form;
	return (0);
}

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form a_form("A", 21, 42);
	std::cout	<< "Was created form " << a_form << std::endl;

	Bureaucrat anton("Anton", 1);
	std::cout	<< "Was created bureaucrat " << anton << std::endl;

	a_form.beSigned(anton);

	anton.decrement_grade(20);
	a_form.beSigned(anton);

	anton.decrement_grade(100);
	try
	{
		a_form.beSigned(anton);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form b_form("b", 151, 1);
	}
	catch (...)
	{
		std::cout << "Creation form with not valid grade error\n";
	}
	try
	{
		Form c_form("c", -1, 1);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
}

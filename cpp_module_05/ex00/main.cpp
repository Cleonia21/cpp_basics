#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a;
	Bureaucrat b("b", 10);
	std::cout << "|||||||||||\n";

	std::cout << a.getGrade() << '\n';
	std::cout << a.getName() << '\n';

	std::cout << "|||||||||||\n";

	std::cout << b << '\n';

	std::cout << "|||||||||||\n";

	b.increment_grade(1);
	b.decrement_grade(2);
	std::cout << b << '\n';

	std::cout << "|||||||||||\n";
	try
	{
		Bureaucrat c("c", -1);
	}
	catch (...)
	{
		std::cout << "Creation Bureacrat with not valid grade error\n";
	}
	try
	{
		Bureaucrat d("d", 151);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
}
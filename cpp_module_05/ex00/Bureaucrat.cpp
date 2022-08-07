#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default")
{
	_grade = 1;
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "\e[0;33mGrade Constructor called of Bureaucrat\e[0m" << std::endl;
	if (grade < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException"); // 
	if (grade > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException"); //
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
	*this = copy;
}

void Bureaucrat::increment_grade(int value)
{
	if (_grade - value < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
	std::cout	<< "increment grade " << _grade <<
				" for " << value << " value, result: " << _grade - value << std::endl;
	_grade -= value;
}

void Bureaucrat::decrement_grade(int value)
{
	if (_grade + value > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	std::cout	<< "decrement grade " << _grade <<
				" for " << value << " value, result: " << _grade + value << std::endl;
	_grade += value;
}

std::string Bureaucrat::getName()
{
	return (_name);
}

int Bureaucrat::getGrade()
{
	return (_grade);
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}

// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	std::cout << "\e[0;33mCopy operator called of Bureaucrat\e[0m" << std::endl;
	_grade = assign._grade;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat & instance)
{
	ostr << instance.getName() << ", grade " << instance.getGrade();
	return ostr;
}

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default")
{
	_grade = 1;
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException"); // 
	if (grade > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException"); //
	_grade = grade;
	std::cout << "\e[0;33mGrade Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
	*this = copy;
}

void Bureaucrat::executeForm(Form const & form) const
{
	std::cout	<< "\e[0;32m" << this->getName()
				<< " wont execute " << form.getName() << "\e[0m" << std::endl;
	try
	{
		form.execute(*this);
	}
	catch(...)
	{
		std::cout	<< "I don't have enough influence" << std::endl;
	}
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

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::signForm(std::string form_name, bool form_flag)
{
	if (form_flag)
		std::cout << _name << " signed " << form_name << std::endl;
	else
		std::cout	<< _name << " couldn`t sign " << form_name
					<< " because it have " << _grade << " grade" << std::endl;
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

#include "Form.hpp"

// Constructors
Form::Form()
	: _name("default_form_name"), _requiredSign(1), _requiredAchieve(1)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
	_flag = false;
}

Form::Form(std::string name, int reSign, int reAchieve)
	: _name(name), _requiredSign(reSign), _requiredAchieve(reAchieve)
{
	std::cout << "\e[0;33mParam Constructor called of Form\e[0m" << std::endl;
	_flag = false;
	if (reSign < 1 || reAchieve < 1)
		throw std::runtime_error("Form::GradeTooHighException");
	if (reSign > 150 || reAchieve > 150)
		throw std::runtime_error("Form::GradeTooLowException");
}

Form::Form( Form const & src )
	: _name(src.getName()), _requiredSign(src.getRequiredSign()),
	_requiredAchieve(src.getRequiredAchieve()), _flag(src.getFlag())
{
	std::cout << "Copy constructor for Form called" << std::endl;
}

std::string Form::getName() const { return _name; }

bool Form::getFlag() const { return _flag; }

int Form::getRequiredSign() const { return _requiredSign; }

int Form::getRequiredAchieve() const { return _requiredAchieve; }

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _requiredSign)
		throw std::runtime_error("Form::GradeTooLowException");
	if (bureaucrat.getGrade() <= _requiredSign)
	{
		_flag = true;
		std::cout << "form " << _name << " be sign" << std::endl;
	}
}

// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

// Operators
Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

std::ostream	&operator<<( std::ostream &ostr, Form &instance )
{
	ostr	<< instance.getName() << " whis "
			<< instance.getRequiredAchieve() << " required achieve and "
			<< instance.getRequiredSign() << " required sign. "
			<< "Flag in pos " << instance.getFlag();
	return (ostr);
}


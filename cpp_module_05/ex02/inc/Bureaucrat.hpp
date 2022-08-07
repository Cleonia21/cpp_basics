#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		
		void signForm(std::string form_name, bool form_flag);
		std::string getName() const;
		int getGrade() const;
		void increment_grade(int value);
		void decrement_grade(int value);
		void executeForm(Form const & form) const;

		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
	private:
		const std::string _name;
		int	_grade;
};

std::ostream	&operator<<( std::ostream &ostr, Bureaucrat &instance );

#endif
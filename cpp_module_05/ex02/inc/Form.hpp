#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(std::string name, int reSign, int reAchieve);
		Form(const Form &copy);

		std::string getName() const;
		bool getFlag() const;
		int getRequiredSign() const;
		int getRequiredAchieve() const;
		void beSigned(Bureaucrat const &bureaucrat);
		
		virtual void execute(Bureaucrat const & executor) const = 0;

		// Destructor
		virtual ~Form() = 0;
		
		// Operators
		Form & operator=(const Form &assign);
	
	protected:
		void chekToExecute(Bureaucrat const &bureaucrat) const;
		std::string _target;
	private:
		const std::string _name;
		const int _requiredSign;
		const int _requiredAchieve;
		bool _flag;
};

std::ostream	&operator<<( std::ostream &ostr, Form &instance );

#endif
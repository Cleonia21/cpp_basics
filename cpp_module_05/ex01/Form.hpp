#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

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
		void beSigned(Bureaucrat &bureaucrat);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
	private:
		const std::string _name;
		const int _requiredSign;
		const int _requiredAchieve;
		bool _flag;
};

std::ostream	&operator<<( std::ostream &ostr, Form &instance );

#endif
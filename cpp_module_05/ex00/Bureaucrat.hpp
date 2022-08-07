#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		
		std::string getName();
		int getGrade();
		void increment_grade(int value);
		void decrement_grade(int value);

		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
	private:
		const std::string _name;
		int _grade;
};

std::ostream	&operator<<( std::ostream &ostr, Bureaucrat &instance );

#endif
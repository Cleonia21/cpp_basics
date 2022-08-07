#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		std::string *getIdeas();

		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
	private:
		std::string *ideas;
		int lenght;
};

#endif
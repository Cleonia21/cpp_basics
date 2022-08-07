#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		
		void makeSound() const;

		// Destructor
		~Dog();
		
		// Operators
		Dog & operator=(const Dog &assign);
		
	private:
		
};

#endif
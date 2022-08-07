#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		
		void makeSound() const;

		// Destructor
		~Cat(); 
		
		// Operators
		Cat & operator=(const Cat &assign);
		
	private:
		
};

#endif
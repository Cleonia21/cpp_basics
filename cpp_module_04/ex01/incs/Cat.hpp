#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		
		void makeSound() const;

		// Destructor
		virtual ~Cat(); 
		
		// Operators
		Cat & operator=(const Cat &assign);
		
	private:
		static const std::string _className;
		Brain *_brain;
};

#endif
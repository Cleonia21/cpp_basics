#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy); 

		Animal & operator=(const Animal &assign);

		virtual void makeSound() const;
		std::string getType() const;
		
		virtual ~Animal();
		
	protected:
		static const std::string _className;
		std::string type;
};

#endif
#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

		WrongAnimal & operator=(const WrongAnimal &assign);

		void makeSound() const;
		std::string getType() const;
		
		~WrongAnimal();
		
	protected:
		std::string type;
};

#endif
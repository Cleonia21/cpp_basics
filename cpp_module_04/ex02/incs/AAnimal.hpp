#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		virtual void makeSound() const = 0;
		std::string getType() const;
		
		virtual ~AAnimal();
		
	protected:
		static const std::string _className;
		std::string type;
};

#endif
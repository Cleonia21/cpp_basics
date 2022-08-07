#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B : public Base
{
	public:
		// Constructors
		B();
		B(const B &copy);

		void getName(void);
		
		// Destructor
		~B();
		
		// Operators
		B & operator=(const B &assign);
		
	private:
		
};

#endif
#ifndef TYPEIDENTIFIER_HPP
# define TYPEIDENTIFIER_HPP

# include <iostream>
# include <string>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class typeIdentifier
{
	public:
		// Constructors
		typeIdentifier();
		typeIdentifier(const typeIdentifier &copy);

		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
		
		// Destructor
		~typeIdentifier();
		
		// Operators
		typeIdentifier & operator=(const typeIdentifier &assign);
		
	private:
		
};

#endif
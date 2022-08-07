#include "C.hpp"

// Constructors
C::C()
{
	std::cout << "Whas created C\n";
}

C::C(const C &copy)
{
	(void) copy;
	
}

void C::getName(void)
{
	std::cout << "C\n";
}


// Destructor
C::~C()
{
	
}


// Operators
C & C::operator=(const C &assign)
{
	(void) assign;
	return *this;
}


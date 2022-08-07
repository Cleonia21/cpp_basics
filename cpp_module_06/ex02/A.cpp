#include "A.hpp"

// Constructors
A::A()
{
	std::cout << "Whas created A\n";
}

A::A(const A &copy)
{
	(void) copy;
	
}

void A::getName(void)
{
	std::cout << "A\n";
}

// Destructor
A::~A()
{
	
}


// Operators
A & A::operator=(const A &assign)
{
	(void) assign;
	return *this;
}


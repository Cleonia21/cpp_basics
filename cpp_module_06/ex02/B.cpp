#include "B.hpp"

// Constructors
B::B()
{
	std::cout << "Whas created B\n";
}

B::B(const B &copy)
{
	(void) copy;
	
}

void B::getName(void)
{
	std::cout << "B\n";
}

// Destructor
B::~B()
{
	
}


// Operators
B & B::operator=(const B &assign)
{
	(void) assign;
	return *this;
}


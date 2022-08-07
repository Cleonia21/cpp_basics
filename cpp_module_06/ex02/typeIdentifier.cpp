#include "typeIdentifier.hpp"

// Constructors
typeIdentifier::typeIdentifier()
{
	std::srand(time(0));
}

typeIdentifier::typeIdentifier(const typeIdentifier &copy)
{
	(void) copy;
}

Base * typeIdentifier::generate(void)
{
    int rnd = std::rand() % 100;
    if (rnd < 33)
        return (new A);
    else if (rnd < 66)
        return (new B);
    else
        return (new C);
}

void typeIdentifier::identify(Base* p)
{
    std::cout << "identify* - ";
    if (dynamic_cast<A*>(p))
        std::cout << "A";
    if (dynamic_cast<B*>(p))
        std::cout << "B";
    if (dynamic_cast<C*>(p))
        std::cout << "C";
    std::cout << '\n';
}

void typeIdentifier::identify(Base& p)
{
    std::cout << "identify& - ";
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A";
    }
    catch(...)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B";
    }
    catch(...)
    {
    }
    try
    {
       (void)dynamic_cast<C&>(p);
       std::cout << "C";
    }
    catch(...)
    {
    }
    std::cout << '\n';
}

// Destructor
typeIdentifier::~typeIdentifier()
{
    
}


// Operators
typeIdentifier & typeIdentifier::operator=(const typeIdentifier &assign)
{
	(void) assign;
	return *this;
}


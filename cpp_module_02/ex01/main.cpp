# include <iostream>
# include <string>
# include "Fixed.hpp"

int main( void )
{
    Fixed a; //Default Constructor called
    Fixed const b( 10 ); //Int Constructor called
    Fixed const c( 42.42f ); //Float Constructor called
    Fixed const d( b ); //Copy Constructor called 

    a = Fixed( 1234.4321f );    //Copy assignment operator called 
                                //Float constructor called

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;

    return 0;
}
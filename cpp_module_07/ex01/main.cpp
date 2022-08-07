#include <iostream>
#include "iter.h"

class Awesome {
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
    std::string strs [] = 
    {
        "1",
        "2",
        "3",
        "4",
        "5"
    };

    int nums [] =
    {
        1,
        2,
        3,
        4,
        5
    };

    Awesome tab[5];

    ::iter(strs, 5, print );
    std::cout << "||||||||||||||\n";
    ::iter(nums, 5, print );
    std::cout << "||||||||||||||\n";
	::iter( tab, 5, print );

	return 0;
}

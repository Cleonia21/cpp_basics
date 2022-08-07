#ifndef TEMPLATE_H
#define TEMPLATE_H


template<typename TypeSwap>
void swap(TypeSwap &a, TypeSwap &b)
{
    TypeSwap tmp = a;
    a = b;
    b = tmp;
}

template<typename TypeMin>
TypeMin min(TypeMin a, TypeMin b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename TypeMax>
TypeMax max(TypeMax a, TypeMax b)
{
    if (a > b)
        return (a);
    return (b);
}

class Awesome 
{
private:
	int _n;

public:
	Awesome():_n(0){}
	Awesome( int n ) : _n( n ) {}

	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

	int	getN() const { return (this->_n); }
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.getN(); return (o); }

#endif

#include "Fixed.hpp"

Fixed::Fixed() { this->value = 0; }

Fixed::Fixed(const int value){ this->value = value << fractional_bits; }

Fixed::Fixed(const float value){ this->value = value * pow(2, this->fractional_bits); }

Fixed::Fixed(const Fixed &copy){ this->value = copy.value; }

Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		this->value = assign.value;
	return *this;
}

float Fixed::toFloat(void) const{ return ((float)this->value / (float)pow(2, this->fractional_bits));}

int Fixed::toInt(void) const{ return (this->value >> this->fractional_bits); }

int Fixed::getRawBits(void) const { return (this->value); }

void Fixed::setRawBits(int const raw) { this->value = raw; }

Fixed::~Fixed() {}

std::ostream& operator<<(std::ostream &out, const Fixed &i)
{
	out << i.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &a) const { return (this->value > a.value); }
bool Fixed::operator<(const Fixed &a) const { return (this->value < a.value); }
bool Fixed::operator>=(const Fixed &a) const { return (this->value >= a.value); }
bool Fixed::operator<=(const Fixed &a) const { return (this->value <= a.value); }
bool Fixed::operator==(const Fixed &a) const { return (this->value == a.value); }
bool Fixed::operator!=(const Fixed &a) const { return (this->value != a.value); }

Fixed Fixed::operator+(const Fixed &a) const
{
	Fixed n;

	n.setRawBits(this->value + a.value);
	return (n);
}

Fixed Fixed::operator-(const Fixed &a) const
{
	Fixed n;

	n.setRawBits(this->value - a.value);
	return (n);
}

Fixed Fixed::operator*(const Fixed &a) const
{
	Fixed n;

	n.setRawBits((this->value * a.value) >> this->fractional_bits);
	return (n);
}

Fixed Fixed::operator/(const Fixed &a) const
{
	Fixed n;

	n.setRawBits((this->value << this->fractional_bits) / a.value);
	return (n);
}

Fixed & Fixed::operator++(void)
{
	this->value += 1 << this->fractional_bits;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->value += 1 << this->fractional_bits;
	return (temp);
}

Fixed & Fixed::operator--(void)
{
	this->value -= 1 << this->fractional_bits;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->value -= 1 << this->fractional_bits;
	return (temp);
}

Fixed Fixed::min(Fixed &a, Fixed &b) { return (a < b ? a : b); }
Fixed Fixed::min(Fixed const &a, Fixed const &b) { return (a < b ? a : b); }
Fixed Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }
Fixed Fixed::max(Fixed const &a, Fixed const &b) { return (a > b ? a : b); }

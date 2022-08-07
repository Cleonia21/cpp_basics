#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);

		float toFloat(void) const;
		int toInt(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);

		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);

		bool operator>(const Fixed &a) const;
		bool operator<(const Fixed &a) const;
		bool operator>=(const Fixed &a) const;
		bool operator<=(const Fixed &a) const;
		bool operator==(const Fixed &a) const;
		bool operator!=(const Fixed &a) const;

		Fixed operator+(const Fixed &a) const;
		Fixed operator-(const Fixed &a) const;
		Fixed operator*(const Fixed &a) const;
		Fixed operator/(const Fixed &a) const;

		Fixed & operator++(void);
		Fixed operator++(int i);
		Fixed & operator--(void);
		Fixed operator--(int i);

		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(Fixed const &a, Fixed const &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(Fixed const &a, Fixed const &b);
		
	private:
		int value;
		static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &i);

#endif
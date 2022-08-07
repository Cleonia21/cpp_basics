#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);
		
	private:
		int value;
		static const int fractional_bits = 8;
};

#endif
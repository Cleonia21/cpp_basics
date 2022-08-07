#ifndef TYPECONVERTER_HPP
# define TYPECONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>

enum e_from
{
	FROM_INT = 0,
	FROM_CHAR,
	FROM_DOUBLE,
	FROM_FLOAT,
	FROM_OVERFLOW,
	FROM_INVALID
};

class TypeConverter
{
	public:
		// Constructors
		TypeConverter();
		TypeConverter(const TypeConverter &copy);
		
		void convertStr(char *str);

		// Destructor
		~TypeConverter();
		
		// Operators
		TypeConverter & operator=(const TypeConverter &assign);
		
	private:
		int getOriginalType(char *str);

		char	_inChar;
		int		_inInt;
		double	_inDouble;
		float	_inFloat;

		int		_fromFlag;
		bool	_impossibleFlag;
};

#endif
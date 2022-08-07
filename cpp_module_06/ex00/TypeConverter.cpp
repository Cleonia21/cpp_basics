#include "TypeConverter.hpp"

// Constructors
TypeConverter::TypeConverter()
{
	_fromFlag = -1;
	_impossibleFlag = false;
}

void TypeConverter::convertStr(char *str)
{
	_fromFlag = getOriginalType(str);
	if (_fromFlag == FROM_CHAR)
	{
		std::cout	<< "char:   " << _inChar << std::endl
					<< "int:    " << (int)_inChar << std::endl
					<< "float:  " << (float)_inChar << ".0f" << std::endl
					<< "double: " << (double)_inChar << ".0" << std::endl;
	}
	if (_fromFlag == FROM_INT)
	{
		// char
		if (!isascii(_inInt))
			std::cout	<< "char:   " << "overflows" << std::endl;
		else if (isprint(_inInt) && _inInt != ' ')
			std::cout	<< "char:   " << static_cast<char>(_inInt) << std::endl;
		else
			std::cout	<< "char:   " << "Non displayable" << std::endl;
		// int
		std::cout		<< "int:    " << _inInt << std::endl;
		// float
		if ((float)_inInt > 999999.5f)
			std::cout	<< "float:  " << static_cast<float>(_inInt) << "f" << std::endl
						<< "double: " << (double)_inInt << std::endl;
		else
			std::cout	<< "float:  " << static_cast<float>(_inInt) << ".0f" << std::endl
						<< "double: " << (double)_inInt << ".0" << std::endl;
	}
	if (_fromFlag == FROM_FLOAT)
	{
		//char
		if (_impossibleFlag)
			std::cout	<< "char:   " << "impossible" << std::endl;
		else if (_inFloat > SCHAR_MAX || _inFloat < SCHAR_MIN)
			std::cout	<< "char:   " << "overflows" << std::endl;
		else if (isprint(static_cast<int>(_inFloat)) && static_cast<int>(_inFloat) != ' ')
			std::cout	<< "char:   " << static_cast<char>(_inFloat) << std::endl;
		else
			std::cout	<< "char:   " << "Non displayable" << std::endl;
		//int
		if (_impossibleFlag)
			std::cout	<< "int:    " << "impossible" << std::endl;
		else if (_inFloat < static_cast<float>(INT_MIN) || _inFloat > static_cast<float>(INT_MAX))
			std::cout	<< "int:    " << "overflows" << std::endl;
		else
			std::cout	<< "int:    " << static_cast<int>(_inFloat) << std::endl;
		//
		if (_inFloat == 0.0f)
			std::cout		<< "float   " << _inFloat << ".0f" << std::endl
							<< "double  " << (double)_inFloat << ".0" << std::endl;
		else
			std::cout		<< "float   " << _inFloat << "f" << std::endl
							<< "double  " << (double)_inFloat << "" << std::endl;
	}
	if (_fromFlag == FROM_DOUBLE)
	{
		//char
		if (_impossibleFlag)
			std::cout	<< "char:   " << "impossible" << std::endl;
		else if (_inDouble > SCHAR_MAX || _inDouble < SCHAR_MIN)
			std::cout	<< "char:   " << "overflows" << std::endl;
		else if (isprint(static_cast<int>(_inDouble)) && static_cast<int>(_inDouble) != ' ')
			std::cout	<< "char:   " << static_cast<char>(_inDouble) << std::endl;
		else
			std::cout	<< "char:   " << "Non displayable" << std::endl;
		//int
		if (_impossibleFlag)
			std::cout	<< "int:    " << "impossible" << std::endl;
		else if (_inDouble < INT_MIN || _inDouble > INT_MAX)
			std::cout	<< "int:    " << "overflows" << std::endl;
		else
			std::cout	<< "int:    " << static_cast<int>(_inDouble) << std::endl;
		//float
		if (_inDouble == 1.0 / 0.0)
			std::cout	<< "float:  inff" << std::endl;
		else if (_inDouble == -1.0 / 0.0)
			std::cout	<< "float:  -inff" << std::endl;
		else if (_impossibleFlag)
			std::cout	<< "float:  nanf" << std::endl;
		else if (_inDouble == 0.0)
			std::cout	<< "float:  " << static_cast<float>(_inDouble) << ".0" << "f" << std::endl;
		else if (_inDouble > -std::numeric_limits<float>::max()
			&& _inDouble < std::numeric_limits<float>::max())
			std::cout	<< "float:  " << static_cast<float>(_inDouble) << "f" << std::endl;
		else
			std::cout	<< "float:  " << "overflows" << std::endl;
		//
		if (_inDouble == 0.0)
			std::cout		<< "double: " << _inDouble << ".0" << std::endl;
		else
			std::cout		<< "double: " << _inDouble << std::endl;
	}
	if (_fromFlag == FROM_INVALID)
		std::cout	<< "invalid input" << std::endl;
	if (_fromFlag == FROM_OVERFLOW)
		std::cout	<< "input overflow" << std::endl;
}

int TypeConverter::getOriginalType(char *str)
{
	if (!str)
		return (FROM_INVALID);

	std::string nf [] =
	{
		"inf",
		"+inf",
		"-inf",
		"nan"
	};
	if (nf[0] == str || nf[1] == str)
	{
		_inDouble = 1.0 / 0.0;
		_impossibleFlag = true;
		return (FROM_DOUBLE);
	}
	if (nf[2] == str)
	{
		_inDouble = -1.0 / 0.0;
		_impossibleFlag = true;
		return (FROM_DOUBLE);
	}
	if (nf[3] == str)
	{
		_inDouble = 0.0 / 0.0;
		_impossibleFlag = true;
		return (FROM_DOUBLE);
	}

	std::string nff [] =
	{
		"inff",
		"+inff",
		"-inff",
		"nanf"
	};
	if (nff[0] == str || nff[1] == str)
	{
		_inFloat = 1.0 / 0.0;
		_impossibleFlag = true;
		return (FROM_FLOAT);
	}
	if (nff[2] == str)
	{
		_inFloat = -1.0 / 0.0;
		_impossibleFlag = true;
		return (FROM_FLOAT);
	}
	if (nff[3] == str)
	{
		_inFloat = 0.0 / 0.0;
		_impossibleFlag = true;
		return (FROM_FLOAT);
	}
	
	if (!isdigit(*str) && !(*str == '-' && isdigit(*(str + 1))))
	{
		if (*(str + 1) != '\0')
			return (FROM_INVALID);
		if (isprint(*str) == 0 || *str == ' ')
			return (FROM_INVALID);
		_inChar = *str;
		return (FROM_CHAR);
	}
	int i = 0;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] == '\0')
	{
		try
		{
			_inInt = std::stoi(str, NULL, 10);
		}
		catch(const std::exception& e)
		{
			return (FROM_OVERFLOW);
		}
		return (FROM_INT);
	}
	if (str[i] == '.')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] == '\0')
	{
		try
		{
			_inDouble = std::stod(str, NULL);
		}
		catch(const std::exception& e)
		{
			return (FROM_OVERFLOW);
		}
		return (FROM_DOUBLE);
	}
	if (str[i] == 'f' && str[i + 1] == '\0')
	{
		try
		{
			_inFloat = std::stof(str, NULL);
		}
		catch(const std::exception& e)
		{
			return (FROM_OVERFLOW);
		}
		return (FROM_FLOAT);
	}
	return (FROM_INVALID);
}

TypeConverter::TypeConverter(const TypeConverter &copy)
{
	(void) copy;
}

// Destructor
TypeConverter::~TypeConverter()
{
	
}

// Operators
TypeConverter & TypeConverter::operator=(const TypeConverter &assign)
{
	(void) assign;
	return *this;
}


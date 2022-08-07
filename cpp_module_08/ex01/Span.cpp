#include "Span.hpp"

// Constructors
Span::Span()
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(unsigned int _N) : N(_N)
{
	std::cout << "\e[0;33mParam Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
	(void) copy;
}

void Span::addNumber(int num)
{
	// std::cout << "addNumber function from Span colled" << std::endl;
	if (N > array.size())
		array.push_back(num);
	else
		throw std::runtime_error("Span:StoredMaximumNumberOfItems");
}

int Span::shortestSpan( void )
{
	if (array.size() < 2)
		throw std::runtime_error("Span:RangeCannotBeFound");
	std::sort(array.begin(), array.end());
	int min = abs(array[0] - array[1]);
	for (unsigned int i = 1; i < array.size() - 1; i++)
	{
		if (abs(array[i] - array[i + 1]) < min)
			min = abs(array[i] - array[i + 1]);
	}
	return (min);
}

int Span::longestSpan( void )
{
	if (array.size() < 2)
		throw std::runtime_error("Span:RangeCannotBeFound");
	int maxElem = *std::max_element(array.begin(), array.end());
	int minElem = *std::min_element(array.begin(), array.end());
	if (minElem > -1 || maxElem < 0)
		return (maxElem - minElem);
	if (INT_MAX - maxElem < -minElem)
		std::cout	<< "distance overflow type int (min/max) "
					<< minElem << "/" << maxElem << std::endl;
	return (maxElem - minElem);
}

void	Span::addByIteratorRange(std::vector<int> newArray)
{
	if (array.size() + newArray.size() > N)
		throw std::runtime_error("Span:StoredMaximumNumberOfItems");
	std::copy(newArray.begin(), newArray.end(), std::back_inserter(array));
	std::cout << "Range of iterators successfully added" << std::endl;
}

std::vector<int> Span::getArray( void )
{
	return (this->array);
}

unsigned int Span::getArrayLen(void)
{
	return (array.size());
}

// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}


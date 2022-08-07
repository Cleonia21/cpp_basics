#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <math.h>

class Span
{
	public:
		// Constructors
		Span();
		Span(unsigned int _N);
		Span(const Span &copy);

		void addNumber(int num);
		int shortestSpan( void );
		int longestSpan( void );
		void addByIteratorRange(std::vector<int> newArray);
		std::vector<int> getArray( void );

		unsigned int getArrayLen(void);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		
	private:
		unsigned int N;
		std::vector<int> array;
};

#endif
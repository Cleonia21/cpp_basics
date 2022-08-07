#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		// Constructors
		Array<T>(): _size(0), _mas(NULL)
		{
			std::cout << "Default constructor colled\n";
		}
		Array<T>(unsigned int n): _size(n)
		{
			std::cout << "Param constructor colled\n";
			if (_size < 0)
				throw std::overflow_error("Index out of bounds");
			if (_size > 0)
				_mas = new T[_size];
			else
				_mas = NULL;
		}
		Array<T>(const Array<T> &copy)
		{
			std::cout << "Copy operator colled\n";
			*this = copy;
		}

		unsigned int size(void) const
		{
			return (this->_size);
		}
		
		// Destructor
		~Array<T>()
		{
			std::cout << "Destructor colled\n";
			if (this->_size > 0)
				delete [] this->_mas;
		}
		
		// Operators
		Array<T> & operator=(const Array<T> &assign)
		{
			std::cout << "Assign operator colled\n";
			if (this == &assign)
				return (*this);
			if (this->_size > 0)
				delete [] this->_mas;
			this->_size = assign._size;
			if (this->_size == 0)
				this->_mas = NULL;
			else
			{
				this->_mas = new T[this->_size];
				for (int i = 0; i < this->_size; i++)
					this->_mas[i] = assign._mas[i];
			}
			return (*this);
		}

		T &operator[](int idx) const
		{
			if (idx >= this->_size || idx < 0)
				throw std::overflow_error("Array::Index out of bounds");
			return this->_mas[idx];
		}
		
	private:
		int _size;
		T *_mas;
};

#endif
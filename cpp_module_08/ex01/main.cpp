#include <iostream>
#include <vector>
#include <list>
#include "Span.hpp"

#define N 100

int main()
{
    Span _span(N);
    std::vector<int> _vector;
    std::srand(time(NULL));

    int num;
    for (int i = 0; i < N; i++)
    {
        num = std::rand();
        if (i % 2)
            num = -num;
        _span.addNumber(num);
        _vector.push_back(num);
    }
    std::cout << "Len: " << _span.getArrayLen() << "/" << _vector.size() << std::endl;
    std::cout << "Longest span: " << _span.longestSpan() << std::endl;
    std::cout << "Shortest span: " << _span.shortestSpan() << std::endl << std::endl;

    Span a(N);

    for (int i = 0; i < N; i++)
        a.addNumber(i);
    std::cout << "Longest span: " << a.longestSpan() << std::endl;
    std::cout << "Shortest span: " << a.shortestSpan() << std::endl;

    std::vector<int> buf;
    buf = a.getArray();
    std::cout << "Span a:" << std::endl;
    for (unsigned int i = 0; i < buf.size(); i++)
        std::cout << buf[i] << " ";
    std::cout << std::endl;
    
    buf = _vector;
    std::cout << "_vector:" << std::endl;
    for (unsigned int i = 0; i < buf.size(); i++)
        std::cout << buf[i] << " ";
    std::cout << std::endl;

    Span b(N * 2);
    b.addByIteratorRange(a.getArray());
    b.addByIteratorRange(_vector);
    buf = b.getArray();
    std::cout << "Span b after add iterator range:" << std::endl;
    for (unsigned int i = 0; i < buf.size(); i++)
        std::cout << buf[i] << " ";
    std::cout << std::endl;
}
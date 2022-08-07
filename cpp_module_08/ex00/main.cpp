#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int>    myVector;
    std::list<int>     myList;

    for (int i = 0; i < 10; i++)
    {
        myVector.push_back(i);
        myList.push_back(i * i);
    }
    std::cout << "VECTOR" << std::endl;
    std::cout << "find 2:" << std::endl;
    std::cout << *easyfind(myVector, 2) << std::endl;
    std::cout << "find -1:" << std::endl;
    try
    {
        std::cout << *easyfind(myVector, -1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "find 20:" << std::endl;
    try
    {
        std::cout << *easyfind(myVector, 20) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "LIST" << std::endl;
    
    std::cout << "find 81:" << std::endl;
    std::cout << *easyfind(myList, 81) << std::endl;
    std::cout << "find 100:" << std::endl;
    try
    {
        std::cout << *easyfind(myList, 100) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "find -1:" << std::endl;
    try
    {
        std::cout << *easyfind(myList, -1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
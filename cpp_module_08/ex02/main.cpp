#include <iostream>
#include <list>
#include <vector>
#include "MutantStack.hpp"

void ft_vector(void)
{   
    std::vector<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << mstack.back() << std::endl;
    
    mstack.pop_back();

    std::cout << mstack.size() << std::endl;

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    std::vector<int>::iterator it = mstack.begin();
    std::vector<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "- " << *it << std::endl;
        ++it; 
    }
}

void ft_mstack( void )
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "- " << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack);
}

int main()
{
    std::cout << "MUTANT STACK" << std::endl;
    ft_mstack();
    std::cout << "VECTOR" << std::endl;
    ft_vector();
    return 0;
}
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> 
#include <exception>

template<typename T>
typename T::iterator easyfind(T &elem, int znch)
{
    typename T::iterator result;

    result = find(elem.begin(), elem.end(), znch);
    if (result == elem.end())
        throw std::logic_error("easyfind: znch not fond");
    return (result);
}

#endif
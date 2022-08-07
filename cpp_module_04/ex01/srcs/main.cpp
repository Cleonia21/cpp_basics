#include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"

int main()
{
    int size = 2;
    Animal** meta = new Animal* [size];

    for (int i = 0; i <= size / 2; i += 2)
    {
        meta[i] = new Cat();
        meta[i + 1] = new Dog();
    }

    std::cout << "||||||||||||||" << std::endl;

    for (int i = 0; i < size; i++)
        delete meta[i];
    delete [] meta;

    std::cout << "||||||||||||||" << std::endl;

    Cat a;
    std::cout << "'a' created" << std::endl;
    {
        Cat b;
        b = a;
    }

    return (0);
}

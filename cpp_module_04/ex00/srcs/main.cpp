#include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    k->makeSound();
    meta2->makeSound();

    delete meta2;
    delete k;

    return (0);
}
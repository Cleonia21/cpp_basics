#include <string>
#include <iostream>
#include <iomanip>
#include "book.hpp"

Book::Book()
{
    contacts_num = 0;
}

void Book::add_contact(Contact contact)
{
    if (contacts_num == size)
    {
        for (int i = 0; i < size - 1; i++)
            contacts[i] = contacts[i + 1];
        contacts[size - 1] = contact;
    }
    else
    {
        contacts[contacts_num] = contact;
        contacts_num++;
    }
}

void Book::print_book()
{
    for (int i = 0; i < contacts_num; i++)
    {
        std::cout << std::setw(10) << i << "|";
        contacts[i].print();
    }
    std::cout << std::endl;
}

void Book::print_contact(int index)
{
    if (index < 0 || index > contacts_num - 1 || contacts_num == 0)
        std::cout << "error" << std::endl;
    else
        contacts[index].print_all();
}

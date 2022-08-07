#ifndef BOOK_HPP
#define BOOK_HPP

#include "contact.hpp"

class Book
{
private:
    static const int size = 8;
    Contact contacts[size];
    int contacts_num;
public:
    Book();
    void add_contact(Contact contact);
    void print_book();
    void print_contact(int);
};

#endif

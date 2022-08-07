#include <string>
#include <iostream>
#include <iomanip>
#include "book.hpp"

std::string print_and_return(std::string print_str)
{
    std::string val;

    std::cout << print_str << ": " << std::endl;
    std::cin >> val;
    return (val);
}

int main()
{
    bool exit = false;
    std::string val;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    Book book;
    int index;

    while(!exit)
    {
        std::cout << "EXIT(1) | ADD(2) | SEARCH(3)" << std::endl;
        std::cin >> val;
        if (val == "1" || val == "EXIT")
            exit = true;
        else if (val == "2" || val == "ADD")
        {
            first_name = print_and_return("first name");
            last_name = print_and_return("last name");
            nickname = print_and_return("nickname");
            phone_number = print_and_return("phone number");
            darkest_secret = print_and_return("darkest secret");
            book.add_contact(Contact(first_name, last_name, nickname, phone_number, darkest_secret));
        }
        else if (val == "3" || val == "SEARCH")
        {
            book.print_book();
            std::cout << "write index: ";
            std::cin >> index;
            if (!std::cin)
            {
                std::cout << "you write not a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                continue;
            }
            book.print_contact(index);
        }
    }
    return (0);
}

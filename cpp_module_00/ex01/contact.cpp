#include <string>
#include <iostream>
#include <iomanip>
#include "contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void Contact::print()
{
    print_column(first_name, "|");
    print_column(last_name, "|");
    print_column(nickname, "\n");
}

void Contact::print_all()
{
    std::cout << "first name: " << first_name << std::endl;
    std::cout << "last name: " << last_name << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "phone number: " << phone_number << std::endl;
    std::cout << "darkest secret: " << darkest_secret << std::endl << std::endl;
}

void Contact::print_column(std::string str, std::string last_sumbol)
{
    if (str.length() <= 10)
        std::cout << std::setw(10) << str << last_sumbol;
    else
        std::cout << str.substr(0, 9) << "." << last_sumbol;
}

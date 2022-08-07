#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact();
    Contact(std::string, std::string, std::string, std::string, std::string);
    void print();
    void print_all();
private:
    void print_column(std::string, std::string);
};

#endif

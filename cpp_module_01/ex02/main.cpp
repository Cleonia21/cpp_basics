#include <string>
#include <iomanip>
#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout   << "memory address string    " << &string << std::endl
                << "memory address stringPTR " << &stringPTR << std::endl
                << "memory address stringREF " << &stringREF << std::endl
                << std::endl;
            
    std::cout   << "value          string    " << string << std::endl
                << "value          stringPTR " << *stringPTR << std::endl
                << "value          stringREF " << stringREF << std::endl;
    return (0);
}

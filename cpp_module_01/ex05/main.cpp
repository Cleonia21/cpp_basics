#include <iostream>
#include "Karen.hpp"

int main(void)
{
	Karen karen;

	std::cout << "call without a level:" << std::endl;
	karen.complain("");
	std::cout << "---" << std::endl;
	std::cout << "call with empty level:" << std::endl;
	karen.complain("nothing");
	std::cout << "---" << std::endl;
	std::cout << "call with debug level:" << std::endl;
	karen.complain("debug");
	std::cout << "---" << std::endl;
	std::cout << "call with info level:" << std::endl;
	karen.complain("info");
	std::cout << "---" << std::endl;
	std::cout << "call with warning level:" << std::endl;
	karen.complain("warning");
	std::cout << "---" << std::endl;
	std::cout << "call with error level:" << std::endl;
	karen.complain("error");
	std::cout << "---" << std::endl;
	return (0);
}
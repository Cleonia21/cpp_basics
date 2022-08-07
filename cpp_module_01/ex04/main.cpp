#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

std::string replace(char **argv, std::string line)
{
	std::string	new_line;
	size_t		i;
	size_t		j;

	i = 0;
	while (i < line.length())
	{
		j = line.find(argv[2], i);
		new_line += line.substr(i, j - i);
		if (j == (size_t)-1)
			return (new_line);
		new_line += argv[3];
		i = j + std::strlen(argv[2]);
	}
	return (new_line);
}

int ft_error(std::string message)
{
	std::cout << message << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error("argv error"));

	std::string		in_file = argv[1];

	std::ifstream	fin(in_file);
	if (!fin)
		return (ft_error("open file error"));

	std::ofstream	fout(in_file + ".replace");
	if (!fout)
		return (ft_error("open file error"));

	std::string line;
	while (std::getline(fin, line))
		fout << replace(argv, line) << std::endl;
	return (0);
}

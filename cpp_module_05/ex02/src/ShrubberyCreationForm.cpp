#include "../inc/ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("Shrubbery creation", 145, 137)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery creation", 145, 137)
{
	_target = target;
	std::cout << "\e[0;33mTarget Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	*this = copy;
}

/*
 			***
            *****
           *****~~
            **~~~
           *~~~***
          ~~~******
         ~~*********
        *************
         ***********
        *************
       ***************
      *@***************
     ***@************@**
    *@****************@**
      @****************
     *******************
    *****@***************
   ***********************
  ********@****************
 *****************@*********
*****************************
            |||||
            |||||   _8_8_
            |||||  |  |  |_8_
            |||||  |__|__|___|
*/

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->chekToExecute(executor);
	std::ofstream fout(_target + "_shrubbery");
	try
	{
		fout << "              *              " << std::endl;
		fout << "             ***             " << std::endl;
		fout << "            *****            " << std::endl;
		fout << "           *******           " << std::endl;
		fout << "          *********          " << std::endl;
		fout << "         ***********         " << std::endl;
		fout << "        *************        " << std::endl;
		fout << "       ***************       " << std::endl;
		fout << "      *****************      " << std::endl;
		fout << "     *******************     " << std::endl;
 		fout << "    *********************    " << std::endl;
		fout << "   ***********************   " << std::endl;
		fout << "  *************************  " << std::endl;
		fout << " *************************** " << std::endl;
		fout << "*****************************";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	std::cout << "\e[0;33mEquation operator called of ShrubberyCreationForm\e[0m" << std::endl;
	this->_target = assign._target;
	return *this;
}


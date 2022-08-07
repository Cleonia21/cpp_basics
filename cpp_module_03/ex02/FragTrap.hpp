#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	    FragTrap(void);
	    FragTrap(std::string name);
	    FragTrap(const FragTrap &copy);

	    ~FragTrap();

		void highFivesGuys(void);
};

#endif
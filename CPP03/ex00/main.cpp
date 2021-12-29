#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap trap1;
	ClapTrap trap2("Valera");
	std::cout << "*****************************************************" << std::endl;
	trap1.attack("the king");
	trap2.attack("the zombies");
	std::cout << "*****************************************************" << std::endl;
	trap1.takeDamage(6);
	std::cout << "*****************************************************" << std::endl;
	trap2.beRepaired(6);
	std::cout << "*****************************************************" << std::endl;
	return 0;
}
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap trap1;
	ClapTrap trap2("Valera");
	ScavTrap trap3;
	ScavTrap trap4("Pavel");
	std::cout << "*****************************************************" << std::endl;
	trap1.attack("the king");
	trap2.attack("the zombies");
	trap3.attack("the king");
	trap4.attack("the zombies");
	std::cout << "*****************************************************" << std::endl;
	trap1.takeDamage(5);
	trap3.takeDamage(110);
	std::cout << "*****************************************************" << std::endl;
	trap2.beRepaired(6);
	trap4.beRepaired(8);
	std::cout << "*****************************************************" << std::endl;
	trap4.guardGate();
	trap3.guardGate();
	std::cout << "*****************************************************" << std::endl;
	return 0;
}
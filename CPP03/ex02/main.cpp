#include "FragTrap.hpp"

int main(void)
{
	ClapTrap trap1("Valera");
	ScavTrap trap2("Scavik");
	FragTrap trap3("Pavel");
	std::cout << "*****************************************************" << std::endl;
	trap1.attack("the king");
	trap2.attack("the zombies");
	trap3.attack("the king");
	std::cout << "*****************************************************" << std::endl;
	trap1.takeDamage(5);
	trap2.takeDamage(110);
	trap3.takeDamage(500);
	std::cout << "*****************************************************" << std::endl;
	trap1.beRepaired(6);
	trap2.beRepaired(8);
	trap3.beRepaired(50);
	std::cout << "*****************************************************" << std::endl;
	trap2.guardGate();
	trap3.highFivesGuys();
	std::cout << "*****************************************************" << std::endl;

	return 0;
}
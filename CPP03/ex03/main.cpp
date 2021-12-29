#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");
	DiamondTrap Diamond("Diamond");
	std::cout << "*****************************************************" << std::endl;
	Clap.attack("the king");
	Scav.attack("the zombies");
	Frag.attack("the king");
	Diamond.attack("cat");
	std::cout << "*****************************************************" << std::endl;
	Clap.takeDamage(5);
	Scav.takeDamage(110);
	Frag.takeDamage(500);
	Diamond.takeDamage(596);
	std::cout << "*****************************************************" << std::endl;
	Clap.beRepaired(6);
	Scav.beRepaired(8);
	Frag.beRepaired(50);
	Diamond.beRepaired(32);
	std::cout << "*****************************************************" << std::endl;
	Scav.guardGate();
	Frag.highFivesGuys();
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();
	std::cout << "*****************************************************" << std::endl;

	return 0;
}
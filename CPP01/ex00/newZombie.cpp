#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	if (!zombie)
	{
		std::cout << "memory allocation error" << std::endl;
		exit(1);
	}
	return (zombie);
}
#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Lana");// на куче
	zombie->announce();
	delete zombie;
	randomChump("BOBI"); // на стеке
	return (0);
}
#include "Zombie.hpp"

Zombie::Zombie(std::string zomb_name) : name(zomb_name)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> Destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
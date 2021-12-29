#include "Zombie.hpp"

Zombie::Zombie() : name("Paris")
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

void Zombie::setName(std::string name)
{
	this->name = name;
}

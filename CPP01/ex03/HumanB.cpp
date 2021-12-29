#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), Weap(NULL) {}

HumanB::~HumanB() {}

std::string HumanB::getName()
{
	return (_name);
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &Weap)
{
	this->Weap = &Weap;
}

void HumanB::attack()
{
	if (this->Weap == NULL)
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " <<
	this->Weap->getType() << std::endl;
}
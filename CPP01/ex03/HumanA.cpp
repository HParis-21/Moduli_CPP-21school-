#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weap) : _name(name), Weap(Weap) {}

HumanA::~HumanA() {}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string HumanA::getName()
{
	return (_name);
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " <<
	this->Weap.getType() << std::endl;
}